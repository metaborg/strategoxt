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
ATerm term_c_22;
ATerm term_x_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_y_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_d_17;
ATerm term_z_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_d_15;
ATerm term_u_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_v_13;
ATerm term_y_12;
ATerm term_k_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_s_7;
ATerm term_q_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_y_6;
ATerm term_w_6;
void init_constant_terms (void)
{
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_b_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools\n", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_b_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_d_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_b_16);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__3, term_c_18, term_d_18, (ATerm) ATempty);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm y_76 (ATerm));
ATerm exit_0 (ATerm);
ATerm version_query_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm n_85 (ATerm));
ATerm tool_query_0 (ATerm);
ATerm print_0 (ATerm);
ATerm list_tool_0 (ATerm);
ATerm Tool_1 (ATerm, ATerm x_57 (ATerm));
ATerm all_query_0 (ATerm);
ATerm xtc_query_0 (ATerm);
ATerm _2 (ATerm, ATerm b_51 (ATerm), ATerm c_51 (ATerm));
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
ATerm if_verbose1_1 (ATerm, ATerm l_85 (ATerm));
ATerm xtc_register_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm o_85 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm q_85 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm b_72 (ATerm), ATerm c_72 (ATerm));
ATerm union_1 (ATerm, ATerm x_71 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm g_82 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm p_85 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_85 (ATerm));
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_66 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm xtc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm a_66 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm m_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm z_76 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_52 (ATerm), ATerm l_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_80 (ATerm));
ATerm xtc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm y_76 (ATerm))
{
  ATerm q_6;
  q_6 = t;
  {
    ATerm i_1 = NULL,u_1 = NULL;
    ATerm v_6;
    v_6 = t;
    {
      ATerm t_1 = NULL;
      t = y_76(t);
      {
        t_1 = t;
        if(((i_1 != NULL) && (i_1 != t_1)))
          _fail(t_1);
        else
          i_1 = t_1;
      }
    }
    t = v_6;
    {
      ATerm v_1 = NULL;
      v_1 = t;
      if(((u_1 != NULL) && (u_1 != v_1)))
        _fail(v_1);
      else
        u_1 = v_1;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_1)), not_null(i_1)));
        t = printnl_0(t);
      }
    }
  }
  t = q_6;
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
  ATerm x_6;
  x_6 = t;
  {
    ATerm l_2 = NULL;
    t = term_y_6;
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
  t = x_6;
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
ATerm if_verbose3_1 (ATerm t, ATerm n_85 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm z_6;
    z_6 = t;
    {
      ATerm x_2 = NULL;
      ATerm y_2 = NULL;
      t = term_a_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_2), term_b_7);
        t = geq_0(t);
      }
    }
    t = z_6;
    t = n_85(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm tool_query_0 (ATerm t)
{
  ATerm c_3 = NULL;
  t = term_d_7;
  {
    t = get_config_0(t);
    {
      ATerm o_0 (ATerm t)
      {
        ATerm d_3 = NULL;
        d_3 = t;
        {
          ATerm g_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL;
              ATerm p_0 (ATerm t)
              {
                ATerm q_0 (ATerm t)
                {
                  t = term_i_7;
                  return(t);
                }
                t = debug_1(t, q_0);
                return(t);
              }
              t = if_verbose3_1(t, p_0);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(d_3)));
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
                          ATerm o_7 = t;
                          int p_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = version_query_0(t);
                              LocalPopChoice(p_7);
                            }
                          else
                            {
                              t = o_7;
                              t = list_tool_0(t);
                            }
                        }
                      }
                    }
                  }
                }
              }
              LocalPopChoice(h_7);
            }
          else
            {
              t = g_7;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, term_s_7), not_null(d_3)));
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
ATerm print_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  k_3 = t;
  j_3 :
  if(match_cons(k_3, sym__2))
    {
      l_3 = ATgetArgument(k_3, 0);
      m_3 = ATgetArgument(k_3, 1);
      {
        ATerm t_7;
        t_7 = t;
        t = SSL_print(not_null(l_3), not_null(m_3));
        t = t_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_tool_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  v_3 = t;
  t_3 :
  if(match_cons(v_3, sym__2))
    {
      w_3 = ATgetArgument(v_3, 0);
      y_3 = ATgetArgument(v_3, 1);
      u_3 :
      if(match_cons(w_3, sym_Tool_1))
        {
          x_3 = ATgetArgument(w_3, 0);
          {
            t = not_null(y_3);
            {
              ATerm r_0 (ATerm t)
              {
                ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
                b_4 = t;
                s_3 :
                if(match_cons(b_4, sym__2))
                  {
                    c_4 = ATgetArgument(b_4, 0);
                    d_4 = ATgetArgument(b_4, 1);
                    {
                      ATerm u_7 = t;
                      int v_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_w_7;
                          {
                            t = get_config_0(t);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, term_y_7), not_null(d_4)));
                              t = print_0(t);
                            }
                          }
                          LocalPopChoice(v_7);
                        }
                      else
                        {
                          t = u_7;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(d_4)), term_d_8), not_null(c_4)), term_a_8), not_null(x_3)));
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
ATerm Tool_1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm n_4 = NULL,o_4 = NULL;
  n_4 = t;
  m_4 :
  if(match_cons(n_4, sym_Tool_1))
    {
      o_4 = ATgetArgument(n_4, 0);
      {
        ATerm r_4 = NULL,t_4 = NULL;
        ATerm s_4 = NULL;
        t = SSLgetAnnotations(not_null(n_4));
        {
          s_4 = t;
          if(((r_4 != NULL) && (r_4 != s_4)))
            _fail(s_4);
          else
            r_4 = s_4;
        }
        {
          t = not_null(o_4);
          {
            ATerm v_4 = NULL;
            t = x_57(t);
            {
              t_4 = t;
              {
                ATerm w_4 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Tool_1, not_null(t_4)), not_null(r_4));
                {
                  w_4 = t;
                  if(((v_4 != NULL) && (v_4 != w_4)))
                    _fail(w_4);
                  else
                    v_4 = w_4;
                }
                t = not_null(v_4);
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
  t = term_e_8;
  {
    t = get_config_0(t);
    {
      t = term_n_7;
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
ATerm xtc_query_0 (ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = all_query_0(t);
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      t = tool_query_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm b_51 (ATerm), ATerm c_51 (ATerm))
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
  h_5 = t;
  g_5 :
  if(match_cons(h_5, sym__2))
    {
      i_5 = ATgetArgument(h_5, 0);
      j_5 = ATgetArgument(h_5, 1);
      {
        ATerm n_5 = NULL,p_5 = NULL;
        ATerm o_5 = NULL;
        t = SSLgetAnnotations(not_null(h_5));
        {
          o_5 = t;
          if(((n_5 != NULL) && (n_5 != o_5)))
            _fail(o_5);
          else
            n_5 = o_5;
        }
        {
          t = not_null(i_5);
          {
            ATerm r_5 = NULL;
            t = b_51(t);
            {
              p_5 = t;
              {
                t = not_null(j_5);
                {
                  ATerm t_5 = NULL;
                  t = c_51(t);
                  {
                    r_5 = t;
                    {
                      ATerm u_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_5), not_null(r_5)), not_null(n_5));
                      {
                        u_5 = t;
                        if(((t_5 != NULL) && (t_5 != u_5)))
                          _fail(u_5);
                        else
                          t_5 = u_5;
                      }
                      t = not_null(t_5);
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
  ATerm b_6 = NULL;
  b_6 = t;
  t = SSL_is_string(not_null(b_6));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = h_8;
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_0);
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            {
              ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
              k_6 = t;
              j_6 :
              if(match_cons(k_6, sym_Path_1))
                {
                  l_6 = ATgetArgument(k_6, 0);
                  t = not_null(l_6);
                }
              else
                {
                  if(match_cons(k_6, sym_Var_1))
                    {
                      l_6 = ATgetArgument(k_6, 0);
                      {
                        t = not_null(l_6);
                        {
                          ATerm p_8 = t;
                          int r_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(r_8);
                            }
                          else
                            {
                              t = p_8;
                              {
                                ATerm w_0 (ATerm t)
                                {
                                  t = term_t_8;
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
                      if(match_cons(k_6, sym_Prefix_2))
                        {
                          l_6 = ATgetArgument(k_6, 0);
                          m_6 = ATgetArgument(k_6, 1);
                          {
                            ATerm r_6 = NULL,t_6 = NULL;
                            ATerm u_8;
                            u_8 = t;
                            {
                              ATerm s_6 = NULL;
                              t = not_null(l_6);
                              {
                                t = eval_config_0(t);
                                {
                                  s_6 = t;
                                  if(((r_6 != NULL) && (r_6 != s_6)))
                                    _fail(s_6);
                                  else
                                    r_6 = s_6;
                                }
                              }
                            }
                            t = u_8;
                            {
                              ATerm u_6 = NULL;
                              t = not_null(m_6);
                              {
                                t = eval_config_0(t);
                                {
                                  u_6 = t;
                                  if(((t_6 != NULL) && (t_6 != u_6)))
                                    _fail(u_6);
                                  else
                                    t_6 = u_6;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_6), not_null(t_6));
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
  ATerm c_7 = NULL;
  c_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_8, not_null(c_7));
    {
      t = table_get_0(t);
      {
        ATerm x_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_8;
            w_8 = t;
            {
              ATerm e_7 = NULL;
              ATerm f_7 = NULL;
              f_7 = t;
              if(((e_7 != NULL) && (e_7 != f_7)))
                _fail(f_7);
              else
                e_7 = f_7;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_8, not_null(c_7), not_null(e_7));
                t = table_put_0(t);
              }
            }
            t = w_8;
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
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym__2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      t = SSL_WriteToTextFile(not_null(l_7), not_null(m_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm r_7 = NULL;
  r_7 = t;
  t = SSL_table_keys(not_null(r_7));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm x_7 = NULL;
  x_7 = t;
  {
    t = table_keys_0(t);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_7 = NULL;
        ATerm b_8 = NULL;
        z_7 = t;
        {
          ATerm c_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_7), not_null(z_7));
          {
            t = table_get_0(t);
            {
              c_8 = t;
              if(((b_8 != NULL) && (b_8 != c_8)))
                _fail(c_8);
              else
                b_8 = c_8;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), not_null(b_8));
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
  ATerm i_8 = NULL,k_8 = NULL;
  ATerm z_0 (ATerm t)
  {
    ATerm a_1 (ATerm t)
    {
      t = term_x_8;
      return(t);
    }
    t = say_1(t, a_1);
    return(t);
  }
  t = if_verbose1_1(t, z_0);
  {
    ATerm y_8;
    y_8 = t;
    {
      ATerm j_8 = NULL;
      t = term_e_9;
      {
        t = get_config_0(t);
        {
          j_8 = t;
          if(((i_8 != NULL) && (i_8 != j_8)))
            _fail(j_8);
          else
            i_8 = j_8;
        }
      }
    }
    t = y_8;
    {
      ATerm l_8 = NULL;
      t = term_n_7;
      {
        t = table_getlist_0(t);
        {
          l_8 = t;
          if(((k_8 != NULL) && (k_8 != l_8)))
            _fail(l_8);
          else
            k_8 = l_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_8), not_null(k_8));
        t = WriteToTextFile_0(t);
      }
    }
  }
  return(t);
}
ATerm register_import_0 (ATerm t)
{
  ATerm q_8 = NULL;
  t = term_f_9;
  {
    ATerm s_8 = NULL;
    t = get_config_0(t);
    {
      q_8 = t;
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            t = term_g_9;
            return(t);
          }
          t = debug_1(t, c_1);
          return(t);
        }
        t = if_verbose2_1(t, b_1);
        {
          t = term_f_9;
          {
            t = get_config_0(t);
            {
              s_8 = t;
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = term_l_9;
                    return(t);
                  }
                  t = debug_1(t, e_1);
                  return(t);
                }
                t = if_verbose5_1(t, d_1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_n_7, term_m_9, not_null(s_8));
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
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym__3))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      d_9 = ATgetArgument(a_9, 2);
      {
        ATerm n_9;
        n_9 = t;
        {
          ATerm h_9 = NULL;
          ATerm i_9 = NULL,k_9 = NULL;
          ATerm j_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_9), not_null(c_9));
          {
            ATerm o_9 = t;
            int q_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(q_9);
              }
            else
              {
                t = o_9;
                t = (ATerm) ATempty;
              }
            {
              j_9 = t;
              if(((i_9 != NULL) && (i_9 != j_9)))
                _fail(j_9);
              else
                i_9 = j_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(i_9));
            {
              t = union_0(t);
              {
                k_9 = t;
                if(((h_9 != NULL) && (h_9 != k_9)))
                  _fail(k_9);
                else
                  h_9 = k_9;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_9), not_null(c_9), not_null(h_9));
            t = set_0(t);
          }
        }
        t = n_9;
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
  ATerm p_9 = NULL;
  p_9 = t;
  t = SSL_implode_string(not_null(p_9));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_9 = NULL;
  t_9 = t;
  t = SSL_explode_string(not_null(t_9));
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
ATerm if_verbose1_1 (ATerm t, ATerm l_85 (ATerm))
{
  ATerm f_1 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm x_9 = NULL;
      ATerm y_9 = NULL;
      t = term_a_7;
      {
        t = get_config_0(t);
        {
          y_9 = t;
          if(((x_9 != NULL) && (x_9 != y_9)))
            _fail(y_9);
          else
            x_9 = y_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), term_s_9);
        t = geq_0(t);
      }
    }
    t = r_9;
    t = l_85(t);
    return(t);
  }
  t = try_1(t, f_1);
  return(t);
}
ATerm xtc_register_0 (ATerm t)
{
  ATerm g_10 = NULL;
  t = term_d_7;
  {
    ATerm i_10 = NULL;
    t = get_config_0(t);
    {
      g_10 = t;
      {
        ATerm g_1 (ATerm t)
        {
          ATerm h_1 (ATerm t)
          {
            t = term_u_9;
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
              t = term_v_9;
              return(t);
            }
            t = debug_1(t, k_1);
            return(t);
          }
          t = if_verbose2_1(t, j_1);
          {
            t = term_y_6;
            {
              ATerm k_10 = NULL;
              t = get_config_0(t);
              {
                i_10 = t;
                {
                  ATerm l_1 (ATerm t)
                  {
                    ATerm m_1 (ATerm t)
                    {
                      t = term_w_9;
                      return(t);
                    }
                    t = debug_1(t, m_1);
                    return(t);
                  }
                  t = if_verbose2_1(t, l_1);
                  {
                    t = term_w_7;
                    {
                      t = get_config_0(t);
                      {
                        k_10 = t;
                        {
                          ATerm n_1 (ATerm t)
                          {
                            ATerm o_1 (ATerm t)
                            {
                              t = term_z_9;
                              return(t);
                            }
                            t = debug_1(t, o_1);
                            return(t);
                          }
                          t = if_verbose2_1(t, n_1);
                          {
                            t = not_null(g_10);
                            {
                              ATerm p_1 (ATerm t)
                              {
                                ATerm m_10 = NULL,o_10 = NULL;
                                ATerm a_10;
                                a_10 = t;
                                {
                                  ATerm n_10 = NULL;
                                  n_10 = t;
                                  if(((m_10 != NULL) && (m_10 != n_10)))
                                    _fail(n_10);
                                  else
                                    m_10 = n_10;
                                }
                                t = a_10;
                                {
                                  ATerm p_10 = NULL,r_10 = NULL;
                                  ATerm q_10 = NULL;
                                  q_10 = t;
                                  if(((p_10 != NULL) && (p_10 != q_10)))
                                    _fail(q_10);
                                  else
                                    p_10 = q_10;
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_10)), term_b_10), not_null(k_10));
                                    {
                                      t = concat_strings_0(t);
                                      {
                                        r_10 = t;
                                        if(((o_10 != NULL) && (o_10 != r_10)))
                                          _fail(r_10);
                                        else
                                          o_10 = r_10;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, term_n_7, (ATerm)ATmakeAppl(sym_Tool_1, not_null(m_10)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(i_10), not_null(o_10))));
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
ATerm if_verbose4_1 (ATerm t, ATerm o_85 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm c_10;
    c_10 = t;
    {
      ATerm z_10 = NULL;
      ATerm a_11 = NULL;
      t = term_a_7;
      {
        t = get_config_0(t);
        {
          a_11 = t;
          if(((z_10 != NULL) && (z_10 != a_11)))
            _fail(a_11);
          else
            z_10 = a_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_10), term_d_10);
        t = geq_0(t);
      }
    }
    t = c_10;
    t = o_85(t);
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm e_10;
    e_10 = t;
    {
      ATerm d_11 = NULL;
      ATerm e_11 = NULL;
      t = term_a_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), term_f_10);
        t = geq_0(t);
      }
    }
    t = e_10;
    t = q_85(t);
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
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym__2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      if(((j_11 != NULL) && (j_11 != k_11)))
        _fail(k_11);
      else
        j_11 = k_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm b_72 (ATerm), ATerm c_72 (ATerm))
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
  q_11 = t;
  p_11 :
  if(((ATgetType(q_11) == AT_LIST) && !(ATisEmpty(q_11))))
    {
      r_11 = ATgetFirst((ATermList) q_11);
      s_11 = (ATerm) ATgetNext((ATermList) q_11);
      {
        t = c_72(t);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm v_11 = NULL;
            v_11 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), not_null(v_11));
              t = b_72(t);
            }
            return(t);
          }
          t = fetch_1(t, s_1);
        }
        t = not_null(s_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm x_71 (ATerm))
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  a_12 :
  if(match_cons(b_12, sym__2))
    {
      c_12 = ATgetArgument(b_12, 0);
      d_12 = ATgetArgument(b_12, 1);
      {
        t = not_null(c_12);
        {
          ATerm h_12 (ATerm t)
          {
            ATerm h_10 = t;
            int j_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(d_12);
                LocalPopChoice(j_10);
              }
            else
              {
                t = h_10;
                {
                  ATerm l_10 = t;
                  int s_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_1 (ATerm t)
                      {
                        t = not_null(d_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, x_71, w_1);
                      t = h_12(t);
                      LocalPopChoice(s_10);
                    }
                  else
                    {
                      t = l_10;
                      t = Cons_2(t, _id, h_12);
                    }
                }
              }
            return(t);
          }
          t = h_12(t);
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
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  m_12 = t;
  l_12 :
  if(match_cons(m_12, sym__3))
    {
      n_12 = ATgetArgument(m_12, 0);
      o_12 = ATgetArgument(m_12, 1);
      p_12 = ATgetArgument(m_12, 2);
      {
        ATerm t_10;
        t_10 = t;
        {
          ATerm t_12 = NULL;
          ATerm u_12 = NULL,w_12 = NULL;
          ATerm v_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_12), not_null(o_12));
          {
            ATerm u_10 = t;
            int v_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(v_10);
              }
            else
              {
                t = u_10;
                t = (ATerm) ATempty;
              }
            {
              v_12 = t;
              if(((u_12 != NULL) && (u_12 != v_12)))
                _fail(v_12);
              else
                u_12 = v_12;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), not_null(p_12));
            {
              t = union_0(t);
              {
                w_12 = t;
                if(((t_12 != NULL) && (t_12 != w_12)))
                  _fail(w_12);
                else
                  t_12 = w_12;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_12), not_null(o_12), not_null(t_12));
            t = set_0(t);
          }
        }
        t = t_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm g_82 (ATerm))
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym__2))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      {
        t = not_null(g_13);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
            j_13 = t;
            c_13 :
            if(match_cons(j_13, sym__2))
              {
                k_13 = ATgetArgument(j_13, 0);
                l_13 = ATgetArgument(j_13, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_13), not_null(k_13), not_null(l_13));
                  t = g_82(t);
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
  ATerm r_13 = NULL;
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_13 = NULL;
      s_13 = t;
      {
        if(((r_13 != NULL) && (r_13 != s_13)))
          _fail(s_13);
        else
          r_13 = s_13;
        t = SSL_ReadFromFile(not_null(r_13));
      }
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm y_1 (ATerm t)
        {
          t = term_y_10;
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
  ATerm w_13 = NULL;
  ATerm y_13 = NULL;
  w_13 = t;
  {
    ATerm b_11;
    b_11 = t;
    {
      ATerm z_13 = NULL;
      t = term_c_11;
      {
        z_13 = t;
        if(((y_13 != NULL) && (y_13 != z_13)))
          _fail(z_13);
        else
          y_13 = z_13;
      }
    }
    t = b_11;
    {
      t = SSL_open_file(not_null(w_13), not_null(y_13));
      t = SSL_close_file(not_null(w_13));
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm p_85 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm f_11;
    f_11 = t;
    {
      ATerm d_14 = NULL;
      ATerm e_14 = NULL;
      t = term_a_7;
      {
        t = get_config_0(t);
        {
          e_14 = t;
          if(((d_14 != NULL) && (d_14 != e_14)))
            _fail(e_14);
          else
            d_14 = e_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), term_g_11);
        t = geq_0(t);
      }
    }
    t = f_11;
    t = p_85(t);
    return(t);
  }
  t = try_1(t, z_1);
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm i_14 = NULL;
  ATerm k_14 = NULL;
  i_14 = t;
  {
    ATerm a_2 (ATerm t)
    {
      ATerm b_2 (ATerm t)
      {
        t = term_l_11;
        return(t);
      }
      t = debug_1(t, b_2);
      return(t);
    }
    t = if_verbose5_1(t, a_2);
    {
      ATerm m_11 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_14)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_11;
        }
      {
        ATerm n_11;
        n_11 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_7, term_o_11, (ATerm) ATinsert(ATempty, not_null(i_14)));
          t = table_put_0(t);
        }
        t = n_11;
        {
          ATerm d_2 (ATerm t)
          {
            ATerm e_2 (ATerm t)
            {
              t = term_t_11;
              return(t);
            }
            t = debug_1(t, e_2);
            return(t);
          }
          t = if_verbose4_1(t, d_2);
          {
            ATerm u_11 = t;
            int w_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(w_11);
              }
            else
              {
                t = u_11;
                t = (ATerm) ATempty;
              }
            {
              ATerm f_2 (ATerm t)
              {
                ATerm g_2 (ATerm t)
                {
                  t = term_x_11;
                  return(t);
                }
                t = say_1(t, g_2);
                return(t);
              }
              t = if_verbose6_1(t, f_2);
              {
                ATerm l_14 = NULL;
                l_14 = t;
                if(((k_14 != NULL) && (k_14 != l_14)))
                  _fail(l_14);
                else
                  k_14 = l_14;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_7, not_null(k_14));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm i_2 (ATerm t)
                      {
                        ATerm t_2 (ATerm t)
                        {
                          t = term_y_11;
                          return(t);
                        }
                        t = say_1(t, t_2);
                        return(t);
                      }
                      t = if_verbose6_1(t, i_2);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_n_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_14)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm u_2 (ATerm t)
                            {
                              ATerm v_2 (ATerm t)
                              {
                                t = term_x_11;
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
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym__2))
    {
      r_14 = ATgetArgument(q_14, 0);
      s_14 = ATgetArgument(q_14, 1);
      {
        ATerm z_11;
        z_11 = t;
        {
          ATerm e_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_14), not_null(s_14));
              LocalPopChoice(f_12);
            }
          else
            {
              t = e_12;
              t = SSL_gtr(not_null(r_14), not_null(s_14));
            }
        }
        t = z_11;
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
  ATerm y_14 = NULL;
  ATerm g_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
      z_14 = t;
      x_14 :
      if(match_cons(z_14, sym__2))
        {
          a_15 = ATgetArgument(z_14, 0);
          b_15 = ATgetArgument(z_14, 1);
          {
            if(((y_14 != NULL) && (y_14 != a_15)))
              _fail(a_15);
            else
              y_14 = a_15;
            if(((y_14 != NULL) && (y_14 != b_15)))
              _fail(b_15);
            else
              y_14 = b_15;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_12);
    }
  else
    {
      t = g_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    ATerm j_12;
    j_12 = t;
    {
      ATerm e_15 = NULL;
      ATerm f_15 = NULL;
      t = term_a_7;
      {
        t = get_config_0(t);
        {
          f_15 = t;
          if(((e_15 != NULL) && (e_15 != f_15)))
            _fail(f_15);
          else
            e_15 = f_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), term_k_12);
        t = geq_0(t);
      }
    }
    t = j_12;
    t = m_85(t);
    return(t);
  }
  t = try_1(t, w_2);
  return(t);
}
ATerm getenv_0 (ATerm t)
{
  ATerm i_15 = NULL;
  i_15 = t;
  t = SSL_getenv(not_null(i_15));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_9;
      t = get_config_0(t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm s_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_12;
            t = getenv_0(t);
            LocalPopChoice(x_12);
          }
        else
          {
            t = s_12;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_15 = NULL;
  m_15 = t;
  t = SSL_string_to_int(not_null(m_15));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
  u_15 = t;
  s_15 :
  if(match_string(u_15, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(u_15) == AT_LIST) && !(ATisEmpty(u_15))))
        {
          v_15 = ATgetFirst((ATermList) u_15);
          w_15 = (ATerm) ATgetNext((ATermList) u_15);
          t_15 :
          if(((ATgetType(w_15) == AT_LIST) && !(ATisEmpty(w_15))))
            {
              x_15 = ATgetFirst((ATermList) w_15);
              y_15 = (ATerm) ATgetNext((ATermList) w_15);
              {
                ATerm c_16 = NULL;
                ATerm z_12;
                z_12 = t;
                {
                  t = not_null(v_15);
                  t = l_0(t);
                }
                t = z_12;
                {
                  ATerm d_16 = NULL;
                  t = not_null(x_15);
                  {
                    t = m_0(t);
                    {
                      d_16 = t;
                      if(((c_16 != NULL) && (c_16 != d_16)))
                        _fail(d_16);
                      else
                        c_16 = d_16;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_15)), not_null(c_16));
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
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
        ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
        j_16 = t;
        i_16 :
        if(((ATgetType(j_16) == AT_LIST) && !(ATisEmpty(j_16))))
          {
            k_16 = ATgetFirst((ATermList) j_16);
            l_16 = (ATerm) ATgetNext((ATermList) j_16);
            {
              t = not_null(k_16);
              {
                ATerm z_2 (ATerm t)
                {
                  t = not_null(l_16);
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
  ATerm v_16 = NULL;
  ATerm x_16 = NULL;
  v_16 = t;
  {
    ATerm y_16 = NULL;
    ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
    t = not_null(v_16);
    {
      y_16 = t;
      {
        t = SSL_explode_term(not_null(y_16));
        {
          a_17 = t;
          t_16 :
          if(match_cons(a_17, sym__2))
            {
              b_17 = ATgetArgument(a_17, 0);
              c_17 = ATgetArgument(a_17, 1);
              u_16 :
              if(match_string(b_17, ""))
                {
                  if(((x_16 != NULL) && (x_16 != c_17)))
                    _fail(c_17);
                  else
                    x_16 = c_17;
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
      t = not_null(x_16);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_66 (ATerm))
{
  ATerm g_17 (ATerm t)
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_17);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        {
          t = Nil_0(t);
          t = p_66(t);
        }
      }
    return(t);
  }
  t = g_17(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  i_17 :
  if(match_cons(j_17, sym__2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      {
        t = not_null(k_17);
        {
          ATerm a_3 (ATerm t)
          {
            t = not_null(l_17);
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
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym__2))
    {
      u_17 = ATgetArgument(t_17, 0);
      v_17 = ATgetArgument(t_17, 1);
      {
        ATerm y_17 = NULL;
        ATerm z_17 = NULL,b_18 = NULL;
        ATerm a_18 = NULL;
        t = not_null(u_17);
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              t = (ATerm) ATempty;
            }
          {
            a_18 = t;
            if(((z_17 != NULL) && (z_17 != a_18)))
              _fail(a_18);
            else
              z_17 = a_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_17), not_null(z_17));
          {
            t = conc_0(t);
            {
              b_18 = t;
              if(((y_17 != NULL) && (y_17 != b_18)))
                _fail(b_18);
              else
                y_17 = b_18;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_8, not_null(u_17), not_null(y_17));
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
  ATerm q_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm y_18 = NULL;
        y_18 = t;
        f_18 :
        if(!(match_string(y_18, "-r")))
          {
            if(!(match_string(y_18, "--repository")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        ATerm u_13;
        u_13 = t;
        {
          ATerm z_18 = NULL;
          ATerm a_19 = NULL;
          a_19 = t;
          if(((z_18 != NULL) && (z_18 != a_19)))
            _fail(a_19);
          else
            z_18 = a_19;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_e_9, not_null(z_18));
            t = set_config_0(t);
          }
        }
        t = u_13;
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = term_v_13;
        return(t);
      }
      t = ArgOption_3(t, b_3, e_3, g_3);
      LocalPopChoice(t_13);
    }
  else
    {
      t = q_13;
      {
        ATerm x_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              ATerm b_19 = NULL;
              b_19 = t;
              h_18 :
              if(!(match_string(b_19, "i")))
                {
                  if(!(match_string(b_19, "imp")))
                    {
                      if(!(match_string(b_19, "import")))
                        {
                          _fail(t);
                        }
                    }
                }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              ATerm b_14;
              b_14 = t;
              {
                ATerm c_19 = NULL;
                ATerm d_19 = NULL;
                d_19 = t;
                if(((c_19 != NULL) && (c_19 != d_19)))
                  _fail(d_19);
                else
                  c_19 = d_19;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATempty, not_null(c_19)));
                  t = extend_config_0(t);
                }
              }
              t = b_14;
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              t = term_c_14;
              return(t);
            }
            t = ArgOption_3(t, h_3, i_3, n_3);
            LocalPopChoice(a_14);
          }
        else
          {
            t = x_13;
            {
              ATerm f_14 = t;
              int g_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_3 (ATerm t)
                  {
                    ATerm e_19 = NULL;
                    e_19 = t;
                    j_18 :
                    if(!(match_string(e_19, "r")))
                      {
                        if(!(match_string(e_19, "reg")))
                          {
                            if(!(match_string(e_19, "register")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm p_3 (ATerm t)
                  {
                    ATerm h_14;
                    h_14 = t;
                    {
                      ATerm f_19 = NULL;
                      ATerm g_19 = NULL;
                      g_19 = t;
                      if(((f_19 != NULL) && (f_19 != g_19)))
                        _fail(g_19);
                      else
                        f_19 = g_19;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_j_14, not_null(f_19));
                        t = set_config_0(t);
                      }
                    }
                    t = h_14;
                    return(t);
                  }
                  ATerm q_3 (ATerm t)
                  {
                    t = term_m_14;
                    return(t);
                  }
                  t = Option_3(t, o_3, p_3, q_3);
                  LocalPopChoice(g_14);
                }
              else
                {
                  t = f_14;
                  {
                    ATerm n_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_3 (ATerm t)
                        {
                          ATerm h_19 = NULL;
                          h_19 = t;
                          l_18 :
                          if(!(match_string(h_19, "-t")))
                            {
                              if(!(match_string(h_19, "--tool")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm z_3 (ATerm t)
                        {
                          ATerm t_14;
                          t_14 = t;
                          {
                            ATerm i_19 = NULL;
                            ATerm j_19 = NULL;
                            j_19 = t;
                            if(((i_19 != NULL) && (i_19 != j_19)))
                              _fail(j_19);
                            else
                              i_19 = j_19;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATempty, not_null(i_19)));
                              t = extend_config_0(t);
                            }
                          }
                          t = t_14;
                          return(t);
                        }
                        ATerm a_4 (ATerm t)
                        {
                          t = term_u_14;
                          return(t);
                        }
                        t = ArgOption_3(t, r_3, z_3, a_4);
                        LocalPopChoice(o_14);
                      }
                    else
                      {
                        t = n_14;
                        {
                          ATerm v_14 = t;
                          int w_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_4 (ATerm t)
                              {
                                ATerm k_19 = NULL;
                                k_19 = t;
                                n_18 :
                                if(!(match_string(k_19, "-l")))
                                  {
                                    if(!(match_string(k_19, "--location")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm f_4 (ATerm t)
                              {
                                ATerm c_15;
                                c_15 = t;
                                {
                                  ATerm l_19 = NULL;
                                  ATerm m_19 = NULL;
                                  m_19 = t;
                                  if(((l_19 != NULL) && (l_19 != m_19)))
                                    _fail(m_19);
                                  else
                                    l_19 = m_19;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(l_19));
                                    t = set_config_0(t);
                                  }
                                }
                                t = c_15;
                                return(t);
                              }
                              ATerm g_4 (ATerm t)
                              {
                                t = term_d_15;
                                return(t);
                              }
                              t = ArgOption_3(t, e_4, f_4, g_4);
                              LocalPopChoice(w_14);
                            }
                          else
                            {
                              t = v_14;
                              {
                                ATerm g_15 = t;
                                int h_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_4 (ATerm t)
                                    {
                                      ATerm n_19 = NULL;
                                      n_19 = t;
                                      p_18 :
                                      if(!(match_string(n_19, "-V")))
                                        {
                                          if(!(match_string(n_19, "--Version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm i_4 (ATerm t)
                                    {
                                      ATerm j_15;
                                      j_15 = t;
                                      {
                                        ATerm o_19 = NULL;
                                        ATerm p_19 = NULL;
                                        p_19 = t;
                                        if(((o_19 != NULL) && (o_19 != p_19)))
                                          _fail(p_19);
                                        else
                                          o_19 = p_19;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_y_6, not_null(o_19));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = j_15;
                                      return(t);
                                    }
                                    ATerm j_4 (ATerm t)
                                    {
                                      t = term_k_15;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, h_4, i_4, j_4);
                                    LocalPopChoice(h_15);
                                  }
                                else
                                  {
                                    t = g_15;
                                    {
                                      ATerm l_15 = t;
                                      int n_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm k_4 (ATerm t)
                                          {
                                            ATerm q_19 = NULL;
                                            q_19 = t;
                                            r_18 :
                                            if(!(match_string(q_19, "q")))
                                              {
                                                if(!(match_string(q_19, "query")))
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            return(t);
                                          }
                                          ATerm l_4 (ATerm t)
                                          {
                                            ATerm o_15;
                                            o_15 = t;
                                            {
                                              ATerm r_19 = NULL;
                                              ATerm s_19 = NULL;
                                              s_19 = t;
                                              if(((r_19 != NULL) && (r_19 != s_19)))
                                                _fail(s_19);
                                              else
                                                r_19 = s_19;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, term_p_15, not_null(r_19));
                                                t = set_config_0(t);
                                              }
                                            }
                                            t = o_15;
                                            return(t);
                                          }
                                          ATerm p_4 (ATerm t)
                                          {
                                            t = term_q_15;
                                            return(t);
                                          }
                                          t = Option_3(t, k_4, l_4, p_4);
                                          LocalPopChoice(n_15);
                                        }
                                      else
                                        {
                                          t = l_15;
                                          {
                                            ATerm r_15 = t;
                                            int z_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm q_4 (ATerm t)
                                                {
                                                  ATerm t_19 = NULL;
                                                  t_19 = t;
                                                  t_18 :
                                                  if(!(match_string(t_19, "-a")))
                                                    {
                                                      if(!(match_string(t_19, "--all")))
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  return(t);
                                                }
                                                ATerm u_4 (ATerm t)
                                                {
                                                  ATerm a_16;
                                                  a_16 = t;
                                                  {
                                                    t = term_e_16;
                                                    t = set_config_0(t);
                                                  }
                                                  t = a_16;
                                                  return(t);
                                                }
                                                ATerm x_4 (ATerm t)
                                                {
                                                  t = term_f_16;
                                                  return(t);
                                                }
                                                t = Option_3(t, q_4, u_4, x_4);
                                                LocalPopChoice(z_15);
                                              }
                                            else
                                              {
                                                t = r_15;
                                                {
                                                  ATerm g_16 = t;
                                                  int h_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_4 (ATerm t)
                                                      {
                                                        ATerm u_19 = NULL;
                                                        u_19 = t;
                                                        u_18 :
                                                        if(!(match_string(u_19, "-L")))
                                                          {
                                                            if(!(match_string(u_19, "--Location")))
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm z_4 (ATerm t)
                                                      {
                                                        ATerm m_16;
                                                        m_16 = t;
                                                        {
                                                          t = term_n_16;
                                                          t = set_config_0(t);
                                                        }
                                                        t = m_16;
                                                        return(t);
                                                      }
                                                      ATerm a_5 (ATerm t)
                                                      {
                                                        t = term_o_16;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, y_4, z_4, a_5);
                                                      LocalPopChoice(h_16);
                                                    }
                                                  else
                                                    {
                                                      t = g_16;
                                                      {
                                                        ATerm b_5 (ATerm t)
                                                        {
                                                          ATerm v_19 = NULL;
                                                          v_19 = t;
                                                          w_18 :
                                                          if(!(match_string(v_19, "--verbose")))
                                                            {
                                                              _fail(t);
                                                            }
                                                          return(t);
                                                        }
                                                        ATerm c_5 (ATerm t)
                                                        {
                                                          ATerm p_16;
                                                          p_16 = t;
                                                          {
                                                            ATerm w_19 = NULL;
                                                            ATerm x_19 = NULL;
                                                            t = string_to_int_0(t);
                                                            {
                                                              x_19 = t;
                                                              if(((w_19 != NULL) && (w_19 != x_19)))
                                                                _fail(x_19);
                                                              else
                                                                w_19 = x_19;
                                                            }
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__2, term_a_7, not_null(w_19));
                                                              t = set_config_0(t);
                                                            }
                                                          }
                                                          t = p_16;
                                                          return(t);
                                                        }
                                                        ATerm d_5 (ATerm t)
                                                        {
                                                          t = term_q_16;
                                                          return(t);
                                                        }
                                                        t = ArgOption_3(t, b_5, c_5, d_5);
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
  ATerm m_20 = NULL;
  m_20 = t;
  t = SSL_table_destroy(not_null(m_20));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  q_20 = t;
  p_20 :
  if(((ATgetType(q_20) == AT_LIST) && ATisEmpty(q_20)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_20) == AT_LIST) && !(ATisEmpty(q_20))))
        {
          r_20 = ATgetFirst((ATermList) q_20);
          s_20 = (ATerm) ATgetNext((ATermList) q_20);
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
  ATerm r_16;
  r_16 = t;
  {
    ATerm v_20 = NULL;
    ATerm b_21 = NULL;
    ATerm s_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(w_16);
      }
    else
      {
        t = s_16;
        {
          ATerm w_20 = NULL;
          ATerm x_20 = NULL;
          x_20 = t;
          if(((w_20 != NULL) && (w_20 != x_20)))
            _fail(x_20);
          else
            w_20 = x_20;
          t = (ATerm) ATinsert(ATempty, not_null(w_20));
        }
      }
    {
      b_21 = t;
      if(((v_20 != NULL) && (v_20 != b_21)))
        _fail(b_21);
      else
        v_20 = b_21;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_7, not_null(v_20));
      t = printnl_0(t);
    }
  }
  t = r_16;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_17), term_z_16);
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_66 (ATerm))
{
  ATerm e_21 (ATerm t)
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        t = Cons_2(t, a_66, e_21);
      }
    return(t);
  }
  t = e_21(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  n_21 = t;
  k_21 :
  if(((ATgetType(n_21) == AT_LIST) && !(ATisEmpty(n_21))))
    {
      l_21 = ATgetFirst((ATermList) n_21);
      m_21 = (ATerm) ATgetNext((ATermList) n_21);
      {
        ATerm q_21 = NULL;
        t = not_null(m_21);
        {
          ATerm h_17;
          h_17 = t;
          {
            ATerm r_21 = NULL,t_21 = NULL,v_21 = NULL;
            ATerm m_17;
            m_17 = t;
            {
              ATerm s_21 = NULL;
              t = j_0(t);
              {
                s_21 = t;
                if(((r_21 != NULL) && (r_21 != s_21)))
                  _fail(s_21);
                else
                  r_21 = s_21;
              }
            }
            t = m_17;
            {
              ATerm u_21 = NULL;
              t = not_null(l_21);
              {
                t = i_0(t);
                {
                  u_21 = t;
                  if(((t_21 != NULL) && (t_21 != u_21)))
                    _fail(u_21);
                  else
                    t_21 = u_21;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_21)), not_null(t_21));
                {
                  v_21 = t;
                  if(((q_21 != NULL) && (q_21 != v_21)))
                    _fail(v_21);
                  else
                    q_21 = v_21;
                }
              }
            }
          }
          t = h_17;
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(q_21);
              return(t);
            }
            t = reverse_acc_2(t, i_0, e_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_21) == AT_LIST) && ATisEmpty(n_21)))
        {
          {
            t = term_b_16;
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_17), term_o_17), term_n_17);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm g_22 = NULL,h_22 = NULL;
  g_22 = t;
  f_22 :
  if(match_cons(g_22, sym_Program_1))
    {
      h_22 = ATgetArgument(g_22, 0);
      {
        ATerm k_22 = NULL,m_22 = NULL;
        ATerm l_22 = NULL;
        t = SSLgetAnnotations(not_null(g_22));
        {
          l_22 = t;
          if(((k_22 != NULL) && (k_22 != l_22)))
            _fail(l_22);
          else
            k_22 = l_22;
        }
        {
          t = not_null(h_22);
          {
            ATerm o_22 = NULL;
            t = m_57(t);
            {
              m_22 = t;
              {
                ATerm p_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_22)), not_null(k_22));
                {
                  p_22 = t;
                  if(((o_22 != NULL) && (o_22 != p_22)))
                    _fail(p_22);
                  else
                    o_22 = p_22;
                }
                t = not_null(o_22);
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
  ATerm y_22 = NULL;
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_22 = NULL;
      t = term_w_17;
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
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm k_5 (ATerm t)
        {
          ATerm l_5 (ATerm t)
          {
            ATerm a_23 = NULL;
            a_23 = t;
            if(((y_22 != NULL) && (y_22 != a_23)))
              _fail(a_23);
            else
              y_22 = a_23;
            return(t);
          }
          t = Program_1(t, l_5);
          return(t);
        }
        t = option_defined_1(t, k_5);
      }
    }
  {
    ATerm m_5 (ATerm t)
    {
      ATerm q_5 (ATerm t)
      {
        t = not_null(y_22);
        return(t);
      }
      t = short_description_1(t, q_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, m_5);
    {
      t = term_x_17;
      {
        t = echo_0(t);
        {
          t = term_e_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_5 (ATerm t)
                {
                  ATerm b_23 = NULL;
                  ATerm c_23 = NULL;
                  c_23 = t;
                  if(((b_23 != NULL) && (b_23 != c_23)))
                    _fail(c_23);
                  else
                    b_23 = c_23;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_23)), term_g_18);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_5);
                {
                  ATerm v_5 (ATerm t)
                  {
                    ATerm d_23 = NULL;
                    ATerm e_23 = NULL;
                    ATerm w_5 (ATerm t)
                    {
                      t = not_null(y_22);
                      return(t);
                    }
                    t = long_description_1(t, w_5);
                    {
                      e_23 = t;
                      if(((d_23 != NULL) && (d_23 != e_23)))
                        _fail(e_23);
                      else
                        d_23 = e_23;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_23)), term_y_7);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_5);
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
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym__2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      {
        ATerm i_18;
        i_18 = t;
        t = SSL_printnl(not_null(m_23), not_null(n_23));
        t = i_18;
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
  ATerm k_18;
  k_18 = t;
  {
    ATerm s_23 = NULL;
    ATerm t_23 = NULL;
    t_23 = t;
    if(((s_23 != NULL) && (s_23 != t_23)))
      _fail(t_23);
    else
      s_23 = t_23;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(s_23)));
      t = printnl_0(t);
    }
  }
  t = k_18;
  return(t);
}
ATerm say_1 (ATerm t, ATerm z_76 (ATerm))
{
  ATerm m_18;
  m_18 = t;
  {
    t = z_76(t);
    t = debug_0(t);
  }
  t = m_18;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_57 (ATerm))
{
  ATerm a_24 = NULL,b_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym_Undefined_1))
    {
      b_24 = ATgetArgument(a_24, 0);
      {
        ATerm e_24 = NULL,g_24 = NULL;
        ATerm f_24 = NULL;
        t = SSLgetAnnotations(not_null(a_24));
        {
          f_24 = t;
          if(((e_24 != NULL) && (e_24 != f_24)))
            _fail(f_24);
          else
            e_24 = f_24;
        }
        {
          t = not_null(b_24);
          {
            ATerm i_24 = NULL;
            t = n_57(t);
            {
              g_24 = t;
              {
                ATerm j_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_24)), not_null(e_24));
                {
                  j_24 = t;
                  if(((i_24 != NULL) && (i_24 != j_24)))
                    _fail(j_24);
                  else
                    i_24 = j_24;
                }
                t = not_null(i_24);
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
ATerm fetch_1 (ATerm t, ATerm j_66 (ATerm))
{
  ATerm o_24 (ATerm t)
  {
    ATerm o_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_66, _id);
        LocalPopChoice(q_18);
      }
    else
      {
        t = o_18;
        t = Cons_2(t, _id, o_24);
      }
    return(t);
  }
  t = o_24(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_79 (ATerm))
{
  t = fetch_1(t, v_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  s_24 :
  if(match_cons(t_24, sym_Help_0))
    {
      ATerm v_24 = NULL,x_24 = NULL;
      ATerm s_18;
      s_18 = t;
      {
        ATerm w_24 = NULL;
        t = SSLgetAnnotations(not_null(t_24));
        {
          w_24 = t;
          if(((v_24 != NULL) && (v_24 != w_24)))
            _fail(w_24);
          else
            v_24 = w_24;
        }
      }
      t = s_18;
      {
        ATerm y_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_24));
        {
          y_24 = t;
          if(((x_24 != NULL) && (x_24 != y_24)))
            _fail(y_24);
          else
            x_24 = y_24;
        }
        t = not_null(x_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_58 (ATerm))
{
  ATerm v_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_58(t);
      LocalPopChoice(x_18);
    }
  else
    {
      t = v_18;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym__2))
    {
      f_25 = ATgetArgument(e_25, 0);
      g_25 = ATgetArgument(e_25, 1);
      t = SSL_table_get(not_null(f_25), not_null(g_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym__3))
    {
      o_25 = ATgetArgument(n_25, 0);
      p_25 = ATgetArgument(n_25, 1);
      q_25 = ATgetArgument(n_25, 2);
      {
        ATerm y_19;
        y_19 = t;
        {
          ATerm w_25 = NULL;
          ATerm x_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_25), not_null(p_25));
          {
            ATerm z_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_20);
              }
            else
              {
                t = z_19;
                t = (ATerm) ATempty;
              }
            {
              x_25 = t;
              if(((w_25 != NULL) && (w_25 != x_25)))
                _fail(x_25);
              else
                w_25 = x_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_25), not_null(p_25), (ATerm) ATinsert(CheckATermList(not_null(w_25)), not_null(q_25)));
            t = table_put_0(t);
          }
        }
        t = y_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_81 (ATerm))
{
  ATerm e_26 = NULL;
  ATerm f_26 = NULL;
  t = term_b_16;
  {
    t = a_81(t);
    {
      f_26 = t;
      if(((e_26 != NULL) && (e_26 != f_26)))
        _fail(f_26);
      else
        e_26 = f_26;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_18, term_d_18, not_null(e_26));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_string(l_26, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
        {
          m_26 = ATgetFirst((ATermList) l_26);
          n_26 = (ATerm) ATgetNext((ATermList) l_26);
          {
            ATerm q_26 = NULL;
            ATerm b_20;
            b_20 = t;
            {
              t = not_null(m_26);
              t = a_0(t);
            }
            t = b_20;
            {
              ATerm r_26 = NULL;
              t = term_b_16;
              {
                t = d_0(t);
                {
                  r_26 = t;
                  if(((q_26 != NULL) && (q_26 != r_26)))
                    _fail(r_26);
                  else
                    q_26 = r_26;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_26)), not_null(q_26));
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
    ATerm w_26 = NULL;
    w_26 = t;
    v_26 :
    if(!(match_string(w_26, "--help")))
      {
        if(!(match_string(w_26, "-h")))
          {
            if(!(match_string(w_26, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_d_20;
    {
      t = set_config_0(t);
      t = term_e_20;
    }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_f_20;
    return(t);
  }
  t = Option_3(t, x_5, y_5, z_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  y_26 :
  if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
    {
      a_27 = ATgetFirst((ATermList) z_26);
      b_27 = (ATerm) ATgetNext((ATermList) z_26);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_27)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_27)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_52 (ATerm), ATerm l_52 (ATerm))
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  k_27 :
  if(((ATgetType(l_27) == AT_LIST) && !(ATisEmpty(l_27))))
    {
      m_27 = ATgetFirst((ATermList) l_27);
      n_27 = (ATerm) ATgetNext((ATermList) l_27);
      {
        ATerm r_27 = NULL,t_27 = NULL;
        ATerm s_27 = NULL;
        t = SSLgetAnnotations(not_null(l_27));
        {
          s_27 = t;
          if(((r_27 != NULL) && (r_27 != s_27)))
            _fail(s_27);
          else
            r_27 = s_27;
        }
        {
          t = not_null(m_27);
          {
            ATerm v_27 = NULL;
            t = k_52(t);
            {
              t_27 = t;
              {
                t = not_null(n_27);
                {
                  ATerm x_27 = NULL;
                  t = l_52(t);
                  {
                    v_27 = t;
                    {
                      ATerm y_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_27)), not_null(t_27)), not_null(r_27));
                      {
                        y_27 = t;
                        if(((x_27 != NULL) && (x_27 != y_27)))
                          _fail(y_27);
                        else
                          x_27 = y_27;
                      }
                      t = not_null(x_27);
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
  ATerm i_28 = NULL;
  i_28 = t;
  h_28 :
  if(((ATgetType(i_28) == AT_LIST) && ATisEmpty(i_28)))
    {
      {
        ATerm k_28 = NULL,m_28 = NULL;
        ATerm g_20;
        g_20 = t;
        {
          ATerm l_28 = NULL;
          t = SSLgetAnnotations(not_null(i_28));
          {
            l_28 = t;
            if(((k_28 != NULL) && (k_28 != l_28)))
              _fail(l_28);
            else
              k_28 = l_28;
          }
        }
        t = g_20;
        {
          ATerm n_28 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_28));
          {
            n_28 = t;
            if(((m_28 != NULL) && (m_28 != n_28)))
              _fail(n_28);
            else
              m_28 = n_28;
          }
          t = not_null(m_28);
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
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t_28 = t;
  s_28 :
  if(match_cons(t_28, sym__2))
    {
      u_28 = ATgetArgument(t_28, 0);
      v_28 = ATgetArgument(t_28, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_8, not_null(u_28), not_null(v_28));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_80 (ATerm))
{
  ATerm h_20;
  h_20 = t;
  {
    ATerm a_6 (ATerm t)
    {
      t = term_i_20;
      t = y_80(t);
      return(t);
    }
    t = try_1(t, a_6);
  }
  t = h_20;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm d_29 = NULL;
      ATerm j_20;
      j_20 = t;
      {
        ATerm b_29 = NULL;
        ATerm c_29 = NULL;
        c_29 = t;
        if(((b_29 != NULL) && (b_29 != c_29)))
          _fail(c_29);
        else
          b_29 = c_29;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_17, not_null(b_29));
          t = set_config_0(t);
        }
      }
      t = j_20;
      {
        ATerm e_29 = NULL;
        e_29 = t;
        if(((d_29 != NULL) && (d_29 != e_29)))
          _fail(e_29);
        else
          d_29 = e_29;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_29));
      }
      return(t);
    }
    ATerm d_6 (ATerm t)
    {
      ATerm k_20 = t;
      int l_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_20);
            }
          else
            {
              t = n_20;
              {
                t = y_80(t);
                t = Cons_2(t, _id, d_6);
              }
            }
          LocalPopChoice(l_20);
        }
      else
        {
          t = k_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_6, d_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  ATerm t_20;
  t_20 = t;
  {
    ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
    n_29 = t;
    j_29 :
    if(match_cons(n_29, sym__3))
      {
        o_29 = ATgetArgument(n_29, 0);
        p_29 = ATgetArgument(n_29, 1);
        q_29 = ATgetArgument(n_29, 2);
        {
          if(((k_29 != NULL) && (k_29 != o_29)))
            _fail(o_29);
          else
            k_29 = o_29;
          {
            if(((l_29 != NULL) && (l_29 != p_29)))
              _fail(p_29);
            else
              l_29 = p_29;
            {
              if(((m_29 != NULL) && (m_29 != q_29)))
                _fail(q_29);
              else
                m_29 = q_29;
              t = SSL_table_put(not_null(k_29), not_null(l_29), not_null(m_29));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_80 (ATerm))
{
  ATerm t_29 = NULL;
  ATerm u_20;
  u_20 = t;
  {
    t = term_y_20;
    t = table_put_0(t);
  }
  t = u_20;
  {
    ATerm e_6 (ATerm t)
    {
      ATerm z_20 = t;
      int a_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_80(t);
          LocalPopChoice(a_21);
        }
      else
        {
          t = z_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_6);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_21;
            f_21 = t;
            {
              ATerm g_21 = t;
              int h_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_20;
                  t = get_config_0(t);
                  LocalPopChoice(h_21);
                }
              else
                {
                  t = g_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = f_21;
            {
              t = system_usage_0(t);
              {
                t = term_i_21;
                t = exit_0(t);
              }
            }
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            {
              ATerm g_6 (ATerm t)
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm u_29 = NULL;
                  u_29 = t;
                  if(((t_29 != NULL) && (t_29 != u_29)))
                    _fail(u_29);
                  else
                    t_29 = u_29;
                  return(t);
                }
                t = Undefined_1(t, h_6);
                return(t);
              }
              t = option_defined_1(t, g_6);
              {
                ATerm i_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_29)), term_j_21);
                  return(t);
                }
                t = say_1(t, i_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_s_9;
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
        ATerm o_21;
        o_21 = t;
        {
          t = term_c_18;
          t = table_destroy_0(t);
        }
        t = o_21;
      }
    }
  }
  return(t);
}
ATerm xtc_0 (ATerm t)
{
  ATerm p_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_options_1(t, xtc_options_0);
      {
        t = xtc_location_0(t);
        {
          ATerm n_6 (ATerm t)
          {
            ATerm o_6 (ATerm t)
            {
              t = term_x_21;
              return(t);
            }
            t = debug_1(t, o_6);
            return(t);
          }
          t = if_verbose2_1(t, n_6);
          {
            t = xtc_read_0(t);
            {
              ATerm y_21 = t;
              int z_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_22 = t;
                  int b_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_14;
                      {
                        t = get_config_0(t);
                        t = xtc_register_0(t);
                      }
                      LocalPopChoice(b_22);
                    }
                  else
                    {
                      t = a_22;
                      {
                        t = term_f_9;
                        {
                          t = get_config_0(t);
                          t = register_import_0(t);
                        }
                      }
                    }
                  t = xtc_store_0(t);
                  LocalPopChoice(z_21);
                }
              else
                {
                  t = y_21;
                  {
                    t = term_p_15;
                    {
                      t = get_config_0(t);
                      t = xtc_query_0(t);
                    }
                  }
                }
              {
                t = term_i_21;
                t = exit_0(t);
              }
            }
          }
        }
      }
      LocalPopChoice(w_21);
    }
  else
    {
      t = p_21;
      {
        ATerm p_6 (ATerm t)
        {
          t = term_c_22;
          return(t);
        }
        t = debug_1(t, p_6);
      }
    }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = xtc_0(t);
  return(t);
}