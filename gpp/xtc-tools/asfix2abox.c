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
ATerm term_d_30;
ATerm term_n_29;
ATerm term_z_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_27;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_h_25;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_w_22;
ATerm term_o_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_u_19;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_p_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_b_15;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_w_12;
ATerm term_k_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_z_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_m_8;
ATerm term_z_7;
ATerm term_u_7;
void init_constant_terms (void)
{
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no pretty-print tables specified with -p arguments", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_v_11, term_e_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_v_11, term_c_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_g_17, term_m_16);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_j_11);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_c_9, term_z_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_m_21, term_j_11);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_z_21, term_j_11);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_g_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_l_25, term_n_25);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__2, term_i_28, term_j_11);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__3, term_l_25, term_n_25, (ATerm) ATempty);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm pass_conservative_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm p_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm f_74 (ATerm));
ATerm xtc_parse_pp_table_0 (ATerm);
ATerm parse_to_temp_file_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm e_59 (ATerm));
ATerm Fst_0 (ATerm);
ATerm modification_time_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm lookup_pp_af_0 (ATerm);
ATerm lookup_or_parse_0 (ATerm);
ATerm must_be_pp_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm b_65 (ATerm));
ATerm has_extension_1 (ATerm, ATerm o_76 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm, ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm z_58 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm h_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm z_71 (ATerm));
ATerm repeat_1 (ATerm, ATerm f_77 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm g_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm i_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm j_70 (ATerm), ATerm k_70 (ATerm));
ATerm union_1 (ATerm, ATerm f_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm r_59 (ATerm));
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
ATerm FILE_1 (ATerm, ATerm q_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm g_74 (ATerm), ATerm h_74 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm x_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm g_63 (ATerm), ATerm h_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm w_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm u_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm v_73 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm w_70 (ATerm), ATerm x_70 (ATerm));
ATerm crush_2 (ATerm, ATerm u_69 (ATerm), ATerm v_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_80 (ATerm));
ATerm Program_1 (ATerm, ATerm p_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm i_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm q_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm u_50 (ATerm), ATerm v_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_75 (ATerm));
ATerm map_1 (ATerm, ATerm i_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm u_78 (ATerm), ATerm v_78 (ATerm));
ATerm io_asfix2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm pass_conservative_0 (ATerm t)
{
  ATerm u_2 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_7;
      t = get_config_0(t);
      LocalPopChoice(t_7);
      {
        ATerm c_0 = NULL;
        ATerm e_0 = NULL;
        e_0 = t;
        if(((c_0 != NULL) && (c_0 != e_0)))
          _fail(e_0);
        else
          c_0 = e_0;
        t = (ATerm) ATinsert(CheckATermList(not_null(c_0)), term_z_7);
      }
    }
  else
    {
      t = u_2;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm f_1 = NULL,j_1 = NULL,k_1 = NULL;
  f_1 = t;
  e_1 :
  if(match_cons(f_1, sym__2))
    {
      j_1 = ATgetArgument(f_1, 0);
      k_1 = ATgetArgument(f_1, 1);
      {
        t = not_null(k_1);
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
                ATerm b_0 (ATerm t)
                {
                  ATerm c_8 = t;
                  int d_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(d_8);
                    }
                  else
                    {
                      t = c_8;
                      {
                        ATerm a_2 = NULL;
                        t = Cons_2(t, _id, b_0);
                        {
                          ATerm b_2 = NULL;
                          b_2 = t;
                          if(((a_2 != NULL) && (a_2 != b_2)))
                            _fail(b_2);
                          else
                            a_2 = b_2;
                          t = (ATerm) ATinsert(CheckATermList(not_null(a_2)), not_null(j_1));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, b_0);
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
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
  b_3 = t;
  a_3 :
  if(match_cons(b_3, sym__2))
    {
      c_3 = ATgetArgument(b_3, 0);
      d_3 = ATgetArgument(b_3, 1);
      t = SSL_rename(not_null(c_3), not_null(d_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm q_3 = NULL,r_3 = NULL;
  q_3 = t;
  p_3 :
  if(match_cons(q_3, sym_FILE_1))
    {
      r_3 = ATgetArgument(q_3, 0);
      {
        ATerm k_8 = t;
        int l_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_3 = NULL;
            t = p_0(t);
            {
              t_3 = t;
              l_3 :
              if(match_cons(t_3, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_3), term_m_8);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(r_3);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_m_8;
            LocalPopChoice(l_8);
          }
        else
          {
            t = k_8;
            {
              ATerm n_8 = t;
              int o_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_3 = NULL;
                  ATerm w_3 = NULL;
                  t = p_0(t);
                  {
                    w_3 = t;
                    {
                      if(((v_3 != NULL) && (v_3 != w_3)))
                        _fail(w_3);
                      else
                        v_3 = w_3;
                      {
                        ATerm p_8 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm q_8 = t;
                            int w_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(w_8);
                              }
                            else
                              {
                                t = q_8;
                                {
                                  ATerm x_3 = NULL;
                                  x_3 = t;
                                  if(((r_3 != NULL) && (r_3 != x_3)))
                                    _fail(x_3);
                                  else
                                    r_3 = x_3;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = p_8;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_3), not_null(v_3));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_3));
                  LocalPopChoice(o_8);
                }
              else
                {
                  t = n_8;
                  {
                    ATerm z_3 = NULL;
                    t = p_0(t);
                    {
                      z_3 = t;
                      if(((r_3 != NULL) && (r_3 != z_3)))
                        _fail(z_3);
                      else
                        r_3 = z_3;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_3));
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
ATerm xtc_transform_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, f_74, f_0);
  return(t);
}
ATerm xtc_parse_pp_table_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = term_z_8;
    return(t);
  }
  t = xtc_transform_1(t, q_0);
  return(t);
}
ATerm parse_to_temp_file_0 (ATerm t)
{
  ATerm k_4 = NULL;
  ATerm m_4 = NULL,n_4 = NULL;
  k_4 = t;
  {
    ATerm r_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_4));
      {
        t = xtc_parse_pp_table_0(t);
        t = rename_to_1(t, new_file_0);
      }
      return(t);
    }
    t = xtc_temp_files_1(t, r_0);
    {
      m_4 = t;
      j_4 :
      if(match_cons(m_4, sym_FILE_1))
        {
          n_4 = ATgetArgument(m_4, 0);
          {
            t = not_null(n_4);
            {
              ATerm s_0 (ATerm t)
              {
                ATerm t_0 (ATerm t)
                {
                  t = term_a_9;
                  return(t);
                }
                t = debug_1(t, t_0);
                return(t);
              }
              t = if_verbose2_1(t, s_0);
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
ATerm if_verbose2_1 (ATerm t, ATerm e_59 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm b_9;
    b_9 = t;
    {
      ATerm s_4 = NULL;
      ATerm t_4 = NULL;
      t = term_c_9;
      {
        t = get_config_0(t);
        {
          t_4 = t;
          if(((s_4 != NULL) && (s_4 != t_4)))
            _fail(t_4);
          else
            s_4 = t_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_4), term_d_9);
        t = geq_0(t);
      }
    }
    t = b_9;
    t = e_59(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm b_5 = NULL;
  ATerm d_5 = NULL,e_5 = NULL;
  b_5 = t;
  {
    ATerm f_5 = NULL;
    ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
    t = not_null(b_5);
    {
      f_5 = t;
      {
        t = SSL_explode_term(not_null(f_5));
        {
          h_5 = t;
          y_4 :
          if(match_cons(h_5, sym__2))
            {
              i_5 = ATgetArgument(h_5, 0);
              j_5 = ATgetArgument(h_5, 1);
              z_4 :
              if(match_string(i_5, ""))
                {
                  a_5 :
                  if(((ATgetType(j_5) == AT_LIST) && !(ATisEmpty(j_5))))
                    {
                      k_5 = ATgetFirst((ATermList) j_5);
                      l_5 = (ATerm) ATgetNext((ATermList) j_5);
                      {
                        if(((e_5 != NULL) && (e_5 != k_5)))
                          _fail(k_5);
                        else
                          e_5 = k_5;
                        if(((d_5 != NULL) && (d_5 != l_5)))
                          _fail(l_5);
                        else
                          d_5 = l_5;
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
    t = not_null(e_5);
  }
  return(t);
}
ATerm modification_time_0 (ATerm t)
{
  ATerm q_5 = NULL;
  q_5 = t;
  t = SSL_modification_time(not_null(q_5));
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
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym__2))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_5)), term_i_9), not_null(w_5));
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
  ATerm e_6 = NULL,g_6 = NULL;
  ATerm j_9;
  j_9 = t;
  {
    ATerm f_6 = NULL;
    f_6 = t;
    if(((e_6 != NULL) && (e_6 != f_6)))
      _fail(f_6);
    else
      e_6 = f_6;
  }
  t = j_9;
  {
    ATerm h_6 = NULL,j_6 = NULL;
    ATerm i_6 = NULL;
    i_6 = t;
    if(((h_6 != NULL) && (h_6 != i_6)))
      _fail(i_6);
    else
      h_6 = i_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_6), term_k_9);
      {
        t = add_extension_0(t);
        {
          t = file_exists_0(t);
          {
            j_6 = t;
            if(((g_6 != NULL) && (g_6 != j_6)))
              _fail(j_6);
            else
              g_6 = j_6;
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), not_null(e_6));
      {
        ATerm l_9;
        l_9 = t;
        {
          t = _2(t, modification_time_0, modification_time_0);
          t = geq_0(t);
        }
        t = l_9;
        {
          t = Fst_0(t);
          {
            ATerm v_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = term_m_9;
                return(t);
              }
              t = debug_1(t, w_0);
              return(t);
            }
            t = if_verbose2_1(t, v_0);
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
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = lookup_pp_af_0(t);
      LocalPopChoice(r_9);
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
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 (ATerm t)
      {
        t = term_v_9;
        return(t);
      }
      t = has_extension_1(t, x_0);
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      {
        ATerm o_6 = NULL;
        ATerm p_6 = NULL;
        p_6 = t;
        if(((o_6 != NULL) && (o_6 != p_6)))
          _fail(p_6);
        else
          o_6 = p_6;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_6)), term_w_9);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm x_9 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_65(t);
        LocalPopChoice(c_10);
      }
    else
      {
        t = x_9;
        t = Cons_2(t, _id, r_6);
      }
    return(t);
  }
  t = r_6(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm o_76 (ATerm))
{
  ATerm u_6 = NULL;
  ATerm d_10;
  d_10 = t;
  {
    ATerm v_6 = NULL;
    t = o_76(t);
    {
      t = explode_string_0(t);
      {
        v_6 = t;
        if(((u_6 != NULL) && (u_6 != v_6)))
          _fail(v_6);
        else
          u_6 = v_6;
      }
    }
  }
  t = d_10;
  {
    ATerm e_10;
    e_10 = t;
    {
      t = explode_string_0(t);
      {
        ATerm y_0 (ATerm t)
        {
          ATerm w_6 = NULL;
          w_6 = t;
          if(((u_6 != NULL) && (u_6 != w_6)))
            _fail(w_6);
          else
            u_6 = w_6;
          return(t);
        }
        t = at_suffix_1(t, y_0);
      }
    }
    t = e_10;
  }
  return(t);
}
ATerm ensure_pp_table_parsed_0 (ATerm t)
{
  ATerm f_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_0 (ATerm t)
      {
        t = term_i_10;
        return(t);
      }
      t = has_extension_1(t, z_0);
      LocalPopChoice(h_10);
    }
  else
    {
      t = f_10;
      {
        t = must_be_pp_0(t);
        t = lookup_or_parse_0(t);
      }
    }
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm j_10;
  j_10 = t;
  {
    t = error_0(t);
    {
      t = term_k_10;
      t = exit_0(t);
    }
  }
  t = j_10;
  return(t);
}
ATerm get_config_p_0 (ATerm t)
{
  ATerm l_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_10;
      t = get_config_0(t);
      LocalPopChoice(n_10);
    }
  else
    {
      t = l_10;
      {
        t = (ATerm) ATinsert(ATempty, term_t_10);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm create_pp_table_args_0 (ATerm t)
{
  ATerm b_7 = NULL,d_7 = NULL;
  t = get_config_p_0(t);
  {
    t = map_1(t, ensure_pp_table_parsed_0);
    {
      ATerm c_7 = NULL;
      c_7 = t;
      if(((b_7 != NULL) && (b_7 != c_7)))
        _fail(c_7);
      else
        b_7 = c_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_10, not_null(b_7));
        {
          t = separate_by_0(t);
          {
            ATerm e_7 = NULL;
            e_7 = t;
            if(((d_7 != NULL) && (d_7 != e_7)))
              _fail(e_7);
            else
              d_7 = e_7;
            {
              t = (ATerm) ATinsert(CheckATermList(not_null(d_7)), term_r_10);
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = term_z_10;
                    return(t);
                  }
                  t = debug_1(t, b_1);
                  return(t);
                }
                t = if_verbose5_1(t, a_1);
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
  ATerm i_7 = NULL;
  i_7 = t;
  t = SSL_int_to_string(not_null(i_7));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  m_7 :
  if(match_cons(n_7, sym__2))
    {
      o_7 = ATgetArgument(n_7, 0);
      p_7 = ATgetArgument(n_7, 1);
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(o_7), not_null(p_7));
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            t = SSL_subtr(not_null(o_7), not_null(p_7));
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
  ATerm v_7 = NULL;
  ATerm w_7 = NULL,y_7 = NULL;
  ATerm x_7 = NULL;
  t = term_c_9;
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = term_k_10;
      }
    {
      x_7 = t;
      if(((w_7 != NULL) && (w_7 != x_7)))
        _fail(x_7);
      else
        w_7 = x_7;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), term_k_10);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          y_7 = t;
          if(((v_7 != NULL) && (v_7 != y_7)))
            _fail(y_7);
          else
            v_7 = y_7;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_7)), term_c_9);
  return(t);
}
ATerm build_impl_args_0 (ATerm t)
{
  ATerm e_8 = NULL,g_8 = NULL,i_8 = NULL;
  t = create_pp_table_args_0(t);
  {
    ATerm i_11;
    i_11 = t;
    {
      ATerm f_8 = NULL;
      t = term_j_11;
      {
        t = pass_verbose_0(t);
        {
          f_8 = t;
          if(((e_8 != NULL) && (e_8 != f_8)))
            _fail(f_8);
          else
            e_8 = f_8;
        }
      }
    }
    t = i_11;
    {
      ATerm k_11;
      k_11 = t;
      {
        ATerm h_8 = NULL;
        t = term_j_11;
        {
          t = create_pp_table_args_0(t);
          {
            h_8 = t;
            if(((g_8 != NULL) && (g_8 != h_8)))
              _fail(h_8);
            else
              g_8 = h_8;
          }
        }
      }
      t = k_11;
      {
        ATerm j_8 = NULL;
        t = term_j_11;
        {
          t = pass_conservative_0(t);
          {
            j_8 = t;
            if(((i_8 != NULL) && (i_8 != j_8)))
              _fail(j_8);
            else
              i_8 = j_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, not_null(e_8), not_null(g_8), not_null(i_8));
          t = concat_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  s_8 = t;
  r_8 :
  if(match_cons(s_8, sym_stdin_0))
    {
      ATerm u_8 = NULL;
      ATerm v_8 = NULL;
      t = term_l_11;
      {
        t = ReadFromFile_0(t);
        {
          v_8 = t;
          if(((u_8 != NULL) && (u_8 != v_8)))
            _fail(v_8);
          else
            u_8 = v_8;
        }
      }
      t = not_null(u_8);
    }
  else
    {
      if(match_cons(s_8, sym_FILE_1))
        {
          t_8 = ATgetArgument(s_8, 0);
          {
            ATerm x_8 = NULL;
            ATerm y_8 = NULL;
            t = not_null(t_8);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  y_8 = t;
                  if(((x_8 != NULL) && (x_8 != y_8)))
                    _fail(y_8);
                  else
                    x_8 = y_8;
                }
              }
            }
            t = not_null(x_8);
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
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
  f_9 = t;
  e_9 :
  if(match_cons(f_9, sym__2))
    {
      g_9 = ATgetArgument(f_9, 0);
      h_9 = ATgetArgument(f_9, 1);
      t = SSL_WriteToBinaryFile(not_null(g_9), not_null(h_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm n_9 = NULL;
  ATerm p_9 = NULL;
  n_9 = t;
  {
    ATerm q_9 = NULL;
    t = xtc_new_file_0(t);
    {
      q_9 = t;
      {
        if(((p_9 != NULL) && (p_9 != q_9)))
          _fail(q_9);
        else
          p_9 = q_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), not_null(n_9));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(p_9);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_9));
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
  ATerm u_9 = NULL;
  u_9 = t;
  t = SSL_close_file(not_null(u_9));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
  z_9 = t;
  y_9 :
  if(match_cons(z_9, sym__2))
    {
      a_10 = ATgetArgument(z_9, 0);
      b_10 = ATgetArgument(z_9, 1);
      t = SSL_execvp(not_null(a_10), not_null(b_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm g_10 = NULL;
  g_10 = t;
  t = SSL_waitpid(not_null(g_10));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm z_58 (ATerm))
{
  ATerm q_10 = NULL;
  ATerm s_10 = NULL;
  q_10 = t;
  {
    t = fork_0(t);
    {
      s_10 = t;
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_10 = NULL;
            u_10 = t;
            m_10 :
            if(match_int(u_10, 0))
              {
                t = not_null(q_10);
                t = z_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            {
              ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
              t = not_null(s_10);
              {
                t = waitpid_0(t);
                {
                  v_10 = t;
                  o_10 :
                  if(match_cons(v_10, sym_WaitStatus_3))
                    {
                      w_10 = ATgetArgument(v_10, 0);
                      x_10 = ATgetArgument(v_10, 1);
                      y_10 = ATgetArgument(v_10, 2);
                      p_10 :
                      if(match_int(w_10, 0))
                        {
                          t = not_null(q_10);
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
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  f_11 = t;
  e_11 :
  if(match_cons(f_11, sym__2))
    {
      g_11 = ATgetArgument(f_11, 0);
      h_11 = ATgetArgument(f_11, 1);
      {
        ATerm c_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), not_null(h_11));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, c_1);
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
  ATerm m_11 = NULL;
  m_11 = t;
  t = SSL_table_keys(not_null(m_11));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm s_11 = NULL;
  s_11 = t;
  {
    t = table_keys_0(t);
    {
      ATerm d_1 (ATerm t)
      {
        ATerm u_11 = NULL;
        ATerm w_11 = NULL;
        u_11 = t;
        {
          ATerm x_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(u_11));
          {
            t = table_get_0(t);
            {
              x_11 = t;
              if(((w_11 != NULL) && (w_11 != x_11)))
                _fail(x_11);
              else
                w_11 = x_11;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_11), not_null(w_11));
        }
        return(t);
      }
      t = map_1(t, d_1);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm g_1 (ATerm t)
  {
    ATerm p_11;
    p_11 = t;
    {
      ATerm c_12 = NULL;
      ATerm d_12 = NULL;
      t = term_c_9;
      {
        t = get_config_0(t);
        {
          d_12 = t;
          if(((c_12 != NULL) && (c_12 != d_12)))
            _fail(d_12);
          else
            c_12 = d_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_12), term_q_11);
        t = geq_0(t);
      }
    }
    t = p_11;
    t = h_59(t);
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
    ATerm g_12 = NULL;
    ATerm h_12 = NULL;
    h_12 = t;
    if(((g_12 != NULL) && (g_12 != h_12)))
      _fail(h_12);
    else
      g_12 = h_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_11, not_null(g_12));
      t = printnl_0(t);
    }
  }
  t = r_11;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm n_12 = NULL;
  ATerm p_12 = NULL,q_12 = NULL;
  n_12 = t;
  {
    ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATmakeAppl(sym_Tool_1, not_null(n_12)));
    {
      t = table_get_0(t);
      {
        r_12 = t;
        l_12 :
        if(((ATgetType(r_12) == AT_LIST) && !(ATisEmpty(r_12))))
          {
            s_12 = ATgetFirst((ATermList) r_12);
            v_12 = (ATerm) ATgetNext((ATermList) r_12);
            m_12 :
            if(match_cons(s_12, sym__2))
              {
                t_12 = ATgetArgument(s_12, 0);
                u_12 = ATgetArgument(s_12, 1);
                {
                  if(((p_12 != NULL) && (p_12 != t_12)))
                    _fail(t_12);
                  else
                    p_12 = t_12;
                  if(((q_12 != NULL) && (q_12 != u_12)))
                    _fail(u_12);
                  else
                    q_12 = u_12;
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
    t = not_null(q_12);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  c_13 = t;
  b_13 :
  if(match_cons(c_13, sym__2))
    {
      d_13 = ATgetArgument(c_13, 0);
      e_13 = ATgetArgument(c_13, 1);
      {
        ATerm h_13 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATmakeAppl(sym_Tool_1, not_null(d_13)));
        {
          t = table_get_0(t);
          {
            ATerm h_1 (ATerm t)
            {
              ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
              i_13 = t;
              a_13 :
              if(match_cons(i_13, sym__2))
                {
                  j_13 = ATgetArgument(i_13, 0);
                  k_13 = ATgetArgument(i_13, 1);
                  {
                    if(((e_13 != NULL) && (e_13 != j_13)))
                      _fail(j_13);
                    else
                      e_13 = j_13;
                    if(((h_13 != NULL) && (h_13 != k_13)))
                      _fail(k_13);
                    else
                      h_13 = k_13;
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
        t = not_null(h_13);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              t = filter_1(t, z_71);
              return(t);
            }
            t = Cons_2(t, z_71, i_1);
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            {
              ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
              p_13 = t;
              o_13 :
              if(((ATgetType(p_13) == AT_LIST) && !(ATisEmpty(p_13))))
                {
                  q_13 = ATgetFirst((ATermList) p_13);
                  r_13 = (ATerm) ATgetNext((ATermList) p_13);
                  {
                    t = not_null(r_13);
                    t = filter_1(t, z_71);
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
ATerm repeat_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm u_13 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = f_77(t);
      t = u_13(t);
      return(t);
    }
    t = try_1(t, l_1);
    return(t);
  }
  t = u_13(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    t = term_f_12;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm i_12 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_12;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, m_1);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm j_12;
    j_12 = t;
    {
      ATerm w_13 = NULL;
      ATerm x_13 = NULL;
      t = term_c_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), term_k_12);
        t = geq_0(t);
      }
    }
    t = j_12;
    t = g_59(t);
    return(t);
  }
  t = try_1(t, n_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm o_12;
    o_12 = t;
    {
      ATerm a_14 = NULL;
      ATerm b_14 = NULL;
      t = term_c_9;
      {
        t = get_config_0(t);
        {
          b_14 = t;
          if(((a_14 != NULL) && (a_14 != b_14)))
            _fail(b_14);
          else
            a_14 = b_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), term_w_12);
        t = geq_0(t);
      }
    }
    t = o_12;
    t = i_59(t);
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
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym__2))
    {
      g_14 = ATgetArgument(f_14, 0);
      h_14 = ATgetArgument(f_14, 1);
      if(((g_14 != NULL) && (g_14 != h_14)))
        _fail(h_14);
      else
        g_14 = h_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm j_70 (ATerm), ATerm k_70 (ATerm))
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  m_14 :
  if(((ATgetType(n_14) == AT_LIST) && !(ATisEmpty(n_14))))
    {
      o_14 = ATgetFirst((ATermList) n_14);
      p_14 = (ATerm) ATgetNext((ATermList) n_14);
      {
        t = k_70(t);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm s_14 = NULL;
            s_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_14), not_null(s_14));
              t = j_70(t);
            }
            return(t);
          }
          t = fetch_1(t, p_1);
        }
        t = not_null(p_14);
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
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym__2))
    {
      z_14 = ATgetArgument(y_14, 0);
      a_15 = ATgetArgument(y_14, 1);
      {
        t = not_null(z_14);
        {
          ATerm e_15 (ATerm t)
          {
            ATerm x_12 = t;
            int y_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(a_15);
                LocalPopChoice(y_12);
              }
            else
              {
                t = x_12;
                {
                  ATerm z_12 = t;
                  int f_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_1 (ATerm t)
                      {
                        t = not_null(a_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_70, q_1);
                      t = e_15(t);
                      LocalPopChoice(f_13);
                    }
                  else
                    {
                      t = z_12;
                      t = Cons_2(t, _id, e_15);
                    }
                }
              }
            return(t);
          }
          t = e_15(t);
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
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym__3))
    {
      k_15 = ATgetArgument(j_15, 0);
      l_15 = ATgetArgument(j_15, 1);
      m_15 = ATgetArgument(j_15, 2);
      {
        ATerm g_13;
        g_13 = t;
        {
          ATerm q_15 = NULL;
          ATerm r_15 = NULL,t_15 = NULL;
          ATerm s_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), not_null(l_15));
          {
            ATerm l_13 = t;
            int m_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(m_13);
              }
            else
              {
                t = l_13;
                t = (ATerm) ATempty;
              }
            {
              s_15 = t;
              if(((r_15 != NULL) && (r_15 != s_15)))
                _fail(s_15);
              else
                r_15 = s_15;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_15), not_null(m_15));
            {
              t = union_0(t);
              {
                t_15 = t;
                if(((q_15 != NULL) && (q_15 != t_15)))
                  _fail(t_15);
                else
                  q_15 = t_15;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_15), not_null(l_15), not_null(q_15));
            t = set_0(t);
          }
        }
        t = g_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
  b_16 = t;
  a_16 :
  if(match_cons(b_16, sym__2))
    {
      c_16 = ATgetArgument(b_16, 0);
      d_16 = ATgetArgument(b_16, 1);
      {
        t = not_null(d_16);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
            g_16 = t;
            z_15 :
            if(match_cons(g_16, sym__2))
              {
                h_16 = ATgetArgument(g_16, 0);
                i_16 = ATgetArgument(g_16, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(c_16), not_null(h_16), not_null(i_16));
                  t = r_59(t);
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
  ATerm o_16 = NULL;
  ATerm n_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_16 = NULL;
      p_16 = t;
      {
        if(((o_16 != NULL) && (o_16 != p_16)))
          _fail(p_16);
        else
          o_16 = p_16;
        t = SSL_ReadFromFile(not_null(o_16));
      }
      LocalPopChoice(s_13);
    }
  else
    {
      t = n_13;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_t_13;
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
  ATerm t_16 = NULL;
  ATerm v_16 = NULL;
  t_16 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm u_1 (ATerm t)
      {
        t = term_v_13;
        return(t);
      }
      t = debug_1(t, u_1);
      return(t);
    }
    t = if_verbose5_1(t, t_1);
    {
      ATerm y_13 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATmakeAppl(sym_Imported_1, not_null(t_16)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_13;
        }
      {
        ATerm z_13;
        z_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_11, term_c_14, (ATerm) ATinsert(ATempty, not_null(t_16)));
          t = table_put_0(t);
        }
        t = z_13;
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              t = term_d_14;
              return(t);
            }
            t = debug_1(t, w_1);
            return(t);
          }
          t = if_verbose4_1(t, v_1);
          {
            ATerm i_14 = t;
            int j_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(j_14);
              }
            else
              {
                t = i_14;
                t = (ATerm) ATempty;
              }
            {
              ATerm x_1 (ATerm t)
              {
                ATerm y_1 (ATerm t)
                {
                  t = term_k_14;
                  return(t);
                }
                t = say_1(t, y_1);
                return(t);
              }
              t = if_verbose6_1(t, x_1);
              {
                ATerm w_16 = NULL;
                w_16 = t;
                if(((v_16 != NULL) && (v_16 != w_16)))
                  _fail(w_16);
                else
                  v_16 = w_16;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_11, not_null(v_16));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm z_1 (ATerm t)
                      {
                        ATerm c_2 (ATerm t)
                        {
                          t = term_l_14;
                          return(t);
                        }
                        t = say_1(t, c_2);
                        return(t);
                      }
                      t = if_verbose6_1(t, z_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_v_11, (ATerm)ATmakeAppl(sym_Imported_1, not_null(t_16)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm d_2 (ATerm t)
                            {
                              ATerm e_2 (ATerm t)
                              {
                                t = term_k_14;
                                return(t);
                              }
                              t = say_1(t, e_2);
                              return(t);
                            }
                            t = if_verbose4_1(t, d_2);
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
  ATerm a_17 = NULL;
  a_17 = t;
  t = SSL_getenv(not_null(a_17));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_14;
      t = get_config_0(t);
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_14;
            t = getenv_0(t);
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      t = term_b_15;
      return(t);
    }
    t = debug_1(t, g_2);
    return(t);
  }
  t = if_verbose5_1(t, f_2);
  {
    ATerm c_15;
    c_15 = t;
    {
      ATerm d_15 = t;
      int f_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_g_15;
          t = table_get_0(t);
          LocalPopChoice(f_15);
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
      ATerm h_2 (ATerm t)
      {
        ATerm i_2 (ATerm t)
        {
          t = term_h_15;
          return(t);
        }
        t = debug_1(t, i_2);
        return(t);
      }
      t = if_verbose5_1(t, h_2);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        ATerm k_2 (ATerm t)
        {
          t = term_p_15;
          return(t);
        }
        t = debug_1(t, k_2);
        return(t);
      }
      t = if_verbose5_1(t, j_2);
      {
        t = xtc_load_0(t);
        {
          ATerm u_15 = t;
          int v_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(v_15);
            }
          else
            {
              t = u_15;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm l_2 (ATerm t)
            {
              ATerm m_2 (ATerm t)
              {
                t = term_p_15;
                return(t);
              }
              t = debug_1(t, m_2);
              return(t);
            }
            t = if_verbose5_1(t, l_2);
          }
        }
      }
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        ATerm e_17 = NULL;
        ATerm f_17 = NULL;
        f_17 = t;
        if(((e_17 != NULL) && (e_17 != f_17)))
          _fail(f_17);
        else
          e_17 = f_17;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_15), not_null(e_17)), term_w_15);
          {
            t = error_0(t);
            {
              ATerm n_2 (ATerm t)
              {
                t = term_v_11;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm o_2 (ATerm t)
                    {
                      t = term_y_15;
                      return(t);
                    }
                    t = debug_1(t, o_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, n_2);
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
  ATerm j_17 = NULL;
  ATerm e_16;
  e_16 = t;
  {
    ATerm k_17 = NULL;
    t = e_74(t);
    {
      t = xtc_find_warning_0(t);
      {
        k_17 = t;
        if(((j_17 != NULL) && (j_17 != k_17)))
          _fail(k_17);
        else
          j_17 = k_17;
      }
    }
  }
  t = e_16;
  {
    ATerm f_16;
    f_16 = t;
    {
      ATerm l_17 = NULL;
      ATerm m_17 = NULL;
      m_17 = t;
      if(((l_17 != NULL) && (l_17 != m_17)))
        _fail(m_17);
      else
        l_17 = m_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_17), not_null(l_17));
        t = call_0(t);
      }
    }
    t = f_16;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm a_75 (ATerm))
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  u_17 = t;
  t_17 :
  if(match_cons(u_17, sym__2))
    {
      v_17 = ATgetArgument(u_17, 0);
      w_17 = ATgetArgument(u_17, 1);
      {
        ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
        ATerm j_16;
        j_16 = t;
        {
          ATerm c_18 = NULL;
          ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
          t = a_75(t);
          {
            c_18 = t;
            {
              if(((z_17 != NULL) && (z_17 != c_18)))
                _fail(c_18);
              else
                z_17 = c_18;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(z_17), not_null(v_17), not_null(w_17));
                {
                  t = table_push_0(t);
                  {
                    ATerm k_16 = t;
                    int l_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), term_m_16);
                        t = table_get_0(t);
                        LocalPopChoice(l_16);
                      }
                    else
                      {
                        t = k_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      d_18 = t;
                      s_17 :
                      if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
                        {
                          e_18 = ATgetFirst((ATermList) d_18);
                          f_18 = (ATerm) ATgetNext((ATermList) d_18);
                          {
                            if(((a_18 != NULL) && (a_18 != e_18)))
                              _fail(e_18);
                            else
                              a_18 = e_18;
                            {
                              if(((b_18 != NULL) && (b_18 != f_18)))
                                _fail(f_18);
                              else
                                b_18 = f_18;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(z_17), term_m_16, (ATerm) ATinsert(CheckATermList(not_null(b_18)), (ATerm) ATinsert(CheckATermList(not_null(a_18)), not_null(v_17))));
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
        t = j_16;
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
  ATerm n_16;
  n_16 = t;
  {
    t = o_75(t);
    {
      ATerm p_2 (ATerm t)
      {
        t = term_q_16;
        return(t);
      }
      t = debug_1(t, p_2);
    }
  }
  t = n_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
      p_18 = t;
      k_18 :
      if(match_cons(p_18, sym__2))
        {
          q_18 = ATgetArgument(p_18, 0);
          r_18 = ATgetArgument(p_18, 1);
          {
            if(((o_18 != NULL) && (o_18 != q_18)))
              _fail(q_18);
            else
              o_18 = q_18;
            if(((n_18 != NULL) && (n_18 != r_18)))
              _fail(r_18);
            else
              n_18 = r_18;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_16);
      t = SSL_open_file(not_null(o_18), not_null(n_18));
    }
  else
    {
      t = r_16;
      {
        ATerm s_18 = NULL;
        ATerm t_18 = NULL;
        ATerm q_2 (ATerm t)
        {
          t = term_u_16;
          return(t);
        }
        t = obsolete_1(t, q_2);
        {
          s_18 = t;
          {
            if(((o_18 != NULL) && (o_18 != s_18)))
              _fail(s_18);
            else
              o_18 = s_18;
            {
              ATerm x_16;
              x_16 = t;
              {
                ATerm u_18 = NULL;
                t = term_y_16;
                {
                  u_18 = t;
                  if(((t_18 != NULL) && (t_18 != u_18)))
                    _fail(u_18);
                  else
                    t_18 = u_18;
                }
              }
              t = x_16;
              t = SSL_open_file(not_null(o_18), not_null(t_18));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm b_19 = NULL;
  ATerm d_19 = NULL;
  b_19 = t;
  {
    ATerm z_16;
    z_16 = t;
    {
      ATerm e_19 = NULL;
      t = term_b_17;
      {
        e_19 = t;
        if(((d_19 != NULL) && (d_19 != e_19)))
          _fail(e_19);
        else
          d_19 = e_19;
      }
    }
    t = z_16;
    {
      t = SSL_open_file(not_null(b_19), not_null(d_19));
      t = SSL_close_file(not_null(b_19));
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
  ATerm i_19 = NULL;
  ATerm j_19 = NULL;
  t = term_j_11;
  {
    t = new_0(t);
    {
      j_19 = t;
      if(((i_19 != NULL) && (i_19 != j_19)))
        _fail(j_19);
      else
        i_19 = j_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), term_c_17);
    {
      t = conc_strings_0(t);
      {
        ATerm r_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, r_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm n_19 = NULL;
  t = new_file_0(t);
  {
    n_19 = t;
    {
      ATerm d_17;
      d_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), term_y_16);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), term_j_11);
            {
              ATerm s_2 (ATerm t)
              {
                t = term_g_17;
                return(t);
              }
              t = assert_1(t, s_2);
            }
          }
        }
      }
      t = d_17;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm d_20 = NULL,e_20 = NULL;
  d_20 = t;
  c_20 :
  if(match_cons(d_20, sym_stdin_0))
    {
      ATerm f_20 = NULL;
      ATerm i_20 = NULL;
      ATerm j_20 = NULL;
      t = xtc_new_file_0(t);
      {
        i_20 = t;
        {
          if(((f_20 != NULL) && (f_20 != i_20)))
            _fail(i_20);
          else
            f_20 = i_20;
          {
            ATerm k_20 = NULL;
            t = o_0(t);
            {
              k_20 = t;
              if(((j_20 != NULL) && (j_20 != k_20)))
                _fail(k_20);
              else
                j_20 = k_20;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_20), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_20)), term_h_17));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(f_20);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_20));
    }
  else
    {
      if(match_cons(d_20, sym_FILE_1))
        {
          e_20 = ATgetArgument(d_20, 0);
          {
            ATerm m_20 = NULL;
            ATerm n_20 = NULL;
            t = not_null(e_20);
            {
              ATerm o_20 = NULL;
              t = xtc_new_file_0(t);
              {
                n_20 = t;
                {
                  if(((m_20 != NULL) && (m_20 != n_20)))
                    _fail(n_20);
                  else
                    m_20 = n_20;
                  {
                    ATerm u_20 = NULL;
                    t = o_0(t);
                    {
                      u_20 = t;
                      if(((o_20 != NULL) && (o_20 != u_20)))
                        _fail(u_20);
                      else
                        o_20 = u_20;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_20)), term_h_17), not_null(e_20)), term_i_17));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(m_20);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_20));
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
  ATerm f_21 = NULL;
  f_21 = t;
  e_21 :
  if(match_cons(f_21, sym_stdin_0))
    {
      ATerm h_21 = NULL,j_21 = NULL;
      ATerm n_17;
      n_17 = t;
      {
        ATerm i_21 = NULL;
        t = SSLgetAnnotations(not_null(f_21));
        {
          i_21 = t;
          if(((h_21 != NULL) && (h_21 != i_21)))
            _fail(i_21);
          else
            h_21 = i_21;
        }
      }
      t = n_17;
      {
        ATerm p_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(h_21));
        {
          p_21 = t;
          if(((j_21 != NULL) && (j_21 != p_21)))
            _fail(p_21);
          else
            j_21 = p_21;
        }
        t = not_null(j_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm q_52 (ATerm))
{
  ATerm k_22 = NULL,m_22 = NULL;
  k_22 = t;
  j_22 :
  if(match_cons(k_22, sym_FILE_1))
    {
      m_22 = ATgetArgument(k_22, 0);
      {
        ATerm p_22 = NULL,r_22 = NULL;
        ATerm q_22 = NULL;
        t = SSLgetAnnotations(not_null(k_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
        {
          t = not_null(m_22);
          {
            ATerm t_22 = NULL;
            t = q_52(t);
            {
              r_22 = t;
              {
                ATerm u_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(r_22)), not_null(p_22));
                {
                  u_22 = t;
                  if(((t_22 != NULL) && (t_22 != u_22)))
                    _fail(u_22);
                  else
                    t_22 = u_22;
                }
                t = not_null(t_22);
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
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_17 = t;
      int r_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(r_17);
        }
      else
        {
          t = q_17;
          t = stdin_0(t);
        }
      LocalPopChoice(p_17);
      t = xtc_transform_file_2(t, g_74, h_74);
    }
  else
    {
      t = o_17;
      t = xtc_transform_term_2(t, g_74, h_74);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  c_23 :
  if(match_cons(d_23, sym__2))
    {
      e_23 = ATgetArgument(d_23, 0);
      f_23 = ATgetArgument(d_23, 1);
      t = SSL_copy(not_null(e_23), not_null(f_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_stderr_0))
    {
      ATerm p_23 = NULL,t_23 = NULL;
      ATerm x_17;
      x_17 = t;
      {
        ATerm q_23 = NULL;
        t = SSLgetAnnotations(not_null(n_23));
        {
          q_23 = t;
          if(((p_23 != NULL) && (p_23 != q_23)))
            _fail(q_23);
          else
            p_23 = q_23;
        }
      }
      t = x_17;
      {
        ATerm u_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(p_23));
        {
          u_23 = t;
          if(((t_23 != NULL) && (t_23 != u_23)))
            _fail(u_23);
          else
            t_23 = u_23;
        }
        t = not_null(t_23);
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
  ATerm h_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym_stdout_0))
    {
      ATerm j_24 = NULL,l_24 = NULL;
      ATerm y_17;
      y_17 = t;
      {
        ATerm k_24 = NULL;
        t = SSLgetAnnotations(not_null(h_24));
        {
          k_24 = t;
          if(((j_24 != NULL) && (j_24 != k_24)))
            _fail(k_24);
          else
            j_24 = k_24;
        }
      }
      t = y_17;
      {
        ATerm m_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(j_24));
        {
          m_24 = t;
          if(((l_24 != NULL) && (l_24 != m_24)))
            _fail(m_24);
          else
            l_24 = m_24;
        }
        t = not_null(l_24);
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
  ATerm c_25 = NULL,d_25 = NULL;
  c_25 = t;
  b_25 :
  if(match_cons(c_25, sym_FILE_1))
    {
      d_25 = ATgetArgument(c_25, 0);
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_25 = NULL;
            ATerm g_25 = NULL;
            t = m_0(t);
            {
              g_25 = t;
              {
                if(((f_25 != NULL) && (f_25 != g_25)))
                  _fail(g_25);
                else
                  f_25 = g_25;
                {
                  ATerm i_18 = t;
                  int j_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(j_18);
                    }
                  else
                    {
                      t = i_18;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_25), not_null(f_25));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_25));
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            {
              ATerm l_18 = t;
              int m_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_25 = NULL;
                  ATerm j_25 = NULL;
                  t = m_0(t);
                  {
                    j_25 = t;
                    {
                      if(((i_25 != NULL) && (i_25 != j_25)))
                        _fail(j_25);
                      else
                        i_25 = j_25;
                      {
                        ATerm v_18 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm w_18 = t;
                            int x_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(x_18);
                              }
                            else
                              {
                                t = w_18;
                                {
                                  ATerm y_18 = t;
                                  int z_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(z_18);
                                    }
                                  else
                                    {
                                      t = y_18;
                                      {
                                        ATerm k_25 = NULL;
                                        k_25 = t;
                                        if(((d_25 != NULL) && (d_25 != k_25)))
                                          _fail(k_25);
                                        else
                                          d_25 = k_25;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = v_18;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_25), not_null(i_25));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_25));
                  LocalPopChoice(m_18);
                }
              else
                {
                  t = l_18;
                  {
                    ATerm m_25 = NULL;
                    t = m_0(t);
                    {
                      m_25 = t;
                      if(((d_25 != NULL) && (d_25 != m_25)))
                        _fail(m_25);
                      else
                        d_25 = m_25;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_25));
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
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  v_25 :
  if(((ATgetType(w_25) == AT_LIST) && !(ATisEmpty(w_25))))
    {
      x_25 = ATgetFirst((ATermList) w_25);
      y_25 = (ATerm) ATgetNext((ATermList) w_25);
      t = not_null(y_25);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
  e_26 = t;
  d_26 :
  if(match_cons(e_26, sym__2))
    {
      f_26 = ATgetArgument(e_26, 0);
      g_26 = ATgetArgument(e_26, 1);
      {
        ATerm a_19;
        a_19 = t;
        {
          ATerm j_26 = NULL;
          ATerm k_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_26), not_null(g_26));
          {
            ATerm c_19 = t;
            int f_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(f_19);
              }
            else
              {
                t = c_19;
                t = (ATerm) ATempty;
              }
            {
              k_26 = t;
              if(((j_26 != NULL) && (j_26 != k_26)))
                _fail(k_26);
              else
                j_26 = k_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_26), not_null(g_26), not_null(j_26));
            t = table_put_0(t);
          }
        }
        t = a_19;
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
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  ATerm g_19;
  g_19 = t;
  {
    ATerm u_26 = NULL;
    ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
    t = x_74(t);
    {
      u_26 = t;
      {
        if(((t_26 != NULL) && (t_26 != u_26)))
          _fail(u_26);
        else
          t_26 = u_26;
        {
          ATerm h_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_26), term_m_16);
              t = table_get_0(t);
              LocalPopChoice(k_19);
            }
          else
            {
              t = h_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            v_26 = t;
            q_26 :
            if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
              {
                w_26 = ATgetFirst((ATermList) v_26);
                x_26 = (ATerm) ATgetNext((ATermList) v_26);
                {
                  if(((s_26 != NULL) && (s_26 != w_26)))
                    _fail(w_26);
                  else
                    s_26 = w_26;
                  {
                    if(((r_26 != NULL) && (r_26 != x_26)))
                      _fail(x_26);
                    else
                      r_26 = x_26;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(t_26), term_m_16, not_null(r_26));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(s_26);
                          {
                            ATerm t_2 (ATerm t)
                            {
                              ATerm y_26 = NULL;
                              y_26 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_26), not_null(y_26));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, t_2);
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
  t = g_19;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  t = SSL_remove(not_null(e_27));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm g_63 (ATerm), ATerm h_63 (ATerm))
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_63(t);
      t = h_63(t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        t = h_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm j_27 = NULL;
  ATerm o_19;
  o_19 = t;
  {
    ATerm k_27 = NULL;
    ATerm l_27 = NULL;
    t = w_74(t);
    {
      k_27 = t;
      {
        if(((j_27 != NULL) && (j_27 != k_27)))
          _fail(k_27);
        else
          j_27 = k_27;
        {
          ATerm m_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), term_m_16);
          {
            ATerm p_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_19);
              }
            else
              {
                t = p_19;
                t = (ATerm) ATempty;
              }
            {
              m_27 = t;
              if(((l_27 != NULL) && (l_27 != m_27)))
                _fail(m_27);
              else
                l_27 = m_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_27), term_m_16, (ATerm) ATinsert(CheckATermList(not_null(l_27)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = o_19;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm r_27 = NULL,s_27 = NULL;
  ATerm v_2 (ATerm t)
  {
    t = term_g_17;
    return(t);
  }
  t = begin_scope_1(t, v_2);
  {
    ATerm w_2 (ATerm t)
    {
      ATerm r_19;
      r_19 = t;
      {
        ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_19;
            t = table_get_0(t);
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          t_27 = t;
          q_27 :
          if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
            {
              u_27 = ATgetFirst((ATermList) t_27);
              v_27 = (ATerm) ATgetNext((ATermList) t_27);
              {
                if(((s_27 != NULL) && (s_27 != u_27)))
                  _fail(u_27);
                else
                  s_27 = u_27;
                {
                  if(((r_27 != NULL) && (r_27 != v_27)))
                    _fail(v_27);
                  else
                    r_27 = v_27;
                  {
                    t = not_null(s_27);
                    {
                      ATerm x_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, x_2);
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
      t = r_19;
      {
        ATerm y_2 (ATerm t)
        {
          t = term_g_17;
          return(t);
        }
        t = end_scope_1(t, y_2);
      }
      return(t);
    }
    t = restore_always_2(t, u_73, w_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm v_73 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_27 = NULL;
        ATerm z_27 = NULL;
        t = term_i_17;
        {
          t = get_config_0(t);
          {
            z_27 = t;
            if(((y_27 != NULL) && (y_27 != z_27)))
              _fail(z_27);
            else
              y_27 = z_27;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_27));
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = term_l_11;
      }
    {
      t = v_73(t);
      {
        ATerm e_3 (ATerm t)
        {
          ATerm x_19 = t;
          int y_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_h_17;
              t = get_config_0(t);
              LocalPopChoice(y_19);
            }
          else
            {
              t = x_19;
              t = term_m_8;
            }
          return(t);
        }
        t = copy_to_1(t, e_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, z_2);
  return(t);
}
ATerm asfix2abox_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm g_3 (ATerm t)
    {
      t = term_z_19;
      return(t);
    }
    ATerm h_3 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_20), term_g_20), term_b_20), term_a_20);
      return(t);
    }
    t = xtc_transform_2(t, g_3, h_3);
    {
      ATerm i_3 (ATerm t)
      {
        t = term_l_20;
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        t = term_j_11;
        t = build_impl_args_0(t);
        return(t);
      }
      t = xtc_transform_2(t, i_3, j_3);
    }
    return(t);
  }
  t = xtc_io_1(t, f_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm c_28 = NULL;
    c_28 = t;
    b_28 :
    if(!(match_string(c_28, "-v")))
      {
        if(!(match_string(c_28, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_q_20;
    t = set_config_0(t);
    t = term_r_20;
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_s_20;
    return(t);
  }
  t = Option_3(t, k_3, m_3, n_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm f_28 = NULL;
    f_28 = t;
    d_28 :
    if(!(match_string(f_28, "-k")))
      {
        if(!(match_string(f_28, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm t_20;
    t_20 = t;
    {
      ATerm g_28 = NULL;
      ATerm h_28 = NULL;
      t = string_to_int_0(t);
      {
        h_28 = t;
        if(((g_28 != NULL) && (g_28 != h_28)))
          _fail(h_28);
        else
          g_28 = h_28;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_20, not_null(g_28));
        t = set_config_0(t);
      }
    }
    t = t_20;
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_w_20;
    return(t);
  }
  t = ArgOption_3(t, o_3, s_3, u_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  t = SSL_string_to_int(not_null(k_28));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_3 (ATerm t)
      {
        ATerm s_28 = NULL;
        s_28 = t;
        n_28 :
        if(!(match_string(s_28, "-S")))
          {
            if(!(match_string(s_28, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        t = term_a_21;
        t = set_config_0(t);
        t = term_b_21;
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = term_c_21;
        return(t);
      }
      t = Option_3(t, y_3, a_4, b_4);
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm d_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_4 (ATerm t)
            {
              ATerm t_28 = NULL;
              t_28 = t;
              o_28 :
              if(!(match_string(t_28, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_4 (ATerm t)
            {
              ATerm w_28 = NULL;
              ATerm k_21;
              k_21 = t;
              {
                ATerm u_28 = NULL;
                ATerm v_28 = NULL;
                t = string_to_int_0(t);
                {
                  v_28 = t;
                  if(((u_28 != NULL) && (u_28 != v_28)))
                    _fail(v_28);
                  else
                    u_28 = v_28;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_9, not_null(u_28));
                  t = set_config_0(t);
                }
              }
              t = k_21;
              {
                ATerm x_28 = NULL;
                x_28 = t;
                if(((w_28 != NULL) && (w_28 != x_28)))
                  _fail(x_28);
                else
                  w_28 = x_28;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_28));
              }
              return(t);
            }
            ATerm e_4 (ATerm t)
            {
              t = term_l_21;
              return(t);
            }
            t = ArgOption_3(t, c_4, d_4, e_4);
            LocalPopChoice(g_21);
          }
        else
          {
            t = d_21;
            {
              ATerm f_4 (ATerm t)
              {
                ATerm y_28 = NULL;
                y_28 = t;
                r_28 :
                if(!(match_string(y_28, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm g_4 (ATerm t)
              {
                t = term_n_21;
                t = set_config_0(t);
                t = term_o_21;
                return(t);
              }
              ATerm h_4 (ATerm t)
              {
                t = term_q_21;
                return(t);
              }
              t = Option_3(t, f_4, g_4, h_4);
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
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(u_21);
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
  ATerm i_4 (ATerm t)
  {
    ATerm f_29 = NULL;
    f_29 = t;
    b_29 :
    if(!(match_string(f_29, "-o")))
      {
        if(!(match_string(f_29, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm i_29 = NULL;
    ATerm v_21;
    v_21 = t;
    {
      ATerm g_29 = NULL;
      ATerm h_29 = NULL;
      h_29 = t;
      if(((g_29 != NULL) && (g_29 != h_29)))
        _fail(h_29);
      else
        g_29 = h_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_17, not_null(g_29));
        t = set_config_0(t);
      }
    }
    t = v_21;
    {
      ATerm j_29 = NULL;
      j_29 = t;
      if(((i_29 != NULL) && (i_29 != j_29)))
        _fail(j_29);
      else
        i_29 = j_29;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_29));
    }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_w_21;
    return(t);
  }
  t = ArgOption_3(t, i_4, l_4, o_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm p_4 (ATerm t)
        {
          ATerm s_29 = NULL;
          s_29 = t;
          r_29 :
          if(!(match_string(s_29, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_a_22;
          t = set_config_0(t);
          t = term_b_22;
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          t = term_c_22;
          return(t);
        }
        t = Option_3(t, p_4, q_4, r_4);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm w_29 = NULL;
    w_29 = t;
    t_29 :
    if(!(match_string(w_29, "-i")))
      {
        if(!(match_string(w_29, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    ATerm z_29 = NULL;
    ATerm d_22;
    d_22 = t;
    {
      ATerm x_29 = NULL;
      ATerm y_29 = NULL;
      y_29 = t;
      if(((x_29 != NULL) && (x_29 != y_29)))
        _fail(y_29);
      else
        x_29 = y_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_17, not_null(x_29));
        t = set_config_0(t);
      }
    }
    t = d_22;
    {
      ATerm a_30 = NULL;
      a_30 = t;
      if(((z_29 != NULL) && (z_29 != a_30)))
        _fail(a_30);
      else
        z_29 = a_30;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_29));
    }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_e_22;
    return(t);
  }
  t = ArgOption_3(t, u_4, v_4, w_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym__2))
    {
      k_30 = ATgetArgument(j_30, 0);
      l_30 = ATgetArgument(j_30, 1);
      {
        ATerm o_30 = NULL;
        ATerm p_30 = NULL,r_30 = NULL;
        ATerm q_30 = NULL;
        t = not_null(k_30);
        {
          ATerm l_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(n_22);
            }
          else
            {
              t = l_22;
              t = (ATerm) ATempty;
            }
          {
            q_30 = t;
            if(((p_30 != NULL) && (p_30 != q_30)))
              _fail(q_30);
            else
              p_30 = q_30;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_30), not_null(p_30));
          {
            t = conc_0(t);
            {
              r_30 = t;
              if(((o_30 != NULL) && (o_30 != r_30)))
                _fail(r_30);
              else
                o_30 = r_30;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_22, not_null(k_30), not_null(o_30));
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
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  a_31 = t;
  y_30 :
  if(match_string(a_31, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(a_31) == AT_LIST) && !(ATisEmpty(a_31))))
        {
          b_31 = ATgetFirst((ATermList) a_31);
          c_31 = (ATerm) ATgetNext((ATermList) a_31);
          z_30 :
          if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
            {
              d_31 = ATgetFirst((ATermList) c_31);
              e_31 = (ATerm) ATgetNext((ATermList) c_31);
              {
                ATerm i_31 = NULL;
                ATerm s_22;
                s_22 = t;
                {
                  t = not_null(b_31);
                  t = j_0(t);
                }
                t = s_22;
                {
                  ATerm j_31 = NULL;
                  t = not_null(d_31);
                  {
                    t = k_0(t);
                    {
                      j_31 = t;
                      if(((i_31 != NULL) && (i_31 != j_31)))
                        _fail(j_31);
                      else
                        i_31 = j_31;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_31)), not_null(i_31));
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
  ATerm x_4 (ATerm t)
  {
    ATerm p_31 = NULL;
    p_31 = t;
    n_31 :
    if(!(match_string(p_31, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    ATerm v_22;
    v_22 = t;
    {
      ATerm q_31 = NULL;
      ATerm r_31 = NULL;
      r_31 = t;
      if(((q_31 != NULL) && (q_31 != r_31)))
        _fail(r_31);
      else
        q_31 = r_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_10, (ATerm) ATinsert(ATempty, not_null(q_31)));
        t = extend_config_0(t);
      }
    }
    t = v_22;
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_w_22;
    return(t);
  }
  t = ArgOption_3(t, x_4, c_5, g_5);
  return(t);
}
ATerm asfix2abox_options_0 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0(t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = io_options_0(t);
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            {
              ATerm m_5 (ATerm t)
              {
                ATerm u_31 = NULL;
                u_31 = t;
                t_31 :
                if(!(match_string(u_31, "-c")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_5 (ATerm t)
              {
                ATerm b_23;
                b_23 = t;
                {
                  t = term_h_23;
                  t = set_config_0(t);
                }
                t = b_23;
                return(t);
              }
              ATerm o_5 (ATerm t)
              {
                t = term_i_23;
                return(t);
              }
              t = Option_3(t, m_5, n_5, o_5);
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm z_31 = NULL;
  ATerm j_23;
  j_23 = t;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm c_32 = NULL,d_32 = NULL;
      c_32 = t;
      y_31 :
      if(match_cons(c_32, sym_Program_1))
        {
          d_32 = ATgetArgument(c_32, 0);
          if(((z_31 != NULL) && (z_31 != d_32)))
            _fail(d_32);
          else
            z_31 = d_32;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, p_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_23), not_null(z_31)), term_k_23));
      {
        t = printnl_0(t);
        {
          t = term_k_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATinsert(ATempty, term_o_23));
  {
    t = printnl_0(t);
    {
      t = term_k_10;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_32 = NULL;
  q_32 = t;
  t = SSL_TicksToSeconds(not_null(q_32));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  w_32 :
  if(match_cons(x_32, sym__2))
    {
      y_32 = ATgetArgument(x_32, 0);
      z_32 = ATgetArgument(x_32, 1);
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_32), not_null(z_32));
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            t = SSL_addr(not_null(y_32), not_null(z_32));
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
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_70(t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      {
        ATerm u_33 = NULL,v_33 = NULL,x_33 = NULL;
        u_33 = t;
        t_33 :
        if(((ATgetType(u_33) == AT_LIST) && !(ATisEmpty(u_33))))
          {
            v_33 = ATgetFirst((ATermList) u_33);
            x_33 = (ATerm) ATgetNext((ATermList) u_33);
            {
              ATerm c_34 = NULL;
              ATerm e_34 = NULL;
              t = not_null(x_33);
              {
                t = foldr_2(t, w_70, x_70);
                {
                  e_34 = t;
                  if(((c_34 != NULL) && (c_34 != e_34)))
                    _fail(e_34);
                  else
                    c_34 = e_34;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_33), not_null(c_34));
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
  ATerm y_34 = NULL;
  ATerm e_35 = NULL;
  y_34 = t;
  {
    ATerm f_35 = NULL;
    ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
    t = not_null(y_34);
    {
      f_35 = t;
      {
        t = SSL_explode_term(not_null(f_35));
        {
          j_35 = t;
          x_34 :
          if(match_cons(j_35, sym__2))
            {
              k_35 = ATgetArgument(j_35, 0);
              l_35 = ATgetArgument(j_35, 1);
              if(((e_35 != NULL) && (e_35 != l_35)))
                _fail(l_35);
              else
                e_35 = l_35;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_35);
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
    ATerm r_5 (ATerm t)
    {
      t = term_z_20;
      return(t);
    }
    t = crush_2(t, r_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
  u_35 = t;
  t_35 :
  if(match_cons(u_35, sym__2))
    {
      v_35 = ATgetArgument(u_35, 0);
      w_35 = ATgetArgument(u_35, 1);
      {
        ATerm x_23;
        x_23 = t;
        {
          ATerm y_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_35), not_null(w_35));
              LocalPopChoice(z_23);
            }
          else
            {
              t = y_23;
              t = SSL_gtr(not_null(v_35), not_null(w_35));
            }
        }
        t = x_23;
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
  ATerm c_36 = NULL;
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
      d_36 = t;
      b_36 :
      if(match_cons(d_36, sym__2))
        {
          e_36 = ATgetArgument(d_36, 0);
          f_36 = ATgetArgument(d_36, 1);
          {
            if(((c_36 != NULL) && (c_36 != e_36)))
              _fail(e_36);
            else
              c_36 = e_36;
            if(((c_36 != NULL) && (c_36 != f_36)))
              _fail(f_36);
            else
              c_36 = f_36;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm c_24;
    c_24 = t;
    {
      ATerm i_36 = NULL;
      ATerm j_36 = NULL;
      t = term_c_9;
      {
        t = get_config_0(t);
        {
          j_36 = t;
          if(((i_36 != NULL) && (i_36 != j_36)))
            _fail(j_36);
          else
            i_36 = j_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_36), term_k_10);
        t = geq_0(t);
      }
    }
    t = c_24;
    t = d_59(t);
    return(t);
  }
  t = try_1(t, s_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm n_36 = NULL,p_36 = NULL;
    ATerm d_24;
    d_24 = t;
    {
      ATerm o_36 = NULL;
      t = run_time_0(t);
      {
        o_36 = t;
        if(((n_36 != NULL) && (n_36 != o_36)))
          _fail(o_36);
        else
          n_36 = o_36;
      }
    }
    t = d_24;
    {
      ATerm q_36 = NULL;
      t = term_e_24;
      {
        t = get_config_0(t);
        {
          q_36 = t;
          if(((p_36 != NULL) && (p_36 != q_36)))
            _fail(q_36);
          else
            p_36 = q_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_24), not_null(n_36)), term_f_24), not_null(p_36)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, t_5);
  {
    t = term_z_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  w_36 :
  if(match_cons(x_36, sym_Version_0))
    {
      ATerm z_36 = NULL,b_37 = NULL;
      ATerm n_24;
      n_24 = t;
      {
        ATerm a_37 = NULL;
        t = SSLgetAnnotations(not_null(x_36));
        {
          a_37 = t;
          if(((z_36 != NULL) && (z_36 != a_37)))
            _fail(a_37);
          else
            z_36 = a_37;
        }
      }
      t = n_24;
      {
        ATerm c_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_36));
        {
          c_37 = t;
          if(((b_37 != NULL) && (b_37 != c_37)))
            _fail(c_37);
          else
            b_37 = c_37;
        }
        t = not_null(b_37);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_78 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        {
          ATerm q_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(r_24);
            }
          else
            {
              t = q_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_5);
  t = k_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_37 = NULL;
  h_37 = t;
  t = SSL_table_create(not_null(h_37));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_37 = NULL;
  l_37 = t;
  {
    ATerm s_24;
    s_24 = t;
    {
      t = term_t_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_24, term_u_24, not_null(l_37));
          t = table_put_0(t);
        }
      }
    }
    t = s_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm p_37 = NULL;
  p_37 = t;
  t = SSL_table_destroy(not_null(p_37));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_37 = NULL;
  t_37 = t;
  t = SSL_exit(not_null(t_37));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
  x_37 = t;
  w_37 :
  if(((ATgetType(x_37) == AT_LIST) && ATisEmpty(x_37)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_37) == AT_LIST) && !(ATisEmpty(x_37))))
        {
          y_37 = ATgetFirst((ATermList) x_37);
          z_37 = (ATerm) ATgetNext((ATermList) x_37);
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
    ATerm c_38 = NULL;
    ATerm f_38 = NULL;
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        {
          ATerm d_38 = NULL;
          ATerm e_38 = NULL;
          e_38 = t;
          if(((d_38 != NULL) && (d_38 != e_38)))
            _fail(e_38);
          else
            d_38 = e_38;
          t = (ATerm) ATinsert(ATempty, not_null(d_38));
        }
      }
    {
      f_38 = t;
      if(((c_38 != NULL) && (c_38 != f_38)))
        _fail(f_38);
      else
        c_38 = f_38;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(c_38));
      t = printnl_0(t);
    }
  }
  t = v_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
  q_38 = t;
  n_38 :
  if(((ATgetType(q_38) == AT_LIST) && !(ATisEmpty(q_38))))
    {
      o_38 = ATgetFirst((ATermList) q_38);
      p_38 = (ATerm) ATgetNext((ATermList) q_38);
      {
        ATerm t_38 = NULL;
        t = not_null(p_38);
        {
          ATerm y_24;
          y_24 = t;
          {
            ATerm u_38 = NULL,w_38 = NULL,b_39 = NULL;
            ATerm z_24;
            z_24 = t;
            {
              ATerm v_38 = NULL;
              t = i_0(t);
              {
                v_38 = t;
                if(((u_38 != NULL) && (u_38 != v_38)))
                  _fail(v_38);
                else
                  u_38 = v_38;
              }
            }
            t = z_24;
            {
              ATerm y_38 = NULL;
              t = not_null(o_38);
              {
                t = h_0(t);
                {
                  y_38 = t;
                  if(((w_38 != NULL) && (w_38 != y_38)))
                    _fail(y_38);
                  else
                    w_38 = y_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_38)), not_null(w_38));
                {
                  b_39 = t;
                  if(((t_38 != NULL) && (t_38 != b_39)))
                    _fail(b_39);
                  else
                    t_38 = b_39;
                }
              }
            }
          }
          t = y_24;
          {
            ATerm z_5 (ATerm t)
            {
              t = not_null(t_38);
              return(t);
            }
            t = reverse_acc_2(t, h_0, z_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(q_38) == AT_LIST) && ATisEmpty(q_38)))
        {
          {
            t = term_j_11;
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
  ATerm a_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm m_39 = NULL,n_39 = NULL;
  m_39 = t;
  l_39 :
  if(match_cons(m_39, sym_Program_1))
    {
      n_39 = ATgetArgument(m_39, 0);
      {
        ATerm q_39 = NULL,s_39 = NULL;
        ATerm r_39 = NULL;
        t = SSLgetAnnotations(not_null(m_39));
        {
          r_39 = t;
          if(((q_39 != NULL) && (q_39 != r_39)))
            _fail(r_39);
          else
            q_39 = r_39;
        }
        {
          t = not_null(n_39);
          {
            ATerm u_39 = NULL;
            t = p_57(t);
            {
              s_39 = t;
              {
                ATerm v_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_39)), not_null(q_39));
                {
                  v_39 = t;
                  if(((u_39 != NULL) && (u_39 != v_39)))
                    _fail(v_39);
                  else
                    u_39 = v_39;
                }
                t = not_null(u_39);
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
  ATerm h_40 = NULL;
  ATerm a_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_40 = NULL;
      t = term_e_24;
      {
        t = get_config_0(t);
        {
          i_40 = t;
          if(((h_40 != NULL) && (h_40 != i_40)))
            _fail(i_40);
          else
            h_40 = i_40;
        }
      }
      LocalPopChoice(e_25);
    }
  else
    {
      t = a_25;
      {
        ATerm b_6 (ATerm t)
        {
          ATerm c_6 (ATerm t)
          {
            ATerm j_40 = NULL;
            j_40 = t;
            if(((h_40 != NULL) && (h_40 != j_40)))
              _fail(j_40);
            else
              h_40 = j_40;
            return(t);
          }
          t = Program_1(t, c_6);
          return(t);
        }
        t = option_defined_1(t, b_6);
      }
    }
  {
    ATerm d_6 (ATerm t)
    {
      ATerm k_6 (ATerm t)
      {
        t = not_null(h_40);
        return(t);
      }
      t = short_description_1(t, k_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, d_6);
    {
      t = term_h_25;
      {
        t = echo_0(t);
        {
          t = term_o_25;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_6 (ATerm t)
                {
                  ATerm k_40 = NULL;
                  ATerm l_40 = NULL;
                  l_40 = t;
                  if(((k_40 != NULL) && (k_40 != l_40)))
                    _fail(l_40);
                  else
                    k_40 = l_40;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_40)), term_p_25);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_6);
                {
                  ATerm m_6 (ATerm t)
                  {
                    ATerm m_40 = NULL;
                    ATerm n_40 = NULL;
                    ATerm n_6 (ATerm t)
                    {
                      t = not_null(h_40);
                      return(t);
                    }
                    t = long_description_1(t, n_6);
                    {
                      n_40 = t;
                      if(((m_40 != NULL) && (m_40 != n_40)))
                        _fail(n_40);
                      else
                        m_40 = n_40;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(m_40)), term_q_25);
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
  ATerm r_25;
  r_25 = t;
  {
    ATerm t_40 = NULL;
    ATerm u_40 = NULL;
    u_40 = t;
    if(((t_40 != NULL) && (t_40 != u_40)))
      _fail(u_40);
    else
      t_40 = u_40;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATinsert(ATempty, not_null(t_40)));
      t = printnl_0(t);
    }
  }
  t = r_25;
  return(t);
}
ATerm say_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm s_25;
  s_25 = t;
  {
    t = i_75(t);
    t = debug_0(t);
  }
  t = s_25;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm q_57 (ATerm))
{
  ATerm d_41 = NULL,e_41 = NULL;
  d_41 = t;
  c_41 :
  if(match_cons(d_41, sym_Undefined_1))
    {
      e_41 = ATgetArgument(d_41, 0);
      {
        ATerm j_41 = NULL,n_41 = NULL;
        ATerm k_41 = NULL;
        t = SSLgetAnnotations(not_null(d_41));
        {
          k_41 = t;
          if(((j_41 != NULL) && (j_41 != k_41)))
            _fail(k_41);
          else
            j_41 = k_41;
        }
        {
          t = not_null(e_41);
          {
            ATerm p_41 = NULL;
            t = q_57(t);
            {
              n_41 = t;
              {
                ATerm q_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_41)), not_null(j_41));
                {
                  q_41 = t;
                  if(((p_41 != NULL) && (p_41 != q_41)))
                    _fail(q_41);
                  else
                    p_41 = q_41;
                }
                t = not_null(p_41);
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
  ATerm v_41 (ATerm t)
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_64, _id);
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = Cons_2(t, _id, v_41);
      }
    return(t);
  }
  t = v_41(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_79 (ATerm))
{
  t = fetch_1(t, r_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_42 = NULL;
  a_42 = t;
  z_41 :
  if(match_cons(a_42, sym_Help_0))
    {
      ATerm c_42 = NULL,e_42 = NULL;
      ATerm z_25;
      z_25 = t;
      {
        ATerm d_42 = NULL;
        t = SSLgetAnnotations(not_null(a_42));
        {
          d_42 = t;
          if(((c_42 != NULL) && (c_42 != d_42)))
            _fail(d_42);
          else
            c_42 = d_42;
        }
      }
      t = z_25;
      {
        ATerm h_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_42));
        {
          h_42 = t;
          if(((e_42 != NULL) && (e_42 != h_42)))
            _fail(h_42);
          else
            e_42 = h_42;
        }
        t = not_null(e_42);
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
  ATerm o_42 = NULL;
  o_42 = t;
  t = SSL_implode_string(not_null(o_42));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      {
        ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
        t_42 = t;
        s_42 :
        if(((ATgetType(t_42) == AT_LIST) && !(ATisEmpty(t_42))))
          {
            u_42 = ATgetFirst((ATermList) t_42);
            v_42 = (ATerm) ATgetNext((ATermList) t_42);
            {
              t = not_null(u_42);
              {
                ATerm q_6 (ATerm t)
                {
                  t = not_null(v_42);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, q_6);
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
  ATerm f_43 = NULL;
  ATerm h_43 = NULL;
  f_43 = t;
  {
    ATerm i_43 = NULL;
    ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
    t = not_null(f_43);
    {
      i_43 = t;
      {
        t = SSL_explode_term(not_null(i_43));
        {
          k_43 = t;
          d_43 :
          if(match_cons(k_43, sym__2))
            {
              l_43 = ATgetArgument(k_43, 0);
              m_43 = ATgetArgument(k_43, 1);
              e_43 :
              if(match_string(l_43, ""))
                {
                  if(((h_43 != NULL) && (h_43 != m_43)))
                    _fail(m_43);
                  else
                    h_43 = m_43;
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
      t = not_null(h_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm q_43 (ATerm t)
  {
    ATerm c_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_43);
        LocalPopChoice(h_26);
      }
    else
      {
        t = c_26;
        {
          t = Nil_0(t);
          t = x_64(t);
        }
      }
    return(t);
  }
  t = q_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym__2))
    {
      u_43 = ATgetArgument(t_43, 0);
      v_43 = ATgetArgument(t_43, 1);
      {
        t = not_null(u_43);
        {
          ATerm s_6 (ATerm t)
          {
            t = not_null(v_43);
            return(t);
          }
          t = at_end_1(t, s_6);
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
  ATerm i_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = i_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_44 = NULL;
  a_44 = t;
  t = SSL_explode_string(not_null(a_44));
  return(t);
}
ATerm _2 (ATerm t, ATerm u_50 (ATerm), ATerm v_50 (ATerm))
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym__2))
    {
      k_44 = ATgetArgument(j_44, 0);
      l_44 = ATgetArgument(j_44, 1);
      {
        ATerm p_44 = NULL,r_44 = NULL;
        ATerm q_44 = NULL;
        t = SSLgetAnnotations(not_null(j_44));
        {
          q_44 = t;
          if(((p_44 != NULL) && (p_44 != q_44)))
            _fail(q_44);
          else
            p_44 = q_44;
        }
        {
          t = not_null(k_44);
          {
            ATerm z_44 = NULL;
            t = u_50(t);
            {
              r_44 = t;
              {
                t = not_null(l_44);
                {
                  ATerm b_45 = NULL;
                  t = v_50(t);
                  {
                    z_44 = t;
                    {
                      ATerm c_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_44), not_null(z_44)), not_null(p_44));
                      {
                        c_45 = t;
                        if(((b_45 != NULL) && (b_45 != c_45)))
                          _fail(c_45);
                        else
                          b_45 = c_45;
                      }
                      t = not_null(b_45);
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
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
  s_45 = t;
  m_45 :
  if(match_cons(s_45, sym__2))
    {
      t_45 = ATgetArgument(s_45, 0);
      u_45 = ATgetArgument(s_45, 1);
      {
        ATerm m_26;
        m_26 = t;
        t = SSL_printnl(not_null(t_45), not_null(u_45));
        t = m_26;
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
  ATerm n_26;
  n_26 = t;
  {
    ATerm e_46 = NULL,g_46 = NULL;
    ATerm o_26;
    o_26 = t;
    {
      ATerm f_46 = NULL;
      t = h_75(t);
      {
        f_46 = t;
        if(((e_46 != NULL) && (e_46 != f_46)))
          _fail(f_46);
        else
          e_46 = f_46;
      }
    }
    t = o_26;
    {
      ATerm h_46 = NULL;
      h_46 = t;
      if(((g_46 != NULL) && (g_46 != h_46)))
        _fail(h_46);
      else
        g_46 = h_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_46)), not_null(e_46)));
        t = printnl_0(t);
      }
    }
  }
  t = n_26;
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_64 (ATerm))
{
  ATerm k_46 (ATerm t)
  {
    ATerm p_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = p_26;
        t = Cons_2(t, i_64, k_46);
      }
    return(t);
  }
  t = k_46(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_46 = NULL;
  m_46 = t;
  t = SSL_is_string(not_null(m_46));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, t_6);
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            {
              ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
              v_46 = t;
              u_46 :
              if(match_cons(v_46, sym_Path_1))
                {
                  w_46 = ATgetArgument(v_46, 0);
                  t = not_null(w_46);
                }
              else
                {
                  if(match_cons(v_46, sym_Var_1))
                    {
                      w_46 = ATgetArgument(v_46, 0);
                      {
                        t = not_null(w_46);
                        {
                          ATerm f_27 = t;
                          int g_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_27);
                            }
                          else
                            {
                              t = f_27;
                              {
                                ATerm x_6 (ATerm t)
                                {
                                  t = term_h_27;
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
                      if(match_cons(v_46, sym_Prefix_2))
                        {
                          w_46 = ATgetArgument(v_46, 0);
                          x_46 = ATgetArgument(v_46, 1);
                          {
                            ATerm c_47 = NULL,e_47 = NULL;
                            ATerm i_27;
                            i_27 = t;
                            {
                              ATerm d_47 = NULL;
                              t = not_null(w_46);
                              {
                                t = eval_config_0(t);
                                {
                                  d_47 = t;
                                  if(((c_47 != NULL) && (c_47 != d_47)))
                                    _fail(d_47);
                                  else
                                    c_47 = d_47;
                                }
                              }
                            }
                            t = i_27;
                            {
                              ATerm f_47 = NULL;
                              t = not_null(x_46);
                              {
                                t = eval_config_0(t);
                                {
                                  f_47 = t;
                                  if(((e_47 != NULL) && (e_47 != f_47)))
                                    _fail(f_47);
                                  else
                                    e_47 = f_47;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_47), not_null(e_47));
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
  ATerm n_47 = NULL;
  n_47 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_22, not_null(n_47));
    {
      t = table_get_0(t);
      {
        ATerm y_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm n_27;
            n_27 = t;
            {
              ATerm p_47 = NULL;
              ATerm q_47 = NULL;
              q_47 = t;
              if(((p_47 != NULL) && (p_47 != q_47)))
                _fail(q_47);
              else
                p_47 = q_47;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_22, not_null(n_47), not_null(p_47));
                t = table_put_0(t);
              }
            }
            t = n_27;
          }
          return(t);
        }
        t = try_1(t, y_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_62(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL;
  v_47 = t;
  u_47 :
  if(match_cons(v_47, sym__2))
    {
      w_47 = ATgetArgument(v_47, 0);
      x_47 = ATgetArgument(v_47, 1);
      t = SSL_table_get(not_null(w_47), not_null(x_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
  e_48 = t;
  d_48 :
  if(match_cons(e_48, sym__3))
    {
      f_48 = ATgetArgument(e_48, 0);
      g_48 = ATgetArgument(e_48, 1);
      h_48 = ATgetArgument(e_48, 2);
      {
        ATerm w_27;
        w_27 = t;
        {
          ATerm l_48 = NULL;
          ATerm m_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_48), not_null(g_48));
          {
            ATerm x_27 = t;
            int a_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_28);
              }
            else
              {
                t = x_27;
                t = (ATerm) ATempty;
              }
            {
              m_48 = t;
              if(((l_48 != NULL) && (l_48 != m_48)))
                _fail(m_48);
              else
                l_48 = m_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_48), not_null(g_48), (ATerm) ATinsert(CheckATermList(not_null(l_48)), not_null(h_48)));
            t = table_put_0(t);
          }
        }
        t = w_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_80 (ATerm))
{
  ATerm q_48 = NULL;
  ATerm r_48 = NULL;
  t = term_j_11;
  {
    t = w_80(t);
    {
      r_48 = t;
      if(((q_48 != NULL) && (q_48 != r_48)))
        _fail(r_48);
      else
        q_48 = r_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_25, term_n_25, not_null(q_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
  x_48 = t;
  w_48 :
  if(match_string(x_48, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(x_48) == AT_LIST) && !(ATisEmpty(x_48))))
        {
          y_48 = ATgetFirst((ATermList) x_48);
          z_48 = (ATerm) ATgetNext((ATermList) x_48);
          {
            ATerm c_49 = NULL;
            ATerm e_28;
            e_28 = t;
            {
              t = not_null(y_48);
              t = a_0(t);
            }
            t = e_28;
            {
              ATerm d_49 = NULL;
              t = term_j_11;
              {
                t = d_0(t);
                {
                  d_49 = t;
                  if(((c_49 != NULL) && (c_49 != d_49)))
                    _fail(d_49);
                  else
                    c_49 = d_49;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_48)), not_null(c_49));
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
    ATerm i_49 = NULL;
    i_49 = t;
    h_49 :
    if(!(match_string(i_49, "--help")))
      {
        if(!(match_string(i_49, "-h")))
          {
            if(!(match_string(i_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    t = term_j_28;
    {
      t = set_config_0(t);
      t = term_l_28;
    }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_m_28;
    return(t);
  }
  t = Option_3(t, z_6, a_7, f_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
  l_49 = t;
  k_49 :
  if(((ATgetType(l_49) == AT_LIST) && !(ATisEmpty(l_49))))
    {
      m_49 = ATgetFirst((ATermList) l_49);
      n_49 = (ATerm) ATgetNext((ATermList) l_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_52 (ATerm), ATerm e_52 (ATerm))
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
  x_49 = t;
  w_49 :
  if(((ATgetType(x_49) == AT_LIST) && !(ATisEmpty(x_49))))
    {
      y_49 = ATgetFirst((ATermList) x_49);
      z_49 = (ATerm) ATgetNext((ATermList) x_49);
      {
        ATerm d_50 = NULL,f_50 = NULL;
        ATerm e_50 = NULL;
        t = SSLgetAnnotations(not_null(x_49));
        {
          e_50 = t;
          if(((d_50 != NULL) && (d_50 != e_50)))
            _fail(e_50);
          else
            d_50 = e_50;
        }
        {
          t = not_null(y_49);
          {
            ATerm h_50 = NULL;
            t = d_52(t);
            {
              f_50 = t;
              {
                t = not_null(z_49);
                {
                  ATerm j_50 = NULL;
                  t = e_52(t);
                  {
                    h_50 = t;
                    {
                      ATerm k_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_50)), not_null(f_50)), not_null(d_50));
                      {
                        k_50 = t;
                        if(((j_50 != NULL) && (j_50 != k_50)))
                          _fail(k_50);
                        else
                          j_50 = k_50;
                      }
                      t = not_null(j_50);
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
  ATerm w_50 = NULL;
  w_50 = t;
  t_50 :
  if(((ATgetType(w_50) == AT_LIST) && ATisEmpty(w_50)))
    {
      {
        ATerm y_50 = NULL,a_51 = NULL;
        ATerm p_28;
        p_28 = t;
        {
          ATerm z_50 = NULL;
          t = SSLgetAnnotations(not_null(w_50));
          {
            z_50 = t;
            if(((y_50 != NULL) && (y_50 != z_50)))
              _fail(z_50);
            else
              y_50 = z_50;
          }
        }
        t = p_28;
        {
          ATerm b_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_50));
          {
            b_51 = t;
            if(((a_51 != NULL) && (a_51 != b_51)))
              _fail(b_51);
            else
              a_51 = b_51;
          }
          t = not_null(a_51);
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
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  g_51 :
  if(match_cons(h_51, sym__2))
    {
      i_51 = ATgetArgument(h_51, 0);
      j_51 = ATgetArgument(h_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_22, not_null(i_51), not_null(j_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_80 (ATerm))
{
  ATerm q_28;
  q_28 = t;
  {
    ATerm g_7 (ATerm t)
    {
      t = term_z_28;
      t = u_80(t);
      return(t);
    }
    t = try_1(t, g_7);
  }
  t = q_28;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm r_51 = NULL;
      ATerm a_29;
      a_29 = t;
      {
        ATerm p_51 = NULL;
        ATerm q_51 = NULL;
        q_51 = t;
        if(((p_51 != NULL) && (p_51 != q_51)))
          _fail(q_51);
        else
          p_51 = q_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_24, not_null(p_51));
          t = set_config_0(t);
        }
      }
      t = a_29;
      {
        ATerm s_51 = NULL;
        s_51 = t;
        if(((r_51 != NULL) && (r_51 != s_51)))
          _fail(s_51);
        else
          r_51 = s_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_51));
      }
      return(t);
    }
    ATerm j_7 (ATerm t)
    {
      ATerm c_29 = t;
      int d_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_29 = t;
          int k_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_29);
            }
          else
            {
              t = e_29;
              {
                t = u_80(t);
                t = Cons_2(t, _id, j_7);
              }
            }
          LocalPopChoice(d_29);
        }
      else
        {
          t = c_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_7, j_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  ATerm l_29;
  l_29 = t;
  {
    ATerm b_52 = NULL,c_52 = NULL,f_52 = NULL,g_52 = NULL;
    b_52 = t;
    x_51 :
    if(match_cons(b_52, sym__3))
      {
        c_52 = ATgetArgument(b_52, 0);
        f_52 = ATgetArgument(b_52, 1);
        g_52 = ATgetArgument(b_52, 2);
        {
          if(((y_51 != NULL) && (y_51 != c_52)))
            _fail(c_52);
          else
            y_51 = c_52;
          {
            if(((z_51 != NULL) && (z_51 != f_52)))
              _fail(f_52);
            else
              z_51 = f_52;
            {
              if(((a_52 != NULL) && (a_52 != g_52)))
                _fail(g_52);
              else
                a_52 = g_52;
              t = SSL_table_put(not_null(y_51), not_null(z_51), not_null(a_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm j_52 = NULL;
  ATerm m_29;
  m_29 = t;
  {
    t = term_n_29;
    t = table_put_0(t);
  }
  t = m_29;
  {
    ATerm k_7 (ATerm t)
    {
      ATerm o_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_80(t);
          LocalPopChoice(p_29);
        }
      else
        {
          t = o_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_7);
    {
      ATerm l_7 (ATerm t)
      {
        ATerm q_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_29;
            v_29 = t;
            {
              ATerm b_30 = t;
              int c_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_28;
                  t = get_config_0(t);
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_29;
            {
              t = system_usage_0(t);
              {
                t = term_z_20;
                t = exit_0(t);
              }
            }
            LocalPopChoice(u_29);
          }
        else
          {
            t = q_29;
            {
              ATerm q_7 (ATerm t)
              {
                ATerm r_7 (ATerm t)
                {
                  ATerm k_52 = NULL;
                  k_52 = t;
                  if(((j_52 != NULL) && (j_52 != k_52)))
                    _fail(k_52);
                  else
                    j_52 = k_52;
                  return(t);
                }
                t = Undefined_1(t, r_7);
                return(t);
              }
              t = option_defined_1(t, q_7);
              {
                ATerm s_7 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_52)), term_d_30);
                  return(t);
                }
                t = say_1(t, s_7);
                {
                  t = system_usage_0(t);
                  {
                    t = term_k_10;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, l_7);
      {
        ATerm e_30;
        e_30 = t;
        {
          t = term_l_25;
          t = table_destroy_0(t);
        }
        t = e_30;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm))
{
  t = parse_options_1(t, q_78);
  {
    t = store_options_0(t);
    {
      t = s_78(t);
      {
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_78);
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            {
              ATerm h_30 = t;
              int m_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_78(t);
                  t = report_success_0(t);
                  LocalPopChoice(m_30);
                }
              else
                {
                  t = h_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm u_78 (ATerm), ATerm v_78 (ATerm))
{
  t = option_wrap_4(t, u_78, default_usage_0, _id, v_78);
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