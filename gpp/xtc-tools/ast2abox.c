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
ATerm term_b_29;
ATerm term_e_28;
ATerm term_f_27;
ATerm term_x_26;
ATerm term_t_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_q_25;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_t_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_n_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_g_18;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_h_11;
ATerm term_q_10;
ATerm term_l_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_q_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_f_8;
ATerm term_a_8;
ATerm term_t_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_a_7;
ATerm term_w_6;
ATerm term_n_6;
void init_constant_terms (void)
{
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no pretty-print tables specified with -p arguments", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_f_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_u_11);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_j_15, term_j_14);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_b_15);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_b_15);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, term_q_20, term_b_15);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_t_23);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_b_15);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__3, term_s_23, term_t_23, (ATerm) ATempty);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm separate_by_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm p_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm a_74 (ATerm));
ATerm xtc_parse_pp_table_0 (ATerm);
ATerm parse_to_temp_file_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm a_59 (ATerm));
ATerm Fst_0 (ATerm);
ATerm modification_time_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm lookup_pp_af_0 (ATerm);
ATerm lookup_or_parse_0 (ATerm);
ATerm must_be_pp_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm w_64 (ATerm));
ATerm has_extension_1 (ATerm, ATerm j_76 (ATerm));
ATerm ensure_pp_table_parsed_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm get_config_p_0 (ATerm);
ATerm create_pp_table_args_0 (ATerm);
ATerm build_impl_args_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm v_58 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm d_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm c_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm e_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm e_70 (ATerm), ATerm f_70 (ATerm));
ATerm union_1 (ATerm, ATerm a_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm n_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm z_73 (ATerm));
ATerm assert_1 (ATerm, ATerm v_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm j_75 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm m_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm b_74 (ATerm), ATerm c_74 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm s_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm c_63 (ATerm), ATerm d_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm p_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm q_73 (ATerm));
ATerm ast2abox_0 (ATerm);
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
ATerm ast2abox_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm));
ATerm crush_2 (ATerm, ATerm p_69 (ATerm), ATerm q_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_80 (ATerm));
ATerm Program_1 (ATerm, ATerm l_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm m_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm q_50 (ATerm), ATerm r_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_75 (ATerm));
ATerm map_1 (ATerm, ATerm d_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_51 (ATerm), ATerm a_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm io_ast2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm separate_by_0 (ATerm t)
{
  ATerm e_1 = NULL,j_1 = NULL,k_1 = NULL;
  e_1 = t;
  y_0 :
  if(match_cons(e_1, sym__2))
    {
      j_1 = ATgetArgument(e_1, 0);
      k_1 = ATgetArgument(e_1, 1);
      {
        t = not_null(k_1);
        {
          ATerm v_2 = t;
          int c_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_6);
            }
          else
            {
              t = v_2;
              {
                ATerm b_0 (ATerm t)
                {
                  ATerm d_6 = t;
                  int e_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(e_6);
                    }
                  else
                    {
                      t = d_6;
                      {
                        ATerm b_2 = NULL;
                        t = Cons_2(t, _id, b_0);
                        {
                          ATerm t_2 = NULL;
                          t_2 = t;
                          if(((b_2 != NULL) && (b_2 != t_2)))
                            _fail(t_2);
                          else
                            b_2 = t_2;
                          t = (ATerm) ATinsert(CheckATermList(not_null(b_2)), not_null(j_1));
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
  ATerm d_3 = NULL,f_3 = NULL,g_3 = NULL;
  d_3 = t;
  c_3 :
  if(match_cons(d_3, sym__2))
    {
      f_3 = ATgetArgument(d_3, 0);
      g_3 = ATgetArgument(d_3, 1);
      t = SSL_rename(not_null(f_3), not_null(g_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm t_3 = NULL,u_3 = NULL;
  t_3 = t;
  s_3 :
  if(match_cons(t_3, sym_FILE_1))
    {
      u_3 = ATgetArgument(t_3, 0);
      {
        ATerm f_6 = t;
        int g_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 = NULL;
            t = p_0(t);
            {
              w_3 = t;
              o_3 :
              if(match_cons(w_3, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_n_6);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(u_3);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_n_6;
            LocalPopChoice(g_6);
          }
        else
          {
            t = f_6;
            {
              ATerm o_6 = t;
              int p_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_3 = NULL;
                  ATerm z_3 = NULL;
                  t = p_0(t);
                  {
                    z_3 = t;
                    {
                      if(((y_3 != NULL) && (y_3 != z_3)))
                        _fail(z_3);
                      else
                        y_3 = z_3;
                      {
                        ATerm q_6 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm t_6 = t;
                            int v_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(v_6);
                              }
                            else
                              {
                                t = t_6;
                                {
                                  ATerm a_4 = NULL;
                                  a_4 = t;
                                  if(((u_3 != NULL) && (u_3 != a_4)))
                                    _fail(a_4);
                                  else
                                    u_3 = a_4;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = q_6;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), not_null(y_3));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_3));
                  LocalPopChoice(p_6);
                }
              else
                {
                  t = o_6;
                  {
                    ATerm c_4 = NULL;
                    t = p_0(t);
                    {
                      c_4 = t;
                      if(((u_3 != NULL) && (u_3 != c_4)))
                        _fail(c_4);
                      else
                        u_3 = c_4;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_3));
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
ATerm xtc_transform_1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, a_74, c_0);
  return(t);
}
ATerm xtc_parse_pp_table_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    t = term_w_6;
    return(t);
  }
  t = xtc_transform_1(t, e_0);
  return(t);
}
ATerm parse_to_temp_file_0 (ATerm t)
{
  ATerm n_4 = NULL;
  ATerm p_4 = NULL,q_4 = NULL;
  n_4 = t;
  {
    ATerm f_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_4));
      {
        ATerm q_0 (ATerm t)
        {
          t = term_w_6;
          return(t);
        }
        t = xtc_transform_1(t, q_0);
        t = rename_to_1(t, new_file_0);
      }
      return(t);
    }
    t = xtc_temp_files_1(t, f_0);
    {
      p_4 = t;
      m_4 :
      if(match_cons(p_4, sym_FILE_1))
        {
          q_4 = ATgetArgument(p_4, 0);
          {
            t = not_null(q_4);
            {
              ATerm r_0 (ATerm t)
              {
                ATerm s_0 (ATerm t)
                {
                  t = term_a_7;
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
ATerm if_verbose2_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_7;
      d_7 = t;
      {
        ATerm v_4 = NULL;
        ATerm w_4 = NULL;
        t = term_i_7;
        {
          t = get_config_0(t);
          {
            w_4 = t;
            if(((v_4 != NULL) && (v_4 != w_4)))
              _fail(w_4);
            else
              v_4 = w_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_4), term_j_7);
          t = geq_0(t);
        }
      }
      t = d_7;
      t = a_59(t);
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      {
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm e_5 = NULL;
  ATerm g_5 = NULL,h_5 = NULL;
  e_5 = t;
  {
    ATerm i_5 = NULL;
    ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
    t = not_null(e_5);
    {
      i_5 = t;
      {
        t = SSL_explode_term(not_null(i_5));
        {
          k_5 = t;
          b_5 :
          if(match_cons(k_5, sym__2))
            {
              l_5 = ATgetArgument(k_5, 0);
              m_5 = ATgetArgument(k_5, 1);
              c_5 :
              if(match_string(l_5, ""))
                {
                  d_5 :
                  if(((ATgetType(m_5) == AT_LIST) && !(ATisEmpty(m_5))))
                    {
                      n_5 = ATgetFirst((ATermList) m_5);
                      o_5 = (ATerm) ATgetNext((ATermList) m_5);
                      {
                        if(((h_5 != NULL) && (h_5 != n_5)))
                          _fail(n_5);
                        else
                          h_5 = n_5;
                        if(((g_5 != NULL) && (g_5 != o_5)))
                          _fail(o_5);
                        else
                          g_5 = o_5;
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
    t = not_null(h_5);
  }
  return(t);
}
ATerm modification_time_0 (ATerm t)
{
  ATerm t_5 = NULL;
  t_5 = t;
  t = SSL_modification_time(not_null(t_5));
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
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym__2))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_6)), term_k_7), not_null(z_5));
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
  ATerm h_6 = NULL,j_6 = NULL;
  ATerm l_7;
  l_7 = t;
  {
    ATerm i_6 = NULL;
    i_6 = t;
    if(((h_6 != NULL) && (h_6 != i_6)))
      _fail(i_6);
    else
      h_6 = i_6;
  }
  t = l_7;
  {
    ATerm k_6 = NULL,m_6 = NULL;
    ATerm l_6 = NULL;
    l_6 = t;
    if(((k_6 != NULL) && (k_6 != l_6)))
      _fail(l_6);
    else
      k_6 = l_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_6), term_m_7);
      {
        t = add_extension_0(t);
        {
          t = file_exists_0(t);
          {
            m_6 = t;
            if(((j_6 != NULL) && (j_6 != m_6)))
              _fail(m_6);
            else
              j_6 = m_6;
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), not_null(h_6));
      {
        ATerm n_7;
        n_7 = t;
        {
          t = _2(t, modification_time_0, modification_time_0);
          t = geq_0(t);
        }
        t = n_7;
        {
          t = Fst_0(t);
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                t = term_t_7;
                return(t);
              }
              t = debug_1(t, u_0);
              return(t);
            }
            t = if_verbose2_1(t, t_0);
          }
        }
      }
    }
  }
  return(t);
}
ATerm lookup_or_parse_0 (ATerm t)
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = lookup_pp_af_0(t);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      t = parse_to_temp_file_0(t);
    }
  return(t);
}
ATerm must_be_pp_0 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_0 (ATerm t)
      {
        t = term_a_8;
        return(t);
      }
      t = has_extension_1(t, v_0);
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm r_6 = NULL;
        ATerm s_6 = NULL;
        s_6 = t;
        if(((r_6 != NULL) && (r_6 != s_6)))
          _fail(s_6);
        else
          r_6 = s_6;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_6)), term_f_8);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm g_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_64(t);
        LocalPopChoice(h_8);
      }
    else
      {
        t = g_8;
        t = Cons_2(t, _id, u_6);
      }
    return(t);
  }
  t = u_6(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm j_76 (ATerm))
{
  ATerm x_6 = NULL;
  ATerm i_8;
  i_8 = t;
  {
    ATerm y_6 = NULL;
    t = j_76(t);
    {
      t = explode_string_0(t);
      {
        y_6 = t;
        if(((x_6 != NULL) && (x_6 != y_6)))
          _fail(y_6);
        else
          x_6 = y_6;
      }
    }
  }
  t = i_8;
  {
    ATerm j_8;
    j_8 = t;
    {
      t = explode_string_0(t);
      {
        ATerm w_0 (ATerm t)
        {
          ATerm z_6 = NULL;
          z_6 = t;
          if(((x_6 != NULL) && (x_6 != z_6)))
            _fail(z_6);
          else
            x_6 = z_6;
          return(t);
        }
        t = at_suffix_1(t, w_0);
      }
    }
    t = j_8;
  }
  return(t);
}
ATerm ensure_pp_table_parsed_0 (ATerm t)
{
  ATerm l_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 (ATerm t)
      {
        t = term_p_8;
        return(t);
      }
      t = has_extension_1(t, x_0);
      LocalPopChoice(o_8);
    }
  else
    {
      t = l_8;
      {
        t = must_be_pp_0(t);
        {
          ATerm q_8 = t;
          int s_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = lookup_pp_af_0(t);
              LocalPopChoice(s_8);
            }
          else
            {
              t = q_8;
              t = parse_to_temp_file_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm t_8;
  t_8 = t;
  {
    t = error_0(t);
    {
      t = term_u_8;
      t = exit_0(t);
    }
  }
  t = t_8;
  return(t);
}
ATerm get_config_p_0 (ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_9;
      t = get_config_0(t);
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        t = (ATerm) ATinsert(ATempty, term_c_9);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm create_pp_table_args_0 (ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL;
  t = get_config_p_0(t);
  {
    t = map_1(t, ensure_pp_table_parsed_0);
    {
      ATerm f_7 = NULL;
      f_7 = t;
      if(((e_7 != NULL) && (e_7 != f_7)))
        _fail(f_7);
      else
        e_7 = f_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(e_7));
        {
          t = separate_by_0(t);
          {
            ATerm h_7 = NULL;
            h_7 = t;
            if(((g_7 != NULL) && (g_7 != h_7)))
              _fail(h_7);
            else
              g_7 = h_7;
            {
              t = (ATerm) ATinsert(CheckATermList(not_null(g_7)), term_b_9);
              {
                ATerm z_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = term_e_9;
                    return(t);
                  }
                  t = debug_1(t, a_1);
                  return(t);
                }
                t = if_verbose5_1(t, z_0);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm build_impl_args_0 (ATerm t)
{
  t = create_pp_table_args_0(t);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym_stdin_0))
    {
      ATerm r_7 = NULL;
      ATerm s_7 = NULL;
      t = term_f_9;
      {
        t = ReadFromFile_0(t);
        {
          s_7 = t;
          if(((r_7 != NULL) && (r_7 != s_7)))
            _fail(s_7);
          else
            r_7 = s_7;
        }
      }
      t = not_null(r_7);
    }
  else
    {
      if(match_cons(p_7, sym_FILE_1))
        {
          q_7 = ATgetArgument(p_7, 0);
          {
            ATerm u_7 = NULL;
            ATerm v_7 = NULL;
            t = not_null(q_7);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  v_7 = t;
                  if(((u_7 != NULL) && (u_7 != v_7)))
                    _fail(v_7);
                  else
                    u_7 = v_7;
                }
              }
            }
            t = not_null(u_7);
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
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym__2))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      t = SSL_WriteToBinaryFile(not_null(d_8), not_null(e_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm k_8 = NULL;
  ATerm m_8 = NULL;
  k_8 = t;
  {
    ATerm n_8 = NULL;
    t = xtc_new_file_0(t);
    {
      n_8 = t;
      {
        if(((m_8 != NULL) && (m_8 != n_8)))
          _fail(n_8);
        else
          m_8 = n_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(k_8));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(m_8);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_8));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, i_74, j_74);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm r_8 = NULL;
  r_8 = t;
  t = SSL_close_file(not_null(r_8));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym__2))
    {
      x_8 = ATgetArgument(w_8, 0);
      y_8 = ATgetArgument(w_8, 1);
      t = SSL_execvp(not_null(x_8), not_null(y_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm d_9 = NULL;
  d_9 = t;
  t = SSL_waitpid(not_null(d_9));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm v_58 (ATerm))
{
  ATerm n_9 = NULL;
  ATerm p_9 = NULL;
  n_9 = t;
  {
    t = fork_0(t);
    {
      p_9 = t;
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_9 = NULL;
            r_9 = t;
            j_9 :
            if(match_int(r_9, 0))
              {
                t = not_null(n_9);
                t = v_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            {
              ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
              t = not_null(p_9);
              {
                t = waitpid_0(t);
                {
                  s_9 = t;
                  l_9 :
                  if(match_cons(s_9, sym_WaitStatus_3))
                    {
                      t_9 = ATgetArgument(s_9, 0);
                      u_9 = ATgetArgument(s_9, 1);
                      v_9 = ATgetArgument(s_9, 2);
                      m_9 :
                      if(match_int(t_9, 0))
                        {
                          t = not_null(n_9);
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
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
  c_10 = t;
  b_10 :
  if(match_cons(c_10, sym__2))
    {
      d_10 = ATgetArgument(c_10, 0);
      e_10 = ATgetArgument(c_10, 1);
      {
        ATerm b_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), not_null(e_10));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, b_1);
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
  ATerm j_10 = NULL;
  j_10 = t;
  t = SSL_table_keys(not_null(j_10));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  {
    t = table_keys_0(t);
    {
      ATerm c_1 (ATerm t)
      {
        ATerm r_10 = NULL;
        ATerm t_10 = NULL;
        r_10 = t;
        {
          ATerm u_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_10), not_null(r_10));
          {
            t = table_get_0(t);
            {
              u_10 = t;
              if(((t_10 != NULL) && (t_10 != u_10)))
                _fail(u_10);
              else
                t_10 = u_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_10), not_null(t_10));
        }
        return(t);
      }
      t = map_1(t, c_1);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm i_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_9;
      o_9 = t;
      {
        ATerm z_10 = NULL;
        ATerm a_11 = NULL;
        t = term_i_7;
        {
          t = get_config_0(t);
          {
            a_11 = t;
            if(((z_10 != NULL) && (z_10 != a_11)))
              _fail(a_11);
            else
              z_10 = a_11;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_10), term_q_9);
          t = geq_0(t);
        }
      }
      t = o_9;
      t = d_59(t);
      LocalPopChoice(k_9);
    }
  else
    {
      t = i_9;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm w_9;
  w_9 = t;
  {
    ATerm d_11 = NULL;
    ATerm e_11 = NULL;
    e_11 = t;
    if(((d_11 != NULL) && (d_11 != e_11)))
      _fail(e_11);
    else
      d_11 = e_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, not_null(d_11));
      t = printnl_0(t);
    }
  }
  t = w_9;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm k_11 = NULL;
  ATerm m_11 = NULL,n_11 = NULL;
  k_11 = t;
  {
    ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_y_9, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_11)));
    {
      t = table_get_0(t);
      {
        o_11 = t;
        i_11 :
        if(((ATgetType(o_11) == AT_LIST) && !(ATisEmpty(o_11))))
          {
            p_11 = ATgetFirst((ATermList) o_11);
            s_11 = (ATerm) ATgetNext((ATermList) o_11);
            j_11 :
            if(match_cons(p_11, sym__2))
              {
                q_11 = ATgetArgument(p_11, 0);
                r_11 = ATgetArgument(p_11, 1);
                {
                  if(((m_11 != NULL) && (m_11 != q_11)))
                    _fail(q_11);
                  else
                    m_11 = q_11;
                  if(((n_11 != NULL) && (n_11 != r_11)))
                    _fail(r_11);
                  else
                    n_11 = r_11;
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
    t = not_null(n_11);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  y_11 :
  if(match_cons(z_11, sym__2))
    {
      a_12 = ATgetArgument(z_11, 0);
      b_12 = ATgetArgument(z_11, 1);
      {
        ATerm e_12 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_y_9, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_12)));
        {
          t = table_get_0(t);
          {
            ATerm d_1 (ATerm t)
            {
              ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
              f_12 = t;
              x_11 :
              if(match_cons(f_12, sym__2))
                {
                  g_12 = ATgetArgument(f_12, 0);
                  h_12 = ATgetArgument(f_12, 1);
                  {
                    if(((b_12 != NULL) && (b_12 != g_12)))
                      _fail(g_12);
                    else
                      b_12 = g_12;
                    if(((e_12 != NULL) && (e_12 != h_12)))
                      _fail(h_12);
                    else
                      e_12 = h_12;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, d_1);
          }
        }
        t = not_null(e_12);
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
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_10;
      {
        t = table_get_0(t);
        {
          ATerm f_1 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, f_1);
        }
      }
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_10;
      k_10 = t;
      {
        ATerm l_12 = NULL;
        ATerm m_12 = NULL;
        t = term_i_7;
        {
          t = get_config_0(t);
          {
            m_12 = t;
            if(((l_12 != NULL) && (l_12 != m_12)))
              _fail(m_12);
            else
              l_12 = m_12;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_12), term_l_10);
          t = geq_0(t);
        }
      }
      t = k_10;
      t = c_59(t);
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm e_59 (ATerm))
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_10;
      o_10 = t;
      {
        ATerm p_12 = NULL;
        ATerm q_12 = NULL;
        t = term_i_7;
        {
          t = get_config_0(t);
          {
            q_12 = t;
            if(((p_12 != NULL) && (p_12 != q_12)))
              _fail(q_12);
            else
              p_12 = q_12;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_12), term_q_10);
          t = geq_0(t);
        }
      }
      t = o_10;
      t = e_59(t);
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
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
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  u_12 = t;
  t_12 :
  if(match_cons(u_12, sym__2))
    {
      v_12 = ATgetArgument(u_12, 0);
      w_12 = ATgetArgument(u_12, 1);
      if(((v_12 != NULL) && (v_12 != w_12)))
        _fail(w_12);
      else
        v_12 = w_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm e_70 (ATerm), ATerm f_70 (ATerm))
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  c_13 = t;
  b_13 :
  if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
    {
      d_13 = ATgetFirst((ATermList) c_13);
      e_13 = (ATerm) ATgetNext((ATermList) c_13);
      {
        t = f_70(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_13 = NULL;
            h_13 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), not_null(h_13));
              t = e_70(t);
            }
            return(t);
          }
          t = fetch_1(t, g_1);
        }
        t = not_null(e_13);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm a_70 (ATerm))
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym__2))
    {
      o_13 = ATgetArgument(n_13, 0);
      p_13 = ATgetArgument(n_13, 1);
      {
        t = not_null(o_13);
        {
          ATerm t_13 (ATerm t)
          {
            ATerm s_10 = t;
            int v_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_13);
                LocalPopChoice(v_10);
              }
            else
              {
                t = s_10;
                {
                  ATerm w_10 = t;
                  int x_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_1 (ATerm t)
                      {
                        t = not_null(p_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, a_70, h_1);
                      t = t_13(t);
                      LocalPopChoice(x_10);
                    }
                  else
                    {
                      t = w_10;
                      t = Cons_2(t, _id, t_13);
                    }
                }
              }
            return(t);
          }
          t = t_13(t);
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
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
  y_13 = t;
  x_13 :
  if(match_cons(y_13, sym__3))
    {
      z_13 = ATgetArgument(y_13, 0);
      a_14 = ATgetArgument(y_13, 1);
      b_14 = ATgetArgument(y_13, 2);
      {
        ATerm y_10;
        y_10 = t;
        {
          ATerm f_14 = NULL;
          ATerm g_14 = NULL,i_14 = NULL;
          ATerm h_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), not_null(a_14));
          {
            ATerm b_11 = t;
            int c_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_11);
              }
            else
              {
                t = b_11;
                t = (ATerm) ATempty;
              }
            {
              h_14 = t;
              if(((g_14 != NULL) && (g_14 != h_14)))
                _fail(h_14);
              else
                g_14 = h_14;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_14), not_null(b_14));
            {
              t = union_1(t, eq_0);
              {
                i_14 = t;
                if(((f_14 != NULL) && (f_14 != i_14)))
                  _fail(i_14);
                else
                  f_14 = i_14;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_13), not_null(a_14), not_null(f_14));
            t = table_put_0(t);
          }
        }
        t = y_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym__2))
    {
      r_14 = ATgetArgument(q_14, 0);
      s_14 = ATgetArgument(q_14, 1);
      {
        t = not_null(s_14);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
            v_14 = t;
            o_14 :
            if(match_cons(v_14, sym__2))
              {
                w_14 = ATgetArgument(v_14, 0);
                x_14 = ATgetArgument(v_14, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_14), not_null(w_14), not_null(x_14));
                  t = n_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, i_1);
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
  ATerm d_15 = NULL;
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_15 = NULL;
      e_15 = t;
      {
        if(((d_15 != NULL) && (d_15 != e_15)))
          _fail(e_15);
        else
          d_15 = e_15;
        t = SSL_ReadFromFile(not_null(d_15));
      }
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm l_1 (ATerm t)
        {
          t = term_h_11;
          return(t);
        }
        t = debug_1(t, l_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm i_15 = NULL;
  ATerm k_15 = NULL;
  i_15 = t;
  {
    ATerm l_11 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_9, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_15)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_11;
      }
    {
      ATerm t_11;
      t_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_9, term_u_11, (ATerm) ATinsert(ATempty, not_null(i_15)));
        t = table_put_0(t);
      }
      t = t_11;
      {
        ATerm m_1 (ATerm t)
        {
          ATerm n_1 (ATerm t)
          {
            t = term_v_11;
            return(t);
          }
          t = debug_1(t, n_1);
          return(t);
        }
        t = if_verbose4_1(t, m_1);
        {
          ATerm w_11 = t;
          int c_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(c_12);
            }
          else
            {
              t = w_11;
              t = (ATerm) ATempty;
            }
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = term_d_12;
                return(t);
              }
              t = say_1(t, p_1);
              return(t);
            }
            t = if_verbose6_1(t, o_1);
            {
              ATerm l_15 = NULL;
              l_15 = t;
              if(((k_15 != NULL) && (k_15 != l_15)))
                _fail(l_15);
              else
                k_15 = l_15;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(k_15));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm q_1 (ATerm t)
                    {
                      ATerm r_1 (ATerm t)
                      {
                        t = term_i_12;
                        return(t);
                      }
                      t = say_1(t, r_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, q_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_y_9, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_15)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm s_1 (ATerm t)
                          {
                            ATerm t_1 (ATerm t)
                            {
                              t = term_d_12;
                              return(t);
                            }
                            t = say_1(t, t_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, s_1);
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
  ATerm p_15 = NULL;
  p_15 = t;
  t = SSL_getenv(not_null(p_15));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_12;
      t = get_config_0(t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      {
        ATerm o_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_12;
            t = getenv_0(t);
            LocalPopChoice(r_12);
          }
        else
          {
            t = o_12;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm v_1 (ATerm t)
    {
      t = term_x_12;
      return(t);
    }
    t = debug_1(t, v_1);
    return(t);
  }
  t = if_verbose5_1(t, u_1);
  {
    ATerm y_12;
    y_12 = t;
    {
      ATerm z_12 = t;
      int a_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_f_13;
          t = table_get_0(t);
          LocalPopChoice(a_13);
        }
      else
        {
          t = z_12;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = y_12;
    {
      ATerm w_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          t = term_g_13;
          return(t);
        }
        t = debug_1(t, x_1);
        return(t);
      }
      t = if_verbose5_1(t, w_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          t = term_k_13;
          return(t);
        }
        t = debug_1(t, z_1);
        return(t);
      }
      t = if_verbose5_1(t, y_1);
      {
        t = xtc_load_0(t);
        {
          ATerm l_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(q_13);
            }
          else
            {
              t = l_13;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm a_2 (ATerm t)
            {
              ATerm c_2 (ATerm t)
              {
                t = term_k_13;
                return(t);
              }
              t = debug_1(t, c_2);
              return(t);
            }
            t = if_verbose5_1(t, a_2);
          }
        }
      }
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
        ATerm t_15 = NULL;
        ATerm u_15 = NULL;
        u_15 = t;
        if(((t_15 != NULL) && (t_15 != u_15)))
          _fail(u_15);
        else
          t_15 = u_15;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_13), not_null(t_15)), term_r_13);
          {
            t = error_0(t);
            {
              ATerm d_2 (ATerm t)
              {
                t = term_y_9;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm e_2 (ATerm t)
                    {
                      t = term_u_13;
                      return(t);
                    }
                    t = debug_1(t, e_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, d_2);
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
ATerm xtc_command_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm y_15 = NULL;
  ATerm v_13;
  v_13 = t;
  {
    ATerm z_15 = NULL;
    t = z_73(t);
    {
      t = xtc_find_0(t);
      {
        z_15 = t;
        if(((y_15 != NULL) && (y_15 != z_15)))
          _fail(z_15);
        else
          y_15 = z_15;
      }
    }
  }
  t = v_13;
  {
    ATerm w_13;
    w_13 = t;
    {
      ATerm a_16 = NULL;
      ATerm b_16 = NULL;
      b_16 = t;
      if(((a_16 != NULL) && (a_16 != b_16)))
        _fail(b_16);
      else
        a_16 = b_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_15), not_null(a_16));
        t = call_0(t);
      }
    }
    t = w_13;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  j_16 = t;
  i_16 :
  if(match_cons(j_16, sym__2))
    {
      k_16 = ATgetArgument(j_16, 0);
      l_16 = ATgetArgument(j_16, 1);
      {
        ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
        ATerm c_14;
        c_14 = t;
        {
          ATerm r_16 = NULL;
          ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
          t = v_74(t);
          {
            r_16 = t;
            {
              if(((o_16 != NULL) && (o_16 != r_16)))
                _fail(r_16);
              else
                o_16 = r_16;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_16), not_null(k_16), not_null(l_16));
                {
                  t = table_push_0(t);
                  {
                    ATerm d_14 = t;
                    int e_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_16), term_j_14);
                        t = table_get_0(t);
                        LocalPopChoice(e_14);
                      }
                    else
                      {
                        t = d_14;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      s_16 = t;
                      h_16 :
                      if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
                        {
                          t_16 = ATgetFirst((ATermList) s_16);
                          u_16 = (ATerm) ATgetNext((ATermList) s_16);
                          {
                            if(((p_16 != NULL) && (p_16 != t_16)))
                              _fail(t_16);
                            else
                              p_16 = t_16;
                            {
                              if(((q_16 != NULL) && (q_16 != u_16)))
                                _fail(u_16);
                              else
                                q_16 = u_16;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_16), term_j_14, (ATerm) ATinsert(CheckATermList(not_null(q_16)), (ATerm) ATinsert(CheckATermList(not_null(p_16)), not_null(k_16))));
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
        t = c_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm k_14;
  k_14 = t;
  {
    t = j_75(t);
    {
      ATerm f_2 (ATerm t)
      {
        t = term_l_14;
        return(t);
      }
      t = debug_1(t, f_2);
    }
  }
  t = k_14;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
      e_17 = t;
      z_16 :
      if(match_cons(e_17, sym__2))
        {
          f_17 = ATgetArgument(e_17, 0);
          g_17 = ATgetArgument(e_17, 1);
          {
            if(((d_17 != NULL) && (d_17 != f_17)))
              _fail(f_17);
            else
              d_17 = f_17;
            if(((c_17 != NULL) && (c_17 != g_17)))
              _fail(g_17);
            else
              c_17 = g_17;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_14);
      t = SSL_open_file(not_null(d_17), not_null(c_17));
    }
  else
    {
      t = m_14;
      {
        ATerm h_17 = NULL;
        ATerm i_17 = NULL;
        ATerm g_2 (ATerm t)
        {
          t = term_t_14;
          return(t);
        }
        t = obsolete_1(t, g_2);
        {
          h_17 = t;
          {
            if(((d_17 != NULL) && (d_17 != h_17)))
              _fail(h_17);
            else
              d_17 = h_17;
            {
              ATerm u_14;
              u_14 = t;
              {
                ATerm j_17 = NULL;
                t = term_y_14;
                {
                  j_17 = t;
                  if(((i_17 != NULL) && (i_17 != j_17)))
                    _fail(j_17);
                  else
                    i_17 = j_17;
                }
              }
              t = u_14;
              t = SSL_open_file(not_null(d_17), not_null(i_17));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm p_17 = NULL;
  ATerm r_17 = NULL;
  p_17 = t;
  {
    ATerm z_14;
    z_14 = t;
    {
      ATerm s_17 = NULL;
      t = term_a_15;
      {
        s_17 = t;
        if(((r_17 != NULL) && (r_17 != s_17)))
          _fail(s_17);
        else
          r_17 = s_17;
      }
    }
    t = z_14;
    {
      t = SSL_open_file(not_null(p_17), not_null(r_17));
      t = SSL_close_file(not_null(p_17));
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
  ATerm w_17 = NULL;
  ATerm x_17 = NULL;
  t = term_b_15;
  {
    t = new_0(t);
    {
      x_17 = t;
      if(((w_17 != NULL) && (w_17 != x_17)))
        _fail(x_17);
      else
        w_17 = x_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_17), term_c_15);
    {
      t = conc_strings_0(t);
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
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
  ATerm b_18 = NULL;
  t = new_file_0(t);
  {
    b_18 = t;
    {
      ATerm h_15;
      h_15 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), term_y_14);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), term_b_15);
            {
              ATerm h_2 (ATerm t)
              {
                t = term_j_15;
                return(t);
              }
              t = assert_1(t, h_2);
            }
          }
        }
      }
      t = h_15;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym_stdin_0))
    {
      ATerm n_18 = NULL;
      ATerm o_18 = NULL;
      ATerm p_18 = NULL;
      t = xtc_new_file_0(t);
      {
        o_18 = t;
        {
          if(((n_18 != NULL) && (n_18 != o_18)))
            _fail(o_18);
          else
            n_18 = o_18;
          {
            ATerm q_18 = NULL;
            t = o_0(t);
            {
              q_18 = t;
              if(((p_18 != NULL) && (p_18 != q_18)))
                _fail(q_18);
              else
                p_18 = q_18;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), (ATerm) ATinsert(ATinsert(ATempty, not_null(n_18)), term_m_15));
              {
                ATerm n_15 = t;
                int o_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(o_15);
                  }
                else
                  {
                    t = n_15;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(n_18);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_18));
    }
  else
    {
      if(match_cons(l_18, sym_FILE_1))
        {
          m_18 = ATgetArgument(l_18, 0);
          {
            ATerm s_18 = NULL;
            ATerm t_18 = NULL;
            t = not_null(m_18);
            {
              ATerm v_18 = NULL;
              t = xtc_new_file_0(t);
              {
                t_18 = t;
                {
                  if(((s_18 != NULL) && (s_18 != t_18)))
                    _fail(t_18);
                  else
                    s_18 = t_18;
                  {
                    ATerm w_18 = NULL;
                    t = o_0(t);
                    {
                      w_18 = t;
                      if(((v_18 != NULL) && (v_18 != w_18)))
                        _fail(w_18);
                      else
                        v_18 = w_18;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_18), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_18)), term_m_15), not_null(m_18)), term_q_15));
                      {
                        ATerm r_15 = t;
                        int s_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(s_15);
                          }
                        else
                          {
                            t = r_15;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(s_18);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_18));
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
  ATerm h_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym_stdin_0))
    {
      ATerm j_19 = NULL,l_19 = NULL;
      ATerm v_15;
      v_15 = t;
      {
        ATerm k_19 = NULL;
        t = SSLgetAnnotations(not_null(h_19));
        {
          k_19 = t;
          if(((j_19 != NULL) && (j_19 != k_19)))
            _fail(k_19);
          else
            j_19 = k_19;
        }
      }
      t = v_15;
      {
        ATerm m_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(j_19));
        {
          m_19 = t;
          if(((l_19 != NULL) && (l_19 != m_19)))
            _fail(m_19);
          else
            l_19 = m_19;
        }
        t = not_null(l_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm m_52 (ATerm))
{
  ATerm b_20 = NULL,c_20 = NULL;
  b_20 = t;
  a_20 :
  if(match_cons(b_20, sym_FILE_1))
    {
      c_20 = ATgetArgument(b_20, 0);
      {
        ATerm h_20 = NULL,j_20 = NULL;
        ATerm i_20 = NULL;
        t = SSLgetAnnotations(not_null(b_20));
        {
          i_20 = t;
          if(((h_20 != NULL) && (h_20 != i_20)))
            _fail(i_20);
          else
            h_20 = i_20;
        }
        {
          t = not_null(c_20);
          {
            ATerm l_20 = NULL;
            t = m_52(t);
            {
              j_20 = t;
              {
                ATerm m_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(j_20)), not_null(h_20));
                {
                  m_20 = t;
                  if(((l_20 != NULL) && (l_20 != m_20)))
                    _fail(m_20);
                  else
                    l_20 = m_20;
                }
                t = not_null(l_20);
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
ATerm xtc_transform_2 (ATerm t, ATerm b_74 (ATerm), ATerm c_74 (ATerm))
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_16 = t;
      int d_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(d_16);
        }
      else
        {
          t = c_16;
          t = stdin_0(t);
        }
      LocalPopChoice(x_15);
      t = xtc_transform_file_2(t, b_74, c_74);
    }
  else
    {
      t = w_15;
      t = xtc_transform_term_2(t, b_74, c_74);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym__2))
    {
      z_20 = ATgetArgument(y_20, 0);
      a_21 = ATgetArgument(y_20, 1);
      t = SSL_copy(not_null(z_20), not_null(a_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  h_21 :
  if(match_cons(i_21, sym_stderr_0))
    {
      ATerm p_21 = NULL,r_21 = NULL;
      ATerm e_16;
      e_16 = t;
      {
        ATerm q_21 = NULL;
        t = SSLgetAnnotations(not_null(i_21));
        {
          q_21 = t;
          if(((p_21 != NULL) && (p_21 != q_21)))
            _fail(q_21);
          else
            p_21 = q_21;
        }
      }
      t = e_16;
      {
        ATerm w_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(p_21));
        {
          w_21 = t;
          if(((r_21 != NULL) && (r_21 != w_21)))
            _fail(w_21);
          else
            r_21 = w_21;
        }
        t = not_null(r_21);
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
  ATerm n_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_stdout_0))
    {
      ATerm p_22 = NULL,r_22 = NULL;
      ATerm f_16;
      f_16 = t;
      {
        ATerm q_22 = NULL;
        t = SSLgetAnnotations(not_null(n_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
      }
      t = f_16;
      {
        ATerm s_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(p_22));
        {
          s_22 = t;
          if(((r_22 != NULL) && (r_22 != s_22)))
            _fail(s_22);
          else
            r_22 = s_22;
        }
        t = not_null(r_22);
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
  ATerm g_23 = NULL,h_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym_FILE_1))
    {
      h_23 = ATgetArgument(g_23, 0);
      {
        ATerm g_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_23 = NULL;
            ATerm k_23 = NULL;
            t = m_0(t);
            {
              k_23 = t;
              {
                if(((j_23 != NULL) && (j_23 != k_23)))
                  _fail(k_23);
                else
                  j_23 = k_23;
                {
                  ATerm n_16 = t;
                  int v_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(v_16);
                    }
                  else
                    {
                      t = n_16;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), not_null(j_23));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_23));
            LocalPopChoice(m_16);
          }
        else
          {
            t = g_16;
            {
              ATerm w_16 = t;
              int x_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_23 = NULL;
                  ATerm p_23 = NULL;
                  t = m_0(t);
                  {
                    p_23 = t;
                    {
                      if(((m_23 != NULL) && (m_23 != p_23)))
                        _fail(p_23);
                      else
                        m_23 = p_23;
                      {
                        ATerm y_16 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm a_17 = t;
                            int b_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(b_17);
                              }
                            else
                              {
                                t = a_17;
                                {
                                  ATerm k_17 = t;
                                  int l_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(l_17);
                                    }
                                  else
                                    {
                                      t = k_17;
                                      {
                                        ATerm q_23 = NULL;
                                        q_23 = t;
                                        if(((h_23 != NULL) && (h_23 != q_23)))
                                          _fail(q_23);
                                        else
                                          h_23 = q_23;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = y_16;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), not_null(m_23));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_23));
                  LocalPopChoice(x_16);
                }
              else
                {
                  t = w_16;
                  {
                    ATerm x_23 = NULL;
                    t = m_0(t);
                    {
                      x_23 = t;
                      if(((h_23 != NULL) && (h_23 != x_23)))
                        _fail(x_23);
                      else
                        h_23 = x_23;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_23));
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
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  g_24 :
  if(((ATgetType(h_24) == AT_LIST) && !(ATisEmpty(h_24))))
    {
      i_24 = ATgetFirst((ATermList) h_24);
      j_24 = (ATerm) ATgetNext((ATermList) h_24);
      t = not_null(j_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  t_24 = t;
  s_24 :
  if(match_cons(t_24, sym__2))
    {
      u_24 = ATgetArgument(t_24, 0);
      v_24 = ATgetArgument(t_24, 1);
      {
        ATerm m_17;
        m_17 = t;
        {
          ATerm y_24 = NULL;
          ATerm z_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_24), not_null(v_24));
          {
            ATerm n_17 = t;
            int o_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(o_17);
              }
            else
              {
                t = n_17;
                t = (ATerm) ATempty;
              }
            {
              z_24 = t;
              if(((y_24 != NULL) && (y_24 != z_24)))
                _fail(z_24);
              else
                y_24 = z_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_24), not_null(v_24), not_null(y_24));
            t = table_put_0(t);
          }
        }
        t = m_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  ATerm q_17;
  q_17 = t;
  {
    ATerm j_25 = NULL;
    ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
    t = s_74(t);
    {
      j_25 = t;
      {
        if(((i_25 != NULL) && (i_25 != j_25)))
          _fail(j_25);
        else
          i_25 = j_25;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), term_j_14);
              t = table_get_0(t);
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            k_25 = t;
            f_25 :
            if(((ATgetType(k_25) == AT_LIST) && !(ATisEmpty(k_25))))
              {
                l_25 = ATgetFirst((ATermList) k_25);
                m_25 = (ATerm) ATgetNext((ATermList) k_25);
                {
                  if(((h_25 != NULL) && (h_25 != l_25)))
                    _fail(l_25);
                  else
                    h_25 = l_25;
                  {
                    if(((g_25 != NULL) && (g_25 != m_25)))
                      _fail(m_25);
                    else
                      g_25 = m_25;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(i_25), term_j_14, not_null(g_25));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(h_25);
                          {
                            ATerm i_2 (ATerm t)
                            {
                              ATerm n_25 = NULL;
                              n_25 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), not_null(n_25));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, i_2);
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
  t = q_17;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm t_25 = NULL;
  t_25 = t;
  t = SSL_remove(not_null(t_25));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm c_63 (ATerm), ATerm d_63 (ATerm))
{
  ATerm v_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_63(t);
      t = d_63(t);
      LocalPopChoice(y_17);
    }
  else
    {
      t = v_17;
      {
        t = d_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm y_25 = NULL;
  ATerm z_17;
  z_17 = t;
  {
    ATerm z_25 = NULL;
    ATerm a_26 = NULL;
    t = r_74(t);
    {
      z_25 = t;
      {
        if(((y_25 != NULL) && (y_25 != z_25)))
          _fail(z_25);
        else
          y_25 = z_25;
        {
          ATerm b_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), term_j_14);
          {
            ATerm a_18 = t;
            int c_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_18);
              }
            else
              {
                t = a_18;
                t = (ATerm) ATempty;
              }
            {
              b_26 = t;
              if(((a_26 != NULL) && (a_26 != b_26)))
                _fail(b_26);
              else
                a_26 = b_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_25), term_j_14, (ATerm) ATinsert(CheckATermList(not_null(a_26)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = z_17;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm g_26 = NULL,h_26 = NULL;
  ATerm j_2 (ATerm t)
  {
    t = term_j_15;
    return(t);
  }
  t = begin_scope_1(t, j_2);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm d_18;
      d_18 = t;
      {
        ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_18;
            t = table_get_0(t);
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          i_26 = t;
          f_26 :
          if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
            {
              j_26 = ATgetFirst((ATermList) i_26);
              k_26 = (ATerm) ATgetNext((ATermList) i_26);
              {
                if(((h_26 != NULL) && (h_26 != j_26)))
                  _fail(j_26);
                else
                  h_26 = j_26;
                {
                  if(((g_26 != NULL) && (g_26 != k_26)))
                    _fail(k_26);
                  else
                    g_26 = k_26;
                  {
                    t = not_null(h_26);
                    {
                      ATerm l_2 (ATerm t)
                      {
                        ATerm h_18 = t;
                        int i_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(i_18);
                          }
                        else
                          {
                            t = h_18;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, l_2);
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
      t = d_18;
      {
        ATerm m_2 (ATerm t)
        {
          t = term_j_15;
          return(t);
        }
        t = end_scope_1(t, m_2);
      }
      return(t);
    }
    t = restore_always_2(t, p_73, k_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm q_73 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm j_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL;
        ATerm o_26 = NULL;
        t = term_q_15;
        {
          t = get_config_0(t);
          {
            o_26 = t;
            if(((n_26 != NULL) && (n_26 != o_26)))
              _fail(o_26);
            else
              n_26 = o_26;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_26));
        LocalPopChoice(r_18);
      }
    else
      {
        t = j_18;
        t = term_f_9;
      }
    {
      t = q_73(t);
      {
        ATerm o_2 (ATerm t)
        {
          ATerm u_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_m_15;
              t = get_config_0(t);
              LocalPopChoice(x_18);
            }
          else
            {
              t = u_18;
              t = term_n_6;
            }
          return(t);
        }
        t = copy_to_1(t, o_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, n_2);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm q_2 (ATerm t)
    {
      t = term_y_18;
      return(t);
    }
    t = xtc_transform_2(t, q_2, create_pp_table_args_0);
    return(t);
  }
  t = xtc_io_1(t, p_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm r_26 = NULL;
    r_26 = t;
    q_26 :
    if(!(match_string(r_26, "-v")))
      {
        if(!(match_string(r_26, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_a_19;
    t = set_config_0(t);
    t = term_b_19;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_c_19;
    return(t);
  }
  t = Option_3(t, r_2, s_2, u_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm u_26 = NULL;
    u_26 = t;
    s_26 :
    if(!(match_string(u_26, "-k")))
      {
        if(!(match_string(u_26, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm d_19;
    d_19 = t;
    {
      ATerm v_26 = NULL;
      ATerm w_26 = NULL;
      t = string_to_int_0(t);
      {
        w_26 = t;
        if(((v_26 != NULL) && (v_26 != w_26)))
          _fail(w_26);
        else
          v_26 = w_26;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_19, not_null(v_26));
        t = set_config_0(t);
      }
    }
    t = d_19;
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_f_19;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_26 = NULL;
  z_26 = t;
  t = SSL_string_to_int(not_null(z_26));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm i_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        ATerm h_27 = NULL;
        h_27 = t;
        c_27 :
        if(!(match_string(h_27, "-S")))
          {
            if(!(match_string(h_27, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_p_19;
        t = set_config_0(t);
        t = term_q_19;
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_r_19;
        return(t);
      }
      t = Option_3(t, z_2, a_3, b_3);
      LocalPopChoice(n_19);
    }
  else
    {
      t = i_19;
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_3 (ATerm t)
            {
              ATerm i_27 = NULL;
              i_27 = t;
              d_27 :
              if(!(match_string(i_27, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              ATerm l_27 = NULL;
              ATerm u_19;
              u_19 = t;
              {
                ATerm j_27 = NULL;
                ATerm k_27 = NULL;
                t = string_to_int_0(t);
                {
                  k_27 = t;
                  if(((j_27 != NULL) && (j_27 != k_27)))
                    _fail(k_27);
                  else
                    j_27 = k_27;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_7, not_null(j_27));
                  t = set_config_0(t);
                }
              }
              t = u_19;
              {
                ATerm m_27 = NULL;
                m_27 = t;
                if(((l_27 != NULL) && (l_27 != m_27)))
                  _fail(m_27);
                else
                  l_27 = m_27;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_27));
              }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              t = term_v_19;
              return(t);
            }
            t = ArgOption_3(t, e_3, h_3, i_3);
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            {
              ATerm j_3 (ATerm t)
              {
                ATerm n_27 = NULL;
                n_27 = t;
                g_27 :
                if(!(match_string(n_27, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_3 (ATerm t)
              {
                t = term_x_19;
                t = set_config_0(t);
                t = term_y_19;
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                t = term_z_19;
                return(t);
              }
              t = Option_3(t, j_3, k_3, l_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm t_27 = NULL;
    t_27 = t;
    q_27 :
    if(!(match_string(t_27, "-o")))
      {
        if(!(match_string(t_27, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm w_27 = NULL;
    ATerm k_20;
    k_20 = t;
    {
      ATerm u_27 = NULL;
      ATerm v_27 = NULL;
      v_27 = t;
      if(((u_27 != NULL) && (u_27 != v_27)))
        _fail(v_27);
      else
        u_27 = v_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_15, not_null(u_27));
        t = set_config_0(t);
      }
    }
    t = k_20;
    {
      ATerm x_27 = NULL;
      x_27 = t;
      if(((w_27 != NULL) && (w_27 != x_27)))
        _fail(x_27);
      else
        w_27 = x_27;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_27));
    }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_n_20;
    return(t);
  }
  t = ArgOption_3(t, m_3, n_3, p_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm q_3 (ATerm t)
        {
          ATerm b_28 = NULL;
          b_28 = t;
          a_28 :
          if(!(match_string(b_28, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_r_20;
          t = set_config_0(t);
          t = term_s_20;
          return(t);
        }
        ATerm v_3 (ATerm t)
        {
          t = term_t_20;
          return(t);
        }
        t = Option_3(t, q_3, r_3, v_3);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm f_28 = NULL;
    f_28 = t;
    c_28 :
    if(!(match_string(f_28, "-i")))
      {
        if(!(match_string(f_28, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm i_28 = NULL;
    ATerm u_20;
    u_20 = t;
    {
      ATerm g_28 = NULL;
      ATerm h_28 = NULL;
      h_28 = t;
      if(((g_28 != NULL) && (g_28 != h_28)))
        _fail(h_28);
      else
        g_28 = h_28;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_15, not_null(g_28));
        t = set_config_0(t);
      }
    }
    t = u_20;
    {
      ATerm j_28 = NULL;
      j_28 = t;
      if(((i_28 != NULL) && (i_28 != j_28)))
        _fail(j_28);
      else
        i_28 = j_28;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_28));
    }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_v_20;
    return(t);
  }
  t = ArgOption_3(t, x_3, b_4, d_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = w_20;
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym__2))
    {
      r_28 = ATgetArgument(q_28, 0);
      s_28 = ATgetArgument(q_28, 1);
      {
        ATerm v_28 = NULL;
        ATerm w_28 = NULL,y_28 = NULL;
        ATerm x_28 = NULL;
        t = not_null(r_28);
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              t = (ATerm) ATempty;
            }
          {
            x_28 = t;
            if(((w_28 != NULL) && (w_28 != x_28)))
              _fail(x_28);
            else
              w_28 = x_28;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_28), not_null(w_28));
          {
            ATerm g_21 = t;
            int j_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(j_21);
              }
            else
              {
                t = g_21;
                t = conc_more_lists_0(t);
              }
            {
              y_28 = t;
              if(((v_28 != NULL) && (v_28 != y_28)))
                _fail(y_28);
              else
                v_28 = y_28;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_21, not_null(r_28), not_null(v_28));
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
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  n_29 = t;
  i_29 :
  if(match_string(n_29, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(n_29) == AT_LIST) && !(ATisEmpty(n_29))))
        {
          o_29 = ATgetFirst((ATermList) n_29);
          p_29 = (ATerm) ATgetNext((ATermList) n_29);
          j_29 :
          if(((ATgetType(p_29) == AT_LIST) && !(ATisEmpty(p_29))))
            {
              q_29 = ATgetFirst((ATermList) p_29);
              r_29 = (ATerm) ATgetNext((ATermList) p_29);
              {
                ATerm v_29 = NULL;
                ATerm l_21;
                l_21 = t;
                {
                  t = not_null(o_29);
                  t = j_0(t);
                }
                t = l_21;
                {
                  ATerm w_29 = NULL;
                  t = not_null(q_29);
                  {
                    t = k_0(t);
                    {
                      w_29 = t;
                      if(((v_29 != NULL) && (v_29 != w_29)))
                        _fail(w_29);
                      else
                        v_29 = w_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_29)), not_null(v_29));
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
  ATerm e_4 (ATerm t)
  {
    ATerm e_30 = NULL;
    e_30 = t;
    a_30 :
    if(!(match_string(e_30, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    ATerm m_21;
    m_21 = t;
    {
      ATerm f_30 = NULL;
      ATerm g_30 = NULL;
      g_30 = t;
      if(((f_30 != NULL) && (f_30 != g_30)))
        _fail(g_30);
      else
        f_30 = g_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATempty, not_null(f_30)));
        t = extend_config_0(t);
      }
    }
    t = m_21;
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_n_21;
    return(t);
  }
  t = ArgOption_3(t, e_4, f_4, g_4);
  return(t);
}
ATerm ast2abox_options_0 (ATerm t)
{
  ATerm o_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0(t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = o_21;
      t = io_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm k_30 = NULL;
  ATerm t_21;
  t_21 = t;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm l_30 = NULL,m_30 = NULL;
      l_30 = t;
      j_30 :
      if(match_cons(l_30, sym_Program_1))
        {
          m_30 = ATgetArgument(l_30, 0);
          if(((k_30 != NULL) && (k_30 != m_30)))
            _fail(m_30);
          else
            k_30 = m_30;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, h_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_21), not_null(k_30)), term_u_21));
      {
        t = printnl_0(t);
        {
          t = term_u_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATempty, term_x_21));
  {
    t = printnl_0(t);
    {
      t = term_u_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  t = SSL_TicksToSeconds(not_null(p_30));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
  u_30 = t;
  t_30 :
  if(match_cons(u_30, sym__2))
    {
      v_30 = ATgetArgument(u_30, 0);
      w_30 = ATgetArgument(u_30, 1);
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_30), not_null(w_30));
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            t = SSL_addr(not_null(v_30), not_null(w_30));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm))
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_70(t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
        d_31 = t;
        c_31 :
        if(((ATgetType(d_31) == AT_LIST) && !(ATisEmpty(d_31))))
          {
            e_31 = ATgetFirst((ATermList) d_31);
            f_31 = (ATerm) ATgetNext((ATermList) d_31);
            {
              ATerm i_31 = NULL;
              ATerm j_31 = NULL;
              t = not_null(f_31);
              {
                t = foldr_2(t, r_70, s_70);
                {
                  j_31 = t;
                  if(((i_31 != NULL) && (i_31 != j_31)))
                    _fail(j_31);
                  else
                    i_31 = j_31;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_31), not_null(i_31));
                t = s_70(t);
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
ATerm crush_2 (ATerm t, ATerm p_69 (ATerm), ATerm q_69 (ATerm))
{
  ATerm q_31 = NULL;
  ATerm u_31 = NULL;
  q_31 = t;
  {
    ATerm v_31 = NULL;
    ATerm z_31 = NULL,f_32 = NULL,l_32 = NULL;
    t = not_null(q_31);
    {
      v_31 = t;
      {
        t = SSL_explode_term(not_null(v_31));
        {
          z_31 = t;
          p_31 :
          if(match_cons(z_31, sym__2))
            {
              f_32 = ATgetArgument(z_31, 0);
              l_32 = ATgetArgument(z_31, 1);
              if(((u_31 != NULL) && (u_31 != l_32)))
                _fail(l_32);
              else
                u_31 = l_32;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_31);
      t = foldr_2(t, p_69, q_69);
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
    ATerm i_4 (ATerm t)
    {
      t = term_o_19;
      return(t);
    }
    t = crush_2(t, i_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  s_32 :
  if(match_cons(t_32, sym__2))
    {
      u_32 = ATgetArgument(t_32, 0);
      v_32 = ATgetArgument(t_32, 1);
      {
        ATerm c_22;
        c_22 = t;
        {
          ATerm d_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_32), not_null(v_32));
              LocalPopChoice(e_22);
            }
          else
            {
              t = d_22;
              t = SSL_gtr(not_null(u_32), not_null(v_32));
            }
        }
        t = c_22;
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
  ATerm p_33 = NULL;
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_33 = NULL,r_33 = NULL,t_33 = NULL;
      q_33 = t;
      o_33 :
      if(match_cons(q_33, sym__2))
        {
          r_33 = ATgetArgument(q_33, 0);
          t_33 = ATgetArgument(q_33, 1);
          {
            if(((p_33 != NULL) && (p_33 != r_33)))
              _fail(r_33);
            else
              p_33 = r_33;
            if(((p_33 != NULL) && (p_33 != t_33)))
              _fail(t_33);
            else
              p_33 = t_33;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_58 (ATerm))
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_22;
      j_22 = t;
      {
        ATerm y_33 = NULL;
        ATerm a_34 = NULL;
        t = term_i_7;
        {
          t = get_config_0(t);
          {
            a_34 = t;
            if(((y_33 != NULL) && (y_33 != a_34)))
              _fail(a_34);
            else
              y_33 = a_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), term_u_8);
          t = geq_0(t);
        }
      }
      t = j_22;
      t = z_58(t);
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm r_34 = NULL,t_34 = NULL;
    ATerm k_22;
    k_22 = t;
    {
      ATerm s_34 = NULL;
      t = run_time_0(t);
      {
        s_34 = t;
        if(((r_34 != NULL) && (r_34 != s_34)))
          _fail(s_34);
        else
          r_34 = s_34;
      }
    }
    t = k_22;
    {
      ATerm u_34 = NULL;
      t = term_l_22;
      {
        t = get_config_0(t);
        {
          u_34 = t;
          if(((t_34 != NULL) && (t_34 != u_34)))
            _fail(u_34);
          else
            t_34 = u_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_22), not_null(r_34)), term_o_22), not_null(t_34)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_4);
  {
    t = term_o_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_35 = NULL;
  h_35 = t;
  g_35 :
  if(match_cons(h_35, sym_Version_0))
    {
      ATerm m_35 = NULL,o_35 = NULL;
      ATerm u_22;
      u_22 = t;
      {
        ATerm n_35 = NULL;
        t = SSLgetAnnotations(not_null(h_35));
        {
          n_35 = t;
          if(((m_35 != NULL) && (m_35 != n_35)))
            _fail(n_35);
          else
            m_35 = n_35;
        }
      }
      t = u_22;
      {
        ATerm p_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_35));
        {
          p_35 = t;
          if(((o_35 != NULL) && (o_35 != p_35)))
            _fail(p_35);
          else
            o_35 = p_35;
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
ATerm need_help_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        {
          ATerm x_22 = t;
          int y_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(y_22);
            }
          else
            {
              t = x_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, k_4);
  t = e_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_35 = NULL;
  u_35 = t;
  t = SSL_table_create(not_null(u_35));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_35 = NULL;
  y_35 = t;
  {
    ATerm z_22;
    z_22 = t;
    {
      t = term_a_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_23, term_b_23, not_null(y_35));
          t = table_put_0(t);
        }
      }
    }
    t = z_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm c_36 = NULL;
  c_36 = t;
  t = SSL_table_destroy(not_null(c_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_36 = NULL;
  g_36 = t;
  t = SSL_exit(not_null(g_36));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  k_36 = t;
  j_36 :
  if(((ATgetType(k_36) == AT_LIST) && ATisEmpty(k_36)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_36) == AT_LIST) && !(ATisEmpty(k_36))))
        {
          l_36 = ATgetFirst((ATermList) k_36);
          m_36 = (ATerm) ATgetNext((ATermList) k_36);
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
  ATerm c_23;
  c_23 = t;
  {
    ATerm p_36 = NULL;
    ATerm s_36 = NULL;
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm q_36 = NULL;
          ATerm r_36 = NULL;
          r_36 = t;
          if(((q_36 != NULL) && (q_36 != r_36)))
            _fail(r_36);
          else
            q_36 = r_36;
          t = (ATerm) ATinsert(ATempty, not_null(q_36));
        }
      }
    {
      s_36 = t;
      if(((p_36 != NULL) && (p_36 != s_36)))
        _fail(s_36);
      else
        p_36 = s_36;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_6, not_null(p_36));
      t = printnl_0(t);
    }
  }
  t = c_23;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
  d_37 = t;
  a_37 :
  if(((ATgetType(d_37) == AT_LIST) && !(ATisEmpty(d_37))))
    {
      b_37 = ATgetFirst((ATermList) d_37);
      c_37 = (ATerm) ATgetNext((ATermList) d_37);
      {
        ATerm g_37 = NULL;
        t = not_null(c_37);
        {
          ATerm i_23;
          i_23 = t;
          {
            ATerm h_37 = NULL,j_37 = NULL,l_37 = NULL;
            ATerm l_23;
            l_23 = t;
            {
              ATerm i_37 = NULL;
              t = i_0(t);
              {
                i_37 = t;
                if(((h_37 != NULL) && (h_37 != i_37)))
                  _fail(i_37);
                else
                  h_37 = i_37;
              }
            }
            t = l_23;
            {
              ATerm k_37 = NULL;
              t = not_null(b_37);
              {
                t = h_0(t);
                {
                  k_37 = t;
                  if(((j_37 != NULL) && (j_37 != k_37)))
                    _fail(k_37);
                  else
                    j_37 = k_37;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_37)), not_null(j_37));
                {
                  l_37 = t;
                  if(((g_37 != NULL) && (g_37 != l_37)))
                    _fail(l_37);
                  else
                    g_37 = l_37;
                }
              }
            }
          }
          t = i_23;
          {
            ATerm l_4 (ATerm t)
            {
              t = not_null(g_37);
              return(t);
            }
            t = reverse_acc_2(t, h_0, l_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(d_37) == AT_LIST) && ATisEmpty(d_37)))
        {
          {
            t = term_b_15;
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
  ATerm o_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm w_37 = NULL,x_37 = NULL;
  w_37 = t;
  v_37 :
  if(match_cons(w_37, sym_Program_1))
    {
      x_37 = ATgetArgument(w_37, 0);
      {
        ATerm a_38 = NULL,c_38 = NULL;
        ATerm b_38 = NULL;
        t = SSLgetAnnotations(not_null(w_37));
        {
          b_38 = t;
          if(((a_38 != NULL) && (a_38 != b_38)))
            _fail(b_38);
          else
            a_38 = b_38;
        }
        {
          t = not_null(x_37);
          {
            ATerm e_38 = NULL;
            t = l_57(t);
            {
              c_38 = t;
              {
                ATerm f_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_38)), not_null(a_38));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm n_38 = NULL;
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_38 = NULL;
      t = term_l_22;
      {
        t = get_config_0(t);
        {
          o_38 = t;
          if(((n_38 != NULL) && (n_38 != o_38)))
            _fail(o_38);
          else
            n_38 = o_38;
        }
      }
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm s_4 (ATerm t)
          {
            ATerm p_38 = NULL;
            p_38 = t;
            if(((n_38 != NULL) && (n_38 != p_38)))
              _fail(p_38);
            else
              n_38 = p_38;
            return(t);
          }
          t = Program_1(t, s_4);
          return(t);
        }
        t = fetch_1(t, r_4);
      }
    }
  {
    t = term_r_23;
    {
      t = echo_0(t);
      {
        t = term_u_23;
        {
          t = table_get_0(t);
          {
            ATerm t_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, t_4);
            {
              ATerm u_4 (ATerm t)
              {
                ATerm q_38 = NULL;
                ATerm r_38 = NULL;
                r_38 = t;
                if(((q_38 != NULL) && (q_38 != r_38)))
                  _fail(r_38);
                else
                  q_38 = r_38;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_38)), term_v_23);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, u_4);
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
  ATerm w_23;
  w_23 = t;
  {
    ATerm z_38 = NULL;
    ATerm a_39 = NULL;
    a_39 = t;
    if(((z_38 != NULL) && (z_38 != a_39)))
      _fail(a_39);
    else
      z_38 = a_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATempty, not_null(z_38)));
      t = printnl_0(t);
    }
  }
  t = w_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm y_23;
  y_23 = t;
  {
    t = d_75(t);
    t = debug_0(t);
  }
  t = y_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm h_39 = NULL,i_39 = NULL;
  h_39 = t;
  g_39 :
  if(match_cons(h_39, sym_Undefined_1))
    {
      i_39 = ATgetArgument(h_39, 0);
      {
        ATerm l_39 = NULL,n_39 = NULL;
        ATerm m_39 = NULL;
        t = SSLgetAnnotations(not_null(h_39));
        {
          m_39 = t;
          if(((l_39 != NULL) && (l_39 != m_39)))
            _fail(m_39);
          else
            l_39 = m_39;
        }
        {
          t = not_null(i_39);
          {
            ATerm p_39 = NULL;
            t = m_57(t);
            {
              n_39 = t;
              {
                ATerm q_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_39)), not_null(l_39));
                {
                  q_39 = t;
                  if(((p_39 != NULL) && (p_39 != q_39)))
                    _fail(q_39);
                  else
                    p_39 = q_39;
                }
                t = not_null(p_39);
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
ATerm fetch_1 (ATerm t, ATerm m_64 (ATerm))
{
  ATerm v_39 (ATerm t)
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_64, _id);
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        t = Cons_2(t, _id, v_39);
      }
    return(t);
  }
  t = v_39(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_79 (ATerm))
{
  t = fetch_1(t, l_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_40 = NULL;
  d_40 = t;
  z_39 :
  if(match_cons(d_40, sym_Help_0))
    {
      ATerm f_40 = NULL,h_40 = NULL;
      ATerm b_24;
      b_24 = t;
      {
        ATerm g_40 = NULL;
        t = SSLgetAnnotations(not_null(d_40));
        {
          g_40 = t;
          if(((f_40 != NULL) && (f_40 != g_40)))
            _fail(g_40);
          else
            f_40 = g_40;
        }
      }
      t = b_24;
      {
        ATerm i_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_40));
        {
          i_40 = t;
          if(((h_40 != NULL) && (h_40 != i_40)))
            _fail(i_40);
          else
            h_40 = i_40;
        }
        t = not_null(h_40);
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
  ATerm n_40 = NULL;
  n_40 = t;
  t = SSL_implode_string(not_null(n_40));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      {
        ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
        s_40 = t;
        r_40 :
        if(((ATgetType(s_40) == AT_LIST) && !(ATisEmpty(s_40))))
          {
            t_40 = ATgetFirst((ATermList) s_40);
            u_40 = (ATerm) ATgetNext((ATermList) s_40);
            {
              t = not_null(t_40);
              {
                ATerm x_4 (ATerm t)
                {
                  t = not_null(u_40);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_4);
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
  ATerm h_41 = NULL;
  ATerm j_41 = NULL;
  h_41 = t;
  {
    ATerm k_41 = NULL;
    ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
    t = not_null(h_41);
    {
      k_41 = t;
      {
        t = SSL_explode_term(not_null(k_41));
        {
          m_41 = t;
          f_41 :
          if(match_cons(m_41, sym__2))
            {
              n_41 = ATgetArgument(m_41, 0);
              o_41 = ATgetArgument(m_41, 1);
              g_41 :
              if(match_string(n_41, ""))
                {
                  if(((j_41 != NULL) && (j_41 != o_41)))
                    _fail(o_41);
                  else
                    j_41 = o_41;
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
      t = not_null(j_41);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm s_41 (ATerm t)
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_41);
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        {
          t = Nil_0(t);
          t = s_64(t);
        }
      }
    return(t);
  }
  t = s_41(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym__2))
    {
      w_41 = ATgetArgument(v_41, 0);
      x_41 = ATgetArgument(v_41, 1);
      {
        t = not_null(w_41);
        {
          ATerm y_4 (ATerm t)
          {
            t = not_null(x_41);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_42 = NULL;
  e_42 = t;
  t = SSL_explode_string(not_null(e_42));
  return(t);
}
ATerm _2 (ATerm t, ATerm q_50 (ATerm), ATerm r_50 (ATerm))
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
  p_42 = t;
  o_42 :
  if(match_cons(p_42, sym__2))
    {
      q_42 = ATgetArgument(p_42, 0);
      r_42 = ATgetArgument(p_42, 1);
      {
        ATerm v_42 = NULL,x_42 = NULL;
        ATerm w_42 = NULL;
        t = SSLgetAnnotations(not_null(p_42));
        {
          w_42 = t;
          if(((v_42 != NULL) && (v_42 != w_42)))
            _fail(w_42);
          else
            v_42 = w_42;
        }
        {
          t = not_null(q_42);
          {
            ATerm z_42 = NULL;
            t = q_50(t);
            {
              x_42 = t;
              {
                t = not_null(r_42);
                {
                  ATerm b_43 = NULL;
                  t = r_50(t);
                  {
                    z_42 = t;
                    {
                      ATerm c_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_42), not_null(z_42)), not_null(v_42));
                      {
                        c_43 = t;
                        if(((b_43 != NULL) && (b_43 != c_43)))
                          _fail(c_43);
                        else
                          b_43 = c_43;
                      }
                      t = not_null(b_43);
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
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
  k_43 = t;
  j_43 :
  if(match_cons(k_43, sym__2))
    {
      l_43 = ATgetArgument(k_43, 0);
      m_43 = ATgetArgument(k_43, 1);
      {
        ATerm o_24;
        o_24 = t;
        t = SSL_printnl(not_null(l_43), not_null(m_43));
        t = o_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm p_24;
  p_24 = t;
  {
    ATerm s_43 = NULL,u_43 = NULL;
    ATerm q_24;
    q_24 = t;
    {
      ATerm t_43 = NULL;
      t = c_75(t);
      {
        t_43 = t;
        if(((s_43 != NULL) && (s_43 != t_43)))
          _fail(t_43);
        else
          s_43 = t_43;
      }
    }
    t = q_24;
    {
      ATerm v_43 = NULL;
      v_43 = t;
      if(((u_43 != NULL) && (u_43 != v_43)))
        _fail(v_43);
      else
        u_43 = v_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_43)), not_null(s_43)));
        t = printnl_0(t);
      }
    }
  }
  t = p_24;
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm y_43 (ATerm t)
  {
    ATerm r_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_24);
      }
    else
      {
        t = r_24;
        t = Cons_2(t, d_64, y_43);
      }
    return(t);
  }
  t = y_43(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_44 = NULL;
  a_44 = t;
  t = SSL_is_string(not_null(a_44));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm x_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(a_25);
    }
  else
    {
      t = x_24;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_4 (ATerm t)
            {
              ATerm d_25 = t;
              int e_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(e_25);
                }
              else
                {
                  t = d_25;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, z_4);
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            {
              ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
              j_44 = t;
              i_44 :
              if(match_cons(j_44, sym_Path_1))
                {
                  k_44 = ATgetArgument(j_44, 0);
                  t = not_null(k_44);
                }
              else
                {
                  if(match_cons(j_44, sym_Var_1))
                    {
                      k_44 = ATgetArgument(j_44, 0);
                      {
                        t = not_null(k_44);
                        {
                          ATerm o_25 = t;
                          int p_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_25);
                            }
                          else
                            {
                              t = o_25;
                              {
                                ATerm a_5 (ATerm t)
                                {
                                  t = term_q_25;
                                  return(t);
                                }
                                t = debug_1(t, a_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_44, sym_Prefix_2))
                        {
                          k_44 = ATgetArgument(j_44, 0);
                          l_44 = ATgetArgument(j_44, 1);
                          {
                            ATerm w_44 = NULL,y_44 = NULL;
                            ATerm r_25;
                            r_25 = t;
                            {
                              ATerm x_44 = NULL;
                              t = not_null(k_44);
                              {
                                t = eval_config_0(t);
                                {
                                  x_44 = t;
                                  if(((w_44 != NULL) && (w_44 != x_44)))
                                    _fail(x_44);
                                  else
                                    w_44 = x_44;
                                }
                              }
                            }
                            t = r_25;
                            {
                              ATerm b_45 = NULL;
                              t = not_null(l_44);
                              {
                                t = eval_config_0(t);
                                {
                                  b_45 = t;
                                  if(((y_44 != NULL) && (y_44 != b_45)))
                                    _fail(b_45);
                                  else
                                    y_44 = b_45;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(y_44));
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
  ATerm p_45 = NULL;
  p_45 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_21, not_null(p_45));
    {
      t = table_get_0(t);
      {
        ATerm s_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm v_25;
              v_25 = t;
              {
                ATerm r_45 = NULL;
                ATerm s_45 = NULL;
                s_45 = t;
                if(((r_45 != NULL) && (r_45 != s_45)))
                  _fail(s_45);
                else
                  r_45 = s_45;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_k_21, not_null(p_45), not_null(r_45));
                  t = table_put_0(t);
                }
              }
              t = v_25;
            }
            LocalPopChoice(u_25);
          }
        else
          {
            t = s_25;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_62 (ATerm))
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_62(t);
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
  b_46 = t;
  a_46 :
  if(match_cons(b_46, sym__2))
    {
      c_46 = ATgetArgument(b_46, 0);
      d_46 = ATgetArgument(b_46, 1);
      t = SSL_table_get(not_null(c_46), not_null(d_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
  k_46 = t;
  j_46 :
  if(match_cons(k_46, sym__3))
    {
      l_46 = ATgetArgument(k_46, 0);
      m_46 = ATgetArgument(k_46, 1);
      n_46 = ATgetArgument(k_46, 2);
      {
        ATerm c_26;
        c_26 = t;
        {
          ATerm r_46 = NULL;
          ATerm s_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_46), not_null(m_46));
          {
            ATerm d_26 = t;
            int e_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_26);
              }
            else
              {
                t = d_26;
                t = (ATerm) ATempty;
              }
            {
              s_46 = t;
              if(((r_46 != NULL) && (r_46 != s_46)))
                _fail(s_46);
              else
                r_46 = s_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_46), not_null(m_46), (ATerm) ATinsert(CheckATermList(not_null(r_46)), not_null(n_46)));
            t = table_put_0(t);
          }
        }
        t = c_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm w_46 = NULL;
  ATerm x_46 = NULL;
  t = term_b_15;
  {
    t = q_80(t);
    {
      x_46 = t;
      if(((w_46 != NULL) && (w_46 != x_46)))
        _fail(x_46);
      else
        w_46 = x_46;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_23, term_t_23, not_null(w_46));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
  d_47 = t;
  c_47 :
  if(match_string(d_47, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(d_47) == AT_LIST) && !(ATisEmpty(d_47))))
        {
          e_47 = ATgetFirst((ATermList) d_47);
          f_47 = (ATerm) ATgetNext((ATermList) d_47);
          {
            ATerm i_47 = NULL;
            ATerm l_26;
            l_26 = t;
            {
              t = not_null(e_47);
              t = a_0(t);
            }
            t = l_26;
            {
              ATerm j_47 = NULL;
              t = term_b_15;
              {
                t = d_0(t);
                {
                  j_47 = t;
                  if(((i_47 != NULL) && (i_47 != j_47)))
                    _fail(j_47);
                  else
                    i_47 = j_47;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_47)), not_null(i_47));
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
  ATerm f_5 (ATerm t)
  {
    ATerm o_47 = NULL;
    o_47 = t;
    n_47 :
    if(!(match_string(o_47, "--help")))
      {
        if(!(match_string(o_47, "-h")))
          {
            if(!(match_string(o_47, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_p_26;
    {
      t = set_config_0(t);
      t = term_t_26;
    }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = term_x_26;
    return(t);
  }
  t = Option_3(t, f_5, j_5, p_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
  r_47 = t;
  q_47 :
  if(((ATgetType(r_47) == AT_LIST) && !(ATisEmpty(r_47))))
    {
      s_47 = ATgetFirst((ATermList) r_47);
      t_47 = (ATerm) ATgetNext((ATermList) r_47);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_47)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_47)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_51 (ATerm), ATerm a_52 (ATerm))
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
  d_48 = t;
  c_48 :
  if(((ATgetType(d_48) == AT_LIST) && !(ATisEmpty(d_48))))
    {
      e_48 = ATgetFirst((ATermList) d_48);
      f_48 = (ATerm) ATgetNext((ATermList) d_48);
      {
        ATerm j_48 = NULL,l_48 = NULL;
        ATerm k_48 = NULL;
        t = SSLgetAnnotations(not_null(d_48));
        {
          k_48 = t;
          if(((j_48 != NULL) && (j_48 != k_48)))
            _fail(k_48);
          else
            j_48 = k_48;
        }
        {
          t = not_null(e_48);
          {
            ATerm n_48 = NULL;
            t = z_51(t);
            {
              l_48 = t;
              {
                t = not_null(f_48);
                {
                  ATerm p_48 = NULL;
                  t = a_52(t);
                  {
                    n_48 = t;
                    {
                      ATerm q_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_48)), not_null(l_48)), not_null(j_48));
                      {
                        q_48 = t;
                        if(((p_48 != NULL) && (p_48 != q_48)))
                          _fail(q_48);
                        else
                          p_48 = q_48;
                      }
                      t = not_null(p_48);
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
  ATerm a_49 = NULL;
  a_49 = t;
  z_48 :
  if(((ATgetType(a_49) == AT_LIST) && ATisEmpty(a_49)))
    {
      {
        ATerm c_49 = NULL,e_49 = NULL;
        ATerm y_26;
        y_26 = t;
        {
          ATerm d_49 = NULL;
          t = SSLgetAnnotations(not_null(a_49));
          {
            d_49 = t;
            if(((c_49 != NULL) && (c_49 != d_49)))
              _fail(d_49);
            else
              c_49 = d_49;
          }
        }
        t = y_26;
        {
          ATerm f_49 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(c_49));
          {
            f_49 = t;
            if(((e_49 != NULL) && (e_49 != f_49)))
              _fail(f_49);
            else
              e_49 = f_49;
          }
          t = not_null(e_49);
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
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
  l_49 = t;
  k_49 :
  if(match_cons(l_49, sym__2))
    {
      m_49 = ATgetArgument(l_49, 0);
      n_49 = ATgetArgument(l_49, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_21, not_null(m_49), not_null(n_49));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm a_27;
  a_27 = t;
  {
    ATerm b_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_27;
        t = o_80(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = b_27;
        {
        }
      }
  }
  t = a_27;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm v_49 = NULL;
      ATerm o_27;
      o_27 = t;
      {
        ATerm t_49 = NULL;
        ATerm u_49 = NULL;
        u_49 = t;
        if(((t_49 != NULL) && (t_49 != u_49)))
          _fail(u_49);
        else
          t_49 = u_49;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_22, not_null(t_49));
          t = set_config_0(t);
        }
      }
      t = o_27;
      {
        ATerm w_49 = NULL;
        w_49 = t;
        if(((v_49 != NULL) && (v_49 != w_49)))
          _fail(w_49);
        else
          v_49 = w_49;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_49));
      }
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm p_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_27);
            }
          else
            {
              t = s_27;
              {
                t = o_80(t);
                t = Cons_2(t, _id, r_5);
              }
            }
          LocalPopChoice(r_27);
        }
      else
        {
          t = p_27;
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
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
  ATerm z_27;
  z_27 = t;
  {
    ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
    f_50 = t;
    b_50 :
    if(match_cons(f_50, sym__3))
      {
        g_50 = ATgetArgument(f_50, 0);
        h_50 = ATgetArgument(f_50, 1);
        i_50 = ATgetArgument(f_50, 2);
        {
          if(((c_50 != NULL) && (c_50 != g_50)))
            _fail(g_50);
          else
            c_50 = g_50;
          {
            if(((d_50 != NULL) && (d_50 != h_50)))
              _fail(h_50);
            else
              d_50 = h_50;
            {
              if(((e_50 != NULL) && (e_50 != i_50)))
                _fail(i_50);
              else
                e_50 = i_50;
              t = SSL_table_put(not_null(c_50), not_null(d_50), not_null(e_50));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm l_50 = NULL;
  ATerm d_28;
  d_28 = t;
  {
    t = term_e_28;
    t = table_put_0(t);
  }
  t = d_28;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm k_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_80(t);
          LocalPopChoice(l_28);
        }
      else
        {
          t = k_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_5);
    {
      ATerm m_28 = t;
      int n_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_28;
          o_28 = t;
          {
            ATerm t_28 = t;
            int u_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_m_26;
                t = get_config_0(t);
                LocalPopChoice(u_28);
              }
            else
              {
                t = t_28;
                t = fetch_1(t, Help_0);
              }
          }
          t = o_28;
          {
            t = system_usage_0(t);
            {
              t = term_o_19;
              t = exit_0(t);
            }
          }
          LocalPopChoice(n_28);
        }
      else
        {
          t = m_28;
          {
            ATerm z_28 = t;
            int a_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_5 (ATerm t)
                {
                  ATerm v_5 (ATerm t)
                  {
                    ATerm m_50 = NULL;
                    m_50 = t;
                    if(((l_50 != NULL) && (l_50 != m_50)))
                      _fail(m_50);
                    else
                      l_50 = m_50;
                    return(t);
                  }
                  t = Undefined_1(t, v_5);
                  return(t);
                }
                t = fetch_1(t, u_5);
                {
                  ATerm w_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_50)), term_b_29);
                    return(t);
                  }
                  t = say_1(t, w_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_u_8;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(a_29);
              }
            else
              {
                t = z_28;
                {
                }
              }
          }
        }
      {
        ATerm c_29;
        c_29 = t;
        {
          t = term_s_23;
          t = table_destroy_0(t);
        }
        t = c_29;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm))
{
  t = parse_options_1(t, k_78);
  {
    t = store_options_0(t);
    {
      t = m_78(t);
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_78);
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            {
              ATerm f_29 = t;
              int g_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_78(t);
                  t = report_success_0(t);
                  LocalPopChoice(g_29);
                }
              else
                {
                  t = f_29;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm o_78 (ATerm), ATerm p_78 (ATerm))
{
  t = option_wrap_4(t, o_78, default_usage_0, _id, p_78);
  return(t);
}
ATerm io_ast2abox_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm h_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_options_0(t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = h_29;
        t = io_options_0(t);
      }
    return(t);
  }
  t = option_wrap_2(t, b_6, ast2abox_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_ast2abox_0(t);
  return(t);
}