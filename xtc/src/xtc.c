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
Symbol sym_Pipe_2;
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
ATerm term_a_23;
ATerm term_t_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_u_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_19;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_a_18;
ATerm term_v_17;
ATerm term_r_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_a_17;
ATerm term_w_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_u_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_q_14;
ATerm term_j_14;
ATerm term_m_13;
ATerm term_c_13;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_x_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_j_9;
ATerm term_c_9;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_b_7;
void init_constant_terms (void)
{
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_i_8, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_a_8, term_q_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_q_16);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_c_19);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_q_16);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__3, term_y_18, term_c_19, (ATerm) ATempty);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm g_77 (ATerm));
ATerm exit_0 (ATerm);
ATerm version_query_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm v_85 (ATerm));
ATerm tool_query_0 (ATerm);
ATerm list_tool_0 (ATerm);
ATerm Tool_1 (ATerm, ATerm a_58 (ATerm));
ATerm all_query_0 (ATerm);
ATerm print_0 (ATerm);
ATerm repository_query_0 (ATerm);
ATerm xtc_query_0 (ATerm);
ATerm _2 (ATerm, ATerm e_51 (ATerm), ATerm f_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm xtc_store_0 (ATerm);
ATerm register_import_0 (ATerm);
ATerm table_union_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_85 (ATerm));
ATerm xtc_register_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm w_85 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm y_85 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm j_72 (ATerm), ATerm k_72 (ATerm));
ATerm union_1 (ATerm, ATerm f_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm o_82 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm x_85 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_85 (ATerm));
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_66 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm xtc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm i_66 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm p_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_77 (ATerm));
ATerm Undefined_1 (ATerm, ATerm q_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_80 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm n_52 (ATerm), ATerm o_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_81 (ATerm));
ATerm xtc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm z_6;
  z_6 = t;
  {
    ATerm i_1 = NULL,u_1 = NULL;
    ATerm a_7;
    a_7 = t;
    {
      ATerm t_1 = NULL;
      t = g_77(t);
      {
        t_1 = t;
        if(((i_1 != NULL) && (i_1 != t_1)))
          _fail(t_1);
        else
          i_1 = t_1;
      }
    }
    t = a_7;
    {
      ATerm v_1 = NULL;
      v_1 = t;
      if(((u_1 != NULL) && (u_1 != v_1)))
        _fail(v_1);
      else
        u_1 = v_1;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_1)), not_null(i_1)));
        t = printnl_0(t);
      }
    }
  }
  t = z_6;
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_2 = NULL;
  c_2 = t;
  t = SSL_exit(not_null(c_2));
  return(t);
}
ATerm version_query_0 (ATerm t)
{
  ATerm k_2 = NULL,m_2 = NULL,n_2 = NULL;
  ATerm c_7;
  c_7 = t;
  {
    ATerm l_2 = NULL;
    t = term_d_7;
    {
      t = get_config_0(t);
      {
        l_2 = t;
        if(((k_2 != NULL) && (k_2 != l_2)))
          _fail(l_2);
        else
          k_2 = l_2;
      }
    }
  }
  t = c_7;
  {
    ATerm b_0 (ATerm t)
    {
      ATerm o_2 = NULL,p_2 = NULL;
      o_2 = t;
      h_2 :
      if(match_cons(o_2, sym_Tool_1))
        {
          p_2 = ATgetArgument(o_2, 0);
          if(((m_2 != NULL) && (m_2 != p_2)))
            _fail(p_2);
          else
            m_2 = p_2;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    ATerm c_0 (ATerm t)
    {
      ATerm e_0 (ATerm t)
      {
        ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
        q_2 = t;
        j_2 :
        if(match_cons(q_2, sym__2))
          {
            r_2 = ATgetArgument(q_2, 0);
            s_2 = ATgetArgument(q_2, 1);
            {
              if(((k_2 != NULL) && (k_2 != r_2)))
                _fail(r_2);
              else
                k_2 = r_2;
              if(((n_2 != NULL) && (n_2 != s_2)))
                _fail(s_2);
              else
                n_2 = s_2;
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = fetch_1(t, e_0);
      return(t);
    }
    t = _2(t, b_0, c_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(m_2)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(k_2), not_null(n_2))));
      t = list_tool_0(t);
    }
  }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm v_85 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm e_7;
    e_7 = t;
    {
      ATerm x_2 = NULL;
      ATerm y_2 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          y_2 = t;
          if(((x_2 != NULL) && (x_2 != y_2)))
            _fail(y_2);
          else
            x_2 = y_2;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_2), term_h_7);
        t = geq_0(t);
      }
    }
    t = e_7;
    t = v_85(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm tool_query_0 (ATerm t)
{
  ATerm c_3 = NULL;
  t = term_k_7;
  {
    t = get_config_0(t);
    {
      ATerm o_0 (ATerm t)
      {
        ATerm d_3 = NULL;
        d_3 = t;
        {
          ATerm l_7 = t;
          int m_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL;
              ATerm p_0 (ATerm t)
              {
                ATerm q_0 (ATerm t)
                {
                  t = term_r_7;
                  return(t);
                }
                t = debug_1(t, q_0);
                return(t);
              }
              t = if_verbose3_1(t, p_0);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(d_3)));
                {
                  t = table_get_0(t);
                  {
                    f_3 = t;
                    {
                      if(((c_3 != NULL) && (c_3 != f_3)))
                        _fail(f_3);
                      else
                        c_3 = f_3;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(d_3)), not_null(c_3));
                        {
                          ATerm t_7 = t;
                          int u_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = version_query_0(t);
                              LocalPopChoice(u_7);
                            }
                          else
                            {
                              t = t_7;
                              t = list_tool_0(t);
                            }
                        }
                      }
                    }
                  }
                }
              }
              LocalPopChoice(m_7);
            }
          else
            {
              t = l_7;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, term_x_7), not_null(d_3)));
                t = print_0(t);
              }
            }
        }
        return(t);
      }
      t = map_1(t, o_0);
    }
  }
  return(t);
}
ATerm list_tool_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  n_3 = t;
  l_3 :
  if(match_cons(n_3, sym__2))
    {
      o_3 = ATgetArgument(n_3, 0);
      q_3 = ATgetArgument(n_3, 1);
      m_3 :
      if(match_cons(o_3, sym_Tool_1))
        {
          p_3 = ATgetArgument(o_3, 0);
          {
            t = not_null(q_3);
            {
              ATerm r_0 (ATerm t)
              {
                ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
                t_3 = t;
                k_3 :
                if(match_cons(t_3, sym__2))
                  {
                    u_3 = ATgetArgument(t_3, 0);
                    v_3 = ATgetArgument(t_3, 1);
                    {
                      ATerm y_7 = t;
                      int z_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_a_8;
                          {
                            t = get_config_0(t);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, term_c_8), not_null(v_3)));
                              t = print_0(t);
                            }
                          }
                          LocalPopChoice(z_7);
                        }
                      else
                        {
                          t = y_7;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_8), not_null(v_3)), term_h_8), not_null(u_3)), term_e_8), not_null(p_3)));
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
ATerm Tool_1 (ATerm t, ATerm a_58 (ATerm))
{
  ATerm f_4 = NULL,g_4 = NULL;
  f_4 = t;
  e_4 :
  if(match_cons(f_4, sym_Tool_1))
    {
      g_4 = ATgetArgument(f_4, 0);
      {
        ATerm j_4 = NULL,l_4 = NULL;
        ATerm k_4 = NULL;
        t = SSLgetAnnotations(not_null(f_4));
        {
          k_4 = t;
          if(((j_4 != NULL) && (j_4 != k_4)))
            _fail(k_4);
          else
            j_4 = k_4;
        }
        {
          t = not_null(g_4);
          {
            ATerm n_4 = NULL;
            t = a_58(t);
            {
              l_4 = t;
              {
                ATerm o_4 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Tool_1, not_null(l_4)), not_null(j_4));
                {
                  o_4 = t;
                  if(((n_4 != NULL) && (n_4 != o_4)))
                    _fail(o_4);
                  else
                    n_4 = o_4;
                }
                t = not_null(n_4);
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
  t = term_i_8;
  {
    t = get_config_0(t);
    {
      t = term_s_7;
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
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  v_4 = t;
  u_4 :
  if(match_cons(v_4, sym__2))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      {
        ATerm j_8;
        j_8 = t;
        t = SSL_print(not_null(w_4), not_null(x_4));
        t = j_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repository_query_0 (ATerm t)
{
  ATerm c_5 = NULL;
  t = term_k_8;
  {
    t = get_config_0(t);
    {
      t = xtc_location_0(t);
      {
        ATerm d_5 = NULL;
        d_5 = t;
        if(((c_5 != NULL) && (c_5 != d_5)))
          _fail(d_5);
        else
          c_5 = d_5;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_5)), term_l_8));
          t = print_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm xtc_query_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = repository_query_0(t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm s_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = all_query_0(t);
            LocalPopChoice(t_8);
          }
        else
          {
            t = s_8;
            t = tool_query_0(t);
          }
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm e_51 (ATerm), ATerm f_51 (ATerm))
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
  l_5 = t;
  k_5 :
  if(match_cons(l_5, sym__2))
    {
      m_5 = ATgetArgument(l_5, 0);
      n_5 = ATgetArgument(l_5, 1);
      {
        ATerm r_5 = NULL,t_5 = NULL;
        ATerm s_5 = NULL;
        t = SSLgetAnnotations(not_null(l_5));
        {
          s_5 = t;
          if(((r_5 != NULL) && (r_5 != s_5)))
            _fail(s_5);
          else
            r_5 = s_5;
        }
        {
          t = not_null(m_5);
          {
            ATerm v_5 = NULL;
            t = e_51(t);
            {
              t_5 = t;
              {
                t = not_null(n_5);
                {
                  ATerm x_5 = NULL;
                  t = f_51(t);
                  {
                    v_5 = t;
                    {
                      ATerm y_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_5), not_null(v_5)), not_null(r_5));
                      {
                        y_5 = t;
                        if(((x_5 != NULL) && (x_5 != y_5)))
                          _fail(y_5);
                        else
                          x_5 = y_5;
                      }
                      t = not_null(x_5);
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
ATerm is_string_0 (ATerm t)
{
  ATerm f_6 = NULL;
  f_6 = t;
  t = SSL_is_string(not_null(f_6));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(x_8);
    }
  else
    {
      t = v_8;
      {
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_0);
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            {
              ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
              o_6 = t;
              n_6 :
              if(match_cons(o_6, sym_Path_1))
                {
                  p_6 = ATgetArgument(o_6, 0);
                  t = not_null(p_6);
                }
              else
                {
                  if(match_cons(o_6, sym_Var_1))
                    {
                      p_6 = ATgetArgument(o_6, 0);
                      {
                        t = not_null(p_6);
                        {
                          ATerm a_9 = t;
                          int b_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(b_9);
                            }
                          else
                            {
                              t = a_9;
                              {
                                ATerm w_0 (ATerm t)
                                {
                                  t = term_c_9;
                                  return(t);
                                }
                                t = debug_1(t, w_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_6, sym_Prefix_2))
                        {
                          p_6 = ATgetArgument(o_6, 0);
                          q_6 = ATgetArgument(o_6, 1);
                          {
                            ATerm v_6 = NULL,x_6 = NULL;
                            ATerm i_9;
                            i_9 = t;
                            {
                              ATerm w_6 = NULL;
                              t = not_null(p_6);
                              {
                                t = eval_config_0(t);
                                {
                                  w_6 = t;
                                  if(((v_6 != NULL) && (v_6 != w_6)))
                                    _fail(w_6);
                                  else
                                    v_6 = w_6;
                                }
                              }
                            }
                            t = i_9;
                            {
                              ATerm y_6 = NULL;
                              t = not_null(q_6);
                              {
                                t = eval_config_0(t);
                                {
                                  y_6 = t;
                                  if(((x_6 != NULL) && (x_6 != y_6)))
                                    _fail(y_6);
                                  else
                                    x_6 = y_6;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_6), not_null(x_6));
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
  ATerm g_7 = NULL;
  g_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_9, not_null(g_7));
    {
      t = table_get_0(t);
      {
        ATerm x_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm k_9;
            k_9 = t;
            {
              ATerm i_7 = NULL;
              ATerm j_7 = NULL;
              j_7 = t;
              if(((i_7 != NULL) && (i_7 != j_7)))
                _fail(j_7);
              else
                i_7 = j_7;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_j_9, not_null(g_7), not_null(i_7));
                t = table_put_0(t);
              }
            }
            t = k_9;
          }
          return(t);
        }
        t = try_1(t, x_0);
      }
    }
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym__2))
    {
      p_7 = ATgetArgument(o_7, 0);
      q_7 = ATgetArgument(o_7, 1);
      t = SSL_WriteToTextFile(not_null(p_7), not_null(q_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm v_7 = NULL;
  v_7 = t;
  t = SSL_table_keys(not_null(v_7));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm b_8 = NULL;
  b_8 = t;
  {
    t = table_keys_0(t);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm d_8 = NULL;
        ATerm f_8 = NULL;
        d_8 = t;
        {
          ATerm g_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_8), not_null(d_8));
          {
            t = table_get_0(t);
            {
              g_8 = t;
              if(((f_8 != NULL) && (f_8 != g_8)))
                _fail(g_8);
              else
                f_8 = g_8;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), not_null(f_8));
        }
        return(t);
      }
      t = map_1(t, y_0);
    }
  }
  return(t);
}
ATerm xtc_store_0 (ATerm t)
{
  ATerm m_8 = NULL,o_8 = NULL;
  ATerm z_0 (ATerm t)
  {
    ATerm a_1 (ATerm t)
    {
      t = term_p_9;
      return(t);
    }
    t = say_1(t, a_1);
    return(t);
  }
  t = if_verbose1_1(t, z_0);
  {
    ATerm q_9;
    q_9 = t;
    {
      ATerm n_8 = NULL;
      t = term_r_9;
      {
        t = get_config_0(t);
        {
          n_8 = t;
          if(((m_8 != NULL) && (m_8 != n_8)))
            _fail(n_8);
          else
            m_8 = n_8;
        }
      }
    }
    t = q_9;
    {
      ATerm p_8 = NULL;
      t = term_s_7;
      {
        t = table_getlist_0(t);
        {
          p_8 = t;
          if(((o_8 != NULL) && (o_8 != p_8)))
            _fail(p_8);
          else
            o_8 = p_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(o_8));
        t = WriteToTextFile_0(t);
      }
    }
  }
  return(t);
}
ATerm register_import_0 (ATerm t)
{
  ATerm u_8 = NULL;
  t = term_s_9;
  {
    ATerm w_8 = NULL;
    t = get_config_0(t);
    {
      u_8 = t;
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            t = term_u_9;
            return(t);
          }
          t = debug_1(t, c_1);
          return(t);
        }
        t = if_verbose2_1(t, b_1);
        {
          t = term_s_9;
          {
            t = get_config_0(t);
            {
              w_8 = t;
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = term_v_9;
                    return(t);
                  }
                  t = debug_1(t, e_1);
                  return(t);
                }
                t = if_verbose5_1(t, d_1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_s_7, term_w_9, not_null(w_8));
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
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym__3))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      h_9 = ATgetArgument(e_9, 2);
      {
        ATerm y_9;
        y_9 = t;
        {
          ATerm l_9 = NULL;
          ATerm m_9 = NULL,o_9 = NULL;
          ATerm n_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_9), not_null(g_9));
          {
            ATerm z_9 = t;
            int a_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(a_10);
              }
            else
              {
                t = z_9;
                t = (ATerm) ATempty;
              }
            {
              n_9 = t;
              if(((m_9 != NULL) && (m_9 != n_9)))
                _fail(n_9);
              else
                m_9 = n_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_9), not_null(m_9));
            {
              t = union_0(t);
              {
                o_9 = t;
                if(((l_9 != NULL) && (l_9 != o_9)))
                  _fail(o_9);
                else
                  l_9 = o_9;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_9), not_null(g_9), not_null(l_9));
            t = set_0(t);
          }
        }
        t = y_9;
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
  ATerm t_9 = NULL;
  t_9 = t;
  t = SSL_implode_string(not_null(t_9));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  t = SSL_explode_string(not_null(x_9));
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
ATerm if_verbose1_1 (ATerm t, ATerm t_85 (ATerm))
{
  ATerm f_1 (ATerm t)
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm b_10 = NULL;
      ATerm c_10 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          c_10 = t;
          if(((b_10 != NULL) && (b_10 != c_10)))
            _fail(c_10);
          else
            b_10 = c_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_10), term_e_10);
        t = geq_0(t);
      }
    }
    t = d_10;
    t = t_85(t);
    return(t);
  }
  t = try_1(t, f_1);
  return(t);
}
ATerm xtc_register_0 (ATerm t)
{
  ATerm k_10 = NULL;
  t = term_k_7;
  {
    ATerm m_10 = NULL;
    t = get_config_0(t);
    {
      k_10 = t;
      {
        ATerm g_1 (ATerm t)
        {
          ATerm h_1 (ATerm t)
          {
            t = term_f_10;
            return(t);
          }
          t = say_1(t, h_1);
          return(t);
        }
        t = if_verbose1_1(t, g_1);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              t = term_g_10;
              return(t);
            }
            t = debug_1(t, k_1);
            return(t);
          }
          t = if_verbose2_1(t, j_1);
          {
            t = term_d_7;
            {
              ATerm o_10 = NULL;
              t = get_config_0(t);
              {
                m_10 = t;
                {
                  ATerm l_1 (ATerm t)
                  {
                    ATerm m_1 (ATerm t)
                    {
                      t = term_h_10;
                      return(t);
                    }
                    t = debug_1(t, m_1);
                    return(t);
                  }
                  t = if_verbose2_1(t, l_1);
                  {
                    t = term_a_8;
                    {
                      t = get_config_0(t);
                      {
                        o_10 = t;
                        {
                          ATerm n_1 (ATerm t)
                          {
                            ATerm o_1 (ATerm t)
                            {
                              t = term_i_10;
                              return(t);
                            }
                            t = debug_1(t, o_1);
                            return(t);
                          }
                          t = if_verbose2_1(t, n_1);
                          {
                            t = not_null(k_10);
                            {
                              ATerm p_1 (ATerm t)
                              {
                                ATerm q_10 = NULL,s_10 = NULL;
                                ATerm j_10;
                                j_10 = t;
                                {
                                  ATerm r_10 = NULL;
                                  r_10 = t;
                                  if(((q_10 != NULL) && (q_10 != r_10)))
                                    _fail(r_10);
                                  else
                                    q_10 = r_10;
                                }
                                t = j_10;
                                {
                                  ATerm t_10 = NULL,v_10 = NULL;
                                  ATerm u_10 = NULL;
                                  u_10 = t;
                                  if(((t_10 != NULL) && (t_10 != u_10)))
                                    _fail(u_10);
                                  else
                                    t_10 = u_10;
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_10)), term_l_10), not_null(o_10));
                                    {
                                      t = concat_strings_0(t);
                                      {
                                        v_10 = t;
                                        if(((s_10 != NULL) && (s_10 != v_10)))
                                          _fail(v_10);
                                        else
                                          s_10 = v_10;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, term_s_7, (ATerm)ATmakeAppl(sym_Tool_1, not_null(q_10)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(m_10), not_null(s_10))));
                                    t = table_union_0(t);
                                  }
                                }
                                return(t);
                              }
                              t = map_1(t, p_1);
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
ATerm if_verbose4_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm n_10;
    n_10 = t;
    {
      ATerm d_11 = NULL;
      ATerm e_11 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          e_11 = t;
          if(((d_11 != NULL) && (d_11 != e_11)))
            _fail(e_11);
          else
            d_11 = e_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), term_p_10);
        t = geq_0(t);
      }
    }
    t = n_10;
    t = w_85(t);
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm y_85 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm w_10;
    w_10 = t;
    {
      ATerm h_11 = NULL;
      ATerm i_11 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          i_11 = t;
          if(((h_11 != NULL) && (h_11 != i_11)))
            _fail(i_11);
          else
            h_11 = i_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_11), term_x_10);
        t = geq_0(t);
      }
    }
    t = w_10;
    t = y_85(t);
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym__2))
    {
      n_11 = ATgetArgument(m_11, 0);
      o_11 = ATgetArgument(m_11, 1);
      if(((n_11 != NULL) && (n_11 != o_11)))
        _fail(o_11);
      else
        n_11 = o_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm j_72 (ATerm), ATerm k_72 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  u_11 = t;
  t_11 :
  if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
    {
      v_11 = ATgetFirst((ATermList) u_11);
      w_11 = (ATerm) ATgetNext((ATermList) u_11);
      {
        t = k_72(t);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm z_11 = NULL;
            z_11 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(z_11));
              t = j_72(t);
            }
            return(t);
          }
          t = fetch_1(t, s_1);
        }
        t = not_null(w_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym__2))
    {
      g_12 = ATgetArgument(f_12, 0);
      h_12 = ATgetArgument(f_12, 1);
      {
        t = not_null(g_12);
        {
          ATerm l_12 (ATerm t)
          {
            ATerm y_10 = t;
            int z_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(h_12);
                LocalPopChoice(z_10);
              }
            else
              {
                t = y_10;
                {
                  ATerm a_11 = t;
                  int b_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_1 (ATerm t)
                      {
                        t = not_null(h_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_72, w_1);
                      t = l_12(t);
                      LocalPopChoice(b_11);
                    }
                  else
                    {
                      t = a_11;
                      t = Cons_2(t, _id, l_12);
                    }
                }
              }
            return(t);
          }
          t = l_12(t);
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
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym__3))
    {
      r_12 = ATgetArgument(q_12, 0);
      s_12 = ATgetArgument(q_12, 1);
      t_12 = ATgetArgument(q_12, 2);
      {
        ATerm c_11;
        c_11 = t;
        {
          ATerm x_12 = NULL;
          ATerm y_12 = NULL,a_13 = NULL;
          ATerm z_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), not_null(s_12));
          {
            ATerm f_11 = t;
            int g_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(g_11);
              }
            else
              {
                t = f_11;
                t = (ATerm) ATempty;
              }
            {
              z_12 = t;
              if(((y_12 != NULL) && (y_12 != z_12)))
                _fail(z_12);
              else
                y_12 = z_12;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), not_null(t_12));
            {
              t = union_0(t);
              {
                a_13 = t;
                if(((x_12 != NULL) && (x_12 != a_13)))
                  _fail(a_13);
                else
                  x_12 = a_13;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_12), not_null(s_12), not_null(x_12));
            t = set_0(t);
          }
        }
        t = c_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm o_82 (ATerm))
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym__2))
    {
      j_13 = ATgetArgument(i_13, 0);
      k_13 = ATgetArgument(i_13, 1);
      {
        t = not_null(k_13);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
            n_13 = t;
            g_13 :
            if(match_cons(n_13, sym__2))
              {
                o_13 = ATgetArgument(n_13, 0);
                p_13 = ATgetArgument(n_13, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(j_13), not_null(o_13), not_null(p_13));
                  t = o_82(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, x_1);
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
  ATerm v_13 = NULL;
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_13 = NULL;
      w_13 = t;
      {
        if(((v_13 != NULL) && (v_13 != w_13)))
          _fail(w_13);
        else
          v_13 = w_13;
        t = SSL_ReadFromFile(not_null(v_13));
      }
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm y_1 (ATerm t)
        {
          t = term_p_11;
          return(t);
        }
        t = debug_1(t, y_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm a_14 = NULL;
  ATerm c_14 = NULL;
  a_14 = t;
  {
    ATerm q_11;
    q_11 = t;
    {
      ATerm d_14 = NULL;
      t = term_r_11;
      {
        d_14 = t;
        if(((c_14 != NULL) && (c_14 != d_14)))
          _fail(d_14);
        else
          c_14 = d_14;
      }
    }
    t = q_11;
    {
      t = SSL_open_file(not_null(a_14), not_null(c_14));
      t = SSL_close_file(not_null(a_14));
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm x_85 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm s_11;
    s_11 = t;
    {
      ATerm h_14 = NULL;
      ATerm i_14 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          i_14 = t;
          if(((h_14 != NULL) && (h_14 != i_14)))
            _fail(i_14);
          else
            h_14 = i_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_14), term_x_11);
        t = geq_0(t);
      }
    }
    t = s_11;
    t = x_85(t);
    return(t);
  }
  t = try_1(t, z_1);
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm m_14 = NULL;
  ATerm o_14 = NULL;
  m_14 = t;
  {
    ATerm a_2 (ATerm t)
    {
      ATerm b_2 (ATerm t)
      {
        t = term_y_11;
        return(t);
      }
      t = debug_1(t, b_2);
      return(t);
    }
    t = if_verbose5_1(t, a_2);
    {
      ATerm a_12 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(m_14)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_12;
        }
      {
        ATerm b_12;
        b_12 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_7, term_c_12, (ATerm) ATinsert(ATempty, not_null(m_14)));
          t = table_put_0(t);
        }
        t = b_12;
        {
          ATerm d_2 (ATerm t)
          {
            ATerm e_2 (ATerm t)
            {
              t = term_d_12;
              return(t);
            }
            t = debug_1(t, e_2);
            return(t);
          }
          t = if_verbose4_1(t, d_2);
          {
            ATerm i_12 = t;
            int j_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(j_12);
              }
            else
              {
                t = i_12;
                t = (ATerm) ATempty;
              }
            {
              ATerm f_2 (ATerm t)
              {
                ATerm g_2 (ATerm t)
                {
                  t = term_k_12;
                  return(t);
                }
                t = say_1(t, g_2);
                return(t);
              }
              t = if_verbose6_1(t, f_2);
              {
                ATerm p_14 = NULL;
                p_14 = t;
                if(((o_14 != NULL) && (o_14 != p_14)))
                  _fail(p_14);
                else
                  o_14 = p_14;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_7, not_null(o_14));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm i_2 (ATerm t)
                      {
                        ATerm t_2 (ATerm t)
                        {
                          t = term_m_12;
                          return(t);
                        }
                        t = say_1(t, t_2);
                        return(t);
                      }
                      t = if_verbose6_1(t, i_2);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_s_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(m_14)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm u_2 (ATerm t)
                            {
                              ATerm v_2 (ATerm t)
                              {
                                t = term_k_12;
                                return(t);
                              }
                              t = say_1(t, v_2);
                              return(t);
                            }
                            t = if_verbose4_1(t, u_2);
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
ATerm gt_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym__2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      {
        ATerm n_12;
        n_12 = t;
        {
          ATerm o_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_14), not_null(w_14));
              LocalPopChoice(u_12);
            }
          else
            {
              t = o_12;
              t = SSL_gtr(not_null(v_14), not_null(w_14));
            }
        }
        t = n_12;
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
  ATerm c_15 = NULL;
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
      d_15 = t;
      b_15 :
      if(match_cons(d_15, sym__2))
        {
          e_15 = ATgetArgument(d_15, 0);
          f_15 = ATgetArgument(d_15, 1);
          {
            if(((c_15 != NULL) && (c_15 != e_15)))
              _fail(e_15);
            else
              c_15 = e_15;
            if(((c_15 != NULL) && (c_15 != f_15)))
              _fail(f_15);
            else
              c_15 = f_15;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    ATerm b_13;
    b_13 = t;
    {
      ATerm i_15 = NULL;
      ATerm j_15 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          j_15 = t;
          if(((i_15 != NULL) && (i_15 != j_15)))
            _fail(j_15);
          else
            i_15 = j_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_15), term_c_13);
        t = geq_0(t);
      }
    }
    t = b_13;
    t = u_85(t);
    return(t);
  }
  t = try_1(t, w_2);
  return(t);
}
ATerm getenv_0 (ATerm t)
{
  ATerm m_15 = NULL;
  m_15 = t;
  t = SSL_getenv(not_null(m_15));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_9;
      t = get_config_0(t);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm f_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_13;
            t = getenv_0(t);
            LocalPopChoice(l_13);
          }
        else
          {
            t = f_13;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_15 = NULL;
  q_15 = t;
  t = SSL_string_to_int(not_null(q_15));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  y_15 = t;
  w_15 :
  if(match_string(y_15, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
        {
          z_15 = ATgetFirst((ATermList) y_15);
          a_16 = (ATerm) ATgetNext((ATermList) y_15);
          x_15 :
          if(((ATgetType(a_16) == AT_LIST) && !(ATisEmpty(a_16))))
            {
              b_16 = ATgetFirst((ATermList) a_16);
              c_16 = (ATerm) ATgetNext((ATermList) a_16);
              {
                ATerm g_16 = NULL;
                ATerm q_13;
                q_13 = t;
                {
                  t = not_null(z_15);
                  t = l_0(t);
                }
                t = q_13;
                {
                  ATerm h_16 = NULL;
                  t = not_null(b_16);
                  {
                    t = m_0(t);
                    {
                      h_16 = t;
                      if(((g_16 != NULL) && (g_16 != h_16)))
                        _fail(h_16);
                      else
                        g_16 = h_16;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_16)), not_null(g_16));
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
ATerm concat_0 (ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
        n_16 = t;
        m_16 :
        if(((ATgetType(n_16) == AT_LIST) && !(ATisEmpty(n_16))))
          {
            o_16 = ATgetFirst((ATermList) n_16);
            p_16 = (ATerm) ATgetNext((ATermList) n_16);
            {
              t = not_null(o_16);
              {
                ATerm z_2 (ATerm t)
                {
                  t = not_null(p_16);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_2);
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
  ATerm z_16 = NULL;
  ATerm b_17 = NULL;
  z_16 = t;
  {
    ATerm c_17 = NULL;
    ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
    t = not_null(z_16);
    {
      c_17 = t;
      {
        t = SSL_explode_term(not_null(c_17));
        {
          e_17 = t;
          x_16 :
          if(match_cons(e_17, sym__2))
            {
              f_17 = ATgetArgument(e_17, 0);
              g_17 = ATgetArgument(e_17, 1);
              y_16 :
              if(match_string(f_17, ""))
                {
                  if(((b_17 != NULL) && (b_17 != g_17)))
                    _fail(g_17);
                  else
                    b_17 = g_17;
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
      t = not_null(b_17);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm k_17 (ATerm t)
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_17);
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        {
          t = Nil_0(t);
          t = x_66(t);
        }
      }
    return(t);
  }
  t = k_17(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym__2))
    {
      o_17 = ATgetArgument(n_17, 0);
      p_17 = ATgetArgument(n_17, 1);
      {
        t = not_null(o_17);
        {
          ATerm a_3 (ATerm t)
          {
            t = not_null(p_17);
            return(t);
          }
          t = at_end_1(t, a_3);
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
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  w_17 :
  if(match_cons(x_17, sym__2))
    {
      y_17 = ATgetArgument(x_17, 0);
      z_17 = ATgetArgument(x_17, 1);
      {
        ATerm c_18 = NULL;
        ATerm d_18 = NULL,f_18 = NULL;
        ATerm e_18 = NULL;
        t = not_null(y_17);
        {
          ATerm z_13 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(b_14);
            }
          else
            {
              t = z_13;
              t = (ATerm) ATempty;
            }
          {
            e_18 = t;
            if(((d_18 != NULL) && (d_18 != e_18)))
              _fail(e_18);
            else
              d_18 = e_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(d_18));
          {
            t = conc_0(t);
            {
              f_18 = t;
              if(((c_18 != NULL) && (c_18 != f_18)))
                _fail(f_18);
              else
                c_18 = f_18;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_9, not_null(y_17), not_null(c_18));
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
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm d_19 = NULL;
        d_19 = t;
        j_18 :
        if(!(match_string(d_19, "-r")))
          {
            if(!(match_string(d_19, "--repository")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        ATerm g_14;
        g_14 = t;
        {
          ATerm e_19 = NULL;
          ATerm f_19 = NULL;
          f_19 = t;
          if(((e_19 != NULL) && (e_19 != f_19)))
            _fail(f_19);
          else
            e_19 = f_19;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_r_9, not_null(e_19));
            t = set_config_0(t);
          }
        }
        t = g_14;
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = ArgOption_3(t, b_3, e_3, g_3);
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              ATerm g_19 = NULL;
              g_19 = t;
              l_18 :
              if(!(match_string(g_19, "i")))
                {
                  if(!(match_string(g_19, "imp")))
                    {
                      if(!(match_string(g_19, "import")))
                        {
                          _fail(t);
                        }
                    }
                }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              ATerm n_14;
              n_14 = t;
              {
                ATerm h_19 = NULL;
                ATerm i_19 = NULL;
                i_19 = t;
                if(((h_19 != NULL) && (h_19 != i_19)))
                  _fail(i_19);
                else
                  h_19 = i_19;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATempty, not_null(h_19)));
                  t = extend_config_0(t);
                }
              }
              t = n_14;
              return(t);
            }
            ATerm j_3 (ATerm t)
            {
              t = term_q_14;
              return(t);
            }
            t = ArgOption_3(t, h_3, i_3, j_3);
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            {
              ATerm r_14 = t;
              int s_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_3 (ATerm t)
                  {
                    ATerm j_19 = NULL;
                    j_19 = t;
                    n_18 :
                    if(!(match_string(j_19, "r")))
                      {
                        if(!(match_string(j_19, "reg")))
                          {
                            if(!(match_string(j_19, "register")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm s_3 (ATerm t)
                  {
                    ATerm x_14;
                    x_14 = t;
                    {
                      ATerm k_19 = NULL;
                      ATerm l_19 = NULL;
                      l_19 = t;
                      if(((k_19 != NULL) && (k_19 != l_19)))
                        _fail(l_19);
                      else
                        k_19 = l_19;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_y_14, not_null(k_19));
                        t = set_config_0(t);
                      }
                    }
                    t = x_14;
                    return(t);
                  }
                  ATerm w_3 (ATerm t)
                  {
                    t = term_z_14;
                    return(t);
                  }
                  t = Option_3(t, r_3, s_3, w_3);
                  LocalPopChoice(s_14);
                }
              else
                {
                  t = r_14;
                  {
                    ATerm a_15 = t;
                    int g_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_3 (ATerm t)
                        {
                          ATerm m_19 = NULL;
                          m_19 = t;
                          p_18 :
                          if(!(match_string(m_19, "-t")))
                            {
                              if(!(match_string(m_19, "--tool")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm y_3 (ATerm t)
                        {
                          ATerm h_15;
                          h_15 = t;
                          {
                            ATerm n_19 = NULL;
                            ATerm o_19 = NULL;
                            o_19 = t;
                            if(((n_19 != NULL) && (n_19 != o_19)))
                              _fail(o_19);
                            else
                              n_19 = o_19;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATempty, not_null(n_19)));
                              t = extend_config_0(t);
                            }
                          }
                          t = h_15;
                          return(t);
                        }
                        ATerm z_3 (ATerm t)
                        {
                          t = term_k_15;
                          return(t);
                        }
                        t = ArgOption_3(t, x_3, y_3, z_3);
                        LocalPopChoice(g_15);
                      }
                    else
                      {
                        t = a_15;
                        {
                          ATerm l_15 = t;
                          int n_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_4 (ATerm t)
                              {
                                ATerm p_19 = NULL;
                                p_19 = t;
                                r_18 :
                                if(!(match_string(p_19, "-l")))
                                  {
                                    if(!(match_string(p_19, "--location")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm b_4 (ATerm t)
                              {
                                ATerm o_15;
                                o_15 = t;
                                {
                                  ATerm q_19 = NULL;
                                  ATerm r_19 = NULL;
                                  r_19 = t;
                                  if(((q_19 != NULL) && (q_19 != r_19)))
                                    _fail(r_19);
                                  else
                                    q_19 = r_19;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_a_8, not_null(q_19));
                                    t = set_config_0(t);
                                  }
                                }
                                t = o_15;
                                return(t);
                              }
                              ATerm c_4 (ATerm t)
                              {
                                t = term_p_15;
                                return(t);
                              }
                              t = ArgOption_3(t, a_4, b_4, c_4);
                              LocalPopChoice(n_15);
                            }
                          else
                            {
                              t = l_15;
                              {
                                ATerm r_15 = t;
                                int s_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm d_4 (ATerm t)
                                    {
                                      ATerm s_19 = NULL;
                                      s_19 = t;
                                      t_18 :
                                      if(!(match_string(s_19, "-V")))
                                        {
                                          if(!(match_string(s_19, "--Version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm h_4 (ATerm t)
                                    {
                                      ATerm t_15;
                                      t_15 = t;
                                      {
                                        ATerm t_19 = NULL;
                                        ATerm u_19 = NULL;
                                        u_19 = t;
                                        if(((t_19 != NULL) && (t_19 != u_19)))
                                          _fail(u_19);
                                        else
                                          t_19 = u_19;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_d_7, not_null(t_19));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = t_15;
                                      return(t);
                                    }
                                    ATerm i_4 (ATerm t)
                                    {
                                      t = term_u_15;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, d_4, h_4, i_4);
                                    LocalPopChoice(s_15);
                                  }
                                else
                                  {
                                    t = r_15;
                                    {
                                      ATerm v_15 = t;
                                      int d_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_4 (ATerm t)
                                          {
                                            ATerm v_19 = NULL;
                                            v_19 = t;
                                            v_18 :
                                            if(!(match_string(v_19, "q")))
                                              {
                                                if(!(match_string(v_19, "query")))
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            return(t);
                                          }
                                          ATerm p_4 (ATerm t)
                                          {
                                            ATerm e_16;
                                            e_16 = t;
                                            {
                                              ATerm w_19 = NULL;
                                              ATerm x_19 = NULL;
                                              x_19 = t;
                                              if(((w_19 != NULL) && (w_19 != x_19)))
                                                _fail(x_19);
                                              else
                                                w_19 = x_19;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, term_f_16, not_null(w_19));
                                                t = set_config_0(t);
                                              }
                                            }
                                            t = e_16;
                                            return(t);
                                          }
                                          ATerm q_4 (ATerm t)
                                          {
                                            t = term_i_16;
                                            return(t);
                                          }
                                          t = Option_3(t, m_4, p_4, q_4);
                                          LocalPopChoice(d_16);
                                        }
                                      else
                                        {
                                          t = v_15;
                                          {
                                            ATerm j_16 = t;
                                            int k_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm r_4 (ATerm t)
                                                {
                                                  ATerm y_19 = NULL;
                                                  y_19 = t;
                                                  x_18 :
                                                  if(!(match_string(y_19, "-a")))
                                                    {
                                                      if(!(match_string(y_19, "--all")))
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  return(t);
                                                }
                                                ATerm s_4 (ATerm t)
                                                {
                                                  ATerm l_16;
                                                  l_16 = t;
                                                  {
                                                    t = term_r_16;
                                                    t = set_config_0(t);
                                                  }
                                                  t = l_16;
                                                  return(t);
                                                }
                                                ATerm t_4 (ATerm t)
                                                {
                                                  t = term_s_16;
                                                  return(t);
                                                }
                                                t = Option_3(t, r_4, s_4, t_4);
                                                LocalPopChoice(k_16);
                                              }
                                            else
                                              {
                                                t = j_16;
                                                {
                                                  ATerm t_16 = t;
                                                  int u_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_4 (ATerm t)
                                                      {
                                                        ATerm z_19 = NULL;
                                                        z_19 = t;
                                                        z_18 :
                                                        if(!(match_string(z_19, "-L")))
                                                          {
                                                            if(!(match_string(z_19, "--Location")))
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm z_4 (ATerm t)
                                                      {
                                                        ATerm v_16;
                                                        v_16 = t;
                                                        {
                                                          t = term_w_16;
                                                          t = set_config_0(t);
                                                        }
                                                        t = v_16;
                                                        return(t);
                                                      }
                                                      ATerm a_5 (ATerm t)
                                                      {
                                                        t = term_a_17;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, y_4, z_4, a_5);
                                                      LocalPopChoice(u_16);
                                                    }
                                                  else
                                                    {
                                                      t = t_16;
                                                      {
                                                        ATerm d_17 = t;
                                                        int h_17 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm b_5 (ATerm t)
                                                            {
                                                              ATerm a_20 = NULL;
                                                              a_20 = t;
                                                              a_19 :
                                                              if(!(match_string(a_20, "-R")))
                                                                {
                                                                  if(!(match_string(a_20, "--Repository")))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm e_5 (ATerm t)
                                                            {
                                                              ATerm i_17;
                                                              i_17 = t;
                                                              {
                                                                t = term_j_17;
                                                                t = set_config_0(t);
                                                              }
                                                              t = i_17;
                                                              return(t);
                                                            }
                                                            ATerm f_5 (ATerm t)
                                                            {
                                                              t = term_l_17;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, b_5, e_5, f_5);
                                                            LocalPopChoice(h_17);
                                                          }
                                                        else
                                                          {
                                                            t = d_17;
                                                            {
                                                              ATerm g_5 (ATerm t)
                                                              {
                                                                ATerm b_20 = NULL;
                                                                b_20 = t;
                                                                b_19 :
                                                                if(!(match_string(b_20, "--verbose")))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                return(t);
                                                              }
                                                              ATerm h_5 (ATerm t)
                                                              {
                                                                ATerm q_17;
                                                                q_17 = t;
                                                                {
                                                                  ATerm c_20 = NULL;
                                                                  ATerm d_20 = NULL;
                                                                  t = string_to_int_0(t);
                                                                  {
                                                                    d_20 = t;
                                                                    if(((c_20 != NULL) && (c_20 != d_20)))
                                                                      _fail(d_20);
                                                                    else
                                                                      c_20 = d_20;
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(c_20));
                                                                    t = set_config_0(t);
                                                                  }
                                                                }
                                                                t = q_17;
                                                                return(t);
                                                              }
                                                              ATerm i_5 (ATerm t)
                                                              {
                                                                t = term_r_17;
                                                                return(t);
                                                              }
                                                              t = ArgOption_3(t, g_5, h_5, i_5);
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
  ATerm s_20 = NULL;
  s_20 = t;
  t = SSL_table_destroy(not_null(s_20));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  v_20 :
  if(((ATgetType(w_20) == AT_LIST) && ATisEmpty(w_20)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_20) == AT_LIST) && !(ATisEmpty(w_20))))
        {
          x_20 = ATgetFirst((ATermList) w_20);
          y_20 = (ATerm) ATgetNext((ATermList) w_20);
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
  ATerm s_17;
  s_17 = t;
  {
    ATerm e_21 = NULL;
    ATerm h_21 = NULL;
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        {
          ATerm f_21 = NULL;
          ATerm g_21 = NULL;
          g_21 = t;
          if(((f_21 != NULL) && (f_21 != g_21)))
            _fail(g_21);
          else
            f_21 = g_21;
          t = (ATerm) ATinsert(ATempty, not_null(f_21));
        }
      }
    {
      h_21 = t;
      if(((e_21 != NULL) && (e_21 != h_21)))
        _fail(h_21);
      else
        e_21 = h_21;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(e_21));
      t = printnl_0(t);
    }
  }
  t = s_17;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_18), term_v_17);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm k_21 (ATerm t)
  {
    ATerm b_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = b_18;
        t = Cons_2(t, i_66, k_21);
      }
    return(t);
  }
  t = k_21(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  t_21 = t;
  q_21 :
  if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
    {
      r_21 = ATgetFirst((ATermList) t_21);
      s_21 = (ATerm) ATgetNext((ATermList) t_21);
      {
        ATerm w_21 = NULL;
        t = not_null(s_21);
        {
          ATerm h_18;
          h_18 = t;
          {
            ATerm x_21 = NULL,z_21 = NULL,b_22 = NULL;
            ATerm i_18;
            i_18 = t;
            {
              ATerm y_21 = NULL;
              t = j_0(t);
              {
                y_21 = t;
                if(((x_21 != NULL) && (x_21 != y_21)))
                  _fail(y_21);
                else
                  x_21 = y_21;
              }
            }
            t = i_18;
            {
              ATerm a_22 = NULL;
              t = not_null(r_21);
              {
                t = i_0(t);
                {
                  a_22 = t;
                  if(((z_21 != NULL) && (z_21 != a_22)))
                    _fail(a_22);
                  else
                    z_21 = a_22;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_21)), not_null(z_21));
                {
                  b_22 = t;
                  if(((w_21 != NULL) && (w_21 != b_22)))
                    _fail(b_22);
                  else
                    w_21 = b_22;
                }
              }
            }
          }
          t = h_18;
          {
            ATerm j_5 (ATerm t)
            {
              t = not_null(w_21);
              return(t);
            }
            t = reverse_acc_2(t, i_0, j_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(t_21) == AT_LIST) && ATisEmpty(t_21)))
        {
          {
            t = term_q_16;
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
  ATerm o_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_m_18), term_k_18);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm m_22 = NULL,n_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym_Program_1))
    {
      n_22 = ATgetArgument(m_22, 0);
      {
        ATerm q_22 = NULL,s_22 = NULL;
        ATerm r_22 = NULL;
        t = SSLgetAnnotations(not_null(m_22));
        {
          r_22 = t;
          if(((q_22 != NULL) && (q_22 != r_22)))
            _fail(r_22);
          else
            q_22 = r_22;
        }
        {
          t = not_null(n_22);
          {
            ATerm u_22 = NULL;
            t = p_57(t);
            {
              s_22 = t;
              {
                ATerm v_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_22)), not_null(q_22));
                {
                  v_22 = t;
                  if(((u_22 != NULL) && (u_22 != v_22)))
                    _fail(v_22);
                  else
                    u_22 = v_22;
                }
                t = not_null(u_22);
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
  ATerm e_23 = NULL;
  ATerm q_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_23 = NULL;
      t = term_u_18;
      {
        t = get_config_0(t);
        {
          f_23 = t;
          if(((e_23 != NULL) && (e_23 != f_23)))
            _fail(f_23);
          else
            e_23 = f_23;
        }
      }
      LocalPopChoice(s_18);
    }
  else
    {
      t = q_18;
      {
        ATerm p_5 (ATerm t)
        {
          ATerm q_5 (ATerm t)
          {
            ATerm g_23 = NULL;
            g_23 = t;
            if(((e_23 != NULL) && (e_23 != g_23)))
              _fail(g_23);
            else
              e_23 = g_23;
            return(t);
          }
          t = Program_1(t, q_5);
          return(t);
        }
        t = option_defined_1(t, p_5);
      }
    }
  {
    ATerm u_5 (ATerm t)
    {
      ATerm w_5 (ATerm t)
      {
        t = not_null(e_23);
        return(t);
      }
      t = short_description_1(t, w_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, u_5);
    {
      t = term_w_18;
      {
        t = echo_0(t);
        {
          t = term_e_20;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_5 (ATerm t)
                {
                  ATerm h_23 = NULL;
                  ATerm i_23 = NULL;
                  i_23 = t;
                  if(((h_23 != NULL) && (h_23 != i_23)))
                    _fail(i_23);
                  else
                    h_23 = i_23;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_23)), term_f_20);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_5);
                {
                  ATerm a_6 (ATerm t)
                  {
                    ATerm j_23 = NULL;
                    ATerm k_23 = NULL;
                    ATerm b_6 (ATerm t)
                    {
                      t = not_null(e_23);
                      return(t);
                    }
                    t = long_description_1(t, b_6);
                    {
                      k_23 = t;
                      if(((j_23 != NULL) && (j_23 != k_23)))
                        _fail(k_23);
                      else
                        j_23 = k_23;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_23)), term_c_8);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_6);
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
ATerm printnl_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_cons(r_23, sym__2))
    {
      s_23 = ATgetArgument(r_23, 0);
      t_23 = ATgetArgument(r_23, 1);
      {
        ATerm g_20;
        g_20 = t;
        t = SSL_printnl(not_null(s_23), not_null(t_23));
        t = g_20;
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
  ATerm h_20;
  h_20 = t;
  {
    ATerm y_23 = NULL;
    ATerm z_23 = NULL;
    z_23 = t;
    if(((y_23 != NULL) && (y_23 != z_23)))
      _fail(z_23);
    else
      y_23 = z_23;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATinsert(ATempty, not_null(y_23)));
      t = printnl_0(t);
    }
  }
  t = h_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm i_20;
  i_20 = t;
  {
    t = h_77(t);
    t = debug_0(t);
  }
  t = i_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm q_57 (ATerm))
{
  ATerm g_24 = NULL,h_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym_Undefined_1))
    {
      h_24 = ATgetArgument(g_24, 0);
      {
        ATerm k_24 = NULL,m_24 = NULL;
        ATerm l_24 = NULL;
        t = SSLgetAnnotations(not_null(g_24));
        {
          l_24 = t;
          if(((k_24 != NULL) && (k_24 != l_24)))
            _fail(l_24);
          else
            k_24 = l_24;
        }
        {
          t = not_null(h_24);
          {
            ATerm o_24 = NULL;
            t = q_57(t);
            {
              m_24 = t;
              {
                ATerm p_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_24)), not_null(k_24));
                {
                  p_24 = t;
                  if(((o_24 != NULL) && (o_24 != p_24)))
                    _fail(p_24);
                  else
                    o_24 = p_24;
                }
                t = not_null(o_24);
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
ATerm fetch_1 (ATerm t, ATerm r_66 (ATerm))
{
  ATerm u_24 (ATerm t)
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_66, _id);
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = Cons_2(t, _id, u_24);
      }
    return(t);
  }
  t = u_24(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_80 (ATerm))
{
  t = fetch_1(t, d_80);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  y_24 :
  if(match_cons(z_24, sym_Help_0))
    {
      ATerm b_25 = NULL,d_25 = NULL;
      ATerm l_20;
      l_20 = t;
      {
        ATerm c_25 = NULL;
        t = SSLgetAnnotations(not_null(z_24));
        {
          c_25 = t;
          if(((b_25 != NULL) && (b_25 != c_25)))
            _fail(c_25);
          else
            b_25 = c_25;
        }
      }
      t = l_20;
      {
        ATerm e_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_25));
        {
          e_25 = t;
          if(((d_25 != NULL) && (d_25 != e_25)))
            _fail(e_25);
          else
            d_25 = e_25;
        }
        t = not_null(d_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_58 (ATerm))
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_58(t);
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym__2))
    {
      l_25 = ATgetArgument(k_25, 0);
      m_25 = ATgetArgument(k_25, 1);
      t = SSL_table_get(not_null(l_25), not_null(m_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  t_25 = t;
  s_25 :
  if(match_cons(t_25, sym__3))
    {
      u_25 = ATgetArgument(t_25, 0);
      v_25 = ATgetArgument(t_25, 1);
      w_25 = ATgetArgument(t_25, 2);
      {
        ATerm o_20;
        o_20 = t;
        {
          ATerm f_26 = NULL;
          ATerm g_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_25), not_null(v_25));
          {
            ATerm p_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_20);
              }
            else
              {
                t = p_20;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_25), not_null(v_25), (ATerm) ATinsert(CheckATermList(not_null(f_26)), not_null(w_25)));
            t = table_put_0(t);
          }
        }
        t = o_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm k_26 = NULL;
  ATerm l_26 = NULL;
  t = term_q_16;
  {
    t = i_81(t);
    {
      l_26 = t;
      if(((k_26 != NULL) && (k_26 != l_26)))
        _fail(l_26);
      else
        k_26 = l_26;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_18, term_c_19, not_null(k_26));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_string(r_26, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
        {
          s_26 = ATgetFirst((ATermList) r_26);
          t_26 = (ATerm) ATgetNext((ATermList) r_26);
          {
            ATerm w_26 = NULL;
            ATerm r_20;
            r_20 = t;
            {
              t = not_null(s_26);
              t = a_0(t);
            }
            t = r_20;
            {
              ATerm x_26 = NULL;
              t = term_q_16;
              {
                t = d_0(t);
                {
                  x_26 = t;
                  if(((w_26 != NULL) && (w_26 != x_26)))
                    _fail(x_26);
                  else
                    w_26 = x_26;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_26)), not_null(w_26));
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
  ATerm c_6 (ATerm t)
  {
    ATerm c_27 = NULL;
    c_27 = t;
    b_27 :
    if(!(match_string(c_27, "--help")))
      {
        if(!(match_string(c_27, "-h")))
          {
            if(!(match_string(c_27, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_u_20;
    {
      t = set_config_0(t);
      t = term_z_20;
    }
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = term_a_21;
    return(t);
  }
  t = Option_3(t, c_6, d_6, e_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  f_27 = t;
  e_27 :
  if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
    {
      g_27 = ATgetFirst((ATermList) f_27);
      h_27 = (ATerm) ATgetNext((ATermList) f_27);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_27)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_27)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_52 (ATerm), ATerm o_52 (ATerm))
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  q_27 :
  if(((ATgetType(r_27) == AT_LIST) && !(ATisEmpty(r_27))))
    {
      s_27 = ATgetFirst((ATermList) r_27);
      t_27 = (ATerm) ATgetNext((ATermList) r_27);
      {
        ATerm x_27 = NULL,z_27 = NULL;
        ATerm y_27 = NULL;
        t = SSLgetAnnotations(not_null(r_27));
        {
          y_27 = t;
          if(((x_27 != NULL) && (x_27 != y_27)))
            _fail(y_27);
          else
            x_27 = y_27;
        }
        {
          t = not_null(s_27);
          {
            ATerm b_28 = NULL;
            t = n_52(t);
            {
              z_27 = t;
              {
                t = not_null(t_27);
                {
                  ATerm d_28 = NULL;
                  t = o_52(t);
                  {
                    b_28 = t;
                    {
                      ATerm e_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_28)), not_null(z_27)), not_null(x_27));
                      {
                        e_28 = t;
                        if(((d_28 != NULL) && (d_28 != e_28)))
                          _fail(e_28);
                        else
                          d_28 = e_28;
                      }
                      t = not_null(d_28);
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
  ATerm o_28 = NULL;
  o_28 = t;
  n_28 :
  if(((ATgetType(o_28) == AT_LIST) && ATisEmpty(o_28)))
    {
      {
        ATerm q_28 = NULL,s_28 = NULL;
        ATerm b_21;
        b_21 = t;
        {
          ATerm r_28 = NULL;
          t = SSLgetAnnotations(not_null(o_28));
          {
            r_28 = t;
            if(((q_28 != NULL) && (q_28 != r_28)))
              _fail(r_28);
            else
              q_28 = r_28;
          }
        }
        t = b_21;
        {
          ATerm t_28 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_28));
          {
            t_28 = t;
            if(((s_28 != NULL) && (s_28 != t_28)))
              _fail(t_28);
            else
              s_28 = t_28;
          }
          t = not_null(s_28);
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
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
  z_28 = t;
  y_28 :
  if(match_cons(z_28, sym__2))
    {
      a_29 = ATgetArgument(z_28, 0);
      b_29 = ATgetArgument(z_28, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_9, not_null(a_29), not_null(b_29));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_81 (ATerm))
{
  ATerm c_21;
  c_21 = t;
  {
    ATerm g_6 (ATerm t)
    {
      t = term_d_21;
      t = g_81(t);
      return(t);
    }
    t = try_1(t, g_6);
  }
  t = c_21;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm j_29 = NULL;
      ATerm i_21;
      i_21 = t;
      {
        ATerm h_29 = NULL;
        ATerm i_29 = NULL;
        i_29 = t;
        if(((h_29 != NULL) && (h_29 != i_29)))
          _fail(i_29);
        else
          h_29 = i_29;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_18, not_null(h_29));
          t = set_config_0(t);
        }
      }
      t = i_21;
      {
        ATerm k_29 = NULL;
        k_29 = t;
        if(((j_29 != NULL) && (j_29 != k_29)))
          _fail(k_29);
        else
          j_29 = k_29;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_29));
      }
      return(t);
    }
    ATerm i_6 (ATerm t)
    {
      ATerm j_21 = t;
      int l_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_21);
            }
          else
            {
              t = m_21;
              {
                t = g_81(t);
                t = Cons_2(t, _id, i_6);
              }
            }
          LocalPopChoice(l_21);
        }
      else
        {
          t = j_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_6, i_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  ATerm o_21;
  o_21 = t;
  {
    ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
    t_29 = t;
    p_29 :
    if(match_cons(t_29, sym__3))
      {
        u_29 = ATgetArgument(t_29, 0);
        v_29 = ATgetArgument(t_29, 1);
        w_29 = ATgetArgument(t_29, 2);
        {
          if(((q_29 != NULL) && (q_29 != u_29)))
            _fail(u_29);
          else
            q_29 = u_29;
          {
            if(((r_29 != NULL) && (r_29 != v_29)))
              _fail(v_29);
            else
              r_29 = v_29;
            {
              if(((s_29 != NULL) && (s_29 != w_29)))
                _fail(w_29);
              else
                s_29 = w_29;
              t = SSL_table_put(not_null(q_29), not_null(r_29), not_null(s_29));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_81 (ATerm))
{
  ATerm z_29 = NULL;
  ATerm p_21;
  p_21 = t;
  {
    t = term_u_21;
    t = table_put_0(t);
  }
  t = p_21;
  {
    ATerm j_6 (ATerm t)
    {
      ATerm v_21 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_81(t);
          LocalPopChoice(c_22);
        }
      else
        {
          t = v_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_6);
    {
      ATerm k_6 (ATerm t)
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_22;
            f_22 = t;
            {
              ATerm g_22 = t;
              int h_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_t_20;
                  t = get_config_0(t);
                  LocalPopChoice(h_22);
                }
              else
                {
                  t = g_22;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = f_22;
            {
              t = system_usage_0(t);
              {
                t = term_i_22;
                t = exit_0(t);
              }
            }
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
            {
              ATerm l_6 (ATerm t)
              {
                ATerm m_6 (ATerm t)
                {
                  ATerm a_30 = NULL;
                  a_30 = t;
                  if(((z_29 != NULL) && (z_29 != a_30)))
                    _fail(a_30);
                  else
                    z_29 = a_30;
                  return(t);
                }
                t = Undefined_1(t, m_6);
                return(t);
              }
              t = option_defined_1(t, l_6);
              {
                ATerm r_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_29)), term_j_22);
                  return(t);
                }
                t = say_1(t, r_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_e_10;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_6);
      {
        ATerm k_22;
        k_22 = t;
        {
          t = term_y_18;
          t = table_destroy_0(t);
        }
        t = k_22;
      }
    }
  }
  return(t);
}
ATerm xtc_0 (ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_options_1(t, xtc_options_0);
      {
        t = xtc_location_0(t);
        {
          ATerm s_6 (ATerm t)
          {
            ATerm t_6 (ATerm t)
            {
              t = term_t_22;
              return(t);
            }
            t = debug_1(t, t_6);
            return(t);
          }
          t = if_verbose2_1(t, s_6);
          {
            t = xtc_read_0(t);
            {
              ATerm w_22 = t;
              int x_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_22 = t;
                  int z_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_14;
                      {
                        t = get_config_0(t);
                        t = xtc_register_0(t);
                      }
                      LocalPopChoice(z_22);
                    }
                  else
                    {
                      t = y_22;
                      {
                        t = term_s_9;
                        {
                          t = get_config_0(t);
                          t = register_import_0(t);
                        }
                      }
                    }
                  t = xtc_store_0(t);
                  LocalPopChoice(x_22);
                }
              else
                {
                  t = w_22;
                  {
                    t = term_f_16;
                    {
                      t = get_config_0(t);
                      t = xtc_query_0(t);
                    }
                  }
                }
              {
                t = term_i_22;
                t = exit_0(t);
              }
            }
          }
        }
      }
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      {
        ATerm u_6 (ATerm t)
        {
          t = term_a_23;
          return(t);
        }
        t = debug_1(t, u_6);
      }
    }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = xtc_0(t);
  return(t);
}
