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
Symbol sym_Anno_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  init_constant_terms();
}
ATerm term_j_31;
ATerm term_s_30;
ATerm term_e_30;
ATerm term_z_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_z_28;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_v_25;
ATerm term_q_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_c_24;
ATerm term_x_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_s_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_w_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_a_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_m_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_r_8;
ATerm term_e_5;
void init_constant_terms (void)
{
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.pp.af", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--tools", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-SDFI", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_p_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_c_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--pack-sdf", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("dummy", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_a_18, term_s_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--pack-sdf       Pack sdf modules before applying other tools", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d\n                    Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-cons", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--sdfcons        Apply sdf2cons", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2asdf", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--sdf2asdf       Apply sdf2asdf", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--sdf-bracket    Apply sdf-bracket", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__2, term_l_17, term_n_16);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_x_8);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_t_9, term_g_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym__2, term_w_22, term_x_8);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_x_8);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_l_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_v_29, term_x_8);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__3, term_k_26, term_l_26, (ATerm) ATempty);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm xtc_abox2text_0 (ATerm);
ATerm xtc_ast2abox_1 (ATerm, ATerm p_87 (ATerm));
ATerm xtc_pp_sdf_0 (ATerm);
ATerm xtc_transform_1 (ATerm, ATerm y_74 (ATerm));
ATerm FoldL_1 (ATerm, ATerm l_72 (ATerm));
ATerm foldl_1 (ATerm, ATerm q_71 (ATerm));
ATerm specified_tools_0 (ATerm);
ATerm execute_specified_tools_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm o_59 (ATerm));
ATerm pass_v_verbose_0 (ATerm);
ATerm xtc_sglr_1 (ATerm, ATerm s_87 (ATerm));
ATerm xtc_parse_sdf_0 (ATerm);
ATerm sdf_includes_0 (ATerm);
ATerm xtc_implode_asfix_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm add_arg_flags_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm g_75 (ATerm), ATerm h_75 (ATerm));
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
ATerm filter_1 (ATerm, ATerm o_72 (ATerm));
ATerm repeat_1 (ATerm, ATerm m_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm p_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm r_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm union_1 (ATerm, ATerm u_70 (ATerm));
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
ATerm xtc_command_1 (ATerm, ATerm x_74 (ATerm));
ATerm assert_1 (ATerm, ATerm t_75 (ATerm));
ATerm obsolete_1 (ATerm, ATerm g_87 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm a_53 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm z_74 (ATerm), ATerm a_75 (ATerm));
ATerm xtc_pack_sdf_1 (ATerm, ATerm r_87 (ATerm));
ATerm do_pack_sdf_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm sdf2sdf_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm q_75 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm u_63 (ATerm), ATerm v_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm p_75 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm j_74 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm k_74 (ATerm));
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
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm l_71 (ATerm), ATerm m_71 (ATerm));
ATerm crush_2 (ATerm, ATerm j_70 (ATerm), ATerm k_70 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_78 (ATerm));
ATerm Program_1 (ATerm, ATerm h_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm a_87 (ATerm));
ATerm Undefined_1 (ATerm, ATerm i_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_77 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm d_51 (ATerm), ATerm e_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_86 (ATerm));
ATerm map_1 (ATerm, ATerm x_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_52 (ATerm), ATerm n_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_78 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm g_76 (ATerm), ATerm h_76 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm o_74 (ATerm), ATerm p_74 (ATerm));
ATerm sdf2sdf_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_abox2text_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_e_5;
    return(t);
  }
  t = xtc_transform_2(t, b_0, pass_verbose_0);
  return(t);
}
ATerm xtc_ast2abox_1 (ATerm t, ATerm p_87 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = term_r_8;
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    ATerm w_0 = NULL,y_0 = NULL;
    ATerm t_8;
    t_8 = t;
    {
      ATerm x_0 = NULL;
      t = term_x_8;
      {
        t = pass_verbose_0(t);
        {
          x_0 = t;
          if(((w_0 != NULL) && (w_0 != x_0)))
            _fail(x_0);
          else
            w_0 = x_0;
        }
      }
    }
    t = t_8;
    {
      ATerm c_1 = NULL,e_1 = NULL;
      t = term_x_8;
      {
        t = p_87(t);
        {
          t = map_1(t, xtc_find_0);
          {
            ATerm d_1 = NULL;
            d_1 = t;
            if(((c_1 != NULL) && (c_1 != d_1)))
              _fail(d_1);
            else
              c_1 = d_1;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_z_8, not_null(c_1));
              {
                t = add_arg_flags_0(t);
                {
                  e_1 = t;
                  if(((y_0 != NULL) && (y_0 != e_1)))
                    _fail(e_1);
                  else
                    y_0 = e_1;
                }
              }
            }
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_0), not_null(y_0));
        t = conc_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, c_0, e_0);
  return(t);
}
ATerm xtc_pp_sdf_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = term_f_9;
    return(t);
  }
  t = xtc_transform_2(t, f_0, pass_verbose_0);
  {
    ATerm p_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_g_9);
      return(t);
    }
    t = xtc_ast2abox_1(t, p_0);
    t = xtc_abox2text_0(t);
  }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm y_74 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, y_74, q_0);
  return(t);
}
ATerm FoldL_1 (ATerm t, ATerm l_72 (ATerm))
{
  ATerm t_2 = NULL,u_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL;
  t_2 = t;
  a_2 :
  if(match_cons(t_2, sym__2))
    {
      u_2 = ATgetArgument(t_2, 0);
      a_3 = ATgetArgument(t_2, 1);
      s_2 :
      if(((ATgetType(u_2) == AT_LIST) && !(ATisEmpty(u_2))))
        {
          y_2 = ATgetFirst((ATermList) u_2);
          z_2 = (ATerm) ATgetNext((ATermList) u_2);
          {
            ATerm e_3 = NULL;
            ATerm f_3 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_2), not_null(a_3));
            {
              t = l_72(t);
              {
                f_3 = t;
                if(((e_3 != NULL) && (e_3 != f_3)))
                  _fail(f_3);
                else
                  e_3 = f_3;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_2), not_null(e_3));
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
  return(t);
}
ATerm foldl_1 (ATerm t, ATerm q_71 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
        l_3 = t;
        j_3 :
        if(match_cons(l_3, sym__2))
          {
            m_3 = ATgetArgument(l_3, 0);
            n_3 = ATgetArgument(l_3, 1);
            k_3 :
            if(((ATgetType(m_3) == AT_LIST) && ATisEmpty(m_3)))
              {
                t = not_null(n_3);
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
        ;
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        {
          t = FoldL_1(t, q_71);
          t = p_3(t);
        }
      }
    return(t);
  }
  t = p_3(t);
  return(t);
}
ATerm specified_tools_0 (ATerm t)
{
  ATerm j_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_9;
      t = get_config_0(t);
      ;
      LocalPopChoice(o_9);
    }
  else
    {
      t = j_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm execute_specified_tools_0 (ATerm t)
{
  ATerm v_3 = NULL,x_3 = NULL;
  ATerm q_9;
  q_9 = t;
  {
    ATerm w_3 = NULL;
    w_3 = t;
    if(((v_3 != NULL) && (v_3 != w_3)))
      _fail(w_3);
    else
      v_3 = w_3;
  }
  t = q_9;
  {
    ATerm y_3 = NULL;
    t = term_x_8;
    {
      t = specified_tools_0(t);
      {
        y_3 = t;
        if(((x_3 != NULL) && (x_3 != y_3)))
          _fail(y_3);
        else
          x_3 = y_3;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), not_null(v_3));
      {
        ATerm r_0 (ATerm t)
        {
          ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
          z_3 = t;
          u_3 :
          if(match_cons(z_3, sym__2))
            {
              a_4 = ATgetArgument(z_3, 0);
              b_4 = ATgetArgument(z_3, 1);
              {
                t = not_null(b_4);
                {
                  ATerm s_0 (ATerm t)
                  {
                    t = not_null(a_4);
                    return(t);
                  }
                  t = xtc_transform_1(t, s_0);
                }
              }
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = foldl_1(t, r_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm i_4 = NULL;
      ATerm j_4 = NULL;
      t = term_t_9;
      {
        t = get_config_0(t);
        {
          j_4 = t;
          if(((i_4 != NULL) && (i_4 != j_4)))
            _fail(j_4);
          else
            i_4 = j_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), term_u_9);
        t = geq_0(t);
      }
    }
    t = r_9;
    t = o_59(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm pass_v_verbose_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm u_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_v_9);
      return(t);
    }
    t = if_verbose3_1(t, u_0);
  }
  return(t);
}
ATerm xtc_sglr_1 (ATerm t, ATerm s_87 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    t = term_w_9;
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm n_4 = NULL,p_4 = NULL;
    ATerm x_9;
    x_9 = t;
    {
      ATerm o_4 = NULL;
      t = term_x_8;
      {
        t = s_87(t);
        {
          t = xtc_find_0(t);
          {
            o_4 = t;
            if(((n_4 != NULL) && (n_4 != o_4)))
              _fail(o_4);
            else
              n_4 = o_4;
          }
        }
      }
    }
    t = x_9;
    {
      ATerm q_4 = NULL;
      t = term_x_8;
      {
        t = pass_v_verbose_0(t);
        {
          q_4 = t;
          if(((p_4 != NULL) && (p_4 != q_4)))
            _fail(q_4);
          else
            p_4 = q_4;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(p_4)), not_null(n_4)), term_z_8), term_z_9);
    }
    return(t);
  }
  t = xtc_transform_2(t, v_0, z_0);
  return(t);
}
ATerm xtc_parse_sdf_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    t = term_b_10;
    return(t);
  }
  t = xtc_sglr_1(t, a_1);
  t = xtc_implode_asfix_0(t);
  return(t);
}
ATerm sdf_includes_0 (ATerm t)
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_h_10;
    return(t);
  }
  t = xtc_transform_2(t, b_1, pass_verbose_0);
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  v_4 :
  if(match_cons(w_4, sym__2))
    {
      x_4 = ATgetArgument(w_4, 0);
      y_4 = ATgetArgument(w_4, 1);
      {
        t = not_null(y_4);
        {
          ATerm k_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(l_10);
            }
          else
            {
              t = k_10;
              {
                ATerm f_1 (ATerm t)
                {
                  ATerm o_10 = t;
                  int p_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      ;
                      LocalPopChoice(p_10);
                    }
                  else
                    {
                      t = o_10;
                      {
                        ATerm b_5 = NULL;
                        t = Cons_2(t, _id, f_1);
                        {
                          ATerm c_5 = NULL;
                          c_5 = t;
                          if(((b_5 != NULL) && (b_5 != c_5)))
                            _fail(c_5);
                          else
                            b_5 = c_5;
                          t = (ATerm) ATinsert(CheckATermList(not_null(b_5)), not_null(x_4));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, f_1);
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
ATerm add_arg_flags_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  ATerm w_5 (ATerm t)
  {
    ATerm r_5 = NULL;
    ATerm s_5 = NULL,u_5 = NULL;
    t = not_null(o_5);
    {
      ATerm t_5 = NULL;
      t_5 = t;
      if(((s_5 != NULL) && (s_5 != t_5)))
        _fail(t_5);
      else
        s_5 = t_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_5), not_null(s_5));
        {
          t = separate_by_0(t);
          {
            u_5 = t;
            if(((r_5 != NULL) && (r_5 != u_5)))
              _fail(u_5);
            else
              r_5 = u_5;
          }
        }
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(r_5)), not_null(n_5));
    return(t);
  }
  m_5 = t;
  k_5 :
  if(match_cons(m_5, sym__2))
    {
      n_5 = ATgetArgument(m_5, 0);
      o_5 = ATgetArgument(m_5, 1);
      l_5 :
      if(((ATgetType(o_5) == AT_LIST) && ATisEmpty(o_5)))
        {
          {
            ATerm q_10 = t;
            int u_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATempty;
                ;
                LocalPopChoice(u_10);
              }
            else
              {
                t = q_10;
                t = w_5(t);
              }
          }
        }
      else
        {
          t = w_5(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm a_6 = NULL;
  a_6 = t;
  t = SSL_int_to_string(not_null(a_6));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
  f_6 = t;
  e_6 :
  if(match_cons(f_6, sym__2))
    {
      g_6 = ATgetArgument(f_6, 0);
      h_6 = ATgetArgument(f_6, 1);
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(g_6), not_null(h_6));
            ;
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            t = SSL_subtr(not_null(g_6), not_null(h_6));
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
  ATerm n_6 = NULL;
  ATerm o_6 = NULL,q_6 = NULL;
  ATerm p_6 = NULL;
  t = term_t_9;
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
        t = term_l_11;
      }
    {
      p_6 = t;
      if(((o_6 != NULL) && (o_6 != p_6)))
        _fail(p_6);
      else
        o_6 = p_6;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_6), term_l_11);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_6)), term_t_9);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym_stdin_0))
    {
      ATerm a_7 = NULL;
      ATerm b_7 = NULL;
      t = term_m_11;
      {
        t = ReadFromFile_0(t);
        {
          b_7 = t;
          if(((a_7 != NULL) && (a_7 != b_7)))
            _fail(b_7);
          else
            a_7 = b_7;
        }
      }
      t = not_null(a_7);
    }
  else
    {
      if(match_cons(y_6, sym_FILE_1))
        {
          z_6 = ATgetArgument(y_6, 0);
          {
            ATerm d_7 = NULL;
            ATerm e_7 = NULL;
            t = not_null(z_6);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  e_7 = t;
                  if(((d_7 != NULL) && (d_7 != e_7)))
                    _fail(e_7);
                  else
                    d_7 = e_7;
                }
              }
            }
            t = not_null(d_7);
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
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
  l_7 = t;
  k_7 :
  if(match_cons(l_7, sym__2))
    {
      m_7 = ATgetArgument(l_7, 0);
      n_7 = ATgetArgument(l_7, 1);
      t = SSL_WriteToBinaryFile(not_null(m_7), not_null(n_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm t_7 = NULL;
  ATerm v_7 = NULL;
  t_7 = t;
  {
    ATerm w_7 = NULL;
    t = xtc_new_file_0(t);
    {
      w_7 = t;
      {
        if(((v_7 != NULL) && (v_7 != w_7)))
          _fail(w_7);
        else
          v_7 = w_7;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_7), not_null(t_7));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(v_7);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_7));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm g_75 (ATerm), ATerm h_75 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, g_75, h_75);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm a_8 = NULL;
  a_8 = t;
  t = SSL_close_file(not_null(a_8));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym__2))
    {
      g_8 = ATgetArgument(f_8, 0);
      h_8 = ATgetArgument(f_8, 1);
      t = SSL_execvp(not_null(g_8), not_null(h_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  t = SSL_waitpid(not_null(m_8));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm w_8 = NULL;
  ATerm y_8 = NULL;
  w_8 = t;
  {
    t = fork_0(t);
    {
      y_8 = t;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_9 = NULL;
            a_9 = t;
            s_8 :
            if(match_int(a_9, 0))
              {
                t = not_null(w_8);
                t = i_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
              t = not_null(y_8);
              {
                t = waitpid_0(t);
                {
                  b_9 = t;
                  u_8 :
                  if(match_cons(b_9, sym_WaitStatus_3))
                    {
                      c_9 = ATgetArgument(b_9, 0);
                      d_9 = ATgetArgument(b_9, 1);
                      e_9 = ATgetArgument(b_9, 2);
                      v_8 :
                      if(match_int(c_9, 0))
                        {
                          t = not_null(w_8);
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
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
  l_9 = t;
  k_9 :
  if(match_cons(l_9, sym__2))
    {
      m_9 = ATgetArgument(l_9, 0);
      n_9 = ATgetArgument(l_9, 1);
      {
        ATerm g_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), not_null(n_9));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, g_1);
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
  ATerm s_9 = NULL;
  s_9 = t;
  t = SSL_table_keys(not_null(s_9));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  {
    t = table_keys_0(t);
    {
      ATerm h_1 (ATerm t)
      {
        ATerm a_10 = NULL;
        ATerm c_10 = NULL;
        a_10 = t;
        {
          ATerm d_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_9), not_null(a_10));
          {
            t = table_get_0(t);
            {
              d_10 = t;
              if(((c_10 != NULL) && (c_10 != d_10)))
                _fail(d_10);
              else
                c_10 = d_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_10), not_null(c_10));
        }
        return(t);
      }
      t = map_1(t, h_1);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm i_1 (ATerm t)
  {
    ATerm t_11;
    t_11 = t;
    {
      ATerm i_10 = NULL;
      ATerm j_10 = NULL;
      t = term_t_9;
      {
        t = get_config_0(t);
        {
          j_10 = t;
          if(((i_10 != NULL) && (i_10 != j_10)))
            _fail(j_10);
          else
            i_10 = j_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_10), term_y_11);
        t = geq_0(t);
      }
    }
    t = t_11;
    t = q_59(t);
    return(t);
  }
  t = try_1(t, i_1);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm z_11;
  z_11 = t;
  {
    ATerm m_10 = NULL;
    ATerm n_10 = NULL;
    n_10 = t;
    if(((m_10 != NULL) && (m_10 != n_10)))
      _fail(n_10);
    else
      m_10 = n_10;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(m_10));
      t = printnl_0(t);
    }
  }
  t = z_11;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm t_10 = NULL;
  ATerm v_10 = NULL,w_10 = NULL;
  t_10 = t;
  {
    ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_e_12, (ATerm) ATmakeAppl(sym_Tool_1, not_null(t_10)));
    {
      t = table_get_0(t);
      {
        x_10 = t;
        r_10 :
        if(((ATgetType(x_10) == AT_LIST) && !(ATisEmpty(x_10))))
          {
            y_10 = ATgetFirst((ATermList) x_10);
            b_11 = (ATerm) ATgetNext((ATermList) x_10);
            s_10 :
            if(match_cons(y_10, sym__2))
              {
                z_10 = ATgetArgument(y_10, 0);
                a_11 = ATgetArgument(y_10, 1);
                {
                  if(((v_10 != NULL) && (v_10 != z_10)))
                    _fail(z_10);
                  else
                    v_10 = z_10;
                  if(((w_10 != NULL) && (w_10 != a_11)))
                    _fail(a_11);
                  else
                    w_10 = a_11;
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
    t = not_null(w_10);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym__2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      {
        ATerm n_11 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_e_12, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_11)));
        {
          t = table_get_0(t);
          {
            ATerm j_1 (ATerm t)
            {
              ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
              o_11 = t;
              g_11 :
              if(match_cons(o_11, sym__2))
                {
                  p_11 = ATgetArgument(o_11, 0);
                  q_11 = ATgetArgument(o_11, 1);
                  {
                    if(((k_11 != NULL) && (k_11 != p_11)))
                      _fail(p_11);
                    else
                      k_11 = p_11;
                    if(((n_11 != NULL) && (n_11 != q_11)))
                      _fail(q_11);
                    else
                      n_11 = q_11;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, j_1);
          }
        }
        t = not_null(n_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm o_72 (ATerm))
{
  ATerm f_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = f_12;
      {
        ATerm j_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = filter_1(t, o_72);
              return(t);
            }
            t = Cons_2(t, o_72, k_1);
            ;
            LocalPopChoice(o_12);
          }
        else
          {
            t = j_12;
            {
              ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
              v_11 = t;
              u_11 :
              if(((ATgetType(v_11) == AT_LIST) && !(ATisEmpty(v_11))))
                {
                  w_11 = ATgetFirst((ATermList) v_11);
                  x_11 = (ATerm) ATgetNext((ATermList) v_11);
                  {
                    t = not_null(x_11);
                    t = filter_1(t, o_72);
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
ATerm repeat_1 (ATerm t, ATerm m_78 (ATerm))
{
  ATerm a_12 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = m_78(t);
      t = a_12(t);
      return(t);
    }
    t = try_1(t, l_1);
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    t = term_q_12;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm r_12 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_12;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, m_1);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm w_12;
    w_12 = t;
    {
      ATerm c_12 = NULL;
      ATerm d_12 = NULL;
      t = term_t_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_12), term_x_12);
        t = geq_0(t);
      }
    }
    t = w_12;
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
    ATerm z_12;
    z_12 = t;
    {
      ATerm g_12 = NULL;
      ATerm h_12 = NULL;
      t = term_t_9;
      {
        t = get_config_0(t);
        {
          h_12 = t;
          if(((g_12 != NULL) && (g_12 != h_12)))
            _fail(h_12);
          else
            g_12 = h_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_12), term_a_13);
        t = geq_0(t);
      }
    }
    t = z_12;
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
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym__2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      if(((m_12 != NULL) && (m_12 != n_12)))
        _fail(n_12);
      else
        m_12 = n_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(((ATgetType(t_12) == AT_LIST) && !(ATisEmpty(t_12))))
    {
      u_12 = ATgetFirst((ATermList) t_12);
      v_12 = (ATerm) ATgetNext((ATermList) t_12);
      {
        t = z_70(t);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm y_12 = NULL;
            y_12 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), not_null(y_12));
              t = y_70(t);
            }
            return(t);
          }
          t = fetch_1(t, p_1);
        }
        t = not_null(v_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm u_70 (ATerm))
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym__2))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      {
        t = not_null(f_13);
        {
          ATerm k_13 (ATerm t)
          {
            ATerm b_13 = t;
            int c_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(g_13);
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
                        t = not_null(g_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_70, q_1);
                      t = k_13(t);
                      ;
                      LocalPopChoice(i_13);
                    }
                  else
                    {
                      t = h_13;
                      t = Cons_2(t, _id, k_13);
                    }
                }
              }
            return(t);
          }
          t = k_13(t);
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
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym__3))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      s_13 = ATgetArgument(p_13, 2);
      {
        ATerm j_13;
        j_13 = t;
        {
          ATerm w_13 = NULL;
          ATerm x_13 = NULL,z_13 = NULL;
          ATerm y_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_13), not_null(r_13));
          {
            ATerm l_13 = t;
            int m_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(m_13);
              }
            else
              {
                t = l_13;
                t = (ATerm) ATempty;
              }
            {
              y_13 = t;
              if(((x_13 != NULL) && (x_13 != y_13)))
                _fail(y_13);
              else
                x_13 = y_13;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), not_null(s_13));
            {
              t = union_0(t);
              {
                z_13 = t;
                if(((w_13 != NULL) && (w_13 != z_13)))
                  _fail(z_13);
                else
                  w_13 = z_13;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_13), not_null(r_13), not_null(w_13));
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
ATerm table_putlist_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym__2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      {
        t = not_null(j_14);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
            m_14 = t;
            f_14 :
            if(match_cons(m_14, sym__2))
              {
                n_14 = ATgetArgument(m_14, 0);
                o_14 = ATgetArgument(m_14, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(i_14), not_null(n_14), not_null(o_14));
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
  ATerm u_14 = NULL;
  ATerm n_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_14 = NULL;
      v_14 = t;
      {
        if(((u_14 != NULL) && (u_14 != v_14)))
          _fail(v_14);
        else
          u_14 = v_14;
        t = SSL_ReadFromFile(not_null(u_14));
      }
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = n_13;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_u_13;
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
  ATerm z_14 = NULL;
  ATerm b_15 = NULL;
  z_14 = t;
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
      ATerm a_14 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_12, (ATerm) ATmakeAppl(sym_Imported_1, not_null(z_14)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_14;
        }
      {
        ATerm b_14;
        b_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_12, term_c_14, (ATerm) ATinsert(ATempty, not_null(z_14)));
          t = table_put_0(t);
        }
        t = b_14;
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
            ATerm e_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(k_14);
              }
            else
              {
                t = e_14;
                t = (ATerm) ATempty;
              }
            {
              ATerm x_1 (ATerm t)
              {
                ATerm y_1 (ATerm t)
                {
                  t = term_l_14;
                  return(t);
                }
                t = say_1(t, y_1);
                return(t);
              }
              t = if_verbose6_1(t, x_1);
              {
                ATerm c_15 = NULL;
                c_15 = t;
                if(((b_15 != NULL) && (b_15 != c_15)))
                  _fail(c_15);
                else
                  b_15 = c_15;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_12, not_null(b_15));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm z_1 (ATerm t)
                      {
                        ATerm b_2 (ATerm t)
                        {
                          t = term_p_14;
                          return(t);
                        }
                        t = say_1(t, b_2);
                        return(t);
                      }
                      t = if_verbose6_1(t, z_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_e_12, (ATerm)ATmakeAppl(sym_Imported_1, not_null(z_14)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm c_2 (ATerm t)
                            {
                              ATerm d_2 (ATerm t)
                              {
                                t = term_l_14;
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
  ATerm g_15 = NULL;
  g_15 = t;
  t = SSL_getenv(not_null(g_15));
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
        ATerm t_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_14;
            t = getenv_0(t);
            ;
            LocalPopChoice(w_14);
          }
        else
          {
            t = t_14;
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
      t = term_y_14;
      return(t);
    }
    t = debug_1(t, f_2);
    return(t);
  }
  t = if_verbose5_1(t, e_2);
  {
    ATerm a_15;
    a_15 = t;
    {
      ATerm d_15 = t;
      int e_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_f_15;
          t = table_get_0(t);
          ;
          LocalPopChoice(e_15);
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
    t = a_15;
    {
      ATerm g_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          t = term_h_15;
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
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = term_m_15;
          return(t);
        }
        t = debug_1(t, j_2);
        return(t);
      }
      t = if_verbose5_1(t, i_2);
      {
        t = xtc_load_0(t);
        {
          ATerm n_15 = t;
          int o_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(o_15);
            }
          else
            {
              t = n_15;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm k_2 (ATerm t)
            {
              ATerm l_2 (ATerm t)
              {
                t = term_m_15;
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
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      {
        ATerm k_15 = NULL;
        ATerm l_15 = NULL;
        l_15 = t;
        if(((k_15 != NULL) && (k_15 != l_15)))
          _fail(l_15);
        else
          k_15 = l_15;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_15), not_null(k_15)), term_t_15);
          {
            t = error_0(t);
            {
              ATerm m_2 (ATerm t)
              {
                t = term_e_12;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_2 (ATerm t)
                    {
                      t = term_v_15;
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
ATerm xtc_command_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm p_15 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    ATerm q_15 = NULL;
    t = x_74(t);
    {
      t = xtc_find_warning_0(t);
      {
        q_15 = t;
        if(((p_15 != NULL) && (p_15 != q_15)))
          _fail(q_15);
        else
          p_15 = q_15;
      }
    }
  }
  t = w_15;
  {
    ATerm x_15;
    x_15 = t;
    {
      ATerm r_15 = NULL;
      ATerm s_15 = NULL;
      s_15 = t;
      if(((r_15 != NULL) && (r_15 != s_15)))
        _fail(s_15);
      else
        r_15 = s_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(r_15));
        t = call_0(t);
      }
    }
    t = x_15;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm t_75 (ATerm))
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym__2))
    {
      b_16 = ATgetArgument(a_16, 0);
      c_16 = ATgetArgument(a_16, 1);
      {
        ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
        ATerm d_16;
        d_16 = t;
        {
          ATerm i_16 = NULL;
          ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
          t = t_75(t);
          {
            i_16 = t;
            {
              if(((f_16 != NULL) && (f_16 != i_16)))
                _fail(i_16);
              else
                f_16 = i_16;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_16), not_null(b_16), not_null(c_16));
                {
                  t = table_push_0(t);
                  {
                    ATerm e_16 = t;
                    int m_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_16), term_n_16);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(m_16);
                      }
                    else
                      {
                        t = e_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      j_16 = t;
                      y_15 :
                      if(((ATgetType(j_16) == AT_LIST) && !(ATisEmpty(j_16))))
                        {
                          k_16 = ATgetFirst((ATermList) j_16);
                          l_16 = (ATerm) ATgetNext((ATermList) j_16);
                          {
                            if(((g_16 != NULL) && (g_16 != k_16)))
                              _fail(k_16);
                            else
                              g_16 = k_16;
                            {
                              if(((h_16 != NULL) && (h_16 != l_16)))
                                _fail(l_16);
                              else
                                h_16 = l_16;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(f_16), term_n_16, (ATerm) ATinsert(CheckATermList(not_null(h_16)), (ATerm) ATinsert(CheckATermList(not_null(g_16)), not_null(b_16))));
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
        t = d_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm g_87 (ATerm))
{
  ATerm o_16;
  o_16 = t;
  {
    t = g_87(t);
    {
      ATerm o_2 (ATerm t)
      {
        t = term_p_16;
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
  ATerm t_16 = NULL,u_16 = NULL;
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
      v_16 = t;
      q_16 :
      if(match_cons(v_16, sym__2))
        {
          w_16 = ATgetArgument(v_16, 0);
          x_16 = ATgetArgument(v_16, 1);
          {
            if(((u_16 != NULL) && (u_16 != w_16)))
              _fail(w_16);
            else
              u_16 = w_16;
            if(((t_16 != NULL) && (t_16 != x_16)))
              _fail(x_16);
            else
              t_16 = x_16;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_16);
      t = SSL_open_file(not_null(u_16), not_null(t_16));
    }
  else
    {
      t = r_16;
      {
        ATerm y_16 = NULL;
        ATerm z_16 = NULL;
        ATerm p_2 (ATerm t)
        {
          t = term_b_17;
          return(t);
        }
        t = obsolete_1(t, p_2);
        {
          y_16 = t;
          {
            if(((u_16 != NULL) && (u_16 != y_16)))
              _fail(y_16);
            else
              u_16 = y_16;
            {
              ATerm c_17;
              c_17 = t;
              {
                ATerm a_17 = NULL;
                t = term_d_17;
                {
                  a_17 = t;
                  if(((z_16 != NULL) && (z_16 != a_17)))
                    _fail(a_17);
                  else
                    z_16 = a_17;
                }
              }
              t = c_17;
              t = SSL_open_file(not_null(u_16), not_null(z_16));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm g_17 = NULL;
  ATerm i_17 = NULL;
  g_17 = t;
  {
    ATerm e_17;
    e_17 = t;
    {
      ATerm j_17 = NULL;
      t = term_f_17;
      {
        j_17 = t;
        if(((i_17 != NULL) && (i_17 != j_17)))
          _fail(j_17);
        else
          i_17 = j_17;
      }
    }
    t = e_17;
    {
      t = SSL_open_file(not_null(g_17), not_null(i_17));
      t = SSL_close_file(not_null(g_17));
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
  ATerm n_17 = NULL;
  ATerm o_17 = NULL;
  t = term_x_8;
  {
    t = new_0(t);
    {
      o_17 = t;
      if(((n_17 != NULL) && (n_17 != o_17)))
        _fail(o_17);
      else
        n_17 = o_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), term_h_17);
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
  ATerm s_17 = NULL;
  t = new_file_0(t);
  {
    s_17 = t;
    {
      ATerm k_17;
      k_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), term_d_17);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), term_x_8);
            {
              ATerm r_2 (ATerm t)
              {
                t = term_l_17;
                return(t);
              }
              t = assert_1(t, r_2);
            }
          }
        }
      }
      t = k_17;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm c_18 = NULL,d_18 = NULL;
  c_18 = t;
  b_18 :
  if(match_cons(c_18, sym_stdin_0))
    {
      ATerm e_18 = NULL;
      ATerm f_18 = NULL;
      ATerm g_18 = NULL;
      t = xtc_new_file_0(t);
      {
        f_18 = t;
        {
          if(((e_18 != NULL) && (e_18 != f_18)))
            _fail(f_18);
          else
            e_18 = f_18;
          {
            ATerm h_18 = NULL;
            t = o_0(t);
            {
              h_18 = t;
              if(((g_18 != NULL) && (g_18 != h_18)))
                _fail(h_18);
              else
                g_18 = h_18;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_18), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_18)), term_m_17));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(e_18);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_18));
    }
  else
    {
      if(match_cons(c_18, sym_FILE_1))
        {
          d_18 = ATgetArgument(c_18, 0);
          {
            ATerm j_18 = NULL;
            ATerm k_18 = NULL;
            t = not_null(d_18);
            {
              ATerm l_18 = NULL;
              t = xtc_new_file_0(t);
              {
                k_18 = t;
                {
                  if(((j_18 != NULL) && (j_18 != k_18)))
                    _fail(k_18);
                  else
                    j_18 = k_18;
                  {
                    ATerm m_18 = NULL;
                    t = o_0(t);
                    {
                      m_18 = t;
                      if(((l_18 != NULL) && (l_18 != m_18)))
                        _fail(m_18);
                      else
                        l_18 = m_18;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(j_18)), term_m_17), not_null(d_18)), term_p_17));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(j_18);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_18));
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
  ATerm x_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym_stdin_0))
    {
      ATerm c_19 = NULL,e_19 = NULL;
      ATerm q_17;
      q_17 = t;
      {
        ATerm d_19 = NULL;
        t = SSLgetAnnotations(not_null(x_18));
        {
          d_19 = t;
          if(((c_19 != NULL) && (c_19 != d_19)))
            _fail(d_19);
          else
            c_19 = d_19;
        }
      }
      t = q_17;
      {
        ATerm f_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(c_19));
        {
          f_19 = t;
          if(((e_19 != NULL) && (e_19 != f_19)))
            _fail(f_19);
          else
            e_19 = f_19;
        }
        t = not_null(e_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm a_53 (ATerm))
{
  ATerm o_19 = NULL,p_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_FILE_1))
    {
      p_19 = ATgetArgument(o_19, 0);
      {
        ATerm s_19 = NULL,u_19 = NULL;
        ATerm t_19 = NULL;
        t = SSLgetAnnotations(not_null(o_19));
        {
          t_19 = t;
          if(((s_19 != NULL) && (s_19 != t_19)))
            _fail(t_19);
          else
            s_19 = t_19;
        }
        {
          t = not_null(p_19);
          {
            ATerm x_19 = NULL;
            t = a_53(t);
            {
              u_19 = t;
              {
                ATerm y_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(u_19)), not_null(s_19));
                {
                  y_19 = t;
                  if(((x_19 != NULL) && (x_19 != y_19)))
                    _fail(y_19);
                  else
                    x_19 = y_19;
                }
                t = not_null(x_19);
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
ATerm xtc_transform_2 (ATerm t, ATerm z_74 (ATerm), ATerm a_75 (ATerm))
{
  ATerm r_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_17 = t;
      int v_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(v_17);
        }
      else
        {
          t = u_17;
          t = stdin_0(t);
        }
      LocalPopChoice(t_17);
      t = xtc_transform_file_2(t, z_74, a_75);
    }
  else
    {
      t = r_17;
      t = xtc_transform_term_2(t, z_74, a_75);
    }
  return(t);
}
ATerm xtc_pack_sdf_1 (ATerm t, ATerm r_87 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    t = term_w_17;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm l_20 = NULL,p_20 = NULL;
    ATerm x_17;
    x_17 = t;
    {
      ATerm o_20 = NULL;
      t = term_x_8;
      {
        t = pass_verbose_0(t);
        {
          o_20 = t;
          if(((l_20 != NULL) && (l_20 != o_20)))
            _fail(o_20);
          else
            l_20 = o_20;
        }
      }
    }
    t = x_17;
    {
      ATerm q_20 = NULL,s_20 = NULL;
      t = term_x_8;
      {
        t = r_87(t);
        {
          ATerm r_20 = NULL;
          r_20 = t;
          if(((q_20 != NULL) && (q_20 != r_20)))
            _fail(r_20);
          else
            q_20 = r_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_17, not_null(q_20));
            {
              t = add_arg_flags_0(t);
              {
                s_20 = t;
                if(((p_20 != NULL) && (p_20 != s_20)))
                  _fail(s_20);
                else
                  p_20 = s_20;
              }
            }
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_20), not_null(p_20));
        t = conc_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, v_2, w_2);
  t = xtc_implode_asfix_0(t);
  return(t);
}
ATerm do_pack_sdf_0 (ATerm t)
{
  ATerm z_17;
  z_17 = t;
  {
    t = term_a_18;
    t = get_config_0(t);
  }
  t = z_17;
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  f_21 = t;
  e_21 :
  if(match_cons(f_21, sym__2))
    {
      g_21 = ATgetArgument(f_21, 0);
      h_21 = ATgetArgument(f_21, 1);
      {
        ATerm k_21 = NULL;
        ATerm l_21 = NULL,n_21 = NULL;
        ATerm m_21 = NULL;
        t = not_null(g_21);
        {
          ATerm i_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(n_18);
            }
          else
            {
              t = i_18;
              t = (ATerm) ATempty;
            }
          {
            m_21 = t;
            if(((l_21 != NULL) && (l_21 != m_21)))
              _fail(m_21);
            else
              l_21 = m_21;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_21), not_null(l_21));
          {
            t = conc_0(t);
            {
              n_21 = t;
              if(((k_21 != NULL) && (k_21 != n_21)))
                _fail(n_21);
              else
                k_21 = n_21;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_18, not_null(g_21), not_null(k_21));
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
ATerm sdf2sdf_options_0 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm n_22 = NULL;
        n_22 = t;
        w_21 :
        if(!(match_string(n_22, "--pack-sdf")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        ATerm r_18;
        r_18 = t;
        {
          t = term_t_18;
          t = set_config_0(t);
        }
        t = r_18;
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_u_18;
        return(t);
      }
      t = Option_3(t, x_2, b_3, c_3);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm v_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 (ATerm t)
            {
              ATerm p_22 = NULL;
              p_22 = t;
              x_21 :
              if(!(match_string(p_22, "-I")))
                {
                  if(!(match_string(p_22, "--Include")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              ATerm z_18;
              z_18 = t;
              {
                ATerm q_22 = NULL;
                ATerm r_22 = NULL;
                r_22 = t;
                if(((q_22 != NULL) && (q_22 != r_22)))
                  _fail(r_22);
                else
                  q_22 = r_22;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_10, (ATerm) ATinsert(ATempty, not_null(q_22)));
                  t = extend_config_0(t);
                }
              }
              t = z_18;
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              t = term_a_19;
              return(t);
            }
            t = ArgOption_3(t, d_3, g_3, h_3);
            ;
            LocalPopChoice(y_18);
          }
        else
          {
            t = v_18;
            {
              ATerm b_19 = t;
              int g_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_3 (ATerm t)
                  {
                    ATerm t_22 = NULL;
                    t_22 = t;
                    d_22 :
                    if(!(match_string(t_22, "--sdfcons")))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  ATerm o_3 (ATerm t)
                  {
                    ATerm h_19;
                    h_19 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATempty, term_i_19));
                      t = extend_config_0(t);
                    }
                    t = h_19;
                    return(t);
                  }
                  ATerm q_3 (ATerm t)
                  {
                    t = term_j_19;
                    return(t);
                  }
                  t = Option_3(t, i_3, o_3, q_3);
                  ;
                  LocalPopChoice(g_19);
                }
              else
                {
                  t = b_19;
                  {
                    ATerm k_19 = t;
                    int l_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_3 (ATerm t)
                        {
                          ATerm u_22 = NULL;
                          u_22 = t;
                          e_22 :
                          if(!(match_string(u_22, "--sdf2asdf")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm s_3 (ATerm t)
                        {
                          ATerm m_19;
                          m_19 = t;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATempty, term_q_19));
                            t = extend_config_0(t);
                          }
                          t = m_19;
                          return(t);
                        }
                        ATerm t_3 (ATerm t)
                        {
                          t = term_r_19;
                          return(t);
                        }
                        t = Option_3(t, r_3, s_3, t_3);
                        ;
                        LocalPopChoice(l_19);
                      }
                    else
                      {
                        t = k_19;
                        {
                          ATerm c_4 (ATerm t)
                          {
                            ATerm v_22 = NULL;
                            v_22 = t;
                            m_22 :
                            if(!(match_string(v_22, "--sdf-bracket")))
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          ATerm d_4 (ATerm t)
                          {
                            ATerm v_19;
                            v_19 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATempty, term_f_9));
                              t = extend_config_0(t);
                            }
                            t = v_19;
                            return(t);
                          }
                          ATerm e_4 (ATerm t)
                          {
                            t = term_w_19;
                            return(t);
                          }
                          t = Option_3(t, c_4, d_4, e_4);
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
ATerm copy_file_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
  z_22 = t;
  y_22 :
  if(match_cons(z_22, sym__2))
    {
      a_23 = ATgetArgument(z_22, 0);
      b_23 = ATgetArgument(z_22, 1);
      t = SSL_copy(not_null(a_23), not_null(b_23));
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
      ATerm z_19;
      z_19 = t;
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
      t = z_19;
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
      ATerm a_20;
      a_20 = t;
      {
        ATerm b_24 = NULL;
        t = SSLgetAnnotations(not_null(w_23));
        {
          b_24 = t;
          if(((a_24 != NULL) && (a_24 != b_24)))
            _fail(b_24);
          else
            a_24 = b_24;
        }
      }
      t = a_20;
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
  ATerm u_24 = NULL,y_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_FILE_1))
    {
      y_24 = ATgetArgument(u_24, 0);
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
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
                  ATerm d_20 = t;
                  int e_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(e_20);
                    }
                  else
                    {
                      t = d_20;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), not_null(b_25));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_24));
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            {
              ATerm f_20 = t;
              int g_20 = stack_ptr;
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
                        ATerm h_20 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm i_20 = t;
                            int j_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(j_20);
                              }
                            else
                              {
                                t = i_20;
                                {
                                  ATerm k_20 = t;
                                  int m_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(m_20);
                                    }
                                  else
                                    {
                                      t = k_20;
                                      {
                                        ATerm g_25 = NULL;
                                        g_25 = t;
                                        if(((y_24 != NULL) && (y_24 != g_25)))
                                          _fail(g_25);
                                        else
                                          y_24 = g_25;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = h_20;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), not_null(e_25));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_24));
                  ;
                  LocalPopChoice(g_20);
                }
              else
                {
                  t = f_20;
                  {
                    ATerm i_25 = NULL;
                    t = m_0(t);
                    {
                      i_25 = t;
                      if(((y_24 != NULL) && (y_24 != i_25)))
                        _fail(i_25);
                      else
                        y_24 = i_25;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_24));
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
        ATerm n_20;
        n_20 = t;
        {
          ATerm f_26 = NULL;
          ATerm g_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_26), not_null(c_26));
          {
            ATerm t_20 = t;
            int u_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(u_20);
              }
            else
              {
                t = t_20;
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
        t = n_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm q_75 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  ATerm v_20;
  v_20 = t;
  {
    ATerm q_26 = NULL;
    ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
    t = q_75(t);
    {
      q_26 = t;
      {
        if(((p_26 != NULL) && (p_26 != q_26)))
          _fail(q_26);
        else
          p_26 = q_26;
        {
          ATerm w_20 = t;
          int x_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), term_n_16);
              t = table_get_0(t);
              ;
              LocalPopChoice(x_20);
            }
          else
            {
              t = w_20;
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
                            ATerm f_4 (ATerm t)
                            {
                              ATerm u_26 = NULL;
                              u_26 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(u_26));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, f_4);
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
  t = v_20;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  t = SSL_remove(not_null(a_27));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm u_63 (ATerm), ATerm v_63 (ATerm))
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_63(t);
      t = v_63(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        t = v_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm f_27 = NULL;
  ATerm a_21;
  a_21 = t;
  {
    ATerm g_27 = NULL;
    ATerm h_27 = NULL;
    t = p_75(t);
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
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
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
  t = a_21;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm n_27 = NULL,o_27 = NULL;
  ATerm g_4 (ATerm t)
  {
    t = term_l_17;
    return(t);
  }
  t = begin_scope_1(t, g_4);
  {
    ATerm h_4 (ATerm t)
    {
      ATerm d_21;
      d_21 = t;
      {
        ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_21;
            t = table_get_0(t);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
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
                      ATerm k_4 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, k_4);
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
      t = d_21;
      {
        ATerm l_4 (ATerm t)
        {
          t = term_l_17;
          return(t);
        }
        t = end_scope_1(t, l_4);
      }
      return(t);
    }
    t = restore_always_2(t, j_74, h_4);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_27 = NULL;
        ATerm v_27 = NULL;
        t = term_p_17;
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
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = term_m_11;
      }
    {
      t = k_74(t);
      {
        ATerm r_4 (ATerm t)
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_m_17;
              t = get_config_0(t);
              ;
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
              t = term_t_21;
            }
          return(t);
        }
        t = copy_to_1(t, r_4);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, m_4);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
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
  ATerm t_4 (ATerm t)
  {
    t = term_u_21;
    t = set_config_0(t);
    t = term_v_21;
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_y_21;
    return(t);
  }
  t = Option_3(t, s_4, t_4, u_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
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
  ATerm a_5 (ATerm t)
  {
    ATerm z_21;
    z_21 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_a_22, not_null(c_28));
        t = set_config_0(t);
      }
    }
    t = z_21;
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_b_22;
    return(t);
  }
  t = ArgOption_3(t, z_4, a_5, d_5);
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
  ATerm c_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_5 (ATerm t)
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
      ATerm g_5 (ATerm t)
      {
        t = term_h_22;
        t = set_config_0(t);
        t = term_i_22;
        return(t);
      }
      ATerm h_5 (ATerm t)
      {
        t = term_j_22;
        return(t);
      }
      t = Option_3(t, f_5, g_5, h_5);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = c_22;
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 (ATerm t)
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
            ATerm j_5 (ATerm t)
            {
              ATerm s_28 = NULL;
              ATerm o_22;
              o_22 = t;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(q_28));
                  t = set_config_0(t);
                }
              }
              t = o_22;
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
            ATerm p_5 (ATerm t)
            {
              t = term_s_22;
              return(t);
            }
            t = ArgOption_3(t, i_5, j_5, p_5);
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            {
              ATerm q_5 (ATerm t)
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
              ATerm v_5 (ATerm t)
              {
                t = term_x_22;
                t = set_config_0(t);
                t = term_c_23;
                return(t);
              }
              ATerm x_5 (ATerm t)
              {
                t = term_d_23;
                return(t);
              }
              t = Option_3(t, q_5, v_5, x_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
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
  ATerm z_5 (ATerm t)
  {
    ATerm d_29 = NULL;
    ATerm k_23;
    k_23 = t;
    {
      ATerm b_29 = NULL;
      ATerm c_29 = NULL;
      c_29 = t;
      if(((b_29 != NULL) && (b_29 != c_29)))
        _fail(c_29);
      else
        b_29 = c_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_17, not_null(b_29));
        t = set_config_0(t);
      }
    }
    t = k_23;
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
  ATerm b_6 (ATerm t)
  {
    t = term_p_23;
    return(t);
  }
  t = ArgOption_3(t, y_5, z_5, b_6);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm c_6 (ATerm t)
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
        ATerm d_6 (ATerm t)
        {
          t = term_t_23;
          t = set_config_0(t);
          t = term_u_23;
          return(t);
        }
        ATerm i_6 (ATerm t)
        {
          t = term_x_23;
          return(t);
        }
        t = Option_3(t, c_6, d_6, i_6);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm p_29 = NULL,q_29 = NULL,t_29 = NULL,u_29 = NULL,y_29 = NULL;
  p_29 = t;
  n_29 :
  if(match_string(p_29, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(p_29) == AT_LIST) && !(ATisEmpty(p_29))))
        {
          q_29 = ATgetFirst((ATermList) p_29);
          t_29 = (ATerm) ATgetNext((ATermList) p_29);
          o_29 :
          if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
            {
              u_29 = ATgetFirst((ATermList) t_29);
              y_29 = (ATerm) ATgetNext((ATermList) t_29);
              {
                ATerm c_30 = NULL;
                ATerm y_23;
                y_23 = t;
                {
                  t = not_null(q_29);
                  t = j_0(t);
                }
                t = y_23;
                {
                  ATerm d_30 = NULL;
                  t = not_null(u_29);
                  {
                    t = k_0(t);
                    {
                      d_30 = t;
                      if(((c_30 != NULL) && (c_30 != d_30)))
                        _fail(d_30);
                      else
                        c_30 = d_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_29)), not_null(c_30));
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
  ATerm j_6 (ATerm t)
  {
    ATerm k_30 = NULL;
    k_30 = t;
    h_30 :
    if(!(match_string(k_30, "-i")))
      {
        if(!(match_string(k_30, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    ATerm p_30 = NULL;
    ATerm z_23;
    z_23 = t;
    {
      ATerm l_30 = NULL;
      ATerm m_30 = NULL;
      m_30 = t;
      if(((l_30 != NULL) && (l_30 != m_30)))
        _fail(m_30);
      else
        l_30 = m_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_17, not_null(l_30));
        t = set_config_0(t);
      }
    }
    t = z_23;
    {
      ATerm q_30 = NULL;
      q_30 = t;
      if(((p_30 != NULL) && (p_30 != q_30)))
        _fail(q_30);
      else
        p_30 = q_30;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_30));
    }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_c_24;
    return(t);
  }
  t = ArgOption_3(t, j_6, k_6, l_6);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm w_30 = NULL;
  ATerm j_24;
  j_24 = t;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm x_30 = NULL,y_30 = NULL;
      x_30 = t;
      v_30 :
      if(match_cons(x_30, sym_Program_1))
        {
          y_30 = ATgetArgument(x_30, 0);
          if(((w_30 != NULL) && (w_30 != y_30)))
            _fail(y_30);
          else
            w_30 = y_30;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, m_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_24), not_null(w_30)), term_k_24));
      {
        t = printnl_0(t);
        {
          t = term_l_11;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_24;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATinsert(ATempty, term_m_24));
  {
    t = printnl_0(t);
    {
      t = term_l_11;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  t = SSL_TicksToSeconds(not_null(b_31));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym__2))
    {
      h_31 = ATgetArgument(g_31, 0);
      i_31 = ATgetArgument(g_31, 1);
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_31), not_null(i_31));
            ;
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            t = SSL_addr(not_null(h_31), not_null(i_31));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_71 (ATerm), ATerm m_71 (ATerm))
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_71(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
        s_31 = t;
        o_31 :
        if(((ATgetType(s_31) == AT_LIST) && !(ATisEmpty(s_31))))
          {
            t_31 = ATgetFirst((ATermList) s_31);
            u_31 = (ATerm) ATgetNext((ATermList) s_31);
            {
              ATerm x_31 = NULL;
              ATerm y_31 = NULL;
              t = not_null(u_31);
              {
                t = foldr_2(t, l_71, m_71);
                {
                  y_31 = t;
                  if(((x_31 != NULL) && (x_31 != y_31)))
                    _fail(y_31);
                  else
                    x_31 = y_31;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(x_31));
                t = m_71(t);
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
ATerm crush_2 (ATerm t, ATerm j_70 (ATerm), ATerm k_70 (ATerm))
{
  ATerm j_32 = NULL;
  ATerm q_32 = NULL;
  j_32 = t;
  {
    ATerm r_32 = NULL;
    ATerm t_32 = NULL,w_32 = NULL,x_32 = NULL;
    t = not_null(j_32);
    {
      r_32 = t;
      {
        t = SSL_explode_term(not_null(r_32));
        {
          t_32 = t;
          g_32 :
          if(match_cons(t_32, sym__2))
            {
              w_32 = ATgetArgument(t_32, 0);
              x_32 = ATgetArgument(t_32, 1);
              if(((q_32 != NULL) && (q_32 != x_32)))
                _fail(x_32);
              else
                q_32 = x_32;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_32);
      t = foldr_2(t, j_70, k_70);
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
    ATerm r_6 (ATerm t)
    {
      t = term_g_22;
      return(t);
    }
    t = crush_2(t, r_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  e_33 :
  if(match_cons(f_33, sym__2))
    {
      g_33 = ATgetArgument(f_33, 0);
      h_33 = ATgetArgument(f_33, 1);
      {
        ATerm r_24;
        r_24 = t;
        {
          ATerm s_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_33), not_null(h_33));
              ;
              LocalPopChoice(v_24);
            }
          else
            {
              t = s_24;
              t = SSL_gtr(not_null(g_33), not_null(h_33));
            }
        }
        t = r_24;
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
  ATerm n_33 = NULL;
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_33 = NULL,z_33 = NULL,a_34 = NULL;
      o_33 = t;
      m_33 :
      if(match_cons(o_33, sym__2))
        {
          z_33 = ATgetArgument(o_33, 0);
          a_34 = ATgetArgument(o_33, 1);
          {
            if(((n_33 != NULL) && (n_33 != z_33)))
              _fail(z_33);
            else
              n_33 = z_33;
            if(((n_33 != NULL) && (n_33 != a_34)))
              _fail(a_34);
            else
              n_33 = a_34;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm z_24;
    z_24 = t;
    {
      ATerm e_34 = NULL;
      ATerm h_34 = NULL;
      t = term_t_9;
      {
        t = get_config_0(t);
        {
          h_34 = t;
          if(((e_34 != NULL) && (e_34 != h_34)))
            _fail(h_34);
          else
            e_34 = h_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_34), term_l_11);
        t = geq_0(t);
      }
    }
    t = z_24;
    t = m_59(t);
    return(t);
  }
  t = try_1(t, s_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm m_34 = NULL,r_34 = NULL;
    ATerm a_25;
    a_25 = t;
    {
      ATerm n_34 = NULL;
      t = run_time_0(t);
      {
        n_34 = t;
        if(((m_34 != NULL) && (m_34 != n_34)))
          _fail(n_34);
        else
          m_34 = n_34;
      }
    }
    t = a_25;
    {
      ATerm c_35 = NULL;
      t = term_d_25;
      {
        t = get_config_0(t);
        {
          c_35 = t;
          if(((r_34 != NULL) && (r_34 != c_35)))
            _fail(c_35);
          else
            r_34 = c_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_25), not_null(m_34)), term_h_25), not_null(r_34)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, t_6);
  {
    t = term_g_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  j_35 :
  if(match_cons(k_35, sym_Version_0))
    {
      ATerm n_35 = NULL,u_35 = NULL;
      ATerm k_25;
      k_25 = t;
      {
        ATerm o_35 = NULL;
        t = SSLgetAnnotations(not_null(k_35));
        {
          o_35 = t;
          if(((n_35 != NULL) && (n_35 != o_35)))
            _fail(o_35);
          else
            n_35 = o_35;
        }
      }
      t = k_25;
      {
        ATerm v_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_35));
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
ATerm need_help_1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        {
          ATerm n_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(o_25);
            }
          else
            {
              t = n_25;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, u_6);
  t = w_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_36 = NULL;
  a_36 = t;
  t = SSL_table_create(not_null(a_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_36 = NULL;
  i_36 = t;
  {
    ATerm p_25;
    p_25 = t;
    {
      t = term_q_25;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_25, term_v_25, not_null(i_36));
          t = table_put_0(t);
        }
      }
    }
    t = p_25;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm m_36 = NULL;
  m_36 = t;
  t = SSL_table_destroy(not_null(m_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  t = SSL_exit(not_null(q_36));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  t_36 :
  if(((ATgetType(u_36) == AT_LIST) && ATisEmpty(u_36)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_36) == AT_LIST) && !(ATisEmpty(u_36))))
        {
          v_36 = ATgetFirst((ATermList) u_36);
          w_36 = (ATerm) ATgetNext((ATermList) u_36);
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
  ATerm w_25;
  w_25 = t;
  {
    ATerm z_36 = NULL;
    ATerm c_37 = NULL;
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        {
          ATerm a_37 = NULL;
          ATerm b_37 = NULL;
          b_37 = t;
          if(((a_37 != NULL) && (a_37 != b_37)))
            _fail(b_37);
          else
            a_37 = b_37;
          t = (ATerm) ATinsert(ATempty, not_null(a_37));
        }
      }
    {
      c_37 = t;
      if(((z_36 != NULL) && (z_36 != c_37)))
        _fail(c_37);
      else
        z_36 = c_37;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_21, not_null(z_36));
      t = printnl_0(t);
    }
  }
  t = w_25;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  n_37 = t;
  k_37 :
  if(((ATgetType(n_37) == AT_LIST) && !(ATisEmpty(n_37))))
    {
      l_37 = ATgetFirst((ATermList) n_37);
      m_37 = (ATerm) ATgetNext((ATermList) n_37);
      {
        ATerm q_37 = NULL;
        t = not_null(m_37);
        {
          ATerm d_26;
          d_26 = t;
          {
            ATerm r_37 = NULL,t_37 = NULL,v_37 = NULL;
            ATerm e_26;
            e_26 = t;
            {
              ATerm s_37 = NULL;
              t = i_0(t);
              {
                s_37 = t;
                if(((r_37 != NULL) && (r_37 != s_37)))
                  _fail(s_37);
                else
                  r_37 = s_37;
              }
            }
            t = e_26;
            {
              ATerm u_37 = NULL;
              t = not_null(l_37);
              {
                t = h_0(t);
                {
                  u_37 = t;
                  if(((t_37 != NULL) && (t_37 != u_37)))
                    _fail(u_37);
                  else
                    t_37 = u_37;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_37)), not_null(t_37));
                {
                  v_37 = t;
                  if(((q_37 != NULL) && (q_37 != v_37)))
                    _fail(v_37);
                  else
                    q_37 = v_37;
                }
              }
            }
          }
          t = d_26;
          {
            ATerm v_6 (ATerm t)
            {
              t = not_null(q_37);
              return(t);
            }
            t = reverse_acc_2(t, h_0, v_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_37) == AT_LIST) && ATisEmpty(n_37)))
        {
          {
            t = term_x_8;
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
  ATerm w_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, w_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_53 (ATerm))
{
  ATerm g_38 = NULL,h_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym_Program_1))
    {
      h_38 = ATgetArgument(g_38, 0);
      {
        ATerm k_38 = NULL,m_38 = NULL;
        ATerm l_38 = NULL;
        t = SSLgetAnnotations(not_null(g_38));
        {
          l_38 = t;
          if(((k_38 != NULL) && (k_38 != l_38)))
            _fail(l_38);
          else
            k_38 = l_38;
        }
        {
          t = not_null(h_38);
          {
            ATerm o_38 = NULL;
            t = h_53(t);
            {
              m_38 = t;
              {
                ATerm p_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_38)), not_null(k_38));
                {
                  p_38 = t;
                  if(((o_38 != NULL) && (o_38 != p_38)))
                    _fail(p_38);
                  else
                    o_38 = p_38;
                }
                t = not_null(o_38);
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
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_38 = NULL;
      t = term_d_25;
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
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm c_7 (ATerm t)
        {
          ATerm f_7 (ATerm t)
          {
            ATerm a_39 = NULL;
            a_39 = t;
            if(((y_38 != NULL) && (y_38 != a_39)))
              _fail(a_39);
            else
              y_38 = a_39;
            return(t);
          }
          t = Program_1(t, f_7);
          return(t);
        }
        t = option_defined_1(t, c_7);
      }
    }
  {
    ATerm g_7 (ATerm t)
    {
      ATerm h_7 (ATerm t)
      {
        t = not_null(y_38);
        return(t);
      }
      t = short_description_1(t, h_7);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_7);
    {
      t = term_j_26;
      {
        t = echo_0(t);
        {
          t = term_v_26;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_7 (ATerm t)
                {
                  ATerm b_39 = NULL;
                  ATerm c_39 = NULL;
                  c_39 = t;
                  if(((b_39 != NULL) && (b_39 != c_39)))
                    _fail(c_39);
                  else
                    b_39 = c_39;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_39)), term_w_26);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_7);
                {
                  ATerm j_7 (ATerm t)
                  {
                    ATerm d_39 = NULL;
                    ATerm e_39 = NULL;
                    ATerm o_7 (ATerm t)
                    {
                      t = not_null(y_38);
                      return(t);
                    }
                    t = long_description_1(t, o_7);
                    {
                      e_39 = t;
                      if(((d_39 != NULL) && (d_39 != e_39)))
                        _fail(e_39);
                      else
                        d_39 = e_39;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_39)), term_x_26);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_7);
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
  ATerm y_26;
  y_26 = t;
  {
    ATerm k_39 = NULL;
    ATerm l_39 = NULL;
    l_39 = t;
    if(((k_39 != NULL) && (k_39 != l_39)))
      _fail(l_39);
    else
      k_39 = l_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATinsert(ATempty, not_null(k_39)));
      t = printnl_0(t);
    }
  }
  t = y_26;
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_87 (ATerm))
{
  ATerm z_26;
  z_26 = t;
  {
    t = a_87(t);
    t = debug_0(t);
  }
  t = z_26;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_53 (ATerm))
{
  ATerm s_39 = NULL,t_39 = NULL;
  s_39 = t;
  r_39 :
  if(match_cons(s_39, sym_Undefined_1))
    {
      t_39 = ATgetArgument(s_39, 0);
      {
        ATerm w_39 = NULL,y_39 = NULL;
        ATerm x_39 = NULL;
        t = SSLgetAnnotations(not_null(s_39));
        {
          x_39 = t;
          if(((w_39 != NULL) && (w_39 != x_39)))
            _fail(x_39);
          else
            w_39 = x_39;
        }
        {
          t = not_null(t_39);
          {
            ATerm a_40 = NULL;
            t = i_53(t);
            {
              y_39 = t;
              {
                ATerm b_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_39)), not_null(w_39));
                {
                  b_40 = t;
                  if(((a_40 != NULL) && (a_40 != b_40)))
                    _fail(b_40);
                  else
                    a_40 = b_40;
                }
                t = not_null(a_40);
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
ATerm fetch_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm g_40 (ATerm t)
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_65, _id);
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = Cons_2(t, _id, g_40);
      }
    return(t);
  }
  t = g_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_77 (ATerm))
{
  t = fetch_1(t, d_77);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym_Help_0))
    {
      ATerm n_40 = NULL,p_40 = NULL;
      ATerm d_27;
      d_27 = t;
      {
        ATerm o_40 = NULL;
        t = SSLgetAnnotations(not_null(l_40));
        {
          o_40 = t;
          if(((n_40 != NULL) && (n_40 != o_40)))
            _fail(o_40);
          else
            n_40 = o_40;
        }
      }
      t = d_27;
      {
        ATerm q_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_40));
        {
          q_40 = t;
          if(((p_40 != NULL) && (p_40 != q_40)))
            _fail(q_40);
          else
            p_40 = q_40;
        }
        t = not_null(p_40);
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
  ATerm v_40 = NULL;
  v_40 = t;
  t = SSL_implode_string(not_null(v_40));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(j_27);
    }
  else
    {
      t = e_27;
      {
        ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
        a_41 = t;
        z_40 :
        if(((ATgetType(a_41) == AT_LIST) && !(ATisEmpty(a_41))))
          {
            b_41 = ATgetFirst((ATermList) a_41);
            c_41 = (ATerm) ATgetNext((ATermList) a_41);
            {
              t = not_null(b_41);
              {
                ATerm p_7 (ATerm t)
                {
                  t = not_null(c_41);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_7);
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
  ATerm p_41 = NULL;
  ATerm r_41 = NULL;
  p_41 = t;
  {
    ATerm s_41 = NULL;
    ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
    t = not_null(p_41);
    {
      s_41 = t;
      {
        t = SSL_explode_term(not_null(s_41));
        {
          u_41 = t;
          n_41 :
          if(match_cons(u_41, sym__2))
            {
              v_41 = ATgetArgument(u_41, 0);
              w_41 = ATgetArgument(u_41, 1);
              o_41 :
              if(match_string(v_41, ""))
                {
                  if(((r_41 != NULL) && (r_41 != w_41)))
                    _fail(w_41);
                  else
                    r_41 = w_41;
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
      t = not_null(r_41);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm a_42 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_42);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        {
          t = Nil_0(t);
          t = m_65(t);
        }
      }
    return(t);
  }
  t = a_42(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
  d_42 = t;
  c_42 :
  if(match_cons(d_42, sym__2))
    {
      e_42 = ATgetArgument(d_42, 0);
      f_42 = ATgetArgument(d_42, 1);
      {
        t = not_null(e_42);
        {
          ATerm q_7 (ATerm t)
          {
            t = not_null(f_42);
            return(t);
          }
          t = at_end_1(t, q_7);
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
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_42 = NULL;
  k_42 = t;
  t = SSL_explode_string(not_null(k_42));
  return(t);
}
ATerm _2 (ATerm t, ATerm d_51 (ATerm), ATerm e_51 (ATerm))
{
  ATerm t_42 = NULL,w_42 = NULL,x_42 = NULL;
  t_42 = t;
  s_42 :
  if(match_cons(t_42, sym__2))
    {
      w_42 = ATgetArgument(t_42, 0);
      x_42 = ATgetArgument(t_42, 1);
      {
        ATerm d_43 = NULL,f_43 = NULL;
        ATerm e_43 = NULL;
        t = SSLgetAnnotations(not_null(t_42));
        {
          e_43 = t;
          if(((d_43 != NULL) && (d_43 != e_43)))
            _fail(e_43);
          else
            d_43 = e_43;
        }
        {
          t = not_null(w_42);
          {
            ATerm j_43 = NULL;
            t = d_51(t);
            {
              f_43 = t;
              {
                t = not_null(x_42);
                {
                  ATerm l_43 = NULL;
                  t = e_51(t);
                  {
                    j_43 = t;
                    {
                      ATerm m_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_43), not_null(j_43)), not_null(d_43));
                      {
                        m_43 = t;
                        if(((l_43 != NULL) && (l_43 != m_43)))
                          _fail(m_43);
                        else
                          l_43 = m_43;
                      }
                      t = not_null(l_43);
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
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  t_43 :
  if(match_cons(u_43, sym__2))
    {
      v_43 = ATgetArgument(u_43, 0);
      w_43 = ATgetArgument(u_43, 1);
      {
        ATerm w_27;
        w_27 = t;
        t = SSL_printnl(not_null(v_43), not_null(w_43));
        t = w_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_86 (ATerm))
{
  ATerm a_28;
  a_28 = t;
  {
    ATerm e_44 = NULL,h_44 = NULL;
    ATerm e_28;
    e_28 = t;
    {
      ATerm f_44 = NULL;
      t = z_86(t);
      {
        f_44 = t;
        if(((e_44 != NULL) && (e_44 != f_44)))
          _fail(f_44);
        else
          e_44 = f_44;
      }
    }
    t = e_28;
    {
      ATerm i_44 = NULL;
      i_44 = t;
      if(((h_44 != NULL) && (h_44 != i_44)))
        _fail(i_44);
      else
        h_44 = i_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_44)), not_null(e_44)));
        t = printnl_0(t);
      }
    }
  }
  t = a_28;
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm l_44 (ATerm t)
  {
    ATerm f_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = f_28;
        t = Cons_2(t, x_64, l_44);
      }
    return(t);
  }
  t = l_44(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_44 = NULL;
  n_44 = t;
  t = SSL_is_string(not_null(n_44));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = i_28;
      {
        ATerm m_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_7 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_7);
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = m_28;
            {
              ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
              w_44 = t;
              v_44 :
              if(match_cons(w_44, sym_Path_1))
                {
                  x_44 = ATgetArgument(w_44, 0);
                  t = not_null(x_44);
                }
              else
                {
                  if(match_cons(w_44, sym_Var_1))
                    {
                      x_44 = ATgetArgument(w_44, 0);
                      {
                        t = not_null(x_44);
                        {
                          ATerm w_28 = t;
                          int y_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(y_28);
                            }
                          else
                            {
                              t = w_28;
                              {
                                ATerm s_7 (ATerm t)
                                {
                                  t = term_z_28;
                                  return(t);
                                }
                                t = debug_1(t, s_7);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_44, sym_Prefix_2))
                        {
                          x_44 = ATgetArgument(w_44, 0);
                          y_44 = ATgetArgument(w_44, 1);
                          {
                            ATerm d_45 = NULL,f_45 = NULL;
                            ATerm f_29;
                            f_29 = t;
                            {
                              ATerm e_45 = NULL;
                              t = not_null(x_44);
                              {
                                t = eval_config_0(t);
                                {
                                  e_45 = t;
                                  if(((d_45 != NULL) && (d_45 != e_45)))
                                    _fail(e_45);
                                  else
                                    d_45 = e_45;
                                }
                              }
                            }
                            t = f_29;
                            {
                              ATerm g_45 = NULL;
                              t = not_null(y_44);
                              {
                                t = eval_config_0(t);
                                {
                                  g_45 = t;
                                  if(((f_45 != NULL) && (f_45 != g_45)))
                                    _fail(g_45);
                                  else
                                    f_45 = g_45;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_45), not_null(f_45));
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
    t = (ATerm) ATmakeAppl(sym__2, term_o_18, not_null(o_45));
    {
      t = table_get_0(t);
      {
        ATerm u_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_29;
            g_29 = t;
            {
              ATerm q_45 = NULL;
              ATerm r_45 = NULL;
              r_45 = t;
              if(((q_45 != NULL) && (q_45 != r_45)))
                _fail(r_45);
              else
                q_45 = r_45;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_18, not_null(o_45), not_null(q_45));
                t = table_put_0(t);
              }
            }
            t = g_29;
          }
          return(t);
        }
        t = try_1(t, u_7);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_63(t);
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
  w_45 = t;
  v_45 :
  if(match_cons(w_45, sym__2))
    {
      x_45 = ATgetArgument(w_45, 0);
      y_45 = ATgetArgument(w_45, 1);
      t = SSL_table_get(not_null(x_45), not_null(y_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym__3))
    {
      g_46 = ATgetArgument(f_46, 0);
      h_46 = ATgetArgument(f_46, 1);
      i_46 = ATgetArgument(f_46, 2);
      {
        ATerm l_29;
        l_29 = t;
        {
          ATerm m_46 = NULL;
          ATerm n_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_46), not_null(h_46));
          {
            ATerm m_29 = t;
            int r_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(r_29);
              }
            else
              {
                t = m_29;
                t = (ATerm) ATempty;
              }
            {
              n_46 = t;
              if(((m_46 != NULL) && (m_46 != n_46)))
                _fail(n_46);
              else
                m_46 = n_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_46), not_null(h_46), (ATerm) ATinsert(CheckATermList(not_null(m_46)), not_null(i_46)));
            t = table_put_0(t);
          }
        }
        t = l_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm r_46 = NULL;
  ATerm s_46 = NULL;
  t = term_x_8;
  {
    t = i_78(t);
    {
      s_46 = t;
      if(((r_46 != NULL) && (r_46 != s_46)))
        _fail(s_46);
      else
        r_46 = s_46;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_26, term_l_26, not_null(r_46));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
  y_46 = t;
  x_46 :
  if(match_string(y_46, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(y_46) == AT_LIST) && !(ATisEmpty(y_46))))
        {
          z_46 = ATgetFirst((ATermList) y_46);
          a_47 = (ATerm) ATgetNext((ATermList) y_46);
          {
            ATerm d_47 = NULL;
            ATerm s_29;
            s_29 = t;
            {
              t = not_null(z_46);
              t = a_0(t);
            }
            t = s_29;
            {
              ATerm e_47 = NULL;
              t = term_x_8;
              {
                t = d_0(t);
                {
                  e_47 = t;
                  if(((d_47 != NULL) && (d_47 != e_47)))
                    _fail(e_47);
                  else
                    d_47 = e_47;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_47)), not_null(d_47));
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
  ATerm x_7 (ATerm t)
  {
    ATerm j_47 = NULL;
    j_47 = t;
    i_47 :
    if(!(match_string(j_47, "--help")))
      {
        if(!(match_string(j_47, "-h")))
          {
            if(!(match_string(j_47, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_7 (ATerm t)
  {
    t = term_w_29;
    {
      t = set_config_0(t);
      t = term_x_29;
    }
    return(t);
  }
  ATerm z_7 (ATerm t)
  {
    t = term_z_29;
    return(t);
  }
  t = Option_3(t, x_7, y_7, z_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  l_47 :
  if(((ATgetType(m_47) == AT_LIST) && !(ATisEmpty(m_47))))
    {
      n_47 = ATgetFirst((ATermList) m_47);
      o_47 = (ATerm) ATgetNext((ATermList) m_47);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_47)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_47)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_52 (ATerm), ATerm n_52 (ATerm))
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  y_47 :
  if(((ATgetType(z_47) == AT_LIST) && !(ATisEmpty(z_47))))
    {
      a_48 = ATgetFirst((ATermList) z_47);
      b_48 = (ATerm) ATgetNext((ATermList) z_47);
      {
        ATerm f_48 = NULL,h_48 = NULL;
        ATerm g_48 = NULL;
        t = SSLgetAnnotations(not_null(z_47));
        {
          g_48 = t;
          if(((f_48 != NULL) && (f_48 != g_48)))
            _fail(g_48);
          else
            f_48 = g_48;
        }
        {
          t = not_null(a_48);
          {
            ATerm j_48 = NULL;
            t = m_52(t);
            {
              h_48 = t;
              {
                t = not_null(b_48);
                {
                  ATerm l_48 = NULL;
                  t = n_52(t);
                  {
                    j_48 = t;
                    {
                      ATerm m_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(j_48)), not_null(h_48)), not_null(f_48));
                      {
                        m_48 = t;
                        if(((l_48 != NULL) && (l_48 != m_48)))
                          _fail(m_48);
                        else
                          l_48 = m_48;
                      }
                      t = not_null(l_48);
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
  ATerm w_48 = NULL;
  w_48 = t;
  v_48 :
  if(((ATgetType(w_48) == AT_LIST) && ATisEmpty(w_48)))
    {
      {
        ATerm y_48 = NULL,a_49 = NULL;
        ATerm a_30;
        a_30 = t;
        {
          ATerm z_48 = NULL;
          t = SSLgetAnnotations(not_null(w_48));
          {
            z_48 = t;
            if(((y_48 != NULL) && (y_48 != z_48)))
              _fail(z_48);
            else
              y_48 = z_48;
          }
        }
        t = a_30;
        {
          ATerm b_49 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_48));
          {
            b_49 = t;
            if(((a_49 != NULL) && (a_49 != b_49)))
              _fail(b_49);
            else
              a_49 = b_49;
          }
          t = not_null(a_49);
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
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
  h_49 = t;
  g_49 :
  if(match_cons(h_49, sym__2))
    {
      i_49 = ATgetArgument(h_49, 0);
      j_49 = ATgetArgument(h_49, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_18, not_null(i_49), not_null(j_49));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_78 (ATerm))
{
  ATerm b_30;
  b_30 = t;
  {
    ATerm b_8 (ATerm t)
    {
      t = term_e_30;
      t = g_78(t);
      return(t);
    }
    t = try_1(t, b_8);
  }
  t = b_30;
  {
    ATerm c_8 (ATerm t)
    {
      ATerm r_49 = NULL;
      ATerm f_30;
      f_30 = t;
      {
        ATerm p_49 = NULL;
        ATerm q_49 = NULL;
        q_49 = t;
        if(((p_49 != NULL) && (p_49 != q_49)))
          _fail(q_49);
        else
          p_49 = q_49;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_25, not_null(p_49));
          t = set_config_0(t);
        }
      }
      t = f_30;
      {
        ATerm s_49 = NULL;
        s_49 = t;
        if(((r_49 != NULL) && (r_49 != s_49)))
          _fail(s_49);
        else
          r_49 = s_49;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_49));
      }
      return(t);
    }
    ATerm d_8 (ATerm t)
    {
      ATerm g_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_30 = t;
          int n_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(n_30);
            }
          else
            {
              t = j_30;
              {
                t = g_78(t);
                t = Cons_2(t, _id, d_8);
              }
            }
          ;
          LocalPopChoice(i_30);
        }
      else
        {
          t = g_30;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_8, d_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,g_50 = NULL;
  ATerm o_30;
  o_30 = t;
  {
    ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL,n_50 = NULL;
    h_50 = t;
    b_50 :
    if(match_cons(h_50, sym__3))
      {
        i_50 = ATgetArgument(h_50, 0);
        j_50 = ATgetArgument(h_50, 1);
        n_50 = ATgetArgument(h_50, 2);
        {
          if(((c_50 != NULL) && (c_50 != i_50)))
            _fail(i_50);
          else
            c_50 = i_50;
          {
            if(((d_50 != NULL) && (d_50 != j_50)))
              _fail(j_50);
            else
              d_50 = j_50;
            {
              if(((g_50 != NULL) && (g_50 != n_50)))
                _fail(n_50);
              else
                g_50 = n_50;
              t = SSL_table_put(not_null(c_50), not_null(d_50), not_null(g_50));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm w_50 = NULL;
  ATerm r_30;
  r_30 = t;
  {
    t = term_s_30;
    t = table_put_0(t);
  }
  t = r_30;
  {
    ATerm i_8 (ATerm t)
    {
      ATerm t_30 = t;
      int u_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_78(t);
          ;
          LocalPopChoice(u_30);
        }
      else
        {
          t = t_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_8);
    {
      ATerm j_8 (ATerm t)
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_31;
            c_31 = t;
            {
              ATerm d_31 = t;
              int e_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_29;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(e_31);
                }
              else
                {
                  t = d_31;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = c_31;
            {
              t = system_usage_0(t);
              {
                t = term_g_22;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            {
              ATerm k_8 (ATerm t)
              {
                ATerm l_8 (ATerm t)
                {
                  ATerm x_50 = NULL;
                  x_50 = t;
                  if(((w_50 != NULL) && (w_50 != x_50)))
                    _fail(x_50);
                  else
                    w_50 = x_50;
                  return(t);
                }
                t = Undefined_1(t, l_8);
                return(t);
              }
              t = option_defined_1(t, k_8);
              {
                ATerm n_8 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_50)), term_j_31);
                  return(t);
                }
                t = say_1(t, n_8);
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_11;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_8);
      {
        ATerm k_31;
        k_31 = t;
        {
          t = term_k_26;
          t = table_destroy_0(t);
        }
        t = k_31;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm))
{
  t = parse_options_1(t, c_76);
  {
    t = store_options_0(t);
    {
      t = e_76(t);
      {
        ATerm l_31 = t;
        int m_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_76);
            ;
            LocalPopChoice(m_31);
          }
        else
          {
            t = l_31;
            {
              ATerm n_31 = t;
              int p_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_76(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(p_31);
                }
              else
                {
                  t = n_31;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm g_76 (ATerm), ATerm h_76 (ATerm))
{
  t = option_wrap_4(t, g_76, default_usage_0, _id, h_76);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm o_74 (ATerm), ATerm p_74 (ATerm))
{
  ATerm o_8 (ATerm t)
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_74(t);
        ;
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    t = xtc_io_1(t, p_74);
    return(t);
  }
  t = option_wrap_2(t, o_8, p_8);
  return(t);
}
ATerm sdf2sdf_0 (ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = do_pack_sdf_0(t);
        LocalPopChoice(w_31);
        t = xtc_pack_sdf_1(t, sdf_includes_0);
      }
    else
      {
        t = v_31;
        t = xtc_parse_sdf_0(t);
      }
    {
      t = execute_specified_tools_0(t);
      t = xtc_pp_sdf_0(t);
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, sdf2sdf_options_0, q_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sdf2sdf_0(t);
  return(t);
}
