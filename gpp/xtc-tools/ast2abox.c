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
ATerm term_m_28;
ATerm term_q_27;
ATerm term_u_26;
ATerm term_m_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_p_25;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_q_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_v_21;
ATerm term_r_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_z_18;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_h_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_m_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_j_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_t_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_s_7;
void init_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no pretty-print tables specified with -p arguments", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_z_10);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_z_12);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__2, term_e_16, term_h_15);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_x_15);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__2, term_i_8, term_u_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_x_15);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_x_15);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_w_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_d_26, term_x_15);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__3, term_v_23, term_w_23, (ATerm) ATempty);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm separate_by_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm p_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm w_77 (ATerm));
ATerm xtc_parse_pp_table_0 (ATerm);
ATerm parse_to_temp_file_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_59 (ATerm));
ATerm Fst_0 (ATerm);
ATerm modification_time_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm lookup_pp_af_0 (ATerm);
ATerm lookup_or_parse_0 (ATerm);
ATerm must_be_pp_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm e_65 (ATerm));
ATerm has_extension_1 (ATerm, ATerm u_73 (ATerm));
ATerm ensure_pp_table_parsed_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm get_config_p_0 (ATerm);
ATerm create_pp_table_args_0 (ATerm);
ATerm build_impl_args_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm e_78 (ATerm), ATerm f_78 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm i_59 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm q_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm m_75 (ATerm));
ATerm repeat_1 (ATerm, ATerm l_74 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm p_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm r_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm));
ATerm union_1 (ATerm, ATerm e_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm a_60 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm v_77 (ATerm));
ATerm assert_1 (ATerm, ATerm g_72 (ATerm));
ATerm obsolete_1 (ATerm, ATerm u_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm s_57 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm d_72 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm i_63 (ATerm), ATerm j_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm c_72 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm h_77 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm i_77 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm v_70 (ATerm), ATerm w_70 (ATerm));
ATerm crush_2 (ATerm, ATerm t_69 (ATerm), ATerm u_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_80 (ATerm));
ATerm Program_1 (ATerm, ATerm z_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm o_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm a_58 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm d_51 (ATerm), ATerm e_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm n_72 (ATerm));
ATerm map_1 (ATerm, ATerm l_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_52 (ATerm), ATerm n_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm a_81 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm x_78 (ATerm), ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm b_79 (ATerm), ATerm c_79 (ATerm));
ATerm io_ast2abox_0 (ATerm);
ATerm main_0 (ATerm);
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
          ATerm z_1 = t;
          int g_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(g_7);
            }
          else
            {
              t = z_1;
              {
                ATerm b_0 (ATerm t)
                {
                  ATerm m_7 = t;
                  int p_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      ;
                      LocalPopChoice(p_7);
                    }
                  else
                    {
                      t = m_7;
                      {
                        ATerm j_1 = NULL;
                        t = Cons_2(t, _id, b_0);
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
        ATerm q_7 = t;
        int r_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_3 = NULL;
            t = p_0(t);
            {
              p_3 = t;
              h_3 :
              if(match_cons(p_3, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_3), term_s_7);
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
            t = term_s_7;
            ;
            LocalPopChoice(r_7);
          }
        else
          {
            t = q_7;
            {
              ATerm t_7 = t;
              int y_7 = stack_ptr;
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
                        ATerm z_7 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm a_8 = t;
                            int b_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(b_8);
                              }
                            else
                              {
                                t = a_8;
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
                            t = z_7;
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
                  LocalPopChoice(y_7);
                }
              else
                {
                  t = t_7;
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
ATerm xtc_transform_1 (ATerm t, ATerm w_77 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, w_77, e_0);
  return(t);
}
ATerm xtc_parse_pp_table_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    t = term_c_8;
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
                  t = term_e_8;
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
ATerm if_verbose2_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm h_8;
    h_8 = t;
    {
      ATerm o_4 = NULL;
      ATerm p_4 = NULL;
      t = term_i_8;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), term_j_8);
        t = geq_0(t);
      }
    }
    t = h_8;
    t = n_59(t);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_5)), term_l_8), not_null(s_5));
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
  ATerm m_8;
  m_8 = t;
  {
    ATerm b_6 = NULL;
    b_6 = t;
    if(((a_6 != NULL) && (a_6 != b_6)))
      _fail(b_6);
    else
      a_6 = b_6;
  }
  t = m_8;
  {
    ATerm d_6 = NULL,f_6 = NULL;
    ATerm e_6 = NULL;
    e_6 = t;
    if(((d_6 != NULL) && (d_6 != e_6)))
      _fail(e_6);
    else
      d_6 = e_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), term_n_8);
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
        ATerm s_8;
        s_8 = t;
        {
          t = _2(t, modification_time_0, modification_time_0);
          t = geq_0(t);
        }
        t = s_8;
        {
          t = Fst_0(t);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = term_t_8;
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
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = lookup_pp_af_0(t);
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      t = parse_to_temp_file_0(t);
    }
  return(t);
}
ATerm must_be_pp_0 (ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        t = term_z_8;
        return(t);
      }
      t = has_extension_1(t, w_0);
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm k_6 = NULL;
        ATerm l_6 = NULL;
        l_6 = t;
        if(((k_6 != NULL) && (k_6 != l_6)))
          _fail(l_6);
        else
          k_6 = l_6;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_6)), term_a_9);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm b_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_65(t);
        ;
        LocalPopChoice(d_9);
      }
    else
      {
        t = b_9;
        t = Cons_2(t, _id, n_6);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm q_6 = NULL;
  ATerm h_9;
  h_9 = t;
  {
    ATerm r_6 = NULL;
    t = u_73(t);
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
  t = h_9;
  {
    ATerm j_9;
    j_9 = t;
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
    t = j_9;
  }
  return(t);
}
ATerm ensure_pp_table_parsed_0 (ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        t = term_r_9;
        return(t);
      }
      t = has_extension_1(t, a_1);
      ;
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        t = must_be_pp_0(t);
        t = lookup_or_parse_0(t);
      }
    }
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm s_9;
  s_9 = t;
  {
    t = error_0(t);
    {
      t = term_t_9;
      t = exit_0(t);
    }
  }
  t = s_9;
  return(t);
}
ATerm get_config_p_0 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        t = (ATerm) ATinsert(ATempty, term_b_10);
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
        t = (ATerm) ATmakeAppl(sym__2, term_a_10, not_null(x_6));
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
              t = (ATerm) ATinsert(CheckATermList(not_null(z_6)), term_a_10);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm c_1 (ATerm t)
                  {
                    t = term_d_10;
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
ATerm build_impl_args_0 (ATerm t)
{
  t = create_pp_table_args_0(t);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym_stdin_0))
    {
      ATerm k_7 = NULL;
      ATerm l_7 = NULL;
      t = term_e_10;
      {
        t = ReadFromFile_0(t);
        {
          l_7 = t;
          if(((k_7 != NULL) && (k_7 != l_7)))
            _fail(l_7);
          else
            k_7 = l_7;
        }
      }
      t = not_null(k_7);
    }
  else
    {
      if(match_cons(i_7, sym_FILE_1))
        {
          j_7 = ATgetArgument(i_7, 0);
          {
            ATerm n_7 = NULL;
            ATerm o_7 = NULL;
            t = not_null(j_7);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  o_7 = t;
                  if(((n_7 != NULL) && (n_7 != o_7)))
                    _fail(o_7);
                  else
                    n_7 = o_7;
                }
              }
            }
            t = not_null(n_7);
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
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym__2))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      t = SSL_WriteToBinaryFile(not_null(w_7), not_null(x_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm d_8 = NULL;
  ATerm f_8 = NULL;
  d_8 = t;
  {
    ATerm g_8 = NULL;
    t = xtc_new_file_0(t);
    {
      g_8 = t;
      {
        if(((f_8 != NULL) && (f_8 != g_8)))
          _fail(g_8);
        else
          f_8 = g_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), not_null(d_8));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(f_8);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_8));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm e_78 (ATerm), ATerm f_78 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, e_78, f_78);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm k_8 = NULL;
  k_8 = t;
  t = SSL_close_file(not_null(k_8));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  o_8 :
  if(match_cons(p_8, sym__2))
    {
      q_8 = ATgetArgument(p_8, 0);
      r_8 = ATgetArgument(p_8, 1);
      t = SSL_execvp(not_null(q_8), not_null(r_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm w_8 = NULL;
  w_8 = t;
  t = SSL_waitpid(not_null(w_8));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm g_9 = NULL;
  ATerm i_9 = NULL;
  g_9 = t;
  {
    t = fork_0(t);
    {
      i_9 = t;
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_9 = NULL;
            k_9 = t;
            c_9 :
            if(match_int(k_9, 0))
              {
                t = not_null(g_9);
                t = i_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            {
              ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
              t = not_null(i_9);
              {
                t = waitpid_0(t);
                {
                  l_9 = t;
                  e_9 :
                  if(match_cons(l_9, sym_WaitStatus_3))
                    {
                      m_9 = ATgetArgument(l_9, 0);
                      n_9 = ATgetArgument(l_9, 1);
                      o_9 = ATgetArgument(l_9, 2);
                      f_9 :
                      if(match_int(m_9, 0))
                        {
                          t = not_null(g_9);
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
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym__2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      {
        ATerm e_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(x_9));
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
  ATerm c_10 = NULL;
  c_10 = t;
  t = SSL_table_keys(not_null(c_10));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  {
    t = table_keys_0(t);
    {
      ATerm f_1 (ATerm t)
      {
        ATerm k_10 = NULL;
        ATerm m_10 = NULL;
        k_10 = t;
        {
          ATerm n_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_10), not_null(k_10));
          {
            t = table_get_0(t);
            {
              n_10 = t;
              if(((m_10 != NULL) && (m_10 != n_10)))
                _fail(n_10);
              else
                m_10 = n_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_10), not_null(m_10));
        }
        return(t);
      }
      t = map_1(t, f_1);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm g_1 (ATerm t)
  {
    ATerm h_10;
    h_10 = t;
    {
      ATerm s_10 = NULL;
      ATerm t_10 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), term_j_10);
        t = geq_0(t);
      }
    }
    t = h_10;
    t = q_59(t);
    return(t);
  }
  t = try_1(t, g_1);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm l_10;
  l_10 = t;
  {
    ATerm w_10 = NULL;
    ATerm x_10 = NULL;
    x_10 = t;
    if(((w_10 != NULL) && (w_10 != x_10)))
      _fail(x_10);
    else
      w_10 = x_10;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_10, not_null(w_10));
      t = printnl_0(t);
    }
  }
  t = l_10;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm d_11 = NULL;
  ATerm f_11 = NULL,g_11 = NULL;
  d_11 = t;
  {
    ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_p_10, (ATerm) ATmakeAppl(sym_Tool_1, not_null(d_11)));
    {
      t = table_get_0(t);
      {
        h_11 = t;
        b_11 :
        if(((ATgetType(h_11) == AT_LIST) && !(ATisEmpty(h_11))))
          {
            i_11 = ATgetFirst((ATermList) h_11);
            l_11 = (ATerm) ATgetNext((ATermList) h_11);
            c_11 :
            if(match_cons(i_11, sym__2))
              {
                j_11 = ATgetArgument(i_11, 0);
                k_11 = ATgetArgument(i_11, 1);
                {
                  if(((f_11 != NULL) && (f_11 != j_11)))
                    _fail(j_11);
                  else
                    f_11 = j_11;
                  if(((g_11 != NULL) && (g_11 != k_11)))
                    _fail(k_11);
                  else
                    g_11 = k_11;
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
    t = not_null(g_11);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym__2))
    {
      t_11 = ATgetArgument(s_11, 0);
      u_11 = ATgetArgument(s_11, 1);
      {
        ATerm x_11 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_p_10, (ATerm) ATmakeAppl(sym_Tool_1, not_null(t_11)));
        {
          t = table_get_0(t);
          {
            ATerm h_1 (ATerm t)
            {
              ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
              y_11 = t;
              q_11 :
              if(match_cons(y_11, sym__2))
                {
                  z_11 = ATgetArgument(y_11, 0);
                  a_12 = ATgetArgument(y_11, 1);
                  {
                    if(((u_11 != NULL) && (u_11 != z_11)))
                      _fail(z_11);
                    else
                      u_11 = z_11;
                    if(((x_11 != NULL) && (x_11 != a_12)))
                      _fail(a_12);
                    else
                      x_11 = a_12;
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
        t = not_null(x_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm m_75 (ATerm))
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              t = filter_1(t, m_75);
              return(t);
            }
            t = Cons_2(t, m_75, i_1);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            {
              ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
              f_12 = t;
              e_12 :
              if(((ATgetType(f_12) == AT_LIST) && !(ATisEmpty(f_12))))
                {
                  g_12 = ATgetFirst((ATermList) f_12);
                  h_12 = (ATerm) ATgetNext((ATermList) f_12);
                  {
                    t = not_null(h_12);
                    t = filter_1(t, m_75);
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
ATerm repeat_1 (ATerm t, ATerm l_74 (ATerm))
{
  ATerm k_12 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = l_74(t);
      t = k_12(t);
      return(t);
    }
    t = try_1(t, l_1);
    return(t);
  }
  t = k_12(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm y_10;
  y_10 = t;
  {
    ATerm m_1 (ATerm t)
    {
      t = term_a_11;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm e_11 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_11;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, m_1);
  }
  t = y_10;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm m_11;
    m_11 = t;
    {
      ATerm m_12 = NULL;
      ATerm n_12 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          n_12 = t;
          if(((m_12 != NULL) && (m_12 != n_12)))
            _fail(n_12);
          else
            m_12 = n_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), term_n_11);
        t = geq_0(t);
      }
    }
    t = m_11;
    t = p_59(t);
    return(t);
  }
  t = try_1(t, n_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm o_11;
    o_11 = t;
    {
      ATerm q_12 = NULL;
      ATerm r_12 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          r_12 = t;
          if(((q_12 != NULL) && (q_12 != r_12)))
            _fail(r_12);
          else
            q_12 = r_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), term_p_11);
        t = geq_0(t);
      }
    }
    t = o_11;
    t = r_59(t);
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
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym__2))
    {
      w_12 = ATgetArgument(v_12, 0);
      x_12 = ATgetArgument(v_12, 1);
      if(((w_12 != NULL) && (w_12 != x_12)))
        _fail(x_12);
      else
        w_12 = x_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm))
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  c_13 :
  if(((ATgetType(d_13) == AT_LIST) && !(ATisEmpty(d_13))))
    {
      e_13 = ATgetFirst((ATermList) d_13);
      f_13 = (ATerm) ATgetNext((ATermList) d_13);
      {
        t = j_70(t);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm i_13 = NULL;
            i_13 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), not_null(i_13));
              t = i_70(t);
            }
            return(t);
          }
          t = fetch_1(t, p_1);
        }
        t = not_null(f_13);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm e_70 (ATerm))
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym__2))
    {
      p_13 = ATgetArgument(o_13, 0);
      q_13 = ATgetArgument(o_13, 1);
      {
        t = not_null(p_13);
        {
          ATerm u_13 (ATerm t)
          {
            ATerm v_11 = t;
            int w_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_13);
                ;
                LocalPopChoice(w_11);
              }
            else
              {
                t = v_11;
                {
                  ATerm b_12 = t;
                  int c_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_1 (ATerm t)
                      {
                        t = not_null(q_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_70, q_1);
                      t = u_13(t);
                      ;
                      LocalPopChoice(c_12);
                    }
                  else
                    {
                      t = b_12;
                      t = Cons_2(t, _id, u_13);
                    }
                }
              }
            return(t);
          }
          t = u_13(t);
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
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym__3))
    {
      a_14 = ATgetArgument(z_13, 0);
      b_14 = ATgetArgument(z_13, 1);
      c_14 = ATgetArgument(z_13, 2);
      {
        ATerm d_12;
        d_12 = t;
        {
          ATerm g_14 = NULL;
          ATerm h_14 = NULL,j_14 = NULL;
          ATerm i_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), not_null(b_14));
          {
            ATerm i_12 = t;
            int j_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(j_12);
              }
            else
              {
                t = i_12;
                t = (ATerm) ATempty;
              }
            {
              i_14 = t;
              if(((h_14 != NULL) && (h_14 != i_14)))
                _fail(i_14);
              else
                h_14 = i_14;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_14), not_null(c_14));
            {
              t = union_0(t);
              {
                j_14 = t;
                if(((g_14 != NULL) && (g_14 != j_14)))
                  _fail(j_14);
                else
                  g_14 = j_14;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_14), not_null(b_14), not_null(g_14));
            t = set_0(t);
          }
        }
        t = d_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      t_14 = ATgetArgument(r_14, 1);
      {
        t = not_null(t_14);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
            w_14 = t;
            p_14 :
            if(match_cons(w_14, sym__2))
              {
                x_14 = ATgetArgument(w_14, 0);
                y_14 = ATgetArgument(w_14, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(s_14), not_null(x_14), not_null(y_14));
                  t = a_60(t);
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
  ATerm e_15 = NULL;
  ATerm l_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_15 = NULL;
      f_15 = t;
      {
        if(((e_15 != NULL) && (e_15 != f_15)))
          _fail(f_15);
        else
          e_15 = f_15;
        t = SSL_ReadFromFile(not_null(e_15));
      }
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = l_12;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_p_12;
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
  ATerm j_15 = NULL;
  ATerm l_15 = NULL;
  j_15 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm u_1 (ATerm t)
      {
        t = term_s_12;
        return(t);
      }
      t = debug_1(t, u_1);
      return(t);
    }
    t = if_verbose5_1(t, t_1);
    {
      ATerm t_12 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_10, (ATerm) ATmakeAppl(sym_Imported_1, not_null(j_15)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_12;
        }
      {
        ATerm y_12;
        y_12 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_10, term_z_12, (ATerm) ATinsert(ATempty, not_null(j_15)));
          t = table_put_0(t);
        }
        t = y_12;
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              t = term_a_13;
              return(t);
            }
            t = debug_1(t, w_1);
            return(t);
          }
          t = if_verbose4_1(t, v_1);
          {
            ATerm b_13 = t;
            int g_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(g_13);
              }
            else
              {
                t = b_13;
                t = (ATerm) ATempty;
              }
            {
              ATerm x_1 (ATerm t)
              {
                ATerm y_1 (ATerm t)
                {
                  t = term_h_13;
                  return(t);
                }
                t = say_1(t, y_1);
                return(t);
              }
              t = if_verbose6_1(t, x_1);
              {
                ATerm m_15 = NULL;
                m_15 = t;
                if(((l_15 != NULL) && (l_15 != m_15)))
                  _fail(m_15);
                else
                  l_15 = m_15;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_10, not_null(l_15));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm a_2 (ATerm t)
                      {
                        ATerm b_2 (ATerm t)
                        {
                          t = term_j_13;
                          return(t);
                        }
                        t = say_1(t, b_2);
                        return(t);
                      }
                      t = if_verbose6_1(t, a_2);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_p_10, (ATerm)ATmakeAppl(sym_Imported_1, not_null(j_15)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm c_2 (ATerm t)
                            {
                              ATerm d_2 (ATerm t)
                              {
                                t = term_h_13;
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
  ATerm q_15 = NULL;
  q_15 = t;
  t = SSL_getenv(not_null(q_15));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_13;
      t = get_config_0(t);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_13;
            t = getenv_0(t);
            ;
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
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
      t = term_v_13;
      return(t);
    }
    t = debug_1(t, f_2);
    return(t);
  }
  t = if_verbose5_1(t, e_2);
  {
    ATerm w_13;
    w_13 = t;
    {
      ATerm x_13 = t;
      int d_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_e_14;
          t = table_get_0(t);
          ;
          LocalPopChoice(d_14);
        }
      else
        {
          t = x_13;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = w_13;
    {
      ATerm g_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          t = term_f_14;
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
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = term_m_14;
          return(t);
        }
        t = debug_1(t, j_2);
        return(t);
      }
      t = if_verbose5_1(t, i_2);
      {
        t = xtc_load_0(t);
        {
          ATerm n_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(o_14);
            }
          else
            {
              t = n_14;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm k_2 (ATerm t)
            {
              ATerm l_2 (ATerm t)
              {
                t = term_m_14;
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
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        ATerm u_15 = NULL;
        ATerm v_15 = NULL;
        v_15 = t;
        if(((u_15 != NULL) && (u_15 != v_15)))
          _fail(v_15);
        else
          u_15 = v_15;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_14), not_null(u_15)), term_u_14);
          {
            t = error_0(t);
            {
              ATerm m_2 (ATerm t)
              {
                t = term_p_10;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_2 (ATerm t)
                    {
                      t = term_z_14;
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
ATerm xtc_command_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm z_15 = NULL;
  ATerm a_15;
  a_15 = t;
  {
    ATerm a_16 = NULL;
    t = v_77(t);
    {
      t = xtc_find_warning_0(t);
      {
        a_16 = t;
        if(((z_15 != NULL) && (z_15 != a_16)))
          _fail(a_16);
        else
          z_15 = a_16;
      }
    }
  }
  t = a_15;
  {
    ATerm b_15;
    b_15 = t;
    {
      ATerm b_16 = NULL;
      ATerm c_16 = NULL;
      c_16 = t;
      if(((b_16 != NULL) && (b_16 != c_16)))
        _fail(c_16);
      else
        b_16 = c_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), not_null(b_16));
        t = call_0(t);
      }
    }
    t = b_15;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym__2))
    {
      l_16 = ATgetArgument(k_16, 0);
      m_16 = ATgetArgument(k_16, 1);
      {
        ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
        ATerm c_15;
        c_15 = t;
        {
          ATerm s_16 = NULL;
          ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
          t = g_72(t);
          {
            s_16 = t;
            {
              if(((p_16 != NULL) && (p_16 != s_16)))
                _fail(s_16);
              else
                p_16 = s_16;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(p_16), not_null(l_16), not_null(m_16));
                {
                  t = table_push_0(t);
                  {
                    ATerm d_15 = t;
                    int g_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), term_h_15);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(g_15);
                      }
                    else
                      {
                        t = d_15;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      t_16 = t;
                      i_16 :
                      if(((ATgetType(t_16) == AT_LIST) && !(ATisEmpty(t_16))))
                        {
                          u_16 = ATgetFirst((ATermList) t_16);
                          v_16 = (ATerm) ATgetNext((ATermList) t_16);
                          {
                            if(((q_16 != NULL) && (q_16 != u_16)))
                              _fail(u_16);
                            else
                              q_16 = u_16;
                            {
                              if(((r_16 != NULL) && (r_16 != v_16)))
                                _fail(v_16);
                              else
                                r_16 = v_16;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(p_16), term_h_15, (ATerm) ATinsert(CheckATermList(not_null(r_16)), (ATerm) ATinsert(CheckATermList(not_null(q_16)), not_null(l_16))));
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
        t = c_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm u_72 (ATerm))
{
  ATerm i_15;
  i_15 = t;
  {
    t = u_72(t);
    {
      ATerm o_2 (ATerm t)
      {
        t = term_k_15;
        return(t);
      }
      t = debug_1(t, o_2);
    }
  }
  t = i_15;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL;
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
      f_17 = t;
      a_17 :
      if(match_cons(f_17, sym__2))
        {
          g_17 = ATgetArgument(f_17, 0);
          h_17 = ATgetArgument(f_17, 1);
          {
            if(((e_17 != NULL) && (e_17 != g_17)))
              _fail(g_17);
            else
              e_17 = g_17;
            if(((d_17 != NULL) && (d_17 != h_17)))
              _fail(h_17);
            else
              d_17 = h_17;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_15);
      t = SSL_open_file(not_null(e_17), not_null(d_17));
    }
  else
    {
      t = n_15;
      {
        ATerm i_17 = NULL;
        ATerm j_17 = NULL;
        ATerm p_2 (ATerm t)
        {
          t = term_p_15;
          return(t);
        }
        t = obsolete_1(t, p_2);
        {
          i_17 = t;
          {
            if(((e_17 != NULL) && (e_17 != i_17)))
              _fail(i_17);
            else
              e_17 = i_17;
            {
              ATerm r_15;
              r_15 = t;
              {
                ATerm k_17 = NULL;
                t = term_s_15;
                {
                  k_17 = t;
                  if(((j_17 != NULL) && (j_17 != k_17)))
                    _fail(k_17);
                  else
                    j_17 = k_17;
                }
              }
              t = r_15;
              t = SSL_open_file(not_null(e_17), not_null(j_17));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm q_17 = NULL;
  ATerm s_17 = NULL;
  q_17 = t;
  {
    ATerm t_15;
    t_15 = t;
    {
      ATerm t_17 = NULL;
      t = term_w_15;
      {
        t_17 = t;
        if(((s_17 != NULL) && (s_17 != t_17)))
          _fail(t_17);
        else
          s_17 = t_17;
      }
    }
    t = t_15;
    {
      t = SSL_open_file(not_null(q_17), not_null(s_17));
      t = SSL_close_file(not_null(q_17));
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
  ATerm x_17 = NULL;
  ATerm y_17 = NULL;
  t = term_x_15;
  {
    t = new_0(t);
    {
      y_17 = t;
      if(((x_17 != NULL) && (x_17 != y_17)))
        _fail(y_17);
      else
        x_17 = y_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), term_y_15);
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
  ATerm c_18 = NULL;
  t = new_file_0(t);
  {
    c_18 = t;
    {
      ATerm d_16;
      d_16 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), term_s_15);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), term_x_15);
            {
              ATerm r_2 (ATerm t)
              {
                t = term_e_16;
                return(t);
              }
              t = assert_1(t, r_2);
            }
          }
        }
      }
      t = d_16;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm m_18 = NULL,n_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_stdin_0))
    {
      ATerm o_18 = NULL;
      ATerm p_18 = NULL;
      ATerm q_18 = NULL;
      t = xtc_new_file_0(t);
      {
        p_18 = t;
        {
          if(((o_18 != NULL) && (o_18 != p_18)))
            _fail(p_18);
          else
            o_18 = p_18;
          {
            ATerm r_18 = NULL;
            t = o_0(t);
            {
              r_18 = t;
              if(((q_18 != NULL) && (q_18 != r_18)))
                _fail(r_18);
              else
                q_18 = r_18;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_18)), term_f_16));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(o_18);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_18));
    }
  else
    {
      if(match_cons(m_18, sym_FILE_1))
        {
          n_18 = ATgetArgument(m_18, 0);
          {
            ATerm t_18 = NULL;
            ATerm u_18 = NULL;
            t = not_null(n_18);
            {
              ATerm v_18 = NULL;
              t = xtc_new_file_0(t);
              {
                u_18 = t;
                {
                  if(((t_18 != NULL) && (t_18 != u_18)))
                    _fail(u_18);
                  else
                    t_18 = u_18;
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_18), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_18)), term_f_16), not_null(n_18)), term_g_16));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(t_18);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_18));
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
  ATerm i_19 = NULL;
  i_19 = t;
  h_19 :
  if(match_cons(i_19, sym_stdin_0))
    {
      ATerm k_19 = NULL,m_19 = NULL;
      ATerm h_16;
      h_16 = t;
      {
        ATerm l_19 = NULL;
        t = SSLgetAnnotations(not_null(i_19));
        {
          l_19 = t;
          if(((k_19 != NULL) && (k_19 != l_19)))
            _fail(l_19);
          else
            k_19 = l_19;
        }
      }
      t = h_16;
      {
        ATerm n_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(k_19));
        {
          n_19 = t;
          if(((m_19 != NULL) && (m_19 != n_19)))
            _fail(n_19);
          else
            m_19 = n_19;
        }
        t = not_null(m_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm x_19 = NULL,d_20 = NULL;
  x_19 = t;
  w_19 :
  if(match_cons(x_19, sym_FILE_1))
    {
      d_20 = ATgetArgument(x_19, 0);
      {
        ATerm g_20 = NULL,i_20 = NULL;
        ATerm h_20 = NULL;
        t = SSLgetAnnotations(not_null(x_19));
        {
          h_20 = t;
          if(((g_20 != NULL) && (g_20 != h_20)))
            _fail(h_20);
          else
            g_20 = h_20;
        }
        {
          t = not_null(d_20);
          {
            ATerm m_20 = NULL;
            t = s_57(t);
            {
              i_20 = t;
              {
                ATerm n_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(i_20)), not_null(g_20));
                {
                  n_20 = t;
                  if(((m_20 != NULL) && (m_20 != n_20)))
                    _fail(n_20);
                  else
                    m_20 = n_20;
                }
                t = not_null(m_20);
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
ATerm xtc_transform_2 (ATerm t, ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_16 = t;
      int x_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(x_16);
        }
      else
        {
          t = w_16;
          t = stdin_0(t);
        }
      LocalPopChoice(o_16);
      t = xtc_transform_file_2(t, x_77, y_77);
    }
  else
    {
      t = n_16;
      t = xtc_transform_term_2(t, x_77, y_77);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym__2))
    {
      a_21 = ATgetArgument(z_20, 0);
      b_21 = ATgetArgument(z_20, 1);
      t = SSL_copy(not_null(a_21), not_null(b_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_stderr_0))
    {
      ATerm l_21 = NULL,n_21 = NULL;
      ATerm y_16;
      y_16 = t;
      {
        ATerm m_21 = NULL;
        t = SSLgetAnnotations(not_null(j_21));
        {
          m_21 = t;
          if(((l_21 != NULL) && (l_21 != m_21)))
            _fail(m_21);
          else
            l_21 = m_21;
        }
      }
      t = y_16;
      {
        ATerm t_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(l_21));
        {
          t_21 = t;
          if(((n_21 != NULL) && (n_21 != t_21)))
            _fail(t_21);
          else
            n_21 = t_21;
        }
        t = not_null(n_21);
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
  l_22 :
  if(match_cons(n_22, sym_stdout_0))
    {
      ATerm p_22 = NULL,s_22 = NULL;
      ATerm z_16;
      z_16 = t;
      {
        ATerm r_22 = NULL;
        t = SSLgetAnnotations(not_null(n_22));
        {
          r_22 = t;
          if(((p_22 != NULL) && (p_22 != r_22)))
            _fail(r_22);
          else
            p_22 = r_22;
        }
      }
      t = z_16;
      {
        ATerm t_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(p_22));
        {
          t_22 = t;
          if(((s_22 != NULL) && (s_22 != t_22)))
            _fail(t_22);
          else
            s_22 = t_22;
        }
        t = not_null(s_22);
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
  ATerm h_23 = NULL,i_23 = NULL;
  h_23 = t;
  e_23 :
  if(match_cons(h_23, sym_FILE_1))
    {
      i_23 = ATgetArgument(h_23, 0);
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_23 = NULL;
            ATerm l_23 = NULL;
            t = m_0(t);
            {
              l_23 = t;
              {
                if(((k_23 != NULL) && (k_23 != l_23)))
                  _fail(l_23);
                else
                  k_23 = l_23;
                {
                  ATerm l_17 = t;
                  int m_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(m_17);
                    }
                  else
                    {
                      t = l_17;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), not_null(k_23));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_23));
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            {
              ATerm n_17 = t;
              int o_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_23 = NULL;
                  ATerm o_23 = NULL;
                  t = m_0(t);
                  {
                    o_23 = t;
                    {
                      if(((n_23 != NULL) && (n_23 != o_23)))
                        _fail(o_23);
                      else
                        n_23 = o_23;
                      {
                        ATerm p_17 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm r_17 = t;
                            int u_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(u_17);
                              }
                            else
                              {
                                t = r_17;
                                {
                                  ATerm v_17 = t;
                                  int w_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(w_17);
                                    }
                                  else
                                    {
                                      t = v_17;
                                      {
                                        ATerm p_23 = NULL;
                                        p_23 = t;
                                        if(((i_23 != NULL) && (i_23 != p_23)))
                                          _fail(p_23);
                                        else
                                          i_23 = p_23;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = p_17;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), not_null(n_23));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_23));
                  ;
                  LocalPopChoice(o_17);
                }
              else
                {
                  t = n_17;
                  {
                    ATerm r_23 = NULL;
                    t = m_0(t);
                    {
                      r_23 = t;
                      if(((i_23 != NULL) && (i_23 != r_23)))
                        _fail(r_23);
                      else
                        i_23 = r_23;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_23));
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
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  i_24 = t;
  h_24 :
  if(((ATgetType(i_24) == AT_LIST) && !(ATisEmpty(i_24))))
    {
      j_24 = ATgetFirst((ATermList) i_24);
      k_24 = (ATerm) ATgetNext((ATermList) i_24);
      t = not_null(k_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
  q_24 = t;
  p_24 :
  if(match_cons(q_24, sym__2))
    {
      r_24 = ATgetArgument(q_24, 0);
      s_24 = ATgetArgument(q_24, 1);
      {
        ATerm z_17;
        z_17 = t;
        {
          ATerm z_24 = NULL;
          ATerm a_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_24), not_null(s_24));
          {
            ATerm a_18 = t;
            int b_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(b_18);
              }
            else
              {
                t = a_18;
                t = (ATerm) ATempty;
              }
            {
              a_25 = t;
              if(((z_24 != NULL) && (z_24 != a_25)))
                _fail(a_25);
              else
                z_24 = a_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_24), not_null(s_24), not_null(z_24));
            t = table_put_0(t);
          }
        }
        t = z_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm d_72 (ATerm))
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  ATerm d_18;
  d_18 = t;
  {
    ATerm k_25 = NULL;
    ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
    t = d_72(t);
    {
      k_25 = t;
      {
        if(((j_25 != NULL) && (j_25 != k_25)))
          _fail(k_25);
        else
          j_25 = k_25;
        {
          ATerm e_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_25), term_h_15);
              t = table_get_0(t);
              ;
              LocalPopChoice(f_18);
            }
          else
            {
              t = e_18;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            l_25 = t;
            g_25 :
            if(((ATgetType(l_25) == AT_LIST) && !(ATisEmpty(l_25))))
              {
                m_25 = ATgetFirst((ATermList) l_25);
                n_25 = (ATerm) ATgetNext((ATermList) l_25);
                {
                  if(((i_25 != NULL) && (i_25 != m_25)))
                    _fail(m_25);
                  else
                    i_25 = m_25;
                  {
                    if(((h_25 != NULL) && (h_25 != n_25)))
                      _fail(n_25);
                    else
                      h_25 = n_25;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(j_25), term_h_15, not_null(h_25));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(i_25);
                          {
                            ATerm s_2 (ATerm t)
                            {
                              ATerm o_25 = NULL;
                              o_25 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_25), not_null(o_25));
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
  t = d_18;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm u_25 = NULL;
  u_25 = t;
  t = SSL_remove(not_null(u_25));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm i_63 (ATerm), ATerm j_63 (ATerm))
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_63(t);
      t = j_63(t);
      ;
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      {
        t = j_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm c_72 (ATerm))
{
  ATerm z_25 = NULL;
  ATerm i_18;
  i_18 = t;
  {
    ATerm a_26 = NULL;
    ATerm b_26 = NULL;
    t = c_72(t);
    {
      a_26 = t;
      {
        if(((z_25 != NULL) && (z_25 != a_26)))
          _fail(a_26);
        else
          z_25 = a_26;
        {
          ATerm c_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_25), term_h_15);
          {
            ATerm j_18 = t;
            int k_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(k_18);
              }
            else
              {
                t = j_18;
                t = (ATerm) ATempty;
              }
            {
              c_26 = t;
              if(((b_26 != NULL) && (b_26 != c_26)))
                _fail(c_26);
              else
                b_26 = c_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_25), term_h_15, (ATerm) ATinsert(CheckATermList(not_null(b_26)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = i_18;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm h_26 = NULL,i_26 = NULL;
  ATerm w_2 (ATerm t)
  {
    t = term_e_16;
    return(t);
  }
  t = begin_scope_1(t, w_2);
  {
    ATerm x_2 (ATerm t)
    {
      ATerm s_18;
      s_18 = t;
      {
        ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_18;
            t = table_get_0(t);
            ;
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          j_26 = t;
          g_26 :
          if(((ATgetType(j_26) == AT_LIST) && !(ATisEmpty(j_26))))
            {
              k_26 = ATgetFirst((ATermList) j_26);
              l_26 = (ATerm) ATgetNext((ATermList) j_26);
              {
                if(((i_26 != NULL) && (i_26 != k_26)))
                  _fail(k_26);
                else
                  i_26 = k_26;
                {
                  if(((h_26 != NULL) && (h_26 != l_26)))
                    _fail(l_26);
                  else
                    h_26 = l_26;
                  {
                    t = not_null(i_26);
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
      t = s_18;
      {
        ATerm a_3 (ATerm t)
        {
          t = term_e_16;
          return(t);
        }
        t = end_scope_1(t, a_3);
      }
      return(t);
    }
    t = restore_always_2(t, h_77, x_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_26 = NULL;
        ATerm p_26 = NULL;
        t = term_g_16;
        {
          t = get_config_0(t);
          {
            p_26 = t;
            if(((o_26 != NULL) && (o_26 != p_26)))
              _fail(p_26);
            else
              o_26 = p_26;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_26));
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = term_e_10;
      }
    {
      t = i_77(t);
      {
        ATerm c_3 (ATerm t)
        {
          ATerm c_19 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_f_16;
              t = get_config_0(t);
              ;
              LocalPopChoice(d_19);
            }
          else
            {
              t = c_19;
              t = term_s_7;
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
ATerm ast2abox_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm e_3 (ATerm t)
    {
      t = term_e_19;
      return(t);
    }
    t = xtc_transform_2(t, e_3, build_impl_args_0);
    return(t);
  }
  t = xtc_io_1(t, d_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm s_26 = NULL;
    s_26 = t;
    r_26 :
    if(!(match_string(s_26, "-v")))
      {
        if(!(match_string(s_26, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_g_19;
    t = set_config_0(t);
    t = term_j_19;
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_o_19;
    return(t);
  }
  t = Option_3(t, f_3, g_3, i_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm v_26 = NULL;
    v_26 = t;
    t_26 :
    if(!(match_string(v_26, "-k")))
      {
        if(!(match_string(v_26, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm p_19;
    p_19 = t;
    {
      ATerm w_26 = NULL;
      ATerm x_26 = NULL;
      t = string_to_int_0(t);
      {
        x_26 = t;
        if(((w_26 != NULL) && (w_26 != x_26)))
          _fail(x_26);
        else
          w_26 = x_26;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_19, not_null(w_26));
        t = set_config_0(t);
      }
    }
    t = p_19;
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_r_19;
    return(t);
  }
  t = ArgOption_3(t, j_3, k_3, o_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  t = SSL_string_to_int(not_null(a_27));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_3 (ATerm t)
      {
        ATerm i_27 = NULL;
        i_27 = t;
        d_27 :
        if(!(match_string(i_27, "-S")))
          {
            if(!(match_string(i_27, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        t = term_v_19;
        t = set_config_0(t);
        t = term_y_19;
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = term_z_19;
        return(t);
      }
      t = Option_3(t, q_3, u_3, w_3);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              ATerm j_27 = NULL;
              j_27 = t;
              e_27 :
              if(!(match_string(j_27, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_3 (ATerm t)
            {
              ATerm m_27 = NULL;
              ATerm c_20;
              c_20 = t;
              {
                ATerm k_27 = NULL;
                ATerm l_27 = NULL;
                t = string_to_int_0(t);
                {
                  l_27 = t;
                  if(((k_27 != NULL) && (k_27 != l_27)))
                    _fail(l_27);
                  else
                    k_27 = l_27;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_8, not_null(k_27));
                  t = set_config_0(t);
                }
              }
              t = c_20;
              {
                ATerm n_27 = NULL;
                n_27 = t;
                if(((m_27 != NULL) && (m_27 != n_27)))
                  _fail(n_27);
                else
                  m_27 = n_27;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_27));
              }
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              t = term_e_20;
              return(t);
            }
            t = ArgOption_3(t, x_3, y_3, z_3);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            {
              ATerm a_4 (ATerm t)
              {
                ATerm o_27 = NULL;
                o_27 = t;
                h_27 :
                if(!(match_string(o_27, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm b_4 (ATerm t)
              {
                t = term_j_20;
                t = set_config_0(t);
                t = term_k_20;
                return(t);
              }
              ATerm c_4 (ATerm t)
              {
                t = term_l_20;
                return(t);
              }
              t = Option_3(t, a_4, b_4, c_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
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
            t = keep_option_0(t);
            ;
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm u_27 = NULL;
    u_27 = t;
    r_27 :
    if(!(match_string(u_27, "-o")))
      {
        if(!(match_string(u_27, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm x_27 = NULL;
    ATerm s_20;
    s_20 = t;
    {
      ATerm v_27 = NULL;
      ATerm w_27 = NULL;
      w_27 = t;
      if(((v_27 != NULL) && (v_27 != w_27)))
        _fail(w_27);
      else
        v_27 = w_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_16, not_null(v_27));
        t = set_config_0(t);
      }
    }
    t = s_20;
    {
      ATerm y_27 = NULL;
      y_27 = t;
      if(((x_27 != NULL) && (x_27 != y_27)))
        _fail(y_27);
      else
        x_27 = y_27;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_27));
    }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_t_20;
    return(t);
  }
  t = ArgOption_3(t, d_4, e_4, h_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm k_4 (ATerm t)
        {
          ATerm c_28 = NULL;
          c_28 = t;
          b_28 :
          if(!(match_string(c_28, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_4 (ATerm t)
        {
          t = term_x_20;
          t = set_config_0(t);
          t = term_c_21;
          return(t);
        }
        ATerm m_4 (ATerm t)
        {
          t = term_d_21;
          return(t);
        }
        t = Option_3(t, k_4, l_4, m_4);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm g_28 = NULL;
    g_28 = t;
    d_28 :
    if(!(match_string(g_28, "-i")))
      {
        if(!(match_string(g_28, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    ATerm j_28 = NULL;
    ATerm e_21;
    e_21 = t;
    {
      ATerm h_28 = NULL;
      ATerm i_28 = NULL;
      i_28 = t;
      if(((h_28 != NULL) && (h_28 != i_28)))
        _fail(i_28);
      else
        h_28 = i_28;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_16, not_null(h_28));
        t = set_config_0(t);
      }
    }
    t = e_21;
    {
      ATerm k_28 = NULL;
      k_28 = t;
      if(((j_28 != NULL) && (j_28 != k_28)))
        _fail(k_28);
      else
        j_28 = k_28;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_28));
    }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = term_f_21;
    return(t);
  }
  t = ArgOption_3(t, n_4, q_4, r_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm k_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = k_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  r_28 = t;
  q_28 :
  if(match_cons(r_28, sym__2))
    {
      s_28 = ATgetArgument(r_28, 0);
      t_28 = ATgetArgument(r_28, 1);
      {
        ATerm w_28 = NULL;
        ATerm x_28 = NULL,z_28 = NULL;
        ATerm y_28 = NULL;
        t = not_null(s_28);
        {
          ATerm p_21 = t;
          int q_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(q_21);
            }
          else
            {
              t = p_21;
              t = (ATerm) ATempty;
            }
          {
            y_28 = t;
            if(((x_28 != NULL) && (x_28 != y_28)))
              _fail(y_28);
            else
              x_28 = y_28;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_28), not_null(x_28));
          {
            t = conc_0(t);
            {
              z_28 = t;
              if(((w_28 != NULL) && (w_28 != z_28)))
                _fail(z_28);
              else
                w_28 = z_28;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_21, not_null(s_28), not_null(w_28));
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
  ATerm i_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  i_29 = t;
  g_29 :
  if(match_string(i_29, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(i_29) == AT_LIST) && !(ATisEmpty(i_29))))
        {
          k_29 = ATgetFirst((ATermList) i_29);
          l_29 = (ATerm) ATgetNext((ATermList) i_29);
          h_29 :
          if(((ATgetType(l_29) == AT_LIST) && !(ATisEmpty(l_29))))
            {
              m_29 = ATgetFirst((ATermList) l_29);
              n_29 = (ATerm) ATgetNext((ATermList) l_29);
              {
                ATerm w_29 = NULL;
                ATerm s_21;
                s_21 = t;
                {
                  t = not_null(k_29);
                  t = j_0(t);
                }
                t = s_21;
                {
                  ATerm x_29 = NULL;
                  t = not_null(m_29);
                  {
                    t = k_0(t);
                    {
                      x_29 = t;
                      if(((w_29 != NULL) && (w_29 != x_29)))
                        _fail(x_29);
                      else
                        w_29 = x_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_29)), not_null(w_29));
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
  ATerm s_4 (ATerm t)
  {
    ATerm d_30 = NULL;
    d_30 = t;
    b_30 :
    if(!(match_string(d_30, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm u_21;
    u_21 = t;
    {
      ATerm e_30 = NULL;
      ATerm f_30 = NULL;
      f_30 = t;
      if(((e_30 != NULL) && (e_30 != f_30)))
        _fail(f_30);
      else
        e_30 = f_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATinsert(ATempty, not_null(e_30)));
        t = extend_config_0(t);
      }
    }
    t = u_21;
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_v_21;
    return(t);
  }
  t = ArgOption_3(t, s_4, t_4, y_4);
  return(t);
}
ATerm ast2abox_options_0 (ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0(t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      t = io_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm j_30 = NULL;
  ATerm y_21;
  y_21 = t;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm k_30 = NULL,n_30 = NULL;
      k_30 = t;
      i_30 :
      if(match_cons(k_30, sym_Program_1))
        {
          n_30 = ATgetArgument(k_30, 0);
          if(((j_30 != NULL) && (j_30 != n_30)))
            _fail(n_30);
          else
            j_30 = n_30;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, c_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_22), not_null(j_30)), term_z_21));
      {
        t = printnl_0(t);
        {
          t = term_t_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, (ATerm) ATinsert(ATempty, term_b_22));
  {
    t = printnl_0(t);
    {
      t = term_t_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = SSL_TicksToSeconds(not_null(q_30));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
  v_30 = t;
  u_30 :
  if(match_cons(v_30, sym__2))
    {
      w_30 = ATgetArgument(v_30, 0);
      x_30 = ATgetArgument(v_30, 1);
      {
        ATerm c_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_30), not_null(x_30));
            ;
            LocalPopChoice(d_22);
          }
        else
          {
            t = c_22;
            t = SSL_addr(not_null(w_30), not_null(x_30));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_70 (ATerm), ATerm w_70 (ATerm))
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_70(t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
        e_31 = t;
        d_31 :
        if(((ATgetType(e_31) == AT_LIST) && !(ATisEmpty(e_31))))
          {
            f_31 = ATgetFirst((ATermList) e_31);
            g_31 = (ATerm) ATgetNext((ATermList) e_31);
            {
              ATerm j_31 = NULL;
              ATerm k_31 = NULL;
              t = not_null(g_31);
              {
                t = foldr_2(t, v_70, w_70);
                {
                  k_31 = t;
                  if(((j_31 != NULL) && (j_31 != k_31)))
                    _fail(k_31);
                  else
                    j_31 = k_31;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_31), not_null(j_31));
                t = w_70(t);
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
ATerm crush_2 (ATerm t, ATerm t_69 (ATerm), ATerm u_69 (ATerm))
{
  ATerm r_31 = NULL;
  ATerm t_31 = NULL;
  r_31 = t;
  {
    ATerm u_31 = NULL;
    ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
    t = not_null(r_31);
    {
      u_31 = t;
      {
        t = SSL_explode_term(not_null(u_31));
        {
          w_31 = t;
          q_31 :
          if(match_cons(w_31, sym__2))
            {
              x_31 = ATgetArgument(w_31, 0);
              y_31 = ATgetArgument(w_31, 1);
              if(((t_31 != NULL) && (t_31 != y_31)))
                _fail(y_31);
              else
                t_31 = y_31;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_31);
      t = foldr_2(t, t_69, u_69);
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
    ATerm i_5 (ATerm t)
    {
      t = term_u_19;
      return(t);
    }
    t = crush_2(t, i_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym__2))
    {
      f_32 = ATgetArgument(e_32, 0);
      g_32 = ATgetArgument(e_32, 1);
      {
        ATerm g_22;
        g_22 = t;
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_32), not_null(g_32));
              ;
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              t = SSL_gtr(not_null(f_32), not_null(g_32));
            }
        }
        t = g_22;
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
  ATerm n_32 = NULL;
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_32 = NULL,p_32 = NULL,s_32 = NULL;
      o_32 = t;
      m_32 :
      if(match_cons(o_32, sym__2))
        {
          p_32 = ATgetArgument(o_32, 0);
          s_32 = ATgetArgument(o_32, 1);
          {
            if(((n_32 != NULL) && (n_32 != p_32)))
              _fail(p_32);
            else
              n_32 = p_32;
            if(((n_32 != NULL) && (n_32 != s_32)))
              _fail(s_32);
            else
              n_32 = s_32;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm m_22;
    m_22 = t;
    {
      ATerm v_32 = NULL;
      ATerm w_32 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          w_32 = t;
          if(((v_32 != NULL) && (v_32 != w_32)))
            _fail(w_32);
          else
            v_32 = w_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_32), term_t_9);
        t = geq_0(t);
      }
    }
    t = m_22;
    t = m_59(t);
    return(t);
  }
  t = try_1(t, j_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm a_33 = NULL,c_33 = NULL;
    ATerm o_22;
    o_22 = t;
    {
      ATerm b_33 = NULL;
      t = run_time_0(t);
      {
        b_33 = t;
        if(((a_33 != NULL) && (a_33 != b_33)))
          _fail(b_33);
        else
          a_33 = b_33;
      }
    }
    t = o_22;
    {
      ATerm d_33 = NULL;
      t = term_q_22;
      {
        t = get_config_0(t);
        {
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_22), not_null(a_33)), term_u_22), not_null(c_33)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, k_5);
  {
    t = term_u_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  j_33 :
  if(match_cons(k_33, sym_Version_0))
    {
      ATerm m_33 = NULL,o_33 = NULL;
      ATerm w_22;
      w_22 = t;
      {
        ATerm n_33 = NULL;
        t = SSLgetAnnotations(not_null(k_33));
        {
          n_33 = t;
          if(((m_33 != NULL) && (m_33 != n_33)))
            _fail(n_33);
          else
            m_33 = n_33;
        }
      }
      t = w_22;
      {
        ATerm p_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_33));
        {
          p_33 = t;
          if(((o_33 != NULL) && (o_33 != p_33)))
            _fail(p_33);
          else
            o_33 = p_33;
        }
        t = not_null(o_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_78 (ATerm))
{
  ATerm l_5 (ATerm t)
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
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
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(a_23);
            }
          else
            {
              t = z_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, l_5);
  t = r_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_34 = NULL;
  h_34 = t;
  t = SSL_table_create(not_null(h_34));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_34 = NULL;
  l_34 = t;
  {
    ATerm b_23;
    b_23 = t;
    {
      t = term_c_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_c_23, term_d_23, not_null(l_34));
          t = table_put_0(t);
        }
      }
    }
    t = b_23;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  t = SSL_table_destroy(not_null(v_34));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_35 = NULL;
  c_35 = t;
  t = SSL_exit(not_null(c_35));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  f_35 :
  if(((ATgetType(g_35) == AT_LIST) && ATisEmpty(g_35)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
        {
          h_35 = ATgetFirst((ATermList) g_35);
          i_35 = (ATerm) ATgetNext((ATermList) g_35);
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
  ATerm f_23;
  f_23 = t;
  {
    ATerm l_35 = NULL;
    ATerm o_35 = NULL;
    ATerm g_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = g_23;
        {
          ATerm m_35 = NULL;
          ATerm n_35 = NULL;
          n_35 = t;
          if(((m_35 != NULL) && (m_35 != n_35)))
            _fail(n_35);
          else
            m_35 = n_35;
          t = (ATerm) ATinsert(ATempty, not_null(m_35));
        }
      }
    {
      o_35 = t;
      if(((l_35 != NULL) && (l_35 != o_35)))
        _fail(o_35);
      else
        l_35 = o_35;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_7, not_null(l_35));
      t = printnl_0(t);
    }
  }
  t = f_23;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm z_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  z_35 = t;
  w_35 :
  if(((ATgetType(z_35) == AT_LIST) && !(ATisEmpty(z_35))))
    {
      x_35 = ATgetFirst((ATermList) z_35);
      y_35 = (ATerm) ATgetNext((ATermList) z_35);
      {
        ATerm c_36 = NULL;
        t = not_null(y_35);
        {
          ATerm m_23;
          m_23 = t;
          {
            ATerm d_36 = NULL,f_36 = NULL,h_36 = NULL;
            ATerm q_23;
            q_23 = t;
            {
              ATerm e_36 = NULL;
              t = i_0(t);
              {
                e_36 = t;
                if(((d_36 != NULL) && (d_36 != e_36)))
                  _fail(e_36);
                else
                  d_36 = e_36;
              }
            }
            t = q_23;
            {
              ATerm g_36 = NULL;
              t = not_null(x_35);
              {
                t = g_0(t);
                {
                  g_36 = t;
                  if(((f_36 != NULL) && (f_36 != g_36)))
                    _fail(g_36);
                  else
                    f_36 = g_36;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_36)), not_null(f_36));
                {
                  h_36 = t;
                  if(((c_36 != NULL) && (c_36 != h_36)))
                    _fail(h_36);
                  else
                    c_36 = h_36;
                }
              }
            }
          }
          t = m_23;
          {
            ATerm n_5 (ATerm t)
            {
              t = not_null(c_36);
              return(t);
            }
            t = reverse_acc_2(t, g_0, n_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(z_35) == AT_LIST) && ATisEmpty(z_35)))
        {
          {
            t = term_x_15;
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
  ATerm o_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm y_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm s_36 = NULL,t_36 = NULL;
  s_36 = t;
  r_36 :
  if(match_cons(s_36, sym_Program_1))
    {
      t_36 = ATgetArgument(s_36, 0);
      {
        ATerm w_36 = NULL,y_36 = NULL;
        ATerm x_36 = NULL;
        t = SSLgetAnnotations(not_null(s_36));
        {
          x_36 = t;
          if(((w_36 != NULL) && (w_36 != x_36)))
            _fail(x_36);
          else
            w_36 = x_36;
        }
        {
          t = not_null(t_36);
          {
            ATerm a_37 = NULL;
            t = z_57(t);
            {
              y_36 = t;
              {
                ATerm b_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_36)), not_null(w_36));
                {
                  b_37 = t;
                  if(((a_37 != NULL) && (a_37 != b_37)))
                    _fail(b_37);
                  else
                    a_37 = b_37;
                }
                t = not_null(a_37);
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
  ATerm k_37 = NULL;
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_37 = NULL;
      t = term_q_22;
      {
        t = get_config_0(t);
        {
          l_37 = t;
          if(((k_37 != NULL) && (k_37 != l_37)))
            _fail(l_37);
          else
            k_37 = l_37;
        }
      }
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm p_5 (ATerm t)
        {
          ATerm u_5 (ATerm t)
          {
            ATerm m_37 = NULL;
            m_37 = t;
            if(((k_37 != NULL) && (k_37 != m_37)))
              _fail(m_37);
            else
              k_37 = m_37;
            return(t);
          }
          t = Program_1(t, u_5);
          return(t);
        }
        t = option_defined_1(t, p_5);
      }
    }
  {
    ATerm v_5 (ATerm t)
    {
      ATerm w_5 (ATerm t)
      {
        t = not_null(k_37);
        return(t);
      }
      t = short_description_1(t, w_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, v_5);
    {
      t = term_u_23;
      {
        t = echo_0(t);
        {
          t = term_x_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm x_5 (ATerm t)
                {
                  ATerm n_37 = NULL;
                  ATerm o_37 = NULL;
                  o_37 = t;
                  if(((n_37 != NULL) && (n_37 != o_37)))
                    _fail(o_37);
                  else
                    n_37 = o_37;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_37)), term_y_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, x_5);
                {
                  ATerm y_5 (ATerm t)
                  {
                    ATerm p_37 = NULL;
                    ATerm q_37 = NULL;
                    ATerm z_5 (ATerm t)
                    {
                      t = not_null(k_37);
                      return(t);
                    }
                    t = long_description_1(t, z_5);
                    {
                      q_37 = t;
                      if(((p_37 != NULL) && (p_37 != q_37)))
                        _fail(q_37);
                      else
                        p_37 = q_37;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(p_37)), term_z_23);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, y_5);
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
  ATerm a_24;
  a_24 = t;
  {
    ATerm w_37 = NULL;
    ATerm x_37 = NULL;
    x_37 = t;
    if(((w_37 != NULL) && (w_37 != x_37)))
      _fail(x_37);
    else
      w_37 = x_37;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_10, (ATerm) ATinsert(ATempty, not_null(w_37)));
      t = printnl_0(t);
    }
  }
  t = a_24;
  return(t);
}
ATerm say_1 (ATerm t, ATerm o_72 (ATerm))
{
  ATerm b_24;
  b_24 = t;
  {
    t = o_72(t);
    t = debug_0(t);
  }
  t = b_24;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_58 (ATerm))
{
  ATerm e_38 = NULL,f_38 = NULL;
  e_38 = t;
  d_38 :
  if(match_cons(e_38, sym_Undefined_1))
    {
      f_38 = ATgetArgument(e_38, 0);
      {
        ATerm i_38 = NULL,n_38 = NULL;
        ATerm k_38 = NULL;
        t = SSLgetAnnotations(not_null(e_38));
        {
          k_38 = t;
          if(((i_38 != NULL) && (i_38 != k_38)))
            _fail(k_38);
          else
            i_38 = k_38;
        }
        {
          t = not_null(f_38);
          {
            ATerm p_38 = NULL;
            t = a_58(t);
            {
              n_38 = t;
              {
                ATerm q_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_38)), not_null(i_38));
                {
                  q_38 = t;
                  if(((p_38 != NULL) && (p_38 != q_38)))
                    _fail(q_38);
                  else
                    p_38 = q_38;
                }
                t = not_null(p_38);
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
ATerm fetch_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm v_38 (ATerm t)
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_64, _id);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = Cons_2(t, _id, v_38);
      }
    return(t);
  }
  t = v_38(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_79 (ATerm))
{
  t = fetch_1(t, y_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_39 = NULL;
  a_39 = t;
  z_38 :
  if(match_cons(a_39, sym_Help_0))
    {
      ATerm c_39 = NULL,e_39 = NULL;
      ATerm e_24;
      e_24 = t;
      {
        ATerm d_39 = NULL;
        t = SSLgetAnnotations(not_null(a_39));
        {
          d_39 = t;
          if(((c_39 != NULL) && (c_39 != d_39)))
            _fail(d_39);
          else
            c_39 = d_39;
        }
      }
      t = e_24;
      {
        ATerm f_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_39));
        {
          f_39 = t;
          if(((e_39 != NULL) && (e_39 != f_39)))
            _fail(f_39);
          else
            e_39 = f_39;
        }
        t = not_null(e_39);
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
  ATerm k_39 = NULL;
  k_39 = t;
  t = SSL_implode_string(not_null(k_39));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      {
        ATerm p_39 = NULL,t_39 = NULL,v_39 = NULL;
        p_39 = t;
        o_39 :
        if(((ATgetType(p_39) == AT_LIST) && !(ATisEmpty(p_39))))
          {
            t_39 = ATgetFirst((ATermList) p_39);
            v_39 = (ATerm) ATgetNext((ATermList) p_39);
            {
              t = not_null(t_39);
              {
                ATerm g_6 (ATerm t)
                {
                  t = not_null(v_39);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_6);
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
  ATerm f_40 = NULL;
  ATerm h_40 = NULL;
  f_40 = t;
  {
    ATerm i_40 = NULL;
    ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
    t = not_null(f_40);
    {
      i_40 = t;
      {
        t = SSL_explode_term(not_null(i_40));
        {
          k_40 = t;
          d_40 :
          if(match_cons(k_40, sym__2))
            {
              l_40 = ATgetArgument(k_40, 0);
              m_40 = ATgetArgument(k_40, 1);
              e_40 :
              if(match_string(l_40, ""))
                {
                  if(((h_40 != NULL) && (h_40 != m_40)))
                    _fail(m_40);
                  else
                    h_40 = m_40;
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
      t = not_null(h_40);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_65 (ATerm))
{
  ATerm q_40 (ATerm t)
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_40);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        {
          t = Nil_0(t);
          t = a_65(t);
        }
      }
    return(t);
  }
  t = q_40(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  s_40 :
  if(match_cons(t_40, sym__2))
    {
      u_40 = ATgetArgument(t_40, 0);
      v_40 = ATgetArgument(t_40, 1);
      {
        t = not_null(u_40);
        {
          ATerm h_6 (ATerm t)
          {
            t = not_null(v_40);
            return(t);
          }
          t = at_end_1(t, h_6);
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
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_41 = NULL;
  a_41 = t;
  t = SSL_explode_string(not_null(a_41));
  return(t);
}
ATerm _2 (ATerm t, ATerm d_51 (ATerm), ATerm e_51 (ATerm))
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  j_41 = t;
  i_41 :
  if(match_cons(j_41, sym__2))
    {
      k_41 = ATgetArgument(j_41, 0);
      l_41 = ATgetArgument(j_41, 1);
      {
        ATerm p_41 = NULL,r_41 = NULL;
        ATerm q_41 = NULL;
        t = SSLgetAnnotations(not_null(j_41));
        {
          q_41 = t;
          if(((p_41 != NULL) && (p_41 != q_41)))
            _fail(q_41);
          else
            p_41 = q_41;
        }
        {
          t = not_null(k_41);
          {
            ATerm t_41 = NULL;
            t = d_51(t);
            {
              r_41 = t;
              {
                t = not_null(l_41);
                {
                  ATerm v_41 = NULL;
                  t = e_51(t);
                  {
                    t_41 = t;
                    {
                      ATerm w_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_41), not_null(t_41)), not_null(p_41));
                      {
                        w_41 = t;
                        if(((v_41 != NULL) && (v_41 != w_41)))
                          _fail(w_41);
                        else
                          v_41 = w_41;
                      }
                      t = not_null(v_41);
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
  ATerm j_42 = NULL,k_42 = NULL,n_42 = NULL;
  j_42 = t;
  i_42 :
  if(match_cons(j_42, sym__2))
    {
      k_42 = ATgetArgument(j_42, 0);
      n_42 = ATgetArgument(j_42, 1);
      {
        ATerm t_24;
        t_24 = t;
        t = SSL_printnl(not_null(k_42), not_null(n_42));
        t = t_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm u_24;
  u_24 = t;
  {
    ATerm t_42 = NULL,v_42 = NULL;
    ATerm v_24;
    v_24 = t;
    {
      ATerm u_42 = NULL;
      t = n_72(t);
      {
        u_42 = t;
        if(((t_42 != NULL) && (t_42 != u_42)))
          _fail(u_42);
        else
          t_42 = u_42;
      }
    }
    t = v_24;
    {
      ATerm w_42 = NULL;
      w_42 = t;
      if(((v_42 != NULL) && (v_42 != w_42)))
        _fail(w_42);
      else
        v_42 = w_42;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_42)), not_null(t_42)));
        t = printnl_0(t);
      }
    }
  }
  t = u_24;
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm b_43 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = Cons_2(t, l_64, b_43);
      }
    return(t);
  }
  t = b_43(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm f_43 = NULL;
  f_43 = t;
  t = SSL_is_string(not_null(f_43));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm y_24 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = y_24;
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_6);
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            {
              ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
              h_44 = t;
              g_44 :
              if(match_cons(h_44, sym_Path_1))
                {
                  i_44 = ATgetArgument(h_44, 0);
                  t = not_null(i_44);
                }
              else
                {
                  if(match_cons(h_44, sym_Var_1))
                    {
                      i_44 = ATgetArgument(h_44, 0);
                      {
                        t = not_null(i_44);
                        {
                          ATerm e_25 = t;
                          int f_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(f_25);
                            }
                          else
                            {
                              t = e_25;
                              {
                                ATerm j_6 (ATerm t)
                                {
                                  t = term_p_25;
                                  return(t);
                                }
                                t = debug_1(t, j_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_44, sym_Prefix_2))
                        {
                          i_44 = ATgetArgument(h_44, 0);
                          j_44 = ATgetArgument(h_44, 1);
                          {
                            ATerm s_44 = NULL,u_44 = NULL;
                            ATerm q_25;
                            q_25 = t;
                            {
                              ATerm t_44 = NULL;
                              t = not_null(i_44);
                              {
                                t = eval_config_0(t);
                                {
                                  t_44 = t;
                                  if(((s_44 != NULL) && (s_44 != t_44)))
                                    _fail(t_44);
                                  else
                                    s_44 = t_44;
                                }
                              }
                            }
                            t = q_25;
                            {
                              ATerm y_44 = NULL;
                              t = not_null(j_44);
                              {
                                t = eval_config_0(t);
                                {
                                  y_44 = t;
                                  if(((u_44 != NULL) && (u_44 != y_44)))
                                    _fail(y_44);
                                  else
                                    u_44 = y_44;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_44), not_null(u_44));
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
  ATerm o_45 = NULL;
  o_45 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_21, not_null(o_45));
    {
      t = table_get_0(t);
      {
        ATerm m_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_25;
            r_25 = t;
            {
              ATerm q_45 = NULL;
              ATerm r_45 = NULL;
              r_45 = t;
              if(((q_45 != NULL) && (q_45 != r_45)))
                _fail(r_45);
              else
                q_45 = r_45;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_r_21, not_null(o_45), not_null(q_45));
                t = table_put_0(t);
              }
            }
            t = r_25;
          }
          return(t);
        }
        t = try_1(t, m_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_62(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  c_46 = t;
  b_46 :
  if(match_cons(c_46, sym__2))
    {
      d_46 = ATgetArgument(c_46, 0);
      e_46 = ATgetArgument(c_46, 1);
      t = SSL_table_get(not_null(d_46), not_null(e_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  p_46 = t;
  o_46 :
  if(match_cons(p_46, sym__3))
    {
      q_46 = ATgetArgument(p_46, 0);
      r_46 = ATgetArgument(p_46, 1);
      s_46 = ATgetArgument(p_46, 2);
      {
        ATerm v_25;
        v_25 = t;
        {
          ATerm w_46 = NULL;
          ATerm x_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_46), not_null(r_46));
          {
            ATerm w_25 = t;
            int x_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(x_25);
              }
            else
              {
                t = w_25;
                t = (ATerm) ATempty;
              }
            {
              x_46 = t;
              if(((w_46 != NULL) && (w_46 != x_46)))
                _fail(x_46);
              else
                w_46 = x_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_46), not_null(r_46), (ATerm) ATinsert(CheckATermList(not_null(w_46)), not_null(s_46)));
            t = table_put_0(t);
          }
        }
        t = v_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm d_81 (ATerm))
{
  ATerm b_47 = NULL;
  ATerm c_47 = NULL;
  t = term_x_15;
  {
    t = d_81(t);
    {
      c_47 = t;
      if(((b_47 != NULL) && (b_47 != c_47)))
        _fail(c_47);
      else
        b_47 = c_47;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_23, term_w_23, not_null(b_47));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  h_47 :
  if(match_string(i_47, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(i_47) == AT_LIST) && !(ATisEmpty(i_47))))
        {
          j_47 = ATgetFirst((ATermList) i_47);
          k_47 = (ATerm) ATgetNext((ATermList) i_47);
          {
            ATerm n_47 = NULL;
            ATerm y_25;
            y_25 = t;
            {
              t = not_null(j_47);
              t = a_0(t);
            }
            t = y_25;
            {
              ATerm o_47 = NULL;
              t = term_x_15;
              {
                t = c_0(t);
                {
                  o_47 = t;
                  if(((n_47 != NULL) && (n_47 != o_47)))
                    _fail(o_47);
                  else
                    n_47 = o_47;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_47)), not_null(n_47));
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
  ATerm o_6 (ATerm t)
  {
    ATerm t_47 = NULL;
    t_47 = t;
    s_47 :
    if(!(match_string(t_47, "--help")))
      {
        if(!(match_string(t_47, "-h")))
          {
            if(!(match_string(t_47, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    t = term_e_26;
    {
      t = set_config_0(t);
      t = term_f_26;
    }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = term_m_26;
    return(t);
  }
  t = Option_3(t, o_6, p_6, t_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL;
  w_47 = t;
  v_47 :
  if(((ATgetType(w_47) == AT_LIST) && !(ATisEmpty(w_47))))
    {
      x_47 = ATgetFirst((ATermList) w_47);
      y_47 = (ATerm) ATgetNext((ATermList) w_47);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_47)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_47)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_52 (ATerm), ATerm n_52 (ATerm))
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
  i_48 = t;
  h_48 :
  if(((ATgetType(i_48) == AT_LIST) && !(ATisEmpty(i_48))))
    {
      j_48 = ATgetFirst((ATermList) i_48);
      k_48 = (ATerm) ATgetNext((ATermList) i_48);
      {
        ATerm o_48 = NULL,q_48 = NULL;
        ATerm p_48 = NULL;
        t = SSLgetAnnotations(not_null(i_48));
        {
          p_48 = t;
          if(((o_48 != NULL) && (o_48 != p_48)))
            _fail(p_48);
          else
            o_48 = p_48;
        }
        {
          t = not_null(j_48);
          {
            ATerm s_48 = NULL;
            t = m_52(t);
            {
              q_48 = t;
              {
                t = not_null(k_48);
                {
                  ATerm u_48 = NULL;
                  t = n_52(t);
                  {
                    s_48 = t;
                    {
                      ATerm v_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_48)), not_null(q_48)), not_null(o_48));
                      {
                        v_48 = t;
                        if(((u_48 != NULL) && (u_48 != v_48)))
                          _fail(v_48);
                        else
                          u_48 = v_48;
                      }
                      t = not_null(u_48);
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
  ATerm f_49 = NULL;
  f_49 = t;
  e_49 :
  if(((ATgetType(f_49) == AT_LIST) && ATisEmpty(f_49)))
    {
      {
        ATerm h_49 = NULL,j_49 = NULL;
        ATerm n_26;
        n_26 = t;
        {
          ATerm i_49 = NULL;
          t = SSLgetAnnotations(not_null(f_49));
          {
            i_49 = t;
            if(((h_49 != NULL) && (h_49 != i_49)))
              _fail(i_49);
            else
              h_49 = i_49;
          }
        }
        t = n_26;
        {
          ATerm k_49 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_49));
          {
            k_49 = t;
            if(((j_49 != NULL) && (j_49 != k_49)))
              _fail(k_49);
            else
              j_49 = k_49;
          }
          t = not_null(j_49);
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
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
  q_49 = t;
  p_49 :
  if(match_cons(q_49, sym__2))
    {
      r_49 = ATgetArgument(q_49, 0);
      s_49 = ATgetArgument(q_49, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_r_21, not_null(r_49), not_null(s_49));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm q_26;
  q_26 = t;
  {
    ATerm u_6 (ATerm t)
    {
      t = term_u_26;
      t = b_81(t);
      return(t);
    }
    t = try_1(t, u_6);
  }
  t = q_26;
  {
    ATerm v_6 (ATerm t)
    {
      ATerm a_50 = NULL;
      ATerm y_26;
      y_26 = t;
      {
        ATerm y_49 = NULL;
        ATerm z_49 = NULL;
        z_49 = t;
        if(((y_49 != NULL) && (y_49 != z_49)))
          _fail(z_49);
        else
          y_49 = z_49;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_22, not_null(y_49));
          t = set_config_0(t);
        }
      }
      t = y_26;
      {
        ATerm b_50 = NULL;
        b_50 = t;
        if(((a_50 != NULL) && (a_50 != b_50)))
          _fail(b_50);
        else
          a_50 = b_50;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_50));
      }
      return(t);
    }
    ATerm w_6 (ATerm t)
    {
      ATerm z_26 = t;
      int b_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_27 = t;
          int f_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(f_27);
            }
          else
            {
              t = c_27;
              {
                t = b_81(t);
                t = Cons_2(t, _id, w_6);
              }
            }
          ;
          LocalPopChoice(b_27);
        }
      else
        {
          t = z_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_6, w_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  ATerm g_27;
  g_27 = t;
  {
    ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
    k_50 = t;
    g_50 :
    if(match_cons(k_50, sym__3))
      {
        l_50 = ATgetArgument(k_50, 0);
        m_50 = ATgetArgument(k_50, 1);
        n_50 = ATgetArgument(k_50, 2);
        {
          if(((h_50 != NULL) && (h_50 != l_50)))
            _fail(l_50);
          else
            h_50 = l_50;
          {
            if(((i_50 != NULL) && (i_50 != m_50)))
              _fail(m_50);
            else
              i_50 = m_50;
            {
              if(((j_50 != NULL) && (j_50 != n_50)))
                _fail(n_50);
              else
                j_50 = n_50;
              t = SSL_table_put(not_null(h_50), not_null(i_50), not_null(j_50));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_81 (ATerm))
{
  ATerm q_50 = NULL;
  ATerm p_27;
  p_27 = t;
  {
    t = term_q_27;
    t = table_put_0(t);
  }
  t = p_27;
  {
    ATerm b_7 (ATerm t)
    {
      ATerm s_27 = t;
      int t_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_81(t);
          ;
          LocalPopChoice(t_27);
        }
      else
        {
          t = s_27;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_7);
    {
      ATerm c_7 (ATerm t)
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_28;
            e_28 = t;
            {
              ATerm f_28 = t;
              int l_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_26;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(l_28);
                }
              else
                {
                  t = f_28;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = e_28;
            {
              t = system_usage_0(t);
              {
                t = term_u_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            {
              ATerm d_7 (ATerm t)
              {
                ATerm e_7 (ATerm t)
                {
                  ATerm r_50 = NULL;
                  r_50 = t;
                  if(((q_50 != NULL) && (q_50 != r_50)))
                    _fail(r_50);
                  else
                    q_50 = r_50;
                  return(t);
                }
                t = Undefined_1(t, e_7);
                return(t);
              }
              t = option_defined_1(t, d_7);
              {
                ATerm f_7 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_50)), term_m_28);
                  return(t);
                }
                t = say_1(t, f_7);
                {
                  t = system_usage_0(t);
                  {
                    t = term_t_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, c_7);
      {
        ATerm n_28;
        n_28 = t;
        {
          t = term_v_23;
          t = table_destroy_0(t);
        }
        t = n_28;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm x_78 (ATerm), ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm))
{
  t = parse_options_1(t, x_78);
  {
    t = store_options_0(t);
    {
      t = z_78(t);
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_78);
            ;
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            {
              ATerm u_28 = t;
              int v_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_79(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(v_28);
                }
              else
                {
                  t = u_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  t = option_wrap_4(t, b_79, default_usage_0, _id, c_79);
  return(t);
}
ATerm io_ast2abox_0 (ATerm t)
{
  t = option_wrap_2(t, ast2abox_options_0, ast2abox_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_ast2abox_0(t);
  return(t);
}
