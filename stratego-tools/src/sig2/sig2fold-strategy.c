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
Symbol sym_Module_0;
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
  sym_Module_0 = ATmakeSymbol("Module", 0, ATfalse);
  ATprotectSymbol(sym_Module_0);
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
ATerm term_b_29;
ATerm term_n_28;
ATerm term_a_28;
ATerm term_i_27;
ATerm term_d_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_25;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_q_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_e_19;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_m_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_h_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_t_9;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_q_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
void init_constant_terms (void)
{
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_y_8, term_h_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_y_8, term_v_10);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("astratego2tg", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Module_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast          Input is Stratego AST.", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_v_15);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod          Input is Stratego module (.str, .cr, .r or .rtree) (default).", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_g_13);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_v_13);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_a_8, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_v_13);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_v_13);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym__2, term_x_23, term_y_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_t_26, term_v_13);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__3, term_x_23, term_y_23, (ATerm) ATempty);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("tg2fold-strategy", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm w_74 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm ast2abox_0 (ATerm);
ATerm stratego_ensugar_0 (ATerm);
ATerm pp_astratego_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm e_75 (ATerm), ATerm f_75 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm g_59 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm o_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm m_72 (ATerm));
ATerm repeat_1 (ATerm, ATerm w_77 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm n_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm p_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm w_70 (ATerm), ATerm x_70 (ATerm));
ATerm union_1 (ATerm, ATerm s_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm y_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm v_74 (ATerm));
ATerm assert_1 (ATerm, ATerm r_75 (ATerm));
ATerm obsolete_1 (ATerm, ATerm f_76 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm x_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm x_74 (ATerm), ATerm y_74 (ATerm));
ATerm astratego2tg_0 (ATerm);
ATerm pass_includes_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm str2astratego_0 (ATerm);
ATerm pre_process_helper_0 (ATerm);
ATerm get_input_type_0 (ATerm);
ATerm pre_process_input_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm include_option_0 (ATerm);
ATerm input_type_option_0 (ATerm);
ATerm sig2_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm o_75 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm s_63 (ATerm), ATerm t_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm n_75 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm h_74 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm i_74 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm j_71 (ATerm), ATerm k_71 (ATerm));
ATerm crush_2 (ATerm, ATerm h_70 (ATerm), ATerm i_70 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_81 (ATerm));
ATerm Program_1 (ATerm, ATerm w_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm z_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm x_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_80 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm a_51 (ATerm), ATerm b_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm y_75 (ATerm));
ATerm map_1 (ATerm, ATerm v_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_52 (ATerm), ATerm k_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_81 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm i_79 (ATerm), ATerm j_79 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm));
ATerm str_tg_str_wrap_1 (ATerm, ATerm e_58 (ATerm));
ATerm io_sig2fold_strategy_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, w_74, b_0);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = term_q_7;
    return(t);
  }
  t = xtc_transform_1(t, f_0);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = term_r_7;
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    ATerm c_0 = NULL;
    ATerm e_0 = NULL;
    t = term_s_7;
    {
      t = xtc_find_0(t);
      {
        e_0 = t;
        if(((c_0 != NULL) && (c_0 != e_0)))
          _fail(e_0);
        else
          c_0 = e_0;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_0)), term_x_7);
    return(t);
  }
  t = xtc_transform_2(t, p_0, q_0);
  return(t);
}
ATerm stratego_ensugar_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = term_y_7;
    return(t);
  }
  t = xtc_transform_2(t, r_0, pass_verbose_0);
  return(t);
}
ATerm pp_astratego_0 (ATerm t)
{
  t = stratego_ensugar_0(t);
  {
    t = ast2abox_0(t);
    t = abox2text_0(t);
  }
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm c_1 = NULL;
  ATerm d_1 = NULL,i_1 = NULL;
  ATerm e_1 = NULL;
  t = term_a_8;
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        t = term_h_8;
      }
    {
      e_1 = t;
      if(((d_1 != NULL) && (d_1 != e_1)))
        _fail(e_1);
      else
        d_1 = e_1;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_1), term_h_8);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          i_1 = t;
          if(((c_1 != NULL) && (c_1 != i_1)))
            _fail(i_1);
          else
            c_1 = i_1;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_1)), term_a_8);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm u_2 = NULL,y_2 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym_stdin_0))
    {
      ATerm z_2 = NULL;
      ATerm a_3 = NULL;
      t = term_i_8;
      {
        t = ReadFromFile_0(t);
        {
          a_3 = t;
          if(((z_2 != NULL) && (z_2 != a_3)))
            _fail(a_3);
          else
            z_2 = a_3;
        }
      }
      t = not_null(z_2);
    }
  else
    {
      if(match_cons(u_2, sym_FILE_1))
        {
          y_2 = ATgetArgument(u_2, 0);
          {
            ATerm c_3 = NULL;
            ATerm d_3 = NULL;
            t = not_null(y_2);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  d_3 = t;
                  if(((c_3 != NULL) && (c_3 != d_3)))
                    _fail(d_3);
                  else
                    c_3 = d_3;
                }
              }
            }
            t = not_null(c_3);
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
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  k_3 = t;
  j_3 :
  if(match_cons(k_3, sym__2))
    {
      l_3 = ATgetArgument(k_3, 0);
      m_3 = ATgetArgument(k_3, 1);
      t = SSL_WriteToBinaryFile(not_null(l_3), not_null(m_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm s_3 = NULL;
  ATerm u_3 = NULL;
  s_3 = t;
  {
    ATerm v_3 = NULL;
    t = xtc_new_file_0(t);
    {
      v_3 = t;
      {
        if(((u_3 != NULL) && (u_3 != v_3)))
          _fail(v_3);
        else
          u_3 = v_3;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), not_null(s_3));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(u_3);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_3));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm e_75 (ATerm), ATerm f_75 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, e_75, f_75);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm z_3 = NULL;
  z_3 = t;
  t = SSL_close_file(not_null(z_3));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym__2))
    {
      f_4 = ATgetArgument(e_4, 0);
      g_4 = ATgetArgument(e_4, 1);
      t = SSL_execvp(not_null(f_4), not_null(g_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm l_4 = NULL;
  l_4 = t;
  t = SSL_waitpid(not_null(l_4));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm v_4 = NULL;
  ATerm x_4 = NULL;
  v_4 = t;
  {
    t = fork_0(t);
    {
      x_4 = t;
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_4 = NULL;
            z_4 = t;
            r_4 :
            if(match_int(z_4, 0))
              {
                t = not_null(v_4);
                t = g_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            {
              ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
              t = not_null(x_4);
              {
                t = waitpid_0(t);
                {
                  a_5 = t;
                  t_4 :
                  if(match_cons(a_5, sym_WaitStatus_3))
                    {
                      b_5 = ATgetArgument(a_5, 0);
                      c_5 = ATgetArgument(a_5, 1);
                      d_5 = ATgetArgument(a_5, 2);
                      u_4 :
                      if(match_int(b_5, 0))
                        {
                          t = not_null(v_4);
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
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL;
  k_5 = t;
  j_5 :
  if(match_cons(k_5, sym__2))
    {
      l_5 = ATgetArgument(k_5, 0);
      m_5 = ATgetArgument(k_5, 1);
      {
        ATerm s_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), not_null(m_5));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, s_0);
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
  ATerm r_5 = NULL;
  r_5 = t;
  t = SSL_table_keys(not_null(r_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm x_5 = NULL;
  x_5 = t;
  {
    t = table_keys_0(t);
    {
      ATerm t_0 (ATerm t)
      {
        ATerm z_5 = NULL;
        ATerm b_6 = NULL;
        z_5 = t;
        {
          ATerm c_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_5), not_null(z_5));
          {
            t = table_get_0(t);
            {
              c_6 = t;
              if(((b_6 != NULL) && (b_6 != c_6)))
                _fail(c_6);
              else
                b_6 = c_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), not_null(b_6));
        }
        return(t);
      }
      t = map_1(t, t_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm p_8;
    p_8 = t;
    {
      ATerm h_6 = NULL;
      ATerm i_6 = NULL;
      t = term_a_8;
      {
        t = get_config_0(t);
        {
          i_6 = t;
          if(((h_6 != NULL) && (h_6 != i_6)))
            _fail(i_6);
          else
            h_6 = i_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_6), term_q_8);
        t = geq_0(t);
      }
    }
    t = p_8;
    t = o_59(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm v_8;
  v_8 = t;
  {
    ATerm l_6 = NULL;
    ATerm m_6 = NULL;
    m_6 = t;
    if(((l_6 != NULL) && (l_6 != m_6)))
      _fail(m_6);
    else
      l_6 = m_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_8, not_null(l_6));
      t = printnl_0(t);
    }
  }
  t = v_8;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm s_6 = NULL;
  ATerm u_6 = NULL,v_6 = NULL;
  s_6 = t;
  {
    ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_6)));
    {
      t = table_get_0(t);
      {
        w_6 = t;
        q_6 :
        if(((ATgetType(w_6) == AT_LIST) && !(ATisEmpty(w_6))))
          {
            x_6 = ATgetFirst((ATermList) w_6);
            a_7 = (ATerm) ATgetNext((ATermList) w_6);
            r_6 :
            if(match_cons(x_6, sym__2))
              {
                y_6 = ATgetArgument(x_6, 0);
                z_6 = ATgetArgument(x_6, 1);
                {
                  if(((u_6 != NULL) && (u_6 != y_6)))
                    _fail(y_6);
                  else
                    u_6 = y_6;
                  if(((v_6 != NULL) && (v_6 != z_6)))
                    _fail(z_6);
                  else
                    v_6 = z_6;
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
    t = not_null(v_6);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
  h_7 = t;
  g_7 :
  if(match_cons(h_7, sym__2))
    {
      i_7 = ATgetArgument(h_7, 0);
      j_7 = ATgetArgument(h_7, 1);
      {
        ATerm m_7 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_7)));
        {
          t = table_get_0(t);
          {
            ATerm v_0 (ATerm t)
            {
              ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
              n_7 = t;
              f_7 :
              if(match_cons(n_7, sym__2))
                {
                  o_7 = ATgetArgument(n_7, 0);
                  p_7 = ATgetArgument(n_7, 1);
                  {
                    if(((j_7 != NULL) && (j_7 != o_7)))
                      _fail(o_7);
                    else
                      j_7 = o_7;
                    if(((m_7 != NULL) && (m_7 != p_7)))
                      _fail(p_7);
                    else
                      m_7 = p_7;
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
        t = not_null(m_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm b_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              t = filter_1(t, m_72);
              return(t);
            }
            t = Cons_2(t, m_72, w_0);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = b_9;
            {
              ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
              u_7 = t;
              t_7 :
              if(((ATgetType(u_7) == AT_LIST) && !(ATisEmpty(u_7))))
                {
                  v_7 = ATgetFirst((ATermList) u_7);
                  w_7 = (ATerm) ATgetNext((ATermList) u_7);
                  {
                    t = not_null(w_7);
                    t = filter_1(t, m_72);
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
ATerm repeat_1 (ATerm t, ATerm w_77 (ATerm))
{
  ATerm z_7 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      t = w_77(t);
      t = z_7(t);
      return(t);
    }
    t = try_1(t, x_0);
    return(t);
  }
  t = z_7(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    t = term_i_9;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm k_9 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_9;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, y_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm z_0 (ATerm t)
  {
    ATerm l_9;
    l_9 = t;
    {
      ATerm b_8 = NULL;
      ATerm c_8 = NULL;
      t = term_a_8;
      {
        t = get_config_0(t);
        {
          c_8 = t;
          if(((b_8 != NULL) && (b_8 != c_8)))
            _fail(c_8);
          else
            b_8 = c_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_8), term_m_9);
        t = geq_0(t);
      }
    }
    t = l_9;
    t = n_59(t);
    return(t);
  }
  t = try_1(t, z_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm s_9;
    s_9 = t;
    {
      ATerm f_8 = NULL;
      ATerm g_8 = NULL;
      t = term_a_8;
      {
        t = get_config_0(t);
        {
          g_8 = t;
          if(((f_8 != NULL) && (f_8 != g_8)))
            _fail(g_8);
          else
            f_8 = g_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), term_t_9);
        t = geq_0(t);
      }
    }
    t = s_9;
    t = p_59(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym__2))
    {
      l_8 = ATgetArgument(k_8, 0);
      m_8 = ATgetArgument(k_8, 1);
      if(((l_8 != NULL) && (l_8 != m_8)))
        _fail(m_8);
      else
        l_8 = m_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm w_70 (ATerm), ATerm x_70 (ATerm))
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  r_8 :
  if(((ATgetType(s_8) == AT_LIST) && !(ATisEmpty(s_8))))
    {
      t_8 = ATgetFirst((ATermList) s_8);
      u_8 = (ATerm) ATgetNext((ATermList) s_8);
      {
        t = x_70(t);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm x_8 = NULL;
            x_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_8), not_null(x_8));
              t = w_70(t);
            }
            return(t);
          }
          t = fetch_1(t, b_1);
        }
        t = not_null(u_8);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym__2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      {
        t = not_null(e_9);
        {
          ATerm j_9 (ATerm t)
          {
            ATerm u_9 = t;
            int z_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(f_9);
                ;
                LocalPopChoice(z_9);
              }
            else
              {
                t = u_9;
                {
                  ATerm a_10 = t;
                  int b_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_1 (ATerm t)
                      {
                        t = not_null(f_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_70, f_1);
                      t = j_9(t);
                      ;
                      LocalPopChoice(b_10);
                    }
                  else
                    {
                      t = a_10;
                      t = Cons_2(t, _id, j_9);
                    }
                }
              }
            return(t);
          }
          t = j_9(t);
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
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym__3))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      r_9 = ATgetArgument(o_9, 2);
      {
        ATerm c_10;
        c_10 = t;
        {
          ATerm v_9 = NULL;
          ATerm w_9 = NULL,y_9 = NULL;
          ATerm x_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), not_null(q_9));
          {
            ATerm d_10 = t;
            int j_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(j_10);
              }
            else
              {
                t = d_10;
                t = (ATerm) ATempty;
              }
            {
              x_9 = t;
              if(((w_9 != NULL) && (w_9 != x_9)))
                _fail(x_9);
              else
                w_9 = x_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(r_9));
            {
              t = union_0(t);
              {
                y_9 = t;
                if(((v_9 != NULL) && (v_9 != y_9)))
                  _fail(y_9);
                else
                  v_9 = y_9;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_9), not_null(q_9), not_null(v_9));
            t = set_0(t);
          }
        }
        t = c_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym__2))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      {
        t = not_null(i_10);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
            l_10 = t;
            e_10 :
            if(match_cons(l_10, sym__2))
              {
                m_10 = ATgetArgument(l_10, 0);
                n_10 = ATgetArgument(l_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(h_10), not_null(m_10), not_null(n_10));
                  t = y_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, g_1);
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
  ATerm t_10 = NULL;
  ATerm k_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL;
      u_10 = t;
      {
        if(((t_10 != NULL) && (t_10 != u_10)))
          _fail(u_10);
        else
          t_10 = u_10;
        t = SSL_ReadFromFile(not_null(t_10));
      }
      ;
      LocalPopChoice(o_10);
    }
  else
    {
      t = k_10;
      {
        ATerm h_1 (ATerm t)
        {
          t = term_p_10;
          return(t);
        }
        t = debug_1(t, h_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm y_10 = NULL;
  ATerm a_11 = NULL;
  y_10 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm k_1 (ATerm t)
      {
        t = term_q_10;
        return(t);
      }
      t = debug_1(t, k_1);
      return(t);
    }
    t = if_verbose5_1(t, j_1);
    {
      ATerm r_10 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(y_10)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_10;
        }
      {
        ATerm s_10;
        s_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_8, term_v_10, (ATerm) ATinsert(ATempty, not_null(y_10)));
          t = table_put_0(t);
        }
        t = s_10;
        {
          ATerm l_1 (ATerm t)
          {
            ATerm m_1 (ATerm t)
            {
              t = term_w_10;
              return(t);
            }
            t = debug_1(t, m_1);
            return(t);
          }
          t = if_verbose4_1(t, l_1);
          {
            ATerm x_10 = t;
            int z_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(z_10);
              }
            else
              {
                t = x_10;
                t = (ATerm) ATempty;
              }
            {
              ATerm n_1 (ATerm t)
              {
                ATerm o_1 (ATerm t)
                {
                  t = term_c_11;
                  return(t);
                }
                t = say_1(t, o_1);
                return(t);
              }
              t = if_verbose6_1(t, n_1);
              {
                ATerm b_11 = NULL;
                b_11 = t;
                if(((a_11 != NULL) && (a_11 != b_11)))
                  _fail(b_11);
                else
                  a_11 = b_11;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(a_11));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm p_1 (ATerm t)
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = term_d_11;
                          return(t);
                        }
                        t = say_1(t, q_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, p_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_y_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(y_10)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm s_1 (ATerm t)
                              {
                                t = term_c_11;
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
  ATerm f_11 = NULL;
  f_11 = t;
  t = SSL_getenv(not_null(f_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm e_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_11;
      t = get_config_0(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = e_11;
      {
        ATerm i_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_11;
            t = getenv_0(t);
            ;
            LocalPopChoice(l_11);
          }
        else
          {
            t = i_11;
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
      t = term_n_11;
      return(t);
    }
    t = debug_1(t, u_1);
    return(t);
  }
  t = if_verbose5_1(t, t_1);
  {
    ATerm s_11;
    s_11 = t;
    {
      ATerm t_11 = t;
      int u_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_v_11;
          t = table_get_0(t);
          ;
          LocalPopChoice(u_11);
        }
      else
        {
          t = t_11;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = s_11;
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          t = term_w_11;
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
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          t = term_l_12;
          return(t);
        }
        t = debug_1(t, y_1);
        return(t);
      }
      t = if_verbose5_1(t, x_1);
      {
        t = xtc_load_0(t);
        {
          ATerm m_12 = t;
          int n_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(n_12);
            }
          else
            {
              t = m_12;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm z_1 (ATerm t)
            {
              ATerm a_2 (ATerm t)
              {
                t = term_l_12;
                return(t);
              }
              t = debug_1(t, a_2);
              return(t);
            }
            t = if_verbose5_1(t, z_1);
          }
        }
      }
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm j_11 = NULL;
        ATerm k_11 = NULL;
        k_11 = t;
        if(((j_11 != NULL) && (j_11 != k_11)))
          _fail(k_11);
        else
          j_11 = k_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_12), not_null(j_11)), term_o_12);
          {
            t = error_0(t);
            {
              ATerm b_2 (ATerm t)
              {
                t = term_y_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm c_2 (ATerm t)
                    {
                      t = term_r_12;
                      return(t);
                    }
                    t = debug_1(t, c_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, b_2);
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
ATerm xtc_command_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm o_11 = NULL;
  ATerm a_13;
  a_13 = t;
  {
    ATerm p_11 = NULL;
    t = v_74(t);
    {
      t = xtc_find_warning_0(t);
      {
        p_11 = t;
        if(((o_11 != NULL) && (o_11 != p_11)))
          _fail(p_11);
        else
          o_11 = p_11;
      }
    }
  }
  t = a_13;
  {
    ATerm b_13;
    b_13 = t;
    {
      ATerm q_11 = NULL;
      ATerm r_11 = NULL;
      r_11 = t;
      if(((q_11 != NULL) && (q_11 != r_11)))
        _fail(r_11);
      else
        q_11 = r_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), not_null(q_11));
        t = call_0(t);
      }
    }
    t = b_13;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  y_11 :
  if(match_cons(z_11, sym__2))
    {
      a_12 = ATgetArgument(z_11, 0);
      b_12 = ATgetArgument(z_11, 1);
      {
        ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
        ATerm c_13;
        c_13 = t;
        {
          ATerm h_12 = NULL;
          ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
          t = r_75(t);
          {
            h_12 = t;
            {
              if(((e_12 != NULL) && (e_12 != h_12)))
                _fail(h_12);
              else
                e_12 = h_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_12), not_null(a_12), not_null(b_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm d_13 = t;
                    int e_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_12), term_g_13);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(e_13);
                      }
                    else
                      {
                        t = d_13;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      i_12 = t;
                      x_11 :
                      if(((ATgetType(i_12) == AT_LIST) && !(ATisEmpty(i_12))))
                        {
                          j_12 = ATgetFirst((ATermList) i_12);
                          k_12 = (ATerm) ATgetNext((ATermList) i_12);
                          {
                            if(((f_12 != NULL) && (f_12 != j_12)))
                              _fail(j_12);
                            else
                              f_12 = j_12;
                            {
                              if(((g_12 != NULL) && (g_12 != k_12)))
                                _fail(k_12);
                              else
                                g_12 = k_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(e_12), term_g_13, (ATerm) ATinsert(CheckATermList(not_null(g_12)), (ATerm) ATinsert(CheckATermList(not_null(f_12)), not_null(a_12))));
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
        t = c_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm f_76 (ATerm))
{
  ATerm j_13;
  j_13 = t;
  {
    t = f_76(t);
    {
      ATerm d_2 (ATerm t)
      {
        t = term_k_13;
        return(t);
      }
      t = debug_1(t, d_2);
    }
  }
  t = j_13;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  ATerm l_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
      u_12 = t;
      p_12 :
      if(match_cons(u_12, sym__2))
        {
          v_12 = ATgetArgument(u_12, 0);
          w_12 = ATgetArgument(u_12, 1);
          {
            if(((t_12 != NULL) && (t_12 != v_12)))
              _fail(v_12);
            else
              t_12 = v_12;
            if(((s_12 != NULL) && (s_12 != w_12)))
              _fail(w_12);
            else
              s_12 = w_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_13);
      t = SSL_open_file(not_null(t_12), not_null(s_12));
    }
  else
    {
      t = l_13;
      {
        ATerm x_12 = NULL;
        ATerm y_12 = NULL;
        ATerm e_2 (ATerm t)
        {
          t = term_p_13;
          return(t);
        }
        t = obsolete_1(t, e_2);
        {
          x_12 = t;
          {
            if(((t_12 != NULL) && (t_12 != x_12)))
              _fail(x_12);
            else
              t_12 = x_12;
            {
              ATerm q_13;
              q_13 = t;
              {
                ATerm z_12 = NULL;
                t = term_s_13;
                {
                  z_12 = t;
                  if(((y_12 != NULL) && (y_12 != z_12)))
                    _fail(z_12);
                  else
                    y_12 = z_12;
                }
              }
              t = q_13;
              t = SSL_open_file(not_null(t_12), not_null(y_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm f_13 = NULL;
  ATerm h_13 = NULL;
  f_13 = t;
  {
    ATerm t_13;
    t_13 = t;
    {
      ATerm i_13 = NULL;
      t = term_u_13;
      {
        i_13 = t;
        if(((h_13 != NULL) && (h_13 != i_13)))
          _fail(i_13);
        else
          h_13 = i_13;
      }
    }
    t = t_13;
    {
      t = SSL_open_file(not_null(f_13), not_null(h_13));
      t = SSL_close_file(not_null(f_13));
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
  ATerm m_13 = NULL;
  ATerm n_13 = NULL;
  t = term_v_13;
  {
    t = new_0(t);
    {
      n_13 = t;
      if(((m_13 != NULL) && (m_13 != n_13)))
        _fail(n_13);
      else
        m_13 = n_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_13), term_w_13);
    {
      t = conc_strings_0(t);
      {
        ATerm f_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, f_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm r_13 = NULL;
  t = new_file_0(t);
  {
    r_13 = t;
    {
      ATerm x_13;
      x_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), term_s_13);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), term_v_13);
            {
              ATerm g_2 (ATerm t)
              {
                t = term_y_13;
                return(t);
              }
              t = assert_1(t, g_2);
            }
          }
        }
      }
      t = x_13;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm b_14 = NULL,c_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym_stdin_0))
    {
      ATerm d_14 = NULL;
      ATerm e_14 = NULL;
      ATerm f_14 = NULL;
      t = xtc_new_file_0(t);
      {
        e_14 = t;
        {
          if(((d_14 != NULL) && (d_14 != e_14)))
            _fail(e_14);
          else
            d_14 = e_14;
          {
            ATerm g_14 = NULL;
            t = o_0(t);
            {
              g_14 = t;
              if(((f_14 != NULL) && (f_14 != g_14)))
                _fail(g_14);
              else
                f_14 = g_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_14)), term_z_13));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(d_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_14));
    }
  else
    {
      if(match_cons(b_14, sym_FILE_1))
        {
          c_14 = ATgetArgument(b_14, 0);
          {
            ATerm i_14 = NULL;
            ATerm j_14 = NULL;
            t = not_null(c_14);
            {
              ATerm k_14 = NULL;
              t = xtc_new_file_0(t);
              {
                j_14 = t;
                {
                  if(((i_14 != NULL) && (i_14 != j_14)))
                    _fail(j_14);
                  else
                    i_14 = j_14;
                  {
                    ATerm l_14 = NULL;
                    t = o_0(t);
                    {
                      l_14 = t;
                      if(((k_14 != NULL) && (k_14 != l_14)))
                        _fail(l_14);
                      else
                        k_14 = l_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_14)), term_z_13), not_null(c_14)), term_h_14));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(i_14);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_14));
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
  ATerm w_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym_stdin_0))
    {
      ATerm y_14 = NULL,a_15 = NULL;
      ATerm m_14;
      m_14 = t;
      {
        ATerm z_14 = NULL;
        t = SSLgetAnnotations(not_null(w_14));
        {
          z_14 = t;
          if(((y_14 != NULL) && (y_14 != z_14)))
            _fail(z_14);
          else
            y_14 = z_14;
        }
      }
      t = m_14;
      {
        ATerm b_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(y_14));
        {
          b_15 = t;
          if(((a_15 != NULL) && (a_15 != b_15)))
            _fail(b_15);
          else
            a_15 = b_15;
        }
        t = not_null(a_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm x_52 (ATerm))
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_FILE_1))
    {
      l_15 = ATgetArgument(k_15, 0);
      {
        ATerm o_15 = NULL,q_15 = NULL;
        ATerm p_15 = NULL;
        t = SSLgetAnnotations(not_null(k_15));
        {
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
        }
        {
          t = not_null(l_15);
          {
            ATerm s_15 = NULL;
            t = x_52(t);
            {
              q_15 = t;
              {
                ATerm t_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(q_15)), not_null(o_15));
                {
                  t_15 = t;
                  if(((s_15 != NULL) && (s_15 != t_15)))
                    _fail(t_15);
                  else
                    s_15 = t_15;
                }
                t = not_null(s_15);
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
ATerm xtc_transform_2 (ATerm t, ATerm x_74 (ATerm), ATerm y_74 (ATerm))
{
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_14 = t;
      int q_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(q_14);
        }
      else
        {
          t = p_14;
          t = stdin_0(t);
        }
      LocalPopChoice(o_14);
      t = xtc_transform_file_2(t, x_74, y_74);
    }
  else
    {
      t = n_14;
      t = xtc_transform_term_2(t, x_74, y_74);
    }
  return(t);
}
ATerm astratego2tg_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = term_r_14;
    return(t);
  }
  t = xtc_transform_2(t, h_2, pass_verbose_0);
  return(t);
}
ATerm pass_includes_0 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_14;
      t = get_config_0(t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm z_15 = NULL;
  z_15 = t;
  t = SSL_int_to_string(not_null(z_15));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym__2))
    {
      f_16 = ATgetArgument(e_16, 0);
      g_16 = ATgetArgument(e_16, 1);
      {
        ATerm x_14 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(f_16), not_null(g_16));
            ;
            LocalPopChoice(c_15);
          }
        else
          {
            t = x_14;
            t = SSL_subtr(not_null(f_16), not_null(g_16));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm m_16 = NULL;
  ATerm n_16 = NULL,p_16 = NULL;
  ATerm o_16 = NULL;
  t = term_d_15;
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        t = term_h_8;
      }
    {
      o_16 = t;
      if(((n_16 != NULL) && (n_16 != o_16)))
        _fail(o_16);
      else
        n_16 = o_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), term_h_8);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          p_16 = t;
          if(((m_16 != NULL) && (m_16 != p_16)))
            _fail(p_16);
          else
            m_16 = p_16;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_16)), term_d_15);
  return(t);
}
ATerm str2astratego_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = term_g_15;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm w_16 = NULL;
    ATerm x_16 = NULL,z_16 = NULL,b_17 = NULL,d_17 = NULL;
    ATerm h_15;
    h_15 = t;
    {
      ATerm y_16 = NULL;
      t = term_v_13;
      {
        t = pass_keep_0(t);
        {
          y_16 = t;
          if(((x_16 != NULL) && (x_16 != y_16)))
            _fail(y_16);
          else
            x_16 = y_16;
        }
      }
    }
    t = h_15;
    {
      ATerm i_15;
      i_15 = t;
      {
        ATerm a_17 = NULL;
        t = term_v_13;
        {
          t = pass_verbose_0(t);
          {
            a_17 = t;
            if(((z_16 != NULL) && (z_16 != a_17)))
              _fail(a_17);
            else
              z_16 = a_17;
          }
        }
      }
      t = i_15;
      {
        ATerm c_17 = NULL;
        t = term_v_13;
        {
          t = pass_includes_0(t);
          {
            c_17 = t;
            if(((b_17 != NULL) && (b_17 != c_17)))
              _fail(c_17);
            else
              b_17 = c_17;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_17)), not_null(z_16)), not_null(x_16));
          {
            t = concat_0(t);
            {
              d_17 = t;
              if(((w_16 != NULL) && (w_16 != d_17)))
                _fail(d_17);
              else
                w_16 = d_17;
            }
          }
        }
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(w_16)), term_m_15);
    return(t);
  }
  t = xtc_transform_2(t, i_2, j_2);
  return(t);
}
ATerm pre_process_helper_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
  m_17 = t;
  k_17 :
  if(match_cons(m_17, sym__2))
    {
      n_17 = ATgetArgument(m_17, 0);
      o_17 = ATgetArgument(m_17, 1);
      l_17 :
      if(match_cons(n_17, sym_AST_0))
        {
          t = not_null(o_17);
        }
      else
        {
          if(match_cons(n_17, sym_Module_0))
            {
              t = not_null(o_17);
              t = str2astratego_0(t);
            }
          else
            {
              _fail(t);
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
  ATerm n_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_15;
      t = get_config_0(t);
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = n_15;
      t = term_v_15;
    }
  return(t);
}
ATerm pre_process_input_0 (ATerm t)
{
  ATerm v_17 = NULL,x_17 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    ATerm w_17 = NULL;
    w_17 = t;
    if(((v_17 != NULL) && (v_17 != w_17)))
      _fail(w_17);
    else
      v_17 = w_17;
  }
  t = w_15;
  {
    ATerm y_17 = NULL;
    t = term_v_13;
    {
      t = get_input_type_0(t);
      {
        y_17 = t;
        if(((x_17 != NULL) && (x_17 != y_17)))
          _fail(y_17);
        else
          x_17 = y_17;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), not_null(v_17));
      t = pre_process_helper_0(t);
    }
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym__2))
    {
      g_18 = ATgetArgument(f_18, 0);
      h_18 = ATgetArgument(f_18, 1);
      {
        ATerm k_18 = NULL;
        ATerm l_18 = NULL,n_18 = NULL;
        ATerm m_18 = NULL;
        t = not_null(g_18);
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              t = (ATerm) ATempty;
            }
          {
            m_18 = t;
            if(((l_18 != NULL) && (l_18 != m_18)))
              _fail(m_18);
            else
              l_18 = m_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(l_18));
          {
            t = conc_0(t);
            {
              n_18 = t;
              if(((k_18 != NULL) && (k_18 != n_18)))
                _fail(n_18);
              else
                k_18 = n_18;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_16, not_null(g_18), not_null(k_18));
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
ATerm include_option_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm t_18 = NULL;
    t_18 = t;
    r_18 :
    if(!(match_string(t_18, "-I")))
      {
        if(!(match_string(t_18, "--Include")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm u_18 = NULL;
    ATerm v_18 = NULL;
    v_18 = t;
    if(((u_18 != NULL) && (u_18 != v_18)))
      _fail(v_18);
    else
      u_18 = v_18;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_18)), term_u_14));
      t = extend_config_0(t);
    }
    t = term_v_13;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_b_16;
    return(t);
  }
  t = ArgOption_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm input_type_option_0 (ATerm t)
{
  ATerm c_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm c_19 = NULL;
        c_19 = t;
        x_18 :
        if(!(match_string(c_19, "--ast")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        ATerm i_16;
        i_16 = t;
        {
          t = term_k_16;
          t = set_config_0(t);
        }
        t = i_16;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = term_l_16;
        return(t);
      }
      t = Option_3(t, n_2, o_2, p_2);
      ;
      LocalPopChoice(h_16);
    }
  else
    {
      t = c_16;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm d_19 = NULL;
          d_19 = t;
          y_18 :
          if(!(match_string(d_19, "--mod")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          ATerm q_16;
          q_16 = t;
          {
            t = term_s_16;
            t = set_config_0(t);
          }
          t = q_16;
          return(t);
        }
        ATerm s_2 (ATerm t)
        {
          t = term_t_16;
          return(t);
        }
        t = Option_3(t, q_2, r_2, s_2);
      }
    }
  return(t);
}
ATerm sig2_options_0 (ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_type_option_0(t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      t = include_option_0(t);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym__2))
    {
      h_19 = ATgetArgument(g_19, 0);
      i_19 = ATgetArgument(g_19, 1);
      t = SSL_copy(not_null(h_19), not_null(i_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm q_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym_stderr_0))
    {
      ATerm s_19 = NULL,u_19 = NULL;
      ATerm e_17;
      e_17 = t;
      {
        ATerm t_19 = NULL;
        t = SSLgetAnnotations(not_null(q_19));
        {
          t_19 = t;
          if(((s_19 != NULL) && (s_19 != t_19)))
            _fail(t_19);
          else
            s_19 = t_19;
        }
      }
      t = e_17;
      {
        ATerm w_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(s_19));
        {
          w_19 = t;
          if(((u_19 != NULL) && (u_19 != w_19)))
            _fail(w_19);
          else
            u_19 = w_19;
        }
        t = not_null(u_19);
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
  ATerm j_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym_stdout_0))
    {
      ATerm l_20 = NULL,p_20 = NULL;
      ATerm f_17;
      f_17 = t;
      {
        ATerm o_20 = NULL;
        t = SSLgetAnnotations(not_null(j_20));
        {
          o_20 = t;
          if(((l_20 != NULL) && (l_20 != o_20)))
            _fail(o_20);
          else
            l_20 = o_20;
        }
      }
      t = f_17;
      {
        ATerm q_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(l_20));
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
        t = not_null(p_20);
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
  ATerm h_21 = NULL,i_21 = NULL;
  h_21 = t;
  g_21 :
  if(match_cons(h_21, sym_FILE_1))
    {
      i_21 = ATgetArgument(h_21, 0);
      {
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_21 = NULL;
            ATerm l_21 = NULL;
            t = m_0(t);
            {
              l_21 = t;
              {
                if(((k_21 != NULL) && (k_21 != l_21)))
                  _fail(l_21);
                else
                  k_21 = l_21;
                {
                  ATerm i_17 = t;
                  int j_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(j_17);
                    }
                  else
                    {
                      t = i_17;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), not_null(k_21));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_21));
            ;
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            {
              ATerm p_17 = t;
              int q_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_21 = NULL;
                  ATerm o_21 = NULL;
                  t = m_0(t);
                  {
                    o_21 = t;
                    {
                      if(((n_21 != NULL) && (n_21 != o_21)))
                        _fail(o_21);
                      else
                        n_21 = o_21;
                      {
                        ATerm r_17 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm s_17 = t;
                            int t_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(t_17);
                              }
                            else
                              {
                                t = s_17;
                                {
                                  ATerm u_17 = t;
                                  int z_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(z_17);
                                    }
                                  else
                                    {
                                      t = u_17;
                                      {
                                        ATerm p_21 = NULL;
                                        p_21 = t;
                                        if(((i_21 != NULL) && (i_21 != p_21)))
                                          _fail(p_21);
                                        else
                                          i_21 = p_21;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = r_17;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), not_null(n_21));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_21));
                  ;
                  LocalPopChoice(q_17);
                }
              else
                {
                  t = p_17;
                  {
                    ATerm w_21 = NULL;
                    t = m_0(t);
                    {
                      w_21 = t;
                      if(((i_21 != NULL) && (i_21 != w_21)))
                        _fail(w_21);
                      else
                        i_21 = w_21;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_21));
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
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
  t_22 = t;
  r_22 :
  if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
    {
      u_22 = ATgetFirst((ATermList) t_22);
      v_22 = (ATerm) ATgetNext((ATermList) t_22);
      t = not_null(v_22);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym__2))
    {
      c_23 = ATgetArgument(b_23, 0);
      d_23 = ATgetArgument(b_23, 1);
      {
        ATerm a_18;
        a_18 = t;
        {
          ATerm g_23 = NULL;
          ATerm h_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_23), not_null(d_23));
          {
            ATerm b_18 = t;
            int c_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(c_18);
              }
            else
              {
                t = b_18;
                t = (ATerm) ATempty;
              }
            {
              h_23 = t;
              if(((g_23 != NULL) && (g_23 != h_23)))
                _fail(h_23);
              else
                g_23 = h_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_23), not_null(d_23), not_null(g_23));
            t = table_put_0(t);
          }
        }
        t = a_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  ATerm d_18;
  d_18 = t;
  {
    ATerm r_23 = NULL;
    ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
    t = o_75(t);
    {
      r_23 = t;
      {
        if(((q_23 != NULL) && (q_23 != r_23)))
          _fail(r_23);
        else
          q_23 = r_23;
        {
          ATerm i_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), term_g_13);
              t = table_get_0(t);
              ;
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            s_23 = t;
            n_23 :
            if(((ATgetType(s_23) == AT_LIST) && !(ATisEmpty(s_23))))
              {
                t_23 = ATgetFirst((ATermList) s_23);
                u_23 = (ATerm) ATgetNext((ATermList) s_23);
                {
                  if(((p_23 != NULL) && (p_23 != t_23)))
                    _fail(t_23);
                  else
                    p_23 = t_23;
                  {
                    if(((o_23 != NULL) && (o_23 != u_23)))
                      _fail(u_23);
                    else
                      o_23 = u_23;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(q_23), term_g_13, not_null(o_23));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(p_23);
                          {
                            ATerm v_2 (ATerm t)
                            {
                              ATerm v_23 = NULL;
                              v_23 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(v_23));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, v_2);
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
  ATerm b_24 = NULL;
  b_24 = t;
  t = SSL_remove(not_null(b_24));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm s_63 (ATerm), ATerm t_63 (ATerm))
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_63(t);
      t = t_63(t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        t = t_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm l_24 = NULL;
  ATerm q_18;
  q_18 = t;
  {
    ATerm m_24 = NULL;
    ATerm n_24 = NULL;
    t = n_75(t);
    {
      m_24 = t;
      {
        if(((l_24 != NULL) && (l_24 != m_24)))
          _fail(m_24);
        else
          l_24 = m_24;
        {
          ATerm o_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), term_g_13);
          {
            ATerm s_18 = t;
            int w_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(w_18);
              }
            else
              {
                t = s_18;
                t = (ATerm) ATempty;
              }
            {
              o_24 = t;
              if(((n_24 != NULL) && (n_24 != o_24)))
                _fail(o_24);
              else
                n_24 = o_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_24), term_g_13, (ATerm) ATinsert(CheckATermList(not_null(n_24)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = q_18;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm t_24 = NULL,u_24 = NULL;
  ATerm w_2 (ATerm t)
  {
    t = term_y_13;
    return(t);
  }
  t = begin_scope_1(t, w_2);
  {
    ATerm x_2 (ATerm t)
    {
      ATerm z_18;
      z_18 = t;
      {
        ATerm y_24 = NULL,a_25 = NULL,b_25 = NULL;
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_19;
            t = table_get_0(t);
            ;
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          y_24 = t;
          s_24 :
          if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
            {
              a_25 = ATgetFirst((ATermList) y_24);
              b_25 = (ATerm) ATgetNext((ATermList) y_24);
              {
                if(((u_24 != NULL) && (u_24 != a_25)))
                  _fail(a_25);
                else
                  u_24 = a_25;
                {
                  if(((t_24 != NULL) && (t_24 != b_25)))
                    _fail(b_25);
                  else
                    t_24 = b_25;
                  {
                    t = not_null(u_24);
                    {
                      ATerm b_3 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, b_3);
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
      t = z_18;
      {
        ATerm e_3 (ATerm t)
        {
          t = term_y_13;
          return(t);
        }
        t = end_scope_1(t, e_3);
      }
      return(t);
    }
    t = restore_always_2(t, h_74, x_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm i_74 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_25 = NULL;
        ATerm f_25 = NULL;
        t = term_h_14;
        {
          t = get_config_0(t);
          {
            f_25 = t;
            if(((e_25 != NULL) && (e_25 != f_25)))
              _fail(f_25);
            else
              e_25 = f_25;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_25));
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = term_i_8;
      }
    {
      t = i_74(t);
      {
        ATerm g_3 (ATerm t)
        {
          ATerm l_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_z_13;
              t = get_config_0(t);
              ;
              LocalPopChoice(m_19);
            }
          else
            {
              t = l_19;
              t = term_n_19;
            }
          return(t);
        }
        t = copy_to_1(t, g_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, f_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm i_25 = NULL;
    i_25 = t;
    h_25 :
    if(!(match_string(i_25, "-v")))
      {
        if(!(match_string(i_25, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_r_19;
    t = set_config_0(t);
    t = term_v_19;
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_x_19;
    return(t);
  }
  t = Option_3(t, h_3, i_3, n_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm l_25 = NULL;
    l_25 = t;
    j_25 :
    if(!(match_string(l_25, "-k")))
      {
        if(!(match_string(l_25, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm y_19;
    y_19 = t;
    {
      ATerm m_25 = NULL;
      ATerm n_25 = NULL;
      t = string_to_int_0(t);
      {
        n_25 = t;
        if(((m_25 != NULL) && (m_25 != n_25)))
          _fail(n_25);
        else
          m_25 = n_25;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_15, not_null(m_25));
        t = set_config_0(t);
      }
    }
    t = y_19;
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_z_19;
    return(t);
  }
  t = ArgOption_3(t, o_3, p_3, q_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  t = SSL_string_to_int(not_null(q_25));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_3 (ATerm t)
      {
        ATerm y_25 = NULL;
        y_25 = t;
        t_25 :
        if(!(match_string(y_25, "-S")))
          {
            if(!(match_string(y_25, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        t = term_d_20;
        t = set_config_0(t);
        t = term_e_20;
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = term_f_20;
        return(t);
      }
      t = Option_3(t, r_3, t_3, w_3);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              ATerm z_25 = NULL;
              z_25 = t;
              u_25 :
              if(!(match_string(z_25, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_3 (ATerm t)
            {
              ATerm c_26 = NULL;
              ATerm k_20;
              k_20 = t;
              {
                ATerm a_26 = NULL;
                ATerm b_26 = NULL;
                t = string_to_int_0(t);
                {
                  b_26 = t;
                  if(((a_26 != NULL) && (a_26 != b_26)))
                    _fail(b_26);
                  else
                    a_26 = b_26;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_8, not_null(a_26));
                  t = set_config_0(t);
                }
              }
              t = k_20;
              {
                ATerm d_26 = NULL;
                d_26 = t;
                if(((c_26 != NULL) && (c_26 != d_26)))
                  _fail(d_26);
                else
                  c_26 = d_26;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_26));
              }
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              t = term_m_20;
              return(t);
            }
            t = ArgOption_3(t, x_3, y_3, a_4);
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            {
              ATerm b_4 (ATerm t)
              {
                ATerm e_26 = NULL;
                e_26 = t;
                x_25 :
                if(!(match_string(e_26, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_4 (ATerm t)
              {
                t = term_r_20;
                t = set_config_0(t);
                t = term_s_20;
                return(t);
              }
              ATerm h_4 (ATerm t)
              {
                t = term_t_20;
                return(t);
              }
              t = Option_3(t, b_4, c_4, h_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
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
    ATerm k_26 = NULL;
    k_26 = t;
    h_26 :
    if(!(match_string(k_26, "-o")))
      {
        if(!(match_string(k_26, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    ATerm n_26 = NULL;
    ATerm y_20;
    y_20 = t;
    {
      ATerm l_26 = NULL;
      ATerm m_26 = NULL;
      m_26 = t;
      if(((l_26 != NULL) && (l_26 != m_26)))
        _fail(m_26);
      else
        l_26 = m_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_13, not_null(l_26));
        t = set_config_0(t);
      }
    }
    t = y_20;
    {
      ATerm o_26 = NULL;
      o_26 = t;
      if(((n_26 != NULL) && (n_26 != o_26)))
        _fail(o_26);
      else
        n_26 = o_26;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_26));
    }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = term_z_20;
    return(t);
  }
  t = ArgOption_3(t, i_4, j_4, k_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm m_4 (ATerm t)
        {
          ATerm s_26 = NULL;
          s_26 = t;
          r_26 :
          if(!(match_string(s_26, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_4 (ATerm t)
        {
          t = term_d_21;
          t = set_config_0(t);
          t = term_e_21;
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_f_21;
          return(t);
        }
        t = Option_3(t, m_4, n_4, o_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
  y_26 = t;
  w_26 :
  if(match_string(y_26, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(y_26) == AT_LIST) && !(ATisEmpty(y_26))))
        {
          z_26 = ATgetFirst((ATermList) y_26);
          a_27 = (ATerm) ATgetNext((ATermList) y_26);
          x_26 :
          if(((ATgetType(a_27) == AT_LIST) && !(ATisEmpty(a_27))))
            {
              b_27 = ATgetFirst((ATermList) a_27);
              c_27 = (ATerm) ATgetNext((ATermList) a_27);
              {
                ATerm g_27 = NULL;
                ATerm j_21;
                j_21 = t;
                {
                  t = not_null(z_26);
                  t = j_0(t);
                }
                t = j_21;
                {
                  ATerm h_27 = NULL;
                  t = not_null(b_27);
                  {
                    t = k_0(t);
                    {
                      h_27 = t;
                      if(((g_27 != NULL) && (g_27 != h_27)))
                        _fail(h_27);
                      else
                        g_27 = h_27;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_27)), not_null(g_27));
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
  ATerm p_4 (ATerm t)
  {
    ATerm o_27 = NULL;
    o_27 = t;
    l_27 :
    if(!(match_string(o_27, "-i")))
      {
        if(!(match_string(o_27, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    ATerm r_27 = NULL;
    ATerm m_21;
    m_21 = t;
    {
      ATerm p_27 = NULL;
      ATerm q_27 = NULL;
      q_27 = t;
      if(((p_27 != NULL) && (p_27 != q_27)))
        _fail(q_27);
      else
        p_27 = q_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_14, not_null(p_27));
        t = set_config_0(t);
      }
    }
    t = m_21;
    {
      ATerm s_27 = NULL;
      s_27 = t;
      if(((r_27 != NULL) && (r_27 != s_27)))
        _fail(s_27);
      else
        r_27 = s_27;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_27));
    }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_q_21;
    return(t);
  }
  t = ArgOption_3(t, p_4, q_4, s_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
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
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm x_27 = NULL;
  ATerm v_21;
  v_21 = t;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm y_27 = NULL,z_27 = NULL;
      y_27 = t;
      w_27 :
      if(match_cons(y_27, sym_Program_1))
        {
          z_27 = ATgetArgument(y_27, 0);
          if(((x_27 != NULL) && (x_27 != z_27)))
            _fail(z_27);
          else
            x_27 = z_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, w_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_21), not_null(x_27)), term_x_21));
      {
        t = printnl_0(t);
        {
          t = term_h_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATempty, term_z_21));
  {
    t = printnl_0(t);
    {
      t = term_h_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_28 = NULL;
  c_28 = t;
  t = SSL_TicksToSeconds(not_null(c_28));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym__2))
    {
      i_28 = ATgetArgument(h_28, 0);
      j_28 = ATgetArgument(h_28, 1);
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_28), not_null(j_28));
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            t = SSL_addr(not_null(i_28), not_null(j_28));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_71 (ATerm), ATerm k_71 (ATerm))
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_71(t);
      ;
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
        q_28 = t;
        p_28 :
        if(((ATgetType(q_28) == AT_LIST) && !(ATisEmpty(q_28))))
          {
            r_28 = ATgetFirst((ATermList) q_28);
            s_28 = (ATerm) ATgetNext((ATermList) q_28);
            {
              ATerm v_28 = NULL;
              ATerm w_28 = NULL;
              t = not_null(s_28);
              {
                t = foldr_2(t, j_71, k_71);
                {
                  w_28 = t;
                  if(((v_28 != NULL) && (v_28 != w_28)))
                    _fail(w_28);
                  else
                    v_28 = w_28;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(v_28));
                t = k_71(t);
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
ATerm crush_2 (ATerm t, ATerm h_70 (ATerm), ATerm i_70 (ATerm))
{
  ATerm d_29 = NULL;
  ATerm f_29 = NULL;
  d_29 = t;
  {
    ATerm g_29 = NULL;
    ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
    t = not_null(d_29);
    {
      g_29 = t;
      {
        t = SSL_explode_term(not_null(g_29));
        {
          i_29 = t;
          c_29 :
          if(match_cons(i_29, sym__2))
            {
              j_29 = ATgetArgument(i_29, 0);
              k_29 = ATgetArgument(i_29, 1);
              if(((f_29 != NULL) && (f_29 != k_29)))
                _fail(k_29);
              else
                f_29 = k_29;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_29);
      t = foldr_2(t, h_70, i_70);
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
    ATerm y_4 (ATerm t)
    {
      t = term_c_20;
      return(t);
    }
    t = crush_2(t, y_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,y_29 = NULL;
  t_29 = t;
  q_29 :
  if(match_cons(t_29, sym__2))
    {
      u_29 = ATgetArgument(t_29, 0);
      y_29 = ATgetArgument(t_29, 1);
      {
        ATerm e_22;
        e_22 = t;
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_29), not_null(y_29));
              ;
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              t = SSL_gtr(not_null(u_29), not_null(y_29));
            }
        }
        t = e_22;
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
  ATerm e_30 = NULL;
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
      f_30 = t;
      d_30 :
      if(match_cons(f_30, sym__2))
        {
          g_30 = ATgetArgument(f_30, 0);
          h_30 = ATgetArgument(f_30, 1);
          {
            if(((e_30 != NULL) && (e_30 != g_30)))
              _fail(g_30);
            else
              e_30 = g_30;
            if(((e_30 != NULL) && (e_30 != h_30)))
              _fail(h_30);
            else
              e_30 = h_30;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm e_5 (ATerm t)
  {
    ATerm j_22;
    j_22 = t;
    {
      ATerm k_30 = NULL;
      ATerm l_30 = NULL;
      t = term_a_8;
      {
        t = get_config_0(t);
        {
          l_30 = t;
          if(((k_30 != NULL) && (k_30 != l_30)))
            _fail(l_30);
          else
            k_30 = l_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), term_h_8);
        t = geq_0(t);
      }
    }
    t = j_22;
    t = k_59(t);
    return(t);
  }
  t = try_1(t, e_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm r_30 = NULL,t_30 = NULL;
    ATerm k_22;
    k_22 = t;
    {
      ATerm s_30 = NULL;
      t = run_time_0(t);
      {
        s_30 = t;
        if(((r_30 != NULL) && (r_30 != s_30)))
          _fail(s_30);
        else
          r_30 = s_30;
      }
    }
    t = k_22;
    {
      ATerm u_30 = NULL;
      t = term_l_22;
      {
        t = get_config_0(t);
        {
          u_30 = t;
          if(((t_30 != NULL) && (t_30 != u_30)))
            _fail(u_30);
          else
            t_30 = u_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_22), not_null(r_30)), term_m_22), not_null(t_30)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_5);
  {
    t = term_c_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  a_31 :
  if(match_cons(b_31, sym_Version_0))
    {
      ATerm d_31 = NULL,f_31 = NULL;
      ATerm o_22;
      o_22 = t;
      {
        ATerm e_31 = NULL;
        t = SSLgetAnnotations(not_null(b_31));
        {
          e_31 = t;
          if(((d_31 != NULL) && (d_31 != e_31)))
            _fail(e_31);
          else
            d_31 = e_31;
        }
      }
      t = o_22;
      {
        ATerm g_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_31));
        {
          g_31 = t;
          if(((f_31 != NULL) && (f_31 != g_31)))
            _fail(g_31);
          else
            f_31 = g_31;
        }
        t = not_null(f_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm g_5 (ATerm t)
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        {
          ATerm s_22 = t;
          int w_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(w_22);
            }
          else
            {
              t = s_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, g_5);
  t = y_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  t = SSL_table_create(not_null(l_31));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_31 = NULL;
  p_31 = t;
  {
    ATerm x_22;
    x_22 = t;
    {
      t = term_y_22;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_22, term_z_22, not_null(p_31));
          t = table_put_0(t);
        }
      }
    }
    t = x_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  t = SSL_table_destroy(not_null(t_31));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  t = SSL_exit(not_null(x_31));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_32 = NULL,e_32 = NULL,f_32 = NULL;
  b_32 = t;
  a_32 :
  if(((ATgetType(b_32) == AT_LIST) && ATisEmpty(b_32)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_32) == AT_LIST) && !(ATisEmpty(b_32))))
        {
          e_32 = ATgetFirst((ATermList) b_32);
          f_32 = (ATerm) ATgetNext((ATermList) b_32);
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
  ATerm e_23;
  e_23 = t;
  {
    ATerm k_32 = NULL;
    ATerm s_32 = NULL;
    ATerm f_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(i_23);
      }
    else
      {
        t = f_23;
        {
          ATerm q_32 = NULL;
          ATerm r_32 = NULL;
          r_32 = t;
          if(((q_32 != NULL) && (q_32 != r_32)))
            _fail(r_32);
          else
            q_32 = r_32;
          t = (ATerm) ATinsert(ATempty, not_null(q_32));
        }
      }
    {
      s_32 = t;
      if(((k_32 != NULL) && (k_32 != s_32)))
        _fail(s_32);
      else
        k_32 = s_32;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_19, not_null(k_32));
      t = printnl_0(t);
    }
  }
  t = e_23;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  h_33 = t;
  e_33 :
  if(((ATgetType(h_33) == AT_LIST) && !(ATisEmpty(h_33))))
    {
      f_33 = ATgetFirst((ATermList) h_33);
      g_33 = (ATerm) ATgetNext((ATermList) h_33);
      {
        ATerm k_33 = NULL;
        t = not_null(g_33);
        {
          ATerm j_23;
          j_23 = t;
          {
            ATerm l_33 = NULL,n_33 = NULL,z_33 = NULL;
            ATerm k_23;
            k_23 = t;
            {
              ATerm m_33 = NULL;
              t = i_0(t);
              {
                m_33 = t;
                if(((l_33 != NULL) && (l_33 != m_33)))
                  _fail(m_33);
                else
                  l_33 = m_33;
              }
            }
            t = k_23;
            {
              ATerm o_33 = NULL;
              t = not_null(f_33);
              {
                t = h_0(t);
                {
                  o_33 = t;
                  if(((n_33 != NULL) && (n_33 != o_33)))
                    _fail(o_33);
                  else
                    n_33 = o_33;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_33)), not_null(n_33));
                {
                  z_33 = t;
                  if(((k_33 != NULL) && (k_33 != z_33)))
                    _fail(z_33);
                  else
                    k_33 = z_33;
                }
              }
            }
          }
          t = j_23;
          {
            ATerm h_5 (ATerm t)
            {
              t = not_null(k_33);
              return(t);
            }
            t = reverse_acc_2(t, h_0, h_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_33) == AT_LIST) && ATisEmpty(h_33)))
        {
          {
            t = term_v_13;
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
  ATerm i_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm r_34 = NULL,c_35 = NULL;
  r_34 = t;
  n_34 :
  if(match_cons(r_34, sym_Program_1))
    {
      c_35 = ATgetArgument(r_34, 0);
      {
        ATerm f_35 = NULL,l_35 = NULL;
        ATerm g_35 = NULL;
        t = SSLgetAnnotations(not_null(r_34));
        {
          g_35 = t;
          if(((f_35 != NULL) && (f_35 != g_35)))
            _fail(g_35);
          else
            f_35 = g_35;
        }
        {
          t = not_null(c_35);
          {
            ATerm n_35 = NULL;
            t = w_57(t);
            {
              l_35 = t;
              {
                ATerm q_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_35)), not_null(f_35));
                {
                  q_35 = t;
                  if(((n_35 != NULL) && (n_35 != q_35)))
                    _fail(q_35);
                  else
                    n_35 = q_35;
                }
                t = not_null(n_35);
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
  ATerm c_36 = NULL;
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_36 = NULL;
      t = term_l_22;
      {
        t = get_config_0(t);
        {
          d_36 = t;
          if(((c_36 != NULL) && (c_36 != d_36)))
            _fail(d_36);
          else
            c_36 = d_36;
        }
      }
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
        ATerm n_5 (ATerm t)
        {
          ATerm o_5 (ATerm t)
          {
            ATerm e_36 = NULL;
            e_36 = t;
            if(((c_36 != NULL) && (c_36 != e_36)))
              _fail(e_36);
            else
              c_36 = e_36;
            return(t);
          }
          t = Program_1(t, o_5);
          return(t);
        }
        t = option_defined_1(t, n_5);
      }
    }
  {
    ATerm p_5 (ATerm t)
    {
      ATerm q_5 (ATerm t)
      {
        t = not_null(c_36);
        return(t);
      }
      t = short_description_1(t, q_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, p_5);
    {
      t = term_w_23;
      {
        t = echo_0(t);
        {
          t = term_z_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_5 (ATerm t)
                {
                  ATerm f_36 = NULL;
                  ATerm g_36 = NULL;
                  g_36 = t;
                  if(((f_36 != NULL) && (f_36 != g_36)))
                    _fail(g_36);
                  else
                    f_36 = g_36;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_36)), term_a_24);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_5);
                {
                  ATerm t_5 (ATerm t)
                  {
                    ATerm h_36 = NULL;
                    ATerm i_36 = NULL;
                    ATerm u_5 (ATerm t)
                    {
                      t = not_null(c_36);
                      return(t);
                    }
                    t = long_description_1(t, u_5);
                    {
                      i_36 = t;
                      if(((h_36 != NULL) && (h_36 != i_36)))
                        _fail(i_36);
                      else
                        h_36 = i_36;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(h_36)), term_c_24);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_5);
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
  ATerm d_24;
  d_24 = t;
  {
    ATerm o_36 = NULL;
    ATerm p_36 = NULL;
    p_36 = t;
    if(((o_36 != NULL) && (o_36 != p_36)))
      _fail(p_36);
    else
      o_36 = p_36;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATempty, not_null(o_36)));
      t = printnl_0(t);
    }
  }
  t = d_24;
  return(t);
}
ATerm say_1 (ATerm t, ATerm z_75 (ATerm))
{
  ATerm e_24;
  e_24 = t;
  {
    t = z_75(t);
    t = debug_0(t);
  }
  t = e_24;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm w_36 = NULL,x_36 = NULL;
  w_36 = t;
  v_36 :
  if(match_cons(w_36, sym_Undefined_1))
    {
      x_36 = ATgetArgument(w_36, 0);
      {
        ATerm a_37 = NULL,c_37 = NULL;
        ATerm b_37 = NULL;
        t = SSLgetAnnotations(not_null(w_36));
        {
          b_37 = t;
          if(((a_37 != NULL) && (a_37 != b_37)))
            _fail(b_37);
          else
            a_37 = b_37;
        }
        {
          t = not_null(x_36);
          {
            ATerm e_37 = NULL;
            t = x_57(t);
            {
              c_37 = t;
              {
                ATerm f_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_37)), not_null(a_37));
                {
                  f_37 = t;
                  if(((e_37 != NULL) && (e_37 != f_37)))
                    _fail(f_37);
                  else
                    e_37 = f_37;
                }
                t = not_null(e_37);
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
ATerm fetch_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm k_37 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_65, _id);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = Cons_2(t, _id, k_37);
      }
    return(t);
  }
  t = k_37(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_80 (ATerm))
{
  t = fetch_1(t, f_80);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_37 = NULL;
  p_37 = t;
  o_37 :
  if(match_cons(p_37, sym_Help_0))
    {
      ATerm r_37 = NULL,t_37 = NULL;
      ATerm h_24;
      h_24 = t;
      {
        ATerm s_37 = NULL;
        t = SSLgetAnnotations(not_null(p_37));
        {
          s_37 = t;
          if(((r_37 != NULL) && (r_37 != s_37)))
            _fail(s_37);
          else
            r_37 = s_37;
        }
      }
      t = h_24;
      {
        ATerm u_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(r_37));
        {
          u_37 = t;
          if(((t_37 != NULL) && (t_37 != u_37)))
            _fail(u_37);
          else
            t_37 = u_37;
        }
        t = not_null(t_37);
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
  ATerm z_37 = NULL;
  z_37 = t;
  t = SSL_implode_string(not_null(z_37));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
        e_38 = t;
        d_38 :
        if(((ATgetType(e_38) == AT_LIST) && !(ATisEmpty(e_38))))
          {
            f_38 = ATgetFirst((ATermList) e_38);
            g_38 = (ATerm) ATgetNext((ATermList) e_38);
            {
              t = not_null(f_38);
              {
                ATerm v_5 (ATerm t)
                {
                  t = not_null(g_38);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm q_38 = NULL;
  ATerm s_38 = NULL;
  q_38 = t;
  {
    ATerm t_38 = NULL;
    ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
    t = not_null(q_38);
    {
      t_38 = t;
      {
        t = SSL_explode_term(not_null(t_38));
        {
          v_38 = t;
          o_38 :
          if(match_cons(v_38, sym__2))
            {
              w_38 = ATgetArgument(v_38, 0);
              x_38 = ATgetArgument(v_38, 1);
              p_38 :
              if(match_string(w_38, ""))
                {
                  if(((s_38 != NULL) && (s_38 != x_38)))
                    _fail(x_38);
                  else
                    s_38 = x_38;
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
      t = not_null(s_38);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_65 (ATerm))
{
  ATerm b_39 (ATerm t)
  {
    ATerm k_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_39);
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = k_24;
        {
          t = Nil_0(t);
          t = k_65(t);
        }
      }
    return(t);
  }
  t = b_39(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym__2))
    {
      f_39 = ATgetArgument(e_39, 0);
      g_39 = ATgetArgument(e_39, 1);
      {
        t = not_null(f_39);
        {
          ATerm w_5 (ATerm t)
          {
            t = not_null(g_39);
            return(t);
          }
          t = at_end_1(t, w_5);
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
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm l_39 = NULL;
  l_39 = t;
  t = SSL_explode_string(not_null(l_39));
  return(t);
}
ATerm _2 (ATerm t, ATerm a_51 (ATerm), ATerm b_51 (ATerm))
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
  u_39 = t;
  t_39 :
  if(match_cons(u_39, sym__2))
    {
      v_39 = ATgetArgument(u_39, 0);
      w_39 = ATgetArgument(u_39, 1);
      {
        ATerm a_40 = NULL,c_40 = NULL;
        ATerm b_40 = NULL;
        t = SSLgetAnnotations(not_null(u_39));
        {
          b_40 = t;
          if(((a_40 != NULL) && (a_40 != b_40)))
            _fail(b_40);
          else
            a_40 = b_40;
        }
        {
          t = not_null(v_39);
          {
            ATerm e_40 = NULL;
            t = a_51(t);
            {
              c_40 = t;
              {
                t = not_null(w_39);
                {
                  ATerm g_40 = NULL;
                  t = b_51(t);
                  {
                    e_40 = t;
                    {
                      ATerm h_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_40), not_null(e_40)), not_null(a_40));
                      {
                        h_40 = t;
                        if(((g_40 != NULL) && (g_40 != h_40)))
                          _fail(h_40);
                        else
                          g_40 = h_40;
                      }
                      t = not_null(g_40);
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
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  r_40 :
  if(match_cons(s_40, sym__2))
    {
      t_40 = ATgetArgument(s_40, 0);
      u_40 = ATgetArgument(s_40, 1);
      {
        ATerm v_24;
        v_24 = t;
        t = SSL_printnl(not_null(t_40), not_null(u_40));
        t = v_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm w_24;
  w_24 = t;
  {
    ATerm a_41 = NULL,c_41 = NULL;
    ATerm x_24;
    x_24 = t;
    {
      ATerm b_41 = NULL;
      t = y_75(t);
      {
        b_41 = t;
        if(((a_41 != NULL) && (a_41 != b_41)))
          _fail(b_41);
        else
          a_41 = b_41;
      }
    }
    t = x_24;
    {
      ATerm d_41 = NULL;
      d_41 = t;
      if(((c_41 != NULL) && (c_41 != d_41)))
        _fail(d_41);
      else
        c_41 = d_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_41)), not_null(a_41)));
        t = printnl_0(t);
      }
    }
  }
  t = w_24;
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm i_41 (ATerm t)
  {
    ATerm z_24 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = z_24;
        t = Cons_2(t, v_64, i_41);
      }
    return(t);
  }
  t = i_41(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_41 = NULL;
  k_41 = t;
  t = SSL_is_string(not_null(k_41));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(g_25);
    }
  else
    {
      t = d_25;
      {
        ATerm k_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_5);
            ;
            LocalPopChoice(o_25);
          }
        else
          {
            t = k_25;
            {
              ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
              x_41 = t;
              w_41 :
              if(match_cons(x_41, sym_Path_1))
                {
                  y_41 = ATgetArgument(x_41, 0);
                  t = not_null(y_41);
                }
              else
                {
                  if(match_cons(x_41, sym_Var_1))
                    {
                      y_41 = ATgetArgument(x_41, 0);
                      {
                        t = not_null(y_41);
                        {
                          ATerm p_25 = t;
                          int r_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(r_25);
                            }
                          else
                            {
                              t = p_25;
                              {
                                ATerm a_6 (ATerm t)
                                {
                                  t = term_s_25;
                                  return(t);
                                }
                                t = debug_1(t, a_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_41, sym_Prefix_2))
                        {
                          y_41 = ATgetArgument(x_41, 0);
                          z_41 = ATgetArgument(x_41, 1);
                          {
                            ATerm e_42 = NULL,g_42 = NULL;
                            ATerm v_25;
                            v_25 = t;
                            {
                              ATerm f_42 = NULL;
                              t = not_null(y_41);
                              {
                                t = eval_config_0(t);
                                {
                                  f_42 = t;
                                  if(((e_42 != NULL) && (e_42 != f_42)))
                                    _fail(f_42);
                                  else
                                    e_42 = f_42;
                                }
                              }
                            }
                            t = v_25;
                            {
                              ATerm h_42 = NULL;
                              t = not_null(z_41);
                              {
                                t = eval_config_0(t);
                                {
                                  h_42 = t;
                                  if(((g_42 != NULL) && (g_42 != h_42)))
                                    _fail(h_42);
                                  else
                                    g_42 = h_42;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_42), not_null(g_42));
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
  ATerm r_42 = NULL;
  r_42 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_16, not_null(r_42));
    {
      t = table_get_0(t);
      {
        ATerm d_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_25;
            w_25 = t;
            {
              ATerm v_42 = NULL;
              ATerm w_42 = NULL;
              w_42 = t;
              if(((v_42 != NULL) && (v_42 != w_42)))
                _fail(w_42);
              else
                v_42 = w_42;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_a_16, not_null(r_42), not_null(v_42));
                t = table_put_0(t);
              }
            }
            t = w_25;
          }
          return(t);
        }
        t = try_1(t, d_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_63 (ATerm))
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_63(t);
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
  b_43 = t;
  a_43 :
  if(match_cons(b_43, sym__2))
    {
      c_43 = ATgetArgument(b_43, 0);
      d_43 = ATgetArgument(b_43, 1);
      t = SSL_table_get(not_null(c_43), not_null(d_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
  k_43 = t;
  j_43 :
  if(match_cons(k_43, sym__3))
    {
      l_43 = ATgetArgument(k_43, 0);
      m_43 = ATgetArgument(k_43, 1);
      n_43 = ATgetArgument(k_43, 2);
      {
        ATerm i_26;
        i_26 = t;
        {
          ATerm r_43 = NULL;
          ATerm s_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_43), not_null(m_43));
          {
            ATerm j_26 = t;
            int p_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(p_26);
              }
            else
              {
                t = j_26;
                t = (ATerm) ATempty;
              }
            {
              s_43 = t;
              if(((r_43 != NULL) && (r_43 != s_43)))
                _fail(s_43);
              else
                r_43 = s_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_43), not_null(m_43), (ATerm) ATinsert(CheckATermList(not_null(r_43)), not_null(n_43)));
            t = table_put_0(t);
          }
        }
        t = i_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm w_43 = NULL;
  ATerm x_43 = NULL;
  t = term_v_13;
  {
    t = k_81(t);
    {
      x_43 = t;
      if(((w_43 != NULL) && (w_43 != x_43)))
        _fail(x_43);
      else
        w_43 = x_43;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_23, term_y_23, not_null(w_43));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  c_44 :
  if(match_string(d_44, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(d_44) == AT_LIST) && !(ATisEmpty(d_44))))
        {
          e_44 = ATgetFirst((ATermList) d_44);
          f_44 = (ATerm) ATgetNext((ATermList) d_44);
          {
            ATerm i_44 = NULL;
            ATerm q_26;
            q_26 = t;
            {
              t = not_null(e_44);
              t = a_0(t);
            }
            t = q_26;
            {
              ATerm j_44 = NULL;
              t = term_v_13;
              {
                t = d_0(t);
                {
                  j_44 = t;
                  if(((i_44 != NULL) && (i_44 != j_44)))
                    _fail(j_44);
                  else
                    i_44 = j_44;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_44)), not_null(i_44));
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
  ATerm e_6 (ATerm t)
  {
    ATerm o_44 = NULL;
    o_44 = t;
    n_44 :
    if(!(match_string(o_44, "--help")))
      {
        if(!(match_string(o_44, "-h")))
          {
            if(!(match_string(o_44, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    t = term_u_26;
    {
      t = set_config_0(t);
      t = term_v_26;
    }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_d_27;
    return(t);
  }
  t = Option_3(t, e_6, f_6, g_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
  r_44 = t;
  q_44 :
  if(((ATgetType(r_44) == AT_LIST) && !(ATisEmpty(r_44))))
    {
      s_44 = ATgetFirst((ATermList) r_44);
      t_44 = (ATerm) ATgetNext((ATermList) r_44);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_44)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_44)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_52 (ATerm), ATerm k_52 (ATerm))
{
  ATerm j_45 = NULL,l_45 = NULL,m_45 = NULL;
  j_45 = t;
  i_45 :
  if(((ATgetType(j_45) == AT_LIST) && !(ATisEmpty(j_45))))
    {
      l_45 = ATgetFirst((ATermList) j_45);
      m_45 = (ATerm) ATgetNext((ATermList) j_45);
      {
        ATerm r_45 = NULL,y_45 = NULL;
        ATerm s_45 = NULL;
        t = SSLgetAnnotations(not_null(j_45));
        {
          s_45 = t;
          if(((r_45 != NULL) && (r_45 != s_45)))
            _fail(s_45);
          else
            r_45 = s_45;
        }
        {
          t = not_null(l_45);
          {
            ATerm a_46 = NULL;
            t = j_52(t);
            {
              y_45 = t;
              {
                t = not_null(m_45);
                {
                  ATerm c_46 = NULL;
                  t = k_52(t);
                  {
                    a_46 = t;
                    {
                      ATerm d_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_46)), not_null(y_45)), not_null(r_45));
                      {
                        d_46 = t;
                        if(((c_46 != NULL) && (c_46 != d_46)))
                          _fail(d_46);
                        else
                          c_46 = d_46;
                      }
                      t = not_null(c_46);
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
  ATerm r_46 = NULL;
  r_46 = t;
  q_46 :
  if(((ATgetType(r_46) == AT_LIST) && ATisEmpty(r_46)))
    {
      {
        ATerm t_46 = NULL,v_46 = NULL;
        ATerm e_27;
        e_27 = t;
        {
          ATerm u_46 = NULL;
          t = SSLgetAnnotations(not_null(r_46));
          {
            u_46 = t;
            if(((t_46 != NULL) && (t_46 != u_46)))
              _fail(u_46);
            else
              t_46 = u_46;
          }
        }
        t = e_27;
        {
          ATerm w_46 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_46));
          {
            w_46 = t;
            if(((v_46 != NULL) && (v_46 != w_46)))
              _fail(w_46);
            else
              v_46 = w_46;
          }
          t = not_null(v_46);
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
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
  c_47 = t;
  b_47 :
  if(match_cons(c_47, sym__2))
    {
      d_47 = ATgetArgument(c_47, 0);
      e_47 = ATgetArgument(c_47, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_16, not_null(d_47), not_null(e_47));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm f_27;
  f_27 = t;
  {
    ATerm j_6 (ATerm t)
    {
      t = term_i_27;
      t = i_81(t);
      return(t);
    }
    t = try_1(t, j_6);
  }
  t = f_27;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm m_47 = NULL;
      ATerm j_27;
      j_27 = t;
      {
        ATerm k_47 = NULL;
        ATerm l_47 = NULL;
        l_47 = t;
        if(((k_47 != NULL) && (k_47 != l_47)))
          _fail(l_47);
        else
          k_47 = l_47;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_22, not_null(k_47));
          t = set_config_0(t);
        }
      }
      t = j_27;
      {
        ATerm n_47 = NULL;
        n_47 = t;
        if(((m_47 != NULL) && (m_47 != n_47)))
          _fail(n_47);
        else
          m_47 = n_47;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_47));
      }
      return(t);
    }
    ATerm n_6 (ATerm t)
    {
      ATerm k_27 = t;
      int m_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(t_27);
            }
          else
            {
              t = n_27;
              {
                t = i_81(t);
                t = Cons_2(t, _id, n_6);
              }
            }
          ;
          LocalPopChoice(m_27);
        }
      else
        {
          t = k_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_6, n_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  ATerm u_27;
  u_27 = t;
  {
    ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
    w_47 = t;
    s_47 :
    if(match_cons(w_47, sym__3))
      {
        x_47 = ATgetArgument(w_47, 0);
        y_47 = ATgetArgument(w_47, 1);
        z_47 = ATgetArgument(w_47, 2);
        {
          if(((t_47 != NULL) && (t_47 != x_47)))
            _fail(x_47);
          else
            t_47 = x_47;
          {
            if(((u_47 != NULL) && (u_47 != y_47)))
              _fail(y_47);
            else
              u_47 = y_47;
            {
              if(((v_47 != NULL) && (v_47 != z_47)))
                _fail(z_47);
              else
                v_47 = z_47;
              t = SSL_table_put(not_null(t_47), not_null(u_47), not_null(v_47));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_81 (ATerm))
{
  ATerm c_48 = NULL;
  ATerm v_27;
  v_27 = t;
  {
    t = term_a_28;
    t = table_put_0(t);
  }
  t = v_27;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm b_28 = t;
      int d_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_81(t);
          ;
          LocalPopChoice(d_28);
        }
      else
        {
          t = b_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_6);
    {
      ATerm p_6 (ATerm t)
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_28;
            k_28 = t;
            {
              ATerm l_28 = t;
              int m_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_t_26;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(m_28);
                }
              else
                {
                  t = l_28;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = k_28;
            {
              t = system_usage_0(t);
              {
                t = term_c_20;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
            {
              ATerm t_6 (ATerm t)
              {
                ATerm b_7 (ATerm t)
                {
                  ATerm d_48 = NULL;
                  d_48 = t;
                  if(((c_48 != NULL) && (c_48 != d_48)))
                    _fail(d_48);
                  else
                    c_48 = d_48;
                  return(t);
                }
                t = Undefined_1(t, b_7);
                return(t);
              }
              t = option_defined_1(t, t_6);
              {
                ATerm c_7 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_48)), term_n_28);
                  return(t);
                }
                t = say_1(t, c_7);
                {
                  t = system_usage_0(t);
                  {
                    t = term_h_8;
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
        ATerm o_28;
        o_28 = t;
        {
          t = term_x_23;
          t = table_destroy_0(t);
        }
        t = o_28;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm))
{
  t = parse_options_1(t, e_79);
  {
    t = store_options_0(t);
    {
      t = g_79(t);
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_79);
            ;
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            {
              ATerm x_28 = t;
              int y_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_79(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(y_28);
                }
              else
                {
                  t = x_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm i_79 (ATerm), ATerm j_79 (ATerm))
{
  t = option_wrap_4(t, i_79, default_usage_0, _id, j_79);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm))
{
  ATerm d_7 (ATerm t)
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_74(t);
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    t = xtc_io_1(t, n_74);
    return(t);
  }
  t = option_wrap_2(t, d_7, e_7);
  return(t);
}
ATerm str_tg_str_wrap_1 (ATerm t, ATerm e_58 (ATerm))
{
  ATerm k_7 (ATerm t)
  {
    t = pre_process_input_0(t);
    {
      t = astratego2tg_0(t);
      {
        t = xtc_transform_2(t, e_58, pass_verbose_0);
        t = pp_astratego_0(t);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, sig2_options_0, k_7);
  return(t);
}
ATerm io_sig2fold_strategy_0 (ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    t = term_b_29;
    return(t);
  }
  t = str_tg_str_wrap_1(t, l_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_sig2fold_strategy_0(t);
  return(t);
}
