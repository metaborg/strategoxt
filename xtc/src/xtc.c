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
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  init_constant_terms();
}
ATerm term_u_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_k_27;
ATerm term_z_26;
ATerm term_x_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_z_25;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_l_23;
ATerm term_m_22;
ATerm term_b_22;
ATerm term_m_21;
ATerm term_w_20;
ATerm term_r_20;
ATerm term_c_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_g_19;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_o_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_z_15;
ATerm term_u_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_s_14;
ATerm term_m_14;
ATerm term_g_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_q_9;
ATerm term_l_9;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_g_8;
void init_constant_terms (void)
{
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_t_10, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_m_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_m_15);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_p_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_m_15);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__3, term_o_17, term_p_17, (ATerm) ATempty);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_t_11);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_q_24);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
}
ATerm version_query_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm g_88 (ATerm));
ATerm tool_query_0 (ATerm);
ATerm list_tool_0 (ATerm);
ATerm Tool_1 (ATerm, ATerm j_60 (ATerm));
ATerm all_query_0 (ATerm);
ATerm repository_query_0 (ATerm);
ATerm xtc_query_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm can_write_file_0 (ATerm);
ATerm xtc_store_0 (ATerm);
ATerm register_import_0 (ATerm);
ATerm table_union_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_88 (ATerm));
ATerm xtc_register_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm f_88 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm extend_config_0 (ATerm);
ATerm xtc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_0 (ATerm));
ATerm Program_1 (ATerm, ATerm w_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_82 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_83 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_83 (ATerm));
ATerm parse_options_1 (ATerm, ATerm q_83 (ATerm));
ATerm xtc_main_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm print_0 (ATerm);
ATerm xtc_xtc_get_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm debug_1 (ATerm, ATerm a_79 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm i_88 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm e_75 (ATerm));
ATerm repeat_1 (ATerm, ATerm p_61 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_79 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm h_88 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm j_88 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm n_68 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm h_72 (ATerm), ATerm i_72 (ATerm));
ATerm union_1 (ATerm, ATerm d_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm z_84 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm access_0 (ATerm);
ATerm can_read_file_0 (ATerm);
ATerm read_repository_file_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm table_put_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_68 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm h_53 (ATerm), ATerm i_53 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_54 (ATerm), ATerm r_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm e_68 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_60 (ATerm));
ATerm get_config_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_xtc_call_0 (ATerm);
ATerm xtc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm version_query_0 (ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL,c_2 = NULL;
  ATerm f_8;
  f_8 = t;
  {
    ATerm a_2 = NULL;
    t = term_g_8;
    {
      t = get_config_0(t);
      {
        a_2 = t;
        if(((z_1 != NULL) && (z_1 != a_2)))
          _fail(a_2);
        else
          z_1 = a_2;
      }
    }
  }
  t = f_8;
  {
    ATerm c_0 (ATerm t)
    {
      ATerm d_2 = NULL,e_2 = NULL;
      d_2 = t;
      t_1 :
      if(match_cons(d_2, sym_Tool_1))
        {
          e_2 = ATgetArgument(d_2, 0);
          if(((b_2 != NULL) && (b_2 != e_2)))
            _fail(e_2);
          else
            b_2 = e_2;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    ATerm e_0 (ATerm t)
    {
      ATerm f_0 (ATerm t)
      {
        ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL;
        f_2 = t;
        v_1 :
        if(match_cons(f_2, sym__2))
          {
            g_2 = ATgetArgument(f_2, 0);
            h_2 = ATgetArgument(f_2, 1);
            {
              if(((z_1 != NULL) && (z_1 != g_2)))
                _fail(g_2);
              else
                z_1 = g_2;
              if(((c_2 != NULL) && (c_2 != h_2)))
                _fail(h_2);
              else
                c_2 = h_2;
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = fetch_1(t, f_0);
      return(t);
    }
    t = _2(t, c_0, e_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(b_2)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(z_1), not_null(c_2))));
      t = list_tool_0(t);
    }
  }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm g_88 (ATerm))
{
  ATerm h_0 (ATerm t)
  {
    ATerm h_8;
    h_8 = t;
    {
      ATerm m_2 = NULL;
      ATerm n_2 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          n_2 = t;
          if(((m_2 != NULL) && (m_2 != n_2)))
            _fail(n_2);
          else
            m_2 = n_2;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_2), term_j_8);
        t = geq_0(t);
      }
    }
    t = h_8;
    t = g_88(t);
    return(t);
  }
  t = try_1(t, h_0);
  return(t);
}
ATerm tool_query_0 (ATerm t)
{
  ATerm r_2 = NULL;
  t = term_k_8;
  {
    t = get_config_0(t);
    {
      t = xtc_import_0(t);
      {
        ATerm o_0 (ATerm t)
        {
          ATerm s_2 = NULL;
          s_2 = t;
          {
            ATerm p_8 = t;
            int q_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_2 = NULL;
                ATerm p_0 (ATerm t)
                {
                  ATerm q_0 (ATerm t)
                  {
                    t = term_v_8;
                    return(t);
                  }
                  t = debug_1(t, q_0);
                  return(t);
                }
                t = if_verbose3_1(t, p_0);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_2)));
                  {
                    t = table_get_0(t);
                    {
                      u_2 = t;
                      {
                        if(((r_2 != NULL) && (r_2 != u_2)))
                          _fail(u_2);
                        else
                          r_2 = u_2;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(s_2)), not_null(r_2));
                          {
                            ATerm x_8 = t;
                            int z_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = version_query_0(t);
                                ;
                                LocalPopChoice(z_8);
                              }
                            else
                              {
                                t = x_8;
                                t = list_tool_0(t);
                              }
                          }
                        }
                      }
                    }
                  }
                }
                ;
                LocalPopChoice(q_8);
              }
            else
              {
                t = p_8;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_9), term_d_9), not_null(s_2)));
                  t = print_0(t);
                }
              }
          }
          return(t);
        }
        t = map_1(t, o_0);
      }
    }
  }
  return(t);
}
ATerm list_tool_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  c_3 = t;
  a_3 :
  if(match_cons(c_3, sym__2))
    {
      d_3 = ATgetArgument(c_3, 0);
      f_3 = ATgetArgument(c_3, 1);
      b_3 :
      if(match_cons(d_3, sym_Tool_1))
        {
          e_3 = ATgetArgument(d_3, 0);
          {
            t = not_null(f_3);
            {
              ATerm r_0 (ATerm t)
              {
                ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
                i_3 = t;
                z_2 :
                if(match_cons(i_3, sym__2))
                  {
                    j_3 = ATgetArgument(i_3, 0);
                    k_3 = ATgetArgument(i_3, 1);
                    {
                      ATerm h_9 = t;
                      int j_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_l_9;
                          {
                            t = get_config_0(t);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATempty, term_f_9), not_null(k_3)));
                              t = print_0(t);
                            }
                          }
                          ;
                          LocalPopChoice(j_9);
                        }
                      else
                        {
                          t = h_9;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_9), not_null(k_3)), term_s_10), not_null(j_3)), term_q_9), not_null(e_3)));
                            t = print_0(t);
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
              t = map_1(t, r_0);
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
  return(t);
}
ATerm Tool_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm u_3 = NULL,v_3 = NULL;
  u_3 = t;
  t_3 :
  if(match_cons(u_3, sym_Tool_1))
    {
      v_3 = ATgetArgument(u_3, 0);
      {
        ATerm y_3 = NULL,a_4 = NULL;
        ATerm z_3 = NULL;
        t = SSLgetAnnotations(not_null(u_3));
        {
          z_3 = t;
          if(((y_3 != NULL) && (y_3 != z_3)))
            _fail(z_3);
          else
            y_3 = z_3;
        }
        {
          t = not_null(v_3);
          {
            ATerm c_4 = NULL;
            t = j_60(t);
            {
              a_4 = t;
              {
                ATerm d_4 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Tool_1, not_null(a_4)), not_null(y_3));
                {
                  d_4 = t;
                  if(((c_4 != NULL) && (c_4 != d_4)))
                    _fail(d_4);
                  else
                    c_4 = d_4;
                }
                t = not_null(c_4);
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
ATerm all_query_0 (ATerm t)
{
  t = term_t_10;
  {
    t = get_config_0(t);
    {
      t = xtc_import_0(t);
      {
        t = term_w_8;
        {
          t = table_getlist_0(t);
          {
            ATerm s_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                ATerm u_0 (ATerm t)
                {
                  t = Tool_1(t, _id);
                  return(t);
                }
                t = _2(t, u_0, _id);
                t = list_tool_0(t);
                return(t);
              }
              t = try_1(t, t_0);
              return(t);
            }
            t = map_1(t, s_0);
          }
        }
      }
    }
  }
  return(t);
}
ATerm repository_query_0 (ATerm t)
{
  ATerm j_4 = NULL;
  t = term_u_10;
  {
    t = get_config_0(t);
    {
      t = xtc_location_0(t);
      {
        ATerm k_4 = NULL;
        k_4 = t;
        if(((j_4 != NULL) && (j_4 != k_4)))
          _fail(k_4);
        else
          j_4 = k_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_9), not_null(j_4)), term_v_10));
          t = print_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm xtc_query_0 (ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = repository_query_0(t);
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = all_query_0(t);
            ;
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            t = tool_query_0(t);
          }
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
  o_4 = t;
  n_4 :
  if(match_cons(o_4, sym__2))
    {
      p_4 = ATgetArgument(o_4, 0);
      q_4 = ATgetArgument(o_4, 1);
      t = SSL_WriteToTextFile(not_null(p_4), not_null(q_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_write_file_0 (ATerm t)
{
  ATerm v_4 = NULL;
  ATerm w_4 = NULL;
  w_4 = t;
  if(((v_4 != NULL) && (v_4 != w_4)))
    _fail(w_4);
  else
    v_4 = w_4;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_4), (ATerm) ATinsert(ATempty, term_a_11));
    t = access_0(t);
  }
  return(t);
}
ATerm xtc_store_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      t = term_c_11;
      return(t);
    }
    t = say_1(t, w_0);
    return(t);
  }
  t = if_verbose1_1(t, v_0);
  {
    t = term_d_11;
    {
      t = get_config_0(t);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = can_write_file_0(t);
            LocalPopChoice(j_11);
            {
              ATerm a_5 = NULL,c_5 = NULL;
              ATerm o_11;
              o_11 = t;
              {
                ATerm b_5 = NULL;
                b_5 = t;
                if(((a_5 != NULL) && (a_5 != b_5)))
                  _fail(b_5);
                else
                  a_5 = b_5;
              }
              t = o_11;
              {
                ATerm d_5 = NULL;
                t = term_w_8;
                {
                  t = table_getlist_0(t);
                  {
                    d_5 = t;
                    if(((c_5 != NULL) && (c_5 != d_5)))
                      _fail(d_5);
                    else
                      c_5 = d_5;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_5), not_null(c_5));
                  t = WriteToTextFile_0(t);
                }
              }
            }
          }
        else
          {
            t = i_11;
            {
              ATerm x_0 (ATerm t)
              {
                t = term_p_11;
                return(t);
              }
              t = debug_1(t, x_0);
              _fail(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm register_import_0 (ATerm t)
{
  ATerm i_5 = NULL;
  t = term_q_11;
  {
    ATerm k_5 = NULL;
    t = get_config_0(t);
    {
      i_5 = t;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm z_0 (ATerm t)
          {
            t = term_r_11;
            return(t);
          }
          t = debug_1(t, z_0);
          return(t);
        }
        t = if_verbose2_1(t, y_0);
        {
          t = term_q_11;
          {
            t = get_config_0(t);
            {
              k_5 = t;
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = term_s_11;
                    return(t);
                  }
                  t = debug_1(t, b_1);
                  return(t);
                }
                t = if_verbose5_1(t, a_1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_w_8, term_t_11, not_null(k_5));
                  t = table_union_0(t);
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
ATerm table_union_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym__3))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      v_5 = ATgetArgument(s_5, 2);
      {
        ATerm u_11;
        u_11 = t;
        {
          ATerm z_5 = NULL;
          ATerm a_6 = NULL,c_6 = NULL;
          ATerm b_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(u_5));
          {
            ATerm z_11 = t;
            int a_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(a_12);
              }
            else
              {
                t = z_11;
                t = (ATerm) ATempty;
              }
            {
              b_6 = t;
              if(((a_6 != NULL) && (a_6 != b_6)))
                _fail(b_6);
              else
                a_6 = b_6;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_5), not_null(a_6));
            {
              t = union_0(t);
              {
                c_6 = t;
                if(((z_5 != NULL) && (z_5 != c_6)))
                  _fail(c_6);
                else
                  z_5 = c_6;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_5), not_null(u_5), not_null(z_5));
            t = set_0(t);
          }
        }
        t = u_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_88 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm h_12;
    h_12 = t;
    {
      ATerm h_6 = NULL;
      ATerm i_6 = NULL;
      t = term_i_8;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_6), term_i_12);
        t = geq_0(t);
      }
    }
    t = h_12;
    t = e_88(t);
    return(t);
  }
  t = try_1(t, c_1);
  return(t);
}
ATerm xtc_register_0 (ATerm t)
{
  ATerm q_6 = NULL;
  t = term_k_8;
  {
    ATerm s_6 = NULL;
    t = get_config_0(t);
    {
      q_6 = t;
      {
        ATerm d_1 (ATerm t)
        {
          ATerm e_1 (ATerm t)
          {
            t = term_j_12;
            return(t);
          }
          t = say_1(t, e_1);
          return(t);
        }
        t = if_verbose1_1(t, d_1);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm g_1 (ATerm t)
            {
              t = term_k_12;
              return(t);
            }
            t = debug_1(t, g_1);
            return(t);
          }
          t = if_verbose2_1(t, f_1);
          {
            t = term_g_8;
            {
              ATerm u_6 = NULL;
              t = get_config_0(t);
              {
                s_6 = t;
                {
                  ATerm h_1 (ATerm t)
                  {
                    ATerm i_1 (ATerm t)
                    {
                      t = term_l_12;
                      return(t);
                    }
                    t = debug_1(t, i_1);
                    return(t);
                  }
                  t = if_verbose2_1(t, h_1);
                  {
                    t = term_l_9;
                    {
                      t = get_config_0(t);
                      {
                        u_6 = t;
                        {
                          ATerm j_1 (ATerm t)
                          {
                            ATerm k_1 (ATerm t)
                            {
                              t = term_m_12;
                              return(t);
                            }
                            t = debug_1(t, k_1);
                            return(t);
                          }
                          t = if_verbose2_1(t, j_1);
                          {
                            t = not_null(q_6);
                            {
                              ATerm l_1 (ATerm t)
                              {
                                ATerm w_6 = NULL,y_6 = NULL;
                                ATerm n_12;
                                n_12 = t;
                                {
                                  ATerm x_6 = NULL;
                                  x_6 = t;
                                  if(((w_6 != NULL) && (w_6 != x_6)))
                                    _fail(x_6);
                                  else
                                    w_6 = x_6;
                                }
                                t = n_12;
                                {
                                  ATerm z_6 = NULL,b_7 = NULL;
                                  ATerm a_7 = NULL;
                                  a_7 = t;
                                  if(((z_6 != NULL) && (z_6 != a_7)))
                                    _fail(a_7);
                                  else
                                    z_6 = a_7;
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_6)), term_o_12), not_null(u_6));
                                    {
                                      t = concat_strings_0(t);
                                      {
                                        b_7 = t;
                                        if(((y_6 != NULL) && (y_6 != b_7)))
                                          _fail(b_7);
                                        else
                                          y_6 = b_7;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, term_w_8, (ATerm)ATmakeAppl(sym_Tool_1, not_null(w_6)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(s_6), not_null(y_6))));
                                    t = table_union_0(t);
                                  }
                                }
                                return(t);
                              }
                              t = map_1(t, l_1);
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
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm f_88 (ATerm))
{
  ATerm m_1 (ATerm t)
  {
    ATerm p_12;
    p_12 = t;
    {
      ATerm j_7 = NULL;
      ATerm k_7 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          k_7 = t;
          if(((j_7 != NULL) && (j_7 != k_7)))
            _fail(k_7);
          else
            j_7 = k_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_7), term_t_12);
        t = geq_0(t);
      }
    }
    t = p_12;
    t = f_88(t);
    return(t);
  }
  t = try_1(t, m_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_7 = NULL;
  n_7 = t;
  t = SSL_string_to_int(not_null(n_7));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL;
  v_7 = t;
  t_7 :
  if(match_string(v_7, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
        {
          w_7 = ATgetFirst((ATermList) v_7);
          x_7 = (ATerm) ATgetNext((ATermList) v_7);
          u_7 :
          if(((ATgetType(x_7) == AT_LIST) && !(ATisEmpty(x_7))))
            {
              y_7 = ATgetFirst((ATermList) x_7);
              z_7 = (ATerm) ATgetNext((ATermList) x_7);
              {
                ATerm d_8 = NULL;
                ATerm u_12;
                u_12 = t;
                {
                  t = not_null(w_7);
                  t = l_0(t);
                }
                t = u_12;
                {
                  ATerm e_8 = NULL;
                  t = not_null(y_7);
                  {
                    t = m_0(t);
                    {
                      e_8 = t;
                      if(((d_8 != NULL) && (d_8 != e_8)))
                        _fail(e_8);
                      else
                        d_8 = e_8;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_7)), not_null(d_8));
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
ATerm extend_config_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
  m_8 = t;
  l_8 :
  if(match_cons(m_8, sym__2))
    {
      n_8 = ATgetArgument(m_8, 0);
      o_8 = ATgetArgument(m_8, 1);
      {
        ATerm r_8 = NULL;
        ATerm s_8 = NULL,u_8 = NULL;
        ATerm t_8 = NULL;
        t = not_null(n_8);
        {
          ATerm y_12 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(b_13);
            }
          else
            {
              t = y_12;
              t = (ATerm) ATempty;
            }
          {
            t_8 = t;
            if(((s_8 != NULL) && (s_8 != t_8)))
              _fail(t_8);
            else
              s_8 = t_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), not_null(s_8));
          {
            t = conc_0(t);
            {
              u_8 = t;
              if(((r_8 != NULL) && (r_8 != u_8)))
                _fail(u_8);
              else
                r_8 = u_8;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_c_13, not_null(n_8), not_null(r_8));
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
ATerm xtc_options_0 (ATerm t)
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm r_9 = NULL;
        r_9 = t;
        y_8 :
        if(!(match_string(r_9, "-r")))
          {
            if(!(match_string(r_9, "--repository")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        ATerm f_13;
        f_13 = t;
        {
          ATerm s_9 = NULL;
          ATerm t_9 = NULL;
          t_9 = t;
          if(((s_9 != NULL) && (s_9 != t_9)))
            _fail(t_9);
          else
            s_9 = t_9;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_d_11, not_null(s_9));
            t = set_config_0(t);
          }
        }
        t = f_13;
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        t = term_g_13;
        return(t);
      }
      t = ArgOption_3(t, n_1, o_1, p_1);
      ;
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm u_9 = NULL;
              u_9 = t;
              a_9 :
              if(!(match_string(u_9, "i")))
                {
                  if(!(match_string(u_9, "imp")))
                    {
                      if(!(match_string(u_9, "import")))
                        {
                          _fail(t);
                        }
                    }
                }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              ATerm q_13;
              q_13 = t;
              {
                ATerm v_9 = NULL;
                ATerm w_9 = NULL;
                w_9 = t;
                if(((v_9 != NULL) && (v_9 != w_9)))
                  _fail(w_9);
                else
                  v_9 = w_9;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_11, (ATerm) ATinsert(ATempty, not_null(v_9)));
                  t = extend_config_0(t);
                }
              }
              t = q_13;
              return(t);
            }
            ATerm s_1 (ATerm t)
            {
              t = term_r_13;
              return(t);
            }
            t = ArgOption_3(t, q_1, r_1, s_1);
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            {
              ATerm s_13 = t;
              int t_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    ATerm x_9 = NULL;
                    x_9 = t;
                    c_9 :
                    if(!(match_string(x_9, "r")))
                      {
                        if(!(match_string(x_9, "reg")))
                          {
                            if(!(match_string(x_9, "register")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm w_1 (ATerm t)
                  {
                    ATerm u_13;
                    u_13 = t;
                    {
                      ATerm y_9 = NULL;
                      ATerm z_9 = NULL;
                      z_9 = t;
                      if(((y_9 != NULL) && (y_9 != z_9)))
                        _fail(z_9);
                      else
                        y_9 = z_9;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_v_13, not_null(y_9));
                        t = set_config_0(t);
                      }
                    }
                    t = u_13;
                    return(t);
                  }
                  ATerm x_1 (ATerm t)
                  {
                    t = term_w_13;
                    return(t);
                  }
                  t = Option_3(t, u_1, w_1, x_1);
                  ;
                  LocalPopChoice(t_13);
                }
              else
                {
                  t = s_13;
                  {
                    ATerm x_13 = t;
                    int b_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_1 (ATerm t)
                        {
                          ATerm a_10 = NULL;
                          a_10 = t;
                          e_9 :
                          if(!(match_string(a_10, "-t")))
                            {
                              if(!(match_string(a_10, "--tool")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm i_2 (ATerm t)
                        {
                          ATerm c_14;
                          c_14 = t;
                          {
                            ATerm b_10 = NULL;
                            ATerm c_10 = NULL;
                            c_10 = t;
                            if(((b_10 != NULL) && (b_10 != c_10)))
                              _fail(c_10);
                            else
                              b_10 = c_10;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATempty, not_null(b_10)));
                              t = extend_config_0(t);
                            }
                          }
                          t = c_14;
                          return(t);
                        }
                        ATerm j_2 (ATerm t)
                        {
                          t = term_g_14;
                          return(t);
                        }
                        t = ArgOption_3(t, y_1, i_2, j_2);
                        ;
                        LocalPopChoice(b_14);
                      }
                    else
                      {
                        t = x_13;
                        {
                          ATerm j_14 = t;
                          int k_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_2 (ATerm t)
                              {
                                ATerm d_10 = NULL;
                                d_10 = t;
                                g_9 :
                                if(!(match_string(d_10, "-l")))
                                  {
                                    if(!(match_string(d_10, "--location")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm l_2 (ATerm t)
                              {
                                ATerm l_14;
                                l_14 = t;
                                {
                                  ATerm e_10 = NULL;
                                  ATerm f_10 = NULL;
                                  f_10 = t;
                                  if(((e_10 != NULL) && (e_10 != f_10)))
                                    _fail(f_10);
                                  else
                                    e_10 = f_10;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_l_9, not_null(e_10));
                                    t = set_config_0(t);
                                  }
                                }
                                t = l_14;
                                return(t);
                              }
                              ATerm o_2 (ATerm t)
                              {
                                t = term_m_14;
                                return(t);
                              }
                              t = ArgOption_3(t, k_2, l_2, o_2);
                              ;
                              LocalPopChoice(k_14);
                            }
                          else
                            {
                              t = j_14;
                              {
                                ATerm n_14 = t;
                                int o_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_2 (ATerm t)
                                    {
                                      ATerm g_10 = NULL;
                                      g_10 = t;
                                      i_9 :
                                      if(!(match_string(g_10, "-V")))
                                        {
                                          if(!(match_string(g_10, "--Version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm q_2 (ATerm t)
                                    {
                                      ATerm p_14;
                                      p_14 = t;
                                      {
                                        ATerm h_10 = NULL;
                                        ATerm i_10 = NULL;
                                        i_10 = t;
                                        if(((h_10 != NULL) && (h_10 != i_10)))
                                          _fail(i_10);
                                        else
                                          h_10 = i_10;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(h_10));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = p_14;
                                      return(t);
                                    }
                                    ATerm t_2 (ATerm t)
                                    {
                                      t = term_s_14;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, p_2, q_2, t_2);
                                    ;
                                    LocalPopChoice(o_14);
                                  }
                                else
                                  {
                                    t = n_14;
                                    {
                                      ATerm x_14 = t;
                                      int y_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_2 (ATerm t)
                                          {
                                            ATerm j_10 = NULL;
                                            j_10 = t;
                                            k_9 :
                                            if(!(match_string(j_10, "q")))
                                              {
                                                if(!(match_string(j_10, "query")))
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            return(t);
                                          }
                                          ATerm w_2 (ATerm t)
                                          {
                                            ATerm z_14;
                                            z_14 = t;
                                            {
                                              ATerm k_10 = NULL;
                                              ATerm l_10 = NULL;
                                              l_10 = t;
                                              if(((k_10 != NULL) && (k_10 != l_10)))
                                                _fail(l_10);
                                              else
                                                k_10 = l_10;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, term_a_15, not_null(k_10));
                                                t = set_config_0(t);
                                              }
                                            }
                                            t = z_14;
                                            return(t);
                                          }
                                          ATerm x_2 (ATerm t)
                                          {
                                            t = term_b_15;
                                            return(t);
                                          }
                                          t = Option_3(t, v_2, w_2, x_2);
                                          ;
                                          LocalPopChoice(y_14);
                                        }
                                      else
                                        {
                                          t = x_14;
                                          {
                                            ATerm h_15 = t;
                                            int i_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm y_2 (ATerm t)
                                                {
                                                  ATerm m_10 = NULL;
                                                  m_10 = t;
                                                  m_9 :
                                                  if(!(match_string(m_10, "-a")))
                                                    {
                                                      if(!(match_string(m_10, "--all")))
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  return(t);
                                                }
                                                ATerm g_3 (ATerm t)
                                                {
                                                  ATerm j_15;
                                                  j_15 = t;
                                                  {
                                                    t = term_n_15;
                                                    t = set_config_0(t);
                                                  }
                                                  t = j_15;
                                                  return(t);
                                                }
                                                ATerm h_3 (ATerm t)
                                                {
                                                  t = term_o_15;
                                                  return(t);
                                                }
                                                t = Option_3(t, y_2, g_3, h_3);
                                                ;
                                                LocalPopChoice(i_15);
                                              }
                                            else
                                              {
                                                t = h_15;
                                                {
                                                  ATerm r_15 = t;
                                                  int s_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_3 (ATerm t)
                                                      {
                                                        ATerm n_10 = NULL;
                                                        n_10 = t;
                                                        n_9 :
                                                        if(!(match_string(n_10, "-L")))
                                                          {
                                                            if(!(match_string(n_10, "--Location")))
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm m_3 (ATerm t)
                                                      {
                                                        ATerm t_15;
                                                        t_15 = t;
                                                        {
                                                          t = term_u_15;
                                                          t = set_config_0(t);
                                                        }
                                                        t = t_15;
                                                        return(t);
                                                      }
                                                      ATerm n_3 (ATerm t)
                                                      {
                                                        t = term_z_15;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, l_3, m_3, n_3);
                                                      ;
                                                      LocalPopChoice(s_15);
                                                    }
                                                  else
                                                    {
                                                      t = r_15;
                                                      {
                                                        ATerm a_16 = t;
                                                        int d_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm o_3 (ATerm t)
                                                            {
                                                              ATerm o_10 = NULL;
                                                              o_10 = t;
                                                              o_9 :
                                                              if(!(match_string(o_10, "-R")))
                                                                {
                                                                  if(!(match_string(o_10, "--Repository")))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm p_3 (ATerm t)
                                                            {
                                                              ATerm e_16;
                                                              e_16 = t;
                                                              {
                                                                t = term_f_16;
                                                                t = set_config_0(t);
                                                              }
                                                              t = e_16;
                                                              return(t);
                                                            }
                                                            ATerm q_3 (ATerm t)
                                                            {
                                                              t = term_i_16;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, o_3, p_3, q_3);
                                                            ;
                                                            LocalPopChoice(d_16);
                                                          }
                                                        else
                                                          {
                                                            t = a_16;
                                                            {
                                                              ATerm r_3 (ATerm t)
                                                              {
                                                                ATerm p_10 = NULL;
                                                                p_10 = t;
                                                                p_9 :
                                                                if(!(match_string(p_10, "--verbose")))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                return(t);
                                                              }
                                                              ATerm s_3 (ATerm t)
                                                              {
                                                                ATerm n_16;
                                                                n_16 = t;
                                                                {
                                                                  ATerm q_10 = NULL;
                                                                  ATerm r_10 = NULL;
                                                                  t = string_to_int_0(t);
                                                                  {
                                                                    r_10 = t;
                                                                    if(((q_10 != NULL) && (q_10 != r_10)))
                                                                      _fail(r_10);
                                                                    else
                                                                      q_10 = r_10;
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym__2, term_i_8, not_null(q_10));
                                                                    t = set_config_0(t);
                                                                  }
                                                                }
                                                                t = n_16;
                                                                return(t);
                                                              }
                                                              ATerm w_3 (ATerm t)
                                                              {
                                                                t = term_o_16;
                                                                return(t);
                                                              }
                                                              t = ArgOption_3(t, r_3, s_3, w_3);
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
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  t = SSL_table_destroy(not_null(b_11));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  f_11 = t;
  e_11 :
  if(((ATgetType(f_11) == AT_LIST) && ATisEmpty(f_11)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(f_11) == AT_LIST) && !(ATisEmpty(f_11))))
        {
          g_11 = ATgetFirst((ATermList) f_11);
          h_11 = (ATerm) ATgetNext((ATermList) f_11);
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
  ATerm p_16;
  p_16 = t;
  {
    ATerm k_11 = NULL;
    ATerm n_11 = NULL;
    ATerm q_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = q_16;
        {
          ATerm l_11 = NULL;
          ATerm m_11 = NULL;
          m_11 = t;
          if(((l_11 != NULL) && (l_11 != m_11)))
            _fail(m_11);
          else
            l_11 = m_11;
          t = (ATerm) ATinsert(ATempty, not_null(l_11));
        }
      }
    {
      n_11 = t;
      if(((k_11 != NULL) && (k_11 != n_11)))
        _fail(n_11);
      else
        k_11 = n_11;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(k_11));
      t = printnl_0(t);
    }
  }
  t = p_16;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_16), term_w_16);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
  y_11 = t;
  v_11 :
  if(((ATgetType(y_11) == AT_LIST) && !(ATisEmpty(y_11))))
    {
      w_11 = ATgetFirst((ATermList) y_11);
      x_11 = (ATerm) ATgetNext((ATermList) y_11);
      {
        ATerm b_12 = NULL;
        t = not_null(x_11);
        {
          ATerm y_16;
          y_16 = t;
          {
            ATerm c_12 = NULL,e_12 = NULL,g_12 = NULL;
            ATerm z_16;
            z_16 = t;
            {
              ATerm d_12 = NULL;
              t = j_0(t);
              {
                d_12 = t;
                if(((c_12 != NULL) && (c_12 != d_12)))
                  _fail(d_12);
                else
                  c_12 = d_12;
              }
            }
            t = z_16;
            {
              ATerm f_12 = NULL;
              t = not_null(w_11);
              {
                t = i_0(t);
                {
                  f_12 = t;
                  if(((e_12 != NULL) && (e_12 != f_12)))
                    _fail(f_12);
                  else
                    e_12 = f_12;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_12)), not_null(e_12));
                {
                  g_12 = t;
                  if(((b_12 != NULL) && (b_12 != g_12)))
                    _fail(g_12);
                  else
                    b_12 = g_12;
                }
              }
            }
          }
          t = y_16;
          {
            ATerm x_3 (ATerm t)
            {
              t = not_null(b_12);
              return(t);
            }
            t = reverse_acc_2(t, i_0, x_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_11) == AT_LIST) && ATisEmpty(y_11)))
        {
          {
            t = term_m_15;
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
  ATerm b_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), term_f_17), term_e_17);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm r_12 = NULL,s_12 = NULL;
  r_12 = t;
  q_12 :
  if(match_cons(r_12, sym_Program_1))
    {
      s_12 = ATgetArgument(r_12, 0);
      {
        ATerm v_12 = NULL,x_12 = NULL;
        ATerm w_12 = NULL;
        t = SSLgetAnnotations(not_null(r_12));
        {
          w_12 = t;
          if(((v_12 != NULL) && (v_12 != w_12)))
            _fail(w_12);
          else
            v_12 = w_12;
        }
        {
          t = not_null(s_12);
          {
            ATerm z_12 = NULL;
            t = w_59(t);
            {
              x_12 = t;
              {
                ATerm a_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_12)), not_null(v_12));
                {
                  a_13 = t;
                  if(((z_12 != NULL) && (z_12 != a_13)))
                    _fail(a_13);
                  else
                    z_12 = a_13;
                }
                t = not_null(z_12);
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
  ATerm j_13 = NULL;
  ATerm h_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_13 = NULL;
      t = term_l_17;
      {
        t = get_config_0(t);
        {
          k_13 = t;
          if(((j_13 != NULL) && (j_13 != k_13)))
            _fail(k_13);
          else
            j_13 = k_13;
        }
      }
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = h_17;
      {
        ATerm e_4 (ATerm t)
        {
          ATerm f_4 (ATerm t)
          {
            ATerm l_13 = NULL;
            l_13 = t;
            if(((j_13 != NULL) && (j_13 != l_13)))
              _fail(l_13);
            else
              j_13 = l_13;
            return(t);
          }
          t = Program_1(t, f_4);
          return(t);
        }
        t = option_defined_1(t, e_4);
      }
    }
  {
    ATerm g_4 (ATerm t)
    {
      ATerm h_4 (ATerm t)
      {
        t = not_null(j_13);
        return(t);
      }
      t = short_description_1(t, h_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_4);
    {
      t = term_n_17;
      {
        t = echo_0(t);
        {
          t = term_u_17;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_4 (ATerm t)
                {
                  ATerm m_13 = NULL;
                  ATerm n_13 = NULL;
                  n_13 = t;
                  if(((m_13 != NULL) && (m_13 != n_13)))
                    _fail(n_13);
                  else
                    m_13 = n_13;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_13)), term_v_17);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_4);
                {
                  ATerm l_4 (ATerm t)
                  {
                    ATerm o_13 = NULL;
                    ATerm p_13 = NULL;
                    ATerm m_4 (ATerm t)
                    {
                      t = not_null(j_13);
                      return(t);
                    }
                    t = long_description_1(t, m_4);
                    {
                      p_13 = t;
                      if(((o_13 != NULL) && (o_13 != p_13)))
                        _fail(p_13);
                      else
                        o_13 = p_13;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(o_13)), term_f_9);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_4);
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
ATerm Undefined_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm z_13 = NULL,a_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym_Undefined_1))
    {
      a_14 = ATgetArgument(z_13, 0);
      {
        ATerm d_14 = NULL,f_14 = NULL;
        ATerm e_14 = NULL;
        t = SSLgetAnnotations(not_null(z_13));
        {
          e_14 = t;
          if(((d_14 != NULL) && (d_14 != e_14)))
            _fail(e_14);
          else
            d_14 = e_14;
        }
        {
          t = not_null(a_14);
          {
            ATerm h_14 = NULL;
            t = x_59(t);
            {
              f_14 = t;
              {
                ATerm i_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_14)), not_null(d_14));
                {
                  i_14 = t;
                  if(((h_14 != NULL) && (h_14 != i_14)))
                    _fail(i_14);
                  else
                    h_14 = i_14;
                }
                t = not_null(h_14);
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
ATerm option_defined_1 (ATerm t, ATerm o_82 (ATerm))
{
  t = fetch_1(t, o_82);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym_Help_0))
    {
      ATerm t_14 = NULL,v_14 = NULL;
      ATerm w_17;
      w_17 = t;
      {
        ATerm u_14 = NULL;
        t = SSLgetAnnotations(not_null(r_14));
        {
          u_14 = t;
          if(((t_14 != NULL) && (t_14 != u_14)))
            _fail(u_14);
          else
            t_14 = u_14;
        }
      }
      t = w_17;
      {
        ATerm w_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_14));
        {
          w_14 = t;
          if(((v_14 != NULL) && (v_14 != w_14)))
            _fail(w_14);
          else
            v_14 = w_14;
        }
        t = not_null(v_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym__3))
    {
      e_15 = ATgetArgument(d_15, 0);
      f_15 = ATgetArgument(d_15, 1);
      g_15 = ATgetArgument(d_15, 2);
      {
        ATerm x_17;
        x_17 = t;
        {
          ATerm k_15 = NULL;
          ATerm l_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), not_null(f_15));
          {
            ATerm y_17 = t;
            int h_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(h_18);
              }
            else
              {
                t = y_17;
                t = (ATerm) ATempty;
              }
            {
              l_15 = t;
              if(((k_15 != NULL) && (k_15 != l_15)))
                _fail(l_15);
              else
                k_15 = l_15;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_15), not_null(f_15), (ATerm) ATinsert(CheckATermList(not_null(k_15)), not_null(g_15)));
            t = table_put_0(t);
          }
        }
        t = x_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_83 (ATerm))
{
  ATerm p_15 = NULL;
  ATerm q_15 = NULL;
  t = term_m_15;
  {
    t = t_83(t);
    {
      q_15 = t;
      if(((p_15 != NULL) && (p_15 != q_15)))
        _fail(q_15);
      else
        p_15 = q_15;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_17, term_p_17, not_null(p_15));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_string(w_15, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(w_15) == AT_LIST) && !(ATisEmpty(w_15))))
        {
          x_15 = ATgetFirst((ATermList) w_15);
          y_15 = (ATerm) ATgetNext((ATermList) w_15);
          {
            ATerm b_16 = NULL;
            ATerm i_18;
            i_18 = t;
            {
              t = not_null(x_15);
              t = a_0(t);
            }
            t = i_18;
            {
              ATerm c_16 = NULL;
              t = term_m_15;
              {
                t = b_0(t);
                {
                  c_16 = t;
                  if(((b_16 != NULL) && (b_16 != c_16)))
                    _fail(c_16);
                  else
                    b_16 = c_16;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_15)), not_null(b_16));
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
  ATerm r_4 (ATerm t)
  {
    ATerm h_16 = NULL;
    h_16 = t;
    g_16 :
    if(!(match_string(h_16, "--help")))
      {
        if(!(match_string(h_16, "-h")))
          {
            if(!(match_string(h_16, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_m_18;
    {
      t = set_config_0(t);
      t = term_n_18;
    }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_s_18;
    return(t);
  }
  t = Option_3(t, r_4, s_4, t_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  j_16 :
  if(((ATgetType(k_16) == AT_LIST) && !(ATisEmpty(k_16))))
    {
      l_16 = ATgetFirst((ATermList) k_16);
      m_16 = (ATerm) ATgetNext((ATermList) k_16);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_16)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_16)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym__2))
    {
      t_16 = ATgetArgument(s_16, 0);
      u_16 = ATgetArgument(s_16, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_13, not_null(t_16), not_null(u_16));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_83 (ATerm))
{
  ATerm t_18;
  t_18 = t;
  {
    ATerm u_4 (ATerm t)
    {
      t = term_u_18;
      t = r_83(t);
      return(t);
    }
    t = try_1(t, u_4);
  }
  t = t_18;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm c_17 = NULL;
      ATerm v_18;
      v_18 = t;
      {
        ATerm a_17 = NULL;
        ATerm b_17 = NULL;
        b_17 = t;
        if(((a_17 != NULL) && (a_17 != b_17)))
          _fail(b_17);
        else
          a_17 = b_17;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_17, not_null(a_17));
          t = set_config_0(t);
        }
      }
      t = v_18;
      {
        ATerm d_17 = NULL;
        d_17 = t;
        if(((c_17 != NULL) && (c_17 != d_17)))
          _fail(d_17);
        else
          c_17 = d_17;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_17));
      }
      return(t);
    }
    ATerm y_4 (ATerm t)
    {
      ATerm w_18 = t;
      int b_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_19 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(d_19);
            }
          else
            {
              t = c_19;
              {
                t = r_83(t);
                t = Cons_2(t, _id, y_4);
              }
            }
          ;
          LocalPopChoice(b_19);
        }
      else
        {
          t = w_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_4, y_4);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_83 (ATerm))
{
  ATerm i_17 = NULL;
  ATerm f_19;
  f_19 = t;
  {
    t = term_g_19;
    t = table_put_0(t);
  }
  t = f_19;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm h_19 = t;
      int i_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_83(t);
          ;
          LocalPopChoice(i_19);
        }
      else
        {
          t = h_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_4);
    {
      ATerm e_5 (ATerm t)
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_19;
            m_19 = t;
            {
              ATerm o_19 = t;
              int r_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_l_18;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(r_19);
                }
              else
                {
                  t = o_19;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = m_19;
            {
              t = system_usage_0(t);
              {
                t = term_s_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm f_5 (ATerm t)
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm j_17 = NULL;
                  j_17 = t;
                  if(((i_17 != NULL) && (i_17 != j_17)))
                    _fail(j_17);
                  else
                    i_17 = j_17;
                  return(t);
                }
                t = Undefined_1(t, g_5);
                return(t);
              }
              t = option_defined_1(t, f_5);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_17)), term_u_19));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_i_12;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_5);
      {
        ATerm x_19;
        x_19 = t;
        {
          t = term_o_17;
          t = table_destroy_0(t);
        }
        t = x_19;
      }
    }
  }
  return(t);
}
ATerm xtc_main_0 (ATerm t)
{
  ATerm y_19 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_options_1(t, xtc_options_0);
      {
        t = xtc_location_0(t);
        {
          ATerm h_5 (ATerm t)
          {
            ATerm j_5 (ATerm t)
            {
              t = term_c_20;
              return(t);
            }
            t = debug_1(t, j_5);
            return(t);
          }
          t = if_verbose2_1(t, h_5);
          {
            t = xtc_read_0(t);
            {
              ATerm d_20 = t;
              int h_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_20 = t;
                  int q_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_13;
                      {
                        t = get_config_0(t);
                        t = xtc_register_0(t);
                      }
                      ;
                      LocalPopChoice(q_20);
                    }
                  else
                    {
                      t = p_20;
                      {
                        t = term_q_11;
                        {
                          t = get_config_0(t);
                          t = register_import_0(t);
                        }
                      }
                    }
                  t = xtc_store_0(t);
                  ;
                  LocalPopChoice(h_20);
                }
              else
                {
                  t = d_20;
                  {
                    t = term_a_15;
                    {
                      t = get_config_0(t);
                      t = xtc_query_0(t);
                    }
                  }
                }
              {
                t = term_s_19;
                t = exit_0(t);
              }
            }
          }
        }
      }
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = y_19;
      {
        ATerm l_5 (ATerm t)
        {
          t = term_r_20;
          return(t);
        }
        t = debug_1(t, l_5);
      }
    }
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_17 = NULL;
  m_17 = t;
  t = SSL_exit(not_null(m_17));
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym__2))
    {
      s_17 = ATgetArgument(r_17, 0);
      t_17 = ATgetArgument(r_17, 1);
      {
        ATerm s_20;
        s_20 = t;
        t = SSL_print(not_null(s_17), not_null(t_17));
        t = s_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_xtc_get_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  c_18 = t;
  z_17 :
  if(((ATgetType(c_18) == AT_LIST) && !(ATisEmpty(c_18))))
    {
      d_18 = ATgetFirst((ATermList) c_18);
      e_18 = (ATerm) ATgetNext((ATermList) c_18);
      a_18 :
      if(((ATgetType(e_18) == AT_LIST) && !(ATisEmpty(e_18))))
        {
          f_18 = ATgetFirst((ATermList) e_18);
          g_18 = (ATerm) ATgetNext((ATermList) e_18);
          b_18 :
          if(match_string(f_18, "get"))
            {
              ATerm j_18 = NULL;
              ATerm k_18 = NULL;
              t = not_null(g_18);
              {
                t = map_1(t, xtc_find_0);
                {
                  k_18 = t;
                  if(((j_18 != NULL) && (j_18 != k_18)))
                    _fail(k_18);
                  else
                    j_18 = k_18;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(j_18));
                {
                  t = print_0(t);
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATempty, term_f_9));
                    {
                      t = print_0(t);
                      {
                        t = term_s_19;
                        t = exit_0(t);
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
ATerm execvp_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  o_18 :
  if(match_cons(p_18, sym__2))
    {
      q_18 = ATgetArgument(p_18, 0);
      r_18 = ATgetArgument(p_18, 1);
      t = SSL_execvp(not_null(q_18), not_null(r_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm t_20;
  t_20 = t;
  {
    ATerm x_18 = NULL,z_18 = NULL;
    ATerm u_20;
    u_20 = t;
    {
      ATerm y_18 = NULL;
      t = a_79(t);
      {
        y_18 = t;
        if(((x_18 != NULL) && (x_18 != y_18)))
          _fail(y_18);
        else
          x_18 = y_18;
      }
    }
    t = u_20;
    {
      ATerm a_19 = NULL;
      a_19 = t;
      if(((z_18 != NULL) && (z_18 != a_19)))
        _fail(a_19);
      else
        z_18 = a_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_18)), not_null(x_18)));
        t = printnl_0(t);
      }
    }
  }
  t = t_20;
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm e_19 = NULL;
  e_19 = t;
  t = SSL_table_keys(not_null(e_19));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm l_19 = NULL;
  l_19 = t;
  {
    t = table_keys_0(t);
    {
      ATerm m_5 (ATerm t)
      {
        ATerm n_19 = NULL;
        ATerm p_19 = NULL;
        n_19 = t;
        {
          ATerm q_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_19), not_null(n_19));
          {
            t = table_get_0(t);
            {
              q_19 = t;
              if(((p_19 != NULL) && (p_19 != q_19)))
                _fail(q_19);
              else
                p_19 = q_19;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), not_null(p_19));
        }
        return(t);
      }
      t = map_1(t, m_5);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm i_88 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm v_20;
    v_20 = t;
    {
      ATerm v_19 = NULL;
      ATerm w_19 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          w_19 = t;
          if(((v_19 != NULL) && (v_19 != w_19)))
            _fail(w_19);
          else
            v_19 = w_19;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), term_w_20);
        t = geq_0(t);
      }
    }
    t = v_20;
    t = i_88(t);
    return(t);
  }
  t = try_1(t, n_5);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm x_20;
  x_20 = t;
  {
    ATerm z_19 = NULL;
    ATerm a_20 = NULL;
    a_20 = t;
    if(((z_19 != NULL) && (z_19 != a_20)))
      _fail(a_20);
    else
      z_19 = a_20;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_19, not_null(z_19));
      t = printnl_0(t);
    }
  }
  t = x_20;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm g_20 = NULL;
  ATerm i_20 = NULL,j_20 = NULL;
  g_20 = t;
  {
    ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_20)));
    {
      t = table_get_0(t);
      {
        k_20 = t;
        e_20 :
        if(((ATgetType(k_20) == AT_LIST) && !(ATisEmpty(k_20))))
          {
            l_20 = ATgetFirst((ATermList) k_20);
            o_20 = (ATerm) ATgetNext((ATermList) k_20);
            f_20 :
            if(match_cons(l_20, sym__2))
              {
                m_20 = ATgetArgument(l_20, 0);
                n_20 = ATgetArgument(l_20, 1);
                {
                  if(((i_20 != NULL) && (i_20 != m_20)))
                    _fail(m_20);
                  else
                    i_20 = m_20;
                  if(((j_20 != NULL) && (j_20 != n_20)))
                    _fail(n_20);
                  else
                    j_20 = n_20;
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
    t = not_null(j_20);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym__2))
    {
      b_21 = ATgetArgument(a_21, 0);
      c_21 = ATgetArgument(a_21, 1);
      {
        ATerm f_21 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(b_21)));
        {
          t = table_get_0(t);
          {
            ATerm o_5 (ATerm t)
            {
              ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
              g_21 = t;
              y_20 :
              if(match_cons(g_21, sym__2))
                {
                  h_21 = ATgetArgument(g_21, 0);
                  i_21 = ATgetArgument(g_21, 1);
                  {
                    if(((c_21 != NULL) && (c_21 != h_21)))
                      _fail(h_21);
                    else
                      c_21 = h_21;
                    if(((f_21 != NULL) && (f_21 != i_21)))
                      _fail(i_21);
                    else
                      f_21 = i_21;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, o_5);
          }
        }
        t = not_null(f_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_5 (ATerm t)
            {
              t = filter_1(t, e_75);
              return(t);
            }
            t = Cons_2(t, e_75, p_5);
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            {
              ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
              q_21 = t;
              p_21 :
              if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
                {
                  r_21 = ATgetFirst((ATermList) q_21);
                  s_21 = (ATerm) ATgetNext((ATermList) q_21);
                  {
                    t = not_null(s_21);
                    t = filter_1(t, e_75);
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
ATerm repeat_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm v_21 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      t = p_61(t);
      t = v_21(t);
      return(t);
    }
    t = try_1(t, q_5);
    return(t);
  }
  t = v_21(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm l_21;
  l_21 = t;
  {
    ATerm w_5 (ATerm t)
    {
      t = term_m_21;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm n_21 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_21;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, w_5);
  }
  t = l_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  y_21 = t;
  x_21 :
  if(match_cons(y_21, sym__2))
    {
      z_21 = ATgetArgument(y_21, 0);
      a_22 = ATgetArgument(y_21, 1);
      {
        ATerm o_21;
        o_21 = t;
        t = SSL_printnl(not_null(z_21), not_null(a_22));
        t = o_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm t_21;
  t_21 = t;
  {
    ATerm f_22 = NULL;
    ATerm g_22 = NULL;
    g_22 = t;
    if(((f_22 != NULL) && (f_22 != g_22)))
      _fail(g_22);
    else
      f_22 = g_22;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATinsert(ATempty, not_null(f_22)));
      t = printnl_0(t);
    }
  }
  t = t_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm u_21;
  u_21 = t;
  {
    t = e_79(t);
    t = debug_0(t);
  }
  t = u_21;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm h_88 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    ATerm w_21;
    w_21 = t;
    {
      ATerm j_22 = NULL;
      ATerm k_22 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          k_22 = t;
          if(((j_22 != NULL) && (j_22 != k_22)))
            _fail(k_22);
          else
            j_22 = k_22;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_22), term_b_22);
        t = geq_0(t);
      }
    }
    t = w_21;
    t = h_88(t);
    return(t);
  }
  t = try_1(t, x_5);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
  o_22 = t;
  n_22 :
  if(match_cons(o_22, sym__2))
    {
      p_22 = ATgetArgument(o_22, 0);
      q_22 = ATgetArgument(o_22, 1);
      {
        ATerm c_22;
        c_22 = t;
        {
          ATerm d_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_22), not_null(q_22));
              ;
              LocalPopChoice(e_22);
            }
          else
            {
              t = d_22;
              t = SSL_gtr(not_null(p_22), not_null(q_22));
            }
        }
        t = c_22;
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
  ATerm w_22 = NULL;
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
      x_22 = t;
      v_22 :
      if(match_cons(x_22, sym__2))
        {
          y_22 = ATgetArgument(x_22, 0);
          z_22 = ATgetArgument(x_22, 1);
          {
            if(((w_22 != NULL) && (w_22 != y_22)))
              _fail(y_22);
            else
              w_22 = y_22;
            if(((w_22 != NULL) && (w_22 != z_22)))
              _fail(z_22);
            else
              w_22 = z_22;
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
ATerm if_verbose6_1 (ATerm t, ATerm j_88 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm l_22;
    l_22 = t;
    {
      ATerm c_23 = NULL;
      ATerm d_23 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          d_23 = t;
          if(((c_23 != NULL) && (c_23 != d_23)))
            _fail(d_23);
          else
            c_23 = d_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_23), term_m_22);
        t = geq_0(t);
      }
    }
    t = l_22;
    t = j_88(t);
    return(t);
  }
  t = try_1(t, y_5);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  h_23 = t;
  g_23 :
  if(match_cons(h_23, sym__2))
    {
      i_23 = ATgetArgument(h_23, 0);
      j_23 = ATgetArgument(h_23, 1);
      if(((i_23 != NULL) && (i_23 != j_23)))
        _fail(j_23);
      else
        i_23 = j_23;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm n_68 (ATerm))
{
  ATerm m_23 (ATerm t)
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_68, _id);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        t = Cons_2(t, _id, m_23);
      }
    return(t);
  }
  t = m_23(t);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_72 (ATerm), ATerm i_72 (ATerm))
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  q_23 = t;
  p_23 :
  if(((ATgetType(q_23) == AT_LIST) && !(ATisEmpty(q_23))))
    {
      r_23 = ATgetFirst((ATermList) q_23);
      s_23 = (ATerm) ATgetNext((ATermList) q_23);
      {
        t = i_72(t);
        {
          ATerm d_6 (ATerm t)
          {
            ATerm v_23 = NULL;
            v_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), not_null(v_23));
              t = h_72(t);
            }
            return(t);
          }
          t = fetch_1(t, d_6);
        }
        t = not_null(s_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm d_72 (ATerm))
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym__2))
    {
      c_24 = ATgetArgument(b_24, 0);
      d_24 = ATgetArgument(b_24, 1);
      {
        t = not_null(c_24);
        {
          ATerm h_24 (ATerm t)
          {
            ATerm t_22 = t;
            int u_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(d_24);
                ;
                LocalPopChoice(u_22);
              }
            else
              {
                t = t_22;
                {
                  ATerm a_23 = t;
                  int b_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_6 (ATerm t)
                      {
                        t = not_null(d_24);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_72, e_6);
                      t = h_24(t);
                      ;
                      LocalPopChoice(b_23);
                    }
                  else
                    {
                      t = a_23;
                      t = Cons_2(t, _id, h_24);
                    }
                }
              }
            return(t);
          }
          t = h_24(t);
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
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym__3))
    {
      n_24 = ATgetArgument(m_24, 0);
      o_24 = ATgetArgument(m_24, 1);
      p_24 = ATgetArgument(m_24, 2);
      {
        ATerm e_23;
        e_23 = t;
        {
          ATerm t_24 = NULL;
          ATerm u_24 = NULL,w_24 = NULL;
          ATerm v_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), not_null(o_24));
          {
            ATerm f_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(k_23);
              }
            else
              {
                t = f_23;
                t = (ATerm) ATempty;
              }
            {
              v_24 = t;
              if(((u_24 != NULL) && (u_24 != v_24)))
                _fail(v_24);
              else
                u_24 = v_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_24), not_null(p_24));
            {
              t = union_0(t);
              {
                w_24 = t;
                if(((t_24 != NULL) && (t_24 != w_24)))
                  _fail(w_24);
                else
                  t_24 = w_24;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_24), not_null(o_24), not_null(t_24));
            t = set_0(t);
          }
        }
        t = e_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm z_84 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym__2))
    {
      f_25 = ATgetArgument(e_25, 0);
      g_25 = ATgetArgument(e_25, 1);
      {
        t = not_null(g_25);
        {
          ATerm f_6 (ATerm t)
          {
            ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
            j_25 = t;
            c_25 :
            if(match_cons(j_25, sym__2))
              {
                k_25 = ATgetArgument(j_25, 0);
                l_25 = ATgetArgument(j_25, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_25), not_null(k_25), not_null(l_25));
                  t = z_84(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, f_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm r_25 = NULL;
  ATerm s_25 = NULL;
  s_25 = t;
  if(((r_25 != NULL) && (r_25 != s_25)))
    _fail(s_25);
  else
    r_25 = s_25;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_25), (ATerm) ATinsert(ATempty, term_l_23));
    t = access_0(t);
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm x_25 = NULL;
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_26 = NULL;
      b_26 = t;
      {
        if(((x_25 != NULL) && (x_25 != b_26)))
          _fail(b_26);
        else
          x_25 = b_26;
        t = SSL_ReadFromFile(not_null(x_25));
      }
      ;
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
        ATerm g_6 (ATerm t)
        {
          t = term_t_23;
          return(t);
        }
        t = debug_1(t, g_6);
        _fail(t);
      }
    }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym__2))
    {
      g_26 = ATgetArgument(f_26, 0);
      h_26 = ATgetArgument(f_26, 1);
      t = SSL_access(not_null(g_26), not_null(h_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm m_26 = NULL;
  ATerm n_26 = NULL;
  n_26 = t;
  if(((m_26 != NULL) && (m_26 != n_26)))
    _fail(n_26);
  else
    m_26 = n_26;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_26), (ATerm) ATinsert(ATempty, term_u_23));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(x_23);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = w_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_24 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_24;
              }
            {
              ATerm j_6 (ATerm t)
              {
                t = term_f_24;
                return(t);
              }
              t = debug_1(t, j_6);
            }
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            {
              ATerm k_6 (ATerm t)
              {
                t = term_g_24;
                return(t);
              }
              t = debug_1(t, k_6);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm r_26 = NULL;
  ATerm t_26 = NULL;
  r_26 = t;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm m_6 (ATerm t)
      {
        t = term_i_24;
        return(t);
      }
      t = debug_1(t, m_6);
      return(t);
    }
    t = if_verbose5_1(t, l_6);
    {
      ATerm j_24 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(r_26)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_24;
        }
      {
        ATerm k_24;
        k_24 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_8, term_q_24, (ATerm) ATinsert(ATempty, not_null(r_26)));
          t = table_put_0(t);
        }
        t = k_24;
        {
          ATerm n_6 (ATerm t)
          {
            ATerm o_6 (ATerm t)
            {
              t = term_r_24;
              return(t);
            }
            t = debug_1(t, o_6);
            return(t);
          }
          t = if_verbose4_1(t, n_6);
          {
            t = read_repository_file_0(t);
            {
              ATerm p_6 (ATerm t)
              {
                ATerm r_6 (ATerm t)
                {
                  t = term_s_24;
                  return(t);
                }
                t = say_1(t, r_6);
                return(t);
              }
              t = if_verbose6_1(t, p_6);
              {
                ATerm u_26 = NULL;
                u_26 = t;
                if(((t_26 != NULL) && (t_26 != u_26)))
                  _fail(u_26);
                else
                  t_26 = u_26;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_8, not_null(t_26));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm t_6 (ATerm t)
                      {
                        ATerm v_6 (ATerm t)
                        {
                          t = term_x_24;
                          return(t);
                        }
                        t = say_1(t, v_6);
                        return(t);
                      }
                      t = if_verbose6_1(t, t_6);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_w_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(r_26)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm c_7 (ATerm t)
                            {
                              ATerm d_7 (ATerm t)
                              {
                                t = term_s_24;
                                return(t);
                              }
                              t = say_1(t, d_7);
                              return(t);
                            }
                            t = if_verbose4_1(t, c_7);
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
  ATerm y_26 = NULL;
  y_26 = t;
  t = SSL_getenv(not_null(y_26));
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  ATerm y_24;
  y_24 = t;
  {
    ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
    g_27 = t;
    c_27 :
    if(match_cons(g_27, sym__3))
      {
        h_27 = ATgetArgument(g_27, 0);
        i_27 = ATgetArgument(g_27, 1);
        j_27 = ATgetArgument(g_27, 2);
        {
          if(((d_27 != NULL) && (d_27 != h_27)))
            _fail(h_27);
          else
            d_27 = h_27;
          {
            if(((e_27 != NULL) && (e_27 != i_27)))
              _fail(i_27);
            else
              e_27 = i_27;
            {
              if(((f_27 != NULL) && (f_27 != j_27)))
                _fail(j_27);
              else
                f_27 = j_27;
              t = SSL_table_put(not_null(d_27), not_null(e_27), not_null(f_27));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_24;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  t = SSL_implode_string(not_null(m_27));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
        r_27 = t;
        q_27 :
        if(((ATgetType(r_27) == AT_LIST) && !(ATisEmpty(r_27))))
          {
            s_27 = ATgetFirst((ATermList) r_27);
            t_27 = (ATerm) ATgetNext((ATermList) r_27);
            {
              t = not_null(s_27);
              {
                ATerm e_7 (ATerm t)
                {
                  t = not_null(t_27);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_7);
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
  ATerm d_28 = NULL;
  ATerm f_28 = NULL;
  d_28 = t;
  {
    ATerm g_28 = NULL;
    ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
    t = not_null(d_28);
    {
      g_28 = t;
      {
        t = SSL_explode_term(not_null(g_28));
        {
          i_28 = t;
          b_28 :
          if(match_cons(i_28, sym__2))
            {
              j_28 = ATgetArgument(i_28, 0);
              k_28 = ATgetArgument(i_28, 1);
              c_28 :
              if(match_string(j_28, ""))
                {
                  if(((f_28 != NULL) && (f_28 != k_28)))
                    _fail(k_28);
                  else
                    f_28 = k_28;
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
      t = not_null(f_28);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_68 (ATerm))
{
  ATerm o_28 (ATerm t)
  {
    ATerm b_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_28);
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = b_25;
        {
          t = Nil_0(t);
          t = t_68(t);
        }
      }
    return(t);
  }
  t = o_28(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  r_28 = t;
  q_28 :
  if(match_cons(r_28, sym__2))
    {
      s_28 = ATgetArgument(r_28, 0);
      t_28 = ATgetArgument(r_28, 1);
      {
        t = not_null(s_28);
        {
          ATerm f_7 (ATerm t)
          {
            t = not_null(t_28);
            return(t);
          }
          t = at_end_1(t, f_7);
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
  ATerm i_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = i_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  t = SSL_explode_string(not_null(y_28));
  return(t);
}
ATerm _2 (ATerm t, ATerm h_53 (ATerm), ATerm i_53 (ATerm))
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  h_29 = t;
  g_29 :
  if(match_cons(h_29, sym__2))
    {
      i_29 = ATgetArgument(h_29, 0);
      j_29 = ATgetArgument(h_29, 1);
      {
        ATerm n_29 = NULL,p_29 = NULL;
        ATerm o_29 = NULL;
        t = SSLgetAnnotations(not_null(h_29));
        {
          o_29 = t;
          if(((n_29 != NULL) && (n_29 != o_29)))
            _fail(o_29);
          else
            n_29 = o_29;
        }
        {
          t = not_null(i_29);
          {
            ATerm r_29 = NULL;
            t = h_53(t);
            {
              p_29 = t;
              {
                t = not_null(j_29);
                {
                  ATerm t_29 = NULL;
                  t = i_53(t);
                  {
                    r_29 = t;
                    {
                      ATerm u_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_29), not_null(r_29)), not_null(n_29));
                      {
                        u_29 = t;
                        if(((t_29 != NULL) && (t_29 != u_29)))
                          _fail(u_29);
                        else
                          t_29 = u_29;
                      }
                      t = not_null(t_29);
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
ATerm Cons_2 (ATerm t, ATerm q_54 (ATerm), ATerm r_54 (ATerm))
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
  g_30 = t;
  f_30 :
  if(((ATgetType(g_30) == AT_LIST) && !(ATisEmpty(g_30))))
    {
      h_30 = ATgetFirst((ATermList) g_30);
      i_30 = (ATerm) ATgetNext((ATermList) g_30);
      {
        ATerm m_30 = NULL,o_30 = NULL;
        ATerm n_30 = NULL;
        t = SSLgetAnnotations(not_null(g_30));
        {
          n_30 = t;
          if(((m_30 != NULL) && (m_30 != n_30)))
            _fail(n_30);
          else
            m_30 = n_30;
        }
        {
          t = not_null(h_30);
          {
            ATerm q_30 = NULL;
            t = q_54(t);
            {
              o_30 = t;
              {
                t = not_null(i_30);
                {
                  ATerm s_30 = NULL;
                  t = r_54(t);
                  {
                    q_30 = t;
                    {
                      ATerm t_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_30)), not_null(o_30)), not_null(m_30));
                      {
                        t_30 = t;
                        if(((s_30 != NULL) && (s_30 != t_30)))
                          _fail(t_30);
                        else
                          s_30 = t_30;
                      }
                      t = not_null(s_30);
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
  ATerm d_31 = NULL;
  d_31 = t;
  c_31 :
  if(((ATgetType(d_31) == AT_LIST) && ATisEmpty(d_31)))
    {
      {
        ATerm f_31 = NULL,h_31 = NULL;
        ATerm n_25;
        n_25 = t;
        {
          ATerm g_31 = NULL;
          t = SSLgetAnnotations(not_null(d_31));
          {
            g_31 = t;
            if(((f_31 != NULL) && (f_31 != g_31)))
              _fail(g_31);
            else
              f_31 = g_31;
          }
        }
        t = n_25;
        {
          ATerm i_31 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_31));
          {
            i_31 = t;
            if(((h_31 != NULL) && (h_31 != i_31)))
              _fail(i_31);
            else
              h_31 = i_31;
          }
          t = not_null(h_31);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_68 (ATerm))
{
  ATerm m_31 (ATerm t)
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = Cons_2(t, e_68, m_31);
      }
    return(t);
  }
  t = m_31(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  t = SSL_is_string(not_null(o_31));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = q_25;
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, g_7);
            ;
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            {
              ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
              x_31 = t;
              w_31 :
              if(match_cons(x_31, sym_Path_1))
                {
                  y_31 = ATgetArgument(x_31, 0);
                  t = not_null(y_31);
                }
              else
                {
                  if(match_cons(x_31, sym_Var_1))
                    {
                      y_31 = ATgetArgument(x_31, 0);
                      {
                        t = not_null(y_31);
                        {
                          ATerm w_25 = t;
                          int y_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(y_25);
                            }
                          else
                            {
                              t = w_25;
                              {
                                ATerm h_7 (ATerm t)
                                {
                                  t = term_z_25;
                                  return(t);
                                }
                                t = debug_1(t, h_7);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_31, sym_Prefix_2))
                        {
                          y_31 = ATgetArgument(x_31, 0);
                          z_31 = ATgetArgument(x_31, 1);
                          {
                            ATerm e_32 = NULL,g_32 = NULL;
                            ATerm a_26;
                            a_26 = t;
                            {
                              ATerm f_32 = NULL;
                              t = not_null(y_31);
                              {
                                t = eval_config_0(t);
                                {
                                  f_32 = t;
                                  if(((e_32 != NULL) && (e_32 != f_32)))
                                    _fail(f_32);
                                  else
                                    e_32 = f_32;
                                }
                              }
                            }
                            t = a_26;
                            {
                              ATerm h_32 = NULL;
                              t = not_null(z_31);
                              {
                                t = eval_config_0(t);
                                {
                                  h_32 = t;
                                  if(((g_32 != NULL) && (g_32 != h_32)))
                                    _fail(h_32);
                                  else
                                    g_32 = h_32;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_32), not_null(g_32));
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
ATerm try_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_60(t);
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_13, not_null(p_32));
    {
      t = table_get_0(t);
      {
        ATerm i_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_26;
            i_26 = t;
            {
              ATerm r_32 = NULL;
              ATerm s_32 = NULL;
              s_32 = t;
              if(((r_32 != NULL) && (r_32 != s_32)))
                _fail(s_32);
              else
                r_32 = s_32;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_13, not_null(p_32), not_null(r_32));
                t = table_put_0(t);
              }
            }
            t = i_26;
          }
          return(t);
        }
        t = try_1(t, i_7);
      }
    }
  }
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_11;
      t = get_config_0(t);
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm l_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_p_26;
            t = getenv_0(t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = l_26;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  w_32 :
  if(match_cons(x_32, sym__2))
    {
      y_32 = ATgetArgument(x_32, 0);
      z_32 = ATgetArgument(x_32, 1);
      t = SSL_table_get(not_null(y_32), not_null(z_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    ATerm m_7 (ATerm t)
    {
      t = term_q_26;
      return(t);
    }
    t = debug_1(t, m_7);
    return(t);
  }
  t = if_verbose5_1(t, l_7);
  {
    ATerm s_26;
    s_26 = t;
    {
      ATerm v_26 = t;
      int w_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_26;
          t = table_get_0(t);
          ;
          LocalPopChoice(w_26);
        }
      else
        {
          t = v_26;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = s_26;
    {
      ATerm o_7 (ATerm t)
      {
        ATerm p_7 (ATerm t)
        {
          t = term_z_26;
          return(t);
        }
        t = debug_1(t, p_7);
        return(t);
      }
      t = if_verbose5_1(t, o_7);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_7 (ATerm t)
      {
        ATerm r_7 (ATerm t)
        {
          t = term_k_27;
          return(t);
        }
        t = debug_1(t, r_7);
        return(t);
      }
      t = if_verbose5_1(t, q_7);
      {
        t = xtc_load_0(t);
        {
          ATerm l_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(n_27);
            }
          else
            {
              t = l_27;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm s_7 (ATerm t)
            {
              ATerm a_8 (ATerm t)
              {
                t = term_k_27;
                return(t);
              }
              t = debug_1(t, a_8);
              return(t);
            }
            t = if_verbose5_1(t, s_7);
          }
        }
      }
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        ATerm e_33 = NULL;
        ATerm f_33 = NULL;
        f_33 = t;
        if(((e_33 != NULL) && (e_33 != f_33)))
          _fail(f_33);
        else
          e_33 = f_33;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_27), not_null(e_33)), term_o_27);
          {
            t = error_0(t);
            {
              ATerm b_8 (ATerm t)
              {
                t = term_w_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm c_8 (ATerm t)
                    {
                      t = term_u_27;
                      return(t);
                    }
                    t = debug_1(t, c_8);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, b_8);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_xtc_call_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
  q_33 = t;
  j_33 :
  if(((ATgetType(q_33) == AT_LIST) && !(ATisEmpty(q_33))))
    {
      r_33 = ATgetFirst((ATermList) q_33);
      s_33 = (ATerm) ATgetNext((ATermList) q_33);
      n_33 :
      if(((ATgetType(s_33) == AT_LIST) && !(ATisEmpty(s_33))))
        {
          t_33 = ATgetFirst((ATermList) s_33);
          u_33 = (ATerm) ATgetNext((ATermList) s_33);
          o_33 :
          if(match_string(t_33, "call"))
            {
              p_33 :
              if(((ATgetType(u_33) == AT_LIST) && !(ATisEmpty(u_33))))
                {
                  v_33 = ATgetFirst((ATermList) u_33);
                  w_33 = (ATerm) ATgetNext((ATermList) u_33);
                  {
                    ATerm a_34 = NULL;
                    ATerm b_34 = NULL;
                    t = not_null(v_33);
                    {
                      t = xtc_find_0(t);
                      {
                        b_34 = t;
                        if(((a_34 != NULL) && (a_34 != b_34)))
                          _fail(b_34);
                        else
                          a_34 = b_34;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_34), not_null(w_33));
                      t = execvp_0(t);
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
ATerm xtc_0 (ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_xtc_call_0(t);
      ;
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_xtc_get_0(t);
            ;
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            t = xtc_main_0(t);
          }
      }
    }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = xtc_0(t);
  return(t);
}
