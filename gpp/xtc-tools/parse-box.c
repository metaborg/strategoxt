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
Symbol sym_None_0;
Symbol sym_Some_1;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_v_25;
ATerm term_e_25;
ATerm term_p_24;
ATerm term_z_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_c_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_q_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_u_15;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_s_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_l_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_z_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_y_7;
ATerm term_u_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_c_7;
void init_constant_terms (void)
{
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__2, term_y_7, term_d_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_y_7, term_j_9);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_v_11);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_l_7, term_v_12);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_v_12);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__2, term_b_18, term_v_12);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_y_20);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_v_12);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__3, term_x_20, term_y_20, (ATerm) ATempty);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.tbl", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_implode_asfix_0 (ATerm);
ATerm pass_v_verbose_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm g_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm y_71 (ATerm));
ATerm repeat_1 (ATerm, ATerm s_77 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm f_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm h_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm));
ATerm union_1 (ATerm, ATerm e_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm q_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm y_58 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm d_74 (ATerm));
ATerm assert_1 (ATerm, ATerm z_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm n_86 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm p_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm f_74 (ATerm), ATerm g_74 (ATerm));
ATerm xtc_sglr_1 (ATerm, ATerm w_86 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm f_63 (ATerm), ATerm g_63 (ATerm));
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
ATerm if_verbose1_1 (ATerm, ATerm c_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_77 (ATerm));
ATerm Program_1 (ATerm, ATerm w_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_86 (ATerm));
ATerm Undefined_1 (ATerm, ATerm x_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_76 (ATerm));
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
ATerm debug_1 (ATerm, ATerm g_86 (ATerm));
ATerm map_1 (ATerm, ATerm h_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_52 (ATerm), ATerm d_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm y_73 (ATerm), ATerm z_73 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm x_73 (ATerm));
ATerm io_parse_box_0 (ATerm);
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
        ATerm v_6 = t;
        int w_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_1), not_null(e_1));
            LocalPopChoice(w_6);
          }
        else
          {
            t = v_6;
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
  t = term_c_7;
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        t = term_j_7;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_2), term_j_7);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_2)), term_c_7);
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_k_7;
    return(t);
  }
  t = xtc_transform_2(t, b_0, pass_verbose_0);
  return(t);
}
ATerm pass_v_verbose_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm e_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_l_7);
      return(t);
    }
    t = if_verbose1_1(t, e_0);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  t = SSL_table_keys(not_null(b_3));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  {
    t = table_keys_0(t);
    {
      ATerm f_0 (ATerm t)
      {
        ATerm j_3 = NULL;
        ATerm l_3 = NULL;
        j_3 = t;
        {
          ATerm m_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_3), not_null(j_3));
          {
            t = table_get_0(t);
            {
              m_3 = t;
              if(((l_3 != NULL) && (l_3 != m_3)))
                _fail(m_3);
              else
                l_3 = m_3;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_3), not_null(l_3));
        }
        return(t);
      }
      t = map_1(t, f_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm p_0 (ATerm t)
  {
    ATerm m_7;
    m_7 = t;
    {
      ATerm r_3 = NULL;
      ATerm s_3 = NULL;
      t = term_c_7;
      {
        t = get_config_0(t);
        {
          s_3 = t;
          if(((r_3 != NULL) && (r_3 != s_3)))
            _fail(s_3);
          else
            r_3 = s_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_3), term_n_7);
        t = geq_0(t);
      }
    }
    t = m_7;
    t = g_59(t);
    return(t);
  }
  t = try_1(t, p_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm t_7;
  t_7 = t;
  {
    ATerm v_3 = NULL;
    ATerm w_3 = NULL;
    w_3 = t;
    if(((v_3 != NULL) && (v_3 != w_3)))
      _fail(w_3);
    else
      v_3 = w_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_7, not_null(v_3));
      t = printnl_0(t);
    }
  }
  t = t_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm c_4 = NULL;
  ATerm e_4 = NULL,f_4 = NULL;
  c_4 = t;
  {
    ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_4)));
    {
      t = table_get_0(t);
      {
        g_4 = t;
        a_4 :
        if(((ATgetType(g_4) == AT_LIST) && !(ATisEmpty(g_4))))
          {
            h_4 = ATgetFirst((ATermList) g_4);
            k_4 = (ATerm) ATgetNext((ATermList) g_4);
            b_4 :
            if(match_cons(h_4, sym__2))
              {
                i_4 = ATgetArgument(h_4, 0);
                j_4 = ATgetArgument(h_4, 1);
                {
                  if(((e_4 != NULL) && (e_4 != i_4)))
                    _fail(i_4);
                  else
                    e_4 = i_4;
                  if(((f_4 != NULL) && (f_4 != j_4)))
                    _fail(j_4);
                  else
                    f_4 = j_4;
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
    t = not_null(f_4);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  q_4 :
  if(match_cons(r_4, sym__2))
    {
      s_4 = ATgetArgument(r_4, 0);
      t_4 = ATgetArgument(r_4, 1);
      {
        ATerm w_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_4)));
        {
          t = table_get_0(t);
          {
            ATerm q_0 (ATerm t)
            {
              ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
              x_4 = t;
              p_4 :
              if(match_cons(x_4, sym__2))
                {
                  y_4 = ATgetArgument(x_4, 0);
                  z_4 = ATgetArgument(x_4, 1);
                  {
                    if(((t_4 != NULL) && (t_4 != y_4)))
                      _fail(y_4);
                    else
                      t_4 = y_4;
                    if(((w_4 != NULL) && (w_4 != z_4)))
                      _fail(z_4);
                    else
                      w_4 = z_4;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, q_0);
          }
        }
        t = not_null(w_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm y_71 (ATerm))
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = filter_1(t, y_71);
              return(t);
            }
            t = Cons_2(t, y_71, r_0);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            {
              ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
              e_5 = t;
              d_5 :
              if(((ATgetType(e_5) == AT_LIST) && !(ATisEmpty(e_5))))
                {
                  f_5 = ATgetFirst((ATermList) e_5);
                  g_5 = (ATerm) ATgetNext((ATermList) e_5);
                  {
                    t = not_null(g_5);
                    t = filter_1(t, y_71);
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
ATerm repeat_1 (ATerm t, ATerm s_77 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      t = s_77(t);
      t = j_5(t);
      return(t);
    }
    t = try_1(t, s_0);
    return(t);
  }
  t = j_5(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = term_f_8;
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
  t = repeat_1(t, t_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm j_8;
    j_8 = t;
    {
      ATerm l_5 = NULL;
      ATerm m_5 = NULL;
      t = term_c_7;
      {
        t = get_config_0(t);
        {
          m_5 = t;
          if(((l_5 != NULL) && (l_5 != m_5)))
            _fail(m_5);
          else
            l_5 = m_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), term_k_8);
        t = geq_0(t);
      }
    }
    t = j_8;
    t = f_59(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm m_8;
    m_8 = t;
    {
      ATerm p_5 = NULL;
      ATerm q_5 = NULL;
      t = term_c_7;
      {
        t = get_config_0(t);
        {
          q_5 = t;
          if(((p_5 != NULL) && (p_5 != q_5)))
            _fail(q_5);
          else
            p_5 = q_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_n_8);
        t = geq_0(t);
      }
    }
    t = m_8;
    t = h_59(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  t_5 :
  if(match_cons(u_5, sym__2))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      if(((v_5 != NULL) && (v_5 != w_5)))
        _fail(w_5);
      else
        v_5 = w_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm))
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  c_6 = t;
  b_6 :
  if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
    {
      d_6 = ATgetFirst((ATermList) c_6);
      e_6 = (ATerm) ATgetNext((ATermList) c_6);
      {
        t = j_70(t);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm h_6 = NULL;
            h_6 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(h_6));
              t = i_70(t);
            }
            return(t);
          }
          t = fetch_1(t, w_0);
        }
        t = not_null(e_6);
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
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
  n_6 = t;
  m_6 :
  if(match_cons(n_6, sym__2))
    {
      o_6 = ATgetArgument(n_6, 0);
      p_6 = ATgetArgument(n_6, 1);
      {
        t = not_null(o_6);
        {
          ATerm t_6 (ATerm t)
          {
            ATerm o_8 = t;
            int r_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_6);
                LocalPopChoice(r_8);
              }
            else
              {
                t = o_8;
                {
                  ATerm s_8 = t;
                  int v_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_0 (ATerm t)
                      {
                        t = not_null(p_6);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_70, x_0);
                      t = t_6(t);
                      LocalPopChoice(v_8);
                    }
                  else
                    {
                      t = s_8;
                      t = Cons_2(t, _id, t_6);
                    }
                }
              }
            return(t);
          }
          t = t_6(t);
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
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym__3))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      b_7 = ATgetArgument(y_6, 2);
      {
        ATerm w_8;
        w_8 = t;
        {
          ATerm f_7 = NULL;
          ATerm g_7 = NULL,i_7 = NULL;
          ATerm h_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), not_null(a_7));
          {
            ATerm x_8 = t;
            int y_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(y_8);
              }
            else
              {
                t = x_8;
                t = (ATerm) ATempty;
              }
            {
              h_7 = t;
              if(((g_7 != NULL) && (g_7 != h_7)))
                _fail(h_7);
              else
                g_7 = h_7;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), not_null(b_7));
            {
              t = union_0(t);
              {
                i_7 = t;
                if(((f_7 != NULL) && (f_7 != i_7)))
                  _fail(i_7);
                else
                  f_7 = i_7;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_6), not_null(a_7), not_null(f_7));
            t = set_0(t);
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
ATerm table_putlist_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
  q_7 = t;
  p_7 :
  if(match_cons(q_7, sym__2))
    {
      r_7 = ATgetArgument(q_7, 0);
      s_7 = ATgetArgument(q_7, 1);
      {
        t = not_null(s_7);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
            v_7 = t;
            o_7 :
            if(match_cons(v_7, sym__2))
              {
                w_7 = ATgetArgument(v_7, 0);
                x_7 = ATgetArgument(v_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_7), not_null(w_7), not_null(x_7));
                  t = q_59(t);
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
ATerm xtc_read_0 (ATerm t)
{
  ATerm e_8 = NULL;
  ATerm g_8 = NULL;
  e_8 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm b_1 (ATerm t)
      {
        t = term_z_8;
        return(t);
      }
      t = debug_1(t, b_1);
      return(t);
    }
    t = if_verbose5_1(t, a_1);
    {
      ATerm f_9 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_8)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_9;
        }
      {
        ATerm i_9;
        i_9 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_7, term_j_9, (ATerm) ATinsert(ATempty, not_null(e_8)));
          t = table_put_0(t);
        }
        t = i_9;
        {
          ATerm f_1 (ATerm t)
          {
            ATerm g_1 (ATerm t)
            {
              t = term_k_9;
              return(t);
            }
            t = debug_1(t, g_1);
            return(t);
          }
          t = if_verbose4_1(t, f_1);
          {
            ATerm l_9 = t;
            int m_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(m_9);
              }
            else
              {
                t = l_9;
                t = (ATerm) ATempty;
              }
            {
              ATerm h_1 (ATerm t)
              {
                ATerm i_1 (ATerm t)
                {
                  t = term_r_9;
                  return(t);
                }
                t = say_1(t, i_1);
                return(t);
              }
              t = if_verbose6_1(t, h_1);
              {
                ATerm h_8 = NULL;
                h_8 = t;
                if(((g_8 != NULL) && (g_8 != h_8)))
                  _fail(h_8);
                else
                  g_8 = h_8;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_7, not_null(g_8));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm j_1 (ATerm t)
                      {
                        ATerm k_1 (ATerm t)
                        {
                          t = term_s_9;
                          return(t);
                        }
                        t = say_1(t, k_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, j_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_y_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_8)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm m_1 (ATerm t)
                              {
                                t = term_r_9;
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
  ATerm l_8 = NULL;
  l_8 = t;
  t = SSL_getenv(not_null(l_8));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_9;
      t = get_config_0(t);
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      {
        ATerm x_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_10;
            t = getenv_0(t);
            LocalPopChoice(a_10);
          }
        else
          {
            t = x_9;
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
      t = term_c_10;
      return(t);
    }
    t = debug_1(t, o_1);
    return(t);
  }
  t = if_verbose5_1(t, n_1);
  {
    ATerm e_10;
    e_10 = t;
    {
      ATerm f_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_l_10;
          t = table_get_0(t);
          LocalPopChoice(g_10);
        }
      else
        {
          t = f_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = e_10;
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          t = term_m_10;
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
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = term_q_10;
          return(t);
        }
        t = debug_1(t, s_1);
        return(t);
      }
      t = if_verbose5_1(t, r_1);
      {
        t = xtc_load_0(t);
        {
          ATerm r_10 = t;
          int s_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(s_10);
            }
          else
            {
              t = r_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm t_1 (ATerm t)
            {
              ATerm u_1 (ATerm t)
              {
                t = term_q_10;
                return(t);
              }
              t = debug_1(t, u_1);
              return(t);
            }
            t = if_verbose5_1(t, t_1);
          }
        }
      }
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      {
        ATerm p_8 = NULL;
        ATerm q_8 = NULL;
        q_8 = t;
        if(((p_8 != NULL) && (p_8 != q_8)))
          _fail(q_8);
        else
          p_8 = q_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_10), not_null(p_8)), term_t_10);
          {
            t = error_0(t);
            {
              ATerm v_1 (ATerm t)
              {
                t = term_y_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm w_1 (ATerm t)
                    {
                      t = term_w_10;
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm t_8 = NULL;
  ATerm a_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_8 = NULL;
      u_8 = t;
      {
        if(((t_8 != NULL) && (t_8 != u_8)))
          _fail(u_8);
        else
          t_8 = u_8;
        t = SSL_ReadFromFile(not_null(t_8));
      }
      LocalPopChoice(c_11);
    }
  else
    {
      t = a_11;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_i_11;
          return(t);
        }
        t = debug_1(t, x_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym_stdin_0))
    {
      ATerm d_9 = NULL;
      ATerm e_9 = NULL;
      t = term_j_11;
      {
        t = ReadFromFile_0(t);
        {
          e_9 = t;
          if(((d_9 != NULL) && (d_9 != e_9)))
            _fail(e_9);
          else
            d_9 = e_9;
        }
      }
      t = not_null(d_9);
    }
  else
    {
      if(match_cons(b_9, sym_FILE_1))
        {
          c_9 = ATgetArgument(b_9, 0);
          {
            ATerm g_9 = NULL;
            ATerm h_9 = NULL;
            t = not_null(c_9);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  h_9 = t;
                  if(((g_9 != NULL) && (g_9 != h_9)))
                    _fail(h_9);
                  else
                    g_9 = h_9;
                }
              }
            }
            t = not_null(g_9);
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
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym__2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      t = SSL_WriteToBinaryFile(not_null(p_9), not_null(q_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm w_9 = NULL;
  ATerm y_9 = NULL;
  w_9 = t;
  {
    ATerm z_9 = NULL;
    t = xtc_new_file_0(t);
    {
      z_9 = t;
      {
        if(((y_9 != NULL) && (y_9 != z_9)))
          _fail(z_9);
        else
          y_9 = z_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_9), not_null(w_9));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(y_9);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_9));
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
  ATerm d_10 = NULL;
  d_10 = t;
  t = SSL_close_file(not_null(d_10));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
  i_10 = t;
  h_10 :
  if(match_cons(i_10, sym__2))
    {
      j_10 = ATgetArgument(i_10, 0);
      k_10 = ATgetArgument(i_10, 1);
      t = SSL_execvp(not_null(j_10), not_null(k_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  t = SSL_waitpid(not_null(p_10));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm z_10 = NULL;
  ATerm b_11 = NULL;
  z_10 = t;
  {
    t = fork_0(t);
    {
      b_11 = t;
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_11 = NULL;
            d_11 = t;
            v_10 :
            if(match_int(d_11, 0))
              {
                t = not_null(z_10);
                t = y_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            {
              ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
              t = not_null(b_11);
              {
                t = waitpid_0(t);
                {
                  e_11 = t;
                  x_10 :
                  if(match_cons(e_11, sym_WaitStatus_3))
                    {
                      f_11 = ATgetArgument(e_11, 0);
                      g_11 = ATgetArgument(e_11, 1);
                      h_11 = ATgetArgument(e_11, 2);
                      y_10 :
                      if(match_int(f_11, 0))
                        {
                          t = not_null(z_10);
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
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym__2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      {
        ATerm y_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), not_null(q_11));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, y_1);
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
ATerm xtc_command_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm w_11 = NULL;
  ATerm m_11;
  m_11 = t;
  {
    ATerm x_11 = NULL;
    t = d_74(t);
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
  t = m_11;
  {
    ATerm r_11;
    r_11 = t;
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
    t = r_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_74 (ATerm))
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
        ATerm s_11;
        s_11 = t;
        {
          ATerm p_12 = NULL;
          ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
          t = z_74(t);
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
                    ATerm t_11 = t;
                    int u_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), term_v_11);
                        t = table_get_0(t);
                        LocalPopChoice(u_11);
                      }
                    else
                      {
                        t = t_11;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(m_12), term_v_11, (ATerm) ATinsert(CheckATermList(not_null(o_12)), (ATerm) ATinsert(CheckATermList(not_null(n_12)), not_null(i_12))));
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
ATerm obsolete_1 (ATerm t, ATerm n_86 (ATerm))
{
  ATerm a_12;
  a_12 = t;
  {
    t = n_86(t);
    {
      ATerm z_1 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = debug_1(t, z_1);
    }
  }
  t = a_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  ATerm c_12 = t;
  int d_12 = stack_ptr;
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
      LocalPopChoice(d_12);
      t = SSL_open_file(not_null(b_13), not_null(a_13));
    }
  else
    {
      t = c_12;
      {
        ATerm f_13 = NULL;
        ATerm g_13 = NULL;
        ATerm b_2 (ATerm t)
        {
          t = term_e_12;
          return(t);
        }
        t = obsolete_1(t, b_2);
        {
          f_13 = t;
          {
            if(((b_13 != NULL) && (b_13 != f_13)))
              _fail(f_13);
            else
              b_13 = f_13;
            {
              ATerm k_12;
              k_12 = t;
              {
                ATerm h_13 = NULL;
                t = term_l_12;
                {
                  h_13 = t;
                  if(((g_13 != NULL) && (g_13 != h_13)))
                    _fail(h_13);
                  else
                    g_13 = h_13;
                }
              }
              t = k_12;
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
    ATerm t_12;
    t_12 = t;
    {
      ATerm q_13 = NULL;
      t = term_u_12;
      {
        q_13 = t;
        if(((p_13 != NULL) && (p_13 != q_13)))
          _fail(q_13);
        else
          p_13 = q_13;
      }
    }
    t = t_12;
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
  t = term_v_12;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_13), term_w_12);
    {
      t = conc_strings_0(t);
      {
        ATerm c_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, c_2);
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
      ATerm y_12;
      y_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), term_l_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), term_v_12);
            {
              ATerm d_2 (ATerm t)
              {
                t = term_z_12;
                return(t);
              }
              t = assert_1(t, d_2);
            }
          }
        }
      }
      t = y_12;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_14)), term_i_13));
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_14)), term_i_13), not_null(k_14)), term_j_13));
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
      ATerm k_13;
      k_13 = t;
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
      t = k_13;
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
ATerm FILE_1 (ATerm t, ATerm p_52 (ATerm))
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
            t = p_52(t);
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
ATerm xtc_transform_2 (ATerm t, ATerm f_74 (ATerm), ATerm g_74 (ATerm))
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_13 = t;
      int r_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(r_13);
        }
      else
        {
          t = o_13;
          t = stdin_0(t);
        }
      LocalPopChoice(m_13);
      t = xtc_transform_file_2(t, f_74, g_74);
    }
  else
    {
      t = l_13;
      t = xtc_transform_term_2(t, f_74, g_74);
    }
  return(t);
}
ATerm xtc_sglr_1 (ATerm t, ATerm w_86 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    t = term_s_13;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm i_16 = NULL,k_16 = NULL;
    ATerm t_13;
    t_13 = t;
    {
      ATerm j_16 = NULL;
      t = term_v_12;
      {
        t = w_86(t);
        {
          t = xtc_find_0(t);
          {
            j_16 = t;
            if(((i_16 != NULL) && (i_16 != j_16)))
              _fail(j_16);
            else
              i_16 = j_16;
          }
        }
      }
    }
    t = t_13;
    {
      ATerm l_16 = NULL;
      t = term_v_12;
      {
        t = pass_v_verbose_0(t);
        {
          l_16 = t;
          if(((k_16 != NULL) && (k_16 != l_16)))
            _fail(l_16);
          else
            k_16 = l_16;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(k_16)), not_null(i_16)), term_x_13), term_w_13);
    }
    return(t);
  }
  t = xtc_transform_2(t, e_2, f_2);
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  q_16 = t;
  p_16 :
  if(match_cons(q_16, sym__2))
    {
      r_16 = ATgetArgument(q_16, 0);
      s_16 = ATgetArgument(q_16, 1);
      t = SSL_copy(not_null(r_16), not_null(s_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm a_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym_stderr_0))
    {
      ATerm c_17 = NULL,e_17 = NULL;
      ATerm y_13;
      y_13 = t;
      {
        ATerm d_17 = NULL;
        t = SSLgetAnnotations(not_null(a_17));
        {
          d_17 = t;
          if(((c_17 != NULL) && (c_17 != d_17)))
            _fail(d_17);
          else
            c_17 = d_17;
        }
      }
      t = y_13;
      {
        ATerm f_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(c_17));
        {
          f_17 = t;
          if(((e_17 != NULL) && (e_17 != f_17)))
            _fail(f_17);
          else
            e_17 = f_17;
        }
        t = not_null(e_17);
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
  ATerm n_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym_stdout_0))
    {
      ATerm p_17 = NULL,r_17 = NULL;
      ATerm a_14;
      a_14 = t;
      {
        ATerm q_17 = NULL;
        t = SSLgetAnnotations(not_null(n_17));
        {
          q_17 = t;
          if(((p_17 != NULL) && (p_17 != q_17)))
            _fail(q_17);
          else
            p_17 = q_17;
        }
      }
      t = a_14;
      {
        ATerm s_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(p_17));
        {
          s_17 = t;
          if(((r_17 != NULL) && (r_17 != s_17)))
            _fail(s_17);
          else
            r_17 = s_17;
        }
        t = not_null(r_17);
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
  ATerm e_18 = NULL,f_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym_FILE_1))
    {
      f_18 = ATgetArgument(e_18, 0);
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_18 = NULL;
            ATerm i_18 = NULL;
            t = m_0(t);
            {
              i_18 = t;
              {
                if(((h_18 != NULL) && (h_18 != i_18)))
                  _fail(i_18);
                else
                  h_18 = i_18;
                {
                  ATerm d_14 = t;
                  int e_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(e_14);
                    }
                  else
                    {
                      t = d_14;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(h_18));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_18));
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            {
              ATerm f_14 = t;
              int g_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_18 = NULL;
                  ATerm l_18 = NULL;
                  t = m_0(t);
                  {
                    l_18 = t;
                    {
                      if(((k_18 != NULL) && (k_18 != l_18)))
                        _fail(l_18);
                      else
                        k_18 = l_18;
                      {
                        ATerm h_14 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm p_14 = t;
                            int u_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(u_14);
                              }
                            else
                              {
                                t = p_14;
                                {
                                  ATerm v_14 = t;
                                  int w_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(w_14);
                                    }
                                  else
                                    {
                                      t = v_14;
                                      {
                                        ATerm m_18 = NULL;
                                        m_18 = t;
                                        if(((f_18 != NULL) && (f_18 != m_18)))
                                          _fail(m_18);
                                        else
                                          f_18 = m_18;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = h_14;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(k_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_18));
                  LocalPopChoice(g_14);
                }
              else
                {
                  t = f_14;
                  {
                    ATerm o_18 = NULL;
                    t = m_0(t);
                    {
                      o_18 = t;
                      if(((f_18 != NULL) && (f_18 != o_18)))
                        _fail(o_18);
                      else
                        f_18 = o_18;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_18));
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
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  y_18 :
  if(((ATgetType(z_18) == AT_LIST) && !(ATisEmpty(z_18))))
    {
      a_19 = ATgetFirst((ATermList) z_18);
      b_19 = (ATerm) ATgetNext((ATermList) z_18);
      t = not_null(b_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym__2))
    {
      i_19 = ATgetArgument(h_19, 0);
      j_19 = ATgetArgument(h_19, 1);
      {
        ATerm x_14;
        x_14 = t;
        {
          ATerm m_19 = NULL;
          ATerm n_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), not_null(j_19));
          {
            ATerm y_14 = t;
            int z_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(z_14);
              }
            else
              {
                t = y_14;
                t = (ATerm) ATempty;
              }
            {
              n_19 = t;
              if(((m_19 != NULL) && (m_19 != n_19)))
                _fail(n_19);
              else
                m_19 = n_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_19), not_null(j_19), not_null(m_19));
            t = table_put_0(t);
          }
        }
        t = x_14;
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
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
  ATerm a_15;
  a_15 = t;
  {
    ATerm d_20 = NULL;
    ATerm e_20 = NULL,f_20 = NULL,i_20 = NULL;
    t = w_74(t);
    {
      d_20 = t;
      {
        if(((c_20 != NULL) && (c_20 != d_20)))
          _fail(d_20);
        else
          c_20 = d_20;
        {
          ATerm b_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_20), term_v_11);
              t = table_get_0(t);
              LocalPopChoice(c_15);
            }
          else
            {
              t = b_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            e_20 = t;
            z_19 :
            if(((ATgetType(e_20) == AT_LIST) && !(ATisEmpty(e_20))))
              {
                f_20 = ATgetFirst((ATermList) e_20);
                i_20 = (ATerm) ATgetNext((ATermList) e_20);
                {
                  if(((b_20 != NULL) && (b_20 != f_20)))
                    _fail(f_20);
                  else
                    b_20 = f_20;
                  {
                    if(((a_20 != NULL) && (a_20 != i_20)))
                      _fail(i_20);
                    else
                      a_20 = i_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(c_20), term_v_11, not_null(a_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(b_20);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm j_20 = NULL;
                              j_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_20), not_null(j_20));
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
  t = a_15;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm u_20 = NULL;
  u_20 = t;
  t = SSL_remove(not_null(u_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm f_63 (ATerm), ATerm g_63 (ATerm))
{
  ATerm f_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_63(t);
      t = g_63(t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = f_15;
      {
        t = g_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm z_20 = NULL;
  ATerm l_15;
  l_15 = t;
  {
    ATerm a_21 = NULL;
    ATerm b_21 = NULL;
    t = v_74(t);
    {
      a_21 = t;
      {
        if(((z_20 != NULL) && (z_20 != a_21)))
          _fail(a_21);
        else
          z_20 = a_21;
        {
          ATerm c_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_20), term_v_11);
          {
            ATerm m_15 = t;
            int n_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_15);
              }
            else
              {
                t = m_15;
                t = (ATerm) ATempty;
              }
            {
              c_21 = t;
              if(((b_21 != NULL) && (b_21 != c_21)))
                _fail(c_21);
              else
                b_21 = c_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_20), term_v_11, (ATerm) ATinsert(CheckATermList(not_null(b_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_15;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm t_73 (ATerm))
{
  ATerm h_21 = NULL,i_21 = NULL;
  ATerm h_2 (ATerm t)
  {
    t = term_z_12;
    return(t);
  }
  t = begin_scope_1(t, h_2);
  {
    ATerm i_2 (ATerm t)
    {
      ATerm o_15;
      o_15 = t;
      {
        ATerm j_21 = NULL,p_21 = NULL,q_21 = NULL;
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_15;
            t = table_get_0(t);
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          j_21 = t;
          g_21 :
          if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
            {
              p_21 = ATgetFirst((ATermList) j_21);
              q_21 = (ATerm) ATgetNext((ATermList) j_21);
              {
                if(((i_21 != NULL) && (i_21 != p_21)))
                  _fail(p_21);
                else
                  i_21 = p_21;
                {
                  if(((h_21 != NULL) && (h_21 != q_21)))
                    _fail(q_21);
                  else
                    h_21 = q_21;
                  {
                    t = not_null(i_21);
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
      t = o_15;
      {
        ATerm k_2 (ATerm t)
        {
          t = term_z_12;
          return(t);
        }
        t = end_scope_1(t, k_2);
      }
      return(t);
    }
    t = restore_always_2(t, t_73, i_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm l_2 (ATerm t)
  {
    ATerm v_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_21 = NULL;
        ATerm y_21 = NULL;
        t = term_j_13;
        {
          t = get_config_0(t);
          {
            y_21 = t;
            if(((x_21 != NULL) && (x_21 != y_21)))
              _fail(y_21);
            else
              x_21 = y_21;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_21));
        LocalPopChoice(z_15);
      }
    else
      {
        t = v_15;
        t = term_j_11;
      }
    {
      t = u_73(t);
      {
        ATerm m_2 (ATerm t)
        {
          ATerm c_16 = t;
          int d_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_i_13;
              t = get_config_0(t);
              LocalPopChoice(d_16);
            }
          else
            {
              t = c_16;
              t = term_e_16;
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
    ATerm j_22 = NULL;
    j_22 = t;
    h_22 :
    if(!(match_string(j_22, "-v")))
      {
        if(!(match_string(j_22, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_f_16;
    t = set_config_0(t);
    t = term_g_16;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_h_16;
    return(t);
  }
  t = Option_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm n_22 = NULL;
    n_22 = t;
    k_22 :
    if(!(match_string(n_22, "-k")))
      {
        if(!(match_string(n_22, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm m_16;
    m_16 = t;
    {
      ATerm o_22 = NULL;
      ATerm p_22 = NULL;
      t = string_to_int_0(t);
      {
        p_22 = t;
        if(((o_22 != NULL) && (o_22 != p_22)))
          _fail(p_22);
        else
          o_22 = p_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_16, not_null(o_22));
        t = set_config_0(t);
      }
    }
    t = m_16;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_o_16;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, v_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  t = SSL_string_to_int(not_null(s_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 (ATerm t)
      {
        ATerm a_23 = NULL;
        a_23 = t;
        v_22 :
        if(!(match_string(a_23, "-S")))
          {
            if(!(match_string(a_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_w_16;
        t = set_config_0(t);
        t = term_x_16;
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_y_16;
        return(t);
      }
      t = Option_3(t, w_2, x_2, y_2);
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      {
        ATerm b_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              ATerm b_23 = NULL;
              b_23 = t;
              w_22 :
              if(!(match_string(b_23, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              ATerm e_23 = NULL;
              ATerm h_17;
              h_17 = t;
              {
                ATerm c_23 = NULL;
                ATerm d_23 = NULL;
                t = string_to_int_0(t);
                {
                  d_23 = t;
                  if(((c_23 != NULL) && (c_23 != d_23)))
                    _fail(d_23);
                  else
                    c_23 = d_23;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_7, not_null(c_23));
                  t = set_config_0(t);
                }
              }
              t = h_17;
              {
                ATerm f_23 = NULL;
                f_23 = t;
                if(((e_23 != NULL) && (e_23 != f_23)))
                  _fail(f_23);
                else
                  e_23 = f_23;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_23));
              }
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_i_17;
              return(t);
            }
            t = ArgOption_3(t, z_2, a_3, c_3);
            LocalPopChoice(g_17);
          }
        else
          {
            t = b_17;
            {
              ATerm d_3 (ATerm t)
              {
                ATerm g_23 = NULL;
                g_23 = t;
                z_22 :
                if(!(match_string(g_23, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = term_k_17;
                t = set_config_0(t);
                t = term_l_17;
                return(t);
              }
              ATerm f_3 (ATerm t)
              {
                t = term_o_17;
                return(t);
              }
              t = Option_3(t, d_3, e_3, f_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm m_23 = NULL;
    m_23 = t;
    j_23 :
    if(!(match_string(m_23, "-o")))
      {
        if(!(match_string(m_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm p_23 = NULL;
    ATerm x_17;
    x_17 = t;
    {
      ATerm n_23 = NULL;
      ATerm o_23 = NULL;
      o_23 = t;
      if(((n_23 != NULL) && (n_23 != o_23)))
        _fail(o_23);
      else
        n_23 = o_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_13, not_null(n_23));
        t = set_config_0(t);
      }
    }
    t = x_17;
    {
      ATerm q_23 = NULL;
      q_23 = t;
      if(((p_23 != NULL) && (p_23 != q_23)))
        _fail(q_23);
      else
        p_23 = q_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_23));
    }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_y_17;
    return(t);
  }
  t = ArgOption_3(t, g_3, i_3, k_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm u_23 = NULL;
          u_23 = t;
          t_23 :
          if(!(match_string(u_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_3 (ATerm t)
        {
          t = term_c_18;
          t = set_config_0(t);
          t = term_g_18;
          return(t);
        }
        ATerm p_3 (ATerm t)
        {
          t = term_j_18;
          return(t);
        }
        t = Option_3(t, n_3, o_3, p_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  f_24 = t;
  d_24 :
  if(match_string(f_24, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(f_24) == AT_LIST) && !(ATisEmpty(f_24))))
        {
          g_24 = ATgetFirst((ATermList) f_24);
          h_24 = (ATerm) ATgetNext((ATermList) f_24);
          e_24 :
          if(((ATgetType(h_24) == AT_LIST) && !(ATisEmpty(h_24))))
            {
              i_24 = ATgetFirst((ATermList) h_24);
              j_24 = (ATerm) ATgetNext((ATermList) h_24);
              {
                ATerm n_24 = NULL;
                ATerm n_18;
                n_18 = t;
                {
                  t = not_null(g_24);
                  t = j_0(t);
                }
                t = n_18;
                {
                  ATerm r_24 = NULL;
                  t = not_null(i_24);
                  {
                    t = k_0(t);
                    {
                      r_24 = t;
                      if(((n_24 != NULL) && (n_24 != r_24)))
                        _fail(r_24);
                      else
                        n_24 = r_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_24)), not_null(n_24));
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
  ATerm q_3 (ATerm t)
  {
    ATerm z_24 = NULL;
    z_24 = t;
    w_24 :
    if(!(match_string(z_24, "-i")))
      {
        if(!(match_string(z_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm c_25 = NULL;
    ATerm p_18;
    p_18 = t;
    {
      ATerm a_25 = NULL;
      ATerm b_25 = NULL;
      b_25 = t;
      if(((a_25 != NULL) && (a_25 != b_25)))
        _fail(b_25);
      else
        a_25 = b_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(a_25));
        t = set_config_0(t);
      }
    }
    t = p_18;
    {
      ATerm d_25 = NULL;
      d_25 = t;
      if(((c_25 != NULL) && (c_25 != d_25)))
        _fail(d_25);
      else
        c_25 = d_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_25));
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_q_18;
    return(t);
  }
  t = ArgOption_3(t, q_3, t_3, u_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm i_25 = NULL;
  ATerm v_18;
  v_18 = t;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm j_25 = NULL,k_25 = NULL;
      j_25 = t;
      h_25 :
      if(match_cons(j_25, sym_Program_1))
        {
          k_25 = ATgetArgument(j_25, 0);
          if(((i_25 != NULL) && (i_25 != k_25)))
            _fail(k_25);
          else
            i_25 = k_25;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, x_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_18), not_null(i_25)), term_w_18));
      {
        t = printnl_0(t);
        {
          t = term_j_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_18;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATempty, term_c_19));
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
  ATerm n_25 = NULL;
  n_25 = t;
  t = SSL_TicksToSeconds(not_null(n_25));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  s_25 = t;
  r_25 :
  if(match_cons(s_25, sym__2))
    {
      t_25 = ATgetArgument(s_25, 0);
      u_25 = ATgetArgument(s_25, 1);
      {
        ATerm d_19 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_25), not_null(u_25));
            LocalPopChoice(e_19);
          }
        else
          {
            t = d_19;
            t = SSL_addr(not_null(t_25), not_null(u_25));
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
  ATerm f_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_70(t);
      LocalPopChoice(k_19);
    }
  else
    {
      t = f_19;
      {
        ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
        b_26 = t;
        a_26 :
        if(((ATgetType(b_26) == AT_LIST) && !(ATisEmpty(b_26))))
          {
            c_26 = ATgetFirst((ATermList) b_26);
            d_26 = (ATerm) ATgetNext((ATermList) b_26);
            {
              ATerm g_26 = NULL;
              ATerm h_26 = NULL;
              t = not_null(d_26);
              {
                t = foldr_2(t, v_70, w_70);
                {
                  h_26 = t;
                  if(((g_26 != NULL) && (g_26 != h_26)))
                    _fail(h_26);
                  else
                    g_26 = h_26;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_26), not_null(g_26));
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
  ATerm o_26 = NULL;
  ATerm q_26 = NULL;
  o_26 = t;
  {
    ATerm r_26 = NULL;
    ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
    t = not_null(o_26);
    {
      r_26 = t;
      {
        t = SSL_explode_term(not_null(r_26));
        {
          t_26 = t;
          n_26 :
          if(match_cons(t_26, sym__2))
            {
              u_26 = ATgetArgument(t_26, 0);
              v_26 = ATgetArgument(t_26, 1);
              if(((q_26 != NULL) && (q_26 != v_26)))
                _fail(v_26);
              else
                q_26 = v_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_26);
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
    ATerm y_3 (ATerm t)
    {
      t = term_v_16;
      return(t);
    }
    t = crush_2(t, y_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym__2))
    {
      c_27 = ATgetArgument(b_27, 0);
      d_27 = ATgetArgument(b_27, 1);
      {
        ATerm l_19;
        l_19 = t;
        {
          ATerm o_19 = t;
          int p_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_27), not_null(d_27));
              LocalPopChoice(p_19);
            }
          else
            {
              t = o_19;
              t = SSL_gtr(not_null(c_27), not_null(d_27));
            }
        }
        t = l_19;
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
  ATerm j_27 = NULL;
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
      k_27 = t;
      i_27 :
      if(match_cons(k_27, sym__2))
        {
          l_27 = ATgetArgument(k_27, 0);
          m_27 = ATgetArgument(k_27, 1);
          {
            if(((j_27 != NULL) && (j_27 != l_27)))
              _fail(l_27);
            else
              j_27 = l_27;
            if(((j_27 != NULL) && (j_27 != m_27)))
              _fail(m_27);
            else
              j_27 = m_27;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm s_19;
    s_19 = t;
    {
      ATerm p_27 = NULL;
      ATerm q_27 = NULL;
      t = term_c_7;
      {
        t = get_config_0(t);
        {
          q_27 = t;
          if(((p_27 != NULL) && (p_27 != q_27)))
            _fail(q_27);
          else
            p_27 = q_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), term_j_7);
        t = geq_0(t);
      }
    }
    t = s_19;
    t = c_59(t);
    return(t);
  }
  t = try_1(t, z_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm u_27 = NULL,w_27 = NULL;
    ATerm t_19;
    t_19 = t;
    {
      ATerm v_27 = NULL;
      t = run_time_0(t);
      {
        v_27 = t;
        if(((u_27 != NULL) && (u_27 != v_27)))
          _fail(v_27);
        else
          u_27 = v_27;
      }
    }
    t = t_19;
    {
      ATerm x_27 = NULL;
      t = term_u_19;
      {
        t = get_config_0(t);
        {
          x_27 = t;
          if(((w_27 != NULL) && (w_27 != x_27)))
            _fail(x_27);
          else
            w_27 = x_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_19), not_null(u_27)), term_v_19), not_null(w_27)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_4);
  {
    t = term_v_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  d_28 :
  if(match_cons(e_28, sym_Version_0))
    {
      ATerm g_28 = NULL,i_28 = NULL;
      ATerm x_19;
      x_19 = t;
      {
        ATerm h_28 = NULL;
        t = SSLgetAnnotations(not_null(e_28));
        {
          h_28 = t;
          if(((g_28 != NULL) && (g_28 != h_28)))
            _fail(h_28);
          else
            g_28 = h_28;
        }
      }
      t = x_19;
      {
        ATerm j_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_28));
        {
          j_28 = t;
          if(((i_28 != NULL) && (i_28 != j_28)))
            _fail(j_28);
          else
            i_28 = j_28;
        }
        t = not_null(i_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm y_19 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = y_19;
        {
          ATerm h_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(k_20);
            }
          else
            {
              t = h_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, l_4);
  t = c_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  t = SSL_table_create(not_null(o_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  {
    ATerm l_20;
    l_20 = t;
    {
      t = term_m_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_20, term_n_20, not_null(s_28));
          t = table_put_0(t);
        }
      }
    }
    t = l_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  t = SSL_table_destroy(not_null(w_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = SSL_exit(not_null(a_29));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
  f_29 = t;
  d_29 :
  if(((ATgetType(f_29) == AT_LIST) && ATisEmpty(f_29)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
        {
          g_29 = ATgetFirst((ATermList) f_29);
          h_29 = (ATerm) ATgetNext((ATermList) f_29);
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
  ATerm o_20;
  o_20 = t;
  {
    ATerm m_29 = NULL;
    ATerm s_29 = NULL;
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        {
          ATerm n_29 = NULL;
          ATerm r_29 = NULL;
          r_29 = t;
          if(((n_29 != NULL) && (n_29 != r_29)))
            _fail(r_29);
          else
            n_29 = r_29;
          t = (ATerm) ATinsert(ATempty, not_null(n_29));
        }
      }
    {
      s_29 = t;
      if(((m_29 != NULL) && (m_29 != s_29)))
        _fail(s_29);
      else
        m_29 = s_29;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_16, not_null(m_29));
      t = printnl_0(t);
    }
  }
  t = o_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  d_30 = t;
  a_30 :
  if(((ATgetType(d_30) == AT_LIST) && !(ATisEmpty(d_30))))
    {
      b_30 = ATgetFirst((ATermList) d_30);
      c_30 = (ATerm) ATgetNext((ATermList) d_30);
      {
        ATerm i_30 = NULL;
        t = not_null(c_30);
        {
          ATerm r_20;
          r_20 = t;
          {
            ATerm j_30 = NULL,l_30 = NULL,n_30 = NULL;
            ATerm s_20;
            s_20 = t;
            {
              ATerm k_30 = NULL;
              t = i_0(t);
              {
                k_30 = t;
                if(((j_30 != NULL) && (j_30 != k_30)))
                  _fail(k_30);
                else
                  j_30 = k_30;
              }
            }
            t = s_20;
            {
              ATerm m_30 = NULL;
              t = not_null(b_30);
              {
                t = h_0(t);
                {
                  m_30 = t;
                  if(((l_30 != NULL) && (l_30 != m_30)))
                    _fail(m_30);
                  else
                    l_30 = m_30;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_30)), not_null(l_30));
                {
                  n_30 = t;
                  if(((i_30 != NULL) && (i_30 != n_30)))
                    _fail(n_30);
                  else
                    i_30 = n_30;
                }
              }
            }
          }
          t = r_20;
          {
            ATerm m_4 (ATerm t)
            {
              t = not_null(i_30);
              return(t);
            }
            t = reverse_acc_2(t, h_0, m_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(d_30) == AT_LIST) && ATisEmpty(d_30)))
        {
          {
            t = term_v_12;
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
  ATerm n_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, n_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_52 (ATerm))
{
  ATerm y_30 = NULL,z_30 = NULL;
  y_30 = t;
  x_30 :
  if(match_cons(y_30, sym_Program_1))
    {
      z_30 = ATgetArgument(y_30, 0);
      {
        ATerm c_31 = NULL,e_31 = NULL;
        ATerm d_31 = NULL;
        t = SSLgetAnnotations(not_null(y_30));
        {
          d_31 = t;
          if(((c_31 != NULL) && (c_31 != d_31)))
            _fail(d_31);
          else
            c_31 = d_31;
        }
        {
          t = not_null(z_30);
          {
            ATerm g_31 = NULL;
            t = w_52(t);
            {
              e_31 = t;
              {
                ATerm h_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_31)), not_null(c_31));
                {
                  h_31 = t;
                  if(((g_31 != NULL) && (g_31 != h_31)))
                    _fail(h_31);
                  else
                    g_31 = h_31;
                }
                t = not_null(g_31);
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
  ATerm q_31 = NULL;
  ATerm t_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_31 = NULL;
      t = term_u_19;
      {
        t = get_config_0(t);
        {
          r_31 = t;
          if(((q_31 != NULL) && (q_31 != r_31)))
            _fail(r_31);
          else
            q_31 = r_31;
        }
      }
      LocalPopChoice(v_20);
    }
  else
    {
      t = t_20;
      {
        ATerm o_4 (ATerm t)
        {
          ATerm u_4 (ATerm t)
          {
            ATerm s_31 = NULL;
            s_31 = t;
            if(((q_31 != NULL) && (q_31 != s_31)))
              _fail(s_31);
            else
              q_31 = s_31;
            return(t);
          }
          t = Program_1(t, u_4);
          return(t);
        }
        t = option_defined_1(t, o_4);
      }
    }
  {
    ATerm v_4 (ATerm t)
    {
      ATerm a_5 (ATerm t)
      {
        t = not_null(q_31);
        return(t);
      }
      t = short_description_1(t, a_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, v_4);
    {
      t = term_w_20;
      {
        t = echo_0(t);
        {
          t = term_d_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm b_5 (ATerm t)
                {
                  ATerm t_31 = NULL;
                  ATerm u_31 = NULL;
                  u_31 = t;
                  if(((t_31 != NULL) && (t_31 != u_31)))
                    _fail(u_31);
                  else
                    t_31 = u_31;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_31)), term_e_21);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_5);
                {
                  ATerm c_5 (ATerm t)
                  {
                    ATerm x_31 = NULL;
                    ATerm y_31 = NULL;
                    ATerm h_5 (ATerm t)
                    {
                      t = not_null(q_31);
                      return(t);
                    }
                    t = long_description_1(t, h_5);
                    {
                      y_31 = t;
                      if(((x_31 != NULL) && (x_31 != y_31)))
                        _fail(y_31);
                      else
                        x_31 = y_31;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(x_31)), term_f_21);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, c_5);
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
  ATerm k_21;
  k_21 = t;
  {
    ATerm j_32 = NULL;
    ATerm k_32 = NULL;
    k_32 = t;
    if(((j_32 != NULL) && (j_32 != k_32)))
      _fail(k_32);
    else
      j_32 = k_32;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATempty, not_null(j_32)));
      t = printnl_0(t);
    }
  }
  t = k_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_86 (ATerm))
{
  ATerm l_21;
  l_21 = t;
  {
    t = h_86(t);
    t = debug_0(t);
  }
  t = l_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_52 (ATerm))
{
  ATerm v_32 = NULL,w_32 = NULL;
  v_32 = t;
  s_32 :
  if(match_cons(v_32, sym_Undefined_1))
    {
      w_32 = ATgetArgument(v_32, 0);
      {
        ATerm z_32 = NULL,b_33 = NULL;
        ATerm a_33 = NULL;
        t = SSLgetAnnotations(not_null(v_32));
        {
          a_33 = t;
          if(((z_32 != NULL) && (z_32 != a_33)))
            _fail(a_33);
          else
            z_32 = a_33;
        }
        {
          t = not_null(w_32);
          {
            ATerm d_33 = NULL;
            t = x_52(t);
            {
              b_33 = t;
              {
                ATerm e_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_33)), not_null(z_32));
                {
                  e_33 = t;
                  if(((d_33 != NULL) && (d_33 != e_33)))
                    _fail(e_33);
                  else
                    d_33 = e_33;
                }
                t = not_null(d_33);
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
  ATerm t_33 (ATerm t)
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_64, _id);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = Cons_2(t, _id, t_33);
      }
    return(t);
  }
  t = t_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_76 (ATerm))
{
  t = fetch_1(t, j_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_34 = NULL;
  b_34 = t;
  a_34 :
  if(match_cons(b_34, sym_Help_0))
    {
      ATerm e_34 = NULL,g_34 = NULL;
      ATerm o_21;
      o_21 = t;
      {
        ATerm f_34 = NULL;
        t = SSLgetAnnotations(not_null(b_34));
        {
          f_34 = t;
          if(((e_34 != NULL) && (e_34 != f_34)))
            _fail(f_34);
          else
            e_34 = f_34;
        }
      }
      t = o_21;
      {
        ATerm k_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_34));
        {
          k_34 = t;
          if(((g_34 != NULL) && (g_34 != k_34)))
            _fail(k_34);
          else
            g_34 = k_34;
        }
        t = not_null(g_34);
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
  ATerm a_35 = NULL;
  a_35 = t;
  t = SSL_implode_string(not_null(a_35));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm g_35 = NULL,h_35 = NULL,n_35 = NULL;
        g_35 = t;
        e_35 :
        if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
          {
            h_35 = ATgetFirst((ATermList) g_35);
            n_35 = (ATerm) ATgetNext((ATermList) g_35);
            {
              t = not_null(h_35);
              {
                ATerm i_5 (ATerm t)
                {
                  t = not_null(n_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_5);
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
  ATerm b_36 = NULL;
  ATerm d_36 = NULL;
  b_36 = t;
  {
    ATerm e_36 = NULL;
    ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
    t = not_null(b_36);
    {
      e_36 = t;
      {
        t = SSL_explode_term(not_null(e_36));
        {
          g_36 = t;
          z_35 :
          if(match_cons(g_36, sym__2))
            {
              h_36 = ATgetArgument(g_36, 0);
              i_36 = ATgetArgument(g_36, 1);
              a_36 :
              if(match_string(h_36, ""))
                {
                  if(((d_36 != NULL) && (d_36 != i_36)))
                    _fail(i_36);
                  else
                    d_36 = i_36;
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
      t = not_null(d_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm m_36 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_36);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
          t = Nil_0(t);
          t = w_64(t);
        }
      }
    return(t);
  }
  t = m_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_cons(p_36, sym__2))
    {
      q_36 = ATgetArgument(p_36, 0);
      r_36 = ATgetArgument(p_36, 1);
      {
        t = not_null(q_36);
        {
          ATerm k_5 (ATerm t)
          {
            t = not_null(r_36);
            return(t);
          }
          t = at_end_1(t, k_5);
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
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  t = SSL_explode_string(not_null(w_36));
  return(t);
}
ATerm _2 (ATerm t, ATerm t_50 (ATerm), ATerm u_50 (ATerm))
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym__2))
    {
      g_37 = ATgetArgument(f_37, 0);
      h_37 = ATgetArgument(f_37, 1);
      {
        ATerm l_37 = NULL,n_37 = NULL;
        ATerm m_37 = NULL;
        t = SSLgetAnnotations(not_null(f_37));
        {
          m_37 = t;
          if(((l_37 != NULL) && (l_37 != m_37)))
            _fail(m_37);
          else
            l_37 = m_37;
        }
        {
          t = not_null(g_37);
          {
            ATerm p_37 = NULL;
            t = t_50(t);
            {
              n_37 = t;
              {
                t = not_null(h_37);
                {
                  ATerm r_37 = NULL;
                  t = u_50(t);
                  {
                    p_37 = t;
                    {
                      ATerm s_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_37), not_null(p_37)), not_null(l_37));
                      {
                        s_37 = t;
                        if(((r_37 != NULL) && (r_37 != s_37)))
                          _fail(s_37);
                        else
                          r_37 = s_37;
                      }
                      t = not_null(r_37);
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
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
  a_38 = t;
  z_37 :
  if(match_cons(a_38, sym__2))
    {
      b_38 = ATgetArgument(a_38, 0);
      c_38 = ATgetArgument(a_38, 1);
      {
        ATerm z_21;
        z_21 = t;
        t = SSL_printnl(not_null(b_38), not_null(c_38));
        t = z_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm a_22;
  a_22 = t;
  {
    ATerm i_38 = NULL,k_38 = NULL;
    ATerm b_22;
    b_22 = t;
    {
      ATerm j_38 = NULL;
      t = g_86(t);
      {
        j_38 = t;
        if(((i_38 != NULL) && (i_38 != j_38)))
          _fail(j_38);
        else
          i_38 = j_38;
      }
    }
    t = b_22;
    {
      ATerm l_38 = NULL;
      l_38 = t;
      if(((k_38 != NULL) && (k_38 != l_38)))
        _fail(l_38);
      else
        k_38 = l_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_38)), not_null(i_38)));
        t = printnl_0(t);
      }
    }
  }
  t = a_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_64 (ATerm))
{
  ATerm o_38 (ATerm t)
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        t = Cons_2(t, h_64, o_38);
      }
    return(t);
  }
  t = o_38(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm q_38 = NULL;
  q_38 = t;
  t = SSL_is_string(not_null(q_38));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm g_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, n_5);
            LocalPopChoice(i_22);
          }
        else
          {
            t = g_22;
            {
              ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
              z_38 = t;
              y_38 :
              if(match_cons(z_38, sym_Path_1))
                {
                  a_39 = ATgetArgument(z_38, 0);
                  t = not_null(a_39);
                }
              else
                {
                  if(match_cons(z_38, sym_Var_1))
                    {
                      a_39 = ATgetArgument(z_38, 0);
                      {
                        t = not_null(a_39);
                        {
                          ATerm l_22 = t;
                          int m_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(m_22);
                            }
                          else
                            {
                              t = l_22;
                              {
                                ATerm o_5 (ATerm t)
                                {
                                  t = term_q_22;
                                  return(t);
                                }
                                t = debug_1(t, o_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_38, sym_Prefix_2))
                        {
                          a_39 = ATgetArgument(z_38, 0);
                          b_39 = ATgetArgument(z_38, 1);
                          {
                            ATerm g_39 = NULL,i_39 = NULL;
                            ATerm r_22;
                            r_22 = t;
                            {
                              ATerm h_39 = NULL;
                              t = not_null(a_39);
                              {
                                t = eval_config_0(t);
                                {
                                  h_39 = t;
                                  if(((g_39 != NULL) && (g_39 != h_39)))
                                    _fail(h_39);
                                  else
                                    g_39 = h_39;
                                }
                              }
                            }
                            t = r_22;
                            {
                              ATerm j_39 = NULL;
                              t = not_null(b_39);
                              {
                                t = eval_config_0(t);
                                {
                                  j_39 = t;
                                  if(((i_39 != NULL) && (i_39 != j_39)))
                                    _fail(j_39);
                                  else
                                    i_39 = j_39;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_39), not_null(i_39));
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
  ATerm r_39 = NULL;
  r_39 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_22, not_null(r_39));
    {
      t = table_get_0(t);
      {
        ATerm r_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_22;
            u_22 = t;
            {
              ATerm t_39 = NULL;
              ATerm u_39 = NULL;
              u_39 = t;
              if(((t_39 != NULL) && (t_39 != u_39)))
                _fail(u_39);
              else
                t_39 = u_39;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_t_22, not_null(r_39), not_null(t_39));
                t = table_put_0(t);
              }
            }
            t = u_22;
          }
          return(t);
        }
        t = try_1(t, r_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_62(t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  z_39 = t;
  y_39 :
  if(match_cons(z_39, sym__2))
    {
      a_40 = ATgetArgument(z_39, 0);
      b_40 = ATgetArgument(z_39, 1);
      t = SSL_table_get(not_null(a_40), not_null(b_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym__3))
    {
      j_40 = ATgetArgument(i_40, 0);
      k_40 = ATgetArgument(i_40, 1);
      l_40 = ATgetArgument(i_40, 2);
      {
        ATerm h_23;
        h_23 = t;
        {
          ATerm p_40 = NULL;
          ATerm q_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_40), not_null(k_40));
          {
            ATerm i_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_23);
              }
            else
              {
                t = i_23;
                t = (ATerm) ATempty;
              }
            {
              q_40 = t;
              if(((p_40 != NULL) && (p_40 != q_40)))
                _fail(q_40);
              else
                p_40 = q_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_40), not_null(k_40), (ATerm) ATinsert(CheckATermList(not_null(p_40)), not_null(l_40)));
            t = table_put_0(t);
          }
        }
        t = h_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_77 (ATerm))
{
  ATerm u_40 = NULL;
  ATerm v_40 = NULL;
  t = term_v_12;
  {
    t = o_77(t);
    {
      v_40 = t;
      if(((u_40 != NULL) && (u_40 != v_40)))
        _fail(v_40);
      else
        u_40 = v_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_20, term_y_20, not_null(u_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
  e_41 = t;
  a_41 :
  if(match_string(e_41, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(e_41) == AT_LIST) && !(ATisEmpty(e_41))))
        {
          f_41 = ATgetFirst((ATermList) e_41);
          g_41 = (ATerm) ATgetNext((ATermList) e_41);
          {
            ATerm j_41 = NULL;
            ATerm l_23;
            l_23 = t;
            {
              t = not_null(f_41);
              t = a_0(t);
            }
            t = l_23;
            {
              ATerm k_41 = NULL;
              t = term_v_12;
              {
                t = d_0(t);
                {
                  k_41 = t;
                  if(((j_41 != NULL) && (j_41 != k_41)))
                    _fail(k_41);
                  else
                    j_41 = k_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_41)), not_null(j_41));
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
  ATerm s_5 (ATerm t)
  {
    ATerm p_41 = NULL;
    p_41 = t;
    o_41 :
    if(!(match_string(p_41, "--help")))
      {
        if(!(match_string(p_41, "-h")))
          {
            if(!(match_string(p_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = term_s_23;
    {
      t = set_config_0(t);
      t = term_v_23;
    }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_w_23;
    return(t);
  }
  t = Option_3(t, s_5, x_5, y_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
  s_41 = t;
  r_41 :
  if(((ATgetType(s_41) == AT_LIST) && !(ATisEmpty(s_41))))
    {
      t_41 = ATgetFirst((ATermList) s_41);
      u_41 = (ATerm) ATgetNext((ATermList) s_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_52 (ATerm), ATerm d_52 (ATerm))
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
  e_42 = t;
  d_42 :
  if(((ATgetType(e_42) == AT_LIST) && !(ATisEmpty(e_42))))
    {
      f_42 = ATgetFirst((ATermList) e_42);
      g_42 = (ATerm) ATgetNext((ATermList) e_42);
      {
        ATerm k_42 = NULL,m_42 = NULL;
        ATerm l_42 = NULL;
        t = SSLgetAnnotations(not_null(e_42));
        {
          l_42 = t;
          if(((k_42 != NULL) && (k_42 != l_42)))
            _fail(l_42);
          else
            k_42 = l_42;
        }
        {
          t = not_null(f_42);
          {
            ATerm q_42 = NULL;
            t = c_52(t);
            {
              m_42 = t;
              {
                t = not_null(g_42);
                {
                  ATerm s_42 = NULL;
                  t = d_52(t);
                  {
                    q_42 = t;
                    {
                      ATerm v_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_42)), not_null(m_42)), not_null(k_42));
                      {
                        v_42 = t;
                        if(((s_42 != NULL) && (s_42 != v_42)))
                          _fail(v_42);
                        else
                          s_42 = v_42;
                      }
                      t = not_null(s_42);
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
  ATerm h_43 = NULL;
  h_43 = t;
  g_43 :
  if(((ATgetType(h_43) == AT_LIST) && ATisEmpty(h_43)))
    {
      {
        ATerm j_43 = NULL,l_43 = NULL;
        ATerm x_23;
        x_23 = t;
        {
          ATerm k_43 = NULL;
          t = SSLgetAnnotations(not_null(h_43));
          {
            k_43 = t;
            if(((j_43 != NULL) && (j_43 != k_43)))
              _fail(k_43);
            else
              j_43 = k_43;
          }
        }
        t = x_23;
        {
          ATerm m_43 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_43));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm s_43 = NULL,v_43 = NULL,w_43 = NULL;
  s_43 = t;
  r_43 :
  if(match_cons(s_43, sym__2))
    {
      v_43 = ATgetArgument(s_43, 0);
      w_43 = ATgetArgument(s_43, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_22, not_null(v_43), not_null(w_43));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm y_23;
  y_23 = t;
  {
    ATerm z_5 (ATerm t)
    {
      t = term_z_23;
      t = m_77(t);
      return(t);
    }
    t = try_1(t, z_5);
  }
  t = y_23;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm f_44 = NULL;
      ATerm a_24;
      a_24 = t;
      {
        ATerm d_44 = NULL;
        ATerm e_44 = NULL;
        e_44 = t;
        if(((d_44 != NULL) && (d_44 != e_44)))
          _fail(e_44);
        else
          d_44 = e_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_19, not_null(d_44));
          t = set_config_0(t);
        }
      }
      t = a_24;
      {
        ATerm g_44 = NULL;
        g_44 = t;
        if(((f_44 != NULL) && (f_44 != g_44)))
          _fail(g_44);
        else
          f_44 = g_44;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_44));
      }
      return(t);
    }
    ATerm f_6 (ATerm t)
    {
      ATerm b_24 = t;
      int c_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_24 = t;
          int l_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(l_24);
            }
          else
            {
              t = k_24;
              {
                t = m_77(t);
                t = Cons_2(t, _id, f_6);
              }
            }
          LocalPopChoice(c_24);
        }
      else
        {
          t = b_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_6, f_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
  ATerm m_24;
  m_24 = t;
  {
    ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
    p_44 = t;
    l_44 :
    if(match_cons(p_44, sym__3))
      {
        q_44 = ATgetArgument(p_44, 0);
        r_44 = ATgetArgument(p_44, 1);
        s_44 = ATgetArgument(p_44, 2);
        {
          if(((m_44 != NULL) && (m_44 != q_44)))
            _fail(q_44);
          else
            m_44 = q_44;
          {
            if(((n_44 != NULL) && (n_44 != r_44)))
              _fail(r_44);
            else
              n_44 = r_44;
            {
              if(((o_44 != NULL) && (o_44 != s_44)))
                _fail(s_44);
              else
                o_44 = s_44;
              t = SSL_table_put(not_null(m_44), not_null(n_44), not_null(o_44));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_77 (ATerm))
{
  ATerm v_44 = NULL;
  ATerm o_24;
  o_24 = t;
  {
    t = term_p_24;
    t = table_put_0(t);
  }
  t = o_24;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm q_24 = t;
      int s_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_77(t);
          LocalPopChoice(s_24);
        }
      else
        {
          t = q_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_6);
    {
      ATerm i_6 (ATerm t)
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_24;
            v_24 = t;
            {
              ATerm x_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_r_23;
                  t = get_config_0(t);
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = x_24;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_24;
            {
              t = system_usage_0(t);
              {
                t = term_v_16;
                t = exit_0(t);
              }
            }
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            {
              ATerm j_6 (ATerm t)
              {
                ATerm k_6 (ATerm t)
                {
                  ATerm w_44 = NULL;
                  w_44 = t;
                  if(((v_44 != NULL) && (v_44 != w_44)))
                    _fail(w_44);
                  else
                    v_44 = w_44;
                  return(t);
                }
                t = Undefined_1(t, k_6);
                return(t);
              }
              t = option_defined_1(t, j_6);
              {
                ATerm l_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_44)), term_e_25);
                  return(t);
                }
                t = say_1(t, l_6);
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
      t = try_1(t, i_6);
      {
        ATerm f_25;
        f_25 = t;
        {
          t = term_x_20;
          t = table_destroy_0(t);
        }
        t = f_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm))
{
  t = parse_options_1(t, i_75);
  {
    t = store_options_0(t);
    {
      t = k_75(t);
      {
        ATerm g_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_75);
            LocalPopChoice(l_25);
          }
        else
          {
            t = g_25;
            {
              ATerm m_25 = t;
              int o_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(o_25);
                }
              else
                {
                  t = m_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  t = option_wrap_4(t, m_75, default_usage_0, _id, n_75);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm y_73 (ATerm), ATerm z_73 (ATerm))
{
  ATerm q_6 (ATerm t)
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_73(t);
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = xtc_io_1(t, z_73);
    return(t);
  }
  t = option_wrap_2(t, q_6, r_6);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm x_73 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, x_73);
  return(t);
}
ATerm io_parse_box_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm u_6 (ATerm t)
    {
      t = term_v_25;
      return(t);
    }
    t = xtc_sglr_1(t, u_6);
    t = xtc_implode_asfix_0(t);
    return(t);
  }
  t = xtc_io_wrap_1(t, s_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_box_0(t);
  return(t);
}