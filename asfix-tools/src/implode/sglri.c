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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Scopes_0;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_u_27;
ATerm term_f_27;
ATerm term_r_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_l_25;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_d_23;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_o_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_z_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_j_18;
ATerm term_c_18;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_i_15;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_a_13;
ATerm term_v_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_u_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_x_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_j_9;
ATerm term_c_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_r_7;
ATerm term_j_7;
ATerm term_h_7;
void init_constant_terms (void)
{
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_x_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_j_10);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_v_12);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_l_13);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_x_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_l_13);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_l_13);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym__2, term_h_23, term_l_23);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_l_13);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__3, term_h_23, term_l_23, (ATerm) ATempty);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm implode_asfix_1 (ATerm, ATerm f_58 (ATerm));
ATerm fatal_error_0 (ATerm);
ATerm get_parse_table_0 (ATerm);
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
ATerm repeat_1 (ATerm, ATerm o_80 (ATerm));
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
ATerm obsolete_1 (ATerm, ATerm x_78 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm t_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm y_74 (ATerm), ATerm z_74 (ATerm));
ATerm sglr_2 (ATerm, ATerm d_58 (ATerm), ATerm e_58 (ATerm));
ATerm parse_and_implode_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm sglri_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm o_0 (ATerm));
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
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
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
ATerm need_help_1 (ATerm, ATerm v_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm a_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_78 (ATerm));
ATerm Undefined_1 (ATerm, ATerm b_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_77 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm w_50 (ATerm), ATerm x_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_78 (ATerm));
ATerm map_1 (ATerm, ATerm w_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_52 (ATerm), ATerm g_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_78 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm f_76 (ATerm), ATerm g_76 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm sglri_0 (ATerm);
ATerm main_0 (ATerm);
ATerm implode_asfix_1 (ATerm t, ATerm f_58 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = term_h_7;
    return(t);
  }
  t = xtc_transform_2(t, b_0, f_58);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm i_7;
  i_7 = t;
  {
    t = error_0(t);
    {
      t = term_j_7;
      t = exit_0(t);
    }
  }
  t = i_7;
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_7;
      t = get_config_0(t);
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        t = (ATerm) ATinsert(ATempty, term_u_7);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL;
  e_1 = t;
  a_1 :
  if(match_cons(e_1, sym_stdin_0))
    {
      ATerm g_1 = NULL;
      ATerm k_1 = NULL;
      t = term_v_7;
      {
        t = ReadFromFile_0(t);
        {
          k_1 = t;
          if(((g_1 != NULL) && (g_1 != k_1)))
            _fail(k_1);
          else
            g_1 = k_1;
        }
      }
      t = not_null(g_1);
    }
  else
    {
      if(match_cons(e_1, sym_FILE_1))
        {
          f_1 = ATgetArgument(e_1, 0);
          {
            ATerm m_1 = NULL;
            ATerm a_2 = NULL;
            t = not_null(f_1);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  a_2 = t;
                  if(((m_1 != NULL) && (m_1 != a_2)))
                    _fail(a_2);
                  else
                    m_1 = a_2;
                }
              }
            }
            t = not_null(m_1);
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
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
  b_3 = t;
  a_3 :
  if(match_cons(b_3, sym__2))
    {
      c_3 = ATgetArgument(b_3, 0);
      d_3 = ATgetArgument(b_3, 1);
      t = SSL_WriteToBinaryFile(not_null(c_3), not_null(d_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm j_3 = NULL;
  ATerm l_3 = NULL;
  j_3 = t;
  {
    ATerm m_3 = NULL;
    t = xtc_new_file_0(t);
    {
      m_3 = t;
      {
        if(((l_3 != NULL) && (l_3 != m_3)))
          _fail(m_3);
        else
          l_3 = m_3;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_3), not_null(j_3));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(l_3);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_3));
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
  ATerm q_3 = NULL;
  q_3 = t;
  t = SSL_close_file(not_null(q_3));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
  v_3 = t;
  u_3 :
  if(match_cons(v_3, sym__2))
    {
      w_3 = ATgetArgument(v_3, 0);
      x_3 = ATgetArgument(v_3, 1);
      t = SSL_execvp(not_null(w_3), not_null(x_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm c_4 = NULL;
  c_4 = t;
  t = SSL_waitpid(not_null(c_4));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm m_4 = NULL;
  ATerm o_4 = NULL;
  m_4 = t;
  {
    t = fork_0(t);
    {
      o_4 = t;
      {
        ATerm y_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 = NULL;
            q_4 = t;
            i_4 :
            if(match_int(q_4, 0))
              {
                t = not_null(m_4);
                t = h_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(z_7);
          }
        else
          {
            t = y_7;
            {
              ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
              t = not_null(o_4);
              {
                t = waitpid_0(t);
                {
                  r_4 = t;
                  k_4 :
                  if(match_cons(r_4, sym_WaitStatus_3))
                    {
                      s_4 = ATgetArgument(r_4, 0);
                      t_4 = ATgetArgument(r_4, 1);
                      u_4 = ATgetArgument(r_4, 2);
                      l_4 :
                      if(match_int(s_4, 0))
                        {
                          t = not_null(m_4);
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
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(match_cons(b_5, sym__2))
    {
      c_5 = ATgetArgument(b_5, 0);
      d_5 = ATgetArgument(b_5, 1);
      {
        ATerm c_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), not_null(d_5));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, c_0);
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
  ATerm i_5 = NULL;
  i_5 = t;
  t = SSL_table_keys(not_null(i_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm o_5 = NULL;
  o_5 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm q_5 = NULL;
        ATerm s_5 = NULL;
        q_5 = t;
        {
          ATerm t_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_5), not_null(q_5));
          {
            t = table_get_0(t);
            {
              t_5 = t;
              if(((s_5 != NULL) && (s_5 != t_5)))
                _fail(t_5);
              else
                s_5 = t_5;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), not_null(s_5));
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
    ATerm e_8;
    e_8 = t;
    {
      ATerm y_5 = NULL;
      ATerm z_5 = NULL;
      t = term_f_8;
      {
        t = get_config_0(t);
        {
          z_5 = t;
          if(((y_5 != NULL) && (y_5 != z_5)))
            _fail(z_5);
          else
            y_5 = z_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_5), term_g_8);
        t = geq_0(t);
      }
    }
    t = e_8;
    t = p_59(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm h_8;
  h_8 = t;
  {
    ATerm c_6 = NULL;
    ATerm d_6 = NULL;
    d_6 = t;
    if(((c_6 != NULL) && (c_6 != d_6)))
      _fail(d_6);
    else
      c_6 = d_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(c_6));
      t = printnl_0(t);
    }
  }
  t = h_8;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm j_6 = NULL;
  ATerm l_6 = NULL,m_6 = NULL;
  j_6 = t;
  {
    ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_6)));
    {
      t = table_get_0(t);
      {
        n_6 = t;
        h_6 :
        if(((ATgetType(n_6) == AT_LIST) && !(ATisEmpty(n_6))))
          {
            o_6 = ATgetFirst((ATermList) n_6);
            r_6 = (ATerm) ATgetNext((ATermList) n_6);
            i_6 :
            if(match_cons(o_6, sym__2))
              {
                p_6 = ATgetArgument(o_6, 0);
                q_6 = ATgetArgument(o_6, 1);
                {
                  if(((l_6 != NULL) && (l_6 != p_6)))
                    _fail(p_6);
                  else
                    l_6 = p_6;
                  if(((m_6 != NULL) && (m_6 != q_6)))
                    _fail(q_6);
                  else
                    m_6 = q_6;
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
    t = not_null(m_6);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym__2))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      {
        ATerm d_7 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(z_6)));
        {
          t = table_get_0(t);
          {
            ATerm r_0 (ATerm t)
            {
              ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
              e_7 = t;
              w_6 :
              if(match_cons(e_7, sym__2))
                {
                  f_7 = ATgetArgument(e_7, 0);
                  g_7 = ATgetArgument(e_7, 1);
                  {
                    if(((a_7 != NULL) && (a_7 != f_7)))
                      _fail(f_7);
                    else
                      a_7 = f_7;
                    if(((d_7 != NULL) && (d_7 != g_7)))
                      _fail(g_7);
                    else
                      d_7 = g_7;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, r_0);
          }
        }
        t = not_null(d_7);
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
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm r_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = filter_1(t, n_72);
              return(t);
            }
            t = Cons_2(t, n_72, s_0);
            ;
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
            {
              ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
              l_7 = t;
              k_7 :
              if(((ATgetType(l_7) == AT_LIST) && !(ATisEmpty(l_7))))
                {
                  m_7 = ATgetFirst((ATermList) l_7);
                  n_7 = (ATerm) ATgetNext((ATermList) l_7);
                  {
                    t = not_null(n_7);
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
ATerm repeat_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm q_7 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = o_80(t);
      t = q_7(t);
      return(t);
    }
    t = try_1(t, t_0);
    return(t);
  }
  t = q_7(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    t = term_y_8;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm z_8 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_8;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, u_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm b_9;
    b_9 = t;
    {
      ATerm s_7 = NULL;
      ATerm t_7 = NULL;
      t = term_f_8;
      {
        t = get_config_0(t);
        {
          t_7 = t;
          if(((s_7 != NULL) && (s_7 != t_7)))
            _fail(t_7);
          else
            s_7 = t_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_7), term_c_9);
        t = geq_0(t);
      }
    }
    t = b_9;
    t = o_59(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm d_9;
    d_9 = t;
    {
      ATerm w_7 = NULL;
      ATerm x_7 = NULL;
      t = term_f_8;
      {
        t = get_config_0(t);
        {
          x_7 = t;
          if(((w_7 != NULL) && (w_7 != x_7)))
            _fail(x_7);
          else
            w_7 = x_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), term_j_9);
        t = geq_0(t);
      }
    }
    t = d_9;
    t = q_59(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym__2))
    {
      c_8 = ATgetArgument(b_8, 0);
      d_8 = ATgetArgument(b_8, 1);
      if(((c_8 != NULL) && (c_8 != d_8)))
        _fail(d_8);
      else
        c_8 = d_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm))
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  i_8 :
  if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
    {
      k_8 = ATgetFirst((ATermList) j_8);
      l_8 = (ATerm) ATgetNext((ATermList) j_8);
      {
        t = y_70(t);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm o_8 = NULL;
            o_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), not_null(o_8));
              t = x_70(t);
            }
            return(t);
          }
          t = fetch_1(t, x_0);
        }
        t = not_null(l_8);
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
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym__2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      {
        t = not_null(v_8);
        {
          ATerm a_9 (ATerm t)
          {
            ATerm k_9 = t;
            int l_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_8);
                ;
                LocalPopChoice(l_9);
              }
            else
              {
                t = k_9;
                {
                  ATerm q_9 = t;
                  int r_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_0 (ATerm t)
                      {
                        t = not_null(w_8);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_70, y_0);
                      t = a_9(t);
                      ;
                      LocalPopChoice(r_9);
                    }
                  else
                    {
                      t = q_9;
                      t = Cons_2(t, _id, a_9);
                    }
                }
              }
            return(t);
          }
          t = a_9(t);
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
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  f_9 = t;
  e_9 :
  if(match_cons(f_9, sym__3))
    {
      g_9 = ATgetArgument(f_9, 0);
      h_9 = ATgetArgument(f_9, 1);
      i_9 = ATgetArgument(f_9, 2);
      {
        ATerm s_9;
        s_9 = t;
        {
          ATerm m_9 = NULL;
          ATerm n_9 = NULL,p_9 = NULL;
          ATerm o_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_9), not_null(h_9));
          {
            ATerm t_9 = t;
            int u_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(u_9);
              }
            else
              {
                t = t_9;
                t = (ATerm) ATempty;
              }
            {
              o_9 = t;
              if(((n_9 != NULL) && (n_9 != o_9)))
                _fail(o_9);
              else
                n_9 = o_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(i_9));
            {
              t = union_0(t);
              {
                p_9 = t;
                if(((m_9 != NULL) && (m_9 != p_9)))
                  _fail(p_9);
                else
                  m_9 = p_9;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_9), not_null(h_9), not_null(m_9));
            t = set_0(t);
          }
        }
        t = s_9;
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
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  x_9 = t;
  w_9 :
  if(match_cons(x_9, sym__2))
    {
      y_9 = ATgetArgument(x_9, 0);
      z_9 = ATgetArgument(x_9, 1);
      {
        t = not_null(z_9);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
            c_10 = t;
            v_9 :
            if(match_cons(c_10, sym__2))
              {
                d_10 = ATgetArgument(c_10, 0);
                e_10 = ATgetArgument(c_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(y_9), not_null(d_10), not_null(e_10));
                  t = z_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, z_0);
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
  ATerm k_10 = NULL;
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_10 = NULL;
      l_10 = t;
      {
        if(((k_10 != NULL) && (k_10 != l_10)))
          _fail(l_10);
        else
          k_10 = l_10;
        t = SSL_ReadFromFile(not_null(k_10));
      }
      ;
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm b_1 (ATerm t)
        {
          t = term_f_10;
          return(t);
        }
        t = debug_1(t, b_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm p_10 = NULL;
  ATerm r_10 = NULL;
  p_10 = t;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm d_1 (ATerm t)
      {
        t = term_g_10;
        return(t);
      }
      t = debug_1(t, d_1);
      return(t);
    }
    t = if_verbose5_1(t, c_1);
    {
      ATerm h_10 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(p_10)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_10;
        }
      {
        ATerm i_10;
        i_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_8, term_j_10, (ATerm) ATinsert(ATempty, not_null(p_10)));
          t = table_put_0(t);
        }
        t = i_10;
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              t = term_m_10;
              return(t);
            }
            t = debug_1(t, i_1);
            return(t);
          }
          t = if_verbose4_1(t, h_1);
          {
            ATerm n_10 = t;
            int o_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(o_10);
              }
            else
              {
                t = n_10;
                t = (ATerm) ATempty;
              }
            {
              ATerm j_1 (ATerm t)
              {
                ATerm l_1 (ATerm t)
                {
                  t = term_q_10;
                  return(t);
                }
                t = say_1(t, l_1);
                return(t);
              }
              t = if_verbose6_1(t, j_1);
              {
                ATerm s_10 = NULL;
                s_10 = t;
                if(((r_10 != NULL) && (r_10 != s_10)))
                  _fail(s_10);
                else
                  r_10 = s_10;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_8, not_null(r_10));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm n_1 (ATerm t)
                      {
                        ATerm o_1 (ATerm t)
                        {
                          t = term_t_10;
                          return(t);
                        }
                        t = say_1(t, o_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, n_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_n_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(p_10)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm q_1 (ATerm t)
                              {
                                t = term_q_10;
                                return(t);
                              }
                              t = say_1(t, q_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, p_1);
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
  ATerm w_10 = NULL;
  w_10 = t;
  t = SSL_getenv(not_null(w_10));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_11;
            t = getenv_0(t);
            ;
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm s_1 (ATerm t)
    {
      t = term_d_11;
      return(t);
    }
    t = debug_1(t, s_1);
    return(t);
  }
  t = if_verbose5_1(t, r_1);
  {
    ATerm e_11;
    e_11 = t;
    {
      ATerm j_11 = t;
      int k_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_l_11;
          t = table_get_0(t);
          ;
          LocalPopChoice(k_11);
        }
      else
        {
          t = j_11;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = e_11;
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          t = term_m_11;
          return(t);
        }
        t = debug_1(t, u_1);
        return(t);
      }
      t = if_verbose5_1(t, t_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm n_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          t = term_u_11;
          return(t);
        }
        t = debug_1(t, w_1);
        return(t);
      }
      t = if_verbose5_1(t, v_1);
      {
        t = xtc_load_0(t);
        {
          ATerm c_12 = t;
          int d_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(d_12);
            }
          else
            {
              t = c_12;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm x_1 (ATerm t)
            {
              ATerm y_1 (ATerm t)
              {
                t = term_u_11;
                return(t);
              }
              t = debug_1(t, y_1);
              return(t);
            }
            t = if_verbose5_1(t, x_1);
          }
        }
      }
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = n_11;
      {
        ATerm a_11 = NULL;
        ATerm b_11 = NULL;
        b_11 = t;
        if(((a_11 != NULL) && (a_11 != b_11)))
          _fail(b_11);
        else
          a_11 = b_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_12), not_null(a_11)), term_e_12);
          {
            t = error_0(t);
            {
              ATerm z_1 (ATerm t)
              {
                t = term_n_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm b_2 (ATerm t)
                    {
                      t = term_h_12;
                      return(t);
                    }
                    t = debug_1(t, b_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, z_1);
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
  ATerm f_11 = NULL;
  ATerm i_12;
  i_12 = t;
  {
    ATerm g_11 = NULL;
    t = w_74(t);
    {
      t = xtc_find_warning_0(t);
      {
        g_11 = t;
        if(((f_11 != NULL) && (f_11 != g_11)))
          _fail(g_11);
        else
          f_11 = g_11;
      }
    }
  }
  t = i_12;
  {
    ATerm r_12;
    r_12 = t;
    {
      ATerm h_11 = NULL;
      ATerm i_11 = NULL;
      i_11 = t;
      if(((h_11 != NULL) && (h_11 != i_11)))
        _fail(i_11);
      else
        h_11 = i_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_11), not_null(h_11));
        t = call_0(t);
      }
    }
    t = r_12;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm s_75 (ATerm))
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym__2))
    {
      r_11 = ATgetArgument(q_11, 0);
      s_11 = ATgetArgument(q_11, 1);
      {
        ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
        ATerm s_12;
        s_12 = t;
        {
          ATerm y_11 = NULL;
          ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
          t = s_75(t);
          {
            y_11 = t;
            {
              if(((v_11 != NULL) && (v_11 != y_11)))
                _fail(y_11);
              else
                v_11 = y_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_11), not_null(r_11), not_null(s_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_12 = t;
                    int u_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), term_v_12);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(u_12);
                      }
                    else
                      {
                        t = t_12;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      z_11 = t;
                      o_11 :
                      if(((ATgetType(z_11) == AT_LIST) && !(ATisEmpty(z_11))))
                        {
                          a_12 = ATgetFirst((ATermList) z_11);
                          b_12 = (ATerm) ATgetNext((ATermList) z_11);
                          {
                            if(((w_11 != NULL) && (w_11 != a_12)))
                              _fail(a_12);
                            else
                              w_11 = a_12;
                            {
                              if(((x_11 != NULL) && (x_11 != b_12)))
                                _fail(b_12);
                              else
                                x_11 = b_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(v_11), term_v_12, (ATerm) ATinsert(CheckATermList(not_null(x_11)), (ATerm) ATinsert(CheckATermList(not_null(w_11)), not_null(r_11))));
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
        t = s_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm x_78 (ATerm))
{
  ATerm x_12;
  x_12 = t;
  {
    t = x_78(t);
    {
      ATerm c_2 (ATerm t)
      {
        t = term_a_13;
        return(t);
      }
      t = debug_1(t, c_2);
    }
  }
  t = x_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
      l_12 = t;
      g_12 :
      if(match_cons(l_12, sym__2))
        {
          m_12 = ATgetArgument(l_12, 0);
          n_12 = ATgetArgument(l_12, 1);
          {
            if(((k_12 != NULL) && (k_12 != m_12)))
              _fail(m_12);
            else
              k_12 = m_12;
            if(((j_12 != NULL) && (j_12 != n_12)))
              _fail(n_12);
            else
              j_12 = n_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(c_13);
      t = SSL_open_file(not_null(k_12), not_null(j_12));
    }
  else
    {
      t = b_13;
      {
        ATerm o_12 = NULL;
        ATerm p_12 = NULL;
        ATerm d_2 (ATerm t)
        {
          t = term_f_13;
          return(t);
        }
        t = obsolete_1(t, d_2);
        {
          o_12 = t;
          {
            if(((k_12 != NULL) && (k_12 != o_12)))
              _fail(o_12);
            else
              k_12 = o_12;
            {
              ATerm g_13;
              g_13 = t;
              {
                ATerm q_12 = NULL;
                t = term_h_13;
                {
                  q_12 = t;
                  if(((p_12 != NULL) && (p_12 != q_12)))
                    _fail(q_12);
                  else
                    p_12 = q_12;
                }
              }
              t = g_13;
              t = SSL_open_file(not_null(k_12), not_null(p_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm w_12 = NULL;
  ATerm y_12 = NULL;
  w_12 = t;
  {
    ATerm j_13;
    j_13 = t;
    {
      ATerm z_12 = NULL;
      t = term_k_13;
      {
        z_12 = t;
        if(((y_12 != NULL) && (y_12 != z_12)))
          _fail(z_12);
        else
          y_12 = z_12;
      }
    }
    t = j_13;
    {
      t = SSL_open_file(not_null(w_12), not_null(y_12));
      t = SSL_close_file(not_null(w_12));
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
  ATerm d_13 = NULL;
  ATerm e_13 = NULL;
  t = term_l_13;
  {
    t = new_0(t);
    {
      e_13 = t;
      if(((d_13 != NULL) && (d_13 != e_13)))
        _fail(e_13);
      else
        d_13 = e_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), term_m_13);
    {
      t = conc_strings_0(t);
      {
        ATerm e_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, e_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm i_13 = NULL;
  t = new_file_0(t);
  {
    i_13 = t;
    {
      ATerm n_13;
      n_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_13), term_h_13);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_13), term_l_13);
            {
              ATerm f_2 (ATerm t)
              {
                t = term_o_13;
                return(t);
              }
              t = assert_1(t, f_2);
            }
          }
        }
      }
      t = n_13;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm s_13 = NULL,t_13 = NULL;
  s_13 = t;
  r_13 :
  if(match_cons(s_13, sym_stdin_0))
    {
      ATerm u_13 = NULL;
      ATerm v_13 = NULL;
      ATerm w_13 = NULL;
      t = xtc_new_file_0(t);
      {
        v_13 = t;
        {
          if(((u_13 != NULL) && (u_13 != v_13)))
            _fail(v_13);
          else
            u_13 = v_13;
          {
            ATerm x_13 = NULL;
            t = q_0(t);
            {
              x_13 = t;
              if(((w_13 != NULL) && (w_13 != x_13)))
                _fail(x_13);
              else
                w_13 = x_13;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_13)), term_p_13));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, p_0);
                  {
                    t = not_null(u_13);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_13));
    }
  else
    {
      if(match_cons(s_13, sym_FILE_1))
        {
          t_13 = ATgetArgument(s_13, 0);
          {
            ATerm z_13 = NULL;
            ATerm a_14 = NULL;
            t = not_null(t_13);
            {
              ATerm b_14 = NULL;
              t = xtc_new_file_0(t);
              {
                a_14 = t;
                {
                  if(((z_13 != NULL) && (z_13 != a_14)))
                    _fail(a_14);
                  else
                    z_13 = a_14;
                  {
                    ATerm c_14 = NULL;
                    t = q_0(t);
                    {
                      c_14 = t;
                      if(((b_14 != NULL) && (b_14 != c_14)))
                        _fail(c_14);
                      else
                        b_14 = c_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_13)), term_p_13), not_null(t_13)), term_q_13));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, p_0);
                          {
                            t = not_null(z_13);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_13));
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
  ATerm n_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_stdin_0))
    {
      ATerm p_14 = NULL,r_14 = NULL;
      ATerm y_13;
      y_13 = t;
      {
        ATerm q_14 = NULL;
        t = SSLgetAnnotations(not_null(n_14));
        {
          q_14 = t;
          if(((p_14 != NULL) && (p_14 != q_14)))
            _fail(q_14);
          else
            p_14 = q_14;
        }
      }
      t = y_13;
      {
        ATerm s_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(p_14));
        {
          s_14 = t;
          if(((r_14 != NULL) && (r_14 != s_14)))
            _fail(s_14);
          else
            r_14 = s_14;
        }
        t = not_null(r_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm t_52 (ATerm))
{
  ATerm b_15 = NULL,c_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_FILE_1))
    {
      c_15 = ATgetArgument(b_15, 0);
      {
        ATerm f_15 = NULL,h_15 = NULL;
        ATerm g_15 = NULL;
        t = SSLgetAnnotations(not_null(b_15));
        {
          g_15 = t;
          if(((f_15 != NULL) && (f_15 != g_15)))
            _fail(g_15);
          else
            f_15 = g_15;
        }
        {
          t = not_null(c_15);
          {
            ATerm j_15 = NULL;
            t = t_52(t);
            {
              h_15 = t;
              {
                ATerm k_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(h_15)), not_null(f_15));
                {
                  k_15 = t;
                  if(((j_15 != NULL) && (j_15 != k_15)))
                    _fail(k_15);
                  else
                    j_15 = k_15;
                }
                t = not_null(j_15);
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
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(g_14);
        }
      else
        {
          t = f_14;
          t = stdin_0(t);
        }
      LocalPopChoice(e_14);
      t = xtc_transform_file_2(t, y_74, z_74);
    }
  else
    {
      t = d_14;
      t = xtc_transform_term_2(t, y_74, z_74);
    }
  return(t);
}
ATerm sglr_2 (ATerm t, ATerm d_58 (ATerm), ATerm e_58 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    t = term_h_14;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm r_15 = NULL,t_15 = NULL;
    ATerm i_14;
    i_14 = t;
    {
      ATerm s_15 = NULL;
      t = d_58(t);
      {
        s_15 = t;
        if(((r_15 != NULL) && (r_15 != s_15)))
          _fail(s_15);
        else
          r_15 = s_15;
      }
    }
    t = i_14;
    {
      ATerm u_15 = NULL;
      t = e_58(t);
      {
        u_15 = t;
        if(((t_15 != NULL) && (t_15 != u_15)))
          _fail(u_15);
        else
          t_15 = u_15;
      }
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_15)), not_null(r_15)), term_r_7);
    }
    return(t);
  }
  t = xtc_transform_2(t, g_2, h_2);
  return(t);
}
ATerm parse_and_implode_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm y_15 = NULL;
    ATerm z_15 = NULL;
    t = term_j_14;
    {
      ATerm k_14 = t;
      int l_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = get_config_0(t);
          ;
          LocalPopChoice(l_14);
        }
      else
        {
          t = k_14;
          t = (ATerm) ATempty;
        }
      {
        z_15 = t;
        if(((y_15 != NULL) && (y_15 != z_15)))
          _fail(z_15);
        else
          y_15 = z_15;
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(y_15)), term_o_14);
    return(t);
  }
  t = sglr_2(t, get_parse_table_0, i_2);
  {
    ATerm j_2 (ATerm t)
    {
      t = term_t_14;
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0(t);
            ;
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            t = (ATerm) ATempty;
          }
      }
      return(t);
    }
    t = implode_asfix_1(t, j_2);
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym__2))
    {
      g_16 = ATgetArgument(f_16, 0);
      h_16 = ATgetArgument(f_16, 1);
      {
        ATerm k_16 = NULL;
        ATerm l_16 = NULL,n_16 = NULL;
        ATerm m_16 = NULL;
        t = not_null(g_16);
        {
          ATerm w_14 = t;
          int x_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(x_14);
            }
          else
            {
              t = w_14;
              t = (ATerm) ATempty;
            }
          {
            m_16 = t;
            if(((l_16 != NULL) && (l_16 != m_16)))
              _fail(m_16);
            else
              l_16 = m_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(l_16));
          {
            t = conc_0(t);
            {
              n_16 = t;
              if(((k_16 != NULL) && (k_16 != n_16)))
                _fail(n_16);
              else
                k_16 = n_16;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_14, not_null(g_16), not_null(k_16));
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
ATerm sglri_options_0 (ATerm t)
{
  ATerm z_14 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm x_16 = NULL;
        x_16 = t;
        r_16 :
        if(!(match_string(x_16, "-p")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        ATerm e_15;
        e_15 = t;
        {
          ATerm y_16 = NULL;
          ATerm z_16 = NULL;
          z_16 = t;
          if(((y_16 != NULL) && (y_16 != z_16)))
            _fail(z_16);
          else
            y_16 = z_16;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_r_7, not_null(y_16));
            t = set_config_0(t);
          }
        }
        t = e_15;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_i_15;
        return(t);
      }
      t = ArgOption_3(t, k_2, l_2, m_2);
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = z_14;
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm a_17 = NULL;
              a_17 = t;
              t_16 :
              if(!(match_string(a_17, "--sglr")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              ATerm n_15;
              n_15 = t;
              {
                ATerm b_17 = NULL;
                ATerm c_17 = NULL;
                c_17 = t;
                if(((b_17 != NULL) && (b_17 != c_17)))
                  _fail(c_17);
                else
                  b_17 = c_17;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_14, not_null(b_17));
                  t = extend_config_0(t);
                }
              }
              t = n_15;
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              t = term_o_15;
              return(t);
            }
            t = ArgOption_3(t, n_2, o_2, p_2);
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm q_2 (ATerm t)
              {
                ATerm d_17 = NULL;
                d_17 = t;
                v_16 :
                if(!(match_string(d_17, "--impl")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_2 (ATerm t)
              {
                ATerm p_15;
                p_15 = t;
                {
                  ATerm e_17 = NULL;
                  ATerm f_17 = NULL;
                  f_17 = t;
                  if(((e_17 != NULL) && (e_17 != f_17)))
                    _fail(f_17);
                  else
                    e_17 = f_17;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_t_14, not_null(e_17));
                    t = extend_config_0(t);
                  }
                }
                t = p_15;
                return(t);
              }
              ATerm s_2 (ATerm t)
              {
                t = term_q_15;
                return(t);
              }
              t = ArgOption_3(t, q_2, r_2, s_2);
            }
          }
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym__2))
    {
      m_17 = ATgetArgument(l_17, 0);
      n_17 = ATgetArgument(l_17, 1);
      t = SSL_copy(not_null(m_17), not_null(n_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm v_17 = NULL;
  v_17 = t;
  u_17 :
  if(match_cons(v_17, sym_stderr_0))
    {
      ATerm x_17 = NULL,z_17 = NULL;
      ATerm v_15;
      v_15 = t;
      {
        ATerm y_17 = NULL;
        t = SSLgetAnnotations(not_null(v_17));
        {
          y_17 = t;
          if(((x_17 != NULL) && (x_17 != y_17)))
            _fail(y_17);
          else
            x_17 = y_17;
        }
      }
      t = v_15;
      {
        ATerm a_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(x_17));
        {
          a_18 = t;
          if(((z_17 != NULL) && (z_17 != a_18)))
            _fail(a_18);
          else
            z_17 = a_18;
        }
        t = not_null(z_17);
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
  ATerm i_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym_stdout_0))
    {
      ATerm k_18 = NULL,m_18 = NULL;
      ATerm w_15;
      w_15 = t;
      {
        ATerm l_18 = NULL;
        t = SSLgetAnnotations(not_null(i_18));
        {
          l_18 = t;
          if(((k_18 != NULL) && (k_18 != l_18)))
            _fail(l_18);
          else
            k_18 = l_18;
        }
      }
      t = w_15;
      {
        ATerm n_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(k_18));
        {
          n_18 = t;
          if(((m_18 != NULL) && (m_18 != n_18)))
            _fail(n_18);
          else
            m_18 = n_18;
        }
        t = not_null(m_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm a_19 = NULL,b_19 = NULL;
  a_19 = t;
  z_18 :
  if(match_cons(a_19, sym_FILE_1))
    {
      b_19 = ATgetArgument(a_19, 0);
      {
        ATerm x_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_19 = NULL;
            ATerm e_19 = NULL;
            t = o_0(t);
            {
              e_19 = t;
              {
                if(((d_19 != NULL) && (d_19 != e_19)))
                  _fail(e_19);
                else
                  d_19 = e_19;
                {
                  ATerm b_16 = t;
                  int c_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(c_16);
                    }
                  else
                    {
                      t = b_16;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(d_19));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_19));
            ;
            LocalPopChoice(a_16);
          }
        else
          {
            t = x_15;
            {
              ATerm d_16 = t;
              int i_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_19 = NULL;
                  ATerm h_19 = NULL;
                  t = o_0(t);
                  {
                    h_19 = t;
                    {
                      if(((g_19 != NULL) && (g_19 != h_19)))
                        _fail(h_19);
                      else
                        g_19 = h_19;
                      {
                        ATerm j_16 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm o_16 = t;
                            int p_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(p_16);
                              }
                            else
                              {
                                t = o_16;
                                {
                                  ATerm q_16 = t;
                                  int s_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(s_16);
                                    }
                                  else
                                    {
                                      t = q_16;
                                      {
                                        ATerm i_19 = NULL;
                                        i_19 = t;
                                        if(((b_19 != NULL) && (b_19 != i_19)))
                                          _fail(i_19);
                                        else
                                          b_19 = i_19;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = j_16;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(g_19));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_19));
                  ;
                  LocalPopChoice(i_16);
                }
              else
                {
                  t = d_16;
                  {
                    ATerm k_19 = NULL;
                    t = o_0(t);
                    {
                      k_19 = t;
                      if(((b_19 != NULL) && (b_19 != k_19)))
                        _fail(k_19);
                      else
                        b_19 = k_19;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_19));
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
  ATerm v_19 = NULL,b_20 = NULL,c_20 = NULL;
  v_19 = t;
  u_19 :
  if(((ATgetType(v_19) == AT_LIST) && !(ATisEmpty(v_19))))
    {
      b_20 = ATgetFirst((ATermList) v_19);
      c_20 = (ATerm) ATgetNext((ATermList) v_19);
      t = not_null(c_20);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  h_20 :
  if(match_cons(k_20, sym__2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      {
        ATerm u_16;
        u_16 = t;
        {
          ATerm p_20 = NULL;
          ATerm q_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_20), not_null(m_20));
          {
            ATerm w_16 = t;
            int g_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(g_17);
              }
            else
              {
                t = w_16;
                t = (ATerm) ATempty;
              }
            {
              q_20 = t;
              if(((p_20 != NULL) && (p_20 != q_20)))
                _fail(q_20);
              else
                p_20 = q_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_20), not_null(m_20), not_null(p_20));
            t = table_put_0(t);
          }
        }
        t = u_16;
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
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  ATerm h_17;
  h_17 = t;
  {
    ATerm f_21 = NULL;
    ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
    t = p_75(t);
    {
      f_21 = t;
      {
        if(((e_21 != NULL) && (e_21 != f_21)))
          _fail(f_21);
        else
          e_21 = f_21;
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_21), term_v_12);
              t = table_get_0(t);
              ;
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            g_21 = t;
            b_21 :
            if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
              {
                h_21 = ATgetFirst((ATermList) g_21);
                i_21 = (ATerm) ATgetNext((ATermList) g_21);
                {
                  if(((d_21 != NULL) && (d_21 != h_21)))
                    _fail(h_21);
                  else
                    d_21 = h_21;
                  {
                    if(((c_21 != NULL) && (c_21 != i_21)))
                      _fail(i_21);
                    else
                      c_21 = i_21;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_21), term_v_12, not_null(c_21));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(d_21);
                          {
                            ATerm t_2 (ATerm t)
                            {
                              ATerm j_21 = NULL;
                              j_21 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_21), not_null(j_21));
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
  t = h_17;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  t = SSL_remove(not_null(u_21));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm t_63 (ATerm), ATerm u_63 (ATerm))
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_63(t);
      t = u_63(t);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      {
        t = u_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm l_22 = NULL;
  ATerm q_17;
  q_17 = t;
  {
    ATerm m_22 = NULL;
    ATerm n_22 = NULL;
    t = o_75(t);
    {
      m_22 = t;
      {
        if(((l_22 != NULL) && (l_22 != m_22)))
          _fail(m_22);
        else
          l_22 = m_22;
        {
          ATerm p_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_22), term_v_12);
          {
            ATerm r_17 = t;
            int s_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_17);
              }
            else
              {
                t = r_17;
                t = (ATerm) ATempty;
              }
            {
              p_22 = t;
              if(((n_22 != NULL) && (n_22 != p_22)))
                _fail(p_22);
              else
                n_22 = p_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_22), term_v_12, (ATerm) ATinsert(CheckATermList(not_null(n_22)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = q_17;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm i_74 (ATerm))
{
  ATerm u_22 = NULL,v_22 = NULL;
  ATerm u_2 (ATerm t)
  {
    t = term_o_13;
    return(t);
  }
  t = begin_scope_1(t, u_2);
  {
    ATerm v_2 (ATerm t)
    {
      ATerm t_17;
      t_17 = t;
      {
        ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
        ATerm w_17 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_18;
            t = table_get_0(t);
            ;
            LocalPopChoice(b_18);
          }
        else
          {
            t = w_17;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          w_22 = t;
          t_22 :
          if(((ATgetType(w_22) == AT_LIST) && !(ATisEmpty(w_22))))
            {
              x_22 = ATgetFirst((ATermList) w_22);
              y_22 = (ATerm) ATgetNext((ATermList) w_22);
              {
                if(((v_22 != NULL) && (v_22 != x_22)))
                  _fail(x_22);
                else
                  v_22 = x_22;
                {
                  if(((u_22 != NULL) && (u_22 != y_22)))
                    _fail(y_22);
                  else
                    u_22 = y_22;
                  {
                    t = not_null(v_22);
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, w_2);
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
      t = t_17;
      {
        ATerm x_2 (ATerm t)
        {
          t = term_o_13;
          return(t);
        }
        t = end_scope_1(t, x_2);
      }
      return(t);
    }
    t = restore_always_2(t, i_74, v_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_23 = NULL;
        ATerm c_23 = NULL;
        t = term_q_13;
        {
          t = get_config_0(t);
          {
            c_23 = t;
            if(((b_23 != NULL) && (b_23 != c_23)))
              _fail(c_23);
            else
              b_23 = c_23;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_23));
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = term_v_7;
      }
    {
      t = j_74(t);
      {
        ATerm z_2 (ATerm t)
        {
          ATerm f_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_p_13;
              t = get_config_0(t);
              ;
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
              t = term_j_18;
            }
          return(t);
        }
        t = copy_to_1(t, z_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, y_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm f_23 = NULL;
    f_23 = t;
    e_23 :
    if(!(match_string(f_23, "-v")))
      {
        if(!(match_string(f_23, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_p_18;
    t = set_config_0(t);
    t = term_q_18;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_r_18;
    return(t);
  }
  t = Option_3(t, e_3, f_3, g_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm i_23 = NULL;
    i_23 = t;
    g_23 :
    if(!(match_string(i_23, "-k")))
      {
        if(!(match_string(i_23, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm s_18;
    s_18 = t;
    {
      ATerm j_23 = NULL;
      ATerm k_23 = NULL;
      t = string_to_int_0(t);
      {
        k_23 = t;
        if(((j_23 != NULL) && (j_23 != k_23)))
          _fail(k_23);
        else
          j_23 = k_23;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_18, not_null(j_23));
        t = set_config_0(t);
      }
    }
    t = s_18;
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_u_18;
    return(t);
  }
  t = ArgOption_3(t, h_3, i_3, k_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  t = SSL_string_to_int(not_null(n_23));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_3 (ATerm t)
      {
        ATerm v_23 = NULL;
        v_23 = t;
        q_23 :
        if(!(match_string(v_23, "-S")))
          {
            if(!(match_string(v_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = term_y_18;
        t = set_config_0(t);
        t = term_c_19;
        return(t);
      }
      ATerm p_3 (ATerm t)
      {
        t = term_f_19;
        return(t);
      }
      t = Option_3(t, n_3, o_3, p_3);
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm j_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              ATerm w_23 = NULL;
              w_23 = t;
              r_23 :
              if(!(match_string(w_23, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm s_3 (ATerm t)
            {
              ATerm e_24 = NULL;
              ATerm m_19;
              m_19 = t;
              {
                ATerm x_23 = NULL;
                ATerm d_24 = NULL;
                t = string_to_int_0(t);
                {
                  d_24 = t;
                  if(((x_23 != NULL) && (x_23 != d_24)))
                    _fail(d_24);
                  else
                    x_23 = d_24;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_8, not_null(x_23));
                  t = set_config_0(t);
                }
              }
              t = m_19;
              {
                ATerm f_24 = NULL;
                f_24 = t;
                if(((e_24 != NULL) && (e_24 != f_24)))
                  _fail(f_24);
                else
                  e_24 = f_24;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_24));
              }
              return(t);
            }
            ATerm t_3 (ATerm t)
            {
              t = term_n_19;
              return(t);
            }
            t = ArgOption_3(t, r_3, s_3, t_3);
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = j_19;
            {
              ATerm y_3 (ATerm t)
              {
                ATerm g_24 = NULL;
                g_24 = t;
                u_23 :
                if(!(match_string(g_24, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_3 (ATerm t)
              {
                t = term_p_19;
                t = set_config_0(t);
                t = term_q_19;
                return(t);
              }
              ATerm a_4 (ATerm t)
              {
                t = term_r_19;
                return(t);
              }
              t = Option_3(t, y_3, z_3, a_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm m_24 = NULL;
    m_24 = t;
    j_24 :
    if(!(match_string(m_24, "-o")))
      {
        if(!(match_string(m_24, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    ATerm p_24 = NULL;
    ATerm y_19;
    y_19 = t;
    {
      ATerm n_24 = NULL;
      ATerm o_24 = NULL;
      o_24 = t;
      if(((n_24 != NULL) && (n_24 != o_24)))
        _fail(o_24);
      else
        n_24 = o_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_13, not_null(n_24));
        t = set_config_0(t);
      }
    }
    t = y_19;
    {
      ATerm q_24 = NULL;
      q_24 = t;
      if(((p_24 != NULL) && (p_24 != q_24)))
        _fail(q_24);
      else
        p_24 = q_24;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_24));
    }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_z_19;
    return(t);
  }
  t = ArgOption_3(t, b_4, d_4, e_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm a_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = a_20;
      {
        ATerm f_4 (ATerm t)
        {
          ATerm y_24 = NULL;
          y_24 = t;
          x_24 :
          if(!(match_string(y_24, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_4 (ATerm t)
        {
          t = term_f_20;
          t = set_config_0(t);
          t = term_g_20;
          return(t);
        }
        ATerm h_4 (ATerm t)
        {
          t = term_i_20;
          return(t);
        }
        t = Option_3(t, f_4, g_4, h_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  e_25 = t;
  c_25 :
  if(match_string(e_25, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(e_25) == AT_LIST) && !(ATisEmpty(e_25))))
        {
          f_25 = ATgetFirst((ATermList) e_25);
          g_25 = (ATerm) ATgetNext((ATermList) e_25);
          d_25 :
          if(((ATgetType(g_25) == AT_LIST) && !(ATisEmpty(g_25))))
            {
              h_25 = ATgetFirst((ATermList) g_25);
              i_25 = (ATerm) ATgetNext((ATermList) g_25);
              {
                ATerm m_25 = NULL;
                ATerm j_20;
                j_20 = t;
                {
                  t = not_null(f_25);
                  t = l_0(t);
                }
                t = j_20;
                {
                  ATerm n_25 = NULL;
                  t = not_null(h_25);
                  {
                    t = m_0(t);
                    {
                      n_25 = t;
                      if(((m_25 != NULL) && (m_25 != n_25)))
                        _fail(n_25);
                      else
                        m_25 = n_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_25)), not_null(m_25));
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
  ATerm j_4 (ATerm t)
  {
    ATerm u_25 = NULL;
    u_25 = t;
    r_25 :
    if(!(match_string(u_25, "-i")))
      {
        if(!(match_string(u_25, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm x_25 = NULL;
    ATerm n_20;
    n_20 = t;
    {
      ATerm v_25 = NULL;
      ATerm w_25 = NULL;
      w_25 = t;
      if(((v_25 != NULL) && (v_25 != w_25)))
        _fail(w_25);
      else
        v_25 = w_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_13, not_null(v_25));
        t = set_config_0(t);
      }
    }
    t = n_20;
    {
      ATerm y_25 = NULL;
      y_25 = t;
      if(((x_25 != NULL) && (x_25 != y_25)))
        _fail(y_25);
      else
        x_25 = y_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_25));
    }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_o_20;
    return(t);
  }
  t = ArgOption_3(t, j_4, n_4, p_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm d_26 = NULL;
  ATerm v_20;
  v_20 = t;
  {
    ATerm v_4 (ATerm t)
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
    t = option_defined_1(t, v_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_20), not_null(d_26)), term_w_20));
      {
        t = printnl_0(t);
        {
          t = term_j_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_20;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, term_y_20));
  {
    t = printnl_0(t);
    {
      t = term_j_7;
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
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_26), not_null(p_26));
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
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
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_71(t);
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
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
    ATerm w_4 (ATerm t)
    {
      t = term_x_18;
      return(t);
    }
    t = crush_2(t, w_4, add_0);
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
        ATerm m_21;
        m_21 = t;
        {
          ATerm n_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_27), not_null(y_27));
              ;
              LocalPopChoice(o_21);
            }
          else
            {
              t = n_21;
              t = SSL_gtr(not_null(x_27), not_null(y_27));
            }
        }
        t = m_21;
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
  ATerm p_21 = t;
  int q_21 = stack_ptr;
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
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    ATerm r_21;
    r_21 = t;
    {
      ATerm k_28 = NULL;
      ATerm l_28 = NULL;
      t = term_f_8;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_28), term_j_7);
        t = geq_0(t);
      }
    }
    t = r_21;
    t = l_59(t);
    return(t);
  }
  t = try_1(t, x_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm p_28 = NULL,r_28 = NULL;
    ATerm s_21;
    s_21 = t;
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
    t = s_21;
    {
      ATerm s_28 = NULL;
      t = term_t_21;
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
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_21), not_null(p_28)), term_v_21), not_null(r_28)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_4);
  {
    t = term_x_18;
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
      ATerm x_21;
      x_21 = t;
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
      t = x_21;
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
ATerm need_help_1 (ATerm t, ATerm v_75 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        {
          ATerm a_22 = t;
          int b_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(b_22);
            }
          else
            {
              t = a_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_4);
  t = v_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  t = SSL_table_create(not_null(k_29));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_29 = NULL;
  q_29 = t;
  {
    ATerm c_22;
    c_22 = t;
    {
      t = term_d_22;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_22, term_e_22, not_null(q_29));
          t = table_put_0(t);
        }
      }
    }
    t = c_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  t = SSL_table_destroy(not_null(x_29));
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
  ATerm f_22;
  f_22 = t;
  {
    ATerm m_30 = NULL;
    ATerm p_30 = NULL;
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        {
          ATerm n_30 = NULL;
          ATerm o_30 = NULL;
          o_30 = t;
          if(((n_30 != NULL) && (n_30 != o_30)))
            _fail(o_30);
          else
            n_30 = o_30;
          t = (ATerm) ATinsert(ATempty, not_null(n_30));
        }
      }
    {
      p_30 = t;
      if(((m_30 != NULL) && (m_30 != p_30)))
        _fail(p_30);
      else
        m_30 = p_30;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_18, not_null(m_30));
      t = printnl_0(t);
    }
  }
  t = f_22;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_22), term_j_22), term_i_22);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
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
          ATerm o_22;
          o_22 = t;
          {
            ATerm e_31 = NULL,g_31 = NULL,i_31 = NULL;
            ATerm q_22;
            q_22 = t;
            {
              ATerm f_31 = NULL;
              t = j_0(t);
              {
                f_31 = t;
                if(((e_31 != NULL) && (e_31 != f_31)))
                  _fail(f_31);
                else
                  e_31 = f_31;
              }
            }
            t = q_22;
            {
              ATerm h_31 = NULL;
              t = not_null(y_30);
              {
                t = i_0(t);
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
          t = o_22;
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(d_31);
              return(t);
            }
            t = reverse_acc_2(t, i_0, e_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_31) == AT_LIST) && ATisEmpty(a_31)))
        {
          {
            t = term_l_13;
            t = j_0(t);
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
  ATerm f_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm p_31 = NULL;
  ATerm q_31 = NULL;
  t = term_l_13;
  {
    t = h_0(t);
    {
      q_31 = t;
      if(((p_31 != NULL) && (p_31 != q_31)))
        _fail(q_31);
      else
        p_31 = q_31;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_22), not_null(p_31)), term_r_22);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_53 (ATerm))
{
  ATerm x_31 = NULL,a_32 = NULL;
  x_31 = t;
  w_31 :
  if(match_cons(x_31, sym_Program_1))
    {
      a_32 = ATgetArgument(x_31, 0);
      {
        ATerm f_32 = NULL,m_32 = NULL;
        ATerm g_32 = NULL;
        t = SSLgetAnnotations(not_null(x_31));
        {
          g_32 = t;
          if(((f_32 != NULL) && (f_32 != g_32)))
            _fail(g_32);
          else
            f_32 = g_32;
        }
        {
          t = not_null(a_32);
          {
            ATerm o_32 = NULL;
            t = a_53(t);
            {
              m_32 = t;
              {
                ATerm p_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_32)), not_null(f_32));
                {
                  p_32 = t;
                  if(((o_32 != NULL) && (o_32 != p_32)))
                    _fail(p_32);
                  else
                    o_32 = p_32;
                }
                t = not_null(o_32);
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
  ATerm c_33 = NULL;
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_33 = NULL;
      t = term_t_21;
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
      ;
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm g_5 (ATerm t)
        {
          ATerm h_5 (ATerm t)
          {
            ATerm e_33 = NULL;
            e_33 = t;
            if(((c_33 != NULL) && (c_33 != e_33)))
              _fail(e_33);
            else
              c_33 = e_33;
            return(t);
          }
          t = Program_1(t, h_5);
          return(t);
        }
        t = option_defined_1(t, g_5);
      }
    }
  {
    ATerm j_5 (ATerm t)
    {
      ATerm k_5 (ATerm t)
      {
        t = not_null(c_33);
        return(t);
      }
      t = short_description_1(t, k_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, j_5);
    {
      t = term_d_23;
      {
        t = echo_0(t);
        {
          t = term_m_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_5 (ATerm t)
                {
                  ATerm f_33 = NULL;
                  ATerm g_33 = NULL;
                  g_33 = t;
                  if(((f_33 != NULL) && (f_33 != g_33)))
                    _fail(g_33);
                  else
                    f_33 = g_33;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_33)), term_o_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_5);
                {
                  ATerm m_5 (ATerm t)
                  {
                    ATerm h_33 = NULL;
                    ATerm i_33 = NULL;
                    ATerm n_5 (ATerm t)
                    {
                      t = not_null(c_33);
                      return(t);
                    }
                    t = long_description_1(t, n_5);
                    {
                      i_33 = t;
                      if(((h_33 != NULL) && (h_33 != i_33)))
                        _fail(i_33);
                      else
                        h_33 = i_33;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(h_33)), term_p_23);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_5);
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
  ATerm s_23;
  s_23 = t;
  {
    ATerm y_33 = NULL;
    ATerm a_34 = NULL;
    a_34 = t;
    if(((y_33 != NULL) && (y_33 != a_34)))
      _fail(a_34);
    else
      y_33 = a_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, not_null(y_33)));
      t = printnl_0(t);
    }
  }
  t = s_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_78 (ATerm))
{
  ATerm t_23;
  t_23 = t;
  {
    t = r_78(t);
    t = debug_0(t);
  }
  t = t_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_53 (ATerm))
{
  ATerm n_34 = NULL,y_34 = NULL;
  n_34 = t;
  j_34 :
  if(match_cons(n_34, sym_Undefined_1))
    {
      y_34 = ATgetArgument(n_34, 0);
      {
        ATerm b_35 = NULL,e_35 = NULL;
        ATerm d_35 = NULL;
        t = SSLgetAnnotations(not_null(n_34));
        {
          d_35 = t;
          if(((b_35 != NULL) && (b_35 != d_35)))
            _fail(d_35);
          else
            b_35 = d_35;
        }
        {
          t = not_null(y_34);
          {
            ATerm g_35 = NULL;
            t = b_53(t);
            {
              e_35 = t;
              {
                ATerm h_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_35)), not_null(b_35));
                {
                  h_35 = t;
                  if(((g_35 != NULL) && (g_35 != h_35)))
                    _fail(h_35);
                  else
                    g_35 = h_35;
                }
                t = not_null(g_35);
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
  ATerm s_35 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_65, _id);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = Cons_2(t, _id, s_35);
      }
    return(t);
  }
  t = s_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_77 (ATerm))
{
  t = fetch_1(t, c_77);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  w_35 :
  if(match_cons(x_35, sym_Help_0))
    {
      ATerm e_36 = NULL,g_36 = NULL;
      ATerm a_24;
      a_24 = t;
      {
        ATerm f_36 = NULL;
        t = SSLgetAnnotations(not_null(x_35));
        {
          f_36 = t;
          if(((e_36 != NULL) && (e_36 != f_36)))
            _fail(f_36);
          else
            e_36 = f_36;
        }
      }
      t = a_24;
      {
        ATerm h_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_36));
        {
          h_36 = t;
          if(((g_36 != NULL) && (g_36 != h_36)))
            _fail(h_36);
          else
            g_36 = h_36;
        }
        t = not_null(g_36);
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
  ATerm m_36 = NULL;
  m_36 = t;
  t = SSL_implode_string(not_null(m_36));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
        r_36 = t;
        q_36 :
        if(((ATgetType(r_36) == AT_LIST) && !(ATisEmpty(r_36))))
          {
            s_36 = ATgetFirst((ATermList) r_36);
            t_36 = (ATerm) ATgetNext((ATermList) r_36);
            {
              t = not_null(s_36);
              {
                ATerm p_5 (ATerm t)
                {
                  t = not_null(t_36);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_5);
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
  ATerm d_37 = NULL;
  ATerm f_37 = NULL;
  d_37 = t;
  {
    ATerm g_37 = NULL;
    ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
    t = not_null(d_37);
    {
      g_37 = t;
      {
        t = SSL_explode_term(not_null(g_37));
        {
          i_37 = t;
          b_37 :
          if(match_cons(i_37, sym__2))
            {
              j_37 = ATgetArgument(i_37, 0);
              k_37 = ATgetArgument(i_37, 1);
              c_37 :
              if(match_string(j_37, ""))
                {
                  if(((f_37 != NULL) && (f_37 != k_37)))
                    _fail(k_37);
                  else
                    f_37 = k_37;
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
      t = not_null(f_37);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm o_37 (ATerm t)
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_37);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          t = Nil_0(t);
          t = l_65(t);
        }
      }
    return(t);
  }
  t = o_37(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  r_37 = t;
  q_37 :
  if(match_cons(r_37, sym__2))
    {
      s_37 = ATgetArgument(r_37, 0);
      t_37 = ATgetArgument(r_37, 1);
      {
        t = not_null(s_37);
        {
          ATerm r_5 (ATerm t)
          {
            t = not_null(t_37);
            return(t);
          }
          t = at_end_1(t, r_5);
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
      ;
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
  ATerm y_37 = NULL;
  y_37 = t;
  t = SSL_explode_string(not_null(y_37));
  return(t);
}
ATerm _2 (ATerm t, ATerm w_50 (ATerm), ATerm x_50 (ATerm))
{
  ATerm h_38 = NULL,i_38 = NULL,n_38 = NULL;
  h_38 = t;
  g_38 :
  if(match_cons(h_38, sym__2))
    {
      i_38 = ATgetArgument(h_38, 0);
      n_38 = ATgetArgument(h_38, 1);
      {
        ATerm t_38 = NULL,v_38 = NULL;
        ATerm u_38 = NULL;
        t = SSLgetAnnotations(not_null(h_38));
        {
          u_38 = t;
          if(((t_38 != NULL) && (t_38 != u_38)))
            _fail(u_38);
          else
            t_38 = u_38;
        }
        {
          t = not_null(i_38);
          {
            ATerm a_39 = NULL;
            t = w_50(t);
            {
              v_38 = t;
              {
                t = not_null(n_38);
                {
                  ATerm c_39 = NULL;
                  t = x_50(t);
                  {
                    a_39 = t;
                    {
                      ATerm d_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_38), not_null(a_39)), not_null(t_38));
                      {
                        d_39 = t;
                        if(((c_39 != NULL) && (c_39 != d_39)))
                          _fail(d_39);
                        else
                          c_39 = d_39;
                      }
                      t = not_null(c_39);
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
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym__2))
    {
      m_39 = ATgetArgument(l_39, 0);
      n_39 = ATgetArgument(l_39, 1);
      {
        ATerm r_24;
        r_24 = t;
        t = SSL_printnl(not_null(m_39), not_null(n_39));
        t = r_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm s_24;
  s_24 = t;
  {
    ATerm t_39 = NULL,v_39 = NULL;
    ATerm t_24;
    t_24 = t;
    {
      ATerm u_39 = NULL;
      t = q_78(t);
      {
        u_39 = t;
        if(((t_39 != NULL) && (t_39 != u_39)))
          _fail(u_39);
        else
          t_39 = u_39;
      }
    }
    t = t_24;
    {
      ATerm w_39 = NULL;
      w_39 = t;
      if(((v_39 != NULL) && (v_39 != w_39)))
        _fail(w_39);
      else
        v_39 = w_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_39)), not_null(t_39)));
        t = printnl_0(t);
      }
    }
  }
  t = s_24;
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm z_39 (ATerm t)
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = Cons_2(t, w_64, z_39);
      }
    return(t);
  }
  t = z_39(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm b_40 = NULL;
  b_40 = t;
  t = SSL_is_string(not_null(b_40));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm w_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = w_24;
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, u_5);
            ;
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            {
              ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
              k_40 = t;
              j_40 :
              if(match_cons(k_40, sym_Path_1))
                {
                  l_40 = ATgetArgument(k_40, 0);
                  t = not_null(l_40);
                }
              else
                {
                  if(match_cons(k_40, sym_Var_1))
                    {
                      l_40 = ATgetArgument(k_40, 0);
                      {
                        t = not_null(l_40);
                        {
                          ATerm j_25 = t;
                          int k_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(k_25);
                            }
                          else
                            {
                              t = j_25;
                              {
                                ATerm v_5 (ATerm t)
                                {
                                  t = term_l_25;
                                  return(t);
                                }
                                t = debug_1(t, v_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_40, sym_Prefix_2))
                        {
                          l_40 = ATgetArgument(k_40, 0);
                          m_40 = ATgetArgument(k_40, 1);
                          {
                            ATerm r_40 = NULL,t_40 = NULL;
                            ATerm o_25;
                            o_25 = t;
                            {
                              ATerm s_40 = NULL;
                              t = not_null(l_40);
                              {
                                t = eval_config_0(t);
                                {
                                  s_40 = t;
                                  if(((r_40 != NULL) && (r_40 != s_40)))
                                    _fail(s_40);
                                  else
                                    r_40 = s_40;
                                }
                              }
                            }
                            t = o_25;
                            {
                              ATerm u_40 = NULL;
                              t = not_null(m_40);
                              {
                                t = eval_config_0(t);
                                {
                                  u_40 = t;
                                  if(((t_40 != NULL) && (t_40 != u_40)))
                                    _fail(u_40);
                                  else
                                    t_40 = u_40;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_40), not_null(t_40));
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
  ATerm c_41 = NULL;
  c_41 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_14, not_null(c_41));
    {
      t = table_get_0(t);
      {
        ATerm w_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_25;
            p_25 = t;
            {
              ATerm e_41 = NULL;
              ATerm f_41 = NULL;
              f_41 = t;
              if(((e_41 != NULL) && (e_41 != f_41)))
                _fail(f_41);
              else
                e_41 = f_41;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_14, not_null(c_41), not_null(e_41));
                t = table_put_0(t);
              }
            }
            t = p_25;
          }
          return(t);
        }
        t = try_1(t, w_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_63 (ATerm))
{
  ATerm q_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_63(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = q_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  j_41 :
  if(match_cons(k_41, sym__2))
    {
      l_41 = ATgetArgument(k_41, 0);
      m_41 = ATgetArgument(k_41, 1);
      t = SSL_table_get(not_null(l_41), not_null(m_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  t_41 = t;
  s_41 :
  if(match_cons(t_41, sym__3))
    {
      u_41 = ATgetArgument(t_41, 0);
      v_41 = ATgetArgument(t_41, 1);
      w_41 = ATgetArgument(t_41, 2);
      {
        ATerm t_25;
        t_25 = t;
        {
          ATerm a_42 = NULL;
          ATerm b_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_41), not_null(v_41));
          {
            ATerm z_25 = t;
            int a_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(a_26);
              }
            else
              {
                t = z_25;
                t = (ATerm) ATempty;
              }
            {
              b_42 = t;
              if(((a_42 != NULL) && (a_42 != b_42)))
                _fail(b_42);
              else
                a_42 = b_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_41), not_null(v_41), (ATerm) ATinsert(CheckATermList(not_null(a_42)), not_null(w_41)));
            t = table_put_0(t);
          }
        }
        t = t_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_78 (ATerm))
{
  ATerm f_42 = NULL;
  ATerm g_42 = NULL;
  t = term_l_13;
  {
    t = h_78(t);
    {
      g_42 = t;
      if(((f_42 != NULL) && (f_42 != g_42)))
        _fail(g_42);
      else
        f_42 = g_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_23, term_l_23, not_null(f_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  l_42 :
  if(match_string(m_42, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(m_42) == AT_LIST) && !(ATisEmpty(m_42))))
        {
          n_42 = ATgetFirst((ATermList) m_42);
          o_42 = (ATerm) ATgetNext((ATermList) m_42);
          {
            ATerm r_42 = NULL;
            ATerm b_26;
            b_26 = t;
            {
              t = not_null(n_42);
              t = a_0(t);
            }
            t = b_26;
            {
              ATerm s_42 = NULL;
              t = term_l_13;
              {
                t = d_0(t);
                {
                  s_42 = t;
                  if(((r_42 != NULL) && (r_42 != s_42)))
                    _fail(s_42);
                  else
                    r_42 = s_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_42)), not_null(r_42));
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
  ATerm x_5 (ATerm t)
  {
    ATerm x_42 = NULL;
    x_42 = t;
    w_42 :
    if(!(match_string(x_42, "--help")))
      {
        if(!(match_string(x_42, "-h")))
          {
            if(!(match_string(x_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_h_26;
    {
      t = set_config_0(t);
      t = term_j_26;
    }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = term_k_26;
    return(t);
  }
  t = Option_3(t, x_5, a_6, b_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  z_42 :
  if(((ATgetType(a_43) == AT_LIST) && !(ATisEmpty(a_43))))
    {
      b_43 = ATgetFirst((ATermList) a_43);
      c_43 = (ATerm) ATgetNext((ATermList) a_43);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_43)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_43)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_52 (ATerm), ATerm g_52 (ATerm))
{
  ATerm m_43 = NULL,q_43 = NULL,r_43 = NULL;
  m_43 = t;
  l_43 :
  if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
    {
      q_43 = ATgetFirst((ATermList) m_43);
      r_43 = (ATerm) ATgetNext((ATermList) m_43);
      {
        ATerm v_43 = NULL,x_43 = NULL;
        ATerm w_43 = NULL;
        t = SSLgetAnnotations(not_null(m_43));
        {
          w_43 = t;
          if(((v_43 != NULL) && (v_43 != w_43)))
            _fail(w_43);
          else
            v_43 = w_43;
        }
        {
          t = not_null(q_43);
          {
            ATerm z_43 = NULL;
            t = f_52(t);
            {
              x_43 = t;
              {
                t = not_null(r_43);
                {
                  ATerm b_44 = NULL;
                  t = g_52(t);
                  {
                    z_43 = t;
                    {
                      ATerm c_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_43)), not_null(x_43)), not_null(v_43));
                      {
                        c_44 = t;
                        if(((b_44 != NULL) && (b_44 != c_44)))
                          _fail(c_44);
                        else
                          b_44 = c_44;
                      }
                      t = not_null(b_44);
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
  ATerm n_44 = NULL;
  n_44 = t;
  m_44 :
  if(((ATgetType(n_44) == AT_LIST) && ATisEmpty(n_44)))
    {
      {
        ATerm r_44 = NULL,t_44 = NULL;
        ATerm l_26;
        l_26 = t;
        {
          ATerm s_44 = NULL;
          t = SSLgetAnnotations(not_null(n_44));
          {
            s_44 = t;
            if(((r_44 != NULL) && (r_44 != s_44)))
              _fail(s_44);
            else
              r_44 = s_44;
          }
        }
        t = l_26;
        {
          ATerm u_44 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_44));
          {
            u_44 = t;
            if(((t_44 != NULL) && (t_44 != u_44)))
              _fail(u_44);
            else
              t_44 = u_44;
          }
          t = not_null(t_44);
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
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
  a_45 = t;
  z_44 :
  if(match_cons(a_45, sym__2))
    {
      b_45 = ATgetArgument(a_45, 0);
      c_45 = ATgetArgument(a_45, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_14, not_null(b_45), not_null(c_45));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm q_26;
  q_26 = t;
  {
    ATerm e_6 (ATerm t)
    {
      t = term_r_26;
      t = f_78(t);
      return(t);
    }
    t = try_1(t, e_6);
  }
  t = q_26;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm k_45 = NULL;
      ATerm s_26;
      s_26 = t;
      {
        ATerm i_45 = NULL;
        ATerm j_45 = NULL;
        j_45 = t;
        if(((i_45 != NULL) && (i_45 != j_45)))
          _fail(j_45);
        else
          i_45 = j_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_21, not_null(i_45));
          t = set_config_0(t);
        }
      }
      t = s_26;
      {
        ATerm l_45 = NULL;
        l_45 = t;
        if(((k_45 != NULL) && (k_45 != l_45)))
          _fail(l_45);
        else
          k_45 = l_45;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_45));
      }
      return(t);
    }
    ATerm g_6 (ATerm t)
    {
      ATerm t_26 = t;
      int u_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_26 = t;
          int a_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(a_27);
            }
          else
            {
              t = z_26;
              {
                t = f_78(t);
                t = Cons_2(t, _id, g_6);
              }
            }
          ;
          LocalPopChoice(u_26);
        }
      else
        {
          t = t_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_6, g_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_45 = NULL,b_46 = NULL,c_46 = NULL;
  ATerm d_27;
  d_27 = t;
  {
    ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
    d_46 = t;
    s_45 :
    if(match_cons(d_46, sym__3))
      {
        e_46 = ATgetArgument(d_46, 0);
        f_46 = ATgetArgument(d_46, 1);
        g_46 = ATgetArgument(d_46, 2);
        {
          if(((t_45 != NULL) && (t_45 != e_46)))
            _fail(e_46);
          else
            t_45 = e_46;
          {
            if(((b_46 != NULL) && (b_46 != f_46)))
              _fail(f_46);
            else
              b_46 = f_46;
            {
              if(((c_46 != NULL) && (c_46 != g_46)))
                _fail(g_46);
              else
                c_46 = g_46;
              t = SSL_table_put(not_null(t_45), not_null(b_46), not_null(c_46));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm j_46 = NULL;
  ATerm e_27;
  e_27 = t;
  {
    t = term_f_27;
    t = table_put_0(t);
  }
  t = e_27;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm g_27 = t;
      int h_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_78(t);
          ;
          LocalPopChoice(h_27);
        }
      else
        {
          t = g_27;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_6);
    {
      ATerm s_6 (ATerm t)
      {
        ATerm k_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_27;
            r_27 = t;
            {
              ATerm s_27 = t;
              int t_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_g_26;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(t_27);
                }
              else
                {
                  t = s_27;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = r_27;
            {
              t = system_usage_0(t);
              {
                t = term_x_18;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(n_27);
          }
        else
          {
            t = k_27;
            {
              ATerm t_6 (ATerm t)
              {
                ATerm u_6 (ATerm t)
                {
                  ATerm k_46 = NULL;
                  k_46 = t;
                  if(((j_46 != NULL) && (j_46 != k_46)))
                    _fail(k_46);
                  else
                    j_46 = k_46;
                  return(t);
                }
                t = Undefined_1(t, u_6);
                return(t);
              }
              t = option_defined_1(t, t_6);
              {
                ATerm v_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_46)), term_u_27);
                  return(t);
                }
                t = say_1(t, v_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_6);
      {
        ATerm z_27;
        z_27 = t;
        {
          t = term_h_23;
          t = table_destroy_0(t);
        }
        t = z_27;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm))
{
  t = parse_options_1(t, b_76);
  {
    t = store_options_0(t);
    {
      t = d_76(t);
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_76);
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            {
              ATerm c_28 = t;
              int i_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_76(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_28);
                }
              else
                {
                  t = c_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm f_76 (ATerm), ATerm g_76 (ATerm))
{
  t = option_wrap_4(t, f_76, default_usage_0, _id, g_76);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm n_74 (ATerm), ATerm o_74 (ATerm))
{
  ATerm b_7 (ATerm t)
  {
    ATerm j_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_74(t);
        ;
        LocalPopChoice(m_28);
      }
    else
      {
        t = j_28;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    t = xtc_io_1(t, o_74);
    return(t);
  }
  t = option_wrap_2(t, b_7, c_7);
  return(t);
}
ATerm sglri_0 (ATerm t)
{
  t = xtc_io_wrap_2(t, sglri_options_0, parse_and_implode_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sglri_0(t);
  return(t);
}
