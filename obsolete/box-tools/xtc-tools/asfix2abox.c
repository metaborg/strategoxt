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
ATerm term_s_30;
ATerm term_a_30;
ATerm term_g_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_m_27;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_n_22;
ATerm term_h_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_l_19;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_i_16;
ATerm term_e_16;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_v_12;
ATerm term_r_12;
ATerm term_m_12;
ATerm term_w_11;
ATerm term_r_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_s_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_i_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_e_7;
ATerm term_r_6;
ATerm term_k_6;
void init_constant_terms (void)
{
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no pretty-print tables specified with -p arguments", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_a_11, term_i_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__2, term_a_11, term_r_12);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_m_16, term_m_15);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_j_10);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_y_7, term_r_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_j_10);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_j_10);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_k_6, term_y_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_g_25, term_k_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_o_28, term_j_10);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__3, term_g_25, term_k_25, (ATerm) ATempty);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm pass_conservative_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm p_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm z_73 (ATerm));
ATerm xtc_parse_pp_table_0 (ATerm);
ATerm parse_to_temp_file_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_58 (ATerm));
ATerm Fst_0 (ATerm);
ATerm modification_time_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm lookup_pp_af_0 (ATerm);
ATerm lookup_or_parse_0 (ATerm);
ATerm must_be_pp_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm v_64 (ATerm));
ATerm has_extension_1 (ATerm, ATerm i_76 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm, ATerm h_74 (ATerm), ATerm i_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm u_58 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm c_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm b_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm d_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm d_70 (ATerm), ATerm e_70 (ATerm));
ATerm union_1 (ATerm, ATerm z_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm m_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm y_73 (ATerm));
ATerm assert_1 (ATerm, ATerm u_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm i_75 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm l_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm r_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm b_63 (ATerm), ATerm c_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm q_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm o_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm p_73 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm q_70 (ATerm), ATerm r_70 (ATerm));
ATerm crush_2 (ATerm, ATerm o_69 (ATerm), ATerm p_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_80 (ATerm));
ATerm Program_1 (ATerm, ATerm k_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm l_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm p_50 (ATerm), ATerm q_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm b_75 (ATerm));
ATerm map_1 (ATerm, ATerm c_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_51 (ATerm), ATerm z_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm n_78 (ATerm), ATerm o_78 (ATerm));
ATerm io_asfix2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm pass_conservative_0 (ATerm t)
{
  ATerm d_3 = t;
  int j_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_6;
      t = get_config_0(t);
      LocalPopChoice(j_6);
      {
        ATerm e_0 = NULL;
        ATerm y_0 = NULL;
        y_0 = t;
        if(((e_0 != NULL) && (e_0 != y_0)))
          _fail(y_0);
        else
          e_0 = y_0;
        t = (ATerm) ATinsert(CheckATermList(not_null(e_0)), term_r_6);
      }
    }
  else
    {
      t = d_3;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL,t_2 = NULL;
  z_1 = t;
  l_1 :
  if(match_cons(z_1, sym__2))
    {
      b_2 = ATgetArgument(z_1, 0);
      t_2 = ATgetArgument(z_1, 1);
      {
        t = not_null(t_2);
        {
          ATerm s_6 = t;
          int t_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_6);
            }
          else
            {
              t = s_6;
              {
                ATerm b_0 (ATerm t)
                {
                  ATerm u_6 = t;
                  int x_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(x_6);
                    }
                  else
                    {
                      t = u_6;
                      {
                        ATerm z_2 = NULL;
                        t = Cons_2(t, _id, b_0);
                        {
                          ATerm b_3 = NULL;
                          b_3 = t;
                          if(((z_2 != NULL) && (z_2 != b_3)))
                            _fail(b_3);
                          else
                            z_2 = b_3;
                          t = (ATerm) ATinsert(CheckATermList(not_null(z_2)), not_null(b_2));
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
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
  i_3 = t;
  h_3 :
  if(match_cons(i_3, sym__2))
    {
      j_3 = ATgetArgument(i_3, 0);
      k_3 = ATgetArgument(i_3, 1);
      t = SSL_rename(not_null(j_3), not_null(k_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm x_3 = NULL,y_3 = NULL;
  x_3 = t;
  w_3 :
  if(match_cons(x_3, sym_FILE_1))
    {
      y_3 = ATgetArgument(x_3, 0);
      {
        ATerm z_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 = NULL;
            t = p_0(t);
            {
              a_4 = t;
              s_3 :
              if(match_cons(a_4, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_3), term_e_7);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(y_3);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_e_7;
            LocalPopChoice(a_7);
          }
        else
          {
            t = z_6;
            {
              ATerm f_7 = t;
              int g_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_4 = NULL;
                  ATerm d_4 = NULL;
                  t = p_0(t);
                  {
                    d_4 = t;
                    {
                      if(((c_4 != NULL) && (c_4 != d_4)))
                        _fail(d_4);
                      else
                        c_4 = d_4;
                      {
                        ATerm h_7 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm m_7 = t;
                            int n_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(n_7);
                              }
                            else
                              {
                                t = m_7;
                                {
                                  ATerm e_4 = NULL;
                                  e_4 = t;
                                  if(((y_3 != NULL) && (y_3 != e_4)))
                                    _fail(e_4);
                                  else
                                    y_3 = e_4;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = h_7;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_3), not_null(c_4));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_4));
                  LocalPopChoice(g_7);
                }
              else
                {
                  t = f_7;
                  {
                    ATerm g_4 = NULL;
                    t = p_0(t);
                    {
                      g_4 = t;
                      if(((y_3 != NULL) && (y_3 != g_4)))
                        _fail(g_4);
                      else
                        y_3 = g_4;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_3));
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
ATerm xtc_transform_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, z_73, c_0);
  return(t);
}
ATerm xtc_parse_pp_table_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = term_o_7;
    return(t);
  }
  t = xtc_transform_1(t, f_0);
  return(t);
}
ATerm parse_to_temp_file_0 (ATerm t)
{
  ATerm r_4 = NULL;
  ATerm t_4 = NULL,u_4 = NULL;
  r_4 = t;
  {
    ATerm q_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_4));
      {
        ATerm r_0 (ATerm t)
        {
          t = term_o_7;
          return(t);
        }
        t = xtc_transform_1(t, r_0);
        t = rename_to_1(t, new_file_0);
      }
      return(t);
    }
    t = xtc_temp_files_1(t, q_0);
    {
      t_4 = t;
      q_4 :
      if(match_cons(t_4, sym_FILE_1))
        {
          u_4 = ATgetArgument(t_4, 0);
          {
            t = not_null(u_4);
            {
              ATerm s_0 (ATerm t)
              {
                ATerm t_0 (ATerm t)
                {
                  t = term_q_7;
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
ATerm if_verbose2_1 (ATerm t, ATerm z_58 (ATerm))
{
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_7;
      x_7 = t;
      {
        ATerm z_4 = NULL;
        ATerm a_5 = NULL;
        t = term_y_7;
        {
          t = get_config_0(t);
          {
            a_5 = t;
            if(((z_4 != NULL) && (z_4 != a_5)))
              _fail(a_5);
            else
              z_4 = a_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), term_z_7);
          t = geq_0(t);
        }
      }
      t = x_7;
      t = z_58(t);
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      {
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm i_5 = NULL;
  ATerm k_5 = NULL,l_5 = NULL;
  i_5 = t;
  {
    ATerm m_5 = NULL;
    ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL;
    t = not_null(i_5);
    {
      m_5 = t;
      {
        t = SSL_explode_term(not_null(m_5));
        {
          o_5 = t;
          f_5 :
          if(match_cons(o_5, sym__2))
            {
              p_5 = ATgetArgument(o_5, 0);
              q_5 = ATgetArgument(o_5, 1);
              g_5 :
              if(match_string(p_5, ""))
                {
                  h_5 :
                  if(((ATgetType(q_5) == AT_LIST) && !(ATisEmpty(q_5))))
                    {
                      r_5 = ATgetFirst((ATermList) q_5);
                      s_5 = (ATerm) ATgetNext((ATermList) q_5);
                      {
                        if(((l_5 != NULL) && (l_5 != r_5)))
                          _fail(r_5);
                        else
                          l_5 = r_5;
                        if(((k_5 != NULL) && (k_5 != s_5)))
                          _fail(s_5);
                        else
                          k_5 = s_5;
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
    t = not_null(l_5);
  }
  return(t);
}
ATerm modification_time_0 (ATerm t)
{
  ATerm x_5 = NULL;
  x_5 = t;
  t = SSL_modification_time(not_null(x_5));
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
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  c_6 = t;
  b_6 :
  if(match_cons(c_6, sym__2))
    {
      d_6 = ATgetArgument(c_6, 0);
      e_6 = ATgetArgument(c_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_6)), term_a_8), not_null(d_6));
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
  ATerm l_6 = NULL,n_6 = NULL;
  ATerm b_8;
  b_8 = t;
  {
    ATerm m_6 = NULL;
    m_6 = t;
    if(((l_6 != NULL) && (l_6 != m_6)))
      _fail(m_6);
    else
      l_6 = m_6;
  }
  t = b_8;
  {
    ATerm o_6 = NULL,q_6 = NULL;
    ATerm p_6 = NULL;
    p_6 = t;
    if(((o_6 != NULL) && (o_6 != p_6)))
      _fail(p_6);
    else
      o_6 = p_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_6), term_g_8);
      {
        t = add_extension_0(t);
        {
          t = file_exists_0(t);
          {
            q_6 = t;
            if(((n_6 != NULL) && (n_6 != q_6)))
              _fail(q_6);
            else
              n_6 = q_6;
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_6), not_null(l_6));
      {
        ATerm h_8;
        h_8 = t;
        {
          t = _2(t, modification_time_0, modification_time_0);
          t = geq_0(t);
        }
        t = h_8;
        {
          t = Fst_0(t);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = term_i_8;
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
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = lookup_pp_af_0(t);
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      t = parse_to_temp_file_0(t);
    }
  return(t);
}
ATerm must_be_pp_0 (ATerm t)
{
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        t = term_t_8;
        return(t);
      }
      t = has_extension_1(t, w_0);
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      {
        ATerm v_6 = NULL;
        ATerm w_6 = NULL;
        w_6 = t;
        if(((v_6 != NULL) && (v_6 != w_6)))
          _fail(w_6);
        else
          v_6 = w_6;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_6)), term_u_8);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm y_6 (ATerm t)
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_64(t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        t = Cons_2(t, _id, y_6);
      }
    return(t);
  }
  t = y_6(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm i_76 (ATerm))
{
  ATerm b_7 = NULL;
  ATerm x_8;
  x_8 = t;
  {
    ATerm c_7 = NULL;
    t = i_76(t);
    {
      t = explode_string_0(t);
      {
        c_7 = t;
        if(((b_7 != NULL) && (b_7 != c_7)))
          _fail(c_7);
        else
          b_7 = c_7;
      }
    }
  }
  t = x_8;
  {
    ATerm d_9;
    d_9 = t;
    {
      t = explode_string_0(t);
      {
        ATerm x_0 (ATerm t)
        {
          ATerm d_7 = NULL;
          d_7 = t;
          if(((b_7 != NULL) && (b_7 != d_7)))
            _fail(d_7);
          else
            b_7 = d_7;
          return(t);
        }
        t = at_suffix_1(t, x_0);
      }
    }
    t = d_9;
  }
  return(t);
}
ATerm ensure_pp_table_parsed_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_0 (ATerm t)
      {
        t = term_i_9;
        return(t);
      }
      t = has_extension_1(t, z_0);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        t = must_be_pp_0(t);
        {
          ATerm j_9 = t;
          int k_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = lookup_pp_af_0(t);
              LocalPopChoice(k_9);
            }
          else
            {
              t = j_9;
              t = parse_to_temp_file_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm p_9;
  p_9 = t;
  {
    t = error_0(t);
    {
      t = term_q_9;
      t = exit_0(t);
    }
  }
  t = p_9;
  return(t);
}
ATerm get_config_p_0 (ATerm t)
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_9;
      t = get_config_0(t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        t = (ATerm) ATinsert(ATempty, term_v_9);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm create_pp_table_args_0 (ATerm t)
{
  ATerm i_7 = NULL,k_7 = NULL;
  t = get_config_p_0(t);
  {
    t = map_1(t, ensure_pp_table_parsed_0);
    {
      ATerm j_7 = NULL;
      j_7 = t;
      if(((i_7 != NULL) && (i_7 != j_7)))
        _fail(j_7);
      else
        i_7 = j_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(i_7));
        {
          t = separate_by_0(t);
          {
            ATerm l_7 = NULL;
            l_7 = t;
            if(((k_7 != NULL) && (k_7 != l_7)))
              _fail(l_7);
            else
              k_7 = l_7;
            {
              t = (ATerm) ATinsert(CheckATermList(not_null(k_7)), term_t_9);
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = term_y_9;
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
  ATerm p_7 = NULL;
  p_7 = t;
  t = SSL_int_to_string(not_null(p_7));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym__2))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(v_7), not_null(w_7));
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            t = SSL_subtr(not_null(v_7), not_null(w_7));
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
  ATerm c_8 = NULL;
  ATerm d_8 = NULL,f_8 = NULL;
  ATerm e_8 = NULL;
  t = term_y_7;
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = term_q_9;
      }
    {
      e_8 = t;
      if(((d_8 != NULL) && (d_8 != e_8)))
        _fail(e_8);
      else
        d_8 = e_8;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), term_q_9);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          f_8 = t;
          if(((c_8 != NULL) && (c_8 != f_8)))
            _fail(f_8);
          else
            c_8 = f_8;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_8)), term_y_7);
  return(t);
}
ATerm build_impl_args_0 (ATerm t)
{
  ATerm l_8 = NULL,n_8 = NULL,p_8 = NULL;
  t = create_pp_table_args_0(t);
  {
    ATerm e_10;
    e_10 = t;
    {
      ATerm m_8 = NULL;
      t = term_j_10;
      {
        t = pass_verbose_0(t);
        {
          m_8 = t;
          if(((l_8 != NULL) && (l_8 != m_8)))
            _fail(m_8);
          else
            l_8 = m_8;
        }
      }
    }
    t = e_10;
    {
      ATerm k_10;
      k_10 = t;
      {
        ATerm o_8 = NULL;
        t = term_j_10;
        {
          t = create_pp_table_args_0(t);
          {
            o_8 = t;
            if(((n_8 != NULL) && (n_8 != o_8)))
              _fail(o_8);
            else
              n_8 = o_8;
          }
        }
      }
      t = k_10;
      {
        ATerm q_8 = NULL;
        t = term_j_10;
        {
          t = pass_conservative_0(t);
          {
            q_8 = t;
            if(((p_8 != NULL) && (p_8 != q_8)))
              _fail(q_8);
            else
              p_8 = q_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, not_null(l_8), not_null(n_8), not_null(p_8));
          t = concat_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym_stdin_0))
    {
      ATerm b_9 = NULL;
      ATerm c_9 = NULL;
      t = term_l_10;
      {
        t = ReadFromFile_0(t);
        {
          c_9 = t;
          if(((b_9 != NULL) && (b_9 != c_9)))
            _fail(c_9);
          else
            b_9 = c_9;
        }
      }
      t = not_null(b_9);
    }
  else
    {
      if(match_cons(z_8, sym_FILE_1))
        {
          a_9 = ATgetArgument(z_8, 0);
          {
            ATerm e_9 = NULL;
            ATerm f_9 = NULL;
            t = not_null(a_9);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  f_9 = t;
                  if(((e_9 != NULL) && (e_9 != f_9)))
                    _fail(f_9);
                  else
                    e_9 = f_9;
                }
              }
            }
            t = not_null(e_9);
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
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym__2))
    {
      n_9 = ATgetArgument(m_9, 0);
      o_9 = ATgetArgument(m_9, 1);
      t = SSL_WriteToBinaryFile(not_null(n_9), not_null(o_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm u_9 = NULL;
  ATerm w_9 = NULL;
  u_9 = t;
  {
    ATerm x_9 = NULL;
    t = xtc_new_file_0(t);
    {
      x_9 = t;
      {
        if(((w_9 != NULL) && (w_9 != x_9)))
          _fail(x_9);
        else
          w_9 = x_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(u_9));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(w_9);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_9));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm h_74 (ATerm), ATerm i_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, h_74, i_74);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  t = SSL_close_file(not_null(b_10));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym__2))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      t = SSL_execvp(not_null(h_10), not_null(i_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  t = SSL_waitpid(not_null(n_10));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm x_10 = NULL;
  ATerm z_10 = NULL;
  x_10 = t;
  {
    t = fork_0(t);
    {
      z_10 = t;
      {
        ATerm m_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_11 = NULL;
            b_11 = t;
            t_10 :
            if(match_int(b_11, 0))
              {
                t = not_null(x_10);
                t = u_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(o_10);
          }
        else
          {
            t = m_10;
            {
              ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
              t = not_null(z_10);
              {
                t = waitpid_0(t);
                {
                  c_11 = t;
                  v_10 :
                  if(match_cons(c_11, sym_WaitStatus_3))
                    {
                      d_11 = ATgetArgument(c_11, 0);
                      e_11 = ATgetArgument(c_11, 1);
                      f_11 = ATgetArgument(c_11, 2);
                      w_10 :
                      if(match_int(d_11, 0))
                        {
                          t = not_null(x_10);
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
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym__2))
    {
      n_11 = ATgetArgument(m_11, 0);
      o_11 = ATgetArgument(m_11, 1);
      {
        ATerm c_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_11), not_null(o_11));
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
  ATerm t_11 = NULL;
  t_11 = t;
  t = SSL_table_keys(not_null(t_11));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm z_11 = NULL;
  z_11 = t;
  {
    t = table_keys_0(t);
    {
      ATerm d_1 (ATerm t)
      {
        ATerm b_12 = NULL;
        ATerm d_12 = NULL;
        b_12 = t;
        {
          ATerm e_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_11), not_null(b_12));
          {
            t = table_get_0(t);
            {
              e_12 = t;
              if(((d_12 != NULL) && (d_12 != e_12)))
                _fail(e_12);
              else
                d_12 = e_12;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_12), not_null(d_12));
        }
        return(t);
      }
      t = map_1(t, d_1);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_10;
      r_10 = t;
      {
        ATerm j_12 = NULL;
        ATerm k_12 = NULL;
        t = term_y_7;
        {
          t = get_config_0(t);
          {
            k_12 = t;
            if(((j_12 != NULL) && (j_12 != k_12)))
              _fail(k_12);
            else
              j_12 = k_12;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_12), term_s_10);
          t = geq_0(t);
        }
      }
      t = r_10;
      t = c_59(t);
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm u_10;
  u_10 = t;
  {
    ATerm n_12 = NULL;
    ATerm o_12 = NULL;
    o_12 = t;
    if(((n_12 != NULL) && (n_12 != o_12)))
      _fail(o_12);
    else
      n_12 = o_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(n_12));
      t = printnl_0(t);
    }
  }
  t = u_10;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm u_12 = NULL;
  ATerm w_12 = NULL,x_12 = NULL;
  u_12 = t;
  {
    ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_a_11, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_12)));
    {
      t = table_get_0(t);
      {
        y_12 = t;
        s_12 :
        if(((ATgetType(y_12) == AT_LIST) && !(ATisEmpty(y_12))))
          {
            z_12 = ATgetFirst((ATermList) y_12);
            c_13 = (ATerm) ATgetNext((ATermList) y_12);
            t_12 :
            if(match_cons(z_12, sym__2))
              {
                a_13 = ATgetArgument(z_12, 0);
                b_13 = ATgetArgument(z_12, 1);
                {
                  if(((w_12 != NULL) && (w_12 != a_13)))
                    _fail(a_13);
                  else
                    w_12 = a_13;
                  if(((x_12 != NULL) && (x_12 != b_13)))
                    _fail(b_13);
                  else
                    x_12 = b_13;
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
    t = not_null(x_12);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
  j_13 = t;
  i_13 :
  if(match_cons(j_13, sym__2))
    {
      k_13 = ATgetArgument(j_13, 0);
      l_13 = ATgetArgument(j_13, 1);
      {
        ATerm o_13 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_a_11, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_13)));
        {
          t = table_get_0(t);
          {
            ATerm e_1 (ATerm t)
            {
              ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
              p_13 = t;
              h_13 :
              if(match_cons(p_13, sym__2))
                {
                  q_13 = ATgetArgument(p_13, 0);
                  r_13 = ATgetArgument(p_13, 1);
                  {
                    if(((l_13 != NULL) && (l_13 != q_13)))
                      _fail(q_13);
                    else
                      l_13 = q_13;
                    if(((o_13 != NULL) && (o_13 != r_13)))
                      _fail(r_13);
                    else
                      o_13 = r_13;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, e_1);
          }
        }
        t = not_null(o_13);
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
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_11;
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
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm k_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_11;
      q_11 = t;
      {
        ATerm v_13 = NULL;
        ATerm w_13 = NULL;
        t = term_y_7;
        {
          t = get_config_0(t);
          {
            w_13 = t;
            if(((v_13 != NULL) && (v_13 != w_13)))
              _fail(w_13);
            else
              v_13 = w_13;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_13), term_r_11);
          t = geq_0(t);
        }
      }
      t = q_11;
      t = b_59(t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = k_11;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm s_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_11;
      v_11 = t;
      {
        ATerm z_13 = NULL;
        ATerm a_14 = NULL;
        t = term_y_7;
        {
          t = get_config_0(t);
          {
            a_14 = t;
            if(((z_13 != NULL) && (z_13 != a_14)))
              _fail(a_14);
            else
              z_13 = a_14;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), term_w_11);
          t = geq_0(t);
        }
      }
      t = v_11;
      t = d_59(t);
      LocalPopChoice(u_11);
    }
  else
    {
      t = s_11;
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
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym__2))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      if(((f_14 != NULL) && (f_14 != g_14)))
        _fail(g_14);
      else
        f_14 = g_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  l_14 :
  if(((ATgetType(m_14) == AT_LIST) && !(ATisEmpty(m_14))))
    {
      n_14 = ATgetFirst((ATermList) m_14);
      o_14 = (ATerm) ATgetNext((ATermList) m_14);
      {
        t = e_70(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm r_14 = NULL;
            r_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), not_null(r_14));
              t = d_70(t);
            }
            return(t);
          }
          t = fetch_1(t, g_1);
        }
        t = not_null(o_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  w_14 :
  if(match_cons(x_14, sym__2))
    {
      y_14 = ATgetArgument(x_14, 0);
      z_14 = ATgetArgument(x_14, 1);
      {
        t = not_null(y_14);
        {
          ATerm d_15 (ATerm t)
          {
            ATerm x_11 = t;
            int y_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(z_14);
                LocalPopChoice(y_11);
              }
            else
              {
                t = x_11;
                {
                  ATerm a_12 = t;
                  int c_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_1 (ATerm t)
                      {
                        t = not_null(z_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_69, h_1);
                      t = d_15(t);
                      LocalPopChoice(c_12);
                    }
                  else
                    {
                      t = a_12;
                      t = Cons_2(t, _id, d_15);
                    }
                }
              }
            return(t);
          }
          t = d_15(t);
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
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym__3))
    {
      j_15 = ATgetArgument(i_15, 0);
      k_15 = ATgetArgument(i_15, 1);
      l_15 = ATgetArgument(i_15, 2);
      {
        ATerm f_12;
        f_12 = t;
        {
          ATerm p_15 = NULL;
          ATerm q_15 = NULL,s_15 = NULL;
          ATerm r_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), not_null(k_15));
          {
            ATerm g_12 = t;
            int h_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_12);
              }
            else
              {
                t = g_12;
                t = (ATerm) ATempty;
              }
            {
              r_15 = t;
              if(((q_15 != NULL) && (q_15 != r_15)))
                _fail(r_15);
              else
                q_15 = r_15;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_15), not_null(l_15));
            {
              t = union_1(t, eq_0);
              {
                s_15 = t;
                if(((p_15 != NULL) && (p_15 != s_15)))
                  _fail(s_15);
                else
                  p_15 = s_15;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_15), not_null(k_15), not_null(p_15));
            t = table_put_0(t);
          }
        }
        t = f_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym__2))
    {
      b_16 = ATgetArgument(a_16, 0);
      c_16 = ATgetArgument(a_16, 1);
      {
        t = not_null(c_16);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
            f_16 = t;
            y_15 :
            if(match_cons(f_16, sym__2))
              {
                g_16 = ATgetArgument(f_16, 0);
                h_16 = ATgetArgument(f_16, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(b_16), not_null(g_16), not_null(h_16));
                  t = m_59(t);
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
  ATerm n_16 = NULL;
  ATerm i_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_16 = NULL;
      o_16 = t;
      {
        if(((n_16 != NULL) && (n_16 != o_16)))
          _fail(o_16);
        else
          n_16 = o_16;
        t = SSL_ReadFromFile(not_null(n_16));
      }
      LocalPopChoice(l_12);
    }
  else
    {
      t = i_12;
      {
        ATerm j_1 (ATerm t)
        {
          t = term_m_12;
          return(t);
        }
        t = debug_1(t, j_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm s_16 = NULL;
  ATerm u_16 = NULL;
  s_16 = t;
  {
    ATerm p_12 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_11, (ATerm) ATmakeAppl(sym_Imported_1, not_null(s_16)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_12;
      }
    {
      ATerm q_12;
      q_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_11, term_r_12, (ATerm) ATinsert(ATempty, not_null(s_16)));
        t = table_put_0(t);
      }
      t = q_12;
      {
        ATerm k_1 (ATerm t)
        {
          ATerm m_1 (ATerm t)
          {
            t = term_v_12;
            return(t);
          }
          t = debug_1(t, m_1);
          return(t);
        }
        t = if_verbose4_1(t, k_1);
        {
          ATerm d_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(e_13);
            }
          else
            {
              t = d_13;
              t = (ATerm) ATempty;
            }
          {
            ATerm n_1 (ATerm t)
            {
              ATerm o_1 (ATerm t)
              {
                t = term_f_13;
                return(t);
              }
              t = say_1(t, o_1);
              return(t);
            }
            t = if_verbose6_1(t, n_1);
            {
              ATerm v_16 = NULL;
              v_16 = t;
              if(((u_16 != NULL) && (u_16 != v_16)))
                _fail(v_16);
              else
                u_16 = v_16;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_a_11, not_null(u_16));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm q_1 (ATerm t)
                      {
                        t = term_g_13;
                        return(t);
                      }
                      t = say_1(t, q_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, p_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_a_11, (ATerm)ATmakeAppl(sym_Imported_1, not_null(s_16)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm r_1 (ATerm t)
                          {
                            ATerm s_1 (ATerm t)
                            {
                              t = term_f_13;
                              return(t);
                            }
                            t = say_1(t, s_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, r_1);
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
  ATerm z_16 = NULL;
  z_16 = t;
  t = SSL_getenv(not_null(z_16));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_13;
      t = get_config_0(t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_13;
            t = getenv_0(t);
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
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
    ATerm b_14;
    b_14 = t;
    {
      ATerm c_14 = t;
      int h_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_i_14;
          t = table_get_0(t);
          LocalPopChoice(h_14);
        }
      else
        {
          t = c_14;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = b_14;
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          t = term_j_14;
          return(t);
        }
        t = debug_1(t, w_1);
        return(t);
      }
      t = if_verbose5_1(t, v_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm k_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          t = term_q_14;
          return(t);
        }
        t = debug_1(t, y_1);
        return(t);
      }
      t = if_verbose5_1(t, x_1);
      {
        t = xtc_load_0(t);
        {
          ATerm s_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(t_14);
            }
          else
            {
              t = s_14;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm a_2 (ATerm t)
            {
              ATerm c_2 (ATerm t)
              {
                t = term_q_14;
                return(t);
              }
              t = debug_1(t, c_2);
              return(t);
            }
            t = if_verbose5_1(t, a_2);
          }
        }
      }
      LocalPopChoice(p_14);
    }
  else
    {
      t = k_14;
      {
        ATerm d_17 = NULL;
        ATerm e_17 = NULL;
        e_17 = t;
        if(((d_17 != NULL) && (d_17 != e_17)))
          _fail(e_17);
        else
          d_17 = e_17;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_14), not_null(d_17)), term_u_14);
          {
            t = error_0(t);
            {
              ATerm d_2 (ATerm t)
              {
                t = term_a_11;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm e_2 (ATerm t)
                    {
                      t = term_a_15;
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
ATerm xtc_command_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm i_17 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm j_17 = NULL;
    t = y_73(t);
    {
      t = xtc_find_0(t);
      {
        j_17 = t;
        if(((i_17 != NULL) && (i_17 != j_17)))
          _fail(j_17);
        else
          i_17 = j_17;
      }
    }
  }
  t = b_15;
  {
    ATerm c_15;
    c_15 = t;
    {
      ATerm k_17 = NULL;
      ATerm l_17 = NULL;
      l_17 = t;
      if(((k_17 != NULL) && (k_17 != l_17)))
        _fail(l_17);
      else
        k_17 = l_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_17), not_null(k_17));
        t = call_0(t);
      }
    }
    t = c_15;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym__2))
    {
      u_17 = ATgetArgument(t_17, 0);
      v_17 = ATgetArgument(t_17, 1);
      {
        ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
        ATerm e_15;
        e_15 = t;
        {
          ATerm b_18 = NULL;
          ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
          t = u_74(t);
          {
            b_18 = t;
            {
              if(((y_17 != NULL) && (y_17 != b_18)))
                _fail(b_18);
              else
                y_17 = b_18;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(y_17), not_null(u_17), not_null(v_17));
                {
                  t = table_push_0(t);
                  {
                    ATerm f_15 = t;
                    int g_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), term_m_15);
                        t = table_get_0(t);
                        LocalPopChoice(g_15);
                      }
                    else
                      {
                        t = f_15;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      c_18 = t;
                      r_17 :
                      if(((ATgetType(c_18) == AT_LIST) && !(ATisEmpty(c_18))))
                        {
                          d_18 = ATgetFirst((ATermList) c_18);
                          e_18 = (ATerm) ATgetNext((ATermList) c_18);
                          {
                            if(((z_17 != NULL) && (z_17 != d_18)))
                              _fail(d_18);
                            else
                              z_17 = d_18;
                            {
                              if(((a_18 != NULL) && (a_18 != e_18)))
                                _fail(e_18);
                              else
                                a_18 = e_18;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(y_17), term_m_15, (ATerm) ATinsert(CheckATermList(not_null(a_18)), (ATerm) ATinsert(CheckATermList(not_null(z_17)), not_null(u_17))));
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
        t = e_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm n_15;
  n_15 = t;
  {
    t = i_75(t);
    {
      ATerm f_2 (ATerm t)
      {
        t = term_o_15;
        return(t);
      }
      t = debug_1(t, f_2);
    }
  }
  t = n_15;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
      o_18 = t;
      j_18 :
      if(match_cons(o_18, sym__2))
        {
          p_18 = ATgetArgument(o_18, 0);
          q_18 = ATgetArgument(o_18, 1);
          {
            if(((n_18 != NULL) && (n_18 != p_18)))
              _fail(p_18);
            else
              n_18 = p_18;
            if(((m_18 != NULL) && (m_18 != q_18)))
              _fail(q_18);
            else
              m_18 = q_18;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_15);
      t = SSL_open_file(not_null(n_18), not_null(m_18));
    }
  else
    {
      t = t_15;
      {
        ATerm r_18 = NULL;
        ATerm s_18 = NULL;
        ATerm g_2 (ATerm t)
        {
          t = term_v_15;
          return(t);
        }
        t = obsolete_1(t, g_2);
        {
          r_18 = t;
          {
            if(((n_18 != NULL) && (n_18 != r_18)))
              _fail(r_18);
            else
              n_18 = r_18;
            {
              ATerm w_15;
              w_15 = t;
              {
                ATerm u_18 = NULL;
                t = term_x_15;
                {
                  u_18 = t;
                  if(((s_18 != NULL) && (s_18 != u_18)))
                    _fail(u_18);
                  else
                    s_18 = u_18;
                }
              }
              t = w_15;
              t = SSL_open_file(not_null(n_18), not_null(s_18));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm a_19 = NULL;
  ATerm c_19 = NULL;
  a_19 = t;
  {
    ATerm d_16;
    d_16 = t;
    {
      ATerm d_19 = NULL;
      t = term_e_16;
      {
        d_19 = t;
        if(((c_19 != NULL) && (c_19 != d_19)))
          _fail(d_19);
        else
          c_19 = d_19;
      }
    }
    t = d_16;
    {
      t = SSL_open_file(not_null(a_19), not_null(c_19));
      t = SSL_close_file(not_null(a_19));
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
  ATerm h_19 = NULL;
  ATerm i_19 = NULL;
  t = term_j_10;
  {
    t = new_0(t);
    {
      i_19 = t;
      if(((h_19 != NULL) && (h_19 != i_19)))
        _fail(i_19);
      else
        h_19 = i_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), term_i_16);
    {
      t = conc_strings_0(t);
      {
        ATerm j_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(k_16);
          }
        else
          {
            t = j_16;
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
  ATerm m_19 = NULL;
  t = new_file_0(t);
  {
    m_19 = t;
    {
      ATerm l_16;
      l_16 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), term_x_15);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), term_j_10);
            {
              ATerm h_2 (ATerm t)
              {
                t = term_m_16;
                return(t);
              }
              t = assert_1(t, h_2);
            }
          }
        }
      }
      t = l_16;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm c_20 = NULL,d_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym_stdin_0))
    {
      ATerm g_20 = NULL;
      ATerm h_20 = NULL;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_20)), term_p_16));
              {
                ATerm q_16 = t;
                int r_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(r_16);
                  }
                else
                  {
                    t = q_16;
                    t = conc_more_lists_0(t);
                  }
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
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_20));
    }
  else
    {
      if(match_cons(c_20, sym_FILE_1))
        {
          d_20 = ATgetArgument(c_20, 0);
          {
            ATerm l_20 = NULL;
            ATerm m_20 = NULL;
            t = not_null(d_20);
            {
              ATerm s_20 = NULL;
              t = xtc_new_file_0(t);
              {
                m_20 = t;
                {
                  if(((l_20 != NULL) && (l_20 != m_20)))
                    _fail(m_20);
                  else
                    l_20 = m_20;
                  {
                    ATerm t_20 = NULL;
                    t = o_0(t);
                    {
                      t_20 = t;
                      if(((s_20 != NULL) && (s_20 != t_20)))
                        _fail(t_20);
                      else
                        s_20 = t_20;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_20), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_20)), term_p_16), not_null(d_20)), term_t_16));
                      {
                        ATerm w_16 = t;
                        int x_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(x_16);
                          }
                        else
                          {
                            t = w_16;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(l_20);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_20));
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
  ATerm e_21 = NULL;
  e_21 = t;
  d_21 :
  if(match_cons(e_21, sym_stdin_0))
    {
      ATerm g_21 = NULL,n_21 = NULL;
      ATerm y_16;
      y_16 = t;
      {
        ATerm h_21 = NULL;
        t = SSLgetAnnotations(not_null(e_21));
        {
          h_21 = t;
          if(((g_21 != NULL) && (g_21 != h_21)))
            _fail(h_21);
          else
            g_21 = h_21;
        }
      }
      t = y_16;
      {
        ATerm o_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(g_21));
        {
          o_21 = t;
          if(((n_21 != NULL) && (n_21 != o_21)))
            _fail(o_21);
          else
            n_21 = o_21;
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
ATerm FILE_1 (ATerm t, ATerm l_52 (ATerm))
{
  ATerm k_22 = NULL,l_22 = NULL;
  k_22 = t;
  i_22 :
  if(match_cons(k_22, sym_FILE_1))
    {
      l_22 = ATgetArgument(k_22, 0);
      {
        ATerm o_22 = NULL,q_22 = NULL;
        ATerm p_22 = NULL;
        t = SSLgetAnnotations(not_null(k_22));
        {
          p_22 = t;
          if(((o_22 != NULL) && (o_22 != p_22)))
            _fail(p_22);
          else
            o_22 = p_22;
        }
        {
          t = not_null(l_22);
          {
            ATerm s_22 = NULL;
            t = l_52(t);
            {
              q_22 = t;
              {
                ATerm t_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(q_22)), not_null(o_22));
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
ATerm xtc_transform_2 (ATerm t, ATerm a_74 (ATerm), ATerm b_74 (ATerm))
{
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(f_17);
        }
      else
        {
          t = c_17;
          t = stdin_0(t);
        }
      LocalPopChoice(b_17);
      t = xtc_transform_file_2(t, a_74, b_74);
    }
  else
    {
      t = a_17;
      t = xtc_transform_term_2(t, a_74, b_74);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym__2))
    {
      d_23 = ATgetArgument(c_23, 0);
      e_23 = ATgetArgument(c_23, 1);
      t = SSL_copy(not_null(d_23), not_null(e_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm o_23 = NULL;
  o_23 = t;
  l_23 :
  if(match_cons(o_23, sym_stderr_0))
    {
      ATerm v_23 = NULL,x_23 = NULL;
      ATerm g_17;
      g_17 = t;
      {
        ATerm w_23 = NULL;
        t = SSLgetAnnotations(not_null(o_23));
        {
          w_23 = t;
          if(((v_23 != NULL) && (v_23 != w_23)))
            _fail(w_23);
          else
            v_23 = w_23;
        }
      }
      t = g_17;
      {
        ATerm y_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(v_23));
        {
          y_23 = t;
          if(((x_23 != NULL) && (x_23 != y_23)))
            _fail(y_23);
          else
            x_23 = y_23;
        }
        t = not_null(x_23);
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
  ATerm g_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym_stdout_0))
    {
      ATerm i_24 = NULL,o_24 = NULL;
      ATerm h_17;
      h_17 = t;
      {
        ATerm m_24 = NULL;
        t = SSLgetAnnotations(not_null(g_24));
        {
          m_24 = t;
          if(((i_24 != NULL) && (i_24 != m_24)))
            _fail(m_24);
          else
            i_24 = m_24;
        }
      }
      t = h_17;
      {
        ATerm p_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(i_24));
        {
          p_24 = t;
          if(((o_24 != NULL) && (o_24 != p_24)))
            _fail(p_24);
          else
            o_24 = p_24;
        }
        t = not_null(o_24);
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
  ATerm b_25 = NULL,c_25 = NULL;
  b_25 = t;
  a_25 :
  if(match_cons(b_25, sym_FILE_1))
    {
      c_25 = ATgetArgument(b_25, 0);
      {
        ATerm m_17 = t;
        int n_17 = stack_ptr;
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
                  ATerm o_17 = t;
                  int p_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(p_17);
                    }
                  else
                    {
                      t = o_17;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), not_null(e_25));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_25));
            LocalPopChoice(n_17);
          }
        else
          {
            t = m_17;
            {
              ATerm q_17 = t;
              int w_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_25 = NULL;
                  ATerm i_25 = NULL;
                  t = m_0(t);
                  {
                    i_25 = t;
                    {
                      if(((h_25 != NULL) && (h_25 != i_25)))
                        _fail(i_25);
                      else
                        h_25 = i_25;
                      {
                        ATerm x_17 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm f_18 = t;
                            int g_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(g_18);
                              }
                            else
                              {
                                t = f_18;
                                {
                                  ATerm h_18 = t;
                                  int i_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(i_18);
                                    }
                                  else
                                    {
                                      t = h_18;
                                      {
                                        ATerm j_25 = NULL;
                                        j_25 = t;
                                        if(((c_25 != NULL) && (c_25 != j_25)))
                                          _fail(j_25);
                                        else
                                          c_25 = j_25;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = x_17;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), not_null(h_25));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_25));
                  LocalPopChoice(w_17);
                }
              else
                {
                  t = q_17;
                  {
                    ATerm l_25 = NULL;
                    t = m_0(t);
                    {
                      l_25 = t;
                      if(((c_25 != NULL) && (c_25 != l_25)))
                        _fail(l_25);
                      else
                        c_25 = l_25;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_25));
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
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(((ATgetType(v_25) == AT_LIST) && !(ATisEmpty(v_25))))
    {
      w_25 = ATgetFirst((ATermList) v_25);
      x_25 = (ATerm) ATgetNext((ATermList) v_25);
      t = not_null(x_25);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  c_26 :
  if(match_cons(d_26, sym__2))
    {
      e_26 = ATgetArgument(d_26, 0);
      f_26 = ATgetArgument(d_26, 1);
      {
        ATerm k_18;
        k_18 = t;
        {
          ATerm i_26 = NULL;
          ATerm j_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_26), not_null(f_26));
          {
            ATerm l_18 = t;
            int t_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(t_18);
              }
            else
              {
                t = l_18;
                t = (ATerm) ATempty;
              }
            {
              j_26 = t;
              if(((i_26 != NULL) && (i_26 != j_26)))
                _fail(j_26);
              else
                i_26 = j_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_26), not_null(f_26), not_null(i_26));
            t = table_put_0(t);
          }
        }
        t = k_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
  ATerm v_18;
  v_18 = t;
  {
    ATerm t_26 = NULL;
    ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
    t = r_74(t);
    {
      t_26 = t;
      {
        if(((s_26 != NULL) && (s_26 != t_26)))
          _fail(t_26);
        else
          s_26 = t_26;
        {
          ATerm w_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), term_m_15);
              t = table_get_0(t);
              LocalPopChoice(x_18);
            }
          else
            {
              t = w_18;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            u_26 = t;
            p_26 :
            if(((ATgetType(u_26) == AT_LIST) && !(ATisEmpty(u_26))))
              {
                v_26 = ATgetFirst((ATermList) u_26);
                w_26 = (ATerm) ATgetNext((ATermList) u_26);
                {
                  if(((r_26 != NULL) && (r_26 != v_26)))
                    _fail(v_26);
                  else
                    r_26 = v_26;
                  {
                    if(((q_26 != NULL) && (q_26 != w_26)))
                      _fail(w_26);
                    else
                      q_26 = w_26;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(s_26), term_m_15, not_null(q_26));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(r_26);
                          {
                            ATerm i_2 (ATerm t)
                            {
                              ATerm x_26 = NULL;
                              x_26 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), not_null(x_26));
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
  t = v_18;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  t = SSL_remove(not_null(d_27));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm b_63 (ATerm), ATerm c_63 (ATerm))
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_63(t);
      t = c_63(t);
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      {
        t = c_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm i_27 = NULL;
  ATerm b_19;
  b_19 = t;
  {
    ATerm j_27 = NULL;
    ATerm k_27 = NULL;
    t = q_74(t);
    {
      j_27 = t;
      {
        if(((i_27 != NULL) && (i_27 != j_27)))
          _fail(j_27);
        else
          i_27 = j_27;
        {
          ATerm l_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_27), term_m_15);
          {
            ATerm e_19 = t;
            int f_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_19);
              }
            else
              {
                t = e_19;
                t = (ATerm) ATempty;
              }
            {
              l_27 = t;
              if(((k_27 != NULL) && (k_27 != l_27)))
                _fail(l_27);
              else
                k_27 = l_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_27), term_m_15, (ATerm) ATinsert(CheckATermList(not_null(k_27)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = b_19;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm q_27 = NULL,r_27 = NULL;
  ATerm j_2 (ATerm t)
  {
    t = term_m_16;
    return(t);
  }
  t = begin_scope_1(t, j_2);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm g_19;
      g_19 = t;
      {
        ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_19;
            t = table_get_0(t);
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          s_27 = t;
          p_27 :
          if(((ATgetType(s_27) == AT_LIST) && !(ATisEmpty(s_27))))
            {
              t_27 = ATgetFirst((ATermList) s_27);
              u_27 = (ATerm) ATgetNext((ATermList) s_27);
              {
                if(((r_27 != NULL) && (r_27 != t_27)))
                  _fail(t_27);
                else
                  r_27 = t_27;
                {
                  if(((q_27 != NULL) && (q_27 != u_27)))
                    _fail(u_27);
                  else
                    q_27 = u_27;
                  {
                    t = not_null(r_27);
                    {
                      ATerm l_2 (ATerm t)
                      {
                        ATerm n_19 = t;
                        int o_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(o_19);
                          }
                        else
                          {
                            t = n_19;
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
      t = g_19;
      {
        ATerm m_2 (ATerm t)
        {
          t = term_m_16;
          return(t);
        }
        t = end_scope_1(t, m_2);
      }
      return(t);
    }
    t = restore_always_2(t, o_73, k_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_27 = NULL;
        ATerm y_27 = NULL;
        t = term_t_16;
        {
          t = get_config_0(t);
          {
            y_27 = t;
            if(((x_27 != NULL) && (x_27 != y_27)))
              _fail(y_27);
            else
              x_27 = y_27;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_27));
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = term_l_10;
      }
    {
      t = p_73(t);
      {
        ATerm o_2 (ATerm t)
        {
          ATerm r_19 = t;
          int s_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_p_16;
              t = get_config_0(t);
              LocalPopChoice(s_19);
            }
          else
            {
              t = r_19;
              t = term_e_7;
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
ATerm asfix2abox_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm q_2 (ATerm t)
    {
      t = term_t_19;
      return(t);
    }
    ATerm r_2 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_19), term_w_19), term_v_19), term_u_19);
      return(t);
    }
    t = xtc_transform_2(t, q_2, r_2);
    {
      ATerm s_2 (ATerm t)
      {
        t = term_y_19;
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        t = term_j_10;
        t = build_impl_args_0(t);
        return(t);
      }
      t = xtc_transform_2(t, s_2, u_2);
    }
    return(t);
  }
  t = xtc_io_1(t, p_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm b_28 = NULL;
    b_28 = t;
    a_28 :
    if(!(match_string(b_28, "-v")))
      {
        if(!(match_string(b_28, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_a_20;
    t = set_config_0(t);
    t = term_e_20;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_f_20;
    return(t);
  }
  t = Option_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm e_28 = NULL;
    e_28 = t;
    c_28 :
    if(!(match_string(e_28, "-k")))
      {
        if(!(match_string(e_28, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm k_20;
    k_20 = t;
    {
      ATerm f_28 = NULL;
      ATerm g_28 = NULL;
      t = string_to_int_0(t);
      {
        g_28 = t;
        if(((f_28 != NULL) && (f_28 != g_28)))
          _fail(g_28);
        else
          f_28 = g_28;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_20, not_null(f_28));
        t = set_config_0(t);
      }
    }
    t = k_20;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_o_20;
    return(t);
  }
  t = ArgOption_3(t, y_2, a_3, c_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  t = SSL_string_to_int(not_null(j_28));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 (ATerm t)
      {
        ATerm r_28 = NULL;
        r_28 = t;
        m_28 :
        if(!(match_string(r_28, "-S")))
          {
            if(!(match_string(r_28, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_u_20;
        t = set_config_0(t);
        t = term_v_20;
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = term_w_20;
        return(t);
      }
      t = Option_3(t, e_3, f_3, g_3);
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm s_28 = NULL;
              s_28 = t;
              n_28 :
              if(!(match_string(s_28, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              ATerm v_28 = NULL;
              ATerm z_20;
              z_20 = t;
              {
                ATerm t_28 = NULL;
                ATerm u_28 = NULL;
                t = string_to_int_0(t);
                {
                  u_28 = t;
                  if(((t_28 != NULL) && (t_28 != u_28)))
                    _fail(u_28);
                  else
                    t_28 = u_28;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_7, not_null(t_28));
                  t = set_config_0(t);
                }
              }
              t = z_20;
              {
                ATerm w_28 = NULL;
                w_28 = t;
                if(((v_28 != NULL) && (v_28 != w_28)))
                  _fail(w_28);
                else
                  v_28 = w_28;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(v_28));
              }
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              t = term_a_21;
              return(t);
            }
            t = ArgOption_3(t, l_3, m_3, n_3);
            LocalPopChoice(y_20);
          }
        else
          {
            t = x_20;
            {
              ATerm o_3 (ATerm t)
              {
                ATerm x_28 = NULL;
                x_28 = t;
                q_28 :
                if(!(match_string(x_28, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = term_c_21;
                t = set_config_0(t);
                t = term_f_21;
                return(t);
              }
              ATerm q_3 (ATerm t)
              {
                t = term_i_21;
                return(t);
              }
              t = Option_3(t, o_3, p_3, q_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm e_29 = NULL;
    e_29 = t;
    b_29 :
    if(!(match_string(e_29, "-o")))
      {
        if(!(match_string(e_29, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm m_29 = NULL;
    ATerm p_21;
    p_21 = t;
    {
      ATerm h_29 = NULL;
      ATerm i_29 = NULL;
      i_29 = t;
      if(((h_29 != NULL) && (h_29 != i_29)))
        _fail(i_29);
      else
        h_29 = i_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_16, not_null(h_29));
        t = set_config_0(t);
      }
    }
    t = p_21;
    {
      ATerm n_29 = NULL;
      n_29 = t;
      if(((m_29 != NULL) && (m_29 != n_29)))
        _fail(n_29);
      else
        m_29 = n_29;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_29));
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_q_21;
    return(t);
  }
  t = ArgOption_3(t, r_3, t_3, u_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm v_3 (ATerm t)
        {
          ATerm r_29 = NULL;
          r_29 = t;
          q_29 :
          if(!(match_string(r_29, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_3 (ATerm t)
        {
          t = term_u_21;
          t = set_config_0(t);
          t = term_v_21;
          return(t);
        }
        ATerm b_4 (ATerm t)
        {
          t = term_w_21;
          return(t);
        }
        t = Option_3(t, v_3, z_3, b_4);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm v_29 = NULL;
    v_29 = t;
    s_29 :
    if(!(match_string(v_29, "-i")))
      {
        if(!(match_string(v_29, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm y_29 = NULL;
    ATerm x_21;
    x_21 = t;
    {
      ATerm w_29 = NULL;
      ATerm x_29 = NULL;
      x_29 = t;
      if(((w_29 != NULL) && (w_29 != x_29)))
        _fail(x_29);
      else
        w_29 = x_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_16, not_null(w_29));
        t = set_config_0(t);
      }
    }
    t = x_21;
    {
      ATerm z_29 = NULL;
      z_29 = t;
      if(((y_29 != NULL) && (y_29 != z_29)))
        _fail(z_29);
      else
        y_29 = z_29;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_29));
    }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_y_21;
    return(t);
  }
  t = ArgOption_3(t, f_4, h_4, i_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  h_30 :
  if(match_cons(i_30, sym__2))
    {
      j_30 = ATgetArgument(i_30, 0);
      k_30 = ATgetArgument(i_30, 1);
      {
        ATerm n_30 = NULL;
        ATerm o_30 = NULL,q_30 = NULL;
        ATerm p_30 = NULL;
        t = not_null(j_30);
        {
          ATerm d_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(e_22);
            }
          else
            {
              t = d_22;
              t = (ATerm) ATempty;
            }
          {
            p_30 = t;
            if(((o_30 != NULL) && (o_30 != p_30)))
              _fail(p_30);
            else
              o_30 = p_30;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), not_null(o_30));
          {
            ATerm f_22 = t;
            int g_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(g_22);
              }
            else
              {
                t = f_22;
                t = conc_more_lists_0(t);
              }
            {
              q_30 = t;
              if(((n_30 != NULL) && (n_30 != q_30)))
                _fail(q_30);
              else
                n_30 = q_30;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_22, not_null(j_30), not_null(n_30));
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
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
  z_30 = t;
  x_30 :
  if(match_string(z_30, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(z_30) == AT_LIST) && !(ATisEmpty(z_30))))
        {
          a_31 = ATgetFirst((ATermList) z_30);
          b_31 = (ATerm) ATgetNext((ATermList) z_30);
          y_30 :
          if(((ATgetType(b_31) == AT_LIST) && !(ATisEmpty(b_31))))
            {
              c_31 = ATgetFirst((ATermList) b_31);
              d_31 = (ATerm) ATgetNext((ATermList) b_31);
              {
                ATerm h_31 = NULL;
                ATerm j_22;
                j_22 = t;
                {
                  t = not_null(a_31);
                  t = j_0(t);
                }
                t = j_22;
                {
                  ATerm i_31 = NULL;
                  t = not_null(c_31);
                  {
                    t = k_0(t);
                    {
                      i_31 = t;
                      if(((h_31 != NULL) && (h_31 != i_31)))
                        _fail(i_31);
                      else
                        h_31 = i_31;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_31)), not_null(h_31));
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
  ATerm j_4 (ATerm t)
  {
    ATerm o_31 = NULL;
    o_31 = t;
    m_31 :
    if(!(match_string(o_31, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm m_22;
    m_22 = t;
    {
      ATerm p_31 = NULL;
      ATerm s_31 = NULL;
      s_31 = t;
      if(((p_31 != NULL) && (p_31 != s_31)))
        _fail(s_31);
      else
        p_31 = s_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATempty, not_null(p_31)));
        t = extend_config_0(t);
      }
    }
    t = m_22;
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_n_22;
    return(t);
  }
  t = ArgOption_3(t, j_4, k_4, l_4);
  return(t);
}
ATerm asfix2abox_options_0 (ATerm t)
{
  ATerm r_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0(t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = r_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = io_options_0(t);
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            {
              ATerm m_4 (ATerm t)
              {
                ATerm x_31 = NULL;
                x_31 = t;
                u_31 :
                if(!(match_string(x_31, "-c")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_4 (ATerm t)
              {
                ATerm x_22;
                x_22 = t;
                {
                  t = term_z_22;
                  t = set_config_0(t);
                }
                t = x_22;
                return(t);
              }
              ATerm o_4 (ATerm t)
              {
                t = term_a_23;
                return(t);
              }
              t = Option_3(t, m_4, n_4, o_4);
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm k_32 = NULL;
  ATerm f_23;
  f_23 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm l_32 = NULL,m_32 = NULL;
      l_32 = t;
      e_32 :
      if(match_cons(l_32, sym_Program_1))
        {
          m_32 = ATgetArgument(l_32, 0);
          if(((k_32 != NULL) && (k_32 != m_32)))
            _fail(m_32);
          else
            k_32 = m_32;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, p_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_23), not_null(k_32)), term_g_23));
      {
        t = printnl_0(t);
        {
          t = term_q_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_y_10, (ATerm) ATinsert(ATempty, term_i_23));
  {
    t = printnl_0(t);
    {
      t = term_q_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_32 = NULL;
  r_32 = t;
  t = SSL_TicksToSeconds(not_null(r_32));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym__2))
    {
      x_32 = ATgetArgument(w_32, 0);
      y_32 = ATgetArgument(w_32, 1);
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_32), not_null(y_32));
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            t = SSL_addr(not_null(x_32), not_null(y_32));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_70 (ATerm), ATerm r_70 (ATerm))
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_70(t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm w_33 = NULL,x_33 = NULL,z_33 = NULL;
        w_33 = t;
        v_33 :
        if(((ATgetType(w_33) == AT_LIST) && !(ATisEmpty(w_33))))
          {
            x_33 = ATgetFirst((ATermList) w_33);
            z_33 = (ATerm) ATgetNext((ATermList) w_33);
            {
              ATerm f_34 = NULL;
              ATerm q_34 = NULL;
              t = not_null(z_33);
              {
                t = foldr_2(t, q_70, r_70);
                {
                  q_34 = t;
                  if(((f_34 != NULL) && (f_34 != q_34)))
                    _fail(q_34);
                  else
                    f_34 = q_34;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_33), not_null(f_34));
                t = r_70(t);
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
ATerm crush_2 (ATerm t, ATerm o_69 (ATerm), ATerm p_69 (ATerm))
{
  ATerm b_35 = NULL;
  ATerm f_35 = NULL;
  b_35 = t;
  {
    ATerm g_35 = NULL;
    ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
    t = not_null(b_35);
    {
      g_35 = t;
      {
        t = SSL_explode_term(not_null(g_35));
        {
          l_35 = t;
          a_35 :
          if(match_cons(l_35, sym__2))
            {
              m_35 = ATgetArgument(l_35, 0);
              n_35 = ATgetArgument(l_35, 1);
              if(((f_35 != NULL) && (f_35 != n_35)))
                _fail(n_35);
              else
                f_35 = n_35;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_35);
      t = foldr_2(t, o_69, p_69);
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
    ATerm s_4 (ATerm t)
    {
      t = term_r_20;
      return(t);
    }
    t = crush_2(t, s_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
  t_35 = t;
  s_35 :
  if(match_cons(t_35, sym__2))
    {
      u_35 = ATgetArgument(t_35, 0);
      v_35 = ATgetArgument(t_35, 1);
      {
        ATerm p_23;
        p_23 = t;
        {
          ATerm q_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_35), not_null(v_35));
              LocalPopChoice(r_23);
            }
          else
            {
              t = q_23;
              t = SSL_gtr(not_null(u_35), not_null(v_35));
            }
        }
        t = p_23;
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
  ATerm b_36 = NULL;
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
      c_36 = t;
      a_36 :
      if(match_cons(c_36, sym__2))
        {
          d_36 = ATgetArgument(c_36, 0);
          e_36 = ATgetArgument(c_36, 1);
          {
            if(((b_36 != NULL) && (b_36 != d_36)))
              _fail(d_36);
            else
              b_36 = d_36;
            if(((b_36 != NULL) && (b_36 != e_36)))
              _fail(e_36);
            else
              b_36 = e_36;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm u_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_24;
      a_24 = t;
      {
        ATerm h_36 = NULL;
        ATerm i_36 = NULL;
        t = term_y_7;
        {
          t = get_config_0(t);
          {
            i_36 = t;
            if(((h_36 != NULL) && (h_36 != i_36)))
              _fail(i_36);
            else
              h_36 = i_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_36), term_q_9);
          t = geq_0(t);
        }
      }
      t = a_24;
      t = y_58(t);
      LocalPopChoice(z_23);
    }
  else
    {
      t = u_23;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm m_36 = NULL,o_36 = NULL;
    ATerm b_24;
    b_24 = t;
    {
      ATerm n_36 = NULL;
      t = run_time_0(t);
      {
        n_36 = t;
        if(((m_36 != NULL) && (m_36 != n_36)))
          _fail(n_36);
        else
          m_36 = n_36;
      }
    }
    t = b_24;
    {
      ATerm p_36 = NULL;
      t = term_c_24;
      {
        t = get_config_0(t);
        {
          p_36 = t;
          if(((o_36 != NULL) && (o_36 != p_36)))
            _fail(p_36);
          else
            o_36 = p_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_24), not_null(m_36)), term_d_24), not_null(o_36)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_4);
  {
    t = term_r_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  v_36 :
  if(match_cons(w_36, sym_Version_0))
    {
      ATerm y_36 = NULL,a_37 = NULL;
      ATerm h_24;
      h_24 = t;
      {
        ATerm z_36 = NULL;
        t = SSLgetAnnotations(not_null(w_36));
        {
          z_36 = t;
          if(((y_36 != NULL) && (y_36 != z_36)))
            _fail(z_36);
          else
            y_36 = z_36;
        }
      }
      t = h_24;
      {
        ATerm b_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_36));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        {
          ATerm l_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_24);
            }
          else
            {
              t = l_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, w_4);
  t = d_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_37 = NULL;
  g_37 = t;
  t = SSL_table_create(not_null(g_37));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_37 = NULL;
  k_37 = t;
  {
    ATerm q_24;
    q_24 = t;
    {
      t = term_r_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_24, term_s_24, not_null(k_37));
          t = table_put_0(t);
        }
      }
    }
    t = q_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  t = SSL_table_destroy(not_null(o_37));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  t = SSL_exit(not_null(s_37));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
  w_37 = t;
  v_37 :
  if(((ATgetType(w_37) == AT_LIST) && ATisEmpty(w_37)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_37) == AT_LIST) && !(ATisEmpty(w_37))))
        {
          x_37 = ATgetFirst((ATermList) w_37);
          y_37 = (ATerm) ATgetNext((ATermList) w_37);
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
  ATerm t_24;
  t_24 = t;
  {
    ATerm b_38 = NULL;
    ATerm e_38 = NULL;
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          ATerm c_38 = NULL;
          ATerm d_38 = NULL;
          d_38 = t;
          if(((c_38 != NULL) && (c_38 != d_38)))
            _fail(d_38);
          else
            c_38 = d_38;
          t = (ATerm) ATinsert(ATempty, not_null(c_38));
        }
      }
    {
      e_38 = t;
      if(((b_38 != NULL) && (b_38 != e_38)))
        _fail(e_38);
      else
        b_38 = e_38;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, not_null(b_38));
      t = printnl_0(t);
    }
  }
  t = t_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  p_38 = t;
  m_38 :
  if(((ATgetType(p_38) == AT_LIST) && !(ATisEmpty(p_38))))
    {
      n_38 = ATgetFirst((ATermList) p_38);
      o_38 = (ATerm) ATgetNext((ATermList) p_38);
      {
        ATerm t_38 = NULL;
        t = not_null(o_38);
        {
          ATerm w_24;
          w_24 = t;
          {
            ATerm w_38 = NULL,y_38 = NULL,a_39 = NULL;
            ATerm x_24;
            x_24 = t;
            {
              ATerm x_38 = NULL;
              t = i_0(t);
              {
                x_38 = t;
                if(((w_38 != NULL) && (w_38 != x_38)))
                  _fail(x_38);
                else
                  w_38 = x_38;
              }
            }
            t = x_24;
            {
              ATerm z_38 = NULL;
              t = not_null(n_38);
              {
                t = h_0(t);
                {
                  z_38 = t;
                  if(((y_38 != NULL) && (y_38 != z_38)))
                    _fail(z_38);
                  else
                    y_38 = z_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_38)), not_null(y_38));
                {
                  a_39 = t;
                  if(((t_38 != NULL) && (t_38 != a_39)))
                    _fail(a_39);
                  else
                    t_38 = a_39;
                }
              }
            }
          }
          t = w_24;
          {
            ATerm x_4 (ATerm t)
            {
              t = not_null(t_38);
              return(t);
            }
            t = reverse_acc_2(t, h_0, x_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(p_38) == AT_LIST) && ATisEmpty(p_38)))
        {
          {
            t = term_j_10;
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
  ATerm y_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_57 (ATerm))
{
  ATerm l_39 = NULL,m_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym_Program_1))
    {
      m_39 = ATgetArgument(l_39, 0);
      {
        ATerm p_39 = NULL,r_39 = NULL;
        ATerm q_39 = NULL;
        t = SSLgetAnnotations(not_null(l_39));
        {
          q_39 = t;
          if(((p_39 != NULL) && (p_39 != q_39)))
            _fail(q_39);
          else
            p_39 = q_39;
        }
        {
          t = not_null(m_39);
          {
            ATerm t_39 = NULL;
            t = k_57(t);
            {
              r_39 = t;
              {
                ATerm u_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_39)), not_null(p_39));
                {
                  u_39 = t;
                  if(((t_39 != NULL) && (t_39 != u_39)))
                    _fail(u_39);
                  else
                    t_39 = u_39;
                }
                t = not_null(t_39);
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
  ATerm f_40 = NULL;
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_40 = NULL;
      t = term_c_24;
      {
        t = get_config_0(t);
        {
          g_40 = t;
          if(((f_40 != NULL) && (f_40 != g_40)))
            _fail(g_40);
          else
            f_40 = g_40;
        }
      }
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm b_5 (ATerm t)
        {
          ATerm c_5 (ATerm t)
          {
            ATerm h_40 = NULL;
            h_40 = t;
            if(((f_40 != NULL) && (f_40 != h_40)))
              _fail(h_40);
            else
              f_40 = h_40;
            return(t);
          }
          t = Program_1(t, c_5);
          return(t);
        }
        t = fetch_1(t, b_5);
      }
    }
  {
    t = term_d_25;
    {
      t = echo_0(t);
      {
        t = term_m_25;
        {
          t = table_get_0(t);
          {
            ATerm d_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, d_5);
            {
              ATerm e_5 (ATerm t)
              {
                ATerm i_40 = NULL;
                ATerm j_40 = NULL;
                j_40 = t;
                if(((i_40 != NULL) && (i_40 != j_40)))
                  _fail(j_40);
                else
                  i_40 = j_40;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_40)), term_n_25);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, e_5);
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
  ATerm o_25;
  o_25 = t;
  {
    ATerm o_40 = NULL;
    ATerm p_40 = NULL;
    p_40 = t;
    if(((o_40 != NULL) && (o_40 != p_40)))
      _fail(p_40);
    else
      o_40 = p_40;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_10, (ATerm) ATinsert(ATempty, not_null(o_40)));
      t = printnl_0(t);
    }
  }
  t = o_25;
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm p_25;
  p_25 = t;
  {
    t = c_75(t);
    t = debug_0(t);
  }
  t = p_25;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm y_40 = NULL,z_40 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym_Undefined_1))
    {
      z_40 = ATgetArgument(y_40, 0);
      {
        ATerm e_41 = NULL,i_41 = NULL;
        ATerm f_41 = NULL;
        t = SSLgetAnnotations(not_null(y_40));
        {
          f_41 = t;
          if(((e_41 != NULL) && (e_41 != f_41)))
            _fail(f_41);
          else
            e_41 = f_41;
        }
        {
          t = not_null(z_40);
          {
            ATerm k_41 = NULL;
            t = l_57(t);
            {
              i_41 = t;
              {
                ATerm l_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_41)), not_null(e_41));
                {
                  l_41 = t;
                  if(((k_41 != NULL) && (k_41 != l_41)))
                    _fail(l_41);
                  else
                    k_41 = l_41;
                }
                t = not_null(k_41);
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
ATerm fetch_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm q_41 (ATerm t)
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_64, _id);
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = Cons_2(t, _id, q_41);
      }
    return(t);
  }
  t = q_41(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_79 (ATerm))
{
  t = fetch_1(t, k_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym_Help_0))
    {
      ATerm x_41 = NULL,z_41 = NULL;
      ATerm s_25;
      s_25 = t;
      {
        ATerm y_41 = NULL;
        t = SSLgetAnnotations(not_null(v_41));
        {
          y_41 = t;
          if(((x_41 != NULL) && (x_41 != y_41)))
            _fail(y_41);
          else
            x_41 = y_41;
        }
      }
      t = s_25;
      {
        ATerm c_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_41));
        {
          c_42 = t;
          if(((z_41 != NULL) && (z_41 != c_42)))
            _fail(c_42);
          else
            z_41 = c_42;
        }
        t = not_null(z_41);
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
  ATerm j_42 = NULL;
  j_42 = t;
  t = SSL_implode_string(not_null(j_42));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = t_25;
      {
        ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
        o_42 = t;
        n_42 :
        if(((ATgetType(o_42) == AT_LIST) && !(ATisEmpty(o_42))))
          {
            p_42 = ATgetFirst((ATermList) o_42);
            q_42 = (ATerm) ATgetNext((ATermList) o_42);
            {
              t = not_null(p_42);
              {
                ATerm j_5 (ATerm t)
                {
                  t = not_null(q_42);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_5);
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
  ATerm a_43 = NULL;
  ATerm c_43 = NULL;
  a_43 = t;
  {
    ATerm d_43 = NULL;
    ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
    t = not_null(a_43);
    {
      d_43 = t;
      {
        t = SSL_explode_term(not_null(d_43));
        {
          f_43 = t;
          y_42 :
          if(match_cons(f_43, sym__2))
            {
              g_43 = ATgetArgument(f_43, 0);
              h_43 = ATgetArgument(f_43, 1);
              z_42 :
              if(match_string(g_43, ""))
                {
                  if(((c_43 != NULL) && (c_43 != h_43)))
                    _fail(h_43);
                  else
                    c_43 = h_43;
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
      t = not_null(c_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm l_43 (ATerm t)
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_43);
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        {
          t = Nil_0(t);
          t = r_64(t);
        }
      }
    return(t);
  }
  t = l_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
  o_43 = t;
  n_43 :
  if(match_cons(o_43, sym__2))
    {
      p_43 = ATgetArgument(o_43, 0);
      q_43 = ATgetArgument(o_43, 1);
      {
        t = not_null(p_43);
        {
          ATerm n_5 (ATerm t)
          {
            t = not_null(q_43);
            return(t);
          }
          t = at_end_1(t, n_5);
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
  ATerm b_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(g_26);
    }
  else
    {
      t = b_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_43 = NULL;
  v_43 = t;
  t = SSL_explode_string(not_null(v_43));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
  e_44 = t;
  d_44 :
  if(match_cons(e_44, sym__2))
    {
      f_44 = ATgetArgument(e_44, 0);
      g_44 = ATgetArgument(e_44, 1);
      {
        ATerm k_44 = NULL,m_44 = NULL;
        ATerm l_44 = NULL;
        t = SSLgetAnnotations(not_null(e_44));
        {
          l_44 = t;
          if(((k_44 != NULL) && (k_44 != l_44)))
            _fail(l_44);
          else
            k_44 = l_44;
        }
        {
          t = not_null(f_44);
          {
            ATerm u_44 = NULL;
            t = p_50(t);
            {
              m_44 = t;
              {
                t = not_null(g_44);
                {
                  ATerm w_44 = NULL;
                  t = q_50(t);
                  {
                    u_44 = t;
                    {
                      ATerm x_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_44), not_null(u_44)), not_null(k_44));
                      {
                        x_44 = t;
                        if(((w_44 != NULL) && (w_44 != x_44)))
                          _fail(x_44);
                        else
                          w_44 = x_44;
                      }
                      t = not_null(w_44);
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
    ATerm h_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(k_26);
      }
    else
      {
        t = h_26;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  h_45 :
  if(match_cons(n_45, sym__2))
    {
      o_45 = ATgetArgument(n_45, 0);
      p_45 = ATgetArgument(n_45, 1);
      {
        ATerm l_26;
        l_26 = t;
        t = SSL_printnl(not_null(o_45), not_null(p_45));
        t = l_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm m_26;
  m_26 = t;
  {
    ATerm z_45 = NULL,b_46 = NULL;
    ATerm n_26;
    n_26 = t;
    {
      ATerm a_46 = NULL;
      t = b_75(t);
      {
        a_46 = t;
        if(((z_45 != NULL) && (z_45 != a_46)))
          _fail(a_46);
        else
          z_45 = a_46;
      }
    }
    t = n_26;
    {
      ATerm c_46 = NULL;
      c_46 = t;
      if(((b_46 != NULL) && (b_46 != c_46)))
        _fail(c_46);
      else
        b_46 = c_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_46)), not_null(z_45)));
        t = printnl_0(t);
      }
    }
  }
  t = m_26;
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm f_46 (ATerm t)
  {
    ATerm o_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_26);
      }
    else
      {
        t = o_26;
        t = Cons_2(t, c_64, f_46);
      }
    return(t);
  }
  t = f_46(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_46 = NULL;
  h_46 = t;
  t = SSL_is_string(not_null(h_46));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 (ATerm t)
            {
              ATerm e_27 = t;
              int f_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(f_27);
                }
              else
                {
                  t = e_27;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, t_5);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            {
              ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
              q_46 = t;
              p_46 :
              if(match_cons(q_46, sym_Path_1))
                {
                  r_46 = ATgetArgument(q_46, 0);
                  t = not_null(r_46);
                }
              else
                {
                  if(match_cons(q_46, sym_Var_1))
                    {
                      r_46 = ATgetArgument(q_46, 0);
                      {
                        t = not_null(r_46);
                        {
                          ATerm g_27 = t;
                          int h_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_27);
                            }
                          else
                            {
                              t = g_27;
                              {
                                ATerm u_5 (ATerm t)
                                {
                                  t = term_m_27;
                                  return(t);
                                }
                                t = debug_1(t, u_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_46, sym_Prefix_2))
                        {
                          r_46 = ATgetArgument(q_46, 0);
                          s_46 = ATgetArgument(q_46, 1);
                          {
                            ATerm x_46 = NULL,z_46 = NULL;
                            ATerm n_27;
                            n_27 = t;
                            {
                              ATerm y_46 = NULL;
                              t = not_null(r_46);
                              {
                                t = eval_config_0(t);
                                {
                                  y_46 = t;
                                  if(((x_46 != NULL) && (x_46 != y_46)))
                                    _fail(y_46);
                                  else
                                    x_46 = y_46;
                                }
                              }
                            }
                            t = n_27;
                            {
                              ATerm a_47 = NULL;
                              t = not_null(s_46);
                              {
                                t = eval_config_0(t);
                                {
                                  a_47 = t;
                                  if(((z_46 != NULL) && (z_46 != a_47)))
                                    _fail(a_47);
                                  else
                                    z_46 = a_47;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_46), not_null(z_46));
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
  ATerm i_47 = NULL;
  i_47 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_22, not_null(i_47));
    {
      t = table_get_0(t);
      {
        ATerm o_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm w_27;
              w_27 = t;
              {
                ATerm k_47 = NULL;
                ATerm l_47 = NULL;
                l_47 = t;
                if(((k_47 != NULL) && (k_47 != l_47)))
                  _fail(l_47);
                else
                  k_47 = l_47;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_h_22, not_null(i_47), not_null(k_47));
                  t = table_put_0(t);
                }
              }
              t = w_27;
            }
            LocalPopChoice(v_27);
          }
        else
          {
            t = o_27;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm z_27 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_62(t);
      LocalPopChoice(d_28);
    }
  else
    {
      t = z_27;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
  q_47 = t;
  p_47 :
  if(match_cons(q_47, sym__2))
    {
      r_47 = ATgetArgument(q_47, 0);
      s_47 = ATgetArgument(q_47, 1);
      t = SSL_table_get(not_null(r_47), not_null(s_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym__3))
    {
      a_48 = ATgetArgument(z_47, 0);
      b_48 = ATgetArgument(z_47, 1);
      c_48 = ATgetArgument(z_47, 2);
      {
        ATerm h_28;
        h_28 = t;
        {
          ATerm g_48 = NULL;
          ATerm h_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_48), not_null(b_48));
          {
            ATerm i_28 = t;
            int k_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_28);
              }
            else
              {
                t = i_28;
                t = (ATerm) ATempty;
              }
            {
              h_48 = t;
              if(((g_48 != NULL) && (g_48 != h_48)))
                _fail(h_48);
              else
                g_48 = h_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_48), not_null(b_48), (ATerm) ATinsert(CheckATermList(not_null(g_48)), not_null(c_48)));
            t = table_put_0(t);
          }
        }
        t = h_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_80 (ATerm))
{
  ATerm l_48 = NULL;
  ATerm m_48 = NULL;
  t = term_j_10;
  {
    t = p_80(t);
    {
      m_48 = t;
      if(((l_48 != NULL) && (l_48 != m_48)))
        _fail(m_48);
      else
        l_48 = m_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_25, term_k_25, not_null(l_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
  s_48 = t;
  r_48 :
  if(match_string(s_48, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_48) == AT_LIST) && !(ATisEmpty(s_48))))
        {
          t_48 = ATgetFirst((ATermList) s_48);
          u_48 = (ATerm) ATgetNext((ATermList) s_48);
          {
            ATerm x_48 = NULL;
            ATerm l_28;
            l_28 = t;
            {
              t = not_null(t_48);
              t = a_0(t);
            }
            t = l_28;
            {
              ATerm y_48 = NULL;
              t = term_j_10;
              {
                t = d_0(t);
                {
                  y_48 = t;
                  if(((x_48 != NULL) && (x_48 != y_48)))
                    _fail(y_48);
                  else
                    x_48 = y_48;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_48)), not_null(x_48));
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
  ATerm v_5 (ATerm t)
  {
    ATerm d_49 = NULL;
    d_49 = t;
    c_49 :
    if(!(match_string(d_49, "--help")))
      {
        if(!(match_string(d_49, "-h")))
          {
            if(!(match_string(d_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_p_28;
    {
      t = set_config_0(t);
      t = term_y_28;
    }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_z_28;
    return(t);
  }
  t = Option_3(t, v_5, w_5, y_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
  g_49 = t;
  f_49 :
  if(((ATgetType(g_49) == AT_LIST) && !(ATisEmpty(g_49))))
    {
      h_49 = ATgetFirst((ATermList) g_49);
      i_49 = (ATerm) ATgetNext((ATermList) g_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_51 (ATerm), ATerm z_51 (ATerm))
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  r_49 :
  if(((ATgetType(s_49) == AT_LIST) && !(ATisEmpty(s_49))))
    {
      t_49 = ATgetFirst((ATermList) s_49);
      u_49 = (ATerm) ATgetNext((ATermList) s_49);
      {
        ATerm y_49 = NULL,a_50 = NULL;
        ATerm z_49 = NULL;
        t = SSLgetAnnotations(not_null(s_49));
        {
          z_49 = t;
          if(((y_49 != NULL) && (y_49 != z_49)))
            _fail(z_49);
          else
            y_49 = z_49;
        }
        {
          t = not_null(t_49);
          {
            ATerm c_50 = NULL;
            t = y_51(t);
            {
              a_50 = t;
              {
                t = not_null(u_49);
                {
                  ATerm e_50 = NULL;
                  t = z_51(t);
                  {
                    c_50 = t;
                    {
                      ATerm f_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_50)), not_null(a_50)), not_null(y_49));
                      {
                        f_50 = t;
                        if(((e_50 != NULL) && (e_50 != f_50)))
                          _fail(f_50);
                        else
                          e_50 = f_50;
                      }
                      t = not_null(e_50);
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
  ATerm r_50 = NULL;
  r_50 = t;
  o_50 :
  if(((ATgetType(r_50) == AT_LIST) && ATisEmpty(r_50)))
    {
      {
        ATerm t_50 = NULL,v_50 = NULL;
        ATerm a_29;
        a_29 = t;
        {
          ATerm u_50 = NULL;
          t = SSLgetAnnotations(not_null(r_50));
          {
            u_50 = t;
            if(((t_50 != NULL) && (t_50 != u_50)))
              _fail(u_50);
            else
              t_50 = u_50;
          }
        }
        t = a_29;
        {
          ATerm w_50 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_50));
          {
            w_50 = t;
            if(((v_50 != NULL) && (v_50 != w_50)))
              _fail(w_50);
            else
              v_50 = w_50;
          }
          t = not_null(v_50);
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
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  c_51 = t;
  b_51 :
  if(match_cons(c_51, sym__2))
    {
      d_51 = ATgetArgument(c_51, 0);
      e_51 = ATgetArgument(c_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_22, not_null(d_51), not_null(e_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm c_29;
  c_29 = t;
  {
    ATerm d_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_29;
        t = n_80(t);
        LocalPopChoice(f_29);
      }
    else
      {
        t = d_29;
        {
        }
      }
  }
  t = c_29;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm m_51 = NULL;
      ATerm j_29;
      j_29 = t;
      {
        ATerm k_51 = NULL;
        ATerm l_51 = NULL;
        l_51 = t;
        if(((k_51 != NULL) && (k_51 != l_51)))
          _fail(l_51);
        else
          k_51 = l_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_24, not_null(k_51));
          t = set_config_0(t);
        }
      }
      t = j_29;
      {
        ATerm n_51 = NULL;
        n_51 = t;
        if(((m_51 != NULL) && (m_51 != n_51)))
          _fail(n_51);
        else
          m_51 = n_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_51));
      }
      return(t);
    }
    ATerm a_6 (ATerm t)
    {
      ATerm k_29 = t;
      int l_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_29 = t;
          int p_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_29);
            }
          else
            {
              t = o_29;
              {
                t = n_80(t);
                t = Cons_2(t, _id, a_6);
              }
            }
          LocalPopChoice(l_29);
        }
      else
        {
          t = k_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_5, a_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  ATerm t_29;
  t_29 = t;
  {
    ATerm w_51 = NULL,x_51 = NULL,a_52 = NULL,b_52 = NULL;
    w_51 = t;
    s_51 :
    if(match_cons(w_51, sym__3))
      {
        x_51 = ATgetArgument(w_51, 0);
        a_52 = ATgetArgument(w_51, 1);
        b_52 = ATgetArgument(w_51, 2);
        {
          if(((t_51 != NULL) && (t_51 != x_51)))
            _fail(x_51);
          else
            t_51 = x_51;
          {
            if(((u_51 != NULL) && (u_51 != a_52)))
              _fail(a_52);
            else
              u_51 = a_52;
            {
              if(((v_51 != NULL) && (v_51 != b_52)))
                _fail(b_52);
              else
                v_51 = b_52;
              t = SSL_table_put(not_null(t_51), not_null(u_51), not_null(v_51));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm e_52 = NULL;
  ATerm u_29;
  u_29 = t;
  {
    t = term_a_30;
    t = table_put_0(t);
  }
  t = u_29;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm b_30 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_80(t);
          LocalPopChoice(c_30);
        }
      else
        {
          t = b_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_6);
    {
      ATerm d_30 = t;
      int e_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_30;
          f_30 = t;
          {
            ATerm g_30 = t;
            int l_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_o_28;
                t = get_config_0(t);
                LocalPopChoice(l_30);
              }
            else
              {
                t = g_30;
                t = fetch_1(t, Help_0);
              }
          }
          t = f_30;
          {
            t = system_usage_0(t);
            {
              t = term_r_20;
              t = exit_0(t);
            }
          }
          LocalPopChoice(e_30);
        }
      else
        {
          t = d_30;
          {
            ATerm m_30 = t;
            int r_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_6 (ATerm t)
                {
                  ATerm h_6 (ATerm t)
                  {
                    ATerm f_52 = NULL;
                    f_52 = t;
                    if(((e_52 != NULL) && (e_52 != f_52)))
                      _fail(f_52);
                    else
                      e_52 = f_52;
                    return(t);
                  }
                  t = Undefined_1(t, h_6);
                  return(t);
                }
                t = fetch_1(t, g_6);
                {
                  ATerm i_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_52)), term_s_30);
                    return(t);
                  }
                  t = say_1(t, i_6);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_q_9;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(r_30);
              }
            else
              {
                t = m_30;
                {
                }
              }
          }
        }
      {
        ATerm t_30;
        t_30 = t;
        {
          t = term_g_25;
          t = table_destroy_0(t);
        }
        t = t_30;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  t = parse_options_1(t, j_78);
  {
    t = store_options_0(t);
    {
      t = l_78(t);
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_78);
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            {
              ATerm w_30 = t;
              int e_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_78(t);
                  t = report_success_0(t);
                  LocalPopChoice(e_31);
                }
              else
                {
                  t = w_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm n_78 (ATerm), ATerm o_78 (ATerm))
{
  t = option_wrap_4(t, n_78, default_usage_0, _id, o_78);
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