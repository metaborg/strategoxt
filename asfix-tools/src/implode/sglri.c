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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_t_28;
ATerm term_y_27;
ATerm term_h_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_r_26;
ATerm term_x_25;
ATerm term_r_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_e_23;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_f_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_o_17;
ATerm term_i_15;
ATerm term_b_15;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_v_13;
ATerm term_m_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_r_11;
ATerm term_k_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_y_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_z_8;
ATerm term_j_8;
ATerm term_b_8;
ATerm term_r_7;
ATerm term_o_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_c_6;
ATerm term_z_5;
ATerm term_u_5;
void init_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym__2, term_h_7, term_o_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_h_7, term_h_9);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_k_11);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_p_12);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_y_6, term_r_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_p_12);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_p_12);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_i_23, term_j_23);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_r_26, term_p_12);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__3, term_i_23, term_j_23, (ATerm) ATempty);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm implode_asfix_1 (ATerm, ATerm y_57 (ATerm));
ATerm fatal_error_0 (ATerm);
ATerm get_parse_table_0 (ATerm);
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
ATerm obsolete_1 (ATerm, ATerm f_78 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm l_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm g_74 (ATerm), ATerm h_74 (ATerm));
ATerm sglr_2 (ATerm, ATerm w_57 (ATerm), ATerm x_57 (ATerm));
ATerm parse_and_implode_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm sglri_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm o_0 (ATerm));
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
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
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
ATerm need_help_1 (ATerm, ATerm d_75 (ATerm));
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
ATerm Program_1 (ATerm, ATerm s_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm z_77 (ATerm));
ATerm Undefined_1 (ATerm, ATerm t_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm p_50 (ATerm), ATerm q_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm y_77 (ATerm));
ATerm map_1 (ATerm, ATerm i_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_51 (ATerm), ATerm z_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm z_73 (ATerm), ATerm a_74 (ATerm));
ATerm sglri_0 (ATerm);
ATerm main_0 (ATerm);
ATerm implode_asfix_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = term_u_5;
    return(t);
  }
  t = xtc_transform_2(t, b_0, y_57);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm w_5;
  w_5 = t;
  {
    t = error_0(t);
    {
      t = term_z_5;
      t = exit_0(t);
    }
  }
  t = w_5;
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_6;
      t = get_config_0(t);
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      {
        t = (ATerm) ATinsert(ATempty, term_f_6);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm g_1 = NULL,k_1 = NULL;
  g_1 = t;
  f_1 :
  if(match_cons(g_1, sym_stdin_0))
    {
      ATerm l_1 = NULL;
      ATerm a_2 = NULL;
      t = term_g_6;
      {
        t = ReadFromFile_0(t);
        {
          a_2 = t;
          if(((l_1 != NULL) && (l_1 != a_2)))
            _fail(a_2);
          else
            l_1 = a_2;
        }
      }
      t = not_null(l_1);
    }
  else
    {
      if(match_cons(g_1, sym_FILE_1))
        {
          k_1 = ATgetArgument(g_1, 0);
          {
            ATerm c_2 = NULL;
            ATerm u_2 = NULL;
            t = not_null(k_1);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  u_2 = t;
                  if(((c_2 != NULL) && (c_2 != u_2)))
                    _fail(u_2);
                  else
                    c_2 = u_2;
                }
              }
            }
            t = not_null(c_2);
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
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  g_3 = t;
  f_3 :
  if(match_cons(g_3, sym__2))
    {
      h_3 = ATgetArgument(g_3, 0);
      i_3 = ATgetArgument(g_3, 1);
      t = SSL_WriteToBinaryFile(not_null(h_3), not_null(i_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm o_3 = NULL;
  ATerm q_3 = NULL;
  o_3 = t;
  {
    ATerm r_3 = NULL;
    t = xtc_new_file_0(t);
    {
      r_3 = t;
      {
        if(((q_3 != NULL) && (q_3 != r_3)))
          _fail(r_3);
        else
          q_3 = r_3;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_3), not_null(o_3));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(q_3);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_3));
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
  ATerm v_3 = NULL;
  v_3 = t;
  t = SSL_close_file(not_null(v_3));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
  a_4 = t;
  z_3 :
  if(match_cons(a_4, sym__2))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      t = SSL_execvp(not_null(b_4), not_null(c_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm h_4 = NULL;
  h_4 = t;
  t = SSL_waitpid(not_null(h_4));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm r_4 = NULL;
  ATerm t_4 = NULL;
  r_4 = t;
  {
    t = fork_0(t);
    {
      t_4 = t;
      {
        ATerm j_6 = t;
        int k_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 = NULL;
            v_4 = t;
            n_4 :
            if(match_int(v_4, 0))
              {
                t = not_null(r_4);
                t = a_59(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(k_6);
          }
        else
          {
            t = j_6;
            {
              ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
              t = not_null(t_4);
              {
                t = waitpid_0(t);
                {
                  w_4 = t;
                  p_4 :
                  if(match_cons(w_4, sym_WaitStatus_3))
                    {
                      x_4 = ATgetArgument(w_4, 0);
                      y_4 = ATgetArgument(w_4, 1);
                      z_4 = ATgetArgument(w_4, 2);
                      q_4 :
                      if(match_int(x_4, 0))
                        {
                          t = not_null(r_4);
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
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
  g_5 = t;
  f_5 :
  if(match_cons(g_5, sym__2))
    {
      h_5 = ATgetArgument(g_5, 0);
      i_5 = ATgetArgument(g_5, 1);
      {
        ATerm c_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), not_null(i_5));
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
  ATerm n_5 = NULL;
  n_5 = t;
  t = SSL_table_keys(not_null(n_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm t_5 = NULL;
  t_5 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm v_5 = NULL;
        ATerm x_5 = NULL;
        v_5 = t;
        {
          ATerm y_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(v_5));
          {
            t = table_get_0(t);
            {
              y_5 = t;
              if(((x_5 != NULL) && (x_5 != y_5)))
                _fail(y_5);
              else
                x_5 = y_5;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_5), not_null(x_5));
        }
        return(t);
      }
      t = map_1(t, e_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm l_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6;
      x_6 = t;
      {
        ATerm d_6 = NULL;
        ATerm e_6 = NULL;
        t = term_y_6;
        {
          t = get_config_0(t);
          {
            e_6 = t;
            if(((d_6 != NULL) && (d_6 != e_6)))
              _fail(e_6);
            else
              d_6 = e_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), term_z_6);
          t = geq_0(t);
        }
      }
      t = x_6;
      t = i_59(t);
      LocalPopChoice(p_6);
    }
  else
    {
      t = l_6;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm a_7;
  a_7 = t;
  {
    ATerm h_6 = NULL;
    ATerm i_6 = NULL;
    i_6 = t;
    if(((h_6 != NULL) && (h_6 != i_6)))
      _fail(i_6);
    else
      h_6 = i_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_7, not_null(h_6));
      t = printnl_0(t);
    }
  }
  t = a_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm o_6 = NULL;
  ATerm q_6 = NULL,r_6 = NULL;
  o_6 = t;
  {
    ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_6)));
    {
      t = table_get_0(t);
      {
        s_6 = t;
        m_6 :
        if(((ATgetType(s_6) == AT_LIST) && !(ATisEmpty(s_6))))
          {
            t_6 = ATgetFirst((ATermList) s_6);
            w_6 = (ATerm) ATgetNext((ATermList) s_6);
            n_6 :
            if(match_cons(t_6, sym__2))
              {
                u_6 = ATgetArgument(t_6, 0);
                v_6 = ATgetArgument(t_6, 1);
                {
                  if(((q_6 != NULL) && (q_6 != u_6)))
                    _fail(u_6);
                  else
                    q_6 = u_6;
                  if(((r_6 != NULL) && (r_6 != v_6)))
                    _fail(v_6);
                  else
                    r_6 = v_6;
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
    t = not_null(r_6);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym__2))
    {
      e_7 = ATgetArgument(d_7, 0);
      f_7 = ATgetArgument(d_7, 1);
      {
        ATerm i_7 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(e_7)));
        {
          t = table_get_0(t);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
              j_7 = t;
              b_7 :
              if(match_cons(j_7, sym__2))
                {
                  k_7 = ATgetArgument(j_7, 0);
                  l_7 = ATgetArgument(j_7, 1);
                  {
                    if(((f_7 != NULL) && (f_7 != k_7)))
                      _fail(k_7);
                    else
                      f_7 = k_7;
                    if(((i_7 != NULL) && (i_7 != l_7)))
                      _fail(l_7);
                    else
                      i_7 = l_7;
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
        t = not_null(i_7);
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
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_7;
      {
        t = table_get_0(t);
        {
          ATerm r_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, r_0);
        }
      }
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm s_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_7;
      w_7 = t;
      {
        ATerm p_7 = NULL;
        ATerm q_7 = NULL;
        t = term_y_6;
        {
          t = get_config_0(t);
          {
            q_7 = t;
            if(((p_7 != NULL) && (p_7 != q_7)))
              _fail(q_7);
            else
              p_7 = q_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_7), term_b_8);
          t = geq_0(t);
        }
      }
      t = w_7;
      t = h_59(t);
      LocalPopChoice(v_7);
    }
  else
    {
      t = s_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8;
      e_8 = t;
      {
        ATerm t_7 = NULL;
        ATerm u_7 = NULL;
        t = term_y_6;
        {
          t = get_config_0(t);
          {
            u_7 = t;
            if(((t_7 != NULL) && (t_7 != u_7)))
              _fail(u_7);
            else
              t_7 = u_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_7), term_j_8);
          t = geq_0(t);
        }
      }
      t = e_8;
      t = j_59(t);
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
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
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  y_7 = t;
  x_7 :
  if(match_cons(y_7, sym__2))
    {
      z_7 = ATgetArgument(y_7, 0);
      a_8 = ATgetArgument(y_7, 1);
      if(((z_7 != NULL) && (z_7 != a_8)))
        _fail(a_8);
      else
        z_7 = a_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm j_70 (ATerm), ATerm k_70 (ATerm))
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  f_8 :
  if(((ATgetType(g_8) == AT_LIST) && !(ATisEmpty(g_8))))
    {
      h_8 = ATgetFirst((ATermList) g_8);
      i_8 = (ATerm) ATgetNext((ATermList) g_8);
      {
        t = k_70(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm l_8 = NULL;
            l_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), not_null(l_8));
              t = j_70(t);
            }
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(i_8);
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
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  r_8 = t;
  q_8 :
  if(match_cons(r_8, sym__2))
    {
      s_8 = ATgetArgument(r_8, 0);
      t_8 = ATgetArgument(r_8, 1);
      {
        t = not_null(s_8);
        {
          ATerm x_8 (ATerm t)
          {
            ATerm k_8 = t;
            int m_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_8);
                LocalPopChoice(m_8);
              }
            else
              {
                t = k_8;
                {
                  ATerm n_8 = t;
                  int o_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(t_8);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_70, t_0);
                      t = x_8(t);
                      LocalPopChoice(o_8);
                    }
                  else
                    {
                      t = n_8;
                      t = Cons_2(t, _id, x_8);
                    }
                }
              }
            return(t);
          }
          t = x_8(t);
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
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym__3))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      f_9 = ATgetArgument(c_9, 2);
      {
        ATerm p_8;
        p_8 = t;
        {
          ATerm j_9 = NULL;
          ATerm k_9 = NULL,m_9 = NULL;
          ATerm l_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(e_9));
          {
            ATerm u_8 = t;
            int v_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_8);
              }
            else
              {
                t = u_8;
                t = (ATerm) ATempty;
              }
            {
              l_9 = t;
              if(((k_9 != NULL) && (k_9 != l_9)))
                _fail(l_9);
              else
                k_9 = l_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_9), not_null(f_9));
            {
              t = union_1(t, eq_0);
              {
                m_9 = t;
                if(((j_9 != NULL) && (j_9 != m_9)))
                  _fail(m_9);
                else
                  j_9 = m_9;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_9), not_null(e_9), not_null(j_9));
            t = table_put_0(t);
          }
        }
        t = p_8;
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
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
  u_9 = t;
  t_9 :
  if(match_cons(u_9, sym__2))
    {
      v_9 = ATgetArgument(u_9, 0);
      w_9 = ATgetArgument(u_9, 1);
      {
        t = not_null(w_9);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
            z_9 = t;
            s_9 :
            if(match_cons(z_9, sym__2))
              {
                a_10 = ATgetArgument(z_9, 0);
                b_10 = ATgetArgument(z_9, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_9), not_null(a_10), not_null(b_10));
                  t = s_59(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_10 = NULL;
  ATerm w_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_10 = NULL;
      i_10 = t;
      {
        if(((h_10 != NULL) && (h_10 != i_10)))
          _fail(i_10);
        else
          h_10 = i_10;
        t = SSL_ReadFromFile(not_null(h_10));
      }
      LocalPopChoice(y_8);
    }
  else
    {
      t = w_8;
      {
        ATerm v_0 (ATerm t)
        {
          t = term_z_8;
          return(t);
        }
        t = debug_1(t, v_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm m_10 = NULL;
  ATerm o_10 = NULL;
  m_10 = t;
  {
    ATerm a_9 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(m_10)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_9;
      }
    {
      ATerm g_9;
      g_9 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_7, term_h_9, (ATerm) ATinsert(ATempty, not_null(m_10)));
        t = table_put_0(t);
      }
      t = g_9;
      {
        ATerm w_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = term_i_9;
            return(t);
          }
          t = debug_1(t, x_0);
          return(t);
        }
        t = if_verbose4_1(t, w_0);
        {
          ATerm n_9 = t;
          int o_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(o_9);
            }
          else
            {
              t = n_9;
              t = (ATerm) ATempty;
            }
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = term_p_9;
                return(t);
              }
              t = say_1(t, z_0);
              return(t);
            }
            t = if_verbose6_1(t, y_0);
            {
              ATerm p_10 = NULL;
              p_10 = t;
              if(((o_10 != NULL) && (o_10 != p_10)))
                _fail(p_10);
              else
                o_10 = p_10;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_h_7, not_null(o_10));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm a_1 (ATerm t)
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = term_q_9;
                        return(t);
                      }
                      t = say_1(t, b_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, a_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_h_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(m_10)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm c_1 (ATerm t)
                          {
                            ATerm d_1 (ATerm t)
                            {
                              t = term_p_9;
                              return(t);
                            }
                            t = say_1(t, d_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, c_1);
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
  ATerm t_10 = NULL;
  t_10 = t;
  t = SSL_getenv(not_null(t_10));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm r_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_9;
      t = get_config_0(t);
      LocalPopChoice(x_9);
    }
  else
    {
      t = r_9;
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_10;
            t = getenv_0(t);
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm h_1 (ATerm t)
    {
      t = term_f_10;
      return(t);
    }
    t = debug_1(t, h_1);
    return(t);
  }
  t = if_verbose5_1(t, e_1);
  {
    ATerm g_10;
    g_10 = t;
    {
      ATerm j_10 = t;
      int k_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_l_10;
          t = table_get_0(t);
          LocalPopChoice(k_10);
        }
      else
        {
          t = j_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = g_10;
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          t = term_n_10;
          return(t);
        }
        t = debug_1(t, j_1);
        return(t);
      }
      t = if_verbose5_1(t, i_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          t = term_s_10;
          return(t);
        }
        t = debug_1(t, n_1);
        return(t);
      }
      t = if_verbose5_1(t, m_1);
      {
        t = xtc_load_0(t);
        {
          ATerm u_10 = t;
          int v_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(v_10);
            }
          else
            {
              t = u_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = term_s_10;
                return(t);
              }
              t = debug_1(t, p_1);
              return(t);
            }
            t = if_verbose5_1(t, o_1);
          }
        }
      }
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm x_10 = NULL;
        ATerm y_10 = NULL;
        y_10 = t;
        if(((x_10 != NULL) && (x_10 != y_10)))
          _fail(y_10);
        else
          x_10 = y_10;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_10), not_null(x_10)), term_w_10);
          {
            t = error_0(t);
            {
              ATerm q_1 (ATerm t)
              {
                t = term_h_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm r_1 (ATerm t)
                    {
                      t = term_a_11;
                      return(t);
                    }
                    t = debug_1(t, r_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, q_1);
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
  ATerm c_11 = NULL;
  ATerm b_11;
  b_11 = t;
  {
    ATerm d_11 = NULL;
    t = e_74(t);
    {
      t = xtc_find_0(t);
      {
        d_11 = t;
        if(((c_11 != NULL) && (c_11 != d_11)))
          _fail(d_11);
        else
          c_11 = d_11;
      }
    }
  }
  t = b_11;
  {
    ATerm g_11;
    g_11 = t;
    {
      ATerm e_11 = NULL;
      ATerm f_11 = NULL;
      f_11 = t;
      if(((e_11 != NULL) && (e_11 != f_11)))
        _fail(f_11);
      else
        e_11 = f_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), not_null(e_11));
        t = call_0(t);
      }
    }
    t = g_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm a_75 (ATerm))
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym__2))
    {
      o_11 = ATgetArgument(n_11, 0);
      p_11 = ATgetArgument(n_11, 1);
      {
        ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
        ATerm h_11;
        h_11 = t;
        {
          ATerm v_11 = NULL;
          ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
          t = a_75(t);
          {
            v_11 = t;
            {
              if(((s_11 != NULL) && (s_11 != v_11)))
                _fail(v_11);
              else
                s_11 = v_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_11), not_null(o_11), not_null(p_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_11 = t;
                    int j_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), term_k_11);
                        t = table_get_0(t);
                        LocalPopChoice(j_11);
                      }
                    else
                      {
                        t = i_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      w_11 = t;
                      l_11 :
                      if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
                        {
                          x_11 = ATgetFirst((ATermList) w_11);
                          y_11 = (ATerm) ATgetNext((ATermList) w_11);
                          {
                            if(((t_11 != NULL) && (t_11 != x_11)))
                              _fail(x_11);
                            else
                              t_11 = x_11;
                            {
                              if(((u_11 != NULL) && (u_11 != y_11)))
                                _fail(y_11);
                              else
                                u_11 = y_11;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(s_11), term_k_11, (ATerm) ATinsert(CheckATermList(not_null(u_11)), (ATerm) ATinsert(CheckATermList(not_null(t_11)), not_null(o_11))));
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
        t = h_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm q_11;
  q_11 = t;
  {
    t = f_78(t);
    {
      ATerm s_1 (ATerm t)
      {
        t = term_r_11;
        return(t);
      }
      t = debug_1(t, s_1);
    }
  }
  t = q_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
      i_12 = t;
      d_12 :
      if(match_cons(i_12, sym__2))
        {
          j_12 = ATgetArgument(i_12, 0);
          k_12 = ATgetArgument(i_12, 1);
          {
            if(((h_12 != NULL) && (h_12 != j_12)))
              _fail(j_12);
            else
              h_12 = j_12;
            if(((g_12 != NULL) && (g_12 != k_12)))
              _fail(k_12);
            else
              g_12 = k_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_12);
      t = SSL_open_file(not_null(h_12), not_null(g_12));
    }
  else
    {
      t = z_11;
      {
        ATerm l_12 = NULL;
        ATerm m_12 = NULL;
        ATerm t_1 (ATerm t)
        {
          t = term_b_12;
          return(t);
        }
        t = obsolete_1(t, t_1);
        {
          l_12 = t;
          {
            if(((h_12 != NULL) && (h_12 != l_12)))
              _fail(l_12);
            else
              h_12 = l_12;
            {
              ATerm c_12;
              c_12 = t;
              {
                ATerm n_12 = NULL;
                t = term_e_12;
                {
                  n_12 = t;
                  if(((m_12 != NULL) && (m_12 != n_12)))
                    _fail(n_12);
                  else
                    m_12 = n_12;
                }
              }
              t = c_12;
              t = SSL_open_file(not_null(h_12), not_null(m_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm t_12 = NULL;
  ATerm v_12 = NULL;
  t_12 = t;
  {
    ATerm f_12;
    f_12 = t;
    {
      ATerm w_12 = NULL;
      t = term_o_12;
      {
        w_12 = t;
        if(((v_12 != NULL) && (v_12 != w_12)))
          _fail(w_12);
        else
          v_12 = w_12;
      }
    }
    t = f_12;
    {
      t = SSL_open_file(not_null(t_12), not_null(v_12));
      t = SSL_close_file(not_null(t_12));
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
  ATerm a_13 = NULL;
  ATerm b_13 = NULL;
  t = term_p_12;
  {
    t = new_0(t);
    {
      b_13 = t;
      if(((a_13 != NULL) && (a_13 != b_13)))
        _fail(b_13);
      else
        a_13 = b_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), term_q_12);
    {
      t = conc_strings_0(t);
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
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
  ATerm f_13 = NULL;
  t = new_file_0(t);
  {
    f_13 = t;
    {
      ATerm u_12;
      u_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), term_e_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), term_p_12);
            {
              ATerm u_1 (ATerm t)
              {
                t = term_x_12;
                return(t);
              }
              t = assert_1(t, u_1);
            }
          }
        }
      }
      t = u_12;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_stdin_0))
    {
      ATerm r_13 = NULL;
      ATerm s_13 = NULL;
      ATerm t_13 = NULL;
      t = xtc_new_file_0(t);
      {
        s_13 = t;
        {
          if(((r_13 != NULL) && (r_13 != s_13)))
            _fail(s_13);
          else
            r_13 = s_13;
          {
            ATerm u_13 = NULL;
            t = q_0(t);
            {
              u_13 = t;
              if(((t_13 != NULL) && (t_13 != u_13)))
                _fail(u_13);
              else
                t_13 = u_13;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_13)), term_y_12));
              {
                ATerm z_12 = t;
                int c_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(c_13);
                  }
                else
                  {
                    t = z_12;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, p_0);
                  {
                    t = not_null(r_13);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_13));
    }
  else
    {
      if(match_cons(p_13, sym_FILE_1))
        {
          q_13 = ATgetArgument(p_13, 0);
          {
            ATerm w_13 = NULL;
            ATerm x_13 = NULL;
            t = not_null(q_13);
            {
              ATerm y_13 = NULL;
              t = xtc_new_file_0(t);
              {
                x_13 = t;
                {
                  if(((w_13 != NULL) && (w_13 != x_13)))
                    _fail(x_13);
                  else
                    w_13 = x_13;
                  {
                    ATerm z_13 = NULL;
                    t = q_0(t);
                    {
                      z_13 = t;
                      if(((y_13 != NULL) && (y_13 != z_13)))
                        _fail(z_13);
                      else
                        y_13 = z_13;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_13)), term_y_12), not_null(q_13)), term_d_13));
                      {
                        ATerm e_13 = t;
                        int g_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(g_13);
                          }
                        else
                          {
                            t = e_13;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, p_0);
                          {
                            t = not_null(w_13);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_13));
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
  ATerm k_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_stdin_0))
    {
      ATerm m_14 = NULL,o_14 = NULL;
      ATerm h_13;
      h_13 = t;
      {
        ATerm n_14 = NULL;
        t = SSLgetAnnotations(not_null(k_14));
        {
          n_14 = t;
          if(((m_14 != NULL) && (m_14 != n_14)))
            _fail(n_14);
          else
            m_14 = n_14;
        }
      }
      t = h_13;
      {
        ATerm p_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(m_14));
        {
          p_14 = t;
          if(((o_14 != NULL) && (o_14 != p_14)))
            _fail(p_14);
          else
            o_14 = p_14;
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
ATerm FILE_1 (ATerm t, ATerm l_52 (ATerm))
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym_FILE_1))
    {
      z_14 = ATgetArgument(y_14, 0);
      {
        ATerm c_15 = NULL,e_15 = NULL;
        ATerm d_15 = NULL;
        t = SSLgetAnnotations(not_null(y_14));
        {
          d_15 = t;
          if(((c_15 != NULL) && (c_15 != d_15)))
            _fail(d_15);
          else
            c_15 = d_15;
        }
        {
          t = not_null(z_14);
          {
            ATerm g_15 = NULL;
            t = l_52(t);
            {
              e_15 = t;
              {
                ATerm h_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(e_15)), not_null(c_15));
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
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          t = stdin_0(t);
        }
      LocalPopChoice(j_13);
      t = xtc_transform_file_2(t, g_74, h_74);
    }
  else
    {
      t = i_13;
      t = xtc_transform_term_2(t, g_74, h_74);
    }
  return(t);
}
ATerm sglr_2 (ATerm t, ATerm w_57 (ATerm), ATerm x_57 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    t = term_m_13;
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm o_15 = NULL,q_15 = NULL;
    ATerm n_13;
    n_13 = t;
    {
      ATerm p_15 = NULL;
      t = w_57(t);
      {
        p_15 = t;
        if(((o_15 != NULL) && (o_15 != p_15)))
          _fail(p_15);
        else
          o_15 = p_15;
      }
    }
    t = n_13;
    {
      ATerm r_15 = NULL;
      t = x_57(t);
      {
        r_15 = t;
        if(((q_15 != NULL) && (q_15 != r_15)))
          _fail(r_15);
        else
          q_15 = r_15;
      }
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_15)), not_null(o_15)), term_c_6);
    }
    return(t);
  }
  t = xtc_transform_2(t, v_1, w_1);
  return(t);
}
ATerm parse_and_implode_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm v_15 = NULL;
    ATerm w_15 = NULL;
    t = term_v_13;
    {
      ATerm a_14 = t;
      int b_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = get_config_0(t);
          LocalPopChoice(b_14);
        }
      else
        {
          t = a_14;
          t = (ATerm) ATempty;
        }
      {
        w_15 = t;
        if(((v_15 != NULL) && (v_15 != w_15)))
          _fail(w_15);
        else
          v_15 = w_15;
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(v_15)), term_c_14);
    return(t);
  }
  t = sglr_2(t, get_parse_table_0, x_1);
  {
    ATerm y_1 (ATerm t)
    {
      t = term_d_14;
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0(t);
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            t = (ATerm) ATempty;
          }
      }
      return(t);
    }
    t = implode_asfix_1(t, y_1);
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym__2))
    {
      d_16 = ATgetArgument(c_16, 0);
      e_16 = ATgetArgument(c_16, 1);
      {
        ATerm h_16 = NULL;
        ATerm i_16 = NULL,k_16 = NULL;
        ATerm j_16 = NULL;
        t = not_null(d_16);
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              t = (ATerm) ATempty;
            }
          {
            j_16 = t;
            if(((i_16 != NULL) && (i_16 != j_16)))
              _fail(j_16);
            else
              i_16 = j_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), not_null(i_16));
          {
            ATerm i_14 = t;
            int l_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(l_14);
              }
            else
              {
                t = i_14;
                t = conc_more_lists_0(t);
              }
            {
              k_16 = t;
              if(((h_16 != NULL) && (h_16 != k_16)))
                _fail(k_16);
              else
                h_16 = k_16;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_14, not_null(d_16), not_null(h_16));
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
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm u_16 = NULL;
        u_16 = t;
        o_16 :
        if(!(match_string(u_16, "-p")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        ATerm t_14;
        t_14 = t;
        {
          ATerm v_16 = NULL;
          ATerm w_16 = NULL;
          w_16 = t;
          if(((v_16 != NULL) && (v_16 != w_16)))
            _fail(w_16);
          else
            v_16 = w_16;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_c_6, not_null(v_16));
            t = set_config_0(t);
          }
        }
        t = t_14;
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = term_u_14;
        return(t);
      }
      t = ArgOption_3(t, z_1, b_2, d_2);
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
        ATerm v_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              ATerm x_16 = NULL;
              x_16 = t;
              q_16 :
              if(!(match_string(x_16, "--sglr")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              ATerm a_15;
              a_15 = t;
              {
                ATerm y_16 = NULL;
                ATerm z_16 = NULL;
                z_16 = t;
                if(((y_16 != NULL) && (y_16 != z_16)))
                  _fail(z_16);
                else
                  y_16 = z_16;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_13, not_null(y_16));
                  t = extend_config_0(t);
                }
              }
              t = a_15;
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              t = term_b_15;
              return(t);
            }
            t = ArgOption_3(t, e_2, f_2, g_2);
            LocalPopChoice(w_14);
          }
        else
          {
            t = v_14;
            {
              ATerm h_2 (ATerm t)
              {
                ATerm a_17 = NULL;
                a_17 = t;
                s_16 :
                if(!(match_string(a_17, "--impl")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_2 (ATerm t)
              {
                ATerm f_15;
                f_15 = t;
                {
                  ATerm b_17 = NULL;
                  ATerm c_17 = NULL;
                  c_17 = t;
                  if(((b_17 != NULL) && (b_17 != c_17)))
                    _fail(c_17);
                  else
                    b_17 = c_17;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_d_14, not_null(b_17));
                    t = extend_config_0(t);
                  }
                }
                t = f_15;
                return(t);
              }
              ATerm j_2 (ATerm t)
              {
                t = term_i_15;
                return(t);
              }
              t = ArgOption_3(t, h_2, i_2, j_2);
            }
          }
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym__2))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      t = SSL_copy(not_null(j_17), not_null(k_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm s_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym_stderr_0))
    {
      ATerm u_17 = NULL,w_17 = NULL;
      ATerm j_15;
      j_15 = t;
      {
        ATerm v_17 = NULL;
        t = SSLgetAnnotations(not_null(s_17));
        {
          v_17 = t;
          if(((u_17 != NULL) && (u_17 != v_17)))
            _fail(v_17);
          else
            u_17 = v_17;
        }
      }
      t = j_15;
      {
        ATerm x_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(u_17));
        {
          x_17 = t;
          if(((w_17 != NULL) && (w_17 != x_17)))
            _fail(x_17);
          else
            w_17 = x_17;
        }
        t = not_null(w_17);
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
  ATerm f_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym_stdout_0))
    {
      ATerm h_18 = NULL,j_18 = NULL;
      ATerm k_15;
      k_15 = t;
      {
        ATerm i_18 = NULL;
        t = SSLgetAnnotations(not_null(f_18));
        {
          i_18 = t;
          if(((h_18 != NULL) && (h_18 != i_18)))
            _fail(i_18);
          else
            h_18 = i_18;
        }
      }
      t = k_15;
      {
        ATerm k_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(h_18));
        {
          k_18 = t;
          if(((j_18 != NULL) && (j_18 != k_18)))
            _fail(k_18);
          else
            j_18 = k_18;
        }
        t = not_null(j_18);
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
  ATerm x_18 = NULL,y_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym_FILE_1))
    {
      y_18 = ATgetArgument(x_18, 0);
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_19 = NULL;
            ATerm b_19 = NULL;
            t = o_0(t);
            {
              b_19 = t;
              {
                if(((a_19 != NULL) && (a_19 != b_19)))
                  _fail(b_19);
                else
                  a_19 = b_19;
                {
                  ATerm n_15 = t;
                  int s_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(s_15);
                    }
                  else
                    {
                      t = n_15;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(a_19));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_18));
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm t_15 = t;
              int u_15 = stack_ptr;
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
                        ATerm x_15 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm y_15 = t;
                            int z_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(z_15);
                              }
                            else
                              {
                                t = y_15;
                                {
                                  ATerm a_16 = t;
                                  int f_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(f_16);
                                    }
                                  else
                                    {
                                      t = a_16;
                                      {
                                        ATerm f_19 = NULL;
                                        f_19 = t;
                                        if(((y_18 != NULL) && (y_18 != f_19)))
                                          _fail(f_19);
                                        else
                                          y_18 = f_19;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = x_15;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(d_19));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_18));
                  LocalPopChoice(u_15);
                }
              else
                {
                  t = t_15;
                  {
                    ATerm h_19 = NULL;
                    t = o_0(t);
                    {
                      h_19 = t;
                      if(((y_18 != NULL) && (y_18 != h_19)))
                        _fail(h_19);
                      else
                        y_18 = h_19;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_18));
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
  ATerm s_19 = NULL,y_19 = NULL,z_19 = NULL;
  s_19 = t;
  r_19 :
  if(((ATgetType(s_19) == AT_LIST) && !(ATisEmpty(s_19))))
    {
      y_19 = ATgetFirst((ATermList) s_19);
      z_19 = (ATerm) ATgetNext((ATermList) s_19);
      t = not_null(z_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  e_20 :
  if(match_cons(h_20, sym__2))
    {
      i_20 = ATgetArgument(h_20, 0);
      j_20 = ATgetArgument(h_20, 1);
      {
        ATerm g_16;
        g_16 = t;
        {
          ATerm m_20 = NULL;
          ATerm n_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), not_null(j_20));
          {
            ATerm l_16 = t;
            int m_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(m_16);
              }
            else
              {
                t = l_16;
                t = (ATerm) ATempty;
              }
            {
              n_20 = t;
              if(((m_20 != NULL) && (m_20 != n_20)))
                _fail(n_20);
              else
                m_20 = n_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_20), not_null(j_20), not_null(m_20));
            t = table_put_0(t);
          }
        }
        t = g_16;
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
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  ATerm n_16;
  n_16 = t;
  {
    ATerm c_21 = NULL;
    ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
    t = x_74(t);
    {
      c_21 = t;
      {
        if(((b_21 != NULL) && (b_21 != c_21)))
          _fail(c_21);
        else
          b_21 = c_21;
        {
          ATerm p_16 = t;
          int r_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_21), term_k_11);
              t = table_get_0(t);
              LocalPopChoice(r_16);
            }
          else
            {
              t = p_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            d_21 = t;
            y_20 :
            if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
              {
                e_21 = ATgetFirst((ATermList) d_21);
                f_21 = (ATerm) ATgetNext((ATermList) d_21);
                {
                  if(((a_21 != NULL) && (a_21 != e_21)))
                    _fail(e_21);
                  else
                    a_21 = e_21;
                  {
                    if(((z_20 != NULL) && (z_20 != f_21)))
                      _fail(f_21);
                    else
                      z_20 = f_21;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_21), term_k_11, not_null(z_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_21);
                          {
                            ATerm k_2 (ATerm t)
                            {
                              ATerm g_21 = NULL;
                              g_21 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_21), not_null(g_21));
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
  t = n_16;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  t = SSL_remove(not_null(r_21));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm h_63 (ATerm), ATerm i_63 (ATerm))
{
  ATerm t_16 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_63(t);
      t = i_63(t);
      LocalPopChoice(d_17);
    }
  else
    {
      t = t_16;
      {
        t = i_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm i_22 = NULL;
  ATerm e_17;
  e_17 = t;
  {
    ATerm j_22 = NULL;
    ATerm l_22 = NULL;
    t = w_74(t);
    {
      j_22 = t;
      {
        if(((i_22 != NULL) && (i_22 != j_22)))
          _fail(j_22);
        else
          i_22 = j_22;
        {
          ATerm m_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_22), term_k_11);
          {
            ATerm f_17 = t;
            int g_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_17);
              }
            else
              {
                t = f_17;
                t = (ATerm) ATempty;
              }
            {
              m_22 = t;
              if(((l_22 != NULL) && (l_22 != m_22)))
                _fail(m_22);
              else
                l_22 = m_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_22), term_k_11, (ATerm) ATinsert(CheckATermList(not_null(l_22)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = e_17;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm r_22 = NULL,s_22 = NULL;
  ATerm l_2 (ATerm t)
  {
    t = term_x_12;
    return(t);
  }
  t = begin_scope_1(t, l_2);
  {
    ATerm m_2 (ATerm t)
    {
      ATerm l_17;
      l_17 = t;
      {
        ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
        ATerm m_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_17;
            t = table_get_0(t);
            LocalPopChoice(n_17);
          }
        else
          {
            t = m_17;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          t_22 = t;
          q_22 :
          if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
            {
              u_22 = ATgetFirst((ATermList) t_22);
              v_22 = (ATerm) ATgetNext((ATermList) t_22);
              {
                if(((s_22 != NULL) && (s_22 != u_22)))
                  _fail(u_22);
                else
                  s_22 = u_22;
                {
                  if(((r_22 != NULL) && (r_22 != v_22)))
                    _fail(v_22);
                  else
                    r_22 = v_22;
                  {
                    t = not_null(s_22);
                    {
                      ATerm n_2 (ATerm t)
                      {
                        ATerm p_17 = t;
                        int q_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(q_17);
                          }
                        else
                          {
                            t = p_17;
                            {
                            }
                          }
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
      t = l_17;
      {
        ATerm o_2 (ATerm t)
        {
          t = term_x_12;
          return(t);
        }
        t = end_scope_1(t, o_2);
      }
      return(t);
    }
    t = restore_always_2(t, u_73, m_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm v_73 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm t_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL;
        ATerm z_22 = NULL;
        t = term_d_13;
        {
          t = get_config_0(t);
          {
            z_22 = t;
            if(((y_22 != NULL) && (y_22 != z_22)))
              _fail(z_22);
            else
              y_22 = z_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_22));
        LocalPopChoice(y_17);
      }
    else
      {
        t = t_17;
        t = term_g_6;
      }
    {
      t = v_73(t);
      {
        ATerm q_2 (ATerm t)
        {
          ATerm z_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_y_12;
              t = get_config_0(t);
              LocalPopChoice(a_18);
            }
          else
            {
              t = z_17;
              t = term_b_18;
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
    ATerm c_23 = NULL;
    c_23 = t;
    b_23 :
    if(!(match_string(c_23, "-v")))
      {
        if(!(match_string(c_23, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_d_18;
    t = set_config_0(t);
    t = term_g_18;
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_l_18;
    return(t);
  }
  t = Option_3(t, r_2, s_2, t_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm f_23 = NULL;
    f_23 = t;
    d_23 :
    if(!(match_string(f_23, "-k")))
      {
        if(!(match_string(f_23, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm m_18;
    m_18 = t;
    {
      ATerm g_23 = NULL;
      ATerm h_23 = NULL;
      t = string_to_int_0(t);
      {
        h_23 = t;
        if(((g_23 != NULL) && (g_23 != h_23)))
          _fail(h_23);
        else
          g_23 = h_23;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_18, not_null(g_23));
        t = set_config_0(t);
      }
    }
    t = m_18;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_o_18;
    return(t);
  }
  t = ArgOption_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_23 = NULL;
  k_23 = t;
  t = SSL_string_to_int(not_null(k_23));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        ATerm x_23 = NULL;
        x_23 = t;
        n_23 :
        if(!(match_string(x_23, "-S")))
          {
            if(!(match_string(x_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_s_18;
        t = set_config_0(t);
        t = term_t_18;
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_u_18;
        return(t);
      }
      t = Option_3(t, y_2, z_2, a_3);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm v_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_3 (ATerm t)
            {
              ATerm y_23 = NULL;
              y_23 = t;
              o_23 :
              if(!(match_string(y_23, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              ATerm b_24 = NULL;
              ATerm c_19;
              c_19 = t;
              {
                ATerm z_23 = NULL;
                ATerm a_24 = NULL;
                t = string_to_int_0(t);
                {
                  a_24 = t;
                  if(((z_23 != NULL) && (z_23 != a_24)))
                    _fail(a_24);
                  else
                    z_23 = a_24;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_6, not_null(z_23));
                  t = set_config_0(t);
                }
              }
              t = c_19;
              {
                ATerm c_24 = NULL;
                c_24 = t;
                if(((b_24 != NULL) && (b_24 != c_24)))
                  _fail(c_24);
                else
                  b_24 = c_24;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_24));
              }
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              t = term_g_19;
              return(t);
            }
            t = ArgOption_3(t, b_3, c_3, d_3);
            LocalPopChoice(z_18);
          }
        else
          {
            t = v_18;
            {
              ATerm e_3 (ATerm t)
              {
                ATerm d_24 = NULL;
                d_24 = t;
                w_23 :
                if(!(match_string(d_24, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm j_3 (ATerm t)
              {
                t = term_j_19;
                t = set_config_0(t);
                t = term_k_19;
                return(t);
              }
              ATerm k_3 (ATerm t)
              {
                t = term_l_19;
                return(t);
              }
              t = Option_3(t, e_3, j_3, k_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm j_24 = NULL;
    j_24 = t;
    g_24 :
    if(!(match_string(j_24, "-o")))
      {
        if(!(match_string(j_24, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    ATerm q_24 = NULL;
    ATerm q_19;
    q_19 = t;
    {
      ATerm n_24 = NULL;
      ATerm p_24 = NULL;
      p_24 = t;
      if(((n_24 != NULL) && (n_24 != p_24)))
        _fail(p_24);
      else
        n_24 = p_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_12, not_null(n_24));
        t = set_config_0(t);
      }
    }
    t = q_19;
    {
      ATerm r_24 = NULL;
      r_24 = t;
      if(((q_24 != NULL) && (q_24 != r_24)))
        _fail(r_24);
      else
        q_24 = r_24;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_24));
    }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_t_19;
    return(t);
  }
  t = ArgOption_3(t, l_3, m_3, n_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm p_3 (ATerm t)
        {
          ATerm v_24 = NULL;
          v_24 = t;
          u_24 :
          if(!(match_string(v_24, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_x_19;
          t = set_config_0(t);
          t = term_a_20;
          return(t);
        }
        ATerm t_3 (ATerm t)
        {
          t = term_b_20;
          return(t);
        }
        t = Option_3(t, p_3, s_3, t_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  b_25 = t;
  z_24 :
  if(match_string(b_25, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(b_25) == AT_LIST) && !(ATisEmpty(b_25))))
        {
          c_25 = ATgetFirst((ATermList) b_25);
          d_25 = (ATerm) ATgetNext((ATermList) b_25);
          a_25 :
          if(((ATgetType(d_25) == AT_LIST) && !(ATisEmpty(d_25))))
            {
              e_25 = ATgetFirst((ATermList) d_25);
              f_25 = (ATerm) ATgetNext((ATermList) d_25);
              {
                ATerm j_25 = NULL;
                ATerm c_20;
                c_20 = t;
                {
                  t = not_null(c_25);
                  t = l_0(t);
                }
                t = c_20;
                {
                  ATerm k_25 = NULL;
                  t = not_null(e_25);
                  {
                    t = m_0(t);
                    {
                      k_25 = t;
                      if(((j_25 != NULL) && (j_25 != k_25)))
                        _fail(k_25);
                      else
                        j_25 = k_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_25)), not_null(j_25));
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
  ATerm u_3 (ATerm t)
  {
    ATerm r_25 = NULL;
    r_25 = t;
    o_25 :
    if(!(match_string(r_25, "-i")))
      {
        if(!(match_string(r_25, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    ATerm u_25 = NULL;
    ATerm d_20;
    d_20 = t;
    {
      ATerm s_25 = NULL;
      ATerm t_25 = NULL;
      t_25 = t;
      if(((s_25 != NULL) && (s_25 != t_25)))
        _fail(t_25);
      else
        s_25 = t_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_13, not_null(s_25));
        t = set_config_0(t);
      }
    }
    t = d_20;
    {
      ATerm v_25 = NULL;
      v_25 = t;
      if(((u_25 != NULL) && (u_25 != v_25)))
        _fail(v_25);
      else
        u_25 = v_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_25));
    }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_f_20;
    return(t);
  }
  t = ArgOption_3(t, u_3, w_3, x_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(k_20);
    }
  else
    {
      t = g_20;
      {
        ATerm l_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(o_20);
          }
        else
          {
            t = l_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm a_26 = NULL;
  ATerm p_20;
  p_20 = t;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm b_26 = NULL,c_26 = NULL;
      b_26 = t;
      z_25 :
      if(match_cons(b_26, sym_Program_1))
        {
          c_26 = ATgetArgument(b_26, 0);
          if(((a_26 != NULL) && (a_26 != c_26)))
            _fail(c_26);
          else
            a_26 = c_26;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, y_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_20), not_null(a_26)), term_q_20));
      {
        t = printnl_0(t);
        {
          t = term_z_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_20;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATempty, term_s_20));
  {
    t = printnl_0(t);
    {
      t = term_z_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  t = SSL_TicksToSeconds(not_null(f_26));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym__2))
    {
      l_26 = ATgetArgument(k_26, 0);
      m_26 = ATgetArgument(k_26, 1);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_26), not_null(m_26));
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            t = SSL_addr(not_null(l_26), not_null(m_26));
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
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_70(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
        t_26 = t;
        s_26 :
        if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
          {
            u_26 = ATgetFirst((ATermList) t_26);
            v_26 = (ATerm) ATgetNext((ATermList) t_26);
            {
              ATerm y_26 = NULL;
              ATerm z_26 = NULL;
              t = not_null(v_26);
              {
                t = foldr_2(t, w_70, x_70);
                {
                  z_26 = t;
                  if(((y_26 != NULL) && (y_26 != z_26)))
                    _fail(z_26);
                  else
                    y_26 = z_26;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(y_26));
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
  ATerm g_27 = NULL;
  ATerm i_27 = NULL;
  g_27 = t;
  {
    ATerm j_27 = NULL;
    ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
    t = not_null(g_27);
    {
      j_27 = t;
      {
        t = SSL_explode_term(not_null(j_27));
        {
          l_27 = t;
          f_27 :
          if(match_cons(l_27, sym__2))
            {
              m_27 = ATgetArgument(l_27, 0);
              n_27 = ATgetArgument(l_27, 1);
              if(((i_27 != NULL) && (i_27 != n_27)))
                _fail(n_27);
              else
                i_27 = n_27;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_27);
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
    ATerm d_4 (ATerm t)
    {
      t = term_r_18;
      return(t);
    }
    t = crush_2(t, d_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym__2))
    {
      u_27 = ATgetArgument(t_27, 0);
      v_27 = ATgetArgument(t_27, 1);
      {
        ATerm x_20;
        x_20 = t;
        {
          ATerm h_21 = t;
          int i_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_27), not_null(v_27));
              LocalPopChoice(i_21);
            }
          else
            {
              t = h_21;
              t = SSL_gtr(not_null(u_27), not_null(v_27));
            }
        }
        t = x_20;
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
  ATerm b_28 = NULL;
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
      c_28 = t;
      a_28 :
      if(match_cons(c_28, sym__2))
        {
          d_28 = ATgetArgument(c_28, 0);
          e_28 = ATgetArgument(c_28, 1);
          {
            if(((b_28 != NULL) && (b_28 != d_28)))
              _fail(d_28);
            else
              b_28 = d_28;
            if(((b_28 != NULL) && (b_28 != e_28)))
              _fail(e_28);
            else
              b_28 = e_28;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_59 (ATerm))
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_21;
      n_21 = t;
      {
        ATerm h_28 = NULL;
        ATerm i_28 = NULL;
        t = term_y_6;
        {
          t = get_config_0(t);
          {
            i_28 = t;
            if(((h_28 != NULL) && (h_28 != i_28)))
              _fail(i_28);
            else
              h_28 = i_28;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_28), term_z_5);
          t = geq_0(t);
        }
      }
      t = n_21;
      t = e_59(t);
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm m_28 = NULL,o_28 = NULL;
    ATerm o_21;
    o_21 = t;
    {
      ATerm n_28 = NULL;
      t = run_time_0(t);
      {
        n_28 = t;
        if(((m_28 != NULL) && (m_28 != n_28)))
          _fail(n_28);
        else
          m_28 = n_28;
      }
    }
    t = o_21;
    {
      ATerm p_28 = NULL;
      t = term_p_21;
      {
        t = get_config_0(t);
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_21), not_null(m_28)), term_q_21), not_null(o_28)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, e_4);
  {
    t = term_r_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  v_28 :
  if(match_cons(w_28, sym_Version_0))
    {
      ATerm y_28 = NULL,b_29 = NULL;
      ATerm t_21;
      t_21 = t;
      {
        ATerm z_28 = NULL;
        t = SSLgetAnnotations(not_null(w_28));
        {
          z_28 = t;
          if(((y_28 != NULL) && (y_28 != z_28)))
            _fail(z_28);
          else
            y_28 = z_28;
        }
      }
      t = t_21;
      {
        ATerm c_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_28));
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
ATerm need_help_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        {
          ATerm w_21 = t;
          int x_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(x_21);
            }
          else
            {
              t = w_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, f_4);
  t = d_75(t);
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
  ATerm q_29 = NULL;
  q_29 = t;
  {
    ATerm y_21;
    y_21 = t;
    {
      t = term_z_21;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_21, term_a_22, not_null(q_29));
          t = table_put_0(t);
        }
      }
    }
    t = y_21;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  t = SSL_table_destroy(not_null(u_29));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  t = SSL_exit(not_null(y_29));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
  e_30 = t;
  b_30 :
  if(((ATgetType(e_30) == AT_LIST) && ATisEmpty(e_30)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(e_30) == AT_LIST) && !(ATisEmpty(e_30))))
        {
          f_30 = ATgetFirst((ATermList) e_30);
          g_30 = (ATerm) ATgetNext((ATermList) e_30);
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
  ATerm b_22;
  b_22 = t;
  {
    ATerm j_30 = NULL;
    ATerm m_30 = NULL;
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        {
          ATerm k_30 = NULL;
          ATerm l_30 = NULL;
          l_30 = t;
          if(((k_30 != NULL) && (k_30 != l_30)))
            _fail(l_30);
          else
            k_30 = l_30;
          t = (ATerm) ATinsert(ATempty, not_null(k_30));
        }
      }
    {
      m_30 = t;
      if(((j_30 != NULL) && (j_30 != m_30)))
        _fail(m_30);
      else
        j_30 = m_30;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_18, not_null(j_30));
      t = printnl_0(t);
    }
  }
  t = b_22;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_22), term_f_22), term_e_22);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
  x_30 = t;
  u_30 :
  if(((ATgetType(x_30) == AT_LIST) && !(ATisEmpty(x_30))))
    {
      v_30 = ATgetFirst((ATermList) x_30);
      w_30 = (ATerm) ATgetNext((ATermList) x_30);
      {
        ATerm a_31 = NULL;
        t = not_null(w_30);
        {
          ATerm h_22;
          h_22 = t;
          {
            ATerm b_31 = NULL,d_31 = NULL,f_31 = NULL;
            ATerm k_22;
            k_22 = t;
            {
              ATerm c_31 = NULL;
              t = j_0(t);
              {
                c_31 = t;
                if(((b_31 != NULL) && (b_31 != c_31)))
                  _fail(c_31);
                else
                  b_31 = c_31;
              }
            }
            t = k_22;
            {
              ATerm e_31 = NULL;
              t = not_null(v_30);
              {
                t = i_0(t);
                {
                  e_31 = t;
                  if(((d_31 != NULL) && (d_31 != e_31)))
                    _fail(e_31);
                  else
                    d_31 = e_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_31)), not_null(d_31));
                {
                  f_31 = t;
                  if(((a_31 != NULL) && (a_31 != f_31)))
                    _fail(f_31);
                  else
                    a_31 = f_31;
                }
              }
            }
          }
          t = h_22;
          {
            ATerm g_4 (ATerm t)
            {
              t = not_null(a_31);
              return(t);
            }
            t = reverse_acc_2(t, i_0, g_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(x_30) == AT_LIST) && ATisEmpty(x_30)))
        {
          {
            t = term_p_12;
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
  ATerm i_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm m_31 = NULL;
  ATerm n_31 = NULL;
  t = term_p_12;
  {
    t = h_0(t);
    {
      n_31 = t;
      if(((m_31 != NULL) && (m_31 != n_31)))
        _fail(n_31);
      else
        m_31 = n_31;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_22), not_null(m_31)), term_n_22);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_52 (ATerm))
{
  ATerm y_31 = NULL,z_31 = NULL;
  y_31 = t;
  v_31 :
  if(match_cons(y_31, sym_Program_1))
    {
      z_31 = ATgetArgument(y_31, 0);
      {
        ATerm h_32 = NULL,l_32 = NULL;
        ATerm i_32 = NULL;
        t = SSLgetAnnotations(not_null(y_31));
        {
          i_32 = t;
          if(((h_32 != NULL) && (h_32 != i_32)))
            _fail(i_32);
          else
            h_32 = i_32;
        }
        {
          t = not_null(z_31);
          {
            ATerm n_32 = NULL;
            t = s_52(t);
            {
              l_32 = t;
              {
                ATerm o_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_32)), not_null(h_32));
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
  ATerm z_32 = NULL;
  ATerm p_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_33 = NULL;
      t = term_p_21;
      {
        t = get_config_0(t);
        {
          a_33 = t;
          if(((z_32 != NULL) && (z_32 != a_33)))
            _fail(a_33);
          else
            z_32 = a_33;
        }
      }
      LocalPopChoice(w_22);
    }
  else
    {
      t = p_22;
      {
        ATerm j_4 (ATerm t)
        {
          ATerm k_4 (ATerm t)
          {
            ATerm b_33 = NULL;
            b_33 = t;
            if(((z_32 != NULL) && (z_32 != b_33)))
              _fail(b_33);
            else
              z_32 = b_33;
            return(t);
          }
          t = Program_1(t, k_4);
          return(t);
        }
        t = fetch_1(t, j_4);
      }
    }
  {
    ATerm x_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 (ATerm t)
        {
          t = not_null(z_32);
          return(t);
        }
        t = short_description_1(t, l_4);
        t = echo_0(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = x_22;
        {
        }
      }
    {
      t = term_e_23;
      {
        t = echo_0(t);
        {
          t = term_l_23;
          {
            t = table_get_0(t);
            {
              ATerm m_4 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, m_4);
              {
                ATerm o_4 (ATerm t)
                {
                  ATerm c_33 = NULL;
                  ATerm d_33 = NULL;
                  d_33 = t;
                  if(((c_33 != NULL) && (c_33 != d_33)))
                    _fail(d_33);
                  else
                    c_33 = d_33;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_33)), term_m_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_4);
                {
                  ATerm p_23 = t;
                  int q_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_33 = NULL;
                      ATerm p_33 = NULL;
                      ATerm s_4 (ATerm t)
                      {
                        t = not_null(z_32);
                        return(t);
                      }
                      t = long_description_1(t, s_4);
                      {
                        p_33 = t;
                        if(((o_33 != NULL) && (o_33 != p_33)))
                          _fail(p_33);
                        else
                          o_33 = p_33;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(o_33)), term_r_23);
                        t = echo_0(t);
                      }
                      LocalPopChoice(q_23);
                    }
                  else
                    {
                      t = p_23;
                      {
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
      t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATempty, not_null(y_33)));
      t = printnl_0(t);
    }
  }
  t = s_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm t_23;
  t_23 = t;
  {
    t = z_77(t);
    t = debug_0(t);
  }
  t = t_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_52 (ATerm))
{
  ATerm u_34 = NULL,w_34 = NULL;
  u_34 = t;
  t_34 :
  if(match_cons(u_34, sym_Undefined_1))
    {
      w_34 = ATgetArgument(u_34, 0);
      {
        ATerm z_34 = NULL,c_35 = NULL;
        ATerm a_35 = NULL;
        t = SSLgetAnnotations(not_null(u_34));
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
        {
          t = not_null(w_34);
          {
            ATerm j_35 = NULL;
            t = t_52(t);
            {
              c_35 = t;
              {
                ATerm k_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_35)), not_null(z_34));
                {
                  k_35 = t;
                  if(((j_35 != NULL) && (j_35 != k_35)))
                    _fail(k_35);
                  else
                    j_35 = k_35;
                }
                t = not_null(j_35);
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
  ATerm p_35 (ATerm t)
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_64, _id);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = Cons_2(t, _id, p_35);
      }
    return(t);
  }
  t = p_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_76 (ATerm))
{
  t = fetch_1(t, k_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_35 = NULL;
  z_35 = t;
  y_35 :
  if(match_cons(z_35, sym_Help_0))
    {
      ATerm b_36 = NULL,d_36 = NULL;
      ATerm e_24;
      e_24 = t;
      {
        ATerm c_36 = NULL;
        t = SSLgetAnnotations(not_null(z_35));
        {
          c_36 = t;
          if(((b_36 != NULL) && (b_36 != c_36)))
            _fail(c_36);
          else
            b_36 = c_36;
        }
      }
      t = e_24;
      {
        ATerm e_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_36));
        {
          e_36 = t;
          if(((d_36 != NULL) && (d_36 != e_36)))
            _fail(e_36);
          else
            d_36 = e_36;
        }
        t = not_null(d_36);
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
  ATerm j_36 = NULL;
  j_36 = t;
  t = SSL_implode_string(not_null(j_36));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_24);
    }
  else
    {
      t = f_24;
      {
        ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
        o_36 = t;
        n_36 :
        if(((ATgetType(o_36) == AT_LIST) && !(ATisEmpty(o_36))))
          {
            p_36 = ATgetFirst((ATermList) o_36);
            q_36 = (ATerm) ATgetNext((ATermList) o_36);
            {
              t = not_null(p_36);
              {
                ATerm u_4 (ATerm t)
                {
                  t = not_null(q_36);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_4);
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
  ATerm a_37 = NULL;
  ATerm c_37 = NULL;
  a_37 = t;
  {
    ATerm d_37 = NULL;
    ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
    t = not_null(a_37);
    {
      d_37 = t;
      {
        t = SSL_explode_term(not_null(d_37));
        {
          f_37 = t;
          y_36 :
          if(match_cons(f_37, sym__2))
            {
              g_37 = ATgetArgument(f_37, 0);
              h_37 = ATgetArgument(f_37, 1);
              z_36 :
              if(match_string(g_37, ""))
                {
                  if(((c_37 != NULL) && (c_37 != h_37)))
                    _fail(h_37);
                  else
                    c_37 = h_37;
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
      t = not_null(c_37);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm l_37 (ATerm t)
  {
    ATerm i_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_37);
        LocalPopChoice(k_24);
      }
    else
      {
        t = i_24;
        {
          t = Nil_0(t);
          t = x_64(t);
        }
      }
    return(t);
  }
  t = l_37(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym__2))
    {
      p_37 = ATgetArgument(o_37, 0);
      q_37 = ATgetArgument(o_37, 1);
      {
        t = not_null(p_37);
        {
          ATerm a_5 (ATerm t)
          {
            t = not_null(q_37);
            return(t);
          }
          t = at_end_1(t, a_5);
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
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  t = SSL_explode_string(not_null(v_37));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm i_38 = NULL,l_38 = NULL,m_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym__2))
    {
      l_38 = ATgetArgument(i_38, 0);
      m_38 = ATgetArgument(i_38, 1);
      {
        ATerm t_38 = NULL,v_38 = NULL;
        ATerm u_38 = NULL;
        t = SSLgetAnnotations(not_null(i_38));
        {
          u_38 = t;
          if(((t_38 != NULL) && (t_38 != u_38)))
            _fail(u_38);
          else
            t_38 = u_38;
        }
        {
          t = not_null(l_38);
          {
            ATerm x_38 = NULL;
            t = p_50(t);
            {
              v_38 = t;
              {
                t = not_null(m_38);
                {
                  ATerm z_38 = NULL;
                  t = q_50(t);
                  {
                    x_38 = t;
                    {
                      ATerm a_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_38), not_null(x_38)), not_null(t_38));
                      {
                        a_39 = t;
                        if(((z_38 != NULL) && (z_38 != a_39)))
                          _fail(a_39);
                        else
                          z_38 = a_39;
                      }
                      t = not_null(z_38);
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
    ATerm o_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(s_24);
      }
    else
      {
        t = o_24;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  i_39 = t;
  h_39 :
  if(match_cons(i_39, sym__2))
    {
      j_39 = ATgetArgument(i_39, 0);
      k_39 = ATgetArgument(i_39, 1);
      {
        ATerm t_24;
        t_24 = t;
        t = SSL_printnl(not_null(j_39), not_null(k_39));
        t = t_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm w_24;
  w_24 = t;
  {
    ATerm q_39 = NULL,s_39 = NULL;
    ATerm x_24;
    x_24 = t;
    {
      ATerm r_39 = NULL;
      t = y_77(t);
      {
        r_39 = t;
        if(((q_39 != NULL) && (q_39 != r_39)))
          _fail(r_39);
        else
          q_39 = r_39;
      }
    }
    t = x_24;
    {
      ATerm t_39 = NULL;
      t_39 = t;
      if(((s_39 != NULL) && (s_39 != t_39)))
        _fail(t_39);
      else
        s_39 = t_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_39)), not_null(q_39)));
        t = printnl_0(t);
      }
    }
  }
  t = w_24;
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_64 (ATerm))
{
  ATerm w_39 (ATerm t)
  {
    ATerm y_24 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(g_25);
      }
    else
      {
        t = y_24;
        t = Cons_2(t, i_64, w_39);
      }
    return(t);
  }
  t = w_39(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_39 = NULL;
  y_39 = t;
  t = SSL_is_string(not_null(y_39));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_5 (ATerm t)
            {
              ATerm n_25 = t;
              int p_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(p_25);
                }
              else
                {
                  t = n_25;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, b_5);
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            {
              ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
              h_40 = t;
              g_40 :
              if(match_cons(h_40, sym_Path_1))
                {
                  i_40 = ATgetArgument(h_40, 0);
                  t = not_null(i_40);
                }
              else
                {
                  if(match_cons(h_40, sym_Var_1))
                    {
                      i_40 = ATgetArgument(h_40, 0);
                      {
                        t = not_null(i_40);
                        {
                          ATerm q_25 = t;
                          int w_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_25);
                            }
                          else
                            {
                              t = q_25;
                              {
                                ATerm c_5 (ATerm t)
                                {
                                  t = term_x_25;
                                  return(t);
                                }
                                t = debug_1(t, c_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_40, sym_Prefix_2))
                        {
                          i_40 = ATgetArgument(h_40, 0);
                          j_40 = ATgetArgument(h_40, 1);
                          {
                            ATerm o_40 = NULL,q_40 = NULL;
                            ATerm y_25;
                            y_25 = t;
                            {
                              ATerm p_40 = NULL;
                              t = not_null(i_40);
                              {
                                t = eval_config_0(t);
                                {
                                  p_40 = t;
                                  if(((o_40 != NULL) && (o_40 != p_40)))
                                    _fail(p_40);
                                  else
                                    o_40 = p_40;
                                }
                              }
                            }
                            t = y_25;
                            {
                              ATerm r_40 = NULL;
                              t = not_null(j_40);
                              {
                                t = eval_config_0(t);
                                {
                                  r_40 = t;
                                  if(((q_40 != NULL) && (q_40 != r_40)))
                                    _fail(r_40);
                                  else
                                    q_40 = r_40;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_40), not_null(q_40));
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
  ATerm z_40 = NULL;
  z_40 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_14, not_null(z_40));
    {
      t = table_get_0(t);
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm g_26;
              g_26 = t;
              {
                ATerm b_41 = NULL;
                ATerm c_41 = NULL;
                c_41 = t;
                if(((b_41 != NULL) && (b_41 != c_41)))
                  _fail(c_41);
                else
                  b_41 = c_41;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_q_14, not_null(z_40), not_null(b_41));
                  t = table_put_0(t);
                }
              }
              t = g_26;
            }
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
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
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_62(t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
  h_41 = t;
  g_41 :
  if(match_cons(h_41, sym__2))
    {
      i_41 = ATgetArgument(h_41, 0);
      j_41 = ATgetArgument(h_41, 1);
      t = SSL_table_get(not_null(i_41), not_null(j_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  q_41 = t;
  p_41 :
  if(match_cons(q_41, sym__3))
    {
      r_41 = ATgetArgument(q_41, 0);
      s_41 = ATgetArgument(q_41, 1);
      t_41 = ATgetArgument(q_41, 2);
      {
        ATerm n_26;
        n_26 = t;
        {
          ATerm x_41 = NULL;
          ATerm y_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_41), not_null(s_41));
          {
            ATerm o_26 = t;
            int p_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_26);
              }
            else
              {
                t = o_26;
                t = (ATerm) ATempty;
              }
            {
              y_41 = t;
              if(((x_41 != NULL) && (x_41 != y_41)))
                _fail(y_41);
              else
                x_41 = y_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_41), not_null(s_41), (ATerm) ATinsert(CheckATermList(not_null(x_41)), not_null(t_41)));
            t = table_put_0(t);
          }
        }
        t = n_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm c_42 = NULL;
  ATerm d_42 = NULL;
  t = term_p_12;
  {
    t = p_77(t);
    {
      d_42 = t;
      if(((c_42 != NULL) && (c_42 != d_42)))
        _fail(d_42);
      else
        c_42 = d_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_23, term_j_23, not_null(c_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
  j_42 = t;
  i_42 :
  if(match_string(j_42, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(j_42) == AT_LIST) && !(ATisEmpty(j_42))))
        {
          k_42 = ATgetFirst((ATermList) j_42);
          l_42 = (ATerm) ATgetNext((ATermList) j_42);
          {
            ATerm o_42 = NULL;
            ATerm q_26;
            q_26 = t;
            {
              t = not_null(k_42);
              t = a_0(t);
            }
            t = q_26;
            {
              ATerm p_42 = NULL;
              t = term_p_12;
              {
                t = d_0(t);
                {
                  p_42 = t;
                  if(((o_42 != NULL) && (o_42 != p_42)))
                    _fail(p_42);
                  else
                    o_42 = p_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_42)), not_null(o_42));
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
  ATerm d_5 (ATerm t)
  {
    ATerm u_42 = NULL;
    u_42 = t;
    t_42 :
    if(!(match_string(u_42, "--help")))
      {
        if(!(match_string(u_42, "-h")))
          {
            if(!(match_string(u_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_w_26;
    {
      t = set_config_0(t);
      t = term_x_26;
    }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_a_27;
    return(t);
  }
  t = Option_3(t, d_5, e_5, j_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  x_42 = t;
  w_42 :
  if(((ATgetType(x_42) == AT_LIST) && !(ATisEmpty(x_42))))
    {
      y_42 = ATgetFirst((ATermList) x_42);
      z_42 = (ATerm) ATgetNext((ATermList) x_42);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_42)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_51 (ATerm), ATerm z_51 (ATerm))
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  m_43 = t;
  l_43 :
  if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
    {
      n_43 = ATgetFirst((ATermList) m_43);
      o_43 = (ATerm) ATgetNext((ATermList) m_43);
      {
        ATerm s_43 = NULL,u_43 = NULL;
        ATerm t_43 = NULL;
        t = SSLgetAnnotations(not_null(m_43));
        {
          t_43 = t;
          if(((s_43 != NULL) && (s_43 != t_43)))
            _fail(t_43);
          else
            s_43 = t_43;
        }
        {
          t = not_null(n_43);
          {
            ATerm w_43 = NULL;
            t = y_51(t);
            {
              u_43 = t;
              {
                t = not_null(o_43);
                {
                  ATerm y_43 = NULL;
                  t = z_51(t);
                  {
                    w_43 = t;
                    {
                      ATerm z_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_43)), not_null(u_43)), not_null(s_43));
                      {
                        z_43 = t;
                        if(((y_43 != NULL) && (y_43 != z_43)))
                          _fail(z_43);
                        else
                          y_43 = z_43;
                      }
                      t = not_null(y_43);
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
  ATerm m_44 = NULL;
  m_44 = t;
  l_44 :
  if(((ATgetType(m_44) == AT_LIST) && ATisEmpty(m_44)))
    {
      {
        ATerm o_44 = NULL,q_44 = NULL;
        ATerm b_27;
        b_27 = t;
        {
          ATerm p_44 = NULL;
          t = SSLgetAnnotations(not_null(m_44));
          {
            p_44 = t;
            if(((o_44 != NULL) && (o_44 != p_44)))
              _fail(p_44);
            else
              o_44 = p_44;
          }
        }
        t = b_27;
        {
          ATerm r_44 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(o_44));
          {
            r_44 = t;
            if(((q_44 != NULL) && (q_44 != r_44)))
              _fail(r_44);
            else
              q_44 = r_44;
          }
          t = not_null(q_44);
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
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
  x_44 = t;
  w_44 :
  if(match_cons(x_44, sym__2))
    {
      y_44 = ATgetArgument(x_44, 0);
      z_44 = ATgetArgument(x_44, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_14, not_null(y_44), not_null(z_44));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_77 (ATerm))
{
  ATerm c_27;
  c_27 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_27;
        t = n_77(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        {
        }
      }
  }
  t = c_27;
  {
    ATerm k_5 (ATerm t)
    {
      ATerm j_45 = NULL;
      ATerm k_27;
      k_27 = t;
      {
        ATerm f_45 = NULL;
        ATerm g_45 = NULL;
        g_45 = t;
        if(((f_45 != NULL) && (f_45 != g_45)))
          _fail(g_45);
        else
          f_45 = g_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_21, not_null(f_45));
          t = set_config_0(t);
        }
      }
      t = k_27;
      {
        ATerm k_45 = NULL;
        k_45 = t;
        if(((j_45 != NULL) && (j_45 != k_45)))
          _fail(k_45);
        else
          j_45 = k_45;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_45));
      }
      return(t);
    }
    ATerm l_5 (ATerm t)
    {
      ATerm o_27 = t;
      int p_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(r_27);
            }
          else
            {
              t = q_27;
              {
                t = n_77(t);
                t = Cons_2(t, _id, l_5);
              }
            }
          LocalPopChoice(p_27);
        }
      else
        {
          t = o_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_5, l_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
  ATerm w_27;
  w_27 = t;
  {
    ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
    a_46 = t;
    w_45 :
    if(match_cons(a_46, sym__3))
      {
        b_46 = ATgetArgument(a_46, 0);
        c_46 = ATgetArgument(a_46, 1);
        d_46 = ATgetArgument(a_46, 2);
        {
          if(((x_45 != NULL) && (x_45 != b_46)))
            _fail(b_46);
          else
            x_45 = b_46;
          {
            if(((y_45 != NULL) && (y_45 != c_46)))
              _fail(c_46);
            else
              y_45 = c_46;
            {
              if(((z_45 != NULL) && (z_45 != d_46)))
                _fail(d_46);
              else
                z_45 = d_46;
              t = SSL_table_put(not_null(x_45), not_null(y_45), not_null(z_45));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm g_46 = NULL;
  ATerm x_27;
  x_27 = t;
  {
    t = term_y_27;
    t = table_put_0(t);
  }
  t = x_27;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm z_27 = t;
      int f_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_77(t);
          LocalPopChoice(f_28);
        }
      else
        {
          t = z_27;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_5);
    {
      ATerm g_28 = t;
      int j_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_28;
          k_28 = t;
          {
            ATerm l_28 = t;
            int q_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_r_26;
                t = get_config_0(t);
                LocalPopChoice(q_28);
              }
            else
              {
                t = l_28;
                t = fetch_1(t, Help_0);
              }
          }
          t = k_28;
          {
            t = system_usage_0(t);
            {
              t = term_r_18;
              t = exit_0(t);
            }
          }
          LocalPopChoice(j_28);
        }
      else
        {
          t = g_28;
          {
            ATerm r_28 = t;
            int s_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm p_5 (ATerm t)
                  {
                    ATerm h_46 = NULL;
                    h_46 = t;
                    if(((g_46 != NULL) && (g_46 != h_46)))
                      _fail(h_46);
                    else
                      g_46 = h_46;
                    return(t);
                  }
                  t = Undefined_1(t, p_5);
                  return(t);
                }
                t = fetch_1(t, o_5);
                {
                  ATerm q_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_46)), term_t_28);
                    return(t);
                  }
                  t = say_1(t, q_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_z_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(s_28);
              }
            else
              {
                t = r_28;
                {
                }
              }
          }
        }
      {
        ATerm u_28;
        u_28 = t;
        {
          t = term_i_23;
          t = table_destroy_0(t);
        }
        t = u_28;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm))
{
  t = parse_options_1(t, j_75);
  {
    t = store_options_0(t);
    {
      t = l_75(t);
      {
        ATerm x_28 = t;
        int a_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_75);
            LocalPopChoice(a_29);
          }
        else
          {
            t = x_28;
            {
              ATerm d_29 = t;
              int e_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(e_29);
                }
              else
                {
                  t = d_29;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm))
{
  t = option_wrap_4(t, n_75, default_usage_0, _id, o_75);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm z_73 (ATerm), ATerm a_74 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_73(t);
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = xtc_io_1(t, a_74);
    return(t);
  }
  t = option_wrap_2(t, r_5, s_5);
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
