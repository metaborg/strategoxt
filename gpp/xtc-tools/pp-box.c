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
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_x_24;
ATerm term_j_24;
ATerm term_z_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_k_23;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_e_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_j_18;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_l_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_n_15;
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
ATerm term_u_7;
ATerm term_t_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_c_7;
ATerm term_u_6;
void init_constant_terms (void)
{
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_d_8);
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
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_j_9);
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
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_v_11);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_z_15, term_v_12);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_v_12);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym__2, term_u_17, term_v_12);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_k_23, term_v_12);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym__3, term_u_20, term_v_20, (ATerm) ATempty);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
ATerm xtc_abox2text_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_abox_format_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm p_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_73 (ATerm));
ATerm repeat_1 (ATerm, ATerm w_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm o_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm q_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_70 (ATerm), ATerm i_70 (ATerm));
ATerm union_1 (ATerm, ATerm d_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm z_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm z_75 (ATerm), ATerm a_76 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm h_59 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm q_75 (ATerm));
ATerm assert_1 (ATerm, ATerm f_72 (ATerm));
ATerm obsolete_1 (ATerm, ATerm t_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm r_57 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm c_72 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm h_63 (ATerm), ATerm i_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm b_72 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm c_75 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm d_75 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm u_70 (ATerm), ATerm v_70 (ATerm));
ATerm crush_2 (ATerm, ATerm s_69 (ATerm), ATerm t_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_76 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_78 (ATerm));
ATerm Program_1 (ATerm, ATerm y_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm z_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_77 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm c_51 (ATerm), ATerm d_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_72 (ATerm));
ATerm map_1 (ATerm, ATerm k_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_52 (ATerm), ATerm m_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_78 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm p_76 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm q_76 (ATerm), ATerm r_76 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm h_75 (ATerm), ATerm i_75 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm g_75 (ATerm));
ATerm io_pp_box_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_abox2text_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_u_6;
    return(t);
  }
  t = xtc_transform_2(t, b_0, pass_verbose_0);
  return(t);
}
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
        ATerm v_6 = t;
        int w_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_1), not_null(e_1));
            ;
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
        ;
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
ATerm xtc_abox_format_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = term_k_7;
    return(t);
  }
  t = xtc_transform_2(t, f_0, pass_verbose_0);
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
      ATerm h_0 (ATerm t)
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
      t = map_1(t, h_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm p_0 (ATerm t)
  {
    ATerm l_7;
    l_7 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_3), term_m_7);
        t = geq_0(t);
      }
    }
    t = l_7;
    t = p_59(t);
    return(t);
  }
  t = try_1(t, p_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm n_7;
  n_7 = t;
  {
    ATerm v_3 = NULL;
    ATerm w_3 = NULL;
    w_3 = t;
    if(((v_3 != NULL) && (v_3 != w_3)))
      _fail(w_3);
    else
      v_3 = w_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_7, not_null(v_3));
      t = printnl_0(t);
    }
  }
  t = n_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm c_4 = NULL;
  ATerm e_4 = NULL,f_4 = NULL;
  c_4 = t;
  {
    ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_4)));
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
        t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_4)));
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
ATerm filter_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = filter_1(t, h_73);
              return(t);
            }
            t = Cons_2(t, h_73, r_0);
            ;
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
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
                    t = filter_1(t, h_73);
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
ATerm repeat_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      t = w_78(t);
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
  ATerm c_8;
  c_8 = t;
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
  }
  t = c_8;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm o_59 (ATerm))
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
    t = o_59(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm q_59 (ATerm))
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
    t = q_59(t);
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
ATerm HdMember_p__2 (ATerm t, ATerm h_70 (ATerm), ATerm i_70 (ATerm))
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  c_6 = t;
  b_6 :
  if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
    {
      d_6 = ATgetFirst((ATermList) c_6);
      e_6 = (ATerm) ATgetNext((ATermList) c_6);
      {
        t = i_70(t);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm h_6 = NULL;
            h_6 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(h_6));
              t = h_70(t);
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
ATerm union_1 (ATerm t, ATerm d_70 (ATerm))
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
                ;
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
                      t = HdMember_p__2(t, d_70, x_0);
                      t = t_6(t);
                      ;
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
                ;
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
ATerm table_putlist_1 (ATerm t, ATerm z_59 (ATerm))
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
          t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_8)));
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
          t = (ATerm) ATmakeAppl(sym__3, term_u_7, term_j_9, (ATerm) ATinsert(ATempty, not_null(e_8)));
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
                ;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_u_7, not_null(g_8));
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
                        t = (ATerm) ATmakeAppl(sym__3, term_u_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_8)), (ATerm) ATempty);
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
      ;
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
            ;
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
          ;
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
              ;
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
      ;
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
                t = term_u_7;
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
      ;
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
ATerm xtc_transform_term_2 (ATerm t, ATerm z_75 (ATerm), ATerm a_76 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, z_75, a_76);
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
ATerm fork_and_wait_1 (ATerm t, ATerm h_59 (ATerm))
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
                t = h_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
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
ATerm xtc_command_1 (ATerm t, ATerm q_75 (ATerm))
{
  ATerm w_11 = NULL;
  ATerm m_11;
  m_11 = t;
  {
    ATerm x_11 = NULL;
    t = q_75(t);
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
ATerm assert_1 (ATerm t, ATerm f_72 (ATerm))
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
          t = f_72(t);
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
                        ;
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
ATerm obsolete_1 (ATerm t, ATerm t_72 (ATerm))
{
  ATerm a_12;
  a_12 = t;
  {
    t = t_72(t);
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
ATerm FILE_1 (ATerm t, ATerm r_57 (ATerm))
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
            t = r_57(t);
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
ATerm xtc_transform_2 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm))
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
          ;
          LocalPopChoice(r_13);
        }
      else
        {
          t = o_13;
          t = stdin_0(t);
        }
      LocalPopChoice(m_13);
      t = xtc_transform_file_2(t, s_75, t_75);
    }
  else
    {
      t = l_13;
      t = xtc_transform_term_2(t, s_75, t_75);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
  i_16 = t;
  h_16 :
  if(match_cons(i_16, sym__2))
    {
      j_16 = ATgetArgument(i_16, 0);
      k_16 = ATgetArgument(i_16, 1);
      t = SSL_copy(not_null(j_16), not_null(k_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm s_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_stderr_0))
    {
      ATerm u_16 = NULL,w_16 = NULL;
      ATerm s_13;
      s_13 = t;
      {
        ATerm v_16 = NULL;
        t = SSLgetAnnotations(not_null(s_16));
        {
          v_16 = t;
          if(((u_16 != NULL) && (u_16 != v_16)))
            _fail(v_16);
          else
            u_16 = v_16;
        }
      }
      t = s_13;
      {
        ATerm x_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(u_16));
        {
          x_16 = t;
          if(((w_16 != NULL) && (w_16 != x_16)))
            _fail(x_16);
          else
            w_16 = x_16;
        }
        t = not_null(w_16);
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
  ATerm f_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym_stdout_0))
    {
      ATerm h_17 = NULL,j_17 = NULL;
      ATerm t_13;
      t_13 = t;
      {
        ATerm i_17 = NULL;
        t = SSLgetAnnotations(not_null(f_17));
        {
          i_17 = t;
          if(((h_17 != NULL) && (h_17 != i_17)))
            _fail(i_17);
          else
            h_17 = i_17;
        }
      }
      t = t_13;
      {
        ATerm k_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(h_17));
        {
          k_17 = t;
          if(((j_17 != NULL) && (j_17 != k_17)))
            _fail(k_17);
          else
            j_17 = k_17;
        }
        t = not_null(j_17);
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
  ATerm w_17 = NULL,x_17 = NULL;
  w_17 = t;
  v_17 :
  if(match_cons(w_17, sym_FILE_1))
    {
      x_17 = ATgetArgument(w_17, 0);
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_17 = NULL;
            ATerm a_18 = NULL;
            t = m_0(t);
            {
              a_18 = t;
              {
                if(((z_17 != NULL) && (z_17 != a_18)))
                  _fail(a_18);
                else
                  z_17 = a_18;
                {
                  ATerm y_13 = t;
                  int a_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(a_14);
                    }
                  else
                    {
                      t = y_13;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), not_null(z_17));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_17));
            ;
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_18 = NULL;
                  ATerm d_18 = NULL;
                  t = m_0(t);
                  {
                    d_18 = t;
                    {
                      if(((c_18 != NULL) && (c_18 != d_18)))
                        _fail(d_18);
                      else
                        c_18 = d_18;
                      {
                        ATerm d_14 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm e_14 = t;
                            int f_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(f_14);
                              }
                            else
                              {
                                t = e_14;
                                {
                                  ATerm g_14 = t;
                                  int h_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(h_14);
                                    }
                                  else
                                    {
                                      t = g_14;
                                      {
                                        ATerm e_18 = NULL;
                                        e_18 = t;
                                        if(((x_17 != NULL) && (x_17 != e_18)))
                                          _fail(e_18);
                                        else
                                          x_17 = e_18;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = d_14;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), not_null(c_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_17));
                  ;
                  LocalPopChoice(c_14);
                }
              else
                {
                  t = b_14;
                  {
                    ATerm g_18 = NULL;
                    t = m_0(t);
                    {
                      g_18 = t;
                      if(((x_17 != NULL) && (x_17 != g_18)))
                        _fail(g_18);
                      else
                        x_17 = g_18;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_17));
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
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  p_18 :
  if(((ATgetType(q_18) == AT_LIST) && !(ATisEmpty(q_18))))
    {
      r_18 = ATgetFirst((ATermList) q_18);
      s_18 = (ATerm) ATgetNext((ATermList) q_18);
      t = not_null(s_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm y_18 = NULL,a_19 = NULL,b_19 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym__2))
    {
      a_19 = ATgetArgument(y_18, 0);
      b_19 = ATgetArgument(y_18, 1);
      {
        ATerm p_14;
        p_14 = t;
        {
          ATerm e_19 = NULL;
          ATerm f_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_19), not_null(b_19));
          {
            ATerm u_14 = t;
            int v_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(v_14);
              }
            else
              {
                t = u_14;
                t = (ATerm) ATempty;
              }
            {
              f_19 = t;
              if(((e_19 != NULL) && (e_19 != f_19)))
                _fail(f_19);
              else
                e_19 = f_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_19), not_null(b_19), not_null(e_19));
            t = table_put_0(t);
          }
        }
        t = p_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm c_72 (ATerm))
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  ATerm w_14;
  w_14 = t;
  {
    ATerm p_19 = NULL;
    ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
    t = c_72(t);
    {
      p_19 = t;
      {
        if(((o_19 != NULL) && (o_19 != p_19)))
          _fail(p_19);
        else
          o_19 = p_19;
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), term_v_11);
              t = table_get_0(t);
              ;
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            q_19 = t;
            l_19 :
            if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
              {
                r_19 = ATgetFirst((ATermList) q_19);
                s_19 = (ATerm) ATgetNext((ATermList) q_19);
                {
                  if(((n_19 != NULL) && (n_19 != r_19)))
                    _fail(r_19);
                  else
                    n_19 = r_19;
                  {
                    if(((m_19 != NULL) && (m_19 != s_19)))
                      _fail(s_19);
                    else
                      m_19 = s_19;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(o_19), term_v_11, not_null(m_19));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(n_19);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm u_19 = NULL;
                              u_19 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), not_null(u_19));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, e_2);
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
  t = w_14;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm f_20 = NULL;
  f_20 = t;
  t = SSL_remove(not_null(f_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm h_63 (ATerm), ATerm i_63 (ATerm))
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_63(t);
      t = i_63(t);
      ;
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      {
        t = i_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm m_20 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm n_20 = NULL;
    ATerm o_20 = NULL;
    t = b_72(t);
    {
      n_20 = t;
      {
        if(((m_20 != NULL) && (m_20 != n_20)))
          _fail(n_20);
        else
          m_20 = n_20;
        {
          ATerm p_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), term_v_11);
          {
            ATerm c_15 = t;
            int f_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_15);
              }
            else
              {
                t = c_15;
                t = (ATerm) ATempty;
              }
            {
              p_20 = t;
              if(((o_20 != NULL) && (o_20 != p_20)))
                _fail(p_20);
              else
                o_20 = p_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_20), term_v_11, (ATerm) ATinsert(CheckATermList(not_null(o_20)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = b_15;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm z_20 = NULL,a_21 = NULL;
  ATerm f_2 (ATerm t)
  {
    t = term_z_12;
    return(t);
  }
  t = begin_scope_1(t, f_2);
  {
    ATerm g_2 (ATerm t)
    {
      ATerm k_15;
      k_15 = t;
      {
        ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_n_15;
            t = table_get_0(t);
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          b_21 = t;
          y_20 :
          if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
            {
              c_21 = ATgetFirst((ATermList) b_21);
              d_21 = (ATerm) ATgetNext((ATermList) b_21);
              {
                if(((a_21 != NULL) && (a_21 != c_21)))
                  _fail(c_21);
                else
                  a_21 = c_21;
                {
                  if(((z_20 != NULL) && (z_20 != d_21)))
                    _fail(d_21);
                  else
                    z_20 = d_21;
                  {
                    t = not_null(a_21);
                    {
                      ATerm h_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, h_2);
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
      t = k_15;
      {
        ATerm i_2 (ATerm t)
        {
          t = term_z_12;
          return(t);
        }
        t = end_scope_1(t, i_2);
      }
      return(t);
    }
    t = restore_always_2(t, c_75, g_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_21 = NULL;
        ATerm h_21 = NULL;
        t = term_j_13;
        {
          t = get_config_0(t);
          {
            h_21 = t;
            if(((g_21 != NULL) && (g_21 != h_21)))
              _fail(h_21);
            else
              g_21 = h_21;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_21));
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = term_j_11;
      }
    {
      t = d_75(t);
      {
        ATerm k_2 (ATerm t)
        {
          ATerm q_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_i_13;
              t = get_config_0(t);
              ;
              LocalPopChoice(u_15);
            }
          else
            {
              t = q_15;
              t = term_v_15;
            }
          return(t);
        }
        t = copy_to_1(t, k_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, j_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm k_21 = NULL;
    k_21 = t;
    j_21 :
    if(!(match_string(k_21, "-v")))
      {
        if(!(match_string(k_21, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_c_16;
    t = set_config_0(t);
    t = term_d_16;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_e_16;
    return(t);
  }
  t = Option_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm n_21 = NULL;
    n_21 = t;
    l_21 :
    if(!(match_string(n_21, "-k")))
      {
        if(!(match_string(n_21, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm f_16;
    f_16 = t;
    {
      ATerm t_21 = NULL;
      ATerm u_21 = NULL;
      t = string_to_int_0(t);
      {
        u_21 = t;
        if(((t_21 != NULL) && (t_21 != u_21)))
          _fail(u_21);
        else
          t_21 = u_21;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_16, not_null(t_21));
        t = set_config_0(t);
      }
    }
    t = f_16;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_l_16;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  t = SSL_string_to_int(not_null(b_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm s_22 = NULL;
        s_22 = t;
        l_22 :
        if(!(match_string(s_22, "-S")))
          {
            if(!(match_string(s_22, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = term_p_16;
        t = set_config_0(t);
        t = term_q_16;
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = term_t_16;
        return(t);
      }
      t = Option_3(t, r_2, v_2, w_2);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 (ATerm t)
            {
              ATerm t_22 = NULL;
              t_22 = t;
              n_22 :
              if(!(match_string(t_22, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              ATerm w_22 = NULL;
              ATerm a_17;
              a_17 = t;
              {
                ATerm u_22 = NULL;
                ATerm v_22 = NULL;
                t = string_to_int_0(t);
                {
                  v_22 = t;
                  if(((u_22 != NULL) && (u_22 != v_22)))
                    _fail(v_22);
                  else
                    u_22 = v_22;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_7, not_null(u_22));
                  t = set_config_0(t);
                }
              }
              t = a_17;
              {
                ATerm x_22 = NULL;
                x_22 = t;
                if(((w_22 != NULL) && (w_22 != x_22)))
                  _fail(x_22);
                else
                  w_22 = x_22;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_22));
              }
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              t = term_b_17;
              return(t);
            }
            t = ArgOption_3(t, x_2, y_2, z_2);
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            {
              ATerm a_3 (ATerm t)
              {
                ATerm y_22 = NULL;
                y_22 = t;
                r_22 :
                if(!(match_string(y_22, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = term_d_17;
                t = set_config_0(t);
                t = term_g_17;
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                t = term_l_17;
                return(t);
              }
              t = Option_3(t, a_3, c_3, d_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm e_23 = NULL;
    e_23 = t;
    b_23 :
    if(!(match_string(e_23, "-o")))
      {
        if(!(match_string(e_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm h_23 = NULL;
    ATerm q_17;
    q_17 = t;
    {
      ATerm f_23 = NULL;
      ATerm g_23 = NULL;
      g_23 = t;
      if(((f_23 != NULL) && (f_23 != g_23)))
        _fail(g_23);
      else
        f_23 = g_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_13, not_null(f_23));
        t = set_config_0(t);
      }
    }
    t = q_17;
    {
      ATerm i_23 = NULL;
      i_23 = t;
      if(((h_23 != NULL) && (h_23 != i_23)))
        _fail(i_23);
      else
        h_23 = i_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_23));
    }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  t = ArgOption_3(t, e_3, f_3, g_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm m_23 = NULL;
          m_23 = t;
          l_23 :
          if(!(match_string(m_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_3 (ATerm t)
        {
          t = term_y_17;
          t = set_config_0(t);
          t = term_b_18;
          return(t);
        }
        ATerm n_3 (ATerm t)
        {
          t = term_f_18;
          return(t);
        }
        t = Option_3(t, i_3, k_3, n_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  s_23 = t;
  q_23 :
  if(match_string(s_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_23) == AT_LIST) && !(ATisEmpty(s_23))))
        {
          t_23 = ATgetFirst((ATermList) s_23);
          u_23 = (ATerm) ATgetNext((ATermList) s_23);
          r_23 :
          if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
            {
              v_23 = ATgetFirst((ATermList) u_23);
              w_23 = (ATerm) ATgetNext((ATermList) u_23);
              {
                ATerm f_24 = NULL;
                ATerm h_18;
                h_18 = t;
                {
                  t = not_null(t_23);
                  t = j_0(t);
                }
                t = h_18;
                {
                  ATerm g_24 = NULL;
                  t = not_null(v_23);
                  {
                    t = k_0(t);
                    {
                      g_24 = t;
                      if(((f_24 != NULL) && (f_24 != g_24)))
                        _fail(g_24);
                      else
                        f_24 = g_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_23)), not_null(f_24));
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
  ATerm o_3 (ATerm t)
  {
    ATerm n_24 = NULL;
    n_24 = t;
    k_24 :
    if(!(match_string(n_24, "-i")))
      {
        if(!(match_string(n_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm q_24 = NULL;
    ATerm i_18;
    i_18 = t;
    {
      ATerm o_24 = NULL;
      ATerm p_24 = NULL;
      p_24 = t;
      if(((o_24 != NULL) && (o_24 != p_24)))
        _fail(p_24);
      else
        o_24 = p_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(o_24));
        t = set_config_0(t);
      }
    }
    t = i_18;
    {
      ATerm r_24 = NULL;
      r_24 = t;
      if(((q_24 != NULL) && (q_24 != r_24)))
        _fail(r_24);
      else
        q_24 = r_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_24));
    }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_j_18;
    return(t);
  }
  t = ArgOption_3(t, o_3, p_3, q_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm a_25 = NULL;
  ATerm o_18;
  o_18 = t;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm b_25 = NULL,c_25 = NULL;
      b_25 = t;
      z_24 :
      if(match_cons(b_25, sym_Program_1))
        {
          c_25 = ATgetArgument(b_25, 0);
          if(((a_25 != NULL) && (a_25 != c_25)))
            _fail(c_25);
          else
            a_25 = c_25;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, t_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_18), not_null(a_25)), term_t_18));
      {
        t = printnl_0(t);
        {
          t = term_j_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_18;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATempty, term_v_18));
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
  ATerm f_25 = NULL;
  f_25 = t;
  t = SSL_TicksToSeconds(not_null(f_25));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym__2))
    {
      l_25 = ATgetArgument(k_25, 0);
      m_25 = ATgetArgument(k_25, 1);
      {
        ATerm w_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_25), not_null(m_25));
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = w_18;
            t = SSL_addr(not_null(l_25), not_null(m_25));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_70 (ATerm), ATerm v_70 (ATerm))
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_70(t);
      ;
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
        ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
        t_25 = t;
        s_25 :
        if(((ATgetType(t_25) == AT_LIST) && !(ATisEmpty(t_25))))
          {
            u_25 = ATgetFirst((ATermList) t_25);
            v_25 = (ATerm) ATgetNext((ATermList) t_25);
            {
              ATerm y_25 = NULL;
              ATerm z_25 = NULL;
              t = not_null(v_25);
              {
                t = foldr_2(t, u_70, v_70);
                {
                  z_25 = t;
                  if(((y_25 != NULL) && (y_25 != z_25)))
                    _fail(z_25);
                  else
                    y_25 = z_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_25), not_null(y_25));
                t = v_70(t);
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
ATerm crush_2 (ATerm t, ATerm s_69 (ATerm), ATerm t_69 (ATerm))
{
  ATerm g_26 = NULL;
  ATerm i_26 = NULL;
  g_26 = t;
  {
    ATerm j_26 = NULL;
    ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
    t = not_null(g_26);
    {
      j_26 = t;
      {
        t = SSL_explode_term(not_null(j_26));
        {
          l_26 = t;
          f_26 :
          if(match_cons(l_26, sym__2))
            {
              m_26 = ATgetArgument(l_26, 0);
              n_26 = ATgetArgument(l_26, 1);
              if(((i_26 != NULL) && (i_26 != n_26)))
                _fail(n_26);
              else
                i_26 = n_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_26);
      t = foldr_2(t, s_69, t_69);
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
    ATerm u_3 (ATerm t)
    {
      t = term_o_16;
      return(t);
    }
    t = crush_2(t, u_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  s_26 :
  if(match_cons(t_26, sym__2))
    {
      u_26 = ATgetArgument(t_26, 0);
      v_26 = ATgetArgument(t_26, 1);
      {
        ATerm g_19;
        g_19 = t;
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_26), not_null(v_26));
              ;
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              t = SSL_gtr(not_null(u_26), not_null(v_26));
            }
        }
        t = g_19;
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
  ATerm b_27 = NULL;
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
      c_27 = t;
      a_27 :
      if(match_cons(c_27, sym__2))
        {
          d_27 = ATgetArgument(c_27, 0);
          e_27 = ATgetArgument(c_27, 1);
          {
            if(((b_27 != NULL) && (b_27 != d_27)))
              _fail(d_27);
            else
              b_27 = d_27;
            if(((b_27 != NULL) && (b_27 != e_27)))
              _fail(e_27);
            else
              b_27 = e_27;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm t_19;
    t_19 = t;
    {
      ATerm h_27 = NULL;
      ATerm i_27 = NULL;
      t = term_c_7;
      {
        t = get_config_0(t);
        {
          i_27 = t;
          if(((h_27 != NULL) && (h_27 != i_27)))
            _fail(i_27);
          else
            h_27 = i_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), term_j_7);
        t = geq_0(t);
      }
    }
    t = t_19;
    t = l_59(t);
    return(t);
  }
  t = try_1(t, x_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm m_27 = NULL,o_27 = NULL;
    ATerm v_19;
    v_19 = t;
    {
      ATerm n_27 = NULL;
      t = run_time_0(t);
      {
        n_27 = t;
        if(((m_27 != NULL) && (m_27 != n_27)))
          _fail(n_27);
        else
          m_27 = n_27;
      }
    }
    t = v_19;
    {
      ATerm p_27 = NULL;
      t = term_w_19;
      {
        t = get_config_0(t);
        {
          p_27 = t;
          if(((o_27 != NULL) && (o_27 != p_27)))
            _fail(p_27);
          else
            o_27 = p_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_19), not_null(m_27)), term_x_19), not_null(o_27)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_3);
  {
    t = term_o_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym_Version_0))
    {
      ATerm y_27 = NULL,a_28 = NULL;
      ATerm z_19;
      z_19 = t;
      {
        ATerm z_27 = NULL;
        t = SSLgetAnnotations(not_null(w_27));
        {
          z_27 = t;
          if(((y_27 != NULL) && (y_27 != z_27)))
            _fail(z_27);
          else
            y_27 = z_27;
        }
      }
      t = z_19;
      {
        ATerm b_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_27));
        {
          b_28 = t;
          if(((a_28 != NULL) && (a_28 != b_28)))
            _fail(b_28);
          else
            a_28 = b_28;
        }
        t = not_null(a_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(d_20);
            }
          else
            {
              t = c_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_3);
  t = g_76(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = SSL_table_create(not_null(g_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  {
    ATerm e_20;
    e_20 = t;
    {
      t = term_g_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_20, term_h_20, not_null(k_28));
          t = table_put_0(t);
        }
      }
    }
    t = e_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  t = SSL_table_destroy(not_null(o_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  t = SSL_exit(not_null(s_28));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  v_28 :
  if(((ATgetType(w_28) == AT_LIST) && ATisEmpty(w_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_28) == AT_LIST) && !(ATisEmpty(w_28))))
        {
          x_28 = ATgetFirst((ATermList) w_28);
          y_28 = (ATerm) ATgetNext((ATermList) w_28);
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
  ATerm i_20;
  i_20 = t;
  {
    ATerm b_29 = NULL;
    ATerm e_29 = NULL;
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        {
          ATerm c_29 = NULL;
          ATerm d_29 = NULL;
          d_29 = t;
          if(((c_29 != NULL) && (c_29 != d_29)))
            _fail(d_29);
          else
            c_29 = d_29;
          t = (ATerm) ATinsert(ATempty, not_null(c_29));
        }
      }
    {
      e_29 = t;
      if(((b_29 != NULL) && (b_29 != e_29)))
        _fail(e_29);
      else
        b_29 = e_29;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_15, not_null(b_29));
      t = printnl_0(t);
    }
  }
  t = i_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_29 = NULL,r_29 = NULL,s_29 = NULL;
  s_29 = t;
  n_29 :
  if(((ATgetType(s_29) == AT_LIST) && !(ATisEmpty(s_29))))
    {
      o_29 = ATgetFirst((ATermList) s_29);
      r_29 = (ATerm) ATgetNext((ATermList) s_29);
      {
        ATerm y_29 = NULL;
        t = not_null(r_29);
        {
          ATerm l_20;
          l_20 = t;
          {
            ATerm z_29 = NULL,b_30 = NULL,d_30 = NULL;
            ATerm q_20;
            q_20 = t;
            {
              ATerm a_30 = NULL;
              t = i_0(t);
              {
                a_30 = t;
                if(((z_29 != NULL) && (z_29 != a_30)))
                  _fail(a_30);
                else
                  z_29 = a_30;
              }
            }
            t = q_20;
            {
              ATerm c_30 = NULL;
              t = not_null(o_29);
              {
                t = g_0(t);
                {
                  c_30 = t;
                  if(((b_30 != NULL) && (b_30 != c_30)))
                    _fail(c_30);
                  else
                    b_30 = c_30;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_29)), not_null(b_30));
                {
                  d_30 = t;
                  if(((y_29 != NULL) && (y_29 != d_30)))
                    _fail(d_30);
                  else
                    y_29 = d_30;
                }
              }
            }
          }
          t = l_20;
          {
            ATerm d_4 (ATerm t)
            {
              t = not_null(y_29);
              return(t);
            }
            t = reverse_acc_2(t, g_0, d_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(s_29) == AT_LIST) && ATisEmpty(s_29)))
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
  ATerm l_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  p_30 :
  if(match_cons(q_30, sym_Program_1))
    {
      r_30 = ATgetArgument(q_30, 0);
      {
        ATerm u_30 = NULL,w_30 = NULL;
        ATerm v_30 = NULL;
        t = SSLgetAnnotations(not_null(q_30));
        {
          v_30 = t;
          if(((u_30 != NULL) && (u_30 != v_30)))
            _fail(v_30);
          else
            u_30 = v_30;
        }
        {
          t = not_null(r_30);
          {
            ATerm y_30 = NULL;
            t = y_57(t);
            {
              w_30 = t;
              {
                ATerm z_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_30)), not_null(u_30));
                {
                  z_30 = t;
                  if(((y_30 != NULL) && (y_30 != z_30)))
                    _fail(z_30);
                  else
                    y_30 = z_30;
                }
                t = not_null(y_30);
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
  ATerm i_31 = NULL;
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_31 = NULL;
      t = term_w_19;
      {
        t = get_config_0(t);
        {
          j_31 = t;
          if(((i_31 != NULL) && (i_31 != j_31)))
            _fail(j_31);
          else
            i_31 = j_31;
        }
      }
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm m_4 (ATerm t)
        {
          ATerm n_4 (ATerm t)
          {
            ATerm k_31 = NULL;
            k_31 = t;
            if(((i_31 != NULL) && (i_31 != k_31)))
              _fail(k_31);
            else
              i_31 = k_31;
            return(t);
          }
          t = Program_1(t, n_4);
          return(t);
        }
        t = option_defined_1(t, m_4);
      }
    }
  {
    ATerm o_4 (ATerm t)
    {
      ATerm u_4 (ATerm t)
      {
        t = not_null(i_31);
        return(t);
      }
      t = short_description_1(t, u_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, o_4);
    {
      t = term_t_20;
      {
        t = echo_0(t);
        {
          t = term_w_20;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm v_4 (ATerm t)
                {
                  ATerm l_31 = NULL;
                  ATerm m_31 = NULL;
                  m_31 = t;
                  if(((l_31 != NULL) && (l_31 != m_31)))
                    _fail(m_31);
                  else
                    l_31 = m_31;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_31)), term_x_20);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, v_4);
                {
                  ATerm a_5 (ATerm t)
                  {
                    ATerm n_31 = NULL;
                    ATerm o_31 = NULL;
                    ATerm b_5 (ATerm t)
                    {
                      t = not_null(i_31);
                      return(t);
                    }
                    t = long_description_1(t, b_5);
                    {
                      o_31 = t;
                      if(((n_31 != NULL) && (n_31 != o_31)))
                        _fail(o_31);
                      else
                        n_31 = o_31;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(n_31)), term_e_21);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_5);
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
  ATerm f_21;
  f_21 = t;
  {
    ATerm u_31 = NULL;
    ATerm v_31 = NULL;
    v_31 = t;
    if(((u_31 != NULL) && (u_31 != v_31)))
      _fail(v_31);
    else
      u_31 = v_31;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATempty, not_null(u_31)));
      t = printnl_0(t);
    }
  }
  t = f_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm i_21;
  i_21 = t;
  {
    t = n_72(t);
    t = debug_0(t);
  }
  t = i_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm c_32 = NULL,d_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym_Undefined_1))
    {
      d_32 = ATgetArgument(c_32, 0);
      {
        ATerm g_32 = NULL,i_32 = NULL;
        ATerm h_32 = NULL;
        t = SSLgetAnnotations(not_null(c_32));
        {
          h_32 = t;
          if(((g_32 != NULL) && (g_32 != h_32)))
            _fail(h_32);
          else
            g_32 = h_32;
        }
        {
          t = not_null(d_32);
          {
            ATerm m_32 = NULL;
            t = z_57(t);
            {
              i_32 = t;
              {
                ATerm n_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_32)), not_null(g_32));
                {
                  n_32 = t;
                  if(((m_32 != NULL) && (m_32 != n_32)))
                    _fail(n_32);
                  else
                    m_32 = n_32;
                }
                t = not_null(m_32);
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
ATerm fetch_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm u_32 (ATerm t)
  {
    ATerm m_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_64, _id);
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = m_21;
        t = Cons_2(t, _id, u_32);
      }
    return(t);
  }
  t = u_32(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_77 (ATerm))
{
  t = fetch_1(t, n_77);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_33 = NULL;
  b_33 = t;
  a_33 :
  if(match_cons(b_33, sym_Help_0))
    {
      ATerm d_33 = NULL,f_33 = NULL;
      ATerm p_21;
      p_21 = t;
      {
        ATerm e_33 = NULL;
        t = SSLgetAnnotations(not_null(b_33));
        {
          e_33 = t;
          if(((d_33 != NULL) && (d_33 != e_33)))
            _fail(e_33);
          else
            d_33 = e_33;
        }
      }
      t = p_21;
      {
        ATerm g_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_33));
        {
          g_33 = t;
          if(((f_33 != NULL) && (f_33 != g_33)))
            _fail(g_33);
          else
            f_33 = g_33;
        }
        t = not_null(f_33);
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
  ATerm l_33 = NULL;
  l_33 = t;
  t = SSL_implode_string(not_null(l_33));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
        s_33 = t;
        p_33 :
        if(((ATgetType(s_33) == AT_LIST) && !(ATisEmpty(s_33))))
          {
            t_33 = ATgetFirst((ATermList) s_33);
            u_33 = (ATerm) ATgetNext((ATermList) s_33);
            {
              t = not_null(t_33);
              {
                ATerm c_5 (ATerm t)
                {
                  t = not_null(u_33);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_5);
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
  ATerm v_34 = NULL;
  ATerm x_34 = NULL;
  v_34 = t;
  {
    ATerm y_34 = NULL;
    ATerm d_35 = NULL,e_35 = NULL,g_35 = NULL;
    t = not_null(v_34);
    {
      y_34 = t;
      {
        t = SSL_explode_term(not_null(y_34));
        {
          d_35 = t;
          r_34 :
          if(match_cons(d_35, sym__2))
            {
              e_35 = ATgetArgument(d_35, 0);
              g_35 = ATgetArgument(d_35, 1);
              s_34 :
              if(match_string(e_35, ""))
                {
                  if(((x_34 != NULL) && (x_34 != g_35)))
                    _fail(g_35);
                  else
                    x_34 = g_35;
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
      t = not_null(x_34);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm k_35 (ATerm t)
  {
    ATerm s_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_35);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = s_21;
        {
          t = Nil_0(t);
          t = z_64(t);
        }
      }
    return(t);
  }
  t = k_35(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  n_35 = t;
  m_35 :
  if(match_cons(n_35, sym__2))
    {
      o_35 = ATgetArgument(n_35, 0);
      p_35 = ATgetArgument(n_35, 1);
      {
        t = not_null(o_35);
        {
          ATerm h_5 (ATerm t)
          {
            t = not_null(p_35);
            return(t);
          }
          t = at_end_1(t, h_5);
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
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_35 = NULL;
  u_35 = t;
  t = SSL_explode_string(not_null(u_35));
  return(t);
}
ATerm _2 (ATerm t, ATerm c_51 (ATerm), ATerm d_51 (ATerm))
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  d_36 = t;
  c_36 :
  if(match_cons(d_36, sym__2))
    {
      e_36 = ATgetArgument(d_36, 0);
      f_36 = ATgetArgument(d_36, 1);
      {
        ATerm j_36 = NULL,l_36 = NULL;
        ATerm k_36 = NULL;
        t = SSLgetAnnotations(not_null(d_36));
        {
          k_36 = t;
          if(((j_36 != NULL) && (j_36 != k_36)))
            _fail(k_36);
          else
            j_36 = k_36;
        }
        {
          t = not_null(e_36);
          {
            ATerm n_36 = NULL;
            t = c_51(t);
            {
              l_36 = t;
              {
                t = not_null(f_36);
                {
                  ATerm p_36 = NULL;
                  t = d_51(t);
                  {
                    n_36 = t;
                    {
                      ATerm q_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_36), not_null(n_36)), not_null(j_36));
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
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  x_36 :
  if(match_cons(y_36, sym__2))
    {
      z_36 = ATgetArgument(y_36, 0);
      a_37 = ATgetArgument(y_36, 1);
      {
        ATerm y_21;
        y_21 = t;
        t = SSL_printnl(not_null(z_36), not_null(a_37));
        t = y_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm z_21;
  z_21 = t;
  {
    ATerm g_37 = NULL,i_37 = NULL;
    ATerm a_22;
    a_22 = t;
    {
      ATerm h_37 = NULL;
      t = m_72(t);
      {
        h_37 = t;
        if(((g_37 != NULL) && (g_37 != h_37)))
          _fail(h_37);
        else
          g_37 = h_37;
      }
    }
    t = a_22;
    {
      ATerm j_37 = NULL;
      j_37 = t;
      if(((i_37 != NULL) && (i_37 != j_37)))
        _fail(j_37);
      else
        i_37 = j_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_37)), not_null(g_37)));
        t = printnl_0(t);
      }
    }
  }
  t = z_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_64 (ATerm))
{
  ATerm m_37 (ATerm t)
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        t = Cons_2(t, k_64, m_37);
      }
    return(t);
  }
  t = m_37(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  t = SSL_is_string(not_null(o_37));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_5);
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            {
              ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL;
              b_38 = t;
              a_38 :
              if(match_cons(b_38, sym_Path_1))
                {
                  c_38 = ATgetArgument(b_38, 0);
                  t = not_null(c_38);
                }
              else
                {
                  if(match_cons(b_38, sym_Var_1))
                    {
                      c_38 = ATgetArgument(b_38, 0);
                      {
                        t = not_null(c_38);
                        {
                          ATerm i_22 = t;
                          int j_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(j_22);
                            }
                          else
                            {
                              t = i_22;
                              {
                                ATerm k_5 (ATerm t)
                                {
                                  t = term_k_22;
                                  return(t);
                                }
                                t = debug_1(t, k_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(b_38, sym_Prefix_2))
                        {
                          c_38 = ATgetArgument(b_38, 0);
                          d_38 = ATgetArgument(b_38, 1);
                          {
                            ATerm i_38 = NULL,m_38 = NULL;
                            ATerm m_22;
                            m_22 = t;
                            {
                              ATerm l_38 = NULL;
                              t = not_null(c_38);
                              {
                                t = eval_config_0(t);
                                {
                                  l_38 = t;
                                  if(((i_38 != NULL) && (i_38 != l_38)))
                                    _fail(l_38);
                                  else
                                    i_38 = l_38;
                                }
                              }
                            }
                            t = m_22;
                            {
                              ATerm n_38 = NULL;
                              t = not_null(d_38);
                              {
                                t = eval_config_0(t);
                                {
                                  n_38 = t;
                                  if(((m_38 != NULL) && (m_38 != n_38)))
                                    _fail(n_38);
                                  else
                                    m_38 = n_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(m_38));
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
  ATerm a_39 = NULL;
  a_39 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_22, not_null(a_39));
    {
      t = table_get_0(t);
      {
        ATerm n_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_22;
            p_22 = t;
            {
              ATerm c_39 = NULL;
              ATerm d_39 = NULL;
              d_39 = t;
              if(((c_39 != NULL) && (c_39 != d_39)))
                _fail(d_39);
              else
                c_39 = d_39;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_22, not_null(a_39), not_null(c_39));
                t = table_put_0(t);
              }
            }
            t = p_22;
          }
          return(t);
        }
        t = try_1(t, n_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_62 (ATerm))
{
  ATerm q_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_62(t);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = q_22;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
  s_39 = t;
  r_39 :
  if(match_cons(s_39, sym__2))
    {
      t_39 = ATgetArgument(s_39, 0);
      u_39 = ATgetArgument(s_39, 1);
      t = SSL_table_get(not_null(t_39), not_null(u_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_40 = NULL,j_40 = NULL,l_40 = NULL,m_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_cons(f_40, sym__3))
    {
      j_40 = ATgetArgument(f_40, 0);
      l_40 = ATgetArgument(f_40, 1);
      m_40 = ATgetArgument(f_40, 2);
      {
        ATerm a_23;
        a_23 = t;
        {
          ATerm r_40 = NULL;
          ATerm s_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_40), not_null(l_40));
          {
            ATerm c_23 = t;
            int d_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(d_23);
              }
            else
              {
                t = c_23;
                t = (ATerm) ATempty;
              }
            {
              s_40 = t;
              if(((r_40 != NULL) && (r_40 != s_40)))
                _fail(s_40);
              else
                r_40 = s_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_40), not_null(l_40), (ATerm) ATinsert(CheckATermList(not_null(r_40)), not_null(m_40)));
            t = table_put_0(t);
          }
        }
        t = a_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm b_41 = NULL;
  ATerm c_41 = NULL;
  t = term_v_12;
  {
    t = s_78(t);
    {
      c_41 = t;
      if(((b_41 != NULL) && (b_41 != c_41)))
        _fail(c_41);
      else
        b_41 = c_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_20, term_v_20, not_null(b_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
  m_41 = t;
  l_41 :
  if(match_string(m_41, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(m_41) == AT_LIST) && !(ATisEmpty(m_41))))
        {
          n_41 = ATgetFirst((ATermList) m_41);
          o_41 = (ATerm) ATgetNext((ATermList) m_41);
          {
            ATerm r_41 = NULL;
            ATerm j_23;
            j_23 = t;
            {
              t = not_null(n_41);
              t = a_0(t);
            }
            t = j_23;
            {
              ATerm s_41 = NULL;
              t = term_v_12;
              {
                t = c_0(t);
                {
                  s_41 = t;
                  if(((r_41 != NULL) && (r_41 != s_41)))
                    _fail(s_41);
                  else
                    r_41 = s_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_41)), not_null(r_41));
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
  ATerm o_5 (ATerm t)
  {
    ATerm x_41 = NULL;
    x_41 = t;
    w_41 :
    if(!(match_string(x_41, "--help")))
      {
        if(!(match_string(x_41, "-h")))
          {
            if(!(match_string(x_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_n_23;
    {
      t = set_config_0(t);
      t = term_o_23;
    }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_p_23;
    return(t);
  }
  t = Option_3(t, o_5, r_5, s_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  a_42 = t;
  z_41 :
  if(((ATgetType(a_42) == AT_LIST) && !(ATisEmpty(a_42))))
    {
      b_42 = ATgetFirst((ATermList) a_42);
      c_42 = (ATerm) ATgetNext((ATermList) a_42);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_42)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_52 (ATerm), ATerm m_52 (ATerm))
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  l_42 :
  if(((ATgetType(m_42) == AT_LIST) && !(ATisEmpty(m_42))))
    {
      n_42 = ATgetFirst((ATermList) m_42);
      o_42 = (ATerm) ATgetNext((ATermList) m_42);
      {
        ATerm s_42 = NULL,u_42 = NULL;
        ATerm t_42 = NULL;
        t = SSLgetAnnotations(not_null(m_42));
        {
          t_42 = t;
          if(((s_42 != NULL) && (s_42 != t_42)))
            _fail(t_42);
          else
            s_42 = t_42;
        }
        {
          t = not_null(n_42);
          {
            ATerm w_42 = NULL;
            t = l_52(t);
            {
              u_42 = t;
              {
                t = not_null(o_42);
                {
                  ATerm y_42 = NULL;
                  t = m_52(t);
                  {
                    w_42 = t;
                    {
                      ATerm z_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_42)), not_null(u_42)), not_null(s_42));
                      {
                        z_42 = t;
                        if(((y_42 != NULL) && (y_42 != z_42)))
                          _fail(z_42);
                        else
                          y_42 = z_42;
                      }
                      t = not_null(y_42);
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
  ATerm j_43 = NULL;
  j_43 = t;
  i_43 :
  if(((ATgetType(j_43) == AT_LIST) && ATisEmpty(j_43)))
    {
      {
        ATerm l_43 = NULL,n_43 = NULL;
        ATerm x_23;
        x_23 = t;
        {
          ATerm m_43 = NULL;
          t = SSLgetAnnotations(not_null(j_43));
          {
            m_43 = t;
            if(((l_43 != NULL) && (l_43 != m_43)))
              _fail(m_43);
            else
              l_43 = m_43;
          }
        }
        t = x_23;
        {
          ATerm o_43 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_43));
          {
            o_43 = t;
            if(((n_43 != NULL) && (n_43 != o_43)))
              _fail(o_43);
            else
              n_43 = o_43;
          }
          t = not_null(n_43);
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
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  t_43 :
  if(match_cons(u_43, sym__2))
    {
      v_43 = ATgetArgument(u_43, 0);
      w_43 = ATgetArgument(u_43, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_22, not_null(v_43), not_null(w_43));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm y_23;
  y_23 = t;
  {
    ATerm x_5 (ATerm t)
    {
      t = term_z_23;
      t = q_78(t);
      return(t);
    }
    t = try_1(t, x_5);
  }
  t = y_23;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm e_44 = NULL;
      ATerm a_24;
      a_24 = t;
      {
        ATerm c_44 = NULL;
        ATerm d_44 = NULL;
        d_44 = t;
        if(((c_44 != NULL) && (c_44 != d_44)))
          _fail(d_44);
        else
          c_44 = d_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_19, not_null(c_44));
          t = set_config_0(t);
        }
      }
      t = a_24;
      {
        ATerm f_44 = NULL;
        f_44 = t;
        if(((e_44 != NULL) && (e_44 != f_44)))
          _fail(f_44);
        else
          e_44 = f_44;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_44));
      }
      return(t);
    }
    ATerm z_5 (ATerm t)
    {
      ATerm b_24 = t;
      int c_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
              {
                t = q_78(t);
                t = Cons_2(t, _id, z_5);
              }
            }
          ;
          LocalPopChoice(c_24);
        }
      else
        {
          t = b_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_5, z_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
  ATerm h_24;
  h_24 = t;
  {
    ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL;
    o_44 = t;
    k_44 :
    if(match_cons(o_44, sym__3))
      {
        p_44 = ATgetArgument(o_44, 0);
        q_44 = ATgetArgument(o_44, 1);
        r_44 = ATgetArgument(o_44, 2);
        {
          if(((l_44 != NULL) && (l_44 != p_44)))
            _fail(p_44);
          else
            l_44 = p_44;
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
              t = SSL_table_put(not_null(l_44), not_null(m_44), not_null(n_44));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm u_44 = NULL;
  ATerm i_24;
  i_24 = t;
  {
    t = term_j_24;
    t = table_put_0(t);
  }
  t = i_24;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_78(t);
          ;
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_6);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_24;
            u_24 = t;
            {
              ATerm v_24 = t;
              int w_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_k_23;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(w_24);
                }
              else
                {
                  t = v_24;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = u_24;
            {
              t = system_usage_0(t);
              {
                t = term_o_16;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
            {
              ATerm g_6 (ATerm t)
              {
                ATerm i_6 (ATerm t)
                {
                  ATerm v_44 = NULL;
                  v_44 = t;
                  if(((u_44 != NULL) && (u_44 != v_44)))
                    _fail(v_44);
                  else
                    u_44 = v_44;
                  return(t);
                }
                t = Undefined_1(t, i_6);
                return(t);
              }
              t = option_defined_1(t, g_6);
              {
                ATerm j_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_44)), term_x_24);
                  return(t);
                }
                t = say_1(t, j_6);
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
      t = try_1(t, f_6);
      {
        ATerm y_24;
        y_24 = t;
        {
          t = term_u_20;
          t = table_destroy_0(t);
        }
        t = y_24;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm p_76 (ATerm))
{
  t = parse_options_1(t, m_76);
  {
    t = store_options_0(t);
    {
      t = o_76(t);
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_76);
            ;
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm g_25 = t;
              int h_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_76(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(h_25);
                }
              else
                {
                  t = g_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm q_76 (ATerm), ATerm r_76 (ATerm))
{
  t = option_wrap_4(t, q_76, default_usage_0, _id, r_76);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm h_75 (ATerm), ATerm i_75 (ATerm))
{
  ATerm k_6 (ATerm t)
  {
    ATerm i_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_75(t);
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = i_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = xtc_io_1(t, i_75);
    return(t);
  }
  t = option_wrap_2(t, k_6, l_6);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm g_75 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, g_75);
  return(t);
}
ATerm io_pp_box_0 (ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    ATerm r_6 (ATerm t)
    {
      t = term_o_25;
      return(t);
    }
    ATerm s_6 (ATerm t)
    {
      ATerm y_44 = NULL;
      ATerm z_44 = NULL;
      t = term_p_25;
      {
        t = xtc_find_0(t);
        {
          z_44 = t;
          if(((y_44 != NULL) && (y_44 != z_44)))
            _fail(z_44);
          else
            y_44 = z_44;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_44)), term_q_25);
      return(t);
    }
    t = xtc_transform_2(t, r_6, s_6);
    {
      t = xtc_abox_format_0(t);
      t = xtc_abox2text_0(t);
    }
    return(t);
  }
  t = xtc_io_wrap_1(t, q_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_pp_box_0(t);
  return(t);
}
