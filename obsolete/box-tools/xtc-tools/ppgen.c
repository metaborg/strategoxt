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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_l_26;
ATerm term_p_25;
ATerm term_b_25;
ATerm term_x_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_c_24;
ATerm term_z_23;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_a_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_a_17;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_f_16;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_k_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_j_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_j_9;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_s_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_o_6;
void init_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_f_8);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_s_9);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-sdf", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_a_12);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_w_12);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym__2, term_o_6, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_w_12);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_w_12);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_a_14, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__2, term_a_14, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_z_21, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_w_12);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__3, term_z_21, term_a_22, (ATerm) ATempty);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm f_75 (ATerm), ATerm g_75 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm h_59 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm p_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm n_72 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_77 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm o_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm q_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm x_70 (ATerm), ATerm y_70 (ATerm));
ATerm union_1 (ATerm, ATerm t_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm z_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm w_74 (ATerm));
ATerm assert_1 (ATerm, ATerm s_75 (ATerm));
ATerm obsolete_1 (ATerm, ATerm g_76 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm z_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm y_74 (ATerm), ATerm z_74 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm p_75 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm t_63 (ATerm), ATerm u_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm o_75 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm i_74 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm j_74 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm k_71 (ATerm), ATerm l_71 (ATerm));
ATerm crush_2 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_79 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_81 (ATerm));
ATerm Program_1 (ATerm, ATerm y_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm a_76 (ATerm));
ATerm Undefined_1 (ATerm, ATerm z_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_80 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm c_51 (ATerm), ATerm d_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_75 (ATerm));
ATerm map_1 (ATerm, ATerm w_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_52 (ATerm), ATerm m_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_81 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm m_79 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm n_79 (ATerm), ATerm o_79 (ATerm));
ATerm io_ppgen_0 (ATerm);
ATerm main_0 (ATerm);
ATerm int_to_string_0 (ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  t = SSL_int_to_string(not_null(c_0));
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
        ATerm m_6 = t;
        int n_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_1), not_null(e_1));
            ;
            LocalPopChoice(n_6);
          }
        else
          {
            t = m_6;
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
  t = term_o_6;
  {
    ATerm r_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(s_6);
      }
    else
      {
        t = r_6;
        t = term_v_6;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_2), term_v_6);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_2)), term_o_6);
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
      t = term_w_6;
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
ATerm xtc_transform_term_2 (ATerm t, ATerm f_75 (ATerm), ATerm g_75 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, f_75, g_75);
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
ATerm fork_and_wait_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm d_5 = NULL;
  ATerm f_5 = NULL;
  d_5 = t;
  {
    t = fork_0(t);
    {
      f_5 = t;
      {
        ATerm x_6 = t;
        int b_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_5 = NULL;
            h_5 = t;
            z_4 :
            if(match_int(h_5, 0))
              {
                t = not_null(d_5);
                t = h_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(b_7);
          }
        else
          {
            t = x_6;
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
ATerm table_keys_0 (ATerm t)
{
  ATerm z_5 = NULL;
  z_5 = t;
  t = SSL_table_keys(not_null(z_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm f_6 = NULL;
  f_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm h_6 = NULL;
        ATerm j_6 = NULL;
        h_6 = t;
        {
          ATerm k_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), not_null(h_6));
          {
            t = table_get_0(t);
            {
              k_6 = t;
              if(((j_6 != NULL) && (j_6 != k_6)))
                _fail(k_6);
              else
                j_6 = k_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_6), not_null(j_6));
        }
        return(t);
      }
      t = map_1(t, e_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm j_7;
    j_7 = t;
    {
      ATerm p_6 = NULL;
      ATerm q_6 = NULL;
      t = term_o_6;
      {
        t = get_config_0(t);
        {
          q_6 = t;
          if(((p_6 != NULL) && (p_6 != q_6)))
            _fail(q_6);
          else
            p_6 = q_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_6), term_k_7);
        t = geq_0(t);
      }
    }
    t = j_7;
    t = p_59(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm l_7;
  l_7 = t;
  {
    ATerm t_6 = NULL;
    ATerm u_6 = NULL;
    u_6 = t;
    if(((t_6 != NULL) && (t_6 != u_6)))
      _fail(u_6);
    else
      t_6 = u_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_7, not_null(t_6));
      t = printnl_0(t);
    }
  }
  t = l_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm a_7 = NULL;
  ATerm c_7 = NULL,d_7 = NULL;
  a_7 = t;
  {
    ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_7)));
    {
      t = table_get_0(t);
      {
        e_7 = t;
        y_6 :
        if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
          {
            f_7 = ATgetFirst((ATermList) e_7);
            i_7 = (ATerm) ATgetNext((ATermList) e_7);
            z_6 :
            if(match_cons(f_7, sym__2))
              {
                g_7 = ATgetArgument(f_7, 0);
                h_7 = ATgetArgument(f_7, 1);
                {
                  if(((c_7 != NULL) && (c_7 != g_7)))
                    _fail(g_7);
                  else
                    c_7 = g_7;
                  if(((d_7 != NULL) && (d_7 != h_7)))
                    _fail(h_7);
                  else
                    d_7 = h_7;
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
    t = not_null(d_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym__2))
    {
      q_7 = ATgetArgument(p_7, 0);
      r_7 = ATgetArgument(p_7, 1);
      {
        ATerm u_7 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(q_7)));
        {
          t = table_get_0(t);
          {
            ATerm p_0 (ATerm t)
            {
              ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
              v_7 = t;
              n_7 :
              if(match_cons(v_7, sym__2))
                {
                  w_7 = ATgetArgument(v_7, 0);
                  x_7 = ATgetArgument(v_7, 1);
                  {
                    if(((r_7 != NULL) && (r_7 != w_7)))
                      _fail(w_7);
                    else
                      r_7 = w_7;
                    if(((u_7 != NULL) && (u_7 != x_7)))
                      _fail(x_7);
                    else
                      u_7 = x_7;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, p_0);
          }
        }
        t = not_null(u_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm t_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = t_7;
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              t = filter_1(t, n_72);
              return(t);
            }
            t = Cons_2(t, n_72, q_0);
            ;
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            {
              ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
              c_8 = t;
              b_8 :
              if(((ATgetType(c_8) == AT_LIST) && !(ATisEmpty(c_8))))
                {
                  d_8 = ATgetFirst((ATermList) c_8);
                  e_8 = (ATerm) ATgetNext((ATermList) c_8);
                  {
                    t = not_null(e_8);
                    t = filter_1(t, n_72);
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
ATerm repeat_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm h_8 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      t = x_77(t);
      t = h_8(t);
      return(t);
    }
    t = try_1(t, r_0);
    return(t);
  }
  t = h_8(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = term_g_8;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm i_8 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_8;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, s_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm l_8;
    l_8 = t;
    {
      ATerm j_8 = NULL;
      ATerm k_8 = NULL;
      t = term_o_6;
      {
        t = get_config_0(t);
        {
          k_8 = t;
          if(((j_8 != NULL) && (j_8 != k_8)))
            _fail(k_8);
          else
            j_8 = k_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_8), term_m_8);
        t = geq_0(t);
      }
    }
    t = l_8;
    t = o_59(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm p_8;
    p_8 = t;
    {
      ATerm n_8 = NULL;
      ATerm o_8 = NULL;
      t = term_o_6;
      {
        t = get_config_0(t);
        {
          o_8 = t;
          if(((n_8 != NULL) && (n_8 != o_8)))
            _fail(o_8);
          else
            n_8 = o_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_8), term_q_8);
        t = geq_0(t);
      }
    }
    t = p_8;
    t = q_59(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  r_8 :
  if(match_cons(s_8, sym__2))
    {
      t_8 = ATgetArgument(s_8, 0);
      u_8 = ATgetArgument(s_8, 1);
      if(((t_8 != NULL) && (t_8 != u_8)))
        _fail(u_8);
      else
        t_8 = u_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm))
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  a_9 = t;
  z_8 :
  if(((ATgetType(a_9) == AT_LIST) && !(ATisEmpty(a_9))))
    {
      b_9 = ATgetFirst((ATermList) a_9);
      c_9 = (ATerm) ATgetNext((ATermList) a_9);
      {
        t = y_70(t);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm f_9 = NULL;
            f_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_9), not_null(f_9));
              t = x_70(t);
            }
            return(t);
          }
          t = fetch_1(t, v_0);
        }
        t = not_null(c_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm t_70 (ATerm))
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
  l_9 = t;
  k_9 :
  if(match_cons(l_9, sym__2))
    {
      m_9 = ATgetArgument(l_9, 0);
      n_9 = ATgetArgument(l_9, 1);
      {
        t = not_null(m_9);
        {
          ATerm r_9 (ATerm t)
          {
            ATerm v_8 = t;
            int w_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(n_9);
                ;
                LocalPopChoice(w_8);
              }
            else
              {
                t = v_8;
                {
                  ATerm x_8 = t;
                  int y_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_0 (ATerm t)
                      {
                        t = not_null(n_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_70, w_0);
                      t = r_9(t);
                      ;
                      LocalPopChoice(y_8);
                    }
                  else
                    {
                      t = x_8;
                      t = Cons_2(t, _id, r_9);
                    }
                }
              }
            return(t);
          }
          t = r_9(t);
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
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  w_9 = t;
  v_9 :
  if(match_cons(w_9, sym__3))
    {
      x_9 = ATgetArgument(w_9, 0);
      y_9 = ATgetArgument(w_9, 1);
      z_9 = ATgetArgument(w_9, 2);
      {
        ATerm d_9;
        d_9 = t;
        {
          ATerm d_10 = NULL;
          ATerm e_10 = NULL,g_10 = NULL;
          ATerm f_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(y_9));
          {
            ATerm e_9 = t;
            int g_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(g_9);
              }
            else
              {
                t = e_9;
                t = (ATerm) ATempty;
              }
            {
              f_10 = t;
              if(((e_10 != NULL) && (e_10 != f_10)))
                _fail(f_10);
              else
                e_10 = f_10;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), not_null(z_9));
            {
              t = union_0(t);
              {
                g_10 = t;
                if(((d_10 != NULL) && (d_10 != g_10)))
                  _fail(g_10);
                else
                  d_10 = g_10;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_9), not_null(y_9), not_null(d_10));
            t = set_0(t);
          }
        }
        t = d_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym__2))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      {
        t = not_null(q_10);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
            t_10 = t;
            m_10 :
            if(match_cons(t_10, sym__2))
              {
                u_10 = ATgetArgument(t_10, 0);
                v_10 = ATgetArgument(t_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_10), not_null(u_10), not_null(v_10));
                  t = z_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, x_0);
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
  ATerm b_11 = NULL;
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_11 = NULL;
      c_11 = t;
      {
        if(((b_11 != NULL) && (b_11 != c_11)))
          _fail(c_11);
        else
          b_11 = c_11;
        t = SSL_ReadFromFile(not_null(b_11));
      }
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm z_0 (ATerm t)
        {
          t = term_j_9;
          return(t);
        }
        t = debug_1(t, z_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm i_11 = NULL;
  g_11 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm b_1 (ATerm t)
      {
        t = term_o_9;
        return(t);
      }
      t = debug_1(t, b_1);
      return(t);
    }
    t = if_verbose5_1(t, a_1);
    {
      ATerm p_9 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(g_11)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_9;
        }
      {
        ATerm q_9;
        q_9 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_7, term_s_9, (ATerm) ATinsert(ATempty, not_null(g_11)));
          t = table_put_0(t);
        }
        t = q_9;
        {
          ATerm f_1 (ATerm t)
          {
            ATerm g_1 (ATerm t)
            {
              t = term_t_9;
              return(t);
            }
            t = debug_1(t, g_1);
            return(t);
          }
          t = if_verbose4_1(t, f_1);
          {
            ATerm u_9 = t;
            int a_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(a_10);
              }
            else
              {
                t = u_9;
                t = (ATerm) ATempty;
              }
            {
              ATerm h_1 (ATerm t)
              {
                ATerm i_1 (ATerm t)
                {
                  t = term_b_10;
                  return(t);
                }
                t = say_1(t, i_1);
                return(t);
              }
              t = if_verbose6_1(t, h_1);
              {
                ATerm j_11 = NULL;
                j_11 = t;
                if(((i_11 != NULL) && (i_11 != j_11)))
                  _fail(j_11);
                else
                  i_11 = j_11;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_7, not_null(i_11));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm j_1 (ATerm t)
                      {
                        ATerm k_1 (ATerm t)
                        {
                          t = term_c_10;
                          return(t);
                        }
                        t = say_1(t, k_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, j_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_s_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(g_11)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm m_1 (ATerm t)
                              {
                                t = term_b_10;
                                return(t);
                              }
                              t = say_1(t, m_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, l_1);
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
  ATerm n_11 = NULL;
  n_11 = t;
  t = SSL_getenv(not_null(n_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_10;
            t = getenv_0(t);
            ;
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      t = term_s_10;
      return(t);
    }
    t = debug_1(t, o_1);
    return(t);
  }
  t = if_verbose5_1(t, n_1);
  {
    ATerm w_10;
    w_10 = t;
    {
      ATerm x_10 = t;
      int y_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_z_10;
          t = table_get_0(t);
          ;
          LocalPopChoice(y_10);
        }
      else
        {
          t = x_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = w_10;
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          t = term_a_11;
          return(t);
        }
        t = debug_1(t, q_1);
        return(t);
      }
      t = if_verbose5_1(t, p_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = term_f_11;
          return(t);
        }
        t = debug_1(t, s_1);
        return(t);
      }
      t = if_verbose5_1(t, r_1);
      {
        t = xtc_load_0(t);
        {
          ATerm h_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(k_11);
            }
          else
            {
              t = h_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm t_1 (ATerm t)
            {
              ATerm u_1 (ATerm t)
              {
                t = term_f_11;
                return(t);
              }
              t = debug_1(t, u_1);
              return(t);
            }
            t = if_verbose5_1(t, t_1);
          }
        }
      }
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm r_11 = NULL;
        ATerm s_11 = NULL;
        s_11 = t;
        if(((r_11 != NULL) && (r_11 != s_11)))
          _fail(s_11);
        else
          r_11 = s_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_11), not_null(r_11)), term_l_11);
          {
            t = error_0(t);
            {
              ATerm v_1 (ATerm t)
              {
                t = term_s_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm w_1 (ATerm t)
                    {
                      t = term_o_11;
                      return(t);
                    }
                    t = debug_1(t, w_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, v_1);
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
ATerm xtc_command_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm w_11 = NULL;
  ATerm p_11;
  p_11 = t;
  {
    ATerm x_11 = NULL;
    t = w_74(t);
    {
      t = xtc_find_warning_0(t);
      {
        x_11 = t;
        if(((w_11 != NULL) && (w_11 != x_11)))
          _fail(x_11);
        else
          w_11 = x_11;
      }
    }
  }
  t = p_11;
  {
    ATerm q_11;
    q_11 = t;
    {
      ATerm y_11 = NULL;
      ATerm z_11 = NULL;
      z_11 = t;
      if(((y_11 != NULL) && (y_11 != z_11)))
        _fail(z_11);
      else
        y_11 = z_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), not_null(y_11));
        t = call_0(t);
      }
    }
    t = q_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm s_75 (ATerm))
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym__2))
    {
      i_12 = ATgetArgument(h_12, 0);
      j_12 = ATgetArgument(h_12, 1);
      {
        ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
        ATerm t_11;
        t_11 = t;
        {
          ATerm p_12 = NULL;
          ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
          t = s_75(t);
          {
            p_12 = t;
            {
              if(((m_12 != NULL) && (m_12 != p_12)))
                _fail(p_12);
              else
                m_12 = p_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(m_12), not_null(i_12), not_null(j_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm u_11 = t;
                    int v_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), term_a_12);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(v_11);
                      }
                    else
                      {
                        t = u_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      q_12 = t;
                      f_12 :
                      if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
                        {
                          r_12 = ATgetFirst((ATermList) q_12);
                          s_12 = (ATerm) ATgetNext((ATermList) q_12);
                          {
                            if(((n_12 != NULL) && (n_12 != r_12)))
                              _fail(r_12);
                            else
                              n_12 = r_12;
                            {
                              if(((o_12 != NULL) && (o_12 != s_12)))
                                _fail(s_12);
                              else
                                o_12 = s_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(m_12), term_a_12, (ATerm) ATinsert(CheckATermList(not_null(o_12)), (ATerm) ATinsert(CheckATermList(not_null(n_12)), not_null(i_12))));
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
        t = t_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm b_12;
  b_12 = t;
  {
    t = g_76(t);
    {
      ATerm x_1 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = debug_1(t, x_1);
    }
  }
  t = b_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
      c_13 = t;
      x_12 :
      if(match_cons(c_13, sym__2))
        {
          d_13 = ATgetArgument(c_13, 0);
          e_13 = ATgetArgument(c_13, 1);
          {
            if(((b_13 != NULL) && (b_13 != d_13)))
              _fail(d_13);
            else
              b_13 = d_13;
            if(((a_13 != NULL) && (a_13 != e_13)))
              _fail(e_13);
            else
              a_13 = e_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_12);
      t = SSL_open_file(not_null(b_13), not_null(a_13));
    }
  else
    {
      t = d_12;
      {
        ATerm f_13 = NULL;
        ATerm g_13 = NULL;
        ATerm y_1 (ATerm t)
        {
          t = term_k_12;
          return(t);
        }
        t = obsolete_1(t, y_1);
        {
          f_13 = t;
          {
            if(((b_13 != NULL) && (b_13 != f_13)))
              _fail(f_13);
            else
              b_13 = f_13;
            {
              ATerm l_12;
              l_12 = t;
              {
                ATerm h_13 = NULL;
                t = term_t_12;
                {
                  h_13 = t;
                  if(((g_13 != NULL) && (g_13 != h_13)))
                    _fail(h_13);
                  else
                    g_13 = h_13;
                }
              }
              t = l_12;
              t = SSL_open_file(not_null(b_13), not_null(g_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm n_13 = NULL;
  ATerm p_13 = NULL;
  n_13 = t;
  {
    ATerm u_12;
    u_12 = t;
    {
      ATerm q_13 = NULL;
      t = term_v_12;
      {
        q_13 = t;
        if(((p_13 != NULL) && (p_13 != q_13)))
          _fail(q_13);
        else
          p_13 = q_13;
      }
    }
    t = u_12;
    {
      t = SSL_open_file(not_null(n_13), not_null(p_13));
      t = SSL_close_file(not_null(n_13));
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
  ATerm u_13 = NULL;
  ATerm v_13 = NULL;
  t = term_w_12;
  {
    t = new_0(t);
    {
      v_13 = t;
      if(((u_13 != NULL) && (u_13 != v_13)))
        _fail(v_13);
      else
        u_13 = v_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_13), term_y_12);
    {
      t = conc_strings_0(t);
      {
        ATerm z_1 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, z_1);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm z_13 = NULL;
  t = new_file_0(t);
  {
    z_13 = t;
    {
      ATerm z_12;
      z_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), term_t_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), term_w_12);
            {
              ATerm b_2 (ATerm t)
              {
                t = term_i_13;
                return(t);
              }
              t = assert_1(t, b_2);
            }
          }
        }
      }
      t = z_12;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm j_14 = NULL,k_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym_stdin_0))
    {
      ATerm l_14 = NULL;
      ATerm m_14 = NULL;
      ATerm n_14 = NULL;
      t = xtc_new_file_0(t);
      {
        m_14 = t;
        {
          if(((l_14 != NULL) && (l_14 != m_14)))
            _fail(m_14);
          else
            l_14 = m_14;
          {
            ATerm o_14 = NULL;
            t = o_0(t);
            {
              o_14 = t;
              if(((n_14 != NULL) && (n_14 != o_14)))
                _fail(o_14);
              else
                n_14 = o_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_14)), term_j_13));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(l_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_14));
    }
  else
    {
      if(match_cons(j_14, sym_FILE_1))
        {
          k_14 = ATgetArgument(j_14, 0);
          {
            ATerm q_14 = NULL;
            ATerm r_14 = NULL;
            t = not_null(k_14);
            {
              ATerm s_14 = NULL;
              t = xtc_new_file_0(t);
              {
                r_14 = t;
                {
                  if(((q_14 != NULL) && (q_14 != r_14)))
                    _fail(r_14);
                  else
                    q_14 = r_14;
                  {
                    ATerm t_14 = NULL;
                    t = o_0(t);
                    {
                      t_14 = t;
                      if(((s_14 != NULL) && (s_14 != t_14)))
                        _fail(t_14);
                      else
                        s_14 = t_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_14)), term_j_13), not_null(k_14)), term_k_13));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(q_14);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_14));
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
  ATerm e_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym_stdin_0))
    {
      ATerm g_15 = NULL,i_15 = NULL;
      ATerm l_13;
      l_13 = t;
      {
        ATerm h_15 = NULL;
        t = SSLgetAnnotations(not_null(e_15));
        {
          h_15 = t;
          if(((g_15 != NULL) && (g_15 != h_15)))
            _fail(h_15);
          else
            g_15 = h_15;
        }
      }
      t = l_13;
      {
        ATerm j_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(g_15));
        {
          j_15 = t;
          if(((i_15 != NULL) && (i_15 != j_15)))
            _fail(j_15);
          else
            i_15 = j_15;
        }
        t = not_null(i_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm z_52 (ATerm))
{
  ATerm s_15 = NULL,t_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_cons(s_15, sym_FILE_1))
    {
      t_15 = ATgetArgument(s_15, 0);
      {
        ATerm w_15 = NULL,y_15 = NULL;
        ATerm x_15 = NULL;
        t = SSLgetAnnotations(not_null(s_15));
        {
          x_15 = t;
          if(((w_15 != NULL) && (w_15 != x_15)))
            _fail(x_15);
          else
            w_15 = x_15;
        }
        {
          t = not_null(t_15);
          {
            ATerm a_16 = NULL;
            t = z_52(t);
            {
              y_15 = t;
              {
                ATerm b_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(y_15)), not_null(w_15));
                {
                  b_16 = t;
                  if(((a_16 != NULL) && (a_16 != b_16)))
                    _fail(b_16);
                  else
                    a_16 = b_16;
                }
                t = not_null(a_16);
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
ATerm xtc_transform_2 (ATerm t, ATerm y_74 (ATerm), ATerm z_74 (ATerm))
{
  ATerm m_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          t = stdin_0(t);
        }
      LocalPopChoice(o_13);
      t = xtc_transform_file_2(t, y_74, z_74);
    }
  else
    {
      t = m_13;
      t = xtc_transform_term_2(t, y_74, z_74);
    }
  return(t);
}
ATerm xtc_parse_sdf_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_t_13;
    return(t);
  }
  t = xtc_transform_2(t, c_2, pass_verbose_0);
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    t = term_w_13;
    return(t);
  }
  t = xtc_transform_2(t, d_2, pass_verbose_0);
  return(t);
}
ATerm pre_process_sdf_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  j_16 :
  if(match_cons(l_16, sym__2))
    {
      m_16 = ATgetArgument(l_16, 0);
      n_16 = ATgetArgument(l_16, 1);
      k_16 :
      if(match_cons(m_16, sym_AST_0))
        {
          t = not_null(n_16);
        }
      else
        {
          if(match_cons(m_16, sym_ParseTree_0))
            {
              t = not_null(n_16);
              t = xtc_implode_asfix_0(t);
            }
          else
            {
              if(match_cons(m_16, sym_PlainText_0))
                {
                  t = not_null(n_16);
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
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_14;
      t = get_config_0(t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      t = term_b_14;
    }
  return(t);
}
ATerm ppgen_0 (ATerm t)
{
  ATerm w_16 = NULL,y_16 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    ATerm x_16 = NULL;
    t = get_input_type_0(t);
    {
      x_16 = t;
      if(((w_16 != NULL) && (w_16 != x_16)))
        _fail(x_16);
      else
        w_16 = x_16;
    }
  }
  t = c_14;
  {
    ATerm z_16 = NULL;
    z_16 = t;
    if(((y_16 != NULL) && (y_16 != z_16)))
      _fail(z_16);
    else
      y_16 = z_16;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_16), not_null(y_16));
      {
        t = pre_process_sdf_0(t);
        {
          ATerm e_2 (ATerm t)
          {
            t = term_d_14;
            return(t);
          }
          t = xtc_transform_2(t, e_2, pass_verbose_0);
          {
            ATerm f_2 (ATerm t)
            {
              t = term_e_14;
              return(t);
            }
            t = xtc_transform_2(t, f_2, pass_verbose_0);
          }
        }
      }
    }
  }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym__2))
    {
      f_17 = ATgetArgument(e_17, 0);
      g_17 = ATgetArgument(e_17, 1);
      t = SSL_copy(not_null(f_17), not_null(g_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm o_17 = NULL;
  o_17 = t;
  n_17 :
  if(match_cons(o_17, sym_stderr_0))
    {
      ATerm q_17 = NULL,s_17 = NULL;
      ATerm f_14;
      f_14 = t;
      {
        ATerm r_17 = NULL;
        t = SSLgetAnnotations(not_null(o_17));
        {
          r_17 = t;
          if(((q_17 != NULL) && (q_17 != r_17)))
            _fail(r_17);
          else
            q_17 = r_17;
        }
      }
      t = f_14;
      {
        ATerm t_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(q_17));
        {
          t_17 = t;
          if(((s_17 != NULL) && (s_17 != t_17)))
            _fail(t_17);
          else
            s_17 = t_17;
        }
        t = not_null(s_17);
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
  ATerm b_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym_stdout_0))
    {
      ATerm d_18 = NULL,f_18 = NULL;
      ATerm g_14;
      g_14 = t;
      {
        ATerm e_18 = NULL;
        t = SSLgetAnnotations(not_null(b_18));
        {
          e_18 = t;
          if(((d_18 != NULL) && (d_18 != e_18)))
            _fail(e_18);
          else
            d_18 = e_18;
        }
      }
      t = g_14;
      {
        ATerm g_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(d_18));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
        t = not_null(f_18);
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
  ATerm s_18 = NULL,t_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym_FILE_1))
    {
      t_18 = ATgetArgument(s_18, 0);
      {
        ATerm h_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_18 = NULL;
            ATerm w_18 = NULL;
            t = m_0(t);
            {
              w_18 = t;
              {
                if(((v_18 != NULL) && (v_18 != w_18)))
                  _fail(w_18);
                else
                  v_18 = w_18;
                {
                  ATerm u_14 = t;
                  int v_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(v_14);
                    }
                  else
                    {
                      t = u_14;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), not_null(v_18));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_18));
            ;
            LocalPopChoice(p_14);
          }
        else
          {
            t = h_14;
            {
              ATerm w_14 = t;
              int x_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_18 = NULL;
                  ATerm z_18 = NULL;
                  t = m_0(t);
                  {
                    z_18 = t;
                    {
                      if(((y_18 != NULL) && (y_18 != z_18)))
                        _fail(z_18);
                      else
                        y_18 = z_18;
                      {
                        ATerm y_14 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm z_14 = t;
                            int a_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(a_15);
                              }
                            else
                              {
                                t = z_14;
                                {
                                  ATerm b_15 = t;
                                  int c_15 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(c_15);
                                    }
                                  else
                                    {
                                      t = b_15;
                                      {
                                        ATerm e_19 = NULL;
                                        e_19 = t;
                                        if(((t_18 != NULL) && (t_18 != e_19)))
                                          _fail(e_19);
                                        else
                                          t_18 = e_19;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = y_14;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), not_null(y_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_18));
                  ;
                  LocalPopChoice(x_14);
                }
              else
                {
                  t = w_14;
                  {
                    ATerm g_19 = NULL;
                    t = m_0(t);
                    {
                      g_19 = t;
                      if(((t_18 != NULL) && (t_18 != g_19)))
                        _fail(g_19);
                      else
                        t_18 = g_19;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_18));
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
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  q_19 = t;
  p_19 :
  if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
    {
      r_19 = ATgetFirst((ATermList) q_19);
      s_19 = (ATerm) ATgetNext((ATermList) q_19);
      t = not_null(s_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym__2))
    {
      a_20 = ATgetArgument(z_19, 0);
      b_20 = ATgetArgument(z_19, 1);
      {
        ATerm f_15;
        f_15 = t;
        {
          ATerm j_20 = NULL;
          ATerm k_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), not_null(b_20));
          {
            ATerm k_15 = t;
            int l_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(l_15);
              }
            else
              {
                t = k_15;
                t = (ATerm) ATempty;
              }
            {
              k_20 = t;
              if(((j_20 != NULL) && (j_20 != k_20)))
                _fail(k_20);
              else
                j_20 = k_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_20), not_null(b_20), not_null(j_20));
            t = table_put_0(t);
          }
        }
        t = f_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  ATerm m_15;
  m_15 = t;
  {
    ATerm w_20 = NULL;
    ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
    t = p_75(t);
    {
      w_20 = t;
      {
        if(((v_20 != NULL) && (v_20 != w_20)))
          _fail(w_20);
        else
          v_20 = w_20;
        {
          ATerm n_15 = t;
          int o_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), term_a_12);
              t = table_get_0(t);
              ;
              LocalPopChoice(o_15);
            }
          else
            {
              t = n_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            c_21 = t;
            s_20 :
            if(((ATgetType(c_21) == AT_LIST) && !(ATisEmpty(c_21))))
              {
                d_21 = ATgetFirst((ATermList) c_21);
                e_21 = (ATerm) ATgetNext((ATermList) c_21);
                {
                  if(((u_20 != NULL) && (u_20 != d_21)))
                    _fail(d_21);
                  else
                    u_20 = d_21;
                  {
                    if(((t_20 != NULL) && (t_20 != e_21)))
                      _fail(e_21);
                    else
                      t_20 = e_21;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(v_20), term_a_12, not_null(t_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(u_20);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm f_21 = NULL;
                              f_21 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), not_null(f_21));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, g_2);
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
  t = m_15;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  t = SSL_remove(not_null(l_21));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm t_63 (ATerm), ATerm u_63 (ATerm))
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_63(t);
      t = u_63(t);
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      {
        t = u_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm q_21 = NULL;
  ATerm u_15;
  u_15 = t;
  {
    ATerm r_21 = NULL;
    ATerm x_21 = NULL;
    t = o_75(t);
    {
      r_21 = t;
      {
        if(((q_21 != NULL) && (q_21 != r_21)))
          _fail(r_21);
        else
          q_21 = r_21;
        {
          ATerm y_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_21), term_a_12);
          {
            ATerm v_15 = t;
            int z_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(z_15);
              }
            else
              {
                t = v_15;
                t = (ATerm) ATempty;
              }
            {
              y_21 = t;
              if(((x_21 != NULL) && (x_21 != y_21)))
                _fail(y_21);
              else
                x_21 = y_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_21), term_a_12, (ATerm) ATinsert(CheckATermList(not_null(x_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = u_15;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm i_74 (ATerm))
{
  ATerm o_22 = NULL,p_22 = NULL;
  ATerm h_2 (ATerm t)
  {
    t = term_i_13;
    return(t);
  }
  t = begin_scope_1(t, h_2);
  {
    ATerm i_2 (ATerm t)
    {
      ATerm c_16;
      c_16 = t;
      {
        ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_16;
            t = table_get_0(t);
            ;
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          r_22 = t;
          g_22 :
          if(((ATgetType(r_22) == AT_LIST) && !(ATisEmpty(r_22))))
            {
              s_22 = ATgetFirst((ATermList) r_22);
              t_22 = (ATerm) ATgetNext((ATermList) r_22);
              {
                if(((p_22 != NULL) && (p_22 != s_22)))
                  _fail(s_22);
                else
                  p_22 = s_22;
                {
                  if(((o_22 != NULL) && (o_22 != t_22)))
                    _fail(t_22);
                  else
                    o_22 = t_22;
                  {
                    t = not_null(p_22);
                    {
                      ATerm j_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, j_2);
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
      t = c_16;
      {
        ATerm k_2 (ATerm t)
        {
          t = term_i_13;
          return(t);
        }
        t = end_scope_1(t, k_2);
      }
      return(t);
    }
    t = restore_always_2(t, i_74, i_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm l_2 (ATerm t)
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_22 = NULL;
        ATerm y_22 = NULL;
        t = term_k_13;
        {
          t = get_config_0(t);
          {
            y_22 = t;
            if(((x_22 != NULL) && (x_22 != y_22)))
              _fail(y_22);
            else
              x_22 = y_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_22));
        ;
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        t = term_w_6;
      }
    {
      t = j_74(t);
      {
        ATerm m_2 (ATerm t)
        {
          ATerm i_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_j_13;
              t = get_config_0(t);
              ;
              LocalPopChoice(o_16);
            }
          else
            {
              t = i_16;
              t = term_p_16;
            }
          return(t);
        }
        t = copy_to_1(t, m_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, l_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm b_23 = NULL;
    b_23 = t;
    a_23 :
    if(!(match_string(b_23, "-v")))
      {
        if(!(match_string(b_23, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_r_16;
    t = set_config_0(t);
    t = term_s_16;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_t_16;
    return(t);
  }
  t = Option_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm e_23 = NULL;
    e_23 = t;
    c_23 :
    if(!(match_string(e_23, "-k")))
      {
        if(!(match_string(e_23, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm u_16;
    u_16 = t;
    {
      ATerm f_23 = NULL;
      ATerm g_23 = NULL;
      t = string_to_int_0(t);
      {
        g_23 = t;
        if(((f_23 != NULL) && (f_23 != g_23)))
          _fail(g_23);
        else
          f_23 = g_23;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_16, not_null(f_23));
        t = set_config_0(t);
      }
    }
    t = u_16;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, v_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm j_23 = NULL;
  j_23 = t;
  t = SSL_string_to_int(not_null(j_23));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 (ATerm t)
      {
        ATerm r_23 = NULL;
        r_23 = t;
        m_23 :
        if(!(match_string(r_23, "-S")))
          {
            if(!(match_string(r_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_i_17;
        t = set_config_0(t);
        t = term_j_17;
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_k_17;
        return(t);
      }
      t = Option_3(t, w_2, x_2, y_2);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              ATerm s_23 = NULL;
              s_23 = t;
              n_23 :
              if(!(match_string(s_23, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              ATerm v_23 = NULL;
              ATerm p_17;
              p_17 = t;
              {
                ATerm t_23 = NULL;
                ATerm u_23 = NULL;
                t = string_to_int_0(t);
                {
                  u_23 = t;
                  if(((t_23 != NULL) && (t_23 != u_23)))
                    _fail(u_23);
                  else
                    t_23 = u_23;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_6, not_null(t_23));
                  t = set_config_0(t);
                }
              }
              t = p_17;
              {
                ATerm w_23 = NULL;
                w_23 = t;
                if(((v_23 != NULL) && (v_23 != w_23)))
                  _fail(w_23);
                else
                  v_23 = w_23;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(v_23));
              }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              t = term_u_17;
              return(t);
            }
            t = ArgOption_3(t, z_2, a_3, b_3);
            ;
            LocalPopChoice(m_17);
          }
        else
          {
            t = l_17;
            {
              ATerm c_3 (ATerm t)
              {
                ATerm x_23 = NULL;
                x_23 = t;
                q_23 :
                if(!(match_string(x_23, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                t = term_w_17;
                t = set_config_0(t);
                t = term_x_17;
                return(t);
              }
              ATerm j_3 (ATerm t)
              {
                t = term_y_17;
                return(t);
              }
              t = Option_3(t, c_3, d_3, j_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm z_17 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = z_17;
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
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
    ATerm d_24 = NULL;
    d_24 = t;
    a_24 :
    if(!(match_string(d_24, "-o")))
      {
        if(!(match_string(d_24, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm l_24 = NULL;
    ATerm j_18;
    j_18 = t;
    {
      ATerm j_24 = NULL;
      ATerm k_24 = NULL;
      k_24 = t;
      if(((j_24 != NULL) && (j_24 != k_24)))
        _fail(k_24);
      else
        j_24 = k_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(j_24));
        t = set_config_0(t);
      }
    }
    t = j_18;
    {
      ATerm m_24 = NULL;
      m_24 = t;
      if(((l_24 != NULL) && (l_24 != m_24)))
        _fail(m_24);
      else
        l_24 = m_24;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_24));
    }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_k_18;
    return(t);
  }
  t = ArgOption_3(t, m_3, n_3, o_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      {
        ATerm p_3 (ATerm t)
        {
          ATerm q_24 = NULL;
          q_24 = t;
          p_24 :
          if(!(match_string(q_24, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = term_o_18;
          t = set_config_0(t);
          t = term_p_18;
          return(t);
        }
        ATerm v_3 (ATerm t)
        {
          t = term_q_18;
          return(t);
        }
        t = Option_3(t, p_3, q_3, v_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm w_24 = NULL,a_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  w_24 = t;
  u_24 :
  if(match_string(w_24, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_24) == AT_LIST) && !(ATisEmpty(w_24))))
        {
          a_25 = ATgetFirst((ATermList) w_24);
          c_25 = (ATerm) ATgetNext((ATermList) w_24);
          v_24 :
          if(((ATgetType(c_25) == AT_LIST) && !(ATisEmpty(c_25))))
            {
              d_25 = ATgetFirst((ATermList) c_25);
              e_25 = (ATerm) ATgetNext((ATermList) c_25);
              {
                ATerm i_25 = NULL;
                ATerm u_18;
                u_18 = t;
                {
                  t = not_null(a_25);
                  t = j_0(t);
                }
                t = u_18;
                {
                  ATerm j_25 = NULL;
                  t = not_null(d_25);
                  {
                    t = k_0(t);
                    {
                      j_25 = t;
                      if(((i_25 != NULL) && (i_25 != j_25)))
                        _fail(j_25);
                      else
                        i_25 = j_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_25)), not_null(i_25));
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
  ATerm w_3 (ATerm t)
  {
    ATerm q_25 = NULL;
    q_25 = t;
    n_25 :
    if(!(match_string(q_25, "-i")))
      {
        if(!(match_string(q_25, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm t_25 = NULL;
    ATerm x_18;
    x_18 = t;
    {
      ATerm r_25 = NULL;
      ATerm s_25 = NULL;
      s_25 = t;
      if(((r_25 != NULL) && (r_25 != s_25)))
        _fail(s_25);
      else
        r_25 = s_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_13, not_null(r_25));
        t = set_config_0(t);
      }
    }
    t = x_18;
    {
      ATerm u_25 = NULL;
      u_25 = t;
      if(((t_25 != NULL) && (t_25 != u_25)))
        _fail(u_25);
      else
        t_25 = u_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_25));
    }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_a_19;
    return(t);
  }
  t = ArgOption_3(t, w_3, x_3, y_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
        ATerm d_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(f_19);
          }
        else
          {
            t = d_19;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm ppgen_options_0 (ATerm t)
{
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 (ATerm t)
      {
        ATerm z_25 = NULL;
        z_25 = t;
        x_25 :
        if(!(match_string(z_25, "-A")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        ATerm j_19;
        j_19 = t;
        {
          t = term_l_19;
          t = set_config_0(t);
        }
        t = j_19;
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_m_19;
        return(t);
      }
      t = Option_3(t, z_3, b_4, e_4);
      ;
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 (ATerm t)
            {
              ATerm a_26 = NULL;
              a_26 = t;
              y_25 :
              if(!(match_string(a_26, "-a")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              ATerm t_19;
              t_19 = t;
              {
                t = term_v_19;
                t = set_config_0(t);
              }
              t = t_19;
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              t = term_w_19;
              return(t);
            }
            t = Option_3(t, f_4, g_4, i_4);
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            t = io_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm d_26 = NULL;
  ATerm x_19;
  x_19 = t;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm e_26 = NULL,f_26 = NULL;
      e_26 = t;
      c_26 :
      if(match_cons(e_26, sym_Program_1))
        {
          f_26 = ATgetArgument(e_26, 0);
          if(((d_26 != NULL) && (d_26 != f_26)))
            _fail(f_26);
          else
            d_26 = f_26;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_20), not_null(d_26)), term_c_20));
      {
        t = printnl_0(t);
        {
          t = term_v_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATempty, term_e_20));
  {
    t = printnl_0(t);
    {
      t = term_v_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  t = SSL_TicksToSeconds(not_null(i_26));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym__2))
    {
      o_26 = ATgetArgument(n_26, 0);
      p_26 = ATgetArgument(n_26, 1);
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_26), not_null(p_26));
            ;
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            t = SSL_addr(not_null(o_26), not_null(p_26));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_71 (ATerm), ATerm l_71 (ATerm))
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_71(t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
        w_26 = t;
        v_26 :
        if(((ATgetType(w_26) == AT_LIST) && !(ATisEmpty(w_26))))
          {
            x_26 = ATgetFirst((ATermList) w_26);
            y_26 = (ATerm) ATgetNext((ATermList) w_26);
            {
              ATerm b_27 = NULL;
              ATerm c_27 = NULL;
              t = not_null(y_26);
              {
                t = foldr_2(t, k_71, l_71);
                {
                  c_27 = t;
                  if(((b_27 != NULL) && (b_27 != c_27)))
                    _fail(c_27);
                  else
                    b_27 = c_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_26), not_null(b_27));
                t = l_71(t);
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
ATerm crush_2 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm))
{
  ATerm j_27 = NULL;
  ATerm l_27 = NULL;
  j_27 = t;
  {
    ATerm m_27 = NULL;
    ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
    t = not_null(j_27);
    {
      m_27 = t;
      {
        t = SSL_explode_term(not_null(m_27));
        {
          o_27 = t;
          i_27 :
          if(match_cons(o_27, sym__2))
            {
              p_27 = ATgetArgument(o_27, 0);
              q_27 = ATgetArgument(o_27, 1);
              if(((l_27 != NULL) && (l_27 != q_27)))
                _fail(q_27);
              else
                l_27 = q_27;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_27);
      t = foldr_2(t, i_70, j_70);
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
    ATerm k_4 (ATerm t)
    {
      t = term_h_17;
      return(t);
    }
    t = crush_2(t, k_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym__2))
    {
      x_27 = ATgetArgument(w_27, 0);
      y_27 = ATgetArgument(w_27, 1);
      {
        ATerm l_20;
        l_20 = t;
        {
          ATerm m_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_27), not_null(y_27));
              ;
              LocalPopChoice(n_20);
            }
          else
            {
              t = m_20;
              t = SSL_gtr(not_null(x_27), not_null(y_27));
            }
        }
        t = l_20;
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
  ATerm e_28 = NULL;
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
      f_28 = t;
      d_28 :
      if(match_cons(f_28, sym__2))
        {
          g_28 = ATgetArgument(f_28, 0);
          h_28 = ATgetArgument(f_28, 1);
          {
            if(((e_28 != NULL) && (e_28 != g_28)))
              _fail(g_28);
            else
              e_28 = g_28;
            if(((e_28 != NULL) && (e_28 != h_28)))
              _fail(h_28);
            else
              e_28 = h_28;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm q_20;
    q_20 = t;
    {
      ATerm k_28 = NULL;
      ATerm l_28 = NULL;
      t = term_o_6;
      {
        t = get_config_0(t);
        {
          l_28 = t;
          if(((k_28 != NULL) && (k_28 != l_28)))
            _fail(l_28);
          else
            k_28 = l_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_28), term_v_6);
        t = geq_0(t);
      }
    }
    t = q_20;
    t = l_59(t);
    return(t);
  }
  t = try_1(t, p_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm p_28 = NULL,r_28 = NULL;
    ATerm r_20;
    r_20 = t;
    {
      ATerm q_28 = NULL;
      t = run_time_0(t);
      {
        q_28 = t;
        if(((p_28 != NULL) && (p_28 != q_28)))
          _fail(q_28);
        else
          p_28 = q_28;
      }
    }
    t = r_20;
    {
      ATerm s_28 = NULL;
      t = term_x_20;
      {
        t = get_config_0(t);
        {
          s_28 = t;
          if(((r_28 != NULL) && (r_28 != s_28)))
            _fail(s_28);
          else
            r_28 = s_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_20), not_null(p_28)), term_y_20), not_null(r_28)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_4);
  {
    t = term_h_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  y_28 :
  if(match_cons(z_28, sym_Version_0))
    {
      ATerm b_29 = NULL,d_29 = NULL;
      ATerm a_21;
      a_21 = t;
      {
        ATerm c_29 = NULL;
        t = SSLgetAnnotations(not_null(z_28));
        {
          c_29 = t;
          if(((b_29 != NULL) && (b_29 != c_29)))
            _fail(c_29);
          else
            b_29 = c_29;
        }
      }
      t = a_21;
      {
        ATerm e_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_29));
        {
          e_29 = t;
          if(((d_29 != NULL) && (d_29 != e_29)))
            _fail(e_29);
          else
            d_29 = e_29;
        }
        t = not_null(d_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm b_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = b_21;
        {
          ATerm h_21 = t;
          int i_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(i_21);
            }
          else
            {
              t = h_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, r_4);
  t = d_79(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  t = SSL_table_create(not_null(j_29));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  {
    ATerm j_21;
    j_21 = t;
    {
      t = term_k_21;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_21, term_m_21, not_null(o_29));
          t = table_put_0(t);
        }
      }
    }
    t = j_21;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  t = SSL_table_destroy(not_null(s_29));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  t = SSL_exit(not_null(b_30));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  f_30 = t;
  e_30 :
  if(((ATgetType(f_30) == AT_LIST) && ATisEmpty(f_30)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(f_30) == AT_LIST) && !(ATisEmpty(f_30))))
        {
          g_30 = ATgetFirst((ATermList) f_30);
          h_30 = (ATerm) ATgetNext((ATermList) f_30);
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
  ATerm n_21;
  n_21 = t;
  {
    ATerm k_30 = NULL;
    ATerm n_30 = NULL;
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
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
      t = (ATerm) ATmakeAppl(sym__2, term_p_16, not_null(k_30));
      t = printnl_0(t);
    }
  }
  t = n_21;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
  a_31 = t;
  x_30 :
  if(((ATgetType(a_31) == AT_LIST) && !(ATisEmpty(a_31))))
    {
      y_30 = ATgetFirst((ATermList) a_31);
      z_30 = (ATerm) ATgetNext((ATermList) a_31);
      {
        ATerm d_31 = NULL;
        t = not_null(z_30);
        {
          ATerm s_21;
          s_21 = t;
          {
            ATerm e_31 = NULL,g_31 = NULL,i_31 = NULL;
            ATerm t_21;
            t_21 = t;
            {
              ATerm f_31 = NULL;
              t = i_0(t);
              {
                f_31 = t;
                if(((e_31 != NULL) && (e_31 != f_31)))
                  _fail(f_31);
                else
                  e_31 = f_31;
              }
            }
            t = t_21;
            {
              ATerm h_31 = NULL;
              t = not_null(y_30);
              {
                t = h_0(t);
                {
                  h_31 = t;
                  if(((g_31 != NULL) && (g_31 != h_31)))
                    _fail(h_31);
                  else
                    g_31 = h_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_31)), not_null(g_31));
                {
                  i_31 = t;
                  if(((d_31 != NULL) && (d_31 != i_31)))
                    _fail(i_31);
                  else
                    d_31 = i_31;
                }
              }
            }
          }
          t = s_21;
          {
            ATerm s_4 (ATerm t)
            {
              t = not_null(d_31);
              return(t);
            }
            t = reverse_acc_2(t, h_0, s_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_31) == AT_LIST) && ATisEmpty(a_31)))
        {
          {
            t = term_w_12;
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
  ATerm u_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm t_31 = NULL,u_31 = NULL;
  t_31 = t;
  s_31 :
  if(match_cons(t_31, sym_Program_1))
    {
      u_31 = ATgetArgument(t_31, 0);
      {
        ATerm x_31 = NULL,z_31 = NULL;
        ATerm y_31 = NULL;
        t = SSLgetAnnotations(not_null(t_31));
        {
          y_31 = t;
          if(((x_31 != NULL) && (x_31 != y_31)))
            _fail(y_31);
          else
            x_31 = y_31;
        }
        {
          t = not_null(u_31);
          {
            ATerm b_32 = NULL;
            t = y_57(t);
            {
              z_31 = t;
              {
                ATerm c_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_31)), not_null(x_31));
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
  ATerm s_32 = NULL;
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_32 = NULL;
      t = term_x_20;
      {
        t = get_config_0(t);
        {
          t_32 = t;
          if(((s_32 != NULL) && (s_32 != t_32)))
            _fail(t_32);
          else
            s_32 = t_32;
        }
      }
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      {
        ATerm v_4 (ATerm t)
        {
          ATerm w_4 (ATerm t)
          {
            ATerm u_32 = NULL;
            u_32 = t;
            if(((s_32 != NULL) && (s_32 != u_32)))
              _fail(u_32);
            else
              s_32 = u_32;
            return(t);
          }
          t = Program_1(t, w_4);
          return(t);
        }
        t = option_defined_1(t, v_4);
      }
    }
  {
    ATerm x_4 (ATerm t)
    {
      ATerm y_4 (ATerm t)
      {
        t = not_null(s_32);
        return(t);
      }
      t = short_description_1(t, y_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, x_4);
    {
      t = term_w_21;
      {
        t = echo_0(t);
        {
          t = term_b_22;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm v_32 = NULL;
                  ATerm y_32 = NULL;
                  y_32 = t;
                  if(((v_32 != NULL) && (v_32 != y_32)))
                    _fail(y_32);
                  else
                    v_32 = y_32;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_32)), term_c_22);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_5);
                {
                  ATerm e_5 (ATerm t)
                  {
                    ATerm z_32 = NULL;
                    ATerm a_33 = NULL;
                    ATerm g_5 (ATerm t)
                    {
                      t = not_null(s_32);
                      return(t);
                    }
                    t = long_description_1(t, g_5);
                    {
                      a_33 = t;
                      if(((z_32 != NULL) && (z_32 != a_33)))
                        _fail(a_33);
                      else
                        z_32 = a_33;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_32)), term_d_22);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_5);
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
  ATerm e_22;
  e_22 = t;
  {
    ATerm i_33 = NULL;
    ATerm j_33 = NULL;
    j_33 = t;
    if(((i_33 != NULL) && (i_33 != j_33)))
      _fail(j_33);
    else
      i_33 = j_33;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATempty, not_null(i_33)));
      t = printnl_0(t);
    }
  }
  t = e_22;
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_76 (ATerm))
{
  ATerm f_22;
  f_22 = t;
  {
    t = a_76(t);
    t = debug_0(t);
  }
  t = f_22;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm q_33 = NULL,b_34 = NULL;
  q_33 = t;
  p_33 :
  if(match_cons(q_33, sym_Undefined_1))
    {
      b_34 = ATgetArgument(q_33, 0);
      {
        ATerm e_34 = NULL,j_34 = NULL;
        ATerm g_34 = NULL;
        t = SSLgetAnnotations(not_null(q_33));
        {
          g_34 = t;
          if(((e_34 != NULL) && (e_34 != g_34)))
            _fail(g_34);
          else
            e_34 = g_34;
        }
        {
          t = not_null(b_34);
          {
            ATerm l_34 = NULL;
            t = z_57(t);
            {
              j_34 = t;
              {
                ATerm n_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_34)), not_null(e_34));
                {
                  n_34 = t;
                  if(((l_34 != NULL) && (l_34 != n_34)))
                    _fail(n_34);
                  else
                    l_34 = n_34;
                }
                t = not_null(l_34);
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
ATerm fetch_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm f_35 (ATerm t)
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_65, _id);
        ;
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = Cons_2(t, _id, f_35);
      }
    return(t);
  }
  t = f_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_80 (ATerm))
{
  t = fetch_1(t, k_80);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  n_35 :
  if(match_cons(o_35, sym_Help_0))
    {
      ATerm s_35 = NULL,u_35 = NULL;
      ATerm j_22;
      j_22 = t;
      {
        ATerm t_35 = NULL;
        t = SSLgetAnnotations(not_null(o_35));
        {
          t_35 = t;
          if(((s_35 != NULL) && (s_35 != t_35)))
            _fail(t_35);
          else
            s_35 = t_35;
        }
      }
      t = j_22;
      {
        ATerm v_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_35));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  t = SSL_implode_string(not_null(d_36));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
        i_36 = t;
        h_36 :
        if(((ATgetType(i_36) == AT_LIST) && !(ATisEmpty(i_36))))
          {
            j_36 = ATgetFirst((ATermList) i_36);
            k_36 = (ATerm) ATgetNext((ATermList) i_36);
            {
              t = not_null(j_36);
              {
                ATerm m_5 (ATerm t)
                {
                  t = not_null(k_36);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, m_5);
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
  ATerm u_36 = NULL;
  ATerm w_36 = NULL;
  u_36 = t;
  {
    ATerm x_36 = NULL;
    ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
    t = not_null(u_36);
    {
      x_36 = t;
      {
        t = SSL_explode_term(not_null(x_36));
        {
          z_36 = t;
          s_36 :
          if(match_cons(z_36, sym__2))
            {
              a_37 = ATgetArgument(z_36, 0);
              b_37 = ATgetArgument(z_36, 1);
              t_36 :
              if(match_string(a_37, ""))
                {
                  if(((w_36 != NULL) && (w_36 != b_37)))
                    _fail(b_37);
                  else
                    w_36 = b_37;
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
      t = not_null(w_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm f_37 (ATerm t)
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_37);
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          t = Nil_0(t);
          t = l_65(t);
        }
      }
    return(t);
  }
  t = f_37(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
  i_37 = t;
  h_37 :
  if(match_cons(i_37, sym__2))
    {
      j_37 = ATgetArgument(i_37, 0);
      k_37 = ATgetArgument(i_37, 1);
      {
        t = not_null(j_37);
        {
          ATerm n_5 (ATerm t)
          {
            t = not_null(k_37);
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
  ATerm q_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = q_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm p_37 = NULL;
  p_37 = t;
  t = SSL_explode_string(not_null(p_37));
  return(t);
}
ATerm _2 (ATerm t, ATerm c_51 (ATerm), ATerm d_51 (ATerm))
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym__2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      {
        ATerm e_38 = NULL,g_38 = NULL;
        ATerm f_38 = NULL;
        t = SSLgetAnnotations(not_null(y_37));
        {
          f_38 = t;
          if(((e_38 != NULL) && (e_38 != f_38)))
            _fail(f_38);
          else
            e_38 = f_38;
        }
        {
          t = not_null(z_37);
          {
            ATerm i_38 = NULL;
            t = c_51(t);
            {
              g_38 = t;
              {
                t = not_null(a_38);
                {
                  ATerm k_38 = NULL;
                  t = d_51(t);
                  {
                    i_38 = t;
                    {
                      ATerm l_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_38), not_null(i_38)), not_null(e_38));
                      {
                        l_38 = t;
                        if(((k_38 != NULL) && (k_38 != l_38)))
                          _fail(l_38);
                        else
                          k_38 = l_38;
                      }
                      t = not_null(k_38);
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
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
  t_38 = t;
  s_38 :
  if(match_cons(t_38, sym__2))
    {
      u_38 = ATgetArgument(t_38, 0);
      v_38 = ATgetArgument(t_38, 1);
      {
        ATerm v_22;
        v_22 = t;
        t = SSL_printnl(not_null(u_38), not_null(v_38));
        t = v_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_75 (ATerm))
{
  ATerm w_22;
  w_22 = t;
  {
    ATerm b_39 = NULL,d_39 = NULL;
    ATerm z_22;
    z_22 = t;
    {
      ATerm c_39 = NULL;
      t = z_75(t);
      {
        c_39 = t;
        if(((b_39 != NULL) && (b_39 != c_39)))
          _fail(c_39);
        else
          b_39 = c_39;
      }
    }
    t = z_22;
    {
      ATerm e_39 = NULL;
      e_39 = t;
      if(((d_39 != NULL) && (d_39 != e_39)))
        _fail(e_39);
      else
        d_39 = e_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_39)), not_null(b_39)));
        t = printnl_0(t);
      }
    }
  }
  t = w_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm h_39 (ATerm t)
  {
    ATerm d_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = d_23;
        t = Cons_2(t, w_64, h_39);
      }
    return(t);
  }
  t = h_39(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_39 = NULL;
  j_39 = t;
  t = SSL_is_string(not_null(j_39));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = i_23;
      {
        ATerm l_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_5);
            ;
            LocalPopChoice(o_23);
          }
        else
          {
            t = l_23;
            {
              ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
              s_39 = t;
              r_39 :
              if(match_cons(s_39, sym_Path_1))
                {
                  t_39 = ATgetArgument(s_39, 0);
                  t = not_null(t_39);
                }
              else
                {
                  if(match_cons(s_39, sym_Var_1))
                    {
                      t_39 = ATgetArgument(s_39, 0);
                      {
                        t = not_null(t_39);
                        {
                          ATerm p_23 = t;
                          int y_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(y_23);
                            }
                          else
                            {
                              t = p_23;
                              {
                                ATerm p_5 (ATerm t)
                                {
                                  t = term_z_23;
                                  return(t);
                                }
                                t = debug_1(t, p_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(s_39, sym_Prefix_2))
                        {
                          t_39 = ATgetArgument(s_39, 0);
                          u_39 = ATgetArgument(s_39, 1);
                          {
                            ATerm z_39 = NULL,b_40 = NULL;
                            ATerm b_24;
                            b_24 = t;
                            {
                              ATerm a_40 = NULL;
                              t = not_null(t_39);
                              {
                                t = eval_config_0(t);
                                {
                                  a_40 = t;
                                  if(((z_39 != NULL) && (z_39 != a_40)))
                                    _fail(a_40);
                                  else
                                    z_39 = a_40;
                                }
                              }
                            }
                            t = b_24;
                            {
                              ATerm c_40 = NULL;
                              t = not_null(u_39);
                              {
                                t = eval_config_0(t);
                                {
                                  c_40 = t;
                                  if(((b_40 != NULL) && (b_40 != c_40)))
                                    _fail(c_40);
                                  else
                                    b_40 = c_40;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_39), not_null(b_40));
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
  ATerm k_40 = NULL;
  k_40 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_24, not_null(k_40));
    {
      t = table_get_0(t);
      {
        ATerm q_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_24;
            e_24 = t;
            {
              ATerm m_40 = NULL;
              ATerm q_40 = NULL;
              q_40 = t;
              if(((m_40 != NULL) && (m_40 != q_40)))
                _fail(q_40);
              else
                m_40 = q_40;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_24, not_null(k_40), not_null(m_40));
                t = table_put_0(t);
              }
            }
            t = e_24;
          }
          return(t);
        }
        t = try_1(t, q_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_63 (ATerm))
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_63(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym__2))
    {
      w_40 = ATgetArgument(v_40, 0);
      x_40 = ATgetArgument(v_40, 1);
      t = SSL_table_get(not_null(w_40), not_null(x_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL;
  e_41 = t;
  d_41 :
  if(match_cons(e_41, sym__3))
    {
      f_41 = ATgetArgument(e_41, 0);
      g_41 = ATgetArgument(e_41, 1);
      h_41 = ATgetArgument(e_41, 2);
      {
        ATerm h_24;
        h_24 = t;
        {
          ATerm n_41 = NULL;
          ATerm q_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_41), not_null(g_41));
          {
            ATerm i_24 = t;
            int n_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(n_24);
              }
            else
              {
                t = i_24;
                t = (ATerm) ATempty;
              }
            {
              q_41 = t;
              if(((n_41 != NULL) && (n_41 != q_41)))
                _fail(q_41);
              else
                n_41 = q_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_41), not_null(g_41), (ATerm) ATinsert(CheckATermList(not_null(n_41)), not_null(h_41)));
            t = table_put_0(t);
          }
        }
        t = h_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_81 (ATerm))
{
  ATerm w_41 = NULL;
  ATerm x_41 = NULL;
  t = term_w_12;
  {
    t = p_81(t);
    {
      x_41 = t;
      if(((w_41 != NULL) && (w_41 != x_41)))
        _fail(x_41);
      else
        w_41 = x_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_21, term_a_22, not_null(w_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
  d_42 = t;
  c_42 :
  if(match_string(d_42, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
        {
          e_42 = ATgetFirst((ATermList) d_42);
          f_42 = (ATerm) ATgetNext((ATermList) d_42);
          {
            ATerm i_42 = NULL;
            ATerm o_24;
            o_24 = t;
            {
              t = not_null(e_42);
              t = a_0(t);
            }
            t = o_24;
            {
              ATerm j_42 = NULL;
              t = term_w_12;
              {
                t = d_0(t);
                {
                  j_42 = t;
                  if(((i_42 != NULL) && (i_42 != j_42)))
                    _fail(j_42);
                  else
                    i_42 = j_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_42)), not_null(i_42));
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
    ATerm q_42 = NULL;
    q_42 = t;
    n_42 :
    if(!(match_string(q_42, "--help")))
      {
        if(!(match_string(q_42, "-h")))
          {
            if(!(match_string(q_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_s_24;
    {
      t = set_config_0(t);
      t = term_t_24;
    }
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = term_x_24;
    return(t);
  }
  t = Option_3(t, v_5, w_5, x_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_42 = NULL,v_42 = NULL,x_42 = NULL;
  t_42 = t;
  s_42 :
  if(((ATgetType(t_42) == AT_LIST) && !(ATisEmpty(t_42))))
    {
      v_42 = ATgetFirst((ATermList) t_42);
      x_42 = (ATerm) ATgetNext((ATermList) t_42);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_42)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_52 (ATerm), ATerm m_52 (ATerm))
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL;
  h_43 = t;
  g_43 :
  if(((ATgetType(h_43) == AT_LIST) && !(ATisEmpty(h_43))))
    {
      i_43 = ATgetFirst((ATermList) h_43);
      j_43 = (ATerm) ATgetNext((ATermList) h_43);
      {
        ATerm n_43 = NULL,p_43 = NULL;
        ATerm o_43 = NULL;
        t = SSLgetAnnotations(not_null(h_43));
        {
          o_43 = t;
          if(((n_43 != NULL) && (n_43 != o_43)))
            _fail(o_43);
          else
            n_43 = o_43;
        }
        {
          t = not_null(i_43);
          {
            ATerm r_43 = NULL;
            t = l_52(t);
            {
              p_43 = t;
              {
                t = not_null(j_43);
                {
                  ATerm t_43 = NULL;
                  t = m_52(t);
                  {
                    r_43 = t;
                    {
                      ATerm u_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_43)), not_null(p_43)), not_null(n_43));
                      {
                        u_43 = t;
                        if(((t_43 != NULL) && (t_43 != u_43)))
                          _fail(u_43);
                        else
                          t_43 = u_43;
                      }
                      t = not_null(t_43);
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
  ATerm e_44 = NULL;
  e_44 = t;
  d_44 :
  if(((ATgetType(e_44) == AT_LIST) && ATisEmpty(e_44)))
    {
      {
        ATerm g_44 = NULL,i_44 = NULL;
        ATerm y_24;
        y_24 = t;
        {
          ATerm h_44 = NULL;
          t = SSLgetAnnotations(not_null(e_44));
          {
            h_44 = t;
            if(((g_44 != NULL) && (g_44 != h_44)))
              _fail(h_44);
            else
              g_44 = h_44;
          }
        }
        t = y_24;
        {
          ATerm j_44 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_44));
          {
            j_44 = t;
            if(((i_44 != NULL) && (i_44 != j_44)))
              _fail(j_44);
            else
              i_44 = j_44;
          }
          t = not_null(i_44);
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
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  p_44 = t;
  o_44 :
  if(match_cons(p_44, sym__2))
    {
      q_44 = ATgetArgument(p_44, 0);
      r_44 = ATgetArgument(p_44, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_24, not_null(q_44), not_null(r_44));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_81 (ATerm))
{
  ATerm z_24;
  z_24 = t;
  {
    ATerm y_5 (ATerm t)
    {
      t = term_b_25;
      t = n_81(t);
      return(t);
    }
    t = try_1(t, y_5);
  }
  t = z_24;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm z_44 = NULL;
      ATerm f_25;
      f_25 = t;
      {
        ATerm x_44 = NULL;
        ATerm y_44 = NULL;
        y_44 = t;
        if(((x_44 != NULL) && (x_44 != y_44)))
          _fail(y_44);
        else
          x_44 = y_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_20, not_null(x_44));
          t = set_config_0(t);
        }
      }
      t = f_25;
      {
        ATerm a_45 = NULL;
        a_45 = t;
        if(((z_44 != NULL) && (z_44 != a_45)))
          _fail(a_45);
        else
          z_44 = a_45;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_44));
      }
      return(t);
    }
    ATerm b_6 (ATerm t)
    {
      ATerm g_25 = t;
      int h_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              {
                t = n_81(t);
                t = Cons_2(t, _id, b_6);
              }
            }
          ;
          LocalPopChoice(h_25);
        }
      else
        {
          t = g_25;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_6, b_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  ATerm m_25;
  m_25 = t;
  {
    ATerm q_45 = NULL,r_45 = NULL,t_45 = NULL,u_45 = NULL;
    q_45 = t;
    l_45 :
    if(match_cons(q_45, sym__3))
      {
        r_45 = ATgetArgument(q_45, 0);
        t_45 = ATgetArgument(q_45, 1);
        u_45 = ATgetArgument(q_45, 2);
        {
          if(((n_45 != NULL) && (n_45 != r_45)))
            _fail(r_45);
          else
            n_45 = r_45;
          {
            if(((o_45 != NULL) && (o_45 != t_45)))
              _fail(t_45);
            else
              o_45 = t_45;
            {
              if(((p_45 != NULL) && (p_45 != u_45)))
                _fail(u_45);
              else
                p_45 = u_45;
              t = SSL_table_put(not_null(n_45), not_null(o_45), not_null(p_45));
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
ATerm parse_options_1 (ATerm t, ATerm m_81 (ATerm))
{
  ATerm c_46 = NULL;
  ATerm o_25;
  o_25 = t;
  {
    t = term_p_25;
    t = table_put_0(t);
  }
  t = o_25;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm v_25 = t;
      int w_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_81(t);
          ;
          LocalPopChoice(w_25);
        }
      else
        {
          t = v_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_6);
    {
      ATerm d_6 (ATerm t)
      {
        ATerm b_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_26;
            h_26 = t;
            {
              ATerm j_26 = t;
              int k_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_r_24;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(k_26);
                }
              else
                {
                  t = j_26;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = h_26;
            {
              t = system_usage_0(t);
              {
                t = term_h_17;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(g_26);
          }
        else
          {
            t = b_26;
            {
              ATerm e_6 (ATerm t)
              {
                ATerm g_6 (ATerm t)
                {
                  ATerm d_46 = NULL;
                  d_46 = t;
                  if(((c_46 != NULL) && (c_46 != d_46)))
                    _fail(d_46);
                  else
                    c_46 = d_46;
                  return(t);
                }
                t = Undefined_1(t, g_6);
                return(t);
              }
              t = option_defined_1(t, e_6);
              {
                ATerm i_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_46)), term_l_26);
                  return(t);
                }
                t = say_1(t, i_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_v_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, d_6);
      {
        ATerm q_26;
        q_26 = t;
        {
          t = term_z_21;
          t = table_destroy_0(t);
        }
        t = q_26;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm m_79 (ATerm))
{
  t = parse_options_1(t, j_79);
  {
    t = store_options_0(t);
    {
      t = l_79(t);
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_79);
            ;
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            {
              ATerm t_26 = t;
              int u_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_79(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(u_26);
                }
              else
                {
                  t = t_26;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm n_79 (ATerm), ATerm o_79 (ATerm))
{
  t = option_wrap_4(t, n_79, default_usage_0, _id, o_79);
  return(t);
}
ATerm io_ppgen_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    t = xtc_io_1(t, ppgen_0);
    return(t);
  }
  t = option_wrap_2(t, ppgen_options_0, l_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_ppgen_0(t);
  return(t);
}
