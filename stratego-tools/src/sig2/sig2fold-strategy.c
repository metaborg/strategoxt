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
Symbol sym_Module_0;
Symbol sym_AST_0;
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
ATerm term_q_29;
ATerm term_z_28;
ATerm term_j_28;
ATerm term_s_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_u_25;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_k_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_s_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_q_18;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_x_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_a_12;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_e_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_s_9;
ATerm term_k_9;
ATerm term_u_8;
ATerm term_m_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_w_7;
ATerm term_r_7;
ATerm term_k_7;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_g_6;
ATerm term_e_6;
void init_constant_terms (void)
{
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_b_8);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_s_9);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("astratego2tg", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Module_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast          Input is Stratego AST.", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_e_15);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod          Input is Stratego module (.str, .cr, .r or .rtree) (default).", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_a_12);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__2, term_j_19, term_a_13);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym__2, term_m_6, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_a_13);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_a_13);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_u_23, term_v_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_a_13);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__3, term_u_23, term_v_23, (ATerm) ATempty);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("tg2fold-strategy", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm e_74 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm ast2abox_0 (ATerm);
ATerm stratego_ensugar_0 (ATerm);
ATerm pp_astratego_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm));
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
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm g_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm i_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm));
ATerm union_1 (ATerm, ATerm e_70 (ATerm));
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
ATerm xtc_command_1 (ATerm, ATerm d_74 (ATerm));
ATerm assert_1 (ATerm, ATerm z_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm n_75 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm p_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm f_74 (ATerm), ATerm g_74 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm w_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm g_63 (ATerm), ATerm h_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm t_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm u_73 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm v_70 (ATerm), ATerm w_70 (ATerm));
ATerm crush_2 (ATerm, ATerm t_69 (ATerm), ATerm u_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_80 (ATerm));
ATerm Program_1 (ATerm, ATerm o_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm p_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm t_50 (ATerm), ATerm u_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_75 (ATerm));
ATerm map_1 (ATerm, ATerm h_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_52 (ATerm), ATerm d_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm p_78 (ATerm), ATerm q_78 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm y_73 (ATerm), ATerm z_73 (ATerm));
ATerm str_tg_str_wrap_1 (ATerm, ATerm x_57 (ATerm));
ATerm io_sig2fold_strategy_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, e_74, b_0);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_e_6;
    return(t);
  }
  t = xtc_transform_1(t, c_0);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = term_g_6;
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    ATerm e_0 = NULL;
    ATerm w_0 = NULL;
    t = term_j_6;
    {
      t = xtc_find_0(t);
      {
        w_0 = t;
        if(((e_0 != NULL) && (e_0 != w_0)))
          _fail(w_0);
        else
          e_0 = w_0;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_0)), term_k_6);
    return(t);
  }
  t = xtc_transform_2(t, f_0, p_0);
  return(t);
}
ATerm stratego_ensugar_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = term_l_6;
    return(t);
  }
  t = xtc_transform_2(t, q_0, pass_verbose_0);
  return(t);
}
ATerm pp_astratego_0 (ATerm t)
{
  t = stratego_ensugar_0(t);
  {
    t = ast2abox_0(t);
    {
      ATerm r_0 (ATerm t)
      {
        t = term_e_6;
        return(t);
      }
      t = xtc_transform_1(t, r_0);
    }
  }
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm i_1 = NULL;
  ATerm j_1 = NULL,z_1 = NULL;
  ATerm y_1 = NULL;
  t = term_m_6;
  {
    ATerm p_6 = t;
    int q_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(q_6);
      }
    else
      {
        t = p_6;
        t = term_t_6;
      }
    {
      y_1 = t;
      if(((j_1 != NULL) && (j_1 != y_1)))
        _fail(y_1);
      else
        j_1 = y_1;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_1), term_t_6);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          z_1 = t;
          if(((i_1 != NULL) && (i_1 != z_1)))
            _fail(z_1);
          else
            i_1 = z_1;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_1)), term_m_6);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL;
  d_3 = t;
  c_3 :
  if(match_cons(d_3, sym_stdin_0))
    {
      ATerm f_3 = NULL;
      ATerm g_3 = NULL;
      t = term_u_6;
      {
        t = ReadFromFile_0(t);
        {
          g_3 = t;
          if(((f_3 != NULL) && (f_3 != g_3)))
            _fail(g_3);
          else
            f_3 = g_3;
        }
      }
      t = not_null(f_3);
    }
  else
    {
      if(match_cons(d_3, sym_FILE_1))
        {
          e_3 = ATgetArgument(d_3, 0);
          {
            ATerm i_3 = NULL;
            ATerm j_3 = NULL;
            t = not_null(e_3);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  j_3 = t;
                  if(((i_3 != NULL) && (i_3 != j_3)))
                    _fail(j_3);
                  else
                    i_3 = j_3;
                }
              }
            }
            t = not_null(i_3);
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
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL;
  q_3 = t;
  p_3 :
  if(match_cons(q_3, sym__2))
    {
      r_3 = ATgetArgument(q_3, 0);
      s_3 = ATgetArgument(q_3, 1);
      t = SSL_WriteToBinaryFile(not_null(r_3), not_null(s_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm y_3 = NULL;
  ATerm a_4 = NULL;
  y_3 = t;
  {
    ATerm b_4 = NULL;
    t = xtc_new_file_0(t);
    {
      b_4 = t;
      {
        if(((a_4 != NULL) && (a_4 != b_4)))
          _fail(b_4);
        else
          a_4 = b_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_4), not_null(y_3));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(a_4);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_4));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, m_74, n_74);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm f_4 = NULL;
  f_4 = t;
  t = SSL_close_file(not_null(f_4));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  j_4 :
  if(match_cons(k_4, sym__2))
    {
      l_4 = ATgetArgument(k_4, 0);
      m_4 = ATgetArgument(k_4, 1);
      t = SSL_execvp(not_null(l_4), not_null(m_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm r_4 = NULL;
  r_4 = t;
  t = SSL_waitpid(not_null(r_4));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm z_58 (ATerm))
{
  ATerm b_5 = NULL;
  ATerm d_5 = NULL;
  b_5 = t;
  {
    t = fork_0(t);
    {
      d_5 = t;
      {
        ATerm v_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 = NULL;
            f_5 = t;
            x_4 :
            if(match_int(f_5, 0))
              {
                t = not_null(b_5);
                t = z_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(z_6);
          }
        else
          {
            t = v_6;
            {
              ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
              t = not_null(d_5);
              {
                t = waitpid_0(t);
                {
                  g_5 = t;
                  z_4 :
                  if(match_cons(g_5, sym_WaitStatus_3))
                    {
                      h_5 = ATgetArgument(g_5, 0);
                      i_5 = ATgetArgument(g_5, 1);
                      j_5 = ATgetArgument(g_5, 2);
                      a_5 :
                      if(match_int(h_5, 0))
                        {
                          t = not_null(b_5);
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
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym__2))
    {
      r_5 = ATgetArgument(q_5, 0);
      s_5 = ATgetArgument(q_5, 1);
      {
        ATerm s_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_5), not_null(s_5));
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
  ATerm x_5 = NULL;
  x_5 = t;
  t = SSL_table_keys(not_null(x_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm t_0 (ATerm t)
      {
        ATerm f_6 = NULL;
        ATerm h_6 = NULL;
        f_6 = t;
        {
          ATerm i_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(f_6));
          {
            t = table_get_0(t);
            {
              i_6 = t;
              if(((h_6 != NULL) && (h_6 != i_6)))
                _fail(i_6);
              else
                h_6 = i_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), not_null(h_6));
        }
        return(t);
      }
      t = map_1(t, t_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_7;
      j_7 = t;
      {
        ATerm n_6 = NULL;
        ATerm o_6 = NULL;
        t = term_m_6;
        {
          t = get_config_0(t);
          {
            o_6 = t;
            if(((n_6 != NULL) && (n_6 != o_6)))
              _fail(o_6);
            else
              n_6 = o_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_6), term_k_7);
          t = geq_0(t);
        }
      }
      t = j_7;
      t = h_59(t);
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm q_7;
  q_7 = t;
  {
    ATerm r_6 = NULL;
    ATerm s_6 = NULL;
    s_6 = t;
    if(((r_6 != NULL) && (r_6 != s_6)))
      _fail(s_6);
    else
      r_6 = s_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_7, not_null(r_6));
      t = printnl_0(t);
    }
  }
  t = q_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm y_6 = NULL;
  ATerm a_7 = NULL,b_7 = NULL;
  y_6 = t;
  {
    ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_6)));
    {
      t = table_get_0(t);
      {
        c_7 = t;
        w_6 :
        if(((ATgetType(c_7) == AT_LIST) && !(ATisEmpty(c_7))))
          {
            d_7 = ATgetFirst((ATermList) c_7);
            g_7 = (ATerm) ATgetNext((ATermList) c_7);
            x_6 :
            if(match_cons(d_7, sym__2))
              {
                e_7 = ATgetArgument(d_7, 0);
                f_7 = ATgetArgument(d_7, 1);
                {
                  if(((a_7 != NULL) && (a_7 != e_7)))
                    _fail(e_7);
                  else
                    a_7 = e_7;
                  if(((b_7 != NULL) && (b_7 != f_7)))
                    _fail(f_7);
                  else
                    b_7 = f_7;
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
    t = not_null(b_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  m_7 :
  if(match_cons(n_7, sym__2))
    {
      o_7 = ATgetArgument(n_7, 0);
      p_7 = ATgetArgument(n_7, 1);
      {
        ATerm s_7 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_7)));
        {
          t = table_get_0(t);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
              t_7 = t;
              l_7 :
              if(match_cons(t_7, sym__2))
                {
                  u_7 = ATgetArgument(t_7, 0);
                  v_7 = ATgetArgument(t_7, 1);
                  {
                    if(((p_7 != NULL) && (p_7 != u_7)))
                      _fail(u_7);
                    else
                      p_7 = u_7;
                    if(((s_7 != NULL) && (s_7 != v_7)))
                      _fail(v_7);
                    else
                      s_7 = v_7;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_0);
          }
        }
        t = not_null(s_7);
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
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_8;
      {
        t = table_get_0(t);
        {
          ATerm v_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, v_0);
        }
      }
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_8;
      l_8 = t;
      {
        ATerm z_7 = NULL;
        ATerm a_8 = NULL;
        t = term_m_6;
        {
          t = get_config_0(t);
          {
            a_8 = t;
            if(((z_7 != NULL) && (z_7 != a_8)))
              _fail(a_8);
            else
              z_7 = a_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), term_m_8);
          t = geq_0(t);
        }
      }
      t = l_8;
      t = g_59(t);
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_8;
      t_8 = t;
      {
        ATerm d_8 = NULL;
        ATerm e_8 = NULL;
        t = term_m_6;
        {
          t = get_config_0(t);
          {
            e_8 = t;
            if(((d_8 != NULL) && (d_8 != e_8)))
              _fail(e_8);
            else
              d_8 = e_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), term_u_8);
          t = geq_0(t);
        }
      }
      t = t_8;
      t = i_59(t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
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
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym__2))
    {
      j_8 = ATgetArgument(i_8, 0);
      k_8 = ATgetArgument(i_8, 1);
      if(((j_8 != NULL) && (j_8 != k_8)))
        _fail(k_8);
      else
        j_8 = k_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm))
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  p_8 :
  if(((ATgetType(q_8) == AT_LIST) && !(ATisEmpty(q_8))))
    {
      r_8 = ATgetFirst((ATermList) q_8);
      s_8 = (ATerm) ATgetNext((ATermList) q_8);
      {
        t = j_70(t);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm v_8 = NULL;
            v_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_8), not_null(v_8));
              t = i_70(t);
            }
            return(t);
          }
          t = fetch_1(t, x_0);
        }
        t = not_null(s_8);
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
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym__2))
    {
      c_9 = ATgetArgument(b_9, 0);
      d_9 = ATgetArgument(b_9, 1);
      {
        t = not_null(c_9);
        {
          ATerm h_9 (ATerm t)
          {
            ATerm w_8 = t;
            int x_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(d_9);
                LocalPopChoice(x_8);
              }
            else
              {
                t = w_8;
                {
                  ATerm y_8 = t;
                  int z_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_0 (ATerm t)
                      {
                        t = not_null(d_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_70, y_0);
                      t = h_9(t);
                      LocalPopChoice(z_8);
                    }
                  else
                    {
                      t = y_8;
                      t = Cons_2(t, _id, h_9);
                    }
                }
              }
            return(t);
          }
          t = h_9(t);
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
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym__3))
    {
      n_9 = ATgetArgument(m_9, 0);
      o_9 = ATgetArgument(m_9, 1);
      p_9 = ATgetArgument(m_9, 2);
      {
        ATerm e_9;
        e_9 = t;
        {
          ATerm t_9 = NULL;
          ATerm u_9 = NULL,w_9 = NULL;
          ATerm v_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(o_9));
          {
            ATerm f_9 = t;
            int g_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_9);
              }
            else
              {
                t = f_9;
                t = (ATerm) ATempty;
              }
            {
              v_9 = t;
              if(((u_9 != NULL) && (u_9 != v_9)))
                _fail(v_9);
              else
                u_9 = v_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(p_9));
            {
              t = union_1(t, eq_0);
              {
                w_9 = t;
                if(((t_9 != NULL) && (t_9 != w_9)))
                  _fail(w_9);
                else
                  t_9 = w_9;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_9), not_null(o_9), not_null(t_9));
            t = table_put_0(t);
          }
        }
        t = e_9;
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
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym__2))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      {
        t = not_null(g_10);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
            j_10 = t;
            c_10 :
            if(match_cons(j_10, sym__2))
              {
                k_10 = ATgetArgument(j_10, 0);
                l_10 = ATgetArgument(j_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_10), not_null(k_10), not_null(l_10));
                  t = r_59(t);
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
  ATerm r_10 = NULL;
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_10 = NULL;
      s_10 = t;
      {
        if(((r_10 != NULL) && (r_10 != s_10)))
          _fail(s_10);
        else
          r_10 = s_10;
        t = SSL_ReadFromFile(not_null(r_10));
      }
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      {
        ATerm a_1 (ATerm t)
        {
          t = term_k_9;
          return(t);
        }
        t = debug_1(t, a_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm w_10 = NULL;
  ATerm y_10 = NULL;
  w_10 = t;
  {
    ATerm q_9 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(w_10)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_9;
      }
    {
      ATerm r_9;
      r_9 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_7, term_s_9, (ATerm) ATinsert(ATempty, not_null(w_10)));
        t = table_put_0(t);
      }
      t = r_9;
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            t = term_x_9;
            return(t);
          }
          t = debug_1(t, c_1);
          return(t);
        }
        t = if_verbose4_1(t, b_1);
        {
          ATerm y_9 = t;
          int z_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(z_9);
            }
          else
            {
              t = y_9;
              t = (ATerm) ATempty;
            }
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = term_a_10;
                return(t);
              }
              t = say_1(t, e_1);
              return(t);
            }
            t = if_verbose6_1(t, d_1);
            {
              ATerm z_10 = NULL;
              z_10 = t;
              if(((y_10 != NULL) && (y_10 != z_10)))
                _fail(z_10);
              else
                y_10 = z_10;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(y_10));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm f_1 (ATerm t)
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = term_b_10;
                        return(t);
                      }
                      t = say_1(t, g_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, f_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_w_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(w_10)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm h_1 (ATerm t)
                          {
                            ATerm k_1 (ATerm t)
                            {
                              t = term_a_10;
                              return(t);
                            }
                            t = say_1(t, k_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, h_1);
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
  ATerm d_11 = NULL;
  d_11 = t;
  t = SSL_getenv(not_null(d_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_10;
      t = get_config_0(t);
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_p_10;
            t = getenv_0(t);
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = term_q_10;
      return(t);
    }
    t = debug_1(t, m_1);
    return(t);
  }
  t = if_verbose5_1(t, l_1);
  {
    ATerm t_10;
    t_10 = t;
    {
      ATerm u_10 = t;
      int v_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_10;
          t = table_get_0(t);
          LocalPopChoice(v_10);
        }
      else
        {
          t = u_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = t_10;
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          t = term_a_11;
          return(t);
        }
        t = debug_1(t, o_1);
        return(t);
      }
      t = if_verbose5_1(t, n_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          t = term_e_11;
          return(t);
        }
        t = debug_1(t, q_1);
        return(t);
      }
      t = if_verbose5_1(t, p_1);
      {
        t = xtc_load_0(t);
        {
          ATerm f_11 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(g_11);
            }
          else
            {
              t = f_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = term_e_11;
                return(t);
              }
              t = debug_1(t, s_1);
              return(t);
            }
            t = if_verbose5_1(t, r_1);
          }
        }
      }
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      {
        ATerm h_11 = NULL;
        ATerm i_11 = NULL;
        i_11 = t;
        if(((h_11 != NULL) && (h_11 != i_11)))
          _fail(i_11);
        else
          h_11 = i_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(h_11)), term_j_11);
          {
            t = error_0(t);
            {
              ATerm t_1 (ATerm t)
              {
                t = term_w_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm u_1 (ATerm t)
                    {
                      t = term_l_11;
                      return(t);
                    }
                    t = debug_1(t, u_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, t_1);
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
ATerm xtc_command_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm m_11 = NULL;
  ATerm q_11;
  q_11 = t;
  {
    ATerm n_11 = NULL;
    t = d_74(t);
    {
      t = xtc_find_0(t);
      {
        n_11 = t;
        if(((m_11 != NULL) && (m_11 != n_11)))
          _fail(n_11);
        else
          m_11 = n_11;
      }
    }
  }
  t = q_11;
  {
    ATerm r_11;
    r_11 = t;
    {
      ATerm o_11 = NULL;
      ATerm p_11 = NULL;
      p_11 = t;
      if(((o_11 != NULL) && (o_11 != p_11)))
        _fail(p_11);
      else
        o_11 = p_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_11), not_null(o_11));
        t = call_0(t);
      }
    }
    t = r_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_74 (ATerm))
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  x_11 = t;
  w_11 :
  if(match_cons(x_11, sym__2))
    {
      y_11 = ATgetArgument(x_11, 0);
      z_11 = ATgetArgument(x_11, 1);
      {
        ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
        ATerm s_11;
        s_11 = t;
        {
          ATerm f_12 = NULL;
          ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
          t = z_74(t);
          {
            f_12 = t;
            {
              if(((c_12 != NULL) && (c_12 != f_12)))
                _fail(f_12);
              else
                c_12 = f_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_12), not_null(y_11), not_null(z_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_11 = t;
                    int u_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_12), term_a_12);
                        t = table_get_0(t);
                        LocalPopChoice(u_11);
                      }
                    else
                      {
                        t = t_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      g_12 = t;
                      v_11 :
                      if(((ATgetType(g_12) == AT_LIST) && !(ATisEmpty(g_12))))
                        {
                          h_12 = ATgetFirst((ATermList) g_12);
                          i_12 = (ATerm) ATgetNext((ATermList) g_12);
                          {
                            if(((d_12 != NULL) && (d_12 != h_12)))
                              _fail(h_12);
                            else
                              d_12 = h_12;
                            {
                              if(((e_12 != NULL) && (e_12 != i_12)))
                                _fail(i_12);
                              else
                                e_12 = i_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_12), term_a_12, (ATerm) ATinsert(CheckATermList(not_null(e_12)), (ATerm) ATinsert(CheckATermList(not_null(d_12)), not_null(y_11))));
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
        t = s_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm b_12;
  b_12 = t;
  {
    t = n_75(t);
    {
      ATerm v_1 (ATerm t)
      {
        t = term_j_12;
        return(t);
      }
      t = debug_1(t, v_1);
    }
  }
  t = b_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
      s_12 = t;
      n_12 :
      if(match_cons(s_12, sym__2))
        {
          t_12 = ATgetArgument(s_12, 0);
          u_12 = ATgetArgument(s_12, 1);
          {
            if(((r_12 != NULL) && (r_12 != t_12)))
              _fail(t_12);
            else
              r_12 = t_12;
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
      LocalPopChoice(l_12);
      t = SSL_open_file(not_null(r_12), not_null(q_12));
    }
  else
    {
      t = k_12;
      {
        ATerm v_12 = NULL;
        ATerm w_12 = NULL;
        ATerm w_1 (ATerm t)
        {
          t = term_m_12;
          return(t);
        }
        t = obsolete_1(t, w_1);
        {
          v_12 = t;
          {
            if(((r_12 != NULL) && (r_12 != v_12)))
              _fail(v_12);
            else
              r_12 = v_12;
            {
              ATerm o_12;
              o_12 = t;
              {
                ATerm x_12 = NULL;
                t = term_p_12;
                {
                  x_12 = t;
                  if(((w_12 != NULL) && (w_12 != x_12)))
                    _fail(x_12);
                  else
                    w_12 = x_12;
                }
              }
              t = o_12;
              t = SSL_open_file(not_null(r_12), not_null(w_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm d_13 = NULL;
  ATerm f_13 = NULL;
  d_13 = t;
  {
    ATerm y_12;
    y_12 = t;
    {
      ATerm g_13 = NULL;
      t = term_z_12;
      {
        g_13 = t;
        if(((f_13 != NULL) && (f_13 != g_13)))
          _fail(g_13);
        else
          f_13 = g_13;
      }
    }
    t = y_12;
    {
      t = SSL_open_file(not_null(d_13), not_null(f_13));
      t = SSL_close_file(not_null(d_13));
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
  ATerm k_13 = NULL;
  ATerm l_13 = NULL;
  t = term_a_13;
  {
    t = new_0(t);
    {
      l_13 = t;
      if(((k_13 != NULL) && (k_13 != l_13)))
        _fail(l_13);
      else
        k_13 = l_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), term_b_13);
    {
      t = conc_strings_0(t);
      {
        ATerm c_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(e_13);
          }
        else
          {
            t = c_13;
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
  ATerm p_13 = NULL;
  t = new_file_0(t);
  {
    p_13 = t;
    {
      ATerm h_13;
      h_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), term_p_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), term_a_13);
            {
              ATerm x_1 (ATerm t)
              {
                t = term_i_13;
                return(t);
              }
              t = assert_1(t, x_1);
            }
          }
        }
      }
      t = h_13;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm z_13 = NULL,a_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym_stdin_0))
    {
      ATerm b_14 = NULL;
      ATerm c_14 = NULL;
      ATerm d_14 = NULL;
      t = xtc_new_file_0(t);
      {
        c_14 = t;
        {
          if(((b_14 != NULL) && (b_14 != c_14)))
            _fail(c_14);
          else
            b_14 = c_14;
          {
            ATerm e_14 = NULL;
            t = o_0(t);
            {
              e_14 = t;
              if(((d_14 != NULL) && (d_14 != e_14)))
                _fail(e_14);
              else
                d_14 = e_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_14)), term_j_13));
              {
                ATerm m_13 = t;
                int n_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(n_13);
                  }
                else
                  {
                    t = m_13;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(b_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_14));
    }
  else
    {
      if(match_cons(z_13, sym_FILE_1))
        {
          a_14 = ATgetArgument(z_13, 0);
          {
            ATerm g_14 = NULL;
            ATerm h_14 = NULL;
            t = not_null(a_14);
            {
              ATerm i_14 = NULL;
              t = xtc_new_file_0(t);
              {
                h_14 = t;
                {
                  if(((g_14 != NULL) && (g_14 != h_14)))
                    _fail(h_14);
                  else
                    g_14 = h_14;
                  {
                    ATerm j_14 = NULL;
                    t = o_0(t);
                    {
                      j_14 = t;
                      if(((i_14 != NULL) && (i_14 != j_14)))
                        _fail(j_14);
                      else
                        i_14 = j_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_14)), term_j_13), not_null(a_14)), term_o_13));
                      {
                        ATerm q_13 = t;
                        int r_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(r_13);
                          }
                        else
                          {
                            t = q_13;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(g_14);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_14));
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
  ATerm u_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym_stdin_0))
    {
      ATerm w_14 = NULL,y_14 = NULL;
      ATerm s_13;
      s_13 = t;
      {
        ATerm x_14 = NULL;
        t = SSLgetAnnotations(not_null(u_14));
        {
          x_14 = t;
          if(((w_14 != NULL) && (w_14 != x_14)))
            _fail(x_14);
          else
            w_14 = x_14;
        }
      }
      t = s_13;
      {
        ATerm z_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(w_14));
        {
          z_14 = t;
          if(((y_14 != NULL) && (y_14 != z_14)))
            _fail(z_14);
          else
            y_14 = z_14;
        }
        t = not_null(y_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm p_52 (ATerm))
{
  ATerm i_15 = NULL,j_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_FILE_1))
    {
      j_15 = ATgetArgument(i_15, 0);
      {
        ATerm m_15 = NULL,o_15 = NULL;
        ATerm n_15 = NULL;
        t = SSLgetAnnotations(not_null(i_15));
        {
          n_15 = t;
          if(((m_15 != NULL) && (m_15 != n_15)))
            _fail(n_15);
          else
            m_15 = n_15;
        }
        {
          t = not_null(j_15);
          {
            ATerm q_15 = NULL;
            t = p_52(t);
            {
              o_15 = t;
              {
                ATerm r_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(o_15)), not_null(m_15));
                {
                  r_15 = t;
                  if(((q_15 != NULL) && (q_15 != r_15)))
                    _fail(r_15);
                  else
                    q_15 = r_15;
                }
                t = not_null(q_15);
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
ATerm xtc_transform_2 (ATerm t, ATerm f_74 (ATerm), ATerm g_74 (ATerm))
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
          t = stdin_0(t);
        }
      LocalPopChoice(u_13);
      t = xtc_transform_file_2(t, f_74, g_74);
    }
  else
    {
      t = t_13;
      t = xtc_transform_term_2(t, f_74, g_74);
    }
  return(t);
}
ATerm astratego2tg_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_x_13;
    return(t);
  }
  t = xtc_transform_2(t, a_2, pass_verbose_0);
  return(t);
}
ATerm pass_includes_0 (ATerm t)
{
  ATerm f_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_14;
      t = get_config_0(t);
      LocalPopChoice(k_14);
    }
  else
    {
      t = f_14;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  t = SSL_int_to_string(not_null(x_15));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym__2))
    {
      d_16 = ATgetArgument(c_16, 0);
      e_16 = ATgetArgument(c_16, 1);
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_16), not_null(e_16));
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
            t = SSL_subtr(not_null(d_16), not_null(e_16));
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
  ATerm k_16 = NULL;
  ATerm l_16 = NULL,n_16 = NULL;
  ATerm m_16 = NULL;
  t = term_o_14;
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = term_t_6;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), term_t_6);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          n_16 = t;
          if(((k_16 != NULL) && (k_16 != n_16)))
            _fail(n_16);
          else
            k_16 = n_16;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_16)), term_o_14);
  return(t);
}
ATerm str2astratego_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = term_r_14;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm u_16 = NULL;
    ATerm v_16 = NULL,x_16 = NULL,z_16 = NULL,b_17 = NULL;
    ATerm s_14;
    s_14 = t;
    {
      ATerm w_16 = NULL;
      t = term_a_13;
      {
        t = pass_keep_0(t);
        {
          w_16 = t;
          if(((v_16 != NULL) && (v_16 != w_16)))
            _fail(w_16);
          else
            v_16 = w_16;
        }
      }
    }
    t = s_14;
    {
      ATerm v_14;
      v_14 = t;
      {
        ATerm y_16 = NULL;
        t = term_a_13;
        {
          t = pass_verbose_0(t);
          {
            y_16 = t;
            if(((x_16 != NULL) && (x_16 != y_16)))
              _fail(y_16);
            else
              x_16 = y_16;
          }
        }
      }
      t = v_14;
      {
        ATerm a_17 = NULL;
        t = term_a_13;
        {
          t = pass_includes_0(t);
          {
            a_17 = t;
            if(((z_16 != NULL) && (z_16 != a_17)))
              _fail(a_17);
            else
              z_16 = a_17;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_16)), not_null(x_16)), not_null(v_16));
          {
            t = concat_0(t);
            {
              b_17 = t;
              if(((u_16 != NULL) && (u_16 != b_17)))
                _fail(b_17);
              else
                u_16 = b_17;
            }
          }
        }
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(u_16)), term_a_15);
    return(t);
  }
  t = xtc_transform_2(t, b_2, c_2);
  return(t);
}
ATerm pre_process_helper_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  i_17 :
  if(match_cons(k_17, sym__2))
    {
      l_17 = ATgetArgument(k_17, 0);
      m_17 = ATgetArgument(k_17, 1);
      j_17 :
      if(match_cons(l_17, sym_AST_0))
        {
          t = not_null(m_17);
        }
      else
        {
          if(match_cons(l_17, sym_Module_0))
            {
              t = not_null(m_17);
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
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_15;
      t = get_config_0(t);
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      t = term_e_15;
    }
  return(t);
}
ATerm pre_process_input_0 (ATerm t)
{
  ATerm t_17 = NULL,v_17 = NULL;
  ATerm f_15;
  f_15 = t;
  {
    ATerm u_17 = NULL;
    u_17 = t;
    if(((t_17 != NULL) && (t_17 != u_17)))
      _fail(u_17);
    else
      t_17 = u_17;
  }
  t = f_15;
  {
    ATerm w_17 = NULL;
    t = term_a_13;
    {
      t = get_input_type_0(t);
      {
        w_17 = t;
        if(((v_17 != NULL) && (v_17 != w_17)))
          _fail(w_17);
        else
          v_17 = w_17;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_17), not_null(t_17));
      t = pre_process_helper_0(t);
    }
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym__2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      {
        ATerm i_18 = NULL;
        ATerm j_18 = NULL,l_18 = NULL;
        ATerm k_18 = NULL;
        t = not_null(e_18);
        {
          ATerm g_15 = t;
          int k_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(k_15);
            }
          else
            {
              t = g_15;
              t = (ATerm) ATempty;
            }
          {
            k_18 = t;
            if(((j_18 != NULL) && (j_18 != k_18)))
              _fail(k_18);
            else
              j_18 = k_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(j_18));
          {
            ATerm l_15 = t;
            int p_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(p_15);
              }
            else
              {
                t = l_15;
                t = conc_more_lists_0(t);
              }
            {
              l_18 = t;
              if(((i_18 != NULL) && (i_18 != l_18)))
                _fail(l_18);
              else
                i_18 = l_18;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_15, not_null(e_18), not_null(i_18));
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
  ATerm d_2 (ATerm t)
  {
    ATerm r_18 = NULL;
    r_18 = t;
    p_18 :
    if(!(match_string(r_18, "-I")))
      {
        if(!(match_string(r_18, "--Include")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm s_18 = NULL;
    ATerm t_18 = NULL;
    t_18 = t;
    if(((s_18 != NULL) && (s_18 != t_18)))
      _fail(t_18);
    else
      s_18 = t_18;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_18)), term_l_14));
      t = extend_config_0(t);
    }
    t = term_a_13;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_t_15;
    return(t);
  }
  t = ArgOption_3(t, d_2, e_2, f_2);
  return(t);
}
ATerm input_type_option_0 (ATerm t)
{
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        ATerm a_19 = NULL;
        a_19 = t;
        v_18 :
        if(!(match_string(a_19, "--ast")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm h_2 (ATerm t)
      {
        ATerm w_15;
        w_15 = t;
        {
          t = term_z_15;
          t = set_config_0(t);
        }
        t = w_15;
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        t = term_a_16;
        return(t);
      }
      t = Option_3(t, g_2, h_2, i_2);
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm b_19 = NULL;
          b_19 = t;
          z_18 :
          if(!(match_string(b_19, "--mod")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_2 (ATerm t)
        {
          ATerm f_16;
          f_16 = t;
          {
            t = term_h_16;
            t = set_config_0(t);
          }
          t = f_16;
          return(t);
        }
        ATerm l_2 (ATerm t)
        {
          t = term_i_16;
          return(t);
        }
        t = Option_3(t, j_2, k_2, l_2);
      }
    }
  return(t);
}
ATerm sig2_options_0 (ATerm t)
{
  ATerm j_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_type_option_0(t);
      LocalPopChoice(o_16);
    }
  else
    {
      t = j_16;
      t = include_option_0(t);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym__2))
    {
      f_19 = ATgetArgument(e_19, 0);
      g_19 = ATgetArgument(e_19, 1);
      t = SSL_copy(not_null(f_19), not_null(g_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm o_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_stderr_0))
    {
      ATerm q_19 = NULL,t_19 = NULL;
      ATerm p_16;
      p_16 = t;
      {
        ATerm r_19 = NULL;
        t = SSLgetAnnotations(not_null(o_19));
        {
          r_19 = t;
          if(((q_19 != NULL) && (q_19 != r_19)))
            _fail(r_19);
          else
            q_19 = r_19;
        }
      }
      t = p_16;
      {
        ATerm u_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(q_19));
        {
          u_19 = t;
          if(((t_19 != NULL) && (t_19 != u_19)))
            _fail(u_19);
          else
            t_19 = u_19;
        }
        t = not_null(t_19);
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
  ATerm h_20 = NULL;
  h_20 = t;
  g_20 :
  if(match_cons(h_20, sym_stdout_0))
    {
      ATerm l_20 = NULL,n_20 = NULL;
      ATerm q_16;
      q_16 = t;
      {
        ATerm m_20 = NULL;
        t = SSLgetAnnotations(not_null(h_20));
        {
          m_20 = t;
          if(((l_20 != NULL) && (l_20 != m_20)))
            _fail(m_20);
          else
            l_20 = m_20;
        }
      }
      t = q_16;
      {
        ATerm o_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(l_20));
        {
          o_20 = t;
          if(((n_20 != NULL) && (n_20 != o_20)))
            _fail(o_20);
          else
            n_20 = o_20;
        }
        t = not_null(n_20);
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
  ATerm f_21 = NULL,g_21 = NULL;
  f_21 = t;
  e_21 :
  if(match_cons(f_21, sym_FILE_1))
    {
      g_21 = ATgetArgument(f_21, 0);
      {
        ATerm r_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_21 = NULL;
            ATerm j_21 = NULL;
            t = m_0(t);
            {
              j_21 = t;
              {
                if(((i_21 != NULL) && (i_21 != j_21)))
                  _fail(j_21);
                else
                  i_21 = j_21;
                {
                  ATerm t_16 = t;
                  int c_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(c_17);
                    }
                  else
                    {
                      t = t_16;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), not_null(i_21));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_21));
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
            {
              ATerm d_17 = t;
              int e_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_21 = NULL;
                  ATerm m_21 = NULL;
                  t = m_0(t);
                  {
                    m_21 = t;
                    {
                      if(((l_21 != NULL) && (l_21 != m_21)))
                        _fail(m_21);
                      else
                        l_21 = m_21;
                      {
                        ATerm f_17 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm g_17 = t;
                            int h_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(h_17);
                              }
                            else
                              {
                                t = g_17;
                                {
                                  ATerm n_17 = t;
                                  int o_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(o_17);
                                    }
                                  else
                                    {
                                      t = n_17;
                                      {
                                        ATerm s_21 = NULL;
                                        s_21 = t;
                                        if(((g_21 != NULL) && (g_21 != s_21)))
                                          _fail(s_21);
                                        else
                                          g_21 = s_21;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = f_17;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), not_null(l_21));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_21));
                  LocalPopChoice(e_17);
                }
              else
                {
                  t = d_17;
                  {
                    ATerm u_21 = NULL;
                    t = m_0(t);
                    {
                      u_21 = t;
                      if(((g_21 != NULL) && (g_21 != u_21)))
                        _fail(u_21);
                      else
                        g_21 = u_21;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_21));
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
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  q_22 :
  if(((ATgetType(r_22) == AT_LIST) && !(ATisEmpty(r_22))))
    {
      s_22 = ATgetFirst((ATermList) r_22);
      t_22 = (ATerm) ATgetNext((ATermList) r_22);
      t = not_null(t_22);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
  z_22 = t;
  y_22 :
  if(match_cons(z_22, sym__2))
    {
      a_23 = ATgetArgument(z_22, 0);
      b_23 = ATgetArgument(z_22, 1);
      {
        ATerm p_17;
        p_17 = t;
        {
          ATerm e_23 = NULL;
          ATerm f_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_23), not_null(b_23));
          {
            ATerm q_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(r_17);
              }
            else
              {
                t = q_17;
                t = (ATerm) ATempty;
              }
            {
              f_23 = t;
              if(((e_23 != NULL) && (e_23 != f_23)))
                _fail(f_23);
              else
                e_23 = f_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_23), not_null(b_23), not_null(e_23));
            t = table_put_0(t);
          }
        }
        t = p_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  ATerm s_17;
  s_17 = t;
  {
    ATerm p_23 = NULL;
    ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
    t = w_74(t);
    {
      p_23 = t;
      {
        if(((o_23 != NULL) && (o_23 != p_23)))
          _fail(p_23);
        else
          o_23 = p_23;
        {
          ATerm x_17 = t;
          int y_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), term_a_12);
              t = table_get_0(t);
              LocalPopChoice(y_17);
            }
          else
            {
              t = x_17;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            q_23 = t;
            l_23 :
            if(((ATgetType(q_23) == AT_LIST) && !(ATisEmpty(q_23))))
              {
                r_23 = ATgetFirst((ATermList) q_23);
                s_23 = (ATerm) ATgetNext((ATermList) q_23);
                {
                  if(((n_23 != NULL) && (n_23 != r_23)))
                    _fail(r_23);
                  else
                    n_23 = r_23;
                  {
                    if(((m_23 != NULL) && (m_23 != s_23)))
                      _fail(s_23);
                    else
                      m_23 = s_23;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(o_23), term_a_12, not_null(m_23));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(n_23);
                          {
                            ATerm m_2 (ATerm t)
                            {
                              ATerm t_23 = NULL;
                              t_23 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(t_23));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, m_2);
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
  t = s_17;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  t = SSL_remove(not_null(e_24));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm g_63 (ATerm), ATerm h_63 (ATerm))
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_63(t);
      t = h_63(t);
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      {
        t = h_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm j_24 = NULL;
  ATerm b_18;
  b_18 = t;
  {
    ATerm k_24 = NULL;
    ATerm l_24 = NULL;
    t = v_74(t);
    {
      k_24 = t;
      {
        if(((j_24 != NULL) && (j_24 != k_24)))
          _fail(k_24);
        else
          j_24 = k_24;
        {
          ATerm m_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), term_a_12);
          {
            ATerm g_18 = t;
            int h_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_18);
              }
            else
              {
                t = g_18;
                t = (ATerm) ATempty;
              }
            {
              m_24 = t;
              if(((l_24 != NULL) && (l_24 != m_24)))
                _fail(m_24);
              else
                l_24 = m_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_24), term_a_12, (ATerm) ATinsert(CheckATermList(not_null(l_24)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = b_18;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm t_73 (ATerm))
{
  ATerm v_24 = NULL,w_24 = NULL;
  ATerm n_2 (ATerm t)
  {
    t = term_i_13;
    return(t);
  }
  t = begin_scope_1(t, n_2);
  {
    ATerm o_2 (ATerm t)
    {
      ATerm m_18;
      m_18 = t;
      {
        ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_18;
            t = table_get_0(t);
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          x_24 = t;
          u_24 :
          if(((ATgetType(x_24) == AT_LIST) && !(ATisEmpty(x_24))))
            {
              y_24 = ATgetFirst((ATermList) x_24);
              z_24 = (ATerm) ATgetNext((ATermList) x_24);
              {
                if(((w_24 != NULL) && (w_24 != y_24)))
                  _fail(y_24);
                else
                  w_24 = y_24;
                {
                  if(((v_24 != NULL) && (v_24 != z_24)))
                    _fail(z_24);
                  else
                    v_24 = z_24;
                  {
                    t = not_null(w_24);
                    {
                      ATerm p_2 (ATerm t)
                      {
                        ATerm u_18 = t;
                        int w_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(w_18);
                          }
                        else
                          {
                            t = u_18;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, p_2);
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
      t = m_18;
      {
        ATerm q_2 (ATerm t)
        {
          t = term_i_13;
          return(t);
        }
        t = end_scope_1(t, q_2);
      }
      return(t);
    }
    t = restore_always_2(t, t_73, o_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_25 = NULL;
        ATerm d_25 = NULL;
        t = term_o_13;
        {
          t = get_config_0(t);
          {
            d_25 = t;
            if(((c_25 != NULL) && (c_25 != d_25)))
              _fail(d_25);
            else
              c_25 = d_25;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_25));
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = term_u_6;
      }
    {
      t = u_73(t);
      {
        ATerm s_2 (ATerm t)
        {
          ATerm c_19 = t;
          int h_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_j_13;
              t = get_config_0(t);
              LocalPopChoice(h_19);
            }
          else
            {
              t = c_19;
              t = term_i_19;
            }
          return(t);
        }
        t = copy_to_1(t, s_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, r_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm g_25 = NULL;
    g_25 = t;
    f_25 :
    if(!(match_string(g_25, "-v")))
      {
        if(!(match_string(g_25, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_k_19;
    t = set_config_0(t);
    t = term_l_19;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_m_19;
    return(t);
  }
  t = Option_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm j_25 = NULL;
    j_25 = t;
    h_25 :
    if(!(match_string(j_25, "-k")))
      {
        if(!(match_string(j_25, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm p_19;
    p_19 = t;
    {
      ATerm k_25 = NULL;
      ATerm l_25 = NULL;
      t = string_to_int_0(t);
      {
        l_25 = t;
        if(((k_25 != NULL) && (k_25 != l_25)))
          _fail(l_25);
        else
          k_25 = l_25;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_14, not_null(k_25));
        t = set_config_0(t);
      }
    }
    t = p_19;
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_s_19;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  t = SSL_string_to_int(not_null(o_25));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        ATerm w_25 = NULL;
        w_25 = t;
        r_25 :
        if(!(match_string(w_25, "-S")))
          {
            if(!(match_string(w_25, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_y_19;
        t = set_config_0(t);
        t = term_z_19;
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_a_20;
        return(t);
      }
      t = Option_3(t, z_2, a_3, b_3);
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              ATerm x_25 = NULL;
              x_25 = t;
              s_25 :
              if(!(match_string(x_25, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              ATerm a_26 = NULL;
              ATerm d_20;
              d_20 = t;
              {
                ATerm y_25 = NULL;
                ATerm z_25 = NULL;
                t = string_to_int_0(t);
                {
                  z_25 = t;
                  if(((y_25 != NULL) && (y_25 != z_25)))
                    _fail(z_25);
                  else
                    y_25 = z_25;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_6, not_null(y_25));
                  t = set_config_0(t);
                }
              }
              t = d_20;
              {
                ATerm b_26 = NULL;
                b_26 = t;
                if(((a_26 != NULL) && (a_26 != b_26)))
                  _fail(b_26);
                else
                  a_26 = b_26;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_26));
              }
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              t = term_e_20;
              return(t);
            }
            t = ArgOption_3(t, h_3, k_3, l_3);
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            {
              ATerm m_3 (ATerm t)
              {
                ATerm c_26 = NULL;
                c_26 = t;
                v_25 :
                if(!(match_string(c_26, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_3 (ATerm t)
              {
                t = term_i_20;
                t = set_config_0(t);
                t = term_j_20;
                return(t);
              }
              ATerm o_3 (ATerm t)
              {
                t = term_k_20;
                return(t);
              }
              t = Option_3(t, m_3, n_3, o_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm i_26 = NULL;
    i_26 = t;
    f_26 :
    if(!(match_string(i_26, "-o")))
      {
        if(!(match_string(i_26, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm l_26 = NULL;
    ATerm t_20;
    t_20 = t;
    {
      ATerm j_26 = NULL;
      ATerm k_26 = NULL;
      k_26 = t;
      if(((j_26 != NULL) && (j_26 != k_26)))
        _fail(k_26);
      else
        j_26 = k_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(j_26));
        t = set_config_0(t);
      }
    }
    t = t_20;
    {
      ATerm m_26 = NULL;
      m_26 = t;
      if(((l_26 != NULL) && (l_26 != m_26)))
        _fail(m_26);
      else
        l_26 = m_26;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_26));
    }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_u_20;
    return(t);
  }
  t = ArgOption_3(t, t_3, u_3, v_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm w_3 (ATerm t)
        {
          ATerm q_26 = NULL;
          q_26 = t;
          p_26 :
          if(!(match_string(q_26, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm x_3 (ATerm t)
        {
          t = term_y_20;
          t = set_config_0(t);
          t = term_z_20;
          return(t);
        }
        ATerm z_3 (ATerm t)
        {
          t = term_a_21;
          return(t);
        }
        t = Option_3(t, w_3, x_3, z_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
  w_26 = t;
  u_26 :
  if(match_string(w_26, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_26) == AT_LIST) && !(ATisEmpty(w_26))))
        {
          x_26 = ATgetFirst((ATermList) w_26);
          y_26 = (ATerm) ATgetNext((ATermList) w_26);
          v_26 :
          if(((ATgetType(y_26) == AT_LIST) && !(ATisEmpty(y_26))))
            {
              z_26 = ATgetFirst((ATermList) y_26);
              a_27 = (ATerm) ATgetNext((ATermList) y_26);
              {
                ATerm e_27 = NULL;
                ATerm b_21;
                b_21 = t;
                {
                  t = not_null(x_26);
                  t = j_0(t);
                }
                t = b_21;
                {
                  ATerm f_27 = NULL;
                  t = not_null(z_26);
                  {
                    t = k_0(t);
                    {
                      f_27 = t;
                      if(((e_27 != NULL) && (e_27 != f_27)))
                        _fail(f_27);
                      else
                        e_27 = f_27;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_27)), not_null(e_27));
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
  ATerm c_4 (ATerm t)
  {
    ATerm m_27 = NULL;
    m_27 = t;
    j_27 :
    if(!(match_string(m_27, "-i")))
      {
        if(!(match_string(m_27, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    ATerm p_27 = NULL;
    ATerm c_21;
    c_21 = t;
    {
      ATerm n_27 = NULL;
      ATerm o_27 = NULL;
      o_27 = t;
      if(((n_27 != NULL) && (n_27 != o_27)))
        _fail(o_27);
      else
        n_27 = o_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_13, not_null(n_27));
        t = set_config_0(t);
      }
    }
    t = c_21;
    {
      ATerm q_27 = NULL;
      q_27 = t;
      if(((p_27 != NULL) && (p_27 != q_27)))
        _fail(q_27);
      else
        p_27 = q_27;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_27));
    }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_d_21;
    return(t);
  }
  t = ArgOption_3(t, c_4, d_4, e_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm h_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = h_21;
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm v_27 = NULL;
  ATerm p_21;
  p_21 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm w_27 = NULL,x_27 = NULL;
      w_27 = t;
      u_27 :
      if(match_cons(w_27, sym_Program_1))
        {
          x_27 = ATgetArgument(w_27, 0);
          if(((v_27 != NULL) && (v_27 != x_27)))
            _fail(x_27);
          else
            v_27 = x_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, g_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_21), not_null(v_27)), term_q_21));
      {
        t = printnl_0(t);
        {
          t = term_t_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATempty, term_t_21));
  {
    t = printnl_0(t);
    {
      t = term_t_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  t = SSL_TicksToSeconds(not_null(a_28));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  e_28 :
  if(match_cons(f_28, sym__2))
    {
      g_28 = ATgetArgument(f_28, 0);
      h_28 = ATgetArgument(f_28, 1);
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_28), not_null(h_28));
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
            t = SSL_addr(not_null(g_28), not_null(h_28));
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
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_70(t);
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
        o_28 = t;
        n_28 :
        if(((ATgetType(o_28) == AT_LIST) && !(ATisEmpty(o_28))))
          {
            p_28 = ATgetFirst((ATermList) o_28);
            q_28 = (ATerm) ATgetNext((ATermList) o_28);
            {
              ATerm t_28 = NULL;
              ATerm u_28 = NULL;
              t = not_null(q_28);
              {
                t = foldr_2(t, v_70, w_70);
                {
                  u_28 = t;
                  if(((t_28 != NULL) && (t_28 != u_28)))
                    _fail(u_28);
                  else
                    t_28 = u_28;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_28), not_null(t_28));
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
  ATerm b_29 = NULL;
  ATerm d_29 = NULL;
  b_29 = t;
  {
    ATerm f_29 = NULL;
    ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
    t = not_null(b_29);
    {
      f_29 = t;
      {
        t = SSL_explode_term(not_null(f_29));
        {
          h_29 = t;
          a_29 :
          if(match_cons(h_29, sym__2))
            {
              i_29 = ATgetArgument(h_29, 0);
              j_29 = ATgetArgument(h_29, 1);
              if(((d_29 != NULL) && (d_29 != j_29)))
                _fail(j_29);
              else
                d_29 = j_29;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_29);
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
    ATerm h_4 (ATerm t)
    {
      t = term_x_19;
      return(t);
    }
    t = crush_2(t, h_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  t_29 :
  if(match_cons(u_29, sym__2))
    {
      v_29 = ATgetArgument(u_29, 0);
      w_29 = ATgetArgument(u_29, 1);
      {
        ATerm z_21;
        z_21 = t;
        {
          ATerm a_22 = t;
          int b_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_29), not_null(w_29));
              LocalPopChoice(b_22);
            }
          else
            {
              t = a_22;
              t = SSL_gtr(not_null(v_29), not_null(w_29));
            }
        }
        t = z_21;
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
  ATerm c_30 = NULL;
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
      d_30 = t;
      b_30 :
      if(match_cons(d_30, sym__2))
        {
          e_30 = ATgetArgument(d_30, 0);
          f_30 = ATgetArgument(d_30, 1);
          {
            if(((c_30 != NULL) && (c_30 != e_30)))
              _fail(e_30);
            else
              c_30 = e_30;
            if(((c_30 != NULL) && (c_30 != f_30)))
              _fail(f_30);
            else
              c_30 = f_30;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_22;
      g_22 = t;
      {
        ATerm k_30 = NULL;
        ATerm l_30 = NULL;
        t = term_m_6;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), term_t_6);
          t = geq_0(t);
        }
      }
      t = g_22;
      t = d_59(t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm p_30 = NULL,r_30 = NULL;
    ATerm h_22;
    h_22 = t;
    {
      ATerm q_30 = NULL;
      t = run_time_0(t);
      {
        q_30 = t;
        if(((p_30 != NULL) && (p_30 != q_30)))
          _fail(q_30);
        else
          p_30 = q_30;
      }
    }
    t = h_22;
    {
      ATerm s_30 = NULL;
      t = term_i_22;
      {
        t = get_config_0(t);
        {
          s_30 = t;
          if(((r_30 != NULL) && (r_30 != s_30)))
            _fail(s_30);
          else
            r_30 = s_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_22), not_null(p_30)), term_j_22), not_null(r_30)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, i_4);
  {
    t = term_x_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym_Version_0))
    {
      ATerm b_31 = NULL,d_31 = NULL;
      ATerm l_22;
      l_22 = t;
      {
        ATerm c_31 = NULL;
        t = SSLgetAnnotations(not_null(z_30));
        {
          c_31 = t;
          if(((b_31 != NULL) && (b_31 != c_31)))
            _fail(c_31);
          else
            b_31 = c_31;
        }
      }
      t = l_22;
      {
        ATerm e_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_31));
        {
          e_31 = t;
          if(((d_31 != NULL) && (d_31 != e_31)))
            _fail(e_31);
          else
            d_31 = e_31;
        }
        t = not_null(d_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          ATerm o_22 = t;
          int p_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(p_22);
            }
          else
            {
              t = o_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, n_4);
  t = f_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  t = SSL_table_create(not_null(j_31));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_31 = NULL;
  n_31 = t;
  {
    ATerm u_22;
    u_22 = t;
    {
      t = term_v_22;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_22, term_w_22, not_null(n_31));
          t = table_put_0(t);
        }
      }
    }
    t = u_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  t = SSL_table_destroy(not_null(r_31));
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
  ATerm d_32 = NULL,j_32 = NULL,k_32 = NULL;
  d_32 = t;
  c_32 :
  if(((ATgetType(d_32) == AT_LIST) && ATisEmpty(d_32)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_32) == AT_LIST) && !(ATisEmpty(d_32))))
        {
          j_32 = ATgetFirst((ATermList) d_32);
          k_32 = (ATerm) ATgetNext((ATermList) d_32);
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
  ATerm x_22;
  x_22 = t;
  {
    ATerm p_32 = NULL;
    ATerm s_32 = NULL;
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
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
      if(((p_32 != NULL) && (p_32 != s_32)))
        _fail(s_32);
      else
        p_32 = s_32;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_19, not_null(p_32));
      t = printnl_0(t);
    }
  }
  t = x_22;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  f_33 = t;
  c_33 :
  if(((ATgetType(f_33) == AT_LIST) && !(ATisEmpty(f_33))))
    {
      d_33 = ATgetFirst((ATermList) f_33);
      e_33 = (ATerm) ATgetNext((ATermList) f_33);
      {
        ATerm s_33 = NULL;
        t = not_null(e_33);
        {
          ATerm g_23;
          g_23 = t;
          {
            ATerm t_33 = NULL,v_33 = NULL,a_34 = NULL;
            ATerm h_23;
            h_23 = t;
            {
              ATerm u_33 = NULL;
              t = i_0(t);
              {
                u_33 = t;
                if(((t_33 != NULL) && (t_33 != u_33)))
                  _fail(u_33);
                else
                  t_33 = u_33;
              }
            }
            t = h_23;
            {
              ATerm x_33 = NULL;
              t = not_null(d_33);
              {
                t = h_0(t);
                {
                  x_33 = t;
                  if(((v_33 != NULL) && (v_33 != x_33)))
                    _fail(x_33);
                  else
                    v_33 = x_33;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_33)), not_null(v_33));
                {
                  a_34 = t;
                  if(((s_33 != NULL) && (s_33 != a_34)))
                    _fail(a_34);
                  else
                    s_33 = a_34;
                }
              }
            }
          }
          t = g_23;
          {
            ATerm o_4 (ATerm t)
            {
              t = not_null(s_33);
              return(t);
            }
            t = reverse_acc_2(t, h_0, o_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_33) == AT_LIST) && ATisEmpty(f_33)))
        {
          {
            t = term_a_13;
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
  ATerm p_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_57 (ATerm))
{
  ATerm z_34 = NULL,e_35 = NULL;
  z_34 = t;
  y_34 :
  if(match_cons(z_34, sym_Program_1))
    {
      e_35 = ATgetArgument(z_34, 0);
      {
        ATerm j_35 = NULL,l_35 = NULL;
        ATerm k_35 = NULL;
        t = SSLgetAnnotations(not_null(z_34));
        {
          k_35 = t;
          if(((j_35 != NULL) && (j_35 != k_35)))
            _fail(k_35);
          else
            j_35 = k_35;
        }
        {
          t = not_null(e_35);
          {
            ATerm q_35 = NULL;
            t = o_57(t);
            {
              l_35 = t;
              {
                ATerm r_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_35)), not_null(j_35));
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
  ATerm z_35 = NULL;
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_36 = NULL;
      t = term_i_22;
      {
        t = get_config_0(t);
        {
          a_36 = t;
          if(((z_35 != NULL) && (z_35 != a_36)))
            _fail(a_36);
          else
            z_35 = a_36;
        }
      }
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      {
        ATerm q_4 (ATerm t)
        {
          ATerm s_4 (ATerm t)
          {
            ATerm b_36 = NULL;
            b_36 = t;
            if(((z_35 != NULL) && (z_35 != b_36)))
              _fail(b_36);
            else
              z_35 = b_36;
            return(t);
          }
          t = Program_1(t, s_4);
          return(t);
        }
        t = fetch_1(t, q_4);
      }
    }
  {
    t = term_k_23;
    {
      t = echo_0(t);
      {
        t = term_w_23;
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
                ATerm c_36 = NULL;
                ATerm d_36 = NULL;
                d_36 = t;
                if(((c_36 != NULL) && (c_36 != d_36)))
                  _fail(d_36);
                else
                  c_36 = d_36;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_36)), term_x_23);
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
  ATerm y_23;
  y_23 = t;
  {
    ATerm i_36 = NULL;
    ATerm j_36 = NULL;
    j_36 = t;
    if(((i_36 != NULL) && (i_36 != j_36)))
      _fail(j_36);
    else
      i_36 = j_36;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATempty, not_null(i_36)));
      t = printnl_0(t);
    }
  }
  t = y_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm z_23;
  z_23 = t;
  {
    t = h_75(t);
    t = debug_0(t);
  }
  t = z_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm q_36 = NULL,r_36 = NULL;
  q_36 = t;
  p_36 :
  if(match_cons(q_36, sym_Undefined_1))
    {
      r_36 = ATgetArgument(q_36, 0);
      {
        ATerm u_36 = NULL,w_36 = NULL;
        ATerm v_36 = NULL;
        t = SSLgetAnnotations(not_null(q_36));
        {
          v_36 = t;
          if(((u_36 != NULL) && (u_36 != v_36)))
            _fail(v_36);
          else
            u_36 = v_36;
        }
        {
          t = not_null(r_36);
          {
            ATerm y_36 = NULL;
            t = p_57(t);
            {
              w_36 = t;
              {
                ATerm z_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_36)), not_null(u_36));
                {
                  z_36 = t;
                  if(((y_36 != NULL) && (y_36 != z_36)))
                    _fail(z_36);
                  else
                    y_36 = z_36;
                }
                t = not_null(y_36);
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
ATerm fetch_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm e_37 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_64, _id);
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = Cons_2(t, _id, e_37);
      }
    return(t);
  }
  t = e_37(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_79 (ATerm))
{
  t = fetch_1(t, m_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym_Help_0))
    {
      ATerm l_37 = NULL,n_37 = NULL;
      ATerm c_24;
      c_24 = t;
      {
        ATerm m_37 = NULL;
        t = SSLgetAnnotations(not_null(j_37));
        {
          m_37 = t;
          if(((l_37 != NULL) && (l_37 != m_37)))
            _fail(m_37);
          else
            l_37 = m_37;
        }
      }
      t = c_24;
      {
        ATerm o_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_37));
        {
          o_37 = t;
          if(((n_37 != NULL) && (n_37 != o_37)))
            _fail(o_37);
          else
            n_37 = o_37;
        }
        t = not_null(n_37);
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
  ATerm t_37 = NULL;
  t_37 = t;
  t = SSL_implode_string(not_null(t_37));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = d_24;
      {
        ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
        y_37 = t;
        x_37 :
        if(((ATgetType(y_37) == AT_LIST) && !(ATisEmpty(y_37))))
          {
            z_37 = ATgetFirst((ATermList) y_37);
            a_38 = (ATerm) ATgetNext((ATermList) y_37);
            {
              t = not_null(z_37);
              {
                ATerm v_4 (ATerm t)
                {
                  t = not_null(a_38);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_4);
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
  ATerm k_38 = NULL;
  ATerm m_38 = NULL;
  k_38 = t;
  {
    ATerm n_38 = NULL;
    ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
    t = not_null(k_38);
    {
      n_38 = t;
      {
        t = SSL_explode_term(not_null(n_38));
        {
          p_38 = t;
          i_38 :
          if(match_cons(p_38, sym__2))
            {
              q_38 = ATgetArgument(p_38, 0);
              r_38 = ATgetArgument(p_38, 1);
              j_38 :
              if(match_string(q_38, ""))
                {
                  if(((m_38 != NULL) && (m_38 != r_38)))
                    _fail(r_38);
                  else
                    m_38 = r_38;
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
      t = not_null(m_38);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm v_38 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_38);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          t = Nil_0(t);
          t = w_64(t);
        }
      }
    return(t);
  }
  t = v_38(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  y_38 = t;
  x_38 :
  if(match_cons(y_38, sym__2))
    {
      z_38 = ATgetArgument(y_38, 0);
      a_39 = ATgetArgument(y_38, 1);
      {
        t = not_null(z_38);
        {
          ATerm w_4 (ATerm t)
          {
            t = not_null(a_39);
            return(t);
          }
          t = at_end_1(t, w_4);
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
  ATerm i_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(n_24);
    }
  else
    {
      t = i_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm f_39 = NULL;
  f_39 = t;
  t = SSL_explode_string(not_null(f_39));
  return(t);
}
ATerm _2 (ATerm t, ATerm t_50 (ATerm), ATerm u_50 (ATerm))
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  o_39 = t;
  n_39 :
  if(match_cons(o_39, sym__2))
    {
      p_39 = ATgetArgument(o_39, 0);
      q_39 = ATgetArgument(o_39, 1);
      {
        ATerm u_39 = NULL,w_39 = NULL;
        ATerm v_39 = NULL;
        t = SSLgetAnnotations(not_null(o_39));
        {
          v_39 = t;
          if(((u_39 != NULL) && (u_39 != v_39)))
            _fail(v_39);
          else
            u_39 = v_39;
        }
        {
          t = not_null(p_39);
          {
            ATerm y_39 = NULL;
            t = t_50(t);
            {
              w_39 = t;
              {
                t = not_null(q_39);
                {
                  ATerm a_40 = NULL;
                  t = u_50(t);
                  {
                    y_39 = t;
                    {
                      ATerm b_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_39), not_null(y_39)), not_null(u_39));
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
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(p_24);
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
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym__2))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      {
        ATerm q_24;
        q_24 = t;
        t = SSL_printnl(not_null(n_40), not_null(o_40));
        t = q_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm r_24;
  r_24 = t;
  {
    ATerm u_40 = NULL,w_40 = NULL;
    ATerm s_24;
    s_24 = t;
    {
      ATerm v_40 = NULL;
      t = g_75(t);
      {
        v_40 = t;
        if(((u_40 != NULL) && (u_40 != v_40)))
          _fail(v_40);
        else
          u_40 = v_40;
      }
    }
    t = s_24;
    {
      ATerm x_40 = NULL;
      x_40 = t;
      if(((w_40 != NULL) && (w_40 != x_40)))
        _fail(x_40);
      else
        w_40 = x_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_40)), not_null(u_40)));
        t = printnl_0(t);
      }
    }
  }
  t = r_24;
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_64 (ATerm))
{
  ATerm c_41 (ATerm t)
  {
    ATerm t_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = t_24;
        t = Cons_2(t, h_64, c_41);
      }
    return(t);
  }
  t = c_41(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_41 = NULL;
  e_41 = t;
  t = SSL_is_string(not_null(e_41));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(e_25);
    }
  else
    {
      t = b_25;
      {
        ATerm i_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 (ATerm t)
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
            t = map_1(t, y_4);
            LocalPopChoice(m_25);
          }
        else
          {
            t = i_25;
            {
              ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
              r_41 = t;
              q_41 :
              if(match_cons(r_41, sym_Path_1))
                {
                  s_41 = ATgetArgument(r_41, 0);
                  t = not_null(s_41);
                }
              else
                {
                  if(match_cons(r_41, sym_Var_1))
                    {
                      s_41 = ATgetArgument(r_41, 0);
                      {
                        t = not_null(s_41);
                        {
                          ATerm q_25 = t;
                          int t_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(t_25);
                            }
                          else
                            {
                              t = q_25;
                              {
                                ATerm c_5 (ATerm t)
                                {
                                  t = term_u_25;
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
                      if(match_cons(r_41, sym_Prefix_2))
                        {
                          s_41 = ATgetArgument(r_41, 0);
                          t_41 = ATgetArgument(r_41, 1);
                          {
                            ATerm y_41 = NULL,a_42 = NULL;
                            ATerm d_26;
                            d_26 = t;
                            {
                              ATerm z_41 = NULL;
                              t = not_null(s_41);
                              {
                                t = eval_config_0(t);
                                {
                                  z_41 = t;
                                  if(((y_41 != NULL) && (y_41 != z_41)))
                                    _fail(z_41);
                                  else
                                    y_41 = z_41;
                                }
                              }
                            }
                            t = d_26;
                            {
                              ATerm b_42 = NULL;
                              t = not_null(t_41);
                              {
                                t = eval_config_0(t);
                                {
                                  b_42 = t;
                                  if(((a_42 != NULL) && (a_42 != b_42)))
                                    _fail(b_42);
                                  else
                                    a_42 = b_42;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_41), not_null(a_42));
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
  ATerm m_42 = NULL;
  m_42 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_15, not_null(m_42));
    {
      t = table_get_0(t);
      {
        ATerm e_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm h_26;
              h_26 = t;
              {
                ATerm p_42 = NULL;
                ATerm q_42 = NULL;
                q_42 = t;
                if(((p_42 != NULL) && (p_42 != q_42)))
                  _fail(q_42);
                else
                  p_42 = q_42;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_s_15, not_null(m_42), not_null(p_42));
                  t = table_put_0(t);
                }
              }
              t = h_26;
            }
            LocalPopChoice(g_26);
          }
        else
          {
            t = e_26;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_62(t);
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym__2))
    {
      w_42 = ATgetArgument(v_42, 0);
      x_42 = ATgetArgument(v_42, 1);
      t = SSL_table_get(not_null(w_42), not_null(x_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_cons(e_43, sym__3))
    {
      f_43 = ATgetArgument(e_43, 0);
      g_43 = ATgetArgument(e_43, 1);
      h_43 = ATgetArgument(e_43, 2);
      {
        ATerm r_26;
        r_26 = t;
        {
          ATerm l_43 = NULL;
          ATerm m_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_43), not_null(g_43));
          {
            ATerm s_26 = t;
            int t_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_26);
              }
            else
              {
                t = s_26;
                t = (ATerm) ATempty;
              }
            {
              m_43 = t;
              if(((l_43 != NULL) && (l_43 != m_43)))
                _fail(m_43);
              else
                l_43 = m_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_43), not_null(g_43), (ATerm) ATinsert(CheckATermList(not_null(l_43)), not_null(h_43)));
            t = table_put_0(t);
          }
        }
        t = r_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm q_43 = NULL;
  ATerm r_43 = NULL;
  t = term_a_13;
  {
    t = r_80(t);
    {
      r_43 = t;
      if(((q_43 != NULL) && (q_43 != r_43)))
        _fail(r_43);
      else
        q_43 = r_43;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_23, term_v_23, not_null(q_43));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  x_43 = t;
  w_43 :
  if(match_string(x_43, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(x_43) == AT_LIST) && !(ATisEmpty(x_43))))
        {
          y_43 = ATgetFirst((ATermList) x_43);
          z_43 = (ATerm) ATgetNext((ATermList) x_43);
          {
            ATerm c_44 = NULL;
            ATerm b_27;
            b_27 = t;
            {
              t = not_null(y_43);
              t = a_0(t);
            }
            t = b_27;
            {
              ATerm d_44 = NULL;
              t = term_a_13;
              {
                t = d_0(t);
                {
                  d_44 = t;
                  if(((c_44 != NULL) && (c_44 != d_44)))
                    _fail(d_44);
                  else
                    c_44 = d_44;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_43)), not_null(c_44));
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
  ATerm e_5 (ATerm t)
  {
    ATerm i_44 = NULL;
    i_44 = t;
    h_44 :
    if(!(match_string(i_44, "--help")))
      {
        if(!(match_string(i_44, "-h")))
          {
            if(!(match_string(i_44, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_d_27;
    {
      t = set_config_0(t);
      t = term_g_27;
    }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_h_27;
    return(t);
  }
  t = Option_3(t, e_5, k_5, l_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
  l_44 = t;
  k_44 :
  if(((ATgetType(l_44) == AT_LIST) && !(ATisEmpty(l_44))))
    {
      m_44 = ATgetFirst((ATermList) l_44);
      n_44 = (ATerm) ATgetNext((ATermList) l_44);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_44)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_44)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_52 (ATerm), ATerm d_52 (ATerm))
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  e_45 = t;
  c_45 :
  if(((ATgetType(e_45) == AT_LIST) && !(ATisEmpty(e_45))))
    {
      f_45 = ATgetFirst((ATermList) e_45);
      g_45 = (ATerm) ATgetNext((ATermList) e_45);
      {
        ATerm l_45 = NULL,s_45 = NULL;
        ATerm r_45 = NULL;
        t = SSLgetAnnotations(not_null(e_45));
        {
          r_45 = t;
          if(((l_45 != NULL) && (l_45 != r_45)))
            _fail(r_45);
          else
            l_45 = r_45;
        }
        {
          t = not_null(f_45);
          {
            ATerm u_45 = NULL;
            t = c_52(t);
            {
              s_45 = t;
              {
                t = not_null(g_45);
                {
                  ATerm w_45 = NULL;
                  t = d_52(t);
                  {
                    u_45 = t;
                    {
                      ATerm x_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(u_45)), not_null(s_45)), not_null(l_45));
                      {
                        x_45 = t;
                        if(((w_45 != NULL) && (w_45 != x_45)))
                          _fail(x_45);
                        else
                          w_45 = x_45;
                      }
                      t = not_null(w_45);
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
  ATerm l_46 = NULL;
  l_46 = t;
  k_46 :
  if(((ATgetType(l_46) == AT_LIST) && ATisEmpty(l_46)))
    {
      {
        ATerm n_46 = NULL,p_46 = NULL;
        ATerm i_27;
        i_27 = t;
        {
          ATerm o_46 = NULL;
          t = SSLgetAnnotations(not_null(l_46));
          {
            o_46 = t;
            if(((n_46 != NULL) && (n_46 != o_46)))
              _fail(o_46);
            else
              n_46 = o_46;
          }
        }
        t = i_27;
        {
          ATerm q_46 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_46));
          {
            q_46 = t;
            if(((p_46 != NULL) && (p_46 != q_46)))
              _fail(q_46);
            else
              p_46 = q_46;
          }
          t = not_null(p_46);
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
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  w_46 = t;
  v_46 :
  if(match_cons(w_46, sym__2))
    {
      x_46 = ATgetArgument(w_46, 0);
      y_46 = ATgetArgument(w_46, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_15, not_null(x_46), not_null(y_46));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_80 (ATerm))
{
  ATerm k_27;
  k_27 = t;
  {
    ATerm l_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_27;
        t = p_80(t);
        LocalPopChoice(r_27);
      }
    else
      {
        t = l_27;
        {
        }
      }
  }
  t = k_27;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm g_47 = NULL;
      ATerm t_27;
      t_27 = t;
      {
        ATerm e_47 = NULL;
        ATerm f_47 = NULL;
        f_47 = t;
        if(((e_47 != NULL) && (e_47 != f_47)))
          _fail(f_47);
        else
          e_47 = f_47;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_22, not_null(e_47));
          t = set_config_0(t);
        }
      }
      t = t_27;
      {
        ATerm h_47 = NULL;
        h_47 = t;
        if(((g_47 != NULL) && (g_47 != h_47)))
          _fail(h_47);
        else
          g_47 = h_47;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_47));
      }
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      ATerm y_27 = t;
      int z_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_28 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_28);
            }
          else
            {
              t = b_28;
              {
                t = p_80(t);
                t = Cons_2(t, _id, n_5);
              }
            }
          LocalPopChoice(z_27);
        }
      else
        {
          t = y_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_5, n_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
  ATerm d_28;
  d_28 = t;
  {
    ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL;
    q_47 = t;
    m_47 :
    if(match_cons(q_47, sym__3))
      {
        r_47 = ATgetArgument(q_47, 0);
        s_47 = ATgetArgument(q_47, 1);
        t_47 = ATgetArgument(q_47, 2);
        {
          if(((n_47 != NULL) && (n_47 != r_47)))
            _fail(r_47);
          else
            n_47 = r_47;
          {
            if(((o_47 != NULL) && (o_47 != s_47)))
              _fail(s_47);
            else
              o_47 = s_47;
            {
              if(((p_47 != NULL) && (p_47 != t_47)))
                _fail(t_47);
              else
                p_47 = t_47;
              t = SSL_table_put(not_null(n_47), not_null(o_47), not_null(p_47));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm w_47 = NULL;
  ATerm i_28;
  i_28 = t;
  {
    t = term_j_28;
    t = table_put_0(t);
  }
  t = i_28;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm k_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_80(t);
          LocalPopChoice(l_28);
        }
      else
        {
          t = k_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_5);
    {
      ATerm m_28 = t;
      int r_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_28;
          s_28 = t;
          {
            ATerm v_28 = t;
            int w_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_c_27;
                t = get_config_0(t);
                LocalPopChoice(w_28);
              }
            else
              {
                t = v_28;
                t = fetch_1(t, Help_0);
              }
          }
          t = s_28;
          {
            t = system_usage_0(t);
            {
              t = term_x_19;
              t = exit_0(t);
            }
          }
          LocalPopChoice(r_28);
        }
      else
        {
          t = m_28;
          {
            ATerm x_28 = t;
            int y_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm u_5 (ATerm t)
                  {
                    ATerm x_47 = NULL;
                    x_47 = t;
                    if(((w_47 != NULL) && (w_47 != x_47)))
                      _fail(x_47);
                    else
                      w_47 = x_47;
                    return(t);
                  }
                  t = Undefined_1(t, u_5);
                  return(t);
                }
                t = fetch_1(t, t_5);
                {
                  ATerm v_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_47)), term_z_28);
                    return(t);
                  }
                  t = say_1(t, v_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_t_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(y_28);
              }
            else
              {
                t = x_28;
                {
                }
              }
          }
        }
      {
        ATerm c_29;
        c_29 = t;
        {
          t = term_u_23;
          t = table_destroy_0(t);
        }
        t = c_29;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm))
{
  t = parse_options_1(t, l_78);
  {
    t = store_options_0(t);
    {
      t = n_78(t);
      {
        ATerm e_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_78);
            LocalPopChoice(g_29);
          }
        else
          {
            t = e_29;
            {
              ATerm k_29 = t;
              int l_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_78(t);
                  t = report_success_0(t);
                  LocalPopChoice(l_29);
                }
              else
                {
                  t = k_29;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm p_78 (ATerm), ATerm q_78 (ATerm))
{
  t = option_wrap_4(t, p_78, default_usage_0, _id, q_78);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm y_73 (ATerm), ATerm z_73 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_73(t);
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = xtc_io_1(t, z_73);
    return(t);
  }
  t = option_wrap_2(t, w_5, y_5);
  return(t);
}
ATerm str_tg_str_wrap_1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_type_option_0(t);
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        t = include_option_0(t);
      }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = pre_process_input_0(t);
    {
      t = astratego2tg_0(t);
      {
        t = xtc_transform_2(t, x_57, pass_verbose_0);
        t = pp_astratego_0(t);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, z_5, a_6);
  return(t);
}
ATerm io_sig2fold_strategy_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    t = term_q_29;
    return(t);
  }
  t = str_tg_str_wrap_1(t, b_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    t = term_q_29;
    return(t);
  }
  t = str_tg_str_wrap_1(t, c_6);
  return(t);
}