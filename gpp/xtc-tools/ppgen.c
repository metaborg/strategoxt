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
ATerm term_g_27;
ATerm term_t_26;
ATerm term_x_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_v_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_t_19;
ATerm term_k_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_h_17;
ATerm term_c_17;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_w_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_x_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_t_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_v_9;
ATerm term_q_9;
ATerm term_m_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_s_7;
ATerm term_p_7;
ATerm term_m_7;
void init_constant_terms (void)
{
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_j_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_g_12);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_b_8);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_u_8);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_y_17);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_17);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_u_8);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_e_19, term_u_8);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_b_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_u_8);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__3, term_m_22, term_n_22, (ATerm) ATempty);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm j_78 (ATerm), ATerm k_78 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm n_59 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm a_78 (ATerm));
ATerm assert_1 (ATerm, ATerm l_72 (ATerm));
ATerm obsolete_1 (ATerm, ATerm z_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm x_57 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm c_78 (ATerm), ATerm d_78 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm t_59 (ATerm));
ATerm pass_v_verbose_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm v_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm r_75 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_74 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm u_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm w_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm n_70 (ATerm), ATerm o_70 (ATerm));
ATerm union_1 (ATerm, ATerm j_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm f_60 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_sglr_1 (ATerm, ATerm t_78 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm i_72 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm n_63 (ATerm), ATerm o_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm h_72 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm m_77 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm n_77 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm a_71 (ATerm), ATerm b_71 (ATerm));
ATerm crush_2 (ATerm, ATerm y_69 (ATerm), ATerm z_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_81 (ATerm));
ATerm Program_1 (ATerm, ATerm e_58 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm f_58 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_80 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm i_51 (ATerm), ATerm j_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_72 (ATerm));
ATerm map_1 (ATerm, ATerm q_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_52 (ATerm), ATerm s_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_81 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm g_79 (ATerm), ATerm h_79 (ATerm));
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
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
  c_1 = t;
  y_0 :
  if(match_cons(c_1, sym__2))
    {
      d_1 = ATgetArgument(c_1, 0);
      e_1 = ATgetArgument(c_1, 1);
      {
        ATerm c_7 = t;
        int d_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_1), not_null(e_1));
            ;
            LocalPopChoice(d_7);
          }
        else
          {
            t = c_7;
            t = SSL_subtr(not_null(d_1), not_null(e_1));
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
  ATerm a_2 = NULL;
  ATerm s_2 = NULL,u_2 = NULL;
  ATerm t_2 = NULL;
  t = term_m_7;
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        t = term_p_7;
      }
    {
      t_2 = t;
      if(((s_2 != NULL) && (s_2 != t_2)))
        _fail(t_2);
      else
        s_2 = t_2;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_2), term_p_7);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          u_2 = t;
          if(((a_2 != NULL) && (a_2 != u_2)))
            _fail(u_2);
          else
            a_2 = u_2;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_2)), term_m_7);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL;
  f_3 = t;
  e_3 :
  if(match_cons(f_3, sym_stdin_0))
    {
      ATerm h_3 = NULL;
      ATerm i_3 = NULL;
      t = term_s_7;
      {
        t = ReadFromFile_0(t);
        {
          i_3 = t;
          if(((h_3 != NULL) && (h_3 != i_3)))
            _fail(i_3);
          else
            h_3 = i_3;
        }
      }
      t = not_null(h_3);
    }
  else
    {
      if(match_cons(f_3, sym_FILE_1))
        {
          g_3 = ATgetArgument(f_3, 0);
          {
            ATerm k_3 = NULL;
            ATerm l_3 = NULL;
            t = not_null(g_3);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  l_3 = t;
                  if(((k_3 != NULL) && (k_3 != l_3)))
                    _fail(l_3);
                  else
                    k_3 = l_3;
                }
              }
            }
            t = not_null(k_3);
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
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  r_3 :
  if(match_cons(s_3, sym__2))
    {
      t_3 = ATgetArgument(s_3, 0);
      u_3 = ATgetArgument(s_3, 1);
      t = SSL_WriteToBinaryFile(not_null(t_3), not_null(u_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm a_4 = NULL;
  ATerm c_4 = NULL;
  a_4 = t;
  {
    ATerm d_4 = NULL;
    t = xtc_new_file_0(t);
    {
      d_4 = t;
      {
        if(((c_4 != NULL) && (c_4 != d_4)))
          _fail(d_4);
        else
          c_4 = d_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_4), not_null(a_4));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(c_4);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_4));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm j_78 (ATerm), ATerm k_78 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, j_78, k_78);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm h_4 = NULL;
  h_4 = t;
  t = SSL_close_file(not_null(h_4));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
  m_4 = t;
  l_4 :
  if(match_cons(m_4, sym__2))
    {
      n_4 = ATgetArgument(m_4, 0);
      o_4 = ATgetArgument(m_4, 1);
      t = SSL_execvp(not_null(n_4), not_null(o_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm t_4 = NULL;
  t_4 = t;
  t = SSL_waitpid(not_null(t_4));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm d_5 = NULL;
  ATerm f_5 = NULL;
  d_5 = t;
  {
    t = fork_0(t);
    {
      f_5 = t;
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_5 = NULL;
            h_5 = t;
            z_4 :
            if(match_int(h_5, 0))
              {
                t = not_null(d_5);
                t = n_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            {
              ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
              t = not_null(f_5);
              {
                t = waitpid_0(t);
                {
                  i_5 = t;
                  b_5 :
                  if(match_cons(i_5, sym_WaitStatus_3))
                    {
                      j_5 = ATgetArgument(i_5, 0);
                      k_5 = ATgetArgument(i_5, 1);
                      l_5 = ATgetArgument(i_5, 2);
                      c_5 :
                      if(match_int(j_5, 0))
                        {
                          t = not_null(d_5);
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
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym__2))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      {
        ATerm b_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(u_5));
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
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm a_6 = NULL;
  ATerm w_7;
  w_7 = t;
  {
    ATerm b_6 = NULL;
    t = a_78(t);
    {
      t = xtc_find_warning_0(t);
      {
        b_6 = t;
        if(((a_6 != NULL) && (a_6 != b_6)))
          _fail(b_6);
        else
          a_6 = b_6;
      }
    }
  }
  t = w_7;
  {
    ATerm x_7;
    x_7 = t;
    {
      ATerm c_6 = NULL;
      ATerm d_6 = NULL;
      d_6 = t;
      if(((c_6 != NULL) && (c_6 != d_6)))
        _fail(d_6);
      else
        c_6 = d_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), not_null(c_6));
        t = call_0(t);
      }
    }
    t = x_7;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_72 (ATerm))
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL;
  l_6 = t;
  k_6 :
  if(match_cons(l_6, sym__2))
    {
      m_6 = ATgetArgument(l_6, 0);
      n_6 = ATgetArgument(l_6, 1);
      {
        ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
        ATerm y_7;
        y_7 = t;
        {
          ATerm t_6 = NULL;
          ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
          t = l_72(t);
          {
            t_6 = t;
            {
              if(((q_6 != NULL) && (q_6 != t_6)))
                _fail(t_6);
              else
                q_6 = t_6;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_6), not_null(m_6), not_null(n_6));
                {
                  t = table_push_0(t);
                  {
                    ATerm z_7 = t;
                    int a_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_6), term_b_8);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(a_8);
                      }
                    else
                      {
                        t = z_7;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_6 = t;
                      j_6 :
                      if(((ATgetType(u_6) == AT_LIST) && !(ATisEmpty(u_6))))
                        {
                          v_6 = ATgetFirst((ATermList) u_6);
                          w_6 = (ATerm) ATgetNext((ATermList) u_6);
                          {
                            if(((r_6 != NULL) && (r_6 != v_6)))
                              _fail(v_6);
                            else
                              r_6 = v_6;
                            {
                              if(((s_6 != NULL) && (s_6 != w_6)))
                                _fail(w_6);
                              else
                                s_6 = w_6;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_6), term_b_8, (ATerm) ATinsert(CheckATermList(not_null(s_6)), (ATerm) ATinsert(CheckATermList(not_null(r_6)), not_null(m_6))));
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
        t = y_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm c_8;
  c_8 = t;
  {
    t = z_72(t);
    {
      ATerm f_0 (ATerm t)
      {
        t = term_d_8;
        return(t);
      }
      t = debug_1(t, f_0);
    }
  }
  t = c_8;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  ATerm l_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
      g_7 = t;
      b_7 :
      if(match_cons(g_7, sym__2))
        {
          h_7 = ATgetArgument(g_7, 0);
          i_7 = ATgetArgument(g_7, 1);
          {
            if(((f_7 != NULL) && (f_7 != h_7)))
              _fail(h_7);
            else
              f_7 = h_7;
            if(((e_7 != NULL) && (e_7 != i_7)))
              _fail(i_7);
            else
              e_7 = i_7;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(q_8);
      t = SSL_open_file(not_null(f_7), not_null(e_7));
    }
  else
    {
      t = l_8;
      {
        ATerm j_7 = NULL;
        ATerm k_7 = NULL;
        ATerm h_0 (ATerm t)
        {
          t = term_r_8;
          return(t);
        }
        t = obsolete_1(t, h_0);
        {
          j_7 = t;
          {
            if(((f_7 != NULL) && (f_7 != j_7)))
              _fail(j_7);
            else
              f_7 = j_7;
            {
              ATerm s_8;
              s_8 = t;
              {
                ATerm l_7 = NULL;
                t = term_t_8;
                {
                  l_7 = t;
                  if(((k_7 != NULL) && (k_7 != l_7)))
                    _fail(l_7);
                  else
                    k_7 = l_7;
                }
              }
              t = s_8;
              t = SSL_open_file(not_null(f_7), not_null(k_7));
            }
          }
        }
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
  ATerm q_7 = NULL;
  ATerm r_7 = NULL;
  t = term_u_8;
  {
    t = new_0(t);
    {
      r_7 = t;
      if(((q_7 != NULL) && (q_7 != r_7)))
        _fail(r_7);
      else
        q_7 = r_7;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_7), term_v_8);
    {
      t = conc_strings_0(t);
      {
        ATerm p_0 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, p_0);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm v_7 = NULL;
  t = new_file_0(t);
  {
    v_7 = t;
    {
      ATerm w_8;
      w_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_7), term_t_8);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_7), term_u_8);
            {
              ATerm q_0 (ATerm t)
              {
                t = term_x_8;
                return(t);
              }
              t = assert_1(t, q_0);
            }
          }
        }
      }
      t = w_8;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm f_8 = NULL,g_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_stdin_0))
    {
      ATerm h_8 = NULL;
      ATerm i_8 = NULL;
      ATerm j_8 = NULL;
      t = xtc_new_file_0(t);
      {
        i_8 = t;
        {
          if(((h_8 != NULL) && (h_8 != i_8)))
            _fail(i_8);
          else
            h_8 = i_8;
          {
            ATerm k_8 = NULL;
            t = o_0(t);
            {
              k_8 = t;
              if(((j_8 != NULL) && (j_8 != k_8)))
                _fail(k_8);
              else
                j_8 = k_8;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_8), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_8)), term_y_8));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(h_8);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_8));
    }
  else
    {
      if(match_cons(f_8, sym_FILE_1))
        {
          g_8 = ATgetArgument(f_8, 0);
          {
            ATerm m_8 = NULL;
            ATerm n_8 = NULL;
            t = not_null(g_8);
            {
              ATerm o_8 = NULL;
              t = xtc_new_file_0(t);
              {
                n_8 = t;
                {
                  if(((m_8 != NULL) && (m_8 != n_8)))
                    _fail(n_8);
                  else
                    m_8 = n_8;
                  {
                    ATerm p_8 = NULL;
                    t = o_0(t);
                    {
                      p_8 = t;
                      if(((o_8 != NULL) && (o_8 != p_8)))
                        _fail(p_8);
                      else
                        o_8 = p_8;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_8)), term_y_8), not_null(g_8)), term_b_9));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(m_8);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_8));
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
  ATerm a_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym_stdin_0))
    {
      ATerm c_9 = NULL,e_9 = NULL;
      ATerm g_9;
      g_9 = t;
      {
        ATerm d_9 = NULL;
        t = SSLgetAnnotations(not_null(a_9));
        {
          d_9 = t;
          if(((c_9 != NULL) && (c_9 != d_9)))
            _fail(d_9);
          else
            c_9 = d_9;
        }
      }
      t = g_9;
      {
        ATerm f_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(c_9));
        {
          f_9 = t;
          if(((e_9 != NULL) && (e_9 != f_9)))
            _fail(f_9);
          else
            e_9 = f_9;
        }
        t = not_null(e_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm o_9 = NULL,p_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_FILE_1))
    {
      p_9 = ATgetArgument(o_9, 0);
      {
        ATerm s_9 = NULL,u_9 = NULL;
        ATerm t_9 = NULL;
        t = SSLgetAnnotations(not_null(o_9));
        {
          t_9 = t;
          if(((s_9 != NULL) && (s_9 != t_9)))
            _fail(t_9);
          else
            s_9 = t_9;
        }
        {
          t = not_null(p_9);
          {
            ATerm w_9 = NULL;
            t = x_57(t);
            {
              u_9 = t;
              {
                ATerm x_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(u_9)), not_null(s_9));
                {
                  x_9 = t;
                  if(((w_9 != NULL) && (w_9 != x_9)))
                    _fail(x_9);
                  else
                    w_9 = x_9;
                }
                t = not_null(w_9);
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
ATerm xtc_transform_2 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm))
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(k_9);
        }
      else
        {
          t = j_9;
          t = stdin_0(t);
        }
      LocalPopChoice(i_9);
      t = xtc_transform_file_2(t, c_78, d_78);
    }
  else
    {
      t = h_9;
      t = xtc_transform_term_2(t, c_78, d_78);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    ATerm l_9;
    l_9 = t;
    {
      ATerm d_10 = NULL;
      ATerm e_10 = NULL;
      t = term_m_7;
      {
        t = get_config_0(t);
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), term_m_9);
        t = geq_0(t);
      }
    }
    t = l_9;
    t = t_59(t);
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm pass_v_verbose_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm s_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_q_9);
      return(t);
    }
    t = if_verbose3_1(t, s_0);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm h_10 = NULL;
  h_10 = t;
  t = SSL_table_keys(not_null(h_10));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  {
    t = table_keys_0(t);
    {
      ATerm t_0 (ATerm t)
      {
        ATerm p_10 = NULL;
        ATerm r_10 = NULL;
        p_10 = t;
        {
          ATerm s_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), not_null(p_10));
          {
            t = table_get_0(t);
            {
              s_10 = t;
              if(((r_10 != NULL) && (r_10 != s_10)))
                _fail(s_10);
              else
                r_10 = s_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_10), not_null(r_10));
        }
        return(t);
      }
      t = map_1(t, t_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm x_10 = NULL;
      ATerm y_10 = NULL;
      t = term_m_7;
      {
        t = get_config_0(t);
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), term_v_9);
        t = geq_0(t);
      }
    }
    t = r_9;
    t = v_59(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm y_9;
  y_9 = t;
  {
    ATerm b_11 = NULL;
    ATerm c_11 = NULL;
    c_11 = t;
    if(((b_11 != NULL) && (b_11 != c_11)))
      _fail(c_11);
    else
      b_11 = c_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(b_11));
      t = printnl_0(t);
    }
  }
  t = y_9;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm i_11 = NULL;
  ATerm k_11 = NULL,l_11 = NULL;
  i_11 = t;
  {
    ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_11)));
    {
      t = table_get_0(t);
      {
        m_11 = t;
        g_11 :
        if(((ATgetType(m_11) == AT_LIST) && !(ATisEmpty(m_11))))
          {
            n_11 = ATgetFirst((ATermList) m_11);
            q_11 = (ATerm) ATgetNext((ATermList) m_11);
            h_11 :
            if(match_cons(n_11, sym__2))
              {
                o_11 = ATgetArgument(n_11, 0);
                p_11 = ATgetArgument(n_11, 1);
                {
                  if(((k_11 != NULL) && (k_11 != o_11)))
                    _fail(o_11);
                  else
                    k_11 = o_11;
                  if(((l_11 != NULL) && (l_11 != p_11)))
                    _fail(p_11);
                  else
                    l_11 = p_11;
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
    t = not_null(l_11);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  x_11 = t;
  w_11 :
  if(match_cons(x_11, sym__2))
    {
      y_11 = ATgetArgument(x_11, 0);
      z_11 = ATgetArgument(x_11, 1);
      {
        ATerm c_12 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_11)));
        {
          t = table_get_0(t);
          {
            ATerm v_0 (ATerm t)
            {
              ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
              d_12 = t;
              v_11 :
              if(match_cons(d_12, sym__2))
                {
                  e_12 = ATgetArgument(d_12, 0);
                  f_12 = ATgetArgument(d_12, 1);
                  {
                    if(((z_11 != NULL) && (z_11 != e_12)))
                      _fail(e_12);
                    else
                      z_11 = e_12;
                    if(((c_12 != NULL) && (c_12 != f_12)))
                      _fail(f_12);
                    else
                      c_12 = f_12;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, v_0);
          }
        }
        t = not_null(c_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              t = filter_1(t, r_75);
              return(t);
            }
            t = Cons_2(t, r_75, w_0);
            ;
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            {
              ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
              k_12 = t;
              j_12 :
              if(((ATgetType(k_12) == AT_LIST) && !(ATisEmpty(k_12))))
                {
                  l_12 = ATgetFirst((ATermList) k_12);
                  m_12 = (ATerm) ATgetNext((ATermList) k_12);
                  {
                    t = not_null(m_12);
                    t = filter_1(t, r_75);
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
ATerm repeat_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm p_12 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      t = q_74(t);
      t = p_12(t);
      return(t);
    }
    t = try_1(t, x_0);
    return(t);
  }
  t = p_12(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm i_10;
  i_10 = t;
  {
    ATerm z_0 (ATerm t)
    {
      t = term_k_10;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm l_10 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
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
      return(t);
    }
    t = repeat_1(t, z_0);
  }
  t = i_10;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm u_59 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm m_10;
    m_10 = t;
    {
      ATerm r_12 = NULL;
      ATerm s_12 = NULL;
      t = term_m_7;
      {
        t = get_config_0(t);
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), term_o_10);
        t = geq_0(t);
      }
    }
    t = m_10;
    t = u_59(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm q_10;
    q_10 = t;
    {
      ATerm v_12 = NULL;
      ATerm w_12 = NULL;
      t = term_m_7;
      {
        t = get_config_0(t);
        {
          w_12 = t;
          if(((v_12 != NULL) && (v_12 != w_12)))
            _fail(w_12);
          else
            v_12 = w_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), term_t_10);
        t = geq_0(t);
      }
    }
    t = q_10;
    t = w_59(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym__2))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      if(((b_13 != NULL) && (b_13 != c_13)))
        _fail(c_13);
      else
        b_13 = c_13;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm n_70 (ATerm), ATerm o_70 (ATerm))
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  i_13 = t;
  h_13 :
  if(((ATgetType(i_13) == AT_LIST) && !(ATisEmpty(i_13))))
    {
      j_13 = ATgetFirst((ATermList) i_13);
      k_13 = (ATerm) ATgetNext((ATermList) i_13);
      {
        t = o_70(t);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm n_13 = NULL;
            n_13 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_13), not_null(n_13));
              t = n_70(t);
            }
            return(t);
          }
          t = fetch_1(t, f_1);
        }
        t = not_null(k_13);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm j_70 (ATerm))
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym__2))
    {
      u_13 = ATgetArgument(t_13, 0);
      v_13 = ATgetArgument(t_13, 1);
      {
        t = not_null(u_13);
        {
          ATerm z_13 (ATerm t)
          {
            ATerm u_10 = t;
            int v_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(v_13);
                ;
                LocalPopChoice(v_10);
              }
            else
              {
                t = u_10;
                {
                  ATerm w_10 = t;
                  int z_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(v_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_70, g_1);
                      t = z_13(t);
                      ;
                      LocalPopChoice(z_10);
                    }
                  else
                    {
                      t = w_10;
                      t = Cons_2(t, _id, z_13);
                    }
                }
              }
            return(t);
          }
          t = z_13(t);
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
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym__3))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      h_14 = ATgetArgument(e_14, 2);
      {
        ATerm a_11;
        a_11 = t;
        {
          ATerm l_14 = NULL;
          ATerm m_14 = NULL,o_14 = NULL;
          ATerm n_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), not_null(g_14));
          {
            ATerm d_11 = t;
            int e_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(e_11);
              }
            else
              {
                t = d_11;
                t = (ATerm) ATempty;
              }
            {
              n_14 = t;
              if(((m_14 != NULL) && (m_14 != n_14)))
                _fail(n_14);
              else
                m_14 = n_14;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), not_null(h_14));
            {
              t = union_0(t);
              {
                o_14 = t;
                if(((l_14 != NULL) && (l_14 != o_14)))
                  _fail(o_14);
                else
                  l_14 = o_14;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_14), not_null(g_14), not_null(l_14));
            t = set_0(t);
          }
        }
        t = a_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm f_60 (ATerm))
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        t = not_null(y_14);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
            b_15 = t;
            u_14 :
            if(match_cons(b_15, sym__2))
              {
                c_15 = ATgetArgument(b_15, 0);
                d_15 = ATgetArgument(b_15, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(x_14), not_null(c_15), not_null(d_15));
                  t = f_60(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_1);
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
  ATerm j_15 = NULL;
  ATerm f_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_15 = NULL;
      k_15 = t;
      {
        if(((j_15 != NULL) && (j_15 != k_15)))
          _fail(k_15);
        else
          j_15 = k_15;
        t = SSL_ReadFromFile(not_null(j_15));
      }
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = f_11;
      {
        ATerm i_1 (ATerm t)
        {
          t = term_r_11;
          return(t);
        }
        t = debug_1(t, i_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm o_15 = NULL;
  ATerm q_15 = NULL;
  o_15 = t;
  {
    ATerm s_11;
    s_11 = t;
    {
      ATerm r_15 = NULL;
      t = term_t_11;
      {
        r_15 = t;
        if(((q_15 != NULL) && (q_15 != r_15)))
          _fail(r_15);
        else
          q_15 = r_15;
      }
    }
    t = s_11;
    {
      t = SSL_open_file(not_null(o_15), not_null(q_15));
      t = SSL_close_file(not_null(o_15));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm w_15 = NULL;
  ATerm y_15 = NULL;
  w_15 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm k_1 (ATerm t)
      {
        t = term_u_11;
        return(t);
      }
      t = debug_1(t, k_1);
      return(t);
    }
    t = if_verbose5_1(t, j_1);
    {
      ATerm a_12 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATmakeAppl(sym_Imported_1, not_null(w_15)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_12;
        }
      {
        ATerm b_12;
        b_12 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_10, term_g_12, (ATerm) ATinsert(ATempty, not_null(w_15)));
          t = table_put_0(t);
        }
        t = b_12;
        {
          ATerm l_1 (ATerm t)
          {
            ATerm m_1 (ATerm t)
            {
              t = term_h_12;
              return(t);
            }
            t = debug_1(t, m_1);
            return(t);
          }
          t = if_verbose4_1(t, l_1);
          {
            ATerm i_12 = t;
            int n_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(n_12);
              }
            else
              {
                t = i_12;
                t = (ATerm) ATempty;
              }
            {
              ATerm n_1 (ATerm t)
              {
                ATerm o_1 (ATerm t)
                {
                  t = term_o_12;
                  return(t);
                }
                t = say_1(t, o_1);
                return(t);
              }
              t = if_verbose6_1(t, n_1);
              {
                ATerm z_15 = NULL;
                z_15 = t;
                if(((y_15 != NULL) && (y_15 != z_15)))
                  _fail(z_15);
                else
                  y_15 = z_15;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_10, not_null(y_15));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm p_1 (ATerm t)
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = term_q_12;
                          return(t);
                        }
                        t = say_1(t, q_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, p_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_a_10, (ATerm)ATmakeAppl(sym_Imported_1, not_null(w_15)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm s_1 (ATerm t)
                              {
                                t = term_o_12;
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
  }
  return(t);
}
ATerm getenv_0 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  t = SSL_getenv(not_null(d_16));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_12;
      t = get_config_0(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm y_12 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_13;
            t = getenv_0(t);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = y_12;
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
      t = term_f_13;
      return(t);
    }
    t = debug_1(t, u_1);
    return(t);
  }
  t = if_verbose5_1(t, t_1);
  {
    ATerm g_13;
    g_13 = t;
    {
      ATerm l_13 = t;
      int m_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_o_13;
          t = table_get_0(t);
          ;
          LocalPopChoice(m_13);
        }
      else
        {
          t = l_13;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = g_13;
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          t = term_p_13;
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
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          t = term_w_13;
          return(t);
        }
        t = debug_1(t, y_1);
        return(t);
      }
      t = if_verbose5_1(t, x_1);
      {
        t = xtc_load_0(t);
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm z_1 (ATerm t)
            {
              ATerm b_2 (ATerm t)
              {
                t = term_w_13;
                return(t);
              }
              t = debug_1(t, b_2);
              return(t);
            }
            t = if_verbose5_1(t, z_1);
          }
        }
      }
      ;
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm h_16 = NULL;
        ATerm i_16 = NULL;
        i_16 = t;
        if(((h_16 != NULL) && (h_16 != i_16)))
          _fail(i_16);
        else
          h_16 = i_16;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_14), not_null(h_16)), term_a_14);
          {
            t = error_0(t);
            {
              ATerm c_2 (ATerm t)
              {
                t = term_a_10;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm d_2 (ATerm t)
                    {
                      t = term_c_14;
                      return(t);
                    }
                    t = debug_1(t, d_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, c_2);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_sglr_1 (ATerm t, ATerm t_78 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    t = term_i_14;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm m_16 = NULL,o_16 = NULL;
    ATerm j_14;
    j_14 = t;
    {
      ATerm n_16 = NULL;
      t = term_u_8;
      {
        t = t_78(t);
        {
          t = xtc_find_0(t);
          {
            n_16 = t;
            if(((m_16 != NULL) && (m_16 != n_16)))
              _fail(n_16);
            else
              m_16 = n_16;
          }
        }
      }
    }
    t = j_14;
    {
      ATerm p_16 = NULL;
      t = term_u_8;
      {
        t = pass_v_verbose_0(t);
        {
          p_16 = t;
          if(((o_16 != NULL) && (o_16 != p_16)))
            _fail(p_16);
          else
            o_16 = p_16;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(o_16)), not_null(m_16)), term_p_14), term_k_14);
    }
    return(t);
  }
  t = xtc_transform_2(t, e_2, f_2);
  return(t);
}
ATerm xtc_parse_sdf_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = term_q_14;
    return(t);
  }
  t = xtc_sglr_1(t, g_2);
  t = xtc_implode_asfix_0(t);
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = term_r_14;
    return(t);
  }
  t = xtc_transform_2(t, h_2, pass_verbose_0);
  return(t);
}
ATerm pre_process_sdf_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  x_16 = t;
  v_16 :
  if(match_cons(x_16, sym__2))
    {
      y_16 = ATgetArgument(x_16, 0);
      z_16 = ATgetArgument(x_16, 1);
      w_16 :
      if(match_cons(y_16, sym_AST_0))
        {
          t = not_null(z_16);
        }
      else
        {
          if(match_cons(y_16, sym_ParseTree_0))
            {
              t = not_null(z_16);
              t = xtc_implode_asfix_0(t);
            }
          else
            {
              if(match_cons(y_16, sym_PlainText_0))
                {
                  t = not_null(z_16);
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
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_14;
      t = get_config_0(t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      t = term_a_15;
    }
  return(t);
}
ATerm ppgen_0 (ATerm t)
{
  ATerm i_17 = NULL,k_17 = NULL;
  ATerm e_15;
  e_15 = t;
  {
    ATerm j_17 = NULL;
    t = get_input_type_0(t);
    {
      j_17 = t;
      if(((i_17 != NULL) && (i_17 != j_17)))
        _fail(j_17);
      else
        i_17 = j_17;
    }
  }
  t = e_15;
  {
    ATerm l_17 = NULL;
    l_17 = t;
    if(((k_17 != NULL) && (k_17 != l_17)))
      _fail(l_17);
    else
      k_17 = l_17;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_17), not_null(k_17));
      {
        t = pre_process_sdf_0(t);
        {
          ATerm i_2 (ATerm t)
          {
            t = term_f_15;
            return(t);
          }
          t = xtc_transform_2(t, i_2, pass_verbose_0);
          {
            ATerm j_2 (ATerm t)
            {
              t = term_g_15;
              return(t);
            }
            t = xtc_transform_2(t, j_2, pass_verbose_0);
          }
        }
      }
    }
  }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
  q_17 = t;
  p_17 :
  if(match_cons(q_17, sym__2))
    {
      r_17 = ATgetArgument(q_17, 0);
      s_17 = ATgetArgument(q_17, 1);
      t = SSL_copy(not_null(r_17), not_null(s_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm a_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_stderr_0))
    {
      ATerm c_18 = NULL,e_18 = NULL;
      ATerm h_15;
      h_15 = t;
      {
        ATerm d_18 = NULL;
        t = SSLgetAnnotations(not_null(a_18));
        {
          d_18 = t;
          if(((c_18 != NULL) && (c_18 != d_18)))
            _fail(d_18);
          else
            c_18 = d_18;
        }
      }
      t = h_15;
      {
        ATerm f_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(c_18));
        {
          f_18 = t;
          if(((e_18 != NULL) && (e_18 != f_18)))
            _fail(f_18);
          else
            e_18 = f_18;
        }
        t = not_null(e_18);
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
  ATerm n_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym_stdout_0))
    {
      ATerm p_18 = NULL,r_18 = NULL;
      ATerm i_15;
      i_15 = t;
      {
        ATerm q_18 = NULL;
        t = SSLgetAnnotations(not_null(n_18));
        {
          q_18 = t;
          if(((p_18 != NULL) && (p_18 != q_18)))
            _fail(q_18);
          else
            p_18 = q_18;
        }
      }
      t = i_15;
      {
        ATerm s_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(p_18));
        {
          s_18 = t;
          if(((r_18 != NULL) && (r_18 != s_18)))
            _fail(s_18);
          else
            r_18 = s_18;
        }
        t = not_null(r_18);
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
  ATerm i_19 = NULL,j_19 = NULL;
  i_19 = t;
  h_19 :
  if(match_cons(i_19, sym_FILE_1))
    {
      j_19 = ATgetArgument(i_19, 0);
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_19 = NULL;
            ATerm m_19 = NULL;
            t = m_0(t);
            {
              m_19 = t;
              {
                if(((l_19 != NULL) && (l_19 != m_19)))
                  _fail(m_19);
                else
                  l_19 = m_19;
                {
                  ATerm n_15 = t;
                  int p_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(p_15);
                    }
                  else
                    {
                      t = n_15;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), not_null(l_19));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_19));
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm s_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_19 = NULL;
                  ATerm p_19 = NULL;
                  t = m_0(t);
                  {
                    p_19 = t;
                    {
                      if(((o_19 != NULL) && (o_19 != p_19)))
                        _fail(p_19);
                      else
                        o_19 = p_19;
                      {
                        ATerm u_15 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm v_15 = t;
                            int x_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(x_15);
                              }
                            else
                              {
                                t = v_15;
                                {
                                  ATerm a_16 = t;
                                  int b_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(b_16);
                                    }
                                  else
                                    {
                                      t = a_16;
                                      {
                                        ATerm q_19 = NULL;
                                        q_19 = t;
                                        if(((j_19 != NULL) && (j_19 != q_19)))
                                          _fail(q_19);
                                        else
                                          j_19 = q_19;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = u_15;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), not_null(o_19));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_19));
                  ;
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  {
                    ATerm s_19 = NULL;
                    t = m_0(t);
                    {
                      s_19 = t;
                      if(((j_19 != NULL) && (j_19 != s_19)))
                        _fail(s_19);
                      else
                        j_19 = s_19;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_19));
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
  ATerm d_20 = NULL,j_20 = NULL,k_20 = NULL;
  d_20 = t;
  c_20 :
  if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
    {
      j_20 = ATgetFirst((ATermList) d_20);
      k_20 = (ATerm) ATgetNext((ATermList) d_20);
      t = not_null(k_20);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  p_20 :
  if(match_cons(s_20, sym__2))
    {
      t_20 = ATgetArgument(s_20, 0);
      u_20 = ATgetArgument(s_20, 1);
      {
        ATerm c_16;
        c_16 = t;
        {
          ATerm x_20 = NULL;
          ATerm y_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_20), not_null(u_20));
          {
            ATerm e_16 = t;
            int f_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(f_16);
              }
            else
              {
                t = e_16;
                t = (ATerm) ATempty;
              }
            {
              y_20 = t;
              if(((x_20 != NULL) && (x_20 != y_20)))
                _fail(y_20);
              else
                x_20 = y_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_20), not_null(u_20), not_null(x_20));
            t = table_put_0(t);
          }
        }
        t = c_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm i_72 (ATerm))
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  ATerm g_16;
  g_16 = t;
  {
    ATerm n_21 = NULL;
    ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
    t = i_72(t);
    {
      n_21 = t;
      {
        if(((m_21 != NULL) && (m_21 != n_21)))
          _fail(n_21);
        else
          m_21 = n_21;
        {
          ATerm j_16 = t;
          int k_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_21), term_b_8);
              t = table_get_0(t);
              ;
              LocalPopChoice(k_16);
            }
          else
            {
              t = j_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            o_21 = t;
            j_21 :
            if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
              {
                p_21 = ATgetFirst((ATermList) o_21);
                q_21 = (ATerm) ATgetNext((ATermList) o_21);
                {
                  if(((l_21 != NULL) && (l_21 != p_21)))
                    _fail(p_21);
                  else
                    l_21 = p_21;
                  {
                    if(((k_21 != NULL) && (k_21 != q_21)))
                      _fail(q_21);
                    else
                      k_21 = q_21;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(m_21), term_b_8, not_null(k_21));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(l_21);
                          {
                            ATerm k_2 (ATerm t)
                            {
                              ATerm r_21 = NULL;
                              r_21 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_21), not_null(r_21));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, k_2);
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
  t = g_16;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  t = SSL_remove(not_null(c_22));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm n_63 (ATerm), ATerm o_63 (ATerm))
{
  ATerm l_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_63(t);
      t = o_63(t);
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = l_16;
      {
        t = o_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_72 (ATerm))
{
  ATerm t_22 = NULL;
  ATerm r_16;
  r_16 = t;
  {
    ATerm u_22 = NULL;
    ATerm v_22 = NULL;
    t = h_72(t);
    {
      u_22 = t;
      {
        if(((t_22 != NULL) && (t_22 != u_22)))
          _fail(u_22);
        else
          t_22 = u_22;
        {
          ATerm x_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_22), term_b_8);
          {
            ATerm s_16 = t;
            int t_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_16);
              }
            else
              {
                t = s_16;
                t = (ATerm) ATempty;
              }
            {
              x_22 = t;
              if(((v_22 != NULL) && (v_22 != x_22)))
                _fail(x_22);
              else
                v_22 = x_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_22), term_b_8, (ATerm) ATinsert(CheckATermList(not_null(v_22)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = r_16;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL;
  ATerm l_2 (ATerm t)
  {
    t = term_x_8;
    return(t);
  }
  t = begin_scope_1(t, l_2);
  {
    ATerm m_2 (ATerm t)
    {
      ATerm u_16;
      u_16 = t;
      {
        ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_17;
            t = table_get_0(t);
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          e_23 = t;
          b_23 :
          if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
            {
              f_23 = ATgetFirst((ATermList) e_23);
              g_23 = (ATerm) ATgetNext((ATermList) e_23);
              {
                if(((d_23 != NULL) && (d_23 != f_23)))
                  _fail(f_23);
                else
                  d_23 = f_23;
                {
                  if(((c_23 != NULL) && (c_23 != g_23)))
                    _fail(g_23);
                  else
                    c_23 = g_23;
                  {
                    t = not_null(d_23);
                    {
                      ATerm n_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, n_2);
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
      t = u_16;
      {
        ATerm o_2 (ATerm t)
        {
          t = term_x_8;
          return(t);
        }
        t = end_scope_1(t, o_2);
      }
      return(t);
    }
    t = restore_always_2(t, m_77, m_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm n_77 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_23 = NULL;
        ATerm k_23 = NULL;
        t = term_b_9;
        {
          t = get_config_0(t);
          {
            k_23 = t;
            if(((j_23 != NULL) && (j_23 != k_23)))
              _fail(k_23);
            else
              j_23 = k_23;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_23));
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = term_s_7;
      }
    {
      t = n_77(t);
      {
        ATerm q_2 (ATerm t)
        {
          ATerm f_17 = t;
          int g_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_y_8;
              t = get_config_0(t);
              ;
              LocalPopChoice(g_17);
            }
          else
            {
              t = f_17;
              t = term_h_17;
            }
          return(t);
        }
        t = copy_to_1(t, q_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, p_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm n_23 = NULL;
    n_23 = t;
    m_23 :
    if(!(match_string(n_23, "-v")))
      {
        if(!(match_string(n_23, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_m_17;
    t = set_config_0(t);
    t = term_n_17;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_o_17;
    return(t);
  }
  t = Option_3(t, r_2, v_2, w_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm q_23 = NULL;
    q_23 = t;
    o_23 :
    if(!(match_string(q_23, "-k")))
      {
        if(!(match_string(q_23, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm t_17;
    t_17 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_u_17, not_null(r_23));
        t = set_config_0(t);
      }
    }
    t = t_17;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_v_17;
    return(t);
  }
  t = ArgOption_3(t, x_2, y_2, z_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_23 = NULL;
  v_23 = t;
  t = SSL_string_to_int(not_null(v_23));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm d_24 = NULL;
        d_24 = t;
        y_23 :
        if(!(match_string(d_24, "-S")))
          {
            if(!(match_string(d_24, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_b_18;
        t = set_config_0(t);
        t = term_g_18;
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_h_18;
        return(t);
      }
      t = Option_3(t, a_3, b_3, c_3);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 (ATerm t)
            {
              ATerm e_24 = NULL;
              e_24 = t;
              z_23 :
              if(!(match_string(e_24, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_3 (ATerm t)
            {
              ATerm m_24 = NULL;
              ATerm k_18;
              k_18 = t;
              {
                ATerm f_24 = NULL;
                ATerm l_24 = NULL;
                t = string_to_int_0(t);
                {
                  l_24 = t;
                  if(((f_24 != NULL) && (f_24 != l_24)))
                    _fail(l_24);
                  else
                    f_24 = l_24;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_7, not_null(f_24));
                  t = set_config_0(t);
                }
              }
              t = k_18;
              {
                ATerm n_24 = NULL;
                n_24 = t;
                if(((m_24 != NULL) && (m_24 != n_24)))
                  _fail(n_24);
                else
                  m_24 = n_24;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_24));
              }
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              t = term_l_18;
              return(t);
            }
            t = ArgOption_3(t, d_3, j_3, m_3);
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            {
              ATerm n_3 (ATerm t)
              {
                ATerm o_24 = NULL;
                o_24 = t;
                c_24 :
                if(!(match_string(o_24, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_3 (ATerm t)
              {
                t = term_t_18;
                t = set_config_0(t);
                t = term_u_18;
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = term_v_18;
                return(t);
              }
              t = Option_3(t, n_3, o_3, p_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
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
            t = keep_option_0(t);
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm u_24 = NULL;
    u_24 = t;
    r_24 :
    if(!(match_string(u_24, "-o")))
      {
        if(!(match_string(u_24, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    ATerm x_24 = NULL;
    ATerm a_19;
    a_19 = t;
    {
      ATerm v_24 = NULL;
      ATerm w_24 = NULL;
      w_24 = t;
      if(((v_24 != NULL) && (v_24 != w_24)))
        _fail(w_24);
      else
        v_24 = w_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(v_24));
        t = set_config_0(t);
      }
    }
    t = a_19;
    {
      ATerm y_24 = NULL;
      y_24 = t;
      if(((x_24 != NULL) && (x_24 != y_24)))
        _fail(y_24);
      else
        x_24 = y_24;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_24));
    }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_b_19;
    return(t);
  }
  t = ArgOption_3(t, q_3, v_3, w_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
        ATerm x_3 (ATerm t)
        {
          ATerm g_25 = NULL;
          g_25 = t;
          f_25 :
          if(!(match_string(g_25, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm y_3 (ATerm t)
        {
          t = term_f_19;
          t = set_config_0(t);
          t = term_g_19;
          return(t);
        }
        ATerm z_3 (ATerm t)
        {
          t = term_k_19;
          return(t);
        }
        t = Option_3(t, x_3, y_3, z_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  m_25 = t;
  k_25 :
  if(match_string(m_25, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(m_25) == AT_LIST) && !(ATisEmpty(m_25))))
        {
          n_25 = ATgetFirst((ATermList) m_25);
          o_25 = (ATerm) ATgetNext((ATermList) m_25);
          l_25 :
          if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
            {
              p_25 = ATgetFirst((ATermList) o_25);
              q_25 = (ATerm) ATgetNext((ATermList) o_25);
              {
                ATerm u_25 = NULL;
                ATerm n_19;
                n_19 = t;
                {
                  t = not_null(n_25);
                  t = j_0(t);
                }
                t = n_19;
                {
                  ATerm v_25 = NULL;
                  t = not_null(p_25);
                  {
                    t = k_0(t);
                    {
                      v_25 = t;
                      if(((u_25 != NULL) && (u_25 != v_25)))
                        _fail(v_25);
                      else
                        u_25 = v_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_25)), not_null(u_25));
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
  ATerm b_4 (ATerm t)
  {
    ATerm c_26 = NULL;
    c_26 = t;
    z_25 :
    if(!(match_string(c_26, "-i")))
      {
        if(!(match_string(c_26, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm f_26 = NULL;
    ATerm r_19;
    r_19 = t;
    {
      ATerm d_26 = NULL;
      ATerm e_26 = NULL;
      e_26 = t;
      if(((d_26 != NULL) && (d_26 != e_26)))
        _fail(e_26);
      else
        d_26 = e_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(d_26));
        t = set_config_0(t);
      }
    }
    t = r_19;
    {
      ATerm g_26 = NULL;
      g_26 = t;
      if(((f_26 != NULL) && (f_26 != g_26)))
        _fail(g_26);
      else
        f_26 = g_26;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_26));
    }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_t_19;
    return(t);
  }
  t = ArgOption_3(t, b_4, e_4, f_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm ppgen_options_0 (ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 (ATerm t)
      {
        ATerm l_26 = NULL;
        l_26 = t;
        j_26 :
        if(!(match_string(l_26, "-A")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm i_4 (ATerm t)
      {
        ATerm a_20;
        a_20 = t;
        {
          t = term_e_20;
          t = set_config_0(t);
        }
        t = a_20;
        return(t);
      }
      ATerm j_4 (ATerm t)
      {
        t = term_f_20;
        return(t);
      }
      t = Option_3(t, g_4, i_4, j_4);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 (ATerm t)
            {
              ATerm m_26 = NULL;
              m_26 = t;
              k_26 :
              if(!(match_string(m_26, "-a")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm p_4 (ATerm t)
            {
              ATerm i_20;
              i_20 = t;
              {
                t = term_m_20;
                t = set_config_0(t);
              }
              t = i_20;
              return(t);
            }
            ATerm q_4 (ATerm t)
            {
              t = term_n_20;
              return(t);
            }
            t = Option_3(t, k_4, p_4, q_4);
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            t = io_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm p_26 = NULL;
  ATerm o_20;
  o_20 = t;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm q_26 = NULL,r_26 = NULL;
      q_26 = t;
      o_26 :
      if(match_cons(q_26, sym_Program_1))
        {
          r_26 = ATgetArgument(q_26, 0);
          if(((p_26 != NULL) && (p_26 != r_26)))
            _fail(r_26);
          else
            p_26 = r_26;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, r_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_20), not_null(p_26)), term_q_20));
      {
        t = printnl_0(t);
        {
          t = term_p_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_20;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATempty, term_v_20));
  {
    t = printnl_0(t);
    {
      t = term_p_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  t = SSL_TicksToSeconds(not_null(u_26));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym__2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      {
        ATerm w_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_27), not_null(b_27));
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = w_20;
            t = SSL_addr(not_null(a_27), not_null(b_27));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_71 (ATerm), ATerm b_71 (ATerm))
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_71(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
        i_27 = t;
        h_27 :
        if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
          {
            j_27 = ATgetFirst((ATermList) i_27);
            k_27 = (ATerm) ATgetNext((ATermList) i_27);
            {
              ATerm n_27 = NULL;
              ATerm o_27 = NULL;
              t = not_null(k_27);
              {
                t = foldr_2(t, a_71, b_71);
                {
                  o_27 = t;
                  if(((n_27 != NULL) && (n_27 != o_27)))
                    _fail(o_27);
                  else
                    n_27 = o_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), not_null(n_27));
                t = b_71(t);
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
ATerm crush_2 (ATerm t, ATerm y_69 (ATerm), ATerm z_69 (ATerm))
{
  ATerm v_27 = NULL;
  ATerm x_27 = NULL;
  v_27 = t;
  {
    ATerm y_27 = NULL;
    ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
    t = not_null(v_27);
    {
      y_27 = t;
      {
        t = SSL_explode_term(not_null(y_27));
        {
          a_28 = t;
          u_27 :
          if(match_cons(a_28, sym__2))
            {
              b_28 = ATgetArgument(a_28, 0);
              c_28 = ATgetArgument(a_28, 1);
              if(((x_27 != NULL) && (x_27 != c_28)))
                _fail(c_28);
              else
                x_27 = c_28;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_27);
      t = foldr_2(t, y_69, z_69);
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
      t = term_y_17;
      return(t);
    }
    t = crush_2(t, s_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  i_28 = t;
  h_28 :
  if(match_cons(i_28, sym__2))
    {
      j_28 = ATgetArgument(i_28, 0);
      k_28 = ATgetArgument(i_28, 1);
      {
        ATerm c_21;
        c_21 = t;
        {
          ATerm d_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_28), not_null(k_28));
              ;
              LocalPopChoice(e_21);
            }
          else
            {
              t = d_21;
              t = SSL_gtr(not_null(j_28), not_null(k_28));
            }
        }
        t = c_21;
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
  ATerm q_28 = NULL;
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
      r_28 = t;
      p_28 :
      if(match_cons(r_28, sym__2))
        {
          s_28 = ATgetArgument(r_28, 0);
          t_28 = ATgetArgument(r_28, 1);
          {
            if(((q_28 != NULL) && (q_28 != s_28)))
              _fail(s_28);
            else
              q_28 = s_28;
            if(((q_28 != NULL) && (q_28 != t_28)))
              _fail(t_28);
            else
              q_28 = t_28;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm h_21;
    h_21 = t;
    {
      ATerm w_28 = NULL;
      ATerm x_28 = NULL;
      t = term_m_7;
      {
        t = get_config_0(t);
        {
          x_28 = t;
          if(((w_28 != NULL) && (w_28 != x_28)))
            _fail(x_28);
          else
            w_28 = x_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), term_p_7);
        t = geq_0(t);
      }
    }
    t = h_21;
    t = r_59(t);
    return(t);
  }
  t = try_1(t, u_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm b_29 = NULL,d_29 = NULL;
    ATerm i_21;
    i_21 = t;
    {
      ATerm c_29 = NULL;
      t = run_time_0(t);
      {
        c_29 = t;
        if(((b_29 != NULL) && (b_29 != c_29)))
          _fail(c_29);
        else
          b_29 = c_29;
      }
    }
    t = i_21;
    {
      ATerm e_29 = NULL;
      t = term_s_21;
      {
        t = get_config_0(t);
        {
          e_29 = t;
          if(((d_29 != NULL) && (d_29 != e_29)))
            _fail(e_29);
          else
            d_29 = e_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_21), not_null(b_29)), term_t_21), not_null(d_29)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_4);
  {
    t = term_y_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_29 = NULL;
  l_29 = t;
  k_29 :
  if(match_cons(l_29, sym_Version_0))
    {
      ATerm n_29 = NULL,q_29 = NULL;
      ATerm v_21;
      v_21 = t;
      {
        ATerm o_29 = NULL;
        t = SSLgetAnnotations(not_null(l_29));
        {
          o_29 = t;
          if(((n_29 != NULL) && (n_29 != o_29)))
            _fail(o_29);
          else
            n_29 = o_29;
        }
      }
      t = v_21;
      {
        ATerm r_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_29));
        {
          r_29 = t;
          if(((q_29 != NULL) && (q_29 != r_29)))
            _fail(r_29);
          else
            q_29 = r_29;
        }
        t = not_null(q_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_4);
  t = w_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  t = SSL_table_create(not_null(y_29));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  {
    ATerm a_22;
    a_22 = t;
    {
      t = term_b_22;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_22, term_d_22, not_null(f_30));
          t = table_put_0(t);
        }
      }
    }
    t = a_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_30 = NULL;
  j_30 = t;
  t = SSL_table_destroy(not_null(j_30));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  t = SSL_exit(not_null(n_30));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  q_30 :
  if(((ATgetType(t_30) == AT_LIST) && ATisEmpty(t_30)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_30) == AT_LIST) && !(ATisEmpty(t_30))))
        {
          u_30 = ATgetFirst((ATermList) t_30);
          v_30 = (ATerm) ATgetNext((ATermList) t_30);
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
  ATerm e_22;
  e_22 = t;
  {
    ATerm y_30 = NULL;
    ATerm b_31 = NULL;
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        {
          ATerm z_30 = NULL;
          ATerm a_31 = NULL;
          a_31 = t;
          if(((z_30 != NULL) && (z_30 != a_31)))
            _fail(a_31);
          else
            z_30 = a_31;
          t = (ATerm) ATinsert(ATempty, not_null(z_30));
        }
      }
    {
      b_31 = t;
      if(((y_30 != NULL) && (y_30 != b_31)))
        _fail(b_31);
      else
        y_30 = b_31;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_17, not_null(y_30));
      t = printnl_0(t);
    }
  }
  t = e_22;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  m_31 = t;
  j_31 :
  if(((ATgetType(m_31) == AT_LIST) && !(ATisEmpty(m_31))))
    {
      k_31 = ATgetFirst((ATermList) m_31);
      l_31 = (ATerm) ATgetNext((ATermList) m_31);
      {
        ATerm p_31 = NULL;
        t = not_null(l_31);
        {
          ATerm h_22;
          h_22 = t;
          {
            ATerm q_31 = NULL,s_31 = NULL,u_31 = NULL;
            ATerm i_22;
            i_22 = t;
            {
              ATerm r_31 = NULL;
              t = i_0(t);
              {
                r_31 = t;
                if(((q_31 != NULL) && (q_31 != r_31)))
                  _fail(r_31);
                else
                  q_31 = r_31;
              }
            }
            t = i_22;
            {
              ATerm t_31 = NULL;
              t = not_null(k_31);
              {
                t = g_0(t);
                {
                  t_31 = t;
                  if(((s_31 != NULL) && (s_31 != t_31)))
                    _fail(t_31);
                  else
                    s_31 = t_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_31)), not_null(s_31));
                {
                  u_31 = t;
                  if(((p_31 != NULL) && (p_31 != u_31)))
                    _fail(u_31);
                  else
                    p_31 = u_31;
                }
              }
            }
          }
          t = h_22;
          {
            ATerm x_4 (ATerm t)
            {
              t = not_null(p_31);
              return(t);
            }
            t = reverse_acc_2(t, g_0, x_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_31) == AT_LIST) && ATisEmpty(m_31)))
        {
          {
            t = term_u_8;
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
ATerm short_description_1 (ATerm t, ATerm d_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_58 (ATerm))
{
  ATerm f_32 = NULL,g_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym_Program_1))
    {
      g_32 = ATgetArgument(f_32, 0);
      {
        ATerm j_32 = NULL,l_32 = NULL;
        ATerm k_32 = NULL;
        t = SSLgetAnnotations(not_null(f_32));
        {
          k_32 = t;
          if(((j_32 != NULL) && (j_32 != k_32)))
            _fail(k_32);
          else
            j_32 = k_32;
        }
        {
          t = not_null(g_32);
          {
            ATerm n_32 = NULL;
            t = e_58(t);
            {
              l_32 = t;
              {
                ATerm o_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_32)), not_null(j_32));
                {
                  o_32 = t;
                  if(((n_32 != NULL) && (n_32 != o_32)))
                    _fail(o_32);
                  else
                    n_32 = o_32;
                }
                t = not_null(n_32);
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
  ATerm b_33 = NULL;
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_33 = NULL;
      t = term_s_21;
      {
        t = get_config_0(t);
        {
          e_33 = t;
          if(((b_33 != NULL) && (b_33 != e_33)))
            _fail(e_33);
          else
            b_33 = e_33;
        }
      }
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm a_5 (ATerm t)
        {
          ATerm e_5 (ATerm t)
          {
            ATerm f_33 = NULL;
            f_33 = t;
            if(((b_33 != NULL) && (b_33 != f_33)))
              _fail(f_33);
            else
              b_33 = f_33;
            return(t);
          }
          t = Program_1(t, e_5);
          return(t);
        }
        t = option_defined_1(t, a_5);
      }
    }
  {
    ATerm g_5 (ATerm t)
    {
      ATerm m_5 (ATerm t)
      {
        t = not_null(b_33);
        return(t);
      }
      t = short_description_1(t, m_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_5);
    {
      t = term_l_22;
      {
        t = echo_0(t);
        {
          t = term_o_22;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_5 (ATerm t)
                {
                  ATerm g_33 = NULL;
                  ATerm h_33 = NULL;
                  h_33 = t;
                  if(((g_33 != NULL) && (g_33 != h_33)))
                    _fail(h_33);
                  else
                    g_33 = h_33;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_33)), term_p_22);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_5);
                {
                  ATerm o_5 (ATerm t)
                  {
                    ATerm i_33 = NULL;
                    ATerm j_33 = NULL;
                    ATerm p_5 (ATerm t)
                    {
                      t = not_null(b_33);
                      return(t);
                    }
                    t = long_description_1(t, p_5);
                    {
                      j_33 = t;
                      if(((i_33 != NULL) && (i_33 != j_33)))
                        _fail(j_33);
                      else
                        i_33 = j_33;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(i_33)), term_q_22);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_5);
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
  ATerm r_22;
  r_22 = t;
  {
    ATerm p_33 = NULL;
    ATerm q_33 = NULL;
    q_33 = t;
    if(((p_33 != NULL) && (p_33 != q_33)))
      _fail(q_33);
    else
      p_33 = q_33;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATempty, not_null(p_33)));
      t = printnl_0(t);
    }
  }
  t = r_22;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_72 (ATerm))
{
  ATerm s_22;
  s_22 = t;
  {
    t = t_72(t);
    t = debug_0(t);
  }
  t = s_22;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_58 (ATerm))
{
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  y_33 :
  if(match_cons(z_33, sym_Undefined_1))
    {
      a_34 = ATgetArgument(z_33, 0);
      {
        ATerm o_34 = NULL,q_34 = NULL;
        ATerm p_34 = NULL;
        t = SSLgetAnnotations(not_null(z_33));
        {
          p_34 = t;
          if(((o_34 != NULL) && (o_34 != p_34)))
            _fail(p_34);
          else
            o_34 = p_34;
        }
        {
          t = not_null(a_34);
          {
            ATerm w_34 = NULL;
            t = f_58(t);
            {
              q_34 = t;
              {
                ATerm x_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_34)), not_null(o_34));
                {
                  x_34 = t;
                  if(((w_34 != NULL) && (w_34 != x_34)))
                    _fail(x_34);
                  else
                    w_34 = x_34;
                }
                t = not_null(w_34);
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
ATerm fetch_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm e_35 (ATerm t)
  {
    ATerm w_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_64, _id);
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = w_22;
        t = Cons_2(t, _id, e_35);
      }
    return(t);
  }
  t = e_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_80 (ATerm))
{
  t = fetch_1(t, d_80);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  l_35 :
  if(match_cons(m_35, sym_Help_0))
    {
      ATerm o_35 = NULL,q_35 = NULL;
      ATerm z_22;
      z_22 = t;
      {
        ATerm p_35 = NULL;
        t = SSLgetAnnotations(not_null(m_35));
        {
          p_35 = t;
          if(((o_35 != NULL) && (o_35 != p_35)))
            _fail(p_35);
          else
            o_35 = p_35;
        }
      }
      t = z_22;
      {
        ATerm r_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_35));
        {
          r_35 = t;
          if(((q_35 != NULL) && (q_35 != r_35)))
            _fail(r_35);
          else
            q_35 = r_35;
        }
        t = not_null(q_35);
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
  ATerm w_35 = NULL;
  w_35 = t;
  t = SSL_implode_string(not_null(w_35));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = a_23;
      {
        ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
        b_36 = t;
        a_36 :
        if(((ATgetType(b_36) == AT_LIST) && !(ATisEmpty(b_36))))
          {
            c_36 = ATgetFirst((ATermList) b_36);
            d_36 = (ATerm) ATgetNext((ATermList) b_36);
            {
              t = not_null(c_36);
              {
                ATerm q_5 (ATerm t)
                {
                  t = not_null(d_36);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, q_5);
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
  ATerm n_36 = NULL;
  ATerm p_36 = NULL;
  n_36 = t;
  {
    ATerm q_36 = NULL;
    ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
    t = not_null(n_36);
    {
      q_36 = t;
      {
        t = SSL_explode_term(not_null(q_36));
        {
          s_36 = t;
          l_36 :
          if(match_cons(s_36, sym__2))
            {
              t_36 = ATgetArgument(s_36, 0);
              u_36 = ATgetArgument(s_36, 1);
              m_36 :
              if(match_string(t_36, ""))
                {
                  if(((p_36 != NULL) && (p_36 != u_36)))
                    _fail(u_36);
                  else
                    p_36 = u_36;
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
      t = not_null(p_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm y_36 (ATerm t)
  {
    ATerm i_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_36);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = i_23;
        {
          t = Nil_0(t);
          t = f_65(t);
        }
      }
    return(t);
  }
  t = y_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
  b_37 = t;
  a_37 :
  if(match_cons(b_37, sym__2))
    {
      c_37 = ATgetArgument(b_37, 0);
      d_37 = ATgetArgument(b_37, 1);
      {
        t = not_null(c_37);
        {
          ATerm v_5 (ATerm t)
          {
            t = not_null(d_37);
            return(t);
          }
          t = at_end_1(t, v_5);
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
  ATerm p_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = p_23;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  t = SSL_explode_string(not_null(i_37));
  return(t);
}
ATerm _2 (ATerm t, ATerm i_51 (ATerm), ATerm j_51 (ATerm))
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  r_37 = t;
  q_37 :
  if(match_cons(r_37, sym__2))
    {
      s_37 = ATgetArgument(r_37, 0);
      t_37 = ATgetArgument(r_37, 1);
      {
        ATerm x_37 = NULL,z_37 = NULL;
        ATerm y_37 = NULL;
        t = SSLgetAnnotations(not_null(r_37));
        {
          y_37 = t;
          if(((x_37 != NULL) && (x_37 != y_37)))
            _fail(y_37);
          else
            x_37 = y_37;
        }
        {
          t = not_null(s_37);
          {
            ATerm b_38 = NULL;
            t = i_51(t);
            {
              z_37 = t;
              {
                t = not_null(t_37);
                {
                  ATerm d_38 = NULL;
                  t = j_51(t);
                  {
                    b_38 = t;
                    {
                      ATerm e_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_37), not_null(b_38)), not_null(x_37));
                      {
                        e_38 = t;
                        if(((d_38 != NULL) && (d_38 != e_38)))
                          _fail(e_38);
                        else
                          d_38 = e_38;
                      }
                      t = not_null(d_38);
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
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
  m_38 = t;
  l_38 :
  if(match_cons(m_38, sym__2))
    {
      n_38 = ATgetArgument(m_38, 0);
      o_38 = ATgetArgument(m_38, 1);
      {
        ATerm u_23;
        u_23 = t;
        t = SSL_printnl(not_null(n_38), not_null(o_38));
        t = u_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_72 (ATerm))
{
  ATerm w_23;
  w_23 = t;
  {
    ATerm u_38 = NULL,w_38 = NULL;
    ATerm x_23;
    x_23 = t;
    {
      ATerm v_38 = NULL;
      t = s_72(t);
      {
        v_38 = t;
        if(((u_38 != NULL) && (u_38 != v_38)))
          _fail(v_38);
        else
          u_38 = v_38;
      }
    }
    t = x_23;
    {
      ATerm x_38 = NULL;
      x_38 = t;
      if(((w_38 != NULL) && (w_38 != x_38)))
        _fail(x_38);
      else
        w_38 = x_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_38)), not_null(u_38)));
        t = printnl_0(t);
      }
    }
  }
  t = w_23;
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm a_39 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = Cons_2(t, q_64, a_39);
      }
    return(t);
  }
  t = a_39(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm c_39 = NULL;
  c_39 = t;
  t = SSL_is_string(not_null(c_39));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, w_5);
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            {
              ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
              l_39 = t;
              k_39 :
              if(match_cons(l_39, sym_Path_1))
                {
                  m_39 = ATgetArgument(l_39, 0);
                  t = not_null(m_39);
                }
              else
                {
                  if(match_cons(l_39, sym_Var_1))
                    {
                      m_39 = ATgetArgument(l_39, 0);
                      {
                        t = not_null(m_39);
                        {
                          ATerm k_24 = t;
                          int p_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(p_24);
                            }
                          else
                            {
                              t = k_24;
                              {
                                ATerm x_5 (ATerm t)
                                {
                                  t = term_q_24;
                                  return(t);
                                }
                                t = debug_1(t, x_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_39, sym_Prefix_2))
                        {
                          m_39 = ATgetArgument(l_39, 0);
                          n_39 = ATgetArgument(l_39, 1);
                          {
                            ATerm s_39 = NULL,u_39 = NULL;
                            ATerm s_24;
                            s_24 = t;
                            {
                              ATerm t_39 = NULL;
                              t = not_null(m_39);
                              {
                                t = eval_config_0(t);
                                {
                                  t_39 = t;
                                  if(((s_39 != NULL) && (s_39 != t_39)))
                                    _fail(t_39);
                                  else
                                    s_39 = t_39;
                                }
                              }
                            }
                            t = s_24;
                            {
                              ATerm v_39 = NULL;
                              t = not_null(n_39);
                              {
                                t = eval_config_0(t);
                                {
                                  v_39 = t;
                                  if(((u_39 != NULL) && (u_39 != v_39)))
                                    _fail(v_39);
                                  else
                                    u_39 = v_39;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_39), not_null(u_39));
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
  ATerm h_40 = NULL;
  h_40 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_24, not_null(h_40));
    {
      t = table_get_0(t);
      {
        ATerm y_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm z_24;
            z_24 = t;
            {
              ATerm j_40 = NULL;
              ATerm k_40 = NULL;
              k_40 = t;
              if(((j_40 != NULL) && (j_40 != k_40)))
                _fail(k_40);
              else
                j_40 = k_40;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_t_24, not_null(h_40), not_null(j_40));
                t = table_put_0(t);
              }
            }
            t = z_24;
          }
          return(t);
        }
        t = try_1(t, y_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_62 (ATerm))
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_62(t);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
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
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym__3))
    {
      z_40 = ATgetArgument(y_40, 0);
      a_41 = ATgetArgument(y_40, 1);
      b_41 = ATgetArgument(y_40, 2);
      {
        ATerm c_25;
        c_25 = t;
        {
          ATerm f_41 = NULL;
          ATerm g_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_40), not_null(a_41));
          {
            ATerm d_25 = t;
            int e_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(e_25);
              }
            else
              {
                t = d_25;
                t = (ATerm) ATempty;
              }
            {
              g_41 = t;
              if(((f_41 != NULL) && (f_41 != g_41)))
                _fail(g_41);
              else
                f_41 = g_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_40), not_null(a_41), (ATerm) ATinsert(CheckATermList(not_null(f_41)), not_null(b_41)));
            t = table_put_0(t);
          }
        }
        t = c_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm k_41 = NULL;
  ATerm l_41 = NULL;
  t = term_u_8;
  {
    t = i_81(t);
    {
      l_41 = t;
      if(((k_41 != NULL) && (k_41 != l_41)))
        _fail(l_41);
      else
        k_41 = l_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_22, term_n_22, not_null(k_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  q_41 :
  if(match_string(r_41, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(r_41) == AT_LIST) && !(ATisEmpty(r_41))))
        {
          s_41 = ATgetFirst((ATermList) r_41);
          t_41 = (ATerm) ATgetNext((ATermList) r_41);
          {
            ATerm w_41 = NULL;
            ATerm h_25;
            h_25 = t;
            {
              t = not_null(s_41);
              t = a_0(t);
            }
            t = h_25;
            {
              ATerm x_41 = NULL;
              t = term_u_8;
              {
                t = c_0(t);
                {
                  x_41 = t;
                  if(((w_41 != NULL) && (w_41 != x_41)))
                    _fail(x_41);
                  else
                    w_41 = x_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_41)), not_null(w_41));
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
  ATerm z_5 (ATerm t)
  {
    ATerm c_42 = NULL;
    c_42 = t;
    b_42 :
    if(!(match_string(c_42, "--help")))
      {
        if(!(match_string(c_42, "-h")))
          {
            if(!(match_string(c_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = term_j_25;
    {
      t = set_config_0(t);
      t = term_r_25;
    }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    t = term_s_25;
    return(t);
  }
  t = Option_3(t, z_5, e_6, f_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  e_42 :
  if(((ATgetType(f_42) == AT_LIST) && !(ATisEmpty(f_42))))
    {
      g_42 = ATgetFirst((ATermList) f_42);
      h_42 = (ATerm) ATgetNext((ATermList) f_42);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_42)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_52 (ATerm), ATerm s_52 (ATerm))
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  u_42 :
  if(((ATgetType(v_42) == AT_LIST) && !(ATisEmpty(v_42))))
    {
      w_42 = ATgetFirst((ATermList) v_42);
      x_42 = (ATerm) ATgetNext((ATermList) v_42);
      {
        ATerm b_43 = NULL,d_43 = NULL;
        ATerm c_43 = NULL;
        t = SSLgetAnnotations(not_null(v_42));
        {
          c_43 = t;
          if(((b_43 != NULL) && (b_43 != c_43)))
            _fail(c_43);
          else
            b_43 = c_43;
        }
        {
          t = not_null(w_42);
          {
            ATerm h_43 = NULL;
            t = r_52(t);
            {
              d_43 = t;
              {
                t = not_null(x_42);
                {
                  ATerm j_43 = NULL;
                  t = s_52(t);
                  {
                    h_43 = t;
                    {
                      ATerm k_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_43)), not_null(d_43)), not_null(b_43));
                      {
                        k_43 = t;
                        if(((j_43 != NULL) && (j_43 != k_43)))
                          _fail(k_43);
                        else
                          j_43 = k_43;
                      }
                      t = not_null(j_43);
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
  ATerm z_43 = NULL;
  z_43 = t;
  y_43 :
  if(((ATgetType(z_43) == AT_LIST) && ATisEmpty(z_43)))
    {
      {
        ATerm b_44 = NULL,n_44 = NULL;
        ATerm t_25;
        t_25 = t;
        {
          ATerm m_44 = NULL;
          t = SSLgetAnnotations(not_null(z_43));
          {
            m_44 = t;
            if(((b_44 != NULL) && (b_44 != m_44)))
              _fail(m_44);
            else
              b_44 = m_44;
          }
        }
        t = t_25;
        {
          ATerm o_44 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_44));
          {
            o_44 = t;
            if(((n_44 != NULL) && (n_44 != o_44)))
              _fail(o_44);
            else
              n_44 = o_44;
          }
          t = not_null(n_44);
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
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
  y_44 = t;
  w_44 :
  if(match_cons(y_44, sym__2))
    {
      z_44 = ATgetArgument(y_44, 0);
      a_45 = ATgetArgument(y_44, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_24, not_null(z_44), not_null(a_45));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_81 (ATerm))
{
  ATerm w_25;
  w_25 = t;
  {
    ATerm g_6 (ATerm t)
    {
      t = term_x_25;
      t = g_81(t);
      return(t);
    }
    t = try_1(t, g_6);
  }
  t = w_25;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm r_45 = NULL;
      ATerm y_25;
      y_25 = t;
      {
        ATerm p_45 = NULL;
        ATerm q_45 = NULL;
        q_45 = t;
        if(((p_45 != NULL) && (p_45 != q_45)))
          _fail(q_45);
        else
          p_45 = q_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_21, not_null(p_45));
          t = set_config_0(t);
        }
      }
      t = y_25;
      {
        ATerm t_45 = NULL;
        t_45 = t;
        if(((r_45 != NULL) && (r_45 != t_45)))
          _fail(t_45);
        else
          r_45 = t_45;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_45));
      }
      return(t);
    }
    ATerm i_6 (ATerm t)
    {
      ATerm a_26 = t;
      int b_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_26 = t;
          int i_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(i_26);
            }
          else
            {
              t = h_26;
              {
                t = g_81(t);
                t = Cons_2(t, _id, i_6);
              }
            }
          ;
          LocalPopChoice(b_26);
        }
      else
        {
          t = a_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_6, i_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_46 = NULL,g_46 = NULL,h_46 = NULL;
  ATerm n_26;
  n_26 = t;
  {
    ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
    i_46 = t;
    z_45 :
    if(match_cons(i_46, sym__3))
      {
        j_46 = ATgetArgument(i_46, 0);
        k_46 = ATgetArgument(i_46, 1);
        l_46 = ATgetArgument(i_46, 2);
        {
          if(((a_46 != NULL) && (a_46 != j_46)))
            _fail(j_46);
          else
            a_46 = j_46;
          {
            if(((g_46 != NULL) && (g_46 != k_46)))
              _fail(k_46);
            else
              g_46 = k_46;
            {
              if(((h_46 != NULL) && (h_46 != l_46)))
                _fail(l_46);
              else
                h_46 = l_46;
              t = SSL_table_put(not_null(a_46), not_null(g_46), not_null(h_46));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_26;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_81 (ATerm))
{
  ATerm s_46 = NULL;
  ATerm s_26;
  s_26 = t;
  {
    t = term_t_26;
    t = table_put_0(t);
  }
  t = s_26;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm v_26 = t;
      int w_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_81(t);
          ;
          LocalPopChoice(w_26);
        }
      else
        {
          t = v_26;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_6);
    {
      ATerm p_6 (ATerm t)
      {
        ATerm x_26 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_27;
            d_27 = t;
            {
              ATerm e_27 = t;
              int f_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_25;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(f_27);
                }
              else
                {
                  t = e_27;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = d_27;
            {
              t = system_usage_0(t);
              {
                t = term_y_17;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = x_26;
            {
              ATerm x_6 (ATerm t)
              {
                ATerm y_6 (ATerm t)
                {
                  ATerm t_46 = NULL;
                  t_46 = t;
                  if(((s_46 != NULL) && (s_46 != t_46)))
                    _fail(t_46);
                  else
                    s_46 = t_46;
                  return(t);
                }
                t = Undefined_1(t, y_6);
                return(t);
              }
              t = option_defined_1(t, x_6);
              {
                ATerm z_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_46)), term_g_27);
                  return(t);
                }
                t = say_1(t, z_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_p_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_6);
      {
        ATerm l_27;
        l_27 = t;
        {
          t = term_m_22;
          t = table_destroy_0(t);
        }
        t = l_27;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  t = parse_options_1(t, c_79);
  {
    t = store_options_0(t);
    {
      t = e_79(t);
      {
        ATerm m_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_79);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = m_27;
            {
              ATerm q_27 = t;
              int r_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_79(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(r_27);
                }
              else
                {
                  t = q_27;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm g_79 (ATerm), ATerm h_79 (ATerm))
{
  t = option_wrap_4(t, g_79, default_usage_0, _id, h_79);
  return(t);
}
ATerm io_ppgen_0 (ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    t = xtc_io_1(t, ppgen_0);
    return(t);
  }
  t = option_wrap_2(t, ppgen_options_0, a_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_ppgen_0(t);
  return(t);
}
