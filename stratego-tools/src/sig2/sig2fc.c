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
ATerm term_o_28;
ATerm term_z_27;
ATerm term_f_27;
ATerm term_m_26;
ATerm term_f_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_f_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_o_17;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_i_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_b_12;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_x_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_s_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_m_8;
ATerm term_c_8;
ATerm term_w_7;
ATerm term_r_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_z_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_g_6;
ATerm term_e_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
void init_constant_terms (void)
{
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_r_7);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_j_9);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("astratego2tg", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Module_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_q_14, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast          Input is Stratego AST.", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_r_14);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod          Input is Stratego module (.str, .cr, .r or .rtree) (default).", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_r_11);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_o_12);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_s_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_o_12);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_o_12);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_o_12);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__3, term_k_22, term_l_22, (ATerm) ATempty);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("tg2fc", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm s_73 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm ast2abox_0 (ATerm);
ATerm stratego_ensugar_0 (ATerm);
ATerm pp_astratego_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm o_58 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm w_58 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm v_58 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm x_58 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm x_69 (ATerm), ATerm y_69 (ATerm));
ATerm union_1 (ATerm, ATerm t_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm g_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm r_73 (ATerm));
ATerm assert_1 (ATerm, ATerm n_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm b_75 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm e_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm t_73 (ATerm), ATerm u_73 (ATerm));
ATerm astratego2tg_0 (ATerm);
ATerm pass_includes_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm str2astratego_0 (ATerm);
ATerm pre_process_helper_0 (ATerm);
ATerm get_input_type_0 (ATerm);
ATerm pre_process_input_0 (ATerm);
ATerm input_type_option_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm k_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm v_62 (ATerm), ATerm w_62 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm j_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm h_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm i_73 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm k_70 (ATerm), ATerm l_70 (ATerm));
ATerm crush_2 (ATerm, ATerm i_69 (ATerm), ATerm j_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_77 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_80 (ATerm));
ATerm Program_1 (ATerm, ATerm d_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm v_74 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm i_50 (ATerm), ATerm j_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_74 (ATerm));
ATerm map_1 (ATerm, ATerm w_63 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_51 (ATerm), ATerm s_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm d_78 (ATerm), ATerm e_78 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm m_73 (ATerm), ATerm n_73 (ATerm));
ATerm str_tg_str_wrap_1 (ATerm, ATerm m_57 (ATerm));
ATerm io_sig2fc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm s_73 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, s_73, b_0);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_z_5;
    return(t);
  }
  t = xtc_transform_1(t, c_0);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = term_a_6;
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    ATerm e_0 = NULL;
    ATerm w_0 = NULL;
    t = term_b_6;
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
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_0)), term_c_6);
    return(t);
  }
  t = xtc_transform_2(t, f_0, p_0);
  return(t);
}
ATerm stratego_ensugar_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = term_e_6;
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
        t = term_z_5;
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
  t = term_g_6;
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        t = term_l_6;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_1), term_l_6);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_1)), term_g_6);
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
      t = term_m_6;
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
ATerm xtc_transform_term_2 (ATerm t, ATerm a_74 (ATerm), ATerm b_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, a_74, b_74);
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
ATerm fork_and_wait_1 (ATerm t, ATerm o_58 (ATerm))
{
  ATerm b_5 = NULL;
  ATerm d_5 = NULL;
  b_5 = t;
  {
    t = fork_0(t);
    {
      d_5 = t;
      {
        ATerm p_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 = NULL;
            f_5 = t;
            x_4 :
            if(match_int(f_5, 0))
              {
                t = not_null(b_5);
                t = o_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(q_6);
          }
        else
          {
            t = p_6;
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
ATerm if_verbose5_1 (ATerm t, ATerm w_58 (ATerm))
{
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_6;
      v_6 = t;
      {
        ATerm n_6 = NULL;
        ATerm o_6 = NULL;
        t = term_g_6;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_6), term_z_6);
          t = geq_0(t);
        }
      }
      t = v_6;
      t = w_58(t);
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm h_7;
  h_7 = t;
  {
    ATerm r_6 = NULL;
    ATerm s_6 = NULL;
    s_6 = t;
    if(((r_6 != NULL) && (r_6 != s_6)))
      _fail(s_6);
    else
      r_6 = s_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_7, not_null(r_6));
      t = printnl_0(t);
    }
  }
  t = h_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm y_6 = NULL;
  ATerm a_7 = NULL,b_7 = NULL;
  y_6 = t;
  {
    ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_6)));
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
        t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_7)));
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
  ATerm k_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_7;
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
      LocalPopChoice(q_7);
    }
  else
    {
      t = k_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm v_58 (ATerm))
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_8;
      b_8 = t;
      {
        ATerm z_7 = NULL;
        ATerm a_8 = NULL;
        t = term_g_6;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), term_c_8);
          t = geq_0(t);
        }
      }
      t = b_8;
      t = v_58(t);
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
ATerm if_verbose6_1 (ATerm t, ATerm x_58 (ATerm))
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_8;
      l_8 = t;
      {
        ATerm d_8 = NULL;
        ATerm e_8 = NULL;
        t = term_g_6;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), term_m_8);
          t = geq_0(t);
        }
      }
      t = l_8;
      t = x_58(t);
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
ATerm HdMember_p__2 (ATerm t, ATerm x_69 (ATerm), ATerm y_69 (ATerm))
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  p_8 :
  if(((ATgetType(q_8) == AT_LIST) && !(ATisEmpty(q_8))))
    {
      r_8 = ATgetFirst((ATermList) q_8);
      s_8 = (ATerm) ATgetNext((ATermList) q_8);
      {
        t = y_69(t);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm v_8 = NULL;
            v_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_8), not_null(v_8));
              t = x_69(t);
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
ATerm union_1 (ATerm t, ATerm t_69 (ATerm))
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
            ATerm n_8 = t;
            int o_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(d_9);
                LocalPopChoice(o_8);
              }
            else
              {
                t = n_8;
                {
                  ATerm t_8 = t;
                  int u_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_0 (ATerm t)
                      {
                        t = not_null(d_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_69, y_0);
                      t = h_9(t);
                      LocalPopChoice(u_8);
                    }
                  else
                    {
                      t = t_8;
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
        ATerm w_8;
        w_8 = t;
        {
          ATerm t_9 = NULL;
          ATerm u_9 = NULL,w_9 = NULL;
          ATerm v_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(o_9));
          {
            ATerm x_8 = t;
            int y_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_8);
              }
            else
              {
                t = x_8;
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
        t = w_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm g_59 (ATerm))
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
                  t = g_59(t);
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
  ATerm z_8 = t;
  int e_9 = stack_ptr;
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
      LocalPopChoice(e_9);
    }
  else
    {
      t = z_8;
      {
        ATerm a_1 (ATerm t)
        {
          t = term_f_9;
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
    ATerm g_9 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(w_10)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_9;
      }
    {
      ATerm i_9;
      i_9 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_7, term_j_9, (ATerm) ATinsert(ATempty, not_null(w_10)));
        t = table_put_0(t);
      }
      t = i_9;
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            t = term_k_9;
            return(t);
          }
          t = debug_1(t, c_1);
          return(t);
        }
        t = if_verbose4_1(t, b_1);
        {
          ATerm q_9 = t;
          int r_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(r_9);
            }
          else
            {
              t = q_9;
              t = (ATerm) ATempty;
            }
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = term_s_9;
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
                t = (ATerm) ATmakeAppl(sym__2, term_j_7, not_null(y_10));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm f_1 (ATerm t)
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = term_x_9;
                        return(t);
                      }
                      t = say_1(t, g_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, f_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_j_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(w_10)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm h_1 (ATerm t)
                          {
                            ATerm k_1 (ATerm t)
                            {
                              t = term_s_9;
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
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_10;
      t = get_config_0(t);
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm b_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_10;
            t = getenv_0(t);
            LocalPopChoice(h_10);
          }
        else
          {
            t = b_10;
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
      t = term_m_10;
      return(t);
    }
    t = debug_1(t, m_1);
    return(t);
  }
  t = if_verbose5_1(t, l_1);
  {
    ATerm n_10;
    n_10 = t;
    {
      ATerm o_10 = t;
      int p_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_q_10;
          t = table_get_0(t);
          LocalPopChoice(p_10);
        }
      else
        {
          t = o_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = n_10;
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          t = term_t_10;
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
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          t = term_x_10;
          return(t);
        }
        t = debug_1(t, q_1);
        return(t);
      }
      t = if_verbose5_1(t, p_1);
      {
        t = xtc_load_0(t);
        {
          ATerm a_11 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(b_11);
            }
          else
            {
              t = a_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = term_x_10;
                return(t);
              }
              t = debug_1(t, s_1);
              return(t);
            }
            t = if_verbose5_1(t, r_1);
          }
        }
      }
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        ATerm h_11 = NULL;
        ATerm i_11 = NULL;
        i_11 = t;
        if(((h_11 != NULL) && (h_11 != i_11)))
          _fail(i_11);
        else
          h_11 = i_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_11), not_null(h_11)), term_c_11);
          {
            t = error_0(t);
            {
              ATerm t_1 (ATerm t)
              {
                t = term_j_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm u_1 (ATerm t)
                    {
                      t = term_f_11;
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
ATerm xtc_command_1 (ATerm t, ATerm r_73 (ATerm))
{
  ATerm m_11 = NULL;
  ATerm g_11;
  g_11 = t;
  {
    ATerm n_11 = NULL;
    t = r_73(t);
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
  t = g_11;
  {
    ATerm j_11;
    j_11 = t;
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
    t = j_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_74 (ATerm))
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
        ATerm k_11;
        k_11 = t;
        {
          ATerm f_12 = NULL;
          ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
          t = n_74(t);
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
                    ATerm l_11 = t;
                    int q_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_12), term_r_11);
                        t = table_get_0(t);
                        LocalPopChoice(q_11);
                      }
                    else
                      {
                        t = l_11;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_12), term_r_11, (ATerm) ATinsert(CheckATermList(not_null(e_12)), (ATerm) ATinsert(CheckATermList(not_null(d_12)), not_null(y_11))));
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
        t = k_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm s_11;
  s_11 = t;
  {
    t = b_75(t);
    {
      ATerm v_1 (ATerm t)
      {
        t = term_t_11;
        return(t);
      }
      t = debug_1(t, v_1);
    }
  }
  t = s_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  ATerm u_11 = t;
  int a_12 = stack_ptr;
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
      LocalPopChoice(a_12);
      t = SSL_open_file(not_null(r_12), not_null(q_12));
    }
  else
    {
      t = u_11;
      {
        ATerm v_12 = NULL;
        ATerm w_12 = NULL;
        ATerm w_1 (ATerm t)
        {
          t = term_b_12;
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
              ATerm j_12;
              j_12 = t;
              {
                ATerm x_12 = NULL;
                t = term_k_12;
                {
                  x_12 = t;
                  if(((w_12 != NULL) && (w_12 != x_12)))
                    _fail(x_12);
                  else
                    w_12 = x_12;
                }
              }
              t = j_12;
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
    ATerm l_12;
    l_12 = t;
    {
      ATerm g_13 = NULL;
      t = term_m_12;
      {
        g_13 = t;
        if(((f_13 != NULL) && (f_13 != g_13)))
          _fail(g_13);
        else
          f_13 = g_13;
      }
    }
    t = l_12;
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
  t = term_o_12;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), term_p_12);
    {
      t = conc_strings_0(t);
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
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
      ATerm a_13;
      a_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), term_k_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), term_o_12);
            {
              ATerm x_1 (ATerm t)
              {
                t = term_b_13;
                return(t);
              }
              t = assert_1(t, x_1);
            }
          }
        }
      }
      t = a_13;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_14)), term_c_13));
              {
                ATerm e_13 = t;
                int h_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(h_13);
                  }
                else
                  {
                    t = e_13;
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_14)), term_c_13), not_null(a_14)), term_i_13));
                      {
                        ATerm j_13 = t;
                        int m_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(m_13);
                          }
                        else
                          {
                            t = j_13;
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
      ATerm n_13;
      n_13 = t;
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
      t = n_13;
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
ATerm FILE_1 (ATerm t, ATerm e_52 (ATerm))
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
            t = e_52(t);
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
ATerm xtc_transform_2 (ATerm t, ATerm t_73 (ATerm), ATerm u_73 (ATerm))
{
  ATerm o_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          t = stdin_0(t);
        }
      LocalPopChoice(q_13);
      t = xtc_transform_file_2(t, t_73, u_73);
    }
  else
    {
      t = o_13;
      t = xtc_transform_term_2(t, t_73, u_73);
    }
  return(t);
}
ATerm astratego2tg_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_t_13;
    return(t);
  }
  t = xtc_transform_2(t, a_2, pass_verbose_0);
  return(t);
}
ATerm pass_includes_0 (ATerm t)
{
  t = (ATerm) ATempty;
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
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_16), not_null(e_16));
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
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
  t = term_w_13;
  {
    ATerm x_13 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = x_13;
        t = term_l_6;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), term_l_6);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_16)), term_w_13);
  return(t);
}
ATerm str2astratego_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = term_k_14;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm u_16 = NULL;
    ATerm v_16 = NULL,x_16 = NULL,z_16 = NULL,b_17 = NULL;
    ATerm l_14;
    l_14 = t;
    {
      ATerm w_16 = NULL;
      t = term_o_12;
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
    t = l_14;
    {
      ATerm m_14;
      m_14 = t;
      {
        ATerm y_16 = NULL;
        t = term_o_12;
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
      t = m_14;
      {
        ATerm a_17 = NULL;
        t = (ATerm) ATempty;
        {
          a_17 = t;
          if(((z_16 != NULL) && (z_16 != a_17)))
            _fail(a_17);
          else
            z_16 = a_17;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_16)), term_n_14);
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
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_14;
      t = get_config_0(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      t = term_r_14;
    }
  return(t);
}
ATerm pre_process_input_0 (ATerm t)
{
  ATerm t_17 = NULL,v_17 = NULL;
  ATerm s_14;
  s_14 = t;
  {
    ATerm u_17 = NULL;
    u_17 = t;
    if(((t_17 != NULL) && (t_17 != u_17)))
      _fail(u_17);
    else
      t_17 = u_17;
  }
  t = s_14;
  {
    ATerm w_17 = NULL;
    t = term_o_12;
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
ATerm input_type_option_0 (ATerm t)
{
  ATerm v_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm b_18 = NULL;
        b_18 = t;
        z_17 :
        if(!(match_string(b_18, "--ast")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        ATerm b_15;
        b_15 = t;
        {
          t = term_d_15;
          t = set_config_0(t);
        }
        t = b_15;
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = term_e_15;
        return(t);
      }
      t = Option_3(t, d_2, e_2, f_2);
      LocalPopChoice(a_15);
    }
  else
    {
      t = v_14;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm c_18 = NULL;
          c_18 = t;
          a_18 :
          if(!(match_string(c_18, "--mod")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          ATerm f_15;
          f_15 = t;
          {
            t = term_k_15;
            t = set_config_0(t);
          }
          t = f_15;
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          t = term_l_15;
          return(t);
        }
        t = Option_3(t, g_2, h_2, i_2);
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym__2))
    {
      g_18 = ATgetArgument(f_18, 0);
      h_18 = ATgetArgument(f_18, 1);
      t = SSL_copy(not_null(g_18), not_null(h_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  o_18 :
  if(match_cons(p_18, sym_stderr_0))
    {
      ATerm u_18 = NULL,w_18 = NULL;
      ATerm p_15;
      p_15 = t;
      {
        ATerm v_18 = NULL;
        t = SSLgetAnnotations(not_null(p_18));
        {
          v_18 = t;
          if(((u_18 != NULL) && (u_18 != v_18)))
            _fail(v_18);
          else
            u_18 = v_18;
        }
      }
      t = p_15;
      {
        ATerm x_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(u_18));
        {
          x_18 = t;
          if(((w_18 != NULL) && (w_18 != x_18)))
            _fail(x_18);
          else
            w_18 = x_18;
        }
        t = not_null(w_18);
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
  ATerm f_19 = NULL;
  f_19 = t;
  e_19 :
  if(match_cons(f_19, sym_stdout_0))
    {
      ATerm h_19 = NULL,j_19 = NULL;
      ATerm s_15;
      s_15 = t;
      {
        ATerm i_19 = NULL;
        t = SSLgetAnnotations(not_null(f_19));
        {
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
        }
      }
      t = s_15;
      {
        ATerm k_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(h_19));
        {
          k_19 = t;
          if(((j_19 != NULL) && (j_19 != k_19)))
            _fail(k_19);
          else
            j_19 = k_19;
        }
        t = not_null(j_19);
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
  ATerm c_20 = NULL,d_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym_FILE_1))
    {
      d_20 = ATgetArgument(c_20, 0);
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_20 = NULL;
            ATerm i_20 = NULL;
            t = m_0(t);
            {
              i_20 = t;
              {
                if(((h_20 != NULL) && (h_20 != i_20)))
                  _fail(i_20);
                else
                  h_20 = i_20;
                {
                  ATerm v_15 = t;
                  int w_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(w_15);
                    }
                  else
                    {
                      t = v_15;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(h_20));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_20));
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
            {
              ATerm y_15 = t;
              int z_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_20 = NULL;
                  ATerm l_20 = NULL;
                  t = m_0(t);
                  {
                    l_20 = t;
                    {
                      if(((k_20 != NULL) && (k_20 != l_20)))
                        _fail(l_20);
                      else
                        k_20 = l_20;
                      {
                        ATerm a_16 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm f_16 = t;
                            int g_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(g_16);
                              }
                            else
                              {
                                t = f_16;
                                {
                                  ATerm h_16 = t;
                                  int i_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(i_16);
                                    }
                                  else
                                    {
                                      t = h_16;
                                      {
                                        ATerm m_20 = NULL;
                                        m_20 = t;
                                        if(((d_20 != NULL) && (d_20 != m_20)))
                                          _fail(m_20);
                                        else
                                          d_20 = m_20;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = a_16;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(k_20));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_20));
                  LocalPopChoice(z_15);
                }
              else
                {
                  t = y_15;
                  {
                    ATerm t_20 = NULL;
                    t = m_0(t);
                    {
                      t_20 = t;
                      if(((d_20 != NULL) && (d_20 != t_20)))
                        _fail(t_20);
                      else
                        d_20 = t_20;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_20));
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
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  d_21 = t;
  c_21 :
  if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
    {
      e_21 = ATgetFirst((ATermList) d_21);
      f_21 = (ATerm) ATgetNext((ATermList) d_21);
      t = not_null(f_21);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm q_21 = NULL,v_21 = NULL,w_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym__2))
    {
      v_21 = ATgetArgument(q_21, 0);
      w_21 = ATgetArgument(q_21, 1);
      {
        ATerm j_16;
        j_16 = t;
        {
          ATerm h_22 = NULL;
          ATerm i_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_21), not_null(w_21));
          {
            ATerm o_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(p_16);
              }
            else
              {
                t = o_16;
                t = (ATerm) ATempty;
              }
            {
              i_22 = t;
              if(((h_22 != NULL) && (h_22 != i_22)))
                _fail(i_22);
              else
                h_22 = i_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_21), not_null(w_21), not_null(h_22));
            t = table_put_0(t);
          }
        }
        t = j_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
  ATerm q_16;
  q_16 = t;
  {
    ATerm t_22 = NULL;
    ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
    t = k_74(t);
    {
      t_22 = t;
      {
        if(((s_22 != NULL) && (s_22 != t_22)))
          _fail(t_22);
        else
          s_22 = t_22;
        {
          ATerm r_16 = t;
          int s_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_22), term_r_11);
              t = table_get_0(t);
              LocalPopChoice(s_16);
            }
          else
            {
              t = r_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            u_22 = t;
            p_22 :
            if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
              {
                v_22 = ATgetFirst((ATermList) u_22);
                w_22 = (ATerm) ATgetNext((ATermList) u_22);
                {
                  if(((r_22 != NULL) && (r_22 != v_22)))
                    _fail(v_22);
                  else
                    r_22 = v_22;
                  {
                    if(((q_22 != NULL) && (q_22 != w_22)))
                      _fail(w_22);
                    else
                      q_22 = w_22;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(s_22), term_r_11, not_null(q_22));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(r_22);
                          {
                            ATerm j_2 (ATerm t)
                            {
                              ATerm x_22 = NULL;
                              x_22 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_22), not_null(x_22));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, j_2);
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
  t = q_16;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm d_23 = NULL;
  d_23 = t;
  t = SSL_remove(not_null(d_23));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_62 (ATerm), ATerm w_62 (ATerm))
{
  ATerm t_16 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_62(t);
      t = w_62(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = t_16;
      {
        t = w_62(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm i_23 = NULL;
  ATerm d_17;
  d_17 = t;
  {
    ATerm j_23 = NULL;
    ATerm k_23 = NULL;
    t = j_74(t);
    {
      j_23 = t;
      {
        if(((i_23 != NULL) && (i_23 != j_23)))
          _fail(j_23);
        else
          i_23 = j_23;
        {
          ATerm l_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), term_r_11);
          {
            ATerm e_17 = t;
            int f_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_17);
              }
            else
              {
                t = e_17;
                t = (ATerm) ATempty;
              }
            {
              l_23 = t;
              if(((k_23 != NULL) && (k_23 != l_23)))
                _fail(l_23);
              else
                k_23 = l_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_23), term_r_11, (ATerm) ATinsert(CheckATermList(not_null(k_23)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_17;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm v_23 = NULL,w_23 = NULL;
  ATerm k_2 (ATerm t)
  {
    t = term_b_13;
    return(t);
  }
  t = begin_scope_1(t, k_2);
  {
    ATerm l_2 (ATerm t)
    {
      ATerm g_17;
      g_17 = t;
      {
        ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
        ATerm h_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_17;
            t = table_get_0(t);
            LocalPopChoice(n_17);
          }
        else
          {
            t = h_17;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          x_23 = t;
          p_23 :
          if(((ATgetType(x_23) == AT_LIST) && !(ATisEmpty(x_23))))
            {
              y_23 = ATgetFirst((ATermList) x_23);
              z_23 = (ATerm) ATgetNext((ATermList) x_23);
              {
                if(((w_23 != NULL) && (w_23 != y_23)))
                  _fail(y_23);
                else
                  w_23 = y_23;
                {
                  if(((v_23 != NULL) && (v_23 != z_23)))
                    _fail(z_23);
                  else
                    v_23 = z_23;
                  {
                    t = not_null(w_23);
                    {
                      ATerm m_2 (ATerm t)
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
                      t = map_1(t, m_2);
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
      t = g_17;
      {
        ATerm n_2 (ATerm t)
        {
          t = term_b_13;
          return(t);
        }
        t = end_scope_1(t, n_2);
      }
      return(t);
    }
    t = restore_always_2(t, h_73, l_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_24 = NULL;
        ATerm d_24 = NULL;
        t = term_i_13;
        {
          t = get_config_0(t);
          {
            d_24 = t;
            if(((c_24 != NULL) && (c_24 != d_24)))
              _fail(d_24);
            else
              c_24 = d_24;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_24));
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        t = term_m_6;
      }
    {
      t = i_73(t);
      {
        ATerm p_2 (ATerm t)
        {
          ATerm x_17 = t;
          int y_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_c_13;
              t = get_config_0(t);
              LocalPopChoice(y_17);
            }
          else
            {
              t = x_17;
              t = term_d_18;
            }
          return(t);
        }
        t = copy_to_1(t, p_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, o_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm g_24 = NULL;
    g_24 = t;
    f_24 :
    if(!(match_string(g_24, "-v")))
      {
        if(!(match_string(g_24, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_j_18;
    t = set_config_0(t);
    t = term_k_18;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_l_18;
    return(t);
  }
  t = Option_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm m_24 = NULL;
    m_24 = t;
    h_24 :
    if(!(match_string(m_24, "-k")))
      {
        if(!(match_string(m_24, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm m_18;
    m_18 = t;
    {
      ATerm o_24 = NULL;
      ATerm p_24 = NULL;
      t = string_to_int_0(t);
      {
        p_24 = t;
        if(((o_24 != NULL) && (o_24 != p_24)))
          _fail(p_24);
        else
          o_24 = p_24;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_13, not_null(o_24));
        t = set_config_0(t);
      }
    }
    t = m_18;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_n_18;
    return(t);
  }
  t = ArgOption_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  t = SSL_string_to_int(not_null(s_24));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 (ATerm t)
      {
        ATerm a_25 = NULL;
        a_25 = t;
        v_24 :
        if(!(match_string(a_25, "-S")))
          {
            if(!(match_string(a_25, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_t_18;
        t = set_config_0(t);
        t = term_y_18;
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_z_18;
        return(t);
      }
      t = Option_3(t, w_2, x_2, y_2);
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              ATerm b_25 = NULL;
              b_25 = t;
              w_24 :
              if(!(match_string(b_25, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              ATerm e_25 = NULL;
              ATerm c_19;
              c_19 = t;
              {
                ATerm c_25 = NULL;
                ATerm d_25 = NULL;
                t = string_to_int_0(t);
                {
                  d_25 = t;
                  if(((c_25 != NULL) && (c_25 != d_25)))
                    _fail(d_25);
                  else
                    c_25 = d_25;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_6, not_null(c_25));
                  t = set_config_0(t);
                }
              }
              t = c_19;
              {
                ATerm f_25 = NULL;
                f_25 = t;
                if(((e_25 != NULL) && (e_25 != f_25)))
                  _fail(f_25);
                else
                  e_25 = f_25;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_25));
              }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              t = term_d_19;
              return(t);
            }
            t = ArgOption_3(t, z_2, a_3, b_3);
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            {
              ATerm h_3 (ATerm t)
              {
                ATerm g_25 = NULL;
                g_25 = t;
                z_24 :
                if(!(match_string(g_25, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_3 (ATerm t)
              {
                t = term_l_19;
                t = set_config_0(t);
                t = term_m_19;
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                t = term_n_19;
                return(t);
              }
              t = Option_3(t, h_3, k_3, l_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
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
    ATerm m_25 = NULL;
    m_25 = t;
    j_25 :
    if(!(match_string(m_25, "-o")))
      {
        if(!(match_string(m_25, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm p_25 = NULL;
    ATerm s_19;
    s_19 = t;
    {
      ATerm n_25 = NULL;
      ATerm o_25 = NULL;
      o_25 = t;
      if(((n_25 != NULL) && (n_25 != o_25)))
        _fail(o_25);
      else
        n_25 = o_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_13, not_null(n_25));
        t = set_config_0(t);
      }
    }
    t = s_19;
    {
      ATerm q_25 = NULL;
      q_25 = t;
      if(((p_25 != NULL) && (p_25 != q_25)))
        _fail(q_25);
      else
        p_25 = q_25;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_25));
    }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_t_19;
    return(t);
  }
  t = ArgOption_3(t, m_3, n_3, o_3);
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
        ATerm t_3 (ATerm t)
        {
          ATerm u_25 = NULL;
          u_25 = t;
          t_25 :
          if(!(match_string(u_25, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_3 (ATerm t)
        {
          t = term_x_19;
          t = set_config_0(t);
          t = term_y_19;
          return(t);
        }
        ATerm v_3 (ATerm t)
        {
          t = term_z_19;
          return(t);
        }
        t = Option_3(t, t_3, u_3, v_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  a_26 = t;
  y_25 :
  if(match_string(a_26, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(a_26) == AT_LIST) && !(ATisEmpty(a_26))))
        {
          b_26 = ATgetFirst((ATermList) a_26);
          c_26 = (ATerm) ATgetNext((ATermList) a_26);
          z_25 :
          if(((ATgetType(c_26) == AT_LIST) && !(ATisEmpty(c_26))))
            {
              d_26 = ATgetFirst((ATermList) c_26);
              e_26 = (ATerm) ATgetNext((ATermList) c_26);
              {
                ATerm i_26 = NULL;
                ATerm a_20;
                a_20 = t;
                {
                  t = not_null(b_26);
                  t = j_0(t);
                }
                t = a_20;
                {
                  ATerm j_26 = NULL;
                  t = not_null(d_26);
                  {
                    t = k_0(t);
                    {
                      j_26 = t;
                      if(((i_26 != NULL) && (i_26 != j_26)))
                        _fail(j_26);
                      else
                        i_26 = j_26;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_26)), not_null(i_26));
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
    ATerm q_26 = NULL;
    q_26 = t;
    n_26 :
    if(!(match_string(q_26, "-i")))
      {
        if(!(match_string(q_26, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm t_26 = NULL;
    ATerm e_20;
    e_20 = t;
    {
      ATerm r_26 = NULL;
      ATerm s_26 = NULL;
      s_26 = t;
      if(((r_26 != NULL) && (r_26 != s_26)))
        _fail(s_26);
      else
        r_26 = s_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_13, not_null(r_26));
        t = set_config_0(t);
      }
    }
    t = e_20;
    {
      ATerm u_26 = NULL;
      u_26 = t;
      if(((t_26 != NULL) && (t_26 != u_26)))
        _fail(u_26);
      else
        t_26 = u_26;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_26));
    }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_f_20;
    return(t);
  }
  t = ArgOption_3(t, w_3, x_3, z_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(j_20);
    }
  else
    {
      t = g_20;
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm z_26 = NULL;
  ATerm p_20;
  p_20 = t;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm a_27 = NULL,b_27 = NULL;
      a_27 = t;
      y_26 :
      if(match_cons(a_27, sym_Program_1))
        {
          b_27 = ATgetArgument(a_27, 0);
          if(((z_26 != NULL) && (z_26 != b_27)))
            _fail(b_27);
          else
            z_26 = b_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, c_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_20), not_null(z_26)), term_q_20));
      {
        t = printnl_0(t);
        {
          t = term_l_6;
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
  t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATempty, term_s_20));
  {
    t = printnl_0(t);
    {
      t = term_l_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  t = SSL_TicksToSeconds(not_null(e_27));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym__2))
    {
      k_27 = ATgetArgument(j_27, 0);
      l_27 = ATgetArgument(j_27, 1);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_27), not_null(l_27));
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = SSL_addr(not_null(k_27), not_null(l_27));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_70 (ATerm), ATerm l_70 (ATerm))
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_70(t);
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      {
        ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
        s_27 = t;
        r_27 :
        if(((ATgetType(s_27) == AT_LIST) && !(ATisEmpty(s_27))))
          {
            t_27 = ATgetFirst((ATermList) s_27);
            u_27 = (ATerm) ATgetNext((ATermList) s_27);
            {
              ATerm x_27 = NULL;
              ATerm y_27 = NULL;
              t = not_null(u_27);
              {
                t = foldr_2(t, k_70, l_70);
                {
                  y_27 = t;
                  if(((x_27 != NULL) && (x_27 != y_27)))
                    _fail(y_27);
                  else
                    x_27 = y_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), not_null(x_27));
                t = l_70(t);
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
ATerm crush_2 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  ATerm f_28 = NULL;
  ATerm h_28 = NULL;
  f_28 = t;
  {
    ATerm i_28 = NULL;
    ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
    t = not_null(f_28);
    {
      i_28 = t;
      {
        t = SSL_explode_term(not_null(i_28));
        {
          k_28 = t;
          e_28 :
          if(match_cons(k_28, sym__2))
            {
              l_28 = ATgetArgument(k_28, 0);
              m_28 = ATgetArgument(k_28, 1);
              if(((h_28 != NULL) && (h_28 != m_28)))
                _fail(m_28);
              else
                h_28 = m_28;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_28);
      t = foldr_2(t, i_69, j_69);
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
      t = term_s_18;
      return(t);
    }
    t = crush_2(t, d_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  s_28 = t;
  r_28 :
  if(match_cons(s_28, sym__2))
    {
      t_28 = ATgetArgument(s_28, 0);
      u_28 = ATgetArgument(s_28, 1);
      {
        ATerm y_20;
        y_20 = t;
        {
          ATerm z_20 = t;
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_28), not_null(u_28));
              LocalPopChoice(a_21);
            }
          else
            {
              t = z_20;
              t = SSL_gtr(not_null(t_28), not_null(u_28));
            }
        }
        t = y_20;
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
  ATerm b_29 = NULL;
  ATerm b_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
      c_29 = t;
      a_29 :
      if(match_cons(c_29, sym__2))
        {
          d_29 = ATgetArgument(c_29, 0);
          e_29 = ATgetArgument(c_29, 1);
          {
            if(((b_29 != NULL) && (b_29 != d_29)))
              _fail(d_29);
            else
              b_29 = d_29;
            if(((b_29 != NULL) && (b_29 != e_29)))
              _fail(e_29);
            else
              b_29 = e_29;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_21);
    }
  else
    {
      t = b_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_58 (ATerm))
{
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_21;
      j_21 = t;
      {
        ATerm m_29 = NULL;
        ATerm n_29 = NULL;
        t = term_g_6;
        {
          t = get_config_0(t);
          {
            n_29 = t;
            if(((m_29 != NULL) && (m_29 != n_29)))
              _fail(n_29);
            else
              m_29 = n_29;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_29), term_l_6);
          t = geq_0(t);
        }
      }
      t = j_21;
      t = s_58(t);
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm r_29 = NULL,t_29 = NULL;
    ATerm k_21;
    k_21 = t;
    {
      ATerm s_29 = NULL;
      t = run_time_0(t);
      {
        s_29 = t;
        if(((r_29 != NULL) && (r_29 != s_29)))
          _fail(s_29);
        else
          r_29 = s_29;
      }
    }
    t = k_21;
    {
      ATerm u_29 = NULL;
      t = term_l_21;
      {
        t = get_config_0(t);
        {
          u_29 = t;
          if(((t_29 != NULL) && (t_29 != u_29)))
            _fail(u_29);
          else
            t_29 = u_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_21), not_null(r_29)), term_m_21), not_null(t_29)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, e_4);
  {
    t = term_s_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_30 = NULL;
  d_30 = t;
  a_30 :
  if(match_cons(d_30, sym_Version_0))
    {
      ATerm f_30 = NULL,h_30 = NULL;
      ATerm o_21;
      o_21 = t;
      {
        ATerm g_30 = NULL;
        t = SSLgetAnnotations(not_null(d_30));
        {
          g_30 = t;
          if(((f_30 != NULL) && (f_30 != g_30)))
            _fail(g_30);
          else
            f_30 = g_30;
        }
      }
      t = o_21;
      {
        ATerm i_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_30));
        {
          i_30 = t;
          if(((h_30 != NULL) && (h_30 != i_30)))
            _fail(i_30);
          else
            h_30 = i_30;
        }
        t = not_null(h_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_77 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(u_21);
            }
          else
            {
              t = t_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, g_4);
  t = t_77(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  t = SSL_table_create(not_null(n_30));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  {
    ATerm x_21;
    x_21 = t;
    {
      t = term_y_21;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_21, term_z_21, not_null(r_30));
          t = table_put_0(t);
        }
      }
    }
    t = x_21;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_30 = NULL;
  v_30 = t;
  t = SSL_table_destroy(not_null(v_30));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  t = SSL_exit(not_null(z_30));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
  d_31 = t;
  c_31 :
  if(((ATgetType(d_31) == AT_LIST) && ATisEmpty(d_31)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_31) == AT_LIST) && !(ATisEmpty(d_31))))
        {
          e_31 = ATgetFirst((ATermList) d_31);
          f_31 = (ATerm) ATgetNext((ATermList) d_31);
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
  ATerm a_22;
  a_22 = t;
  {
    ATerm i_31 = NULL;
    ATerm l_31 = NULL;
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        {
          ATerm j_31 = NULL;
          ATerm k_31 = NULL;
          k_31 = t;
          if(((j_31 != NULL) && (j_31 != k_31)))
            _fail(k_31);
          else
            j_31 = k_31;
          t = (ATerm) ATinsert(ATempty, not_null(j_31));
        }
      }
    {
      l_31 = t;
      if(((i_31 != NULL) && (i_31 != l_31)))
        _fail(l_31);
      else
        i_31 = l_31;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_18, not_null(i_31));
      t = printnl_0(t);
    }
  }
  t = a_22;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  y_31 = t;
  v_31 :
  if(((ATgetType(y_31) == AT_LIST) && !(ATisEmpty(y_31))))
    {
      w_31 = ATgetFirst((ATermList) y_31);
      x_31 = (ATerm) ATgetNext((ATermList) y_31);
      {
        ATerm g_32 = NULL;
        t = not_null(x_31);
        {
          ATerm d_22;
          d_22 = t;
          {
            ATerm h_32 = NULL,l_32 = NULL,n_32 = NULL;
            ATerm e_22;
            e_22 = t;
            {
              ATerm k_32 = NULL;
              t = i_0(t);
              {
                k_32 = t;
                if(((h_32 != NULL) && (h_32 != k_32)))
                  _fail(k_32);
                else
                  h_32 = k_32;
              }
            }
            t = e_22;
            {
              ATerm m_32 = NULL;
              t = not_null(w_31);
              {
                t = h_0(t);
                {
                  m_32 = t;
                  if(((l_32 != NULL) && (l_32 != m_32)))
                    _fail(m_32);
                  else
                    l_32 = m_32;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_32)), not_null(l_32));
                {
                  n_32 = t;
                  if(((g_32 != NULL) && (g_32 != n_32)))
                    _fail(n_32);
                  else
                    g_32 = n_32;
                }
              }
            }
          }
          t = d_22;
          {
            ATerm h_4 (ATerm t)
            {
              t = not_null(g_32);
              return(t);
            }
            t = reverse_acc_2(t, h_0, h_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_31) == AT_LIST) && ATisEmpty(y_31)))
        {
          {
            t = term_o_12;
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
  ATerm i_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_57 (ATerm))
{
  ATerm k_33 = NULL,m_33 = NULL;
  k_33 = t;
  j_33 :
  if(match_cons(k_33, sym_Program_1))
    {
      m_33 = ATgetArgument(k_33, 0);
      {
        ATerm r_33 = NULL,u_33 = NULL;
        ATerm t_33 = NULL;
        t = SSLgetAnnotations(not_null(k_33));
        {
          t_33 = t;
          if(((r_33 != NULL) && (r_33 != t_33)))
            _fail(t_33);
          else
            r_33 = t_33;
        }
        {
          t = not_null(m_33);
          {
            ATerm z_33 = NULL;
            t = d_57(t);
            {
              u_33 = t;
              {
                ATerm k_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_33)), not_null(r_33));
                {
                  k_34 = t;
                  if(((z_33 != NULL) && (z_33 != k_34)))
                    _fail(k_34);
                  else
                    z_33 = k_34;
                }
                t = not_null(z_33);
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
  ATerm y_34 = NULL;
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_34 = NULL;
      t = term_l_21;
      {
        t = get_config_0(t);
        {
          z_34 = t;
          if(((y_34 != NULL) && (y_34 != z_34)))
            _fail(z_34);
          else
            y_34 = z_34;
        }
      }
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      {
        ATerm n_4 (ATerm t)
        {
          ATerm o_4 (ATerm t)
          {
            ATerm a_35 = NULL;
            a_35 = t;
            if(((y_34 != NULL) && (y_34 != a_35)))
              _fail(a_35);
            else
              y_34 = a_35;
            return(t);
          }
          t = Program_1(t, o_4);
          return(t);
        }
        t = fetch_1(t, n_4);
      }
    }
  {
    t = term_j_22;
    {
      t = echo_0(t);
      {
        t = term_m_22;
        {
          t = table_get_0(t);
          {
            ATerm p_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, p_4);
            {
              ATerm q_4 (ATerm t)
              {
                ATerm b_35 = NULL;
                ATerm f_35 = NULL;
                f_35 = t;
                if(((b_35 != NULL) && (b_35 != f_35)))
                  _fail(f_35);
                else
                  b_35 = f_35;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_35)), term_n_22);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, q_4);
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
  ATerm o_22;
  o_22 = t;
  {
    ATerm k_35 = NULL;
    ATerm l_35 = NULL;
    l_35 = t;
    if(((k_35 != NULL) && (k_35 != l_35)))
      _fail(l_35);
    else
      k_35 = l_35;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATempty, not_null(k_35)));
      t = printnl_0(t);
    }
  }
  t = o_22;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm y_22;
  y_22 = t;
  {
    t = v_74(t);
    t = debug_0(t);
  }
  t = y_22;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_57 (ATerm))
{
  ATerm s_35 = NULL,t_35 = NULL;
  s_35 = t;
  r_35 :
  if(match_cons(s_35, sym_Undefined_1))
    {
      t_35 = ATgetArgument(s_35, 0);
      {
        ATerm w_35 = NULL,y_35 = NULL;
        ATerm x_35 = NULL;
        t = SSLgetAnnotations(not_null(s_35));
        {
          x_35 = t;
          if(((w_35 != NULL) && (w_35 != x_35)))
            _fail(x_35);
          else
            w_35 = x_35;
        }
        {
          t = not_null(t_35);
          {
            ATerm a_36 = NULL;
            t = e_57(t);
            {
              y_35 = t;
              {
                ATerm b_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_35)), not_null(w_35));
                {
                  b_36 = t;
                  if(((a_36 != NULL) && (a_36 != b_36)))
                    _fail(b_36);
                  else
                    a_36 = b_36;
                }
                t = not_null(a_36);
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
ATerm fetch_1 (ATerm t, ATerm f_64 (ATerm))
{
  ATerm g_36 (ATerm t)
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_64, _id);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = Cons_2(t, _id, g_36);
      }
    return(t);
  }
  t = g_36(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_79 (ATerm))
{
  t = fetch_1(t, a_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  k_36 :
  if(match_cons(l_36, sym_Help_0))
    {
      ATerm n_36 = NULL,p_36 = NULL;
      ATerm b_23;
      b_23 = t;
      {
        ATerm o_36 = NULL;
        t = SSLgetAnnotations(not_null(l_36));
        {
          o_36 = t;
          if(((n_36 != NULL) && (n_36 != o_36)))
            _fail(o_36);
          else
            n_36 = o_36;
        }
      }
      t = b_23;
      {
        ATerm q_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_36));
        {
          q_36 = t;
          if(((p_36 != NULL) && (p_36 != q_36)))
            _fail(q_36);
          else
            p_36 = q_36;
        }
        t = not_null(p_36);
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
  ATerm v_36 = NULL;
  v_36 = t;
  t = SSL_implode_string(not_null(v_36));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_23);
    }
  else
    {
      t = c_23;
      {
        ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
        a_37 = t;
        z_36 :
        if(((ATgetType(a_37) == AT_LIST) && !(ATisEmpty(a_37))))
          {
            b_37 = ATgetFirst((ATermList) a_37);
            c_37 = (ATerm) ATgetNext((ATermList) a_37);
            {
              t = not_null(b_37);
              {
                ATerm s_4 (ATerm t)
                {
                  t = not_null(c_37);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_4);
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
  ATerm m_37 = NULL;
  ATerm o_37 = NULL;
  m_37 = t;
  {
    ATerm p_37 = NULL;
    ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
    t = not_null(m_37);
    {
      p_37 = t;
      {
        t = SSL_explode_term(not_null(p_37));
        {
          r_37 = t;
          k_37 :
          if(match_cons(r_37, sym__2))
            {
              s_37 = ATgetArgument(r_37, 0);
              t_37 = ATgetArgument(r_37, 1);
              l_37 :
              if(match_string(s_37, ""))
                {
                  if(((o_37 != NULL) && (o_37 != t_37)))
                    _fail(t_37);
                  else
                    o_37 = t_37;
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
      t = not_null(o_37);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm x_37 (ATerm t)
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_37);
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        {
          t = Nil_0(t);
          t = l_64(t);
        }
      }
    return(t);
  }
  t = x_37(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
  a_38 = t;
  z_37 :
  if(match_cons(a_38, sym__2))
    {
      b_38 = ATgetArgument(a_38, 0);
      c_38 = ATgetArgument(a_38, 1);
      {
        t = not_null(b_38);
        {
          ATerm t_4 (ATerm t)
          {
            t = not_null(c_38);
            return(t);
          }
          t = at_end_1(t, t_4);
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
  ATerm h_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(m_23);
    }
  else
    {
      t = h_23;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_38 = NULL;
  h_38 = t;
  t = SSL_explode_string(not_null(h_38));
  return(t);
}
ATerm _2 (ATerm t, ATerm i_50 (ATerm), ATerm j_50 (ATerm))
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  q_38 = t;
  p_38 :
  if(match_cons(q_38, sym__2))
    {
      r_38 = ATgetArgument(q_38, 0);
      s_38 = ATgetArgument(q_38, 1);
      {
        ATerm w_38 = NULL,y_38 = NULL;
        ATerm x_38 = NULL;
        t = SSLgetAnnotations(not_null(q_38));
        {
          x_38 = t;
          if(((w_38 != NULL) && (w_38 != x_38)))
            _fail(x_38);
          else
            w_38 = x_38;
        }
        {
          t = not_null(r_38);
          {
            ATerm a_39 = NULL;
            t = i_50(t);
            {
              y_38 = t;
              {
                t = not_null(s_38);
                {
                  ATerm c_39 = NULL;
                  t = j_50(t);
                  {
                    a_39 = t;
                    {
                      ATerm d_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_38), not_null(a_39)), not_null(w_38));
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
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        t = conc_more_lists_0(t);
      }
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
        ATerm q_23;
        q_23 = t;
        t = SSL_printnl(not_null(m_39), not_null(n_39));
        t = q_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm r_23;
  r_23 = t;
  {
    ATerm w_39 = NULL,y_39 = NULL;
    ATerm s_23;
    s_23 = t;
    {
      ATerm x_39 = NULL;
      t = u_74(t);
      {
        x_39 = t;
        if(((w_39 != NULL) && (w_39 != x_39)))
          _fail(x_39);
        else
          w_39 = x_39;
      }
    }
    t = s_23;
    {
      ATerm z_39 = NULL;
      z_39 = t;
      if(((y_39 != NULL) && (y_39 != z_39)))
        _fail(z_39);
      else
        y_39 = z_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_39)), not_null(w_39)));
        t = printnl_0(t);
      }
    }
  }
  t = r_23;
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_63 (ATerm))
{
  ATerm c_40 (ATerm t)
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = Cons_2(t, w_63, c_40);
      }
    return(t);
  }
  t = c_40(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  t = SSL_is_string(not_null(e_40));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm e_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_4 (ATerm t)
            {
              ATerm j_24 = t;
              int k_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(k_24);
                }
              else
                {
                  t = j_24;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, u_4);
            LocalPopChoice(i_24);
          }
        else
          {
            t = e_24;
            {
              ATerm n_40 = NULL,q_40 = NULL,r_40 = NULL;
              n_40 = t;
              m_40 :
              if(match_cons(n_40, sym_Path_1))
                {
                  q_40 = ATgetArgument(n_40, 0);
                  t = not_null(q_40);
                }
              else
                {
                  if(match_cons(n_40, sym_Var_1))
                    {
                      q_40 = ATgetArgument(n_40, 0);
                      {
                        t = not_null(q_40);
                        {
                          ATerm l_24 = t;
                          int n_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(n_24);
                            }
                          else
                            {
                              t = l_24;
                              {
                                ATerm v_4 (ATerm t)
                                {
                                  t = term_q_24;
                                  return(t);
                                }
                                t = debug_1(t, v_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(n_40, sym_Prefix_2))
                        {
                          q_40 = ATgetArgument(n_40, 0);
                          r_40 = ATgetArgument(n_40, 1);
                          {
                            ATerm y_40 = NULL,c_41 = NULL;
                            ATerm r_24;
                            r_24 = t;
                            {
                              ATerm z_40 = NULL;
                              t = not_null(q_40);
                              {
                                t = eval_config_0(t);
                                {
                                  z_40 = t;
                                  if(((y_40 != NULL) && (y_40 != z_40)))
                                    _fail(z_40);
                                  else
                                    y_40 = z_40;
                                }
                              }
                            }
                            t = r_24;
                            {
                              ATerm d_41 = NULL;
                              t = not_null(r_40);
                              {
                                t = eval_config_0(t);
                                {
                                  d_41 = t;
                                  if(((c_41 != NULL) && (c_41 != d_41)))
                                    _fail(d_41);
                                  else
                                    c_41 = d_41;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_40), not_null(c_41));
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
  ATerm l_41 = NULL;
  l_41 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_24, not_null(l_41));
    {
      t = table_get_0(t);
      {
        ATerm u_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm y_24;
              y_24 = t;
              {
                ATerm n_41 = NULL;
                ATerm o_41 = NULL;
                o_41 = t;
                if(((n_41 != NULL) && (n_41 != o_41)))
                  _fail(o_41);
                else
                  n_41 = o_41;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_t_24, not_null(l_41), not_null(n_41));
                  t = table_put_0(t);
                }
              }
              t = y_24;
            }
            LocalPopChoice(x_24);
          }
        else
          {
            t = u_24;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_62(t);
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_41 = NULL,w_41 = NULL,x_41 = NULL;
  t_41 = t;
  s_41 :
  if(match_cons(t_41, sym__2))
    {
      w_41 = ATgetArgument(t_41, 0);
      x_41 = ATgetArgument(t_41, 1);
      t = SSL_table_get(not_null(w_41), not_null(x_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  g_42 = t;
  f_42 :
  if(match_cons(g_42, sym__3))
    {
      h_42 = ATgetArgument(g_42, 0);
      i_42 = ATgetArgument(g_42, 1);
      j_42 = ATgetArgument(g_42, 2);
      {
        ATerm k_25;
        k_25 = t;
        {
          ATerm n_42 = NULL;
          ATerm o_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_42), not_null(i_42));
          {
            ATerm l_25 = t;
            int r_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_25);
              }
            else
              {
                t = l_25;
                t = (ATerm) ATempty;
              }
            {
              o_42 = t;
              if(((n_42 != NULL) && (n_42 != o_42)))
                _fail(o_42);
              else
                n_42 = o_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_42), not_null(i_42), (ATerm) ATinsert(CheckATermList(not_null(n_42)), not_null(j_42)));
            t = table_put_0(t);
          }
        }
        t = k_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm s_42 = NULL;
  ATerm t_42 = NULL;
  t = term_o_12;
  {
    t = f_80(t);
    {
      t_42 = t;
      if(((s_42 != NULL) && (s_42 != t_42)))
        _fail(t_42);
      else
        s_42 = t_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_22, term_l_22, not_null(s_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
  z_42 = t;
  y_42 :
  if(match_string(z_42, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(z_42) == AT_LIST) && !(ATisEmpty(z_42))))
        {
          a_43 = ATgetFirst((ATermList) z_42);
          b_43 = (ATerm) ATgetNext((ATermList) z_42);
          {
            ATerm e_43 = NULL;
            ATerm s_25;
            s_25 = t;
            {
              t = not_null(a_43);
              t = a_0(t);
            }
            t = s_25;
            {
              ATerm f_43 = NULL;
              t = term_o_12;
              {
                t = d_0(t);
                {
                  f_43 = t;
                  if(((e_43 != NULL) && (e_43 != f_43)))
                    _fail(f_43);
                  else
                    e_43 = f_43;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_43)), not_null(e_43));
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
  ATerm w_4 (ATerm t)
  {
    ATerm k_43 = NULL;
    k_43 = t;
    j_43 :
    if(!(match_string(k_43, "--help")))
      {
        if(!(match_string(k_43, "-h")))
          {
            if(!(match_string(k_43, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_w_25;
    {
      t = set_config_0(t);
      t = term_x_25;
    }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_f_26;
    return(t);
  }
  t = Option_3(t, w_4, y_4, c_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  m_43 :
  if(((ATgetType(n_43) == AT_LIST) && !(ATisEmpty(n_43))))
    {
      o_43 = ATgetFirst((ATermList) n_43);
      p_43 = (ATerm) ATgetNext((ATermList) n_43);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_43)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_43)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_51 (ATerm), ATerm s_51 (ATerm))
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
  z_43 = t;
  y_43 :
  if(((ATgetType(z_43) == AT_LIST) && !(ATisEmpty(z_43))))
    {
      a_44 = ATgetFirst((ATermList) z_43);
      b_44 = (ATerm) ATgetNext((ATermList) z_43);
      {
        ATerm f_44 = NULL,n_44 = NULL;
        ATerm g_44 = NULL;
        t = SSLgetAnnotations(not_null(z_43));
        {
          g_44 = t;
          if(((f_44 != NULL) && (f_44 != g_44)))
            _fail(g_44);
          else
            f_44 = g_44;
        }
        {
          t = not_null(a_44);
          {
            ATerm p_44 = NULL;
            t = r_51(t);
            {
              n_44 = t;
              {
                t = not_null(b_44);
                {
                  ATerm r_44 = NULL;
                  t = s_51(t);
                  {
                    p_44 = t;
                    {
                      ATerm t_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_44)), not_null(n_44)), not_null(f_44));
                      {
                        t_44 = t;
                        if(((r_44 != NULL) && (r_44 != t_44)))
                          _fail(t_44);
                        else
                          r_44 = t_44;
                      }
                      t = not_null(r_44);
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
  ATerm j_45 = NULL;
  j_45 = t;
  i_45 :
  if(((ATgetType(j_45) == AT_LIST) && ATisEmpty(j_45)))
    {
      {
        ATerm l_45 = NULL,n_45 = NULL;
        ATerm g_26;
        g_26 = t;
        {
          ATerm m_45 = NULL;
          t = SSLgetAnnotations(not_null(j_45));
          {
            m_45 = t;
            if(((l_45 != NULL) && (l_45 != m_45)))
              _fail(m_45);
            else
              l_45 = m_45;
          }
        }
        t = g_26;
        {
          ATerm s_45 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_45));
          {
            s_45 = t;
            if(((n_45 != NULL) && (n_45 != s_45)))
              _fail(s_45);
            else
              n_45 = s_45;
          }
          t = not_null(n_45);
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
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  x_45 :
  if(match_cons(y_45, sym__2))
    {
      z_45 = ATgetArgument(y_45, 0);
      a_46 = ATgetArgument(y_45, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_24, not_null(z_45), not_null(a_46));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_80 (ATerm))
{
  ATerm h_26;
  h_26 = t;
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_26;
        t = d_80(t);
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        {
        }
      }
  }
  t = h_26;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm i_46 = NULL;
      ATerm o_26;
      o_26 = t;
      {
        ATerm g_46 = NULL;
        ATerm h_46 = NULL;
        h_46 = t;
        if(((g_46 != NULL) && (g_46 != h_46)))
          _fail(h_46);
        else
          g_46 = h_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_21, not_null(g_46));
          t = set_config_0(t);
        }
      }
      t = o_26;
      {
        ATerm j_46 = NULL;
        j_46 = t;
        if(((i_46 != NULL) && (i_46 != j_46)))
          _fail(j_46);
        else
          i_46 = j_46;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_46));
      }
      return(t);
    }
    ATerm k_5 (ATerm t)
    {
      ATerm p_26 = t;
      int v_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_26);
            }
          else
            {
              t = w_26;
              {
                t = d_80(t);
                t = Cons_2(t, _id, k_5);
              }
            }
          LocalPopChoice(v_26);
        }
      else
        {
          t = p_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_5, k_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  ATerm c_27;
  c_27 = t;
  {
    ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL;
    s_46 = t;
    o_46 :
    if(match_cons(s_46, sym__3))
      {
        t_46 = ATgetArgument(s_46, 0);
        u_46 = ATgetArgument(s_46, 1);
        v_46 = ATgetArgument(s_46, 2);
        {
          if(((p_46 != NULL) && (p_46 != t_46)))
            _fail(t_46);
          else
            p_46 = t_46;
          {
            if(((q_46 != NULL) && (q_46 != u_46)))
              _fail(u_46);
            else
              q_46 = u_46;
            {
              if(((r_46 != NULL) && (r_46 != v_46)))
                _fail(v_46);
              else
                r_46 = v_46;
              t = SSL_table_put(not_null(p_46), not_null(q_46), not_null(r_46));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_80 (ATerm))
{
  ATerm y_46 = NULL;
  ATerm d_27;
  d_27 = t;
  {
    t = term_f_27;
    t = table_put_0(t);
  }
  t = d_27;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm g_27 = t;
      int h_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_80(t);
          LocalPopChoice(h_27);
        }
      else
        {
          t = g_27;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_5);
    {
      ATerm m_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_27;
          o_27 = t;
          {
            ATerm p_27 = t;
            int q_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_v_25;
                t = get_config_0(t);
                LocalPopChoice(q_27);
              }
            else
              {
                t = p_27;
                t = fetch_1(t, Help_0);
              }
          }
          t = o_27;
          {
            t = system_usage_0(t);
            {
              t = term_s_18;
              t = exit_0(t);
            }
          }
          LocalPopChoice(n_27);
        }
      else
        {
          t = m_27;
          {
            ATerm v_27 = t;
            int w_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm n_5 (ATerm t)
                  {
                    ATerm z_46 = NULL;
                    z_46 = t;
                    if(((y_46 != NULL) && (y_46 != z_46)))
                      _fail(z_46);
                    else
                      y_46 = z_46;
                    return(t);
                  }
                  t = Undefined_1(t, n_5);
                  return(t);
                }
                t = fetch_1(t, m_5);
                {
                  ATerm o_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_46)), term_z_27);
                    return(t);
                  }
                  t = say_1(t, o_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_l_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(w_27);
              }
            else
              {
                t = v_27;
                {
                }
              }
          }
        }
      {
        ATerm a_28;
        a_28 = t;
        {
          t = term_k_22;
          t = table_destroy_0(t);
        }
        t = a_28;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm))
{
  t = parse_options_1(t, z_77);
  {
    t = store_options_0(t);
    {
      t = b_78(t);
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_78);
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            {
              ATerm d_28 = t;
              int g_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_78(t);
                  t = report_success_0(t);
                  LocalPopChoice(g_28);
                }
              else
                {
                  t = d_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm d_78 (ATerm), ATerm e_78 (ATerm))
{
  t = option_wrap_4(t, d_78, default_usage_0, _id, e_78);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm m_73 (ATerm), ATerm n_73 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm j_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_73(t);
        LocalPopChoice(n_28);
      }
    else
      {
        t = j_28;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = xtc_io_1(t, n_73);
    return(t);
  }
  t = option_wrap_2(t, t_5, u_5);
  return(t);
}
ATerm str_tg_str_wrap_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    t = pre_process_input_0(t);
    {
      t = astratego2tg_0(t);
      {
        t = xtc_transform_2(t, m_57, pass_verbose_0);
        t = pp_astratego_0(t);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, input_type_option_0, v_5);
  return(t);
}
ATerm io_sig2fc_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    t = term_o_28;
    return(t);
  }
  t = str_tg_str_wrap_1(t, w_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    t = term_o_28;
    return(t);
  }
  t = str_tg_str_wrap_1(t, y_5);
  return(t);
}
