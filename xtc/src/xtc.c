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
ATerm term_f_23;
ATerm term_y_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_r_21;
ATerm term_e_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_l_18;
ATerm term_e_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_e_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_w_15;
ATerm term_r_15;
ATerm term_k_15;
ATerm term_b_15;
ATerm term_w_14;
ATerm term_p_14;
ATerm term_j_14;
ATerm term_h_13;
ATerm term_y_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_k_10;
ATerm term_e_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_o_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_m_8;
ATerm term_i_8;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_i_6;
ATerm term_e_6;
ATerm term_a_6;
void init_constant_terms (void)
{
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_o_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools\n", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_f_7, term_o_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_u_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_o_16);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__3, term_s_18, term_u_18, (ATerm) ATempty);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm s_76 (ATerm));
ATerm exit_0 (ATerm);
ATerm version_query_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm h_85 (ATerm));
ATerm tool_query_0 (ATerm);
ATerm print_0 (ATerm);
ATerm list_tool_0 (ATerm);
ATerm Tool_1 (ATerm, ATerm t_57 (ATerm));
ATerm all_query_0 (ATerm);
ATerm xtc_query_0 (ATerm);
ATerm _2 (ATerm, ATerm x_50 (ATerm), ATerm y_50 (ATerm));
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
ATerm if_verbose1_1 (ATerm, ATerm f_85 (ATerm));
ATerm xtc_register_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm i_85 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm k_85 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_71 (ATerm), ATerm w_71 (ATerm));
ATerm union_1 (ATerm, ATerm r_71 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm a_82 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm j_85 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_85 (ATerm));
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_66 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm xtc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm u_65 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm i_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_76 (ATerm));
ATerm Undefined_1 (ATerm, ATerm j_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_52 (ATerm), ATerm h_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_80 (ATerm));
ATerm xtc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm u_5;
  u_5 = t;
  {
    ATerm t_1 = NULL,z_1 = NULL;
    ATerm y_5;
    y_5 = t;
    {
      ATerm u_1 = NULL;
      t = s_76(t);
      {
        u_1 = t;
        if(((t_1 != NULL) && (t_1 != u_1)))
          _fail(u_1);
        else
          t_1 = u_1;
      }
    }
    t = y_5;
    {
      ATerm b_2 = NULL;
      b_2 = t;
      if(((z_1 != NULL) && (z_1 != b_2)))
        _fail(b_2);
      else
        z_1 = b_2;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_1)), not_null(t_1)));
        t = printnl_0(t);
      }
    }
  }
  t = u_5;
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_2 = NULL;
  j_2 = t;
  t = SSL_exit(not_null(j_2));
  return(t);
}
ATerm version_query_0 (ATerm t)
{
  ATerm s_2 = NULL,u_2 = NULL,v_2 = NULL;
  ATerm d_6;
  d_6 = t;
  {
    ATerm t_2 = NULL;
    t = term_e_6;
    {
      t = get_config_0(t);
      {
        t_2 = t;
        if(((s_2 != NULL) && (s_2 != t_2)))
          _fail(t_2);
        else
          s_2 = t_2;
      }
    }
  }
  t = d_6;
  {
    ATerm b_0 (ATerm t)
    {
      ATerm w_2 = NULL,x_2 = NULL;
      w_2 = t;
      p_2 :
      if(match_cons(w_2, sym_Tool_1))
        {
          x_2 = ATgetArgument(w_2, 0);
          if(((u_2 != NULL) && (u_2 != x_2)))
            _fail(x_2);
          else
            u_2 = x_2;
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
        ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
        y_2 = t;
        r_2 :
        if(match_cons(y_2, sym__2))
          {
            z_2 = ATgetArgument(y_2, 0);
            a_3 = ATgetArgument(y_2, 1);
            {
              if(((s_2 != NULL) && (s_2 != z_2)))
                _fail(z_2);
              else
                s_2 = z_2;
              if(((v_2 != NULL) && (v_2 != a_3)))
                _fail(a_3);
              else
                v_2 = a_3;
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
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(u_2)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(s_2), not_null(v_2))));
      t = list_tool_0(t);
    }
  }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm h_85 (ATerm))
{
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_6;
      h_6 = t;
      {
        ATerm f_3 = NULL;
        ATerm g_3 = NULL;
        t = term_i_6;
        {
          t = get_config_0(t);
          {
            g_3 = t;
            if(((f_3 != NULL) && (f_3 != g_3)))
              _fail(g_3);
            else
              f_3 = g_3;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), term_k_6);
          t = geq_0(t);
        }
      }
      t = h_6;
      t = h_85(t);
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
      {
      }
    }
  return(t);
}
ATerm tool_query_0 (ATerm t)
{
  ATerm k_3 = NULL;
  t = term_l_6;
  {
    t = get_config_0(t);
    {
      ATerm f_0 (ATerm t)
      {
        ATerm l_3 = NULL;
        l_3 = t;
        {
          ATerm m_6 = t;
          int n_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_3 = NULL;
              ATerm o_0 (ATerm t)
              {
                ATerm p_0 (ATerm t)
                {
                  t = term_o_6;
                  return(t);
                }
                t = debug_1(t, p_0);
                return(t);
              }
              t = if_verbose3_1(t, o_0);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(l_3)));
                {
                  t = table_get_0(t);
                  {
                    n_3 = t;
                    {
                      if(((k_3 != NULL) && (k_3 != n_3)))
                        _fail(n_3);
                      else
                        k_3 = n_3;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(l_3)), not_null(k_3));
                        {
                          ATerm q_6 = t;
                          int v_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = version_query_0(t);
                              LocalPopChoice(v_6);
                            }
                          else
                            {
                              t = q_6;
                              t = list_tool_0(t);
                            }
                        }
                      }
                    }
                  }
                }
              }
              LocalPopChoice(n_6);
            }
          else
            {
              t = m_6;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_x_6), not_null(l_3)));
                t = print_0(t);
              }
            }
        }
        return(t);
      }
      t = map_1(t, f_0);
    }
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  r_3 :
  if(match_cons(s_3, sym__2))
    {
      t_3 = ATgetArgument(s_3, 0);
      u_3 = ATgetArgument(s_3, 1);
      {
        ATerm y_6;
        y_6 = t;
        t = SSL_print(not_null(t_3), not_null(u_3));
        t = y_6;
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
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL;
  d_4 = t;
  b_4 :
  if(match_cons(d_4, sym__2))
    {
      e_4 = ATgetArgument(d_4, 0);
      g_4 = ATgetArgument(d_4, 1);
      c_4 :
      if(match_cons(e_4, sym_Tool_1))
        {
          f_4 = ATgetArgument(e_4, 0);
          {
            t = not_null(g_4);
            {
              ATerm q_0 (ATerm t)
              {
                ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
                j_4 = t;
                a_4 :
                if(match_cons(j_4, sym__2))
                  {
                    k_4 = ATgetArgument(j_4, 0);
                    l_4 = ATgetArgument(j_4, 1);
                    {
                      ATerm d_7 = t;
                      int e_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_f_7;
                          {
                            t = get_config_0(t);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_g_7), not_null(l_4)));
                              t = print_0(t);
                            }
                          }
                          LocalPopChoice(e_7);
                        }
                      else
                        {
                          t = d_7;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_7), not_null(l_4)), term_i_7), not_null(k_4)), term_h_7), not_null(f_4)));
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
              t = map_1(t, q_0);
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
ATerm Tool_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm v_4 = NULL,w_4 = NULL;
  v_4 = t;
  u_4 :
  if(match_cons(v_4, sym_Tool_1))
    {
      w_4 = ATgetArgument(v_4, 0);
      {
        ATerm z_4 = NULL,b_5 = NULL;
        ATerm a_5 = NULL;
        t = SSLgetAnnotations(not_null(v_4));
        {
          a_5 = t;
          if(((z_4 != NULL) && (z_4 != a_5)))
            _fail(a_5);
          else
            z_4 = a_5;
        }
        {
          t = not_null(w_4);
          {
            ATerm d_5 = NULL;
            t = t_57(t);
            {
              b_5 = t;
              {
                ATerm e_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Tool_1, not_null(b_5)), not_null(z_4));
                {
                  e_5 = t;
                  if(((d_5 != NULL) && (d_5 != e_5)))
                    _fail(e_5);
                  else
                    d_5 = e_5;
                }
                t = not_null(d_5);
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
  t = term_j_7;
  {
    t = get_config_0(t);
    {
      t = term_p_6;
      {
        t = table_getlist_0(t);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm l_7 = t;
            int o_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_0 (ATerm t)
                {
                  t = Tool_1(t, _id);
                  return(t);
                }
                t = _2(t, s_0, _id);
                t = list_tool_0(t);
                LocalPopChoice(o_7);
              }
            else
              {
                t = l_7;
                {
                }
              }
            return(t);
          }
          t = map_1(t, r_0);
        }
      }
    }
  }
  return(t);
}
ATerm xtc_query_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = all_query_0(t);
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      t = tool_query_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm x_50 (ATerm), ATerm y_50 (ATerm))
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  p_5 = t;
  o_5 :
  if(match_cons(p_5, sym__2))
    {
      q_5 = ATgetArgument(p_5, 0);
      r_5 = ATgetArgument(p_5, 1);
      {
        ATerm v_5 = NULL,x_5 = NULL;
        ATerm w_5 = NULL;
        t = SSLgetAnnotations(not_null(p_5));
        {
          w_5 = t;
          if(((v_5 != NULL) && (v_5 != w_5)))
            _fail(w_5);
          else
            v_5 = w_5;
        }
        {
          t = not_null(q_5);
          {
            ATerm z_5 = NULL;
            t = x_50(t);
            {
              x_5 = t;
              {
                t = not_null(r_5);
                {
                  ATerm b_6 = NULL;
                  t = y_50(t);
                  {
                    z_5 = t;
                    {
                      ATerm c_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_5), not_null(z_5)), not_null(v_5));
                      {
                        c_6 = t;
                        if(((b_6 != NULL) && (b_6 != c_6)))
                          _fail(c_6);
                        else
                          b_6 = c_6;
                      }
                      t = not_null(b_6);
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
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_6 = NULL;
  j_6 = t;
  t = SSL_is_string(not_null(j_6));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
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
            t = map_1(t, t_0);
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            {
              ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
              s_6 = t;
              r_6 :
              if(match_cons(s_6, sym_Path_1))
                {
                  t_6 = ATgetArgument(s_6, 0);
                  t = not_null(t_6);
                }
              else
                {
                  if(match_cons(s_6, sym_Var_1))
                    {
                      t_6 = ATgetArgument(s_6, 0);
                      {
                        t = not_null(t_6);
                        {
                          ATerm e_8 = t;
                          int g_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_8);
                            }
                          else
                            {
                              t = e_8;
                              {
                                ATerm u_0 (ATerm t)
                                {
                                  t = term_i_8;
                                  return(t);
                                }
                                t = debug_1(t, u_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(s_6, sym_Prefix_2))
                        {
                          t_6 = ATgetArgument(s_6, 0);
                          u_6 = ATgetArgument(s_6, 1);
                          {
                            ATerm z_6 = NULL,b_7 = NULL;
                            ATerm l_8;
                            l_8 = t;
                            {
                              ATerm a_7 = NULL;
                              t = not_null(t_6);
                              {
                                t = eval_config_0(t);
                                {
                                  a_7 = t;
                                  if(((z_6 != NULL) && (z_6 != a_7)))
                                    _fail(a_7);
                                  else
                                    z_6 = a_7;
                                }
                              }
                            }
                            t = l_8;
                            {
                              ATerm c_7 = NULL;
                              t = not_null(u_6);
                              {
                                t = eval_config_0(t);
                                {
                                  c_7 = t;
                                  if(((b_7 != NULL) && (b_7 != c_7)))
                                    _fail(c_7);
                                  else
                                    b_7 = c_7;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), not_null(b_7));
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
  ATerm k_7 = NULL;
  k_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(k_7));
    {
      t = table_get_0(t);
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm p_8;
              p_8 = t;
              {
                ATerm m_7 = NULL;
                ATerm n_7 = NULL;
                n_7 = t;
                if(((m_7 != NULL) && (m_7 != n_7)))
                  _fail(n_7);
                else
                  m_7 = n_7;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_m_8, not_null(k_7), not_null(m_7));
                  t = table_put_0(t);
                }
              }
              t = p_8;
            }
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym__2))
    {
      t_7 = ATgetArgument(s_7, 0);
      u_7 = ATgetArgument(s_7, 1);
      t = SSL_WriteToTextFile(not_null(t_7), not_null(u_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm z_7 = NULL;
  z_7 = t;
  t = SSL_table_keys(not_null(z_7));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm f_8 = NULL;
  f_8 = t;
  {
    t = table_keys_0(t);
    {
      ATerm v_0 (ATerm t)
      {
        ATerm h_8 = NULL;
        ATerm j_8 = NULL;
        h_8 = t;
        {
          ATerm k_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), not_null(h_8));
          {
            t = table_get_0(t);
            {
              k_8 = t;
              if(((j_8 != NULL) && (j_8 != k_8)))
                _fail(k_8);
              else
                j_8 = k_8;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), not_null(j_8));
        }
        return(t);
      }
      t = map_1(t, v_0);
    }
  }
  return(t);
}
ATerm xtc_store_0 (ATerm t)
{
  ATerm q_8 = NULL,s_8 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      t = term_u_8;
      return(t);
    }
    t = say_1(t, x_0);
    return(t);
  }
  t = if_verbose1_1(t, w_0);
  {
    ATerm v_8;
    v_8 = t;
    {
      ATerm r_8 = NULL;
      t = term_w_8;
      {
        t = get_config_0(t);
        {
          r_8 = t;
          if(((q_8 != NULL) && (q_8 != r_8)))
            _fail(r_8);
          else
            q_8 = r_8;
        }
      }
    }
    t = v_8;
    {
      ATerm t_8 = NULL;
      t = term_p_6;
      {
        t = table_getlist_0(t);
        {
          t_8 = t;
          if(((s_8 != NULL) && (s_8 != t_8)))
            _fail(t_8);
          else
            s_8 = t_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(s_8));
        t = WriteToTextFile_0(t);
      }
    }
  }
  return(t);
}
ATerm register_import_0 (ATerm t)
{
  ATerm y_8 = NULL;
  t = term_x_8;
  {
    ATerm a_9 = NULL;
    t = get_config_0(t);
    {
      y_8 = t;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm z_0 (ATerm t)
          {
            t = term_z_8;
            return(t);
          }
          t = debug_1(t, z_0);
          return(t);
        }
        t = if_verbose2_1(t, y_0);
        {
          t = term_x_8;
          {
            t = get_config_0(t);
            {
              a_9 = t;
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = term_b_9;
                    return(t);
                  }
                  t = debug_1(t, b_1);
                  return(t);
                }
                t = if_verbose5_1(t, a_1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_p_6, term_c_9, not_null(a_9));
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
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym__3))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      l_9 = ATgetArgument(i_9, 2);
      {
        ATerm d_9;
        d_9 = t;
        {
          ATerm p_9 = NULL;
          ATerm q_9 = NULL,s_9 = NULL;
          ATerm r_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_9), not_null(k_9));
          {
            ATerm e_9 = t;
            int f_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_9);
              }
            else
              {
                t = e_9;
                t = (ATerm) ATempty;
              }
            {
              r_9 = t;
              if(((q_9 != NULL) && (q_9 != r_9)))
                _fail(r_9);
              else
                q_9 = r_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), not_null(q_9));
            {
              t = union_1(t, eq_0);
              {
                s_9 = t;
                if(((p_9 != NULL) && (p_9 != s_9)))
                  _fail(s_9);
                else
                  p_9 = s_9;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_9), not_null(k_9), not_null(p_9));
            t = table_put_0(t);
          }
        }
        t = d_9;
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
  ATerm x_9 = NULL;
  x_9 = t;
  t = SSL_implode_string(not_null(x_9));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  t = SSL_explode_string(not_null(b_10));
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
ATerm if_verbose1_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm g_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_9;
      n_9 = t;
      {
        ATerm f_10 = NULL;
        ATerm g_10 = NULL;
        t = term_i_6;
        {
          t = get_config_0(t);
          {
            g_10 = t;
            if(((f_10 != NULL) && (f_10 != g_10)))
              _fail(g_10);
            else
              f_10 = g_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_10), term_o_9);
          t = geq_0(t);
        }
      }
      t = n_9;
      t = f_85(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = g_9;
      {
      }
    }
  return(t);
}
ATerm xtc_register_0 (ATerm t)
{
  ATerm o_10 = NULL;
  t = term_l_6;
  {
    ATerm q_10 = NULL;
    t = get_config_0(t);
    {
      o_10 = t;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            t = term_t_9;
            return(t);
          }
          t = say_1(t, d_1);
          return(t);
        }
        t = if_verbose1_1(t, c_1);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm f_1 (ATerm t)
            {
              t = term_u_9;
              return(t);
            }
            t = debug_1(t, f_1);
            return(t);
          }
          t = if_verbose2_1(t, e_1);
          {
            t = term_e_6;
            {
              ATerm s_10 = NULL;
              t = get_config_0(t);
              {
                q_10 = t;
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm h_1 (ATerm t)
                    {
                      t = term_v_9;
                      return(t);
                    }
                    t = debug_1(t, h_1);
                    return(t);
                  }
                  t = if_verbose2_1(t, g_1);
                  {
                    t = term_f_7;
                    {
                      t = get_config_0(t);
                      {
                        s_10 = t;
                        {
                          ATerm i_1 (ATerm t)
                          {
                            ATerm j_1 (ATerm t)
                            {
                              t = term_w_9;
                              return(t);
                            }
                            t = debug_1(t, j_1);
                            return(t);
                          }
                          t = if_verbose2_1(t, i_1);
                          {
                            t = not_null(o_10);
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm u_10 = NULL,w_10 = NULL;
                                ATerm y_9;
                                y_9 = t;
                                {
                                  ATerm v_10 = NULL;
                                  v_10 = t;
                                  if(((u_10 != NULL) && (u_10 != v_10)))
                                    _fail(v_10);
                                  else
                                    u_10 = v_10;
                                }
                                t = y_9;
                                {
                                  ATerm x_10 = NULL,z_10 = NULL;
                                  ATerm y_10 = NULL;
                                  y_10 = t;
                                  if(((x_10 != NULL) && (x_10 != y_10)))
                                    _fail(y_10);
                                  else
                                    x_10 = y_10;
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_10)), term_z_9), not_null(s_10));
                                    {
                                      t = concat_strings_0(t);
                                      {
                                        z_10 = t;
                                        if(((w_10 != NULL) && (w_10 != z_10)))
                                          _fail(z_10);
                                        else
                                          w_10 = z_10;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, term_p_6, (ATerm)ATmakeAppl(sym_Tool_1, not_null(u_10)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(q_10), not_null(w_10))));
                                    t = table_union_0(t);
                                  }
                                }
                                return(t);
                              }
                              t = map_1(t, k_1);
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
ATerm if_verbose4_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm a_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_10;
      d_10 = t;
      {
        ATerm h_11 = NULL;
        ATerm i_11 = NULL;
        t = term_i_6;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_11), term_e_10);
          t = geq_0(t);
        }
      }
      t = d_10;
      t = i_85(t);
      LocalPopChoice(c_10);
    }
  else
    {
      t = a_10;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm k_85 (ATerm))
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_10;
      j_10 = t;
      {
        ATerm l_11 = NULL;
        ATerm m_11 = NULL;
        t = term_i_6;
        {
          t = get_config_0(t);
          {
            m_11 = t;
            if(((l_11 != NULL) && (l_11 != m_11)))
              _fail(m_11);
            else
              l_11 = m_11;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), term_k_10);
          t = geq_0(t);
        }
      }
      t = j_10;
      t = k_85(t);
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
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
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym__2))
    {
      r_11 = ATgetArgument(q_11, 0);
      s_11 = ATgetArgument(q_11, 1);
      if(((r_11 != NULL) && (r_11 != s_11)))
        _fail(s_11);
      else
        r_11 = s_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_71 (ATerm), ATerm w_71 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(((ATgetType(y_11) == AT_LIST) && !(ATisEmpty(y_11))))
    {
      z_11 = ATgetFirst((ATermList) y_11);
      a_12 = (ATerm) ATgetNext((ATermList) y_11);
      {
        t = w_71(t);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm d_12 = NULL;
            d_12 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_11), not_null(d_12));
              t = v_71(t);
            }
            return(t);
          }
          t = fetch_1(t, l_1);
        }
        t = not_null(a_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_71 (ATerm))
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym__2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      {
        t = not_null(k_12);
        {
          ATerm p_12 (ATerm t)
          {
            ATerm l_10 = t;
            int m_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_12);
                LocalPopChoice(m_10);
              }
            else
              {
                t = l_10;
                {
                  ATerm n_10 = t;
                  int p_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_1 (ATerm t)
                      {
                        t = not_null(l_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_71, m_1);
                      t = p_12(t);
                      LocalPopChoice(p_10);
                    }
                  else
                    {
                      t = n_10;
                      t = Cons_2(t, _id, p_12);
                    }
                }
              }
            return(t);
          }
          t = p_12(t);
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
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  u_12 = t;
  t_12 :
  if(match_cons(u_12, sym__3))
    {
      v_12 = ATgetArgument(u_12, 0);
      w_12 = ATgetArgument(u_12, 1);
      x_12 = ATgetArgument(u_12, 2);
      {
        ATerm r_10;
        r_10 = t;
        {
          ATerm b_13 = NULL;
          ATerm c_13 = NULL,e_13 = NULL;
          ATerm d_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), not_null(w_12));
          {
            ATerm t_10 = t;
            int a_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_11);
              }
            else
              {
                t = t_10;
                t = (ATerm) ATempty;
              }
            {
              d_13 = t;
              if(((c_13 != NULL) && (c_13 != d_13)))
                _fail(d_13);
              else
                c_13 = d_13;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_13), not_null(x_12));
            {
              t = union_1(t, eq_0);
              {
                e_13 = t;
                if(((b_13 != NULL) && (b_13 != e_13)))
                  _fail(e_13);
                else
                  b_13 = e_13;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_12), not_null(w_12), not_null(b_13));
            t = table_put_0(t);
          }
        }
        t = r_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm a_82 (ATerm))
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym__2))
    {
      n_13 = ATgetArgument(m_13, 0);
      o_13 = ATgetArgument(m_13, 1);
      {
        t = not_null(o_13);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
            r_13 = t;
            k_13 :
            if(match_cons(r_13, sym__2))
              {
                s_13 = ATgetArgument(r_13, 0);
                t_13 = ATgetArgument(r_13, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(n_13), not_null(s_13), not_null(t_13));
                  t = a_82(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_1);
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
  ATerm z_13 = NULL;
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_14 = NULL;
      a_14 = t;
      {
        if(((z_13 != NULL) && (z_13 != a_14)))
          _fail(a_14);
        else
          z_13 = a_14;
        t = SSL_ReadFromFile(not_null(z_13));
      }
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      {
        ATerm o_1 (ATerm t)
        {
          t = term_d_11;
          return(t);
        }
        t = debug_1(t, o_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm e_14 = NULL;
  ATerm g_14 = NULL;
  e_14 = t;
  {
    ATerm e_11;
    e_11 = t;
    {
      ATerm h_14 = NULL;
      t = term_f_11;
      {
        h_14 = t;
        if(((g_14 != NULL) && (g_14 != h_14)))
          _fail(h_14);
        else
          g_14 = h_14;
      }
    }
    t = e_11;
    {
      t = SSL_open_file(not_null(e_14), not_null(g_14));
      t = SSL_close_file(not_null(e_14));
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm j_85 (ATerm))
{
  ATerm g_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_11;
      k_11 = t;
      {
        ATerm l_14 = NULL;
        ATerm m_14 = NULL;
        t = term_i_6;
        {
          t = get_config_0(t);
          {
            m_14 = t;
            if(((l_14 != NULL) && (l_14 != m_14)))
              _fail(m_14);
            else
              l_14 = m_14;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), term_n_11);
          t = geq_0(t);
        }
      }
      t = k_11;
      t = j_85(t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = g_11;
      {
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm q_14 = NULL;
  ATerm s_14 = NULL;
  q_14 = t;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm q_1 (ATerm t)
      {
        t = term_o_11;
        return(t);
      }
      t = debug_1(t, q_1);
      return(t);
    }
    t = if_verbose5_1(t, p_1);
    {
      ATerm t_11 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(q_14)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_11;
        }
      {
        ATerm u_11;
        u_11 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_6, term_v_11, (ATerm) ATinsert(ATempty, not_null(q_14)));
          t = table_put_0(t);
        }
        t = u_11;
        {
          ATerm r_1 (ATerm t)
          {
            ATerm s_1 (ATerm t)
            {
              t = term_w_11;
              return(t);
            }
            t = debug_1(t, s_1);
            return(t);
          }
          t = if_verbose4_1(t, r_1);
          {
            ATerm b_12 = t;
            int c_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(c_12);
              }
            else
              {
                t = b_12;
                t = (ATerm) ATempty;
              }
            {
              ATerm v_1 (ATerm t)
              {
                ATerm w_1 (ATerm t)
                {
                  t = term_e_12;
                  return(t);
                }
                t = say_1(t, w_1);
                return(t);
              }
              t = if_verbose6_1(t, v_1);
              {
                ATerm t_14 = NULL;
                t_14 = t;
                if(((s_14 != NULL) && (s_14 != t_14)))
                  _fail(t_14);
                else
                  s_14 = t_14;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_6, not_null(s_14));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm x_1 (ATerm t)
                      {
                        ATerm y_1 (ATerm t)
                        {
                          t = term_f_12;
                          return(t);
                        }
                        t = say_1(t, y_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, x_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_p_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(q_14)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm a_2 (ATerm t)
                            {
                              ATerm c_2 (ATerm t)
                              {
                                t = term_e_12;
                                return(t);
                              }
                              t = say_1(t, c_2);
                              return(t);
                            }
                            t = if_verbose4_1(t, a_2);
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
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym__2))
    {
      z_14 = ATgetArgument(y_14, 0);
      a_15 = ATgetArgument(y_14, 1);
      {
        ATerm g_12;
        g_12 = t;
        {
          ATerm h_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_14), not_null(a_15));
              LocalPopChoice(m_12);
            }
          else
            {
              t = h_12;
              t = SSL_gtr(not_null(z_14), not_null(a_15));
            }
        }
        t = g_12;
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
  ATerm g_15 = NULL;
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
      h_15 = t;
      f_15 :
      if(match_cons(h_15, sym__2))
        {
          i_15 = ATgetArgument(h_15, 0);
          j_15 = ATgetArgument(h_15, 1);
          {
            if(((g_15 != NULL) && (g_15 != i_15)))
              _fail(i_15);
            else
              g_15 = i_15;
            if(((g_15 != NULL) && (g_15 != j_15)))
              _fail(j_15);
            else
              g_15 = j_15;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_12;
      s_12 = t;
      {
        ATerm m_15 = NULL;
        ATerm n_15 = NULL;
        t = term_i_6;
        {
          t = get_config_0(t);
          {
            n_15 = t;
            if(((m_15 != NULL) && (m_15 != n_15)))
              _fail(n_15);
            else
              m_15 = n_15;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_15), term_y_12);
          t = geq_0(t);
        }
      }
      t = s_12;
      t = g_85(t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
      }
    }
  return(t);
}
ATerm getenv_0 (ATerm t)
{
  ATerm q_15 = NULL;
  q_15 = t;
  t = SSL_getenv(not_null(q_15));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_8;
      t = get_config_0(t);
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm f_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_h_13;
            t = getenv_0(t);
            LocalPopChoice(g_13);
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
  ATerm u_15 = NULL;
  u_15 = t;
  t = SSL_string_to_int(not_null(u_15));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  c_16 = t;
  a_16 :
  if(match_string(c_16, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
        {
          d_16 = ATgetFirst((ATermList) c_16);
          e_16 = (ATerm) ATgetNext((ATermList) c_16);
          b_16 :
          if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
            {
              f_16 = ATgetFirst((ATermList) e_16);
              g_16 = (ATerm) ATgetNext((ATermList) e_16);
              {
                ATerm k_16 = NULL;
                ATerm i_13;
                i_13 = t;
                {
                  t = not_null(d_16);
                  t = l_0(t);
                }
                t = i_13;
                {
                  ATerm l_16 = NULL;
                  t = not_null(f_16);
                  {
                    t = m_0(t);
                    {
                      l_16 = t;
                      if(((k_16 != NULL) && (k_16 != l_16)))
                        _fail(l_16);
                      else
                        k_16 = l_16;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_16)), not_null(k_16));
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
  ATerm j_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_13);
    }
  else
    {
      t = j_13;
      {
        ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
        r_16 = t;
        q_16 :
        if(((ATgetType(r_16) == AT_LIST) && !(ATisEmpty(r_16))))
          {
            s_16 = ATgetFirst((ATermList) r_16);
            t_16 = (ATerm) ATgetNext((ATermList) r_16);
            {
              t = not_null(s_16);
              {
                ATerm d_2 (ATerm t)
                {
                  t = not_null(t_16);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_2);
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
  ATerm d_17 = NULL;
  ATerm f_17 = NULL;
  d_17 = t;
  {
    ATerm g_17 = NULL;
    ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
    t = not_null(d_17);
    {
      g_17 = t;
      {
        t = SSL_explode_term(not_null(g_17));
        {
          i_17 = t;
          b_17 :
          if(match_cons(i_17, sym__2))
            {
              j_17 = ATgetArgument(i_17, 0);
              k_17 = ATgetArgument(i_17, 1);
              c_17 :
              if(match_string(j_17, ""))
                {
                  if(((f_17 != NULL) && (f_17 != k_17)))
                    _fail(k_17);
                  else
                    f_17 = k_17;
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
      t = not_null(f_17);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_66 (ATerm))
{
  ATerm o_17 (ATerm t)
  {
    ATerm q_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_17);
        LocalPopChoice(u_13);
      }
    else
      {
        t = q_13;
        {
          t = Nil_0(t);
          t = j_66(t);
        }
      }
    return(t);
  }
  t = o_17(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym__2))
    {
      s_17 = ATgetArgument(r_17, 0);
      t_17 = ATgetArgument(r_17, 1);
      {
        t = not_null(s_17);
        {
          ATerm e_2 (ATerm t)
          {
            t = not_null(t_17);
            return(t);
          }
          t = at_end_1(t, e_2);
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
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym__2))
    {
      c_18 = ATgetArgument(b_18, 0);
      d_18 = ATgetArgument(b_18, 1);
      {
        ATerm g_18 = NULL;
        ATerm h_18 = NULL,j_18 = NULL;
        ATerm i_18 = NULL;
        t = not_null(c_18);
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
              t = (ATerm) ATempty;
            }
          {
            i_18 = t;
            if(((h_18 != NULL) && (h_18 != i_18)))
              _fail(i_18);
            else
              h_18 = i_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_18), not_null(h_18));
          {
            ATerm b_14 = t;
            int c_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(c_14);
              }
            else
              {
                t = b_14;
                t = conc_more_lists_0(t);
              }
            {
              j_18 = t;
              if(((g_18 != NULL) && (g_18 != j_18)))
                _fail(j_18);
              else
                g_18 = j_18;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_8, not_null(c_18), not_null(g_18));
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
  ATerm d_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 (ATerm t)
      {
        ATerm g_19 = NULL;
        g_19 = t;
        n_18 :
        if(!(match_string(g_19, "-r")))
          {
            if(!(match_string(g_19, "--repository")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        ATerm i_14;
        i_14 = t;
        {
          ATerm h_19 = NULL;
          ATerm i_19 = NULL;
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_w_8, not_null(h_19));
            t = set_config_0(t);
          }
        }
        t = i_14;
        return(t);
      }
      ATerm h_2 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = ArgOption_3(t, f_2, g_2, h_2);
      LocalPopChoice(f_14);
    }
  else
    {
      t = d_14;
      {
        ATerm k_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 (ATerm t)
            {
              ATerm j_19 = NULL;
              j_19 = t;
              p_18 :
              if(!(match_string(j_19, "i")))
                {
                  if(!(match_string(j_19, "imp")))
                    {
                      if(!(match_string(j_19, "import")))
                        {
                          _fail(t);
                        }
                    }
                }
              return(t);
            }
            ATerm k_2 (ATerm t)
            {
              ATerm o_14;
              o_14 = t;
              {
                ATerm k_19 = NULL;
                ATerm l_19 = NULL;
                l_19 = t;
                if(((k_19 != NULL) && (k_19 != l_19)))
                  _fail(l_19);
                else
                  k_19 = l_19;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATempty, not_null(k_19)));
                  t = extend_config_0(t);
                }
              }
              t = o_14;
              return(t);
            }
            ATerm l_2 (ATerm t)
            {
              t = term_p_14;
              return(t);
            }
            t = ArgOption_3(t, i_2, k_2, l_2);
            LocalPopChoice(n_14);
          }
        else
          {
            t = k_14;
            {
              ATerm r_14 = t;
              int u_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_2 (ATerm t)
                  {
                    ATerm m_19 = NULL;
                    m_19 = t;
                    r_18 :
                    if(!(match_string(m_19, "r")))
                      {
                        if(!(match_string(m_19, "reg")))
                          {
                            if(!(match_string(m_19, "register")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm n_2 (ATerm t)
                  {
                    ATerm v_14;
                    v_14 = t;
                    {
                      ATerm n_19 = NULL;
                      ATerm o_19 = NULL;
                      o_19 = t;
                      if(((n_19 != NULL) && (n_19 != o_19)))
                        _fail(o_19);
                      else
                        n_19 = o_19;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_w_14, not_null(n_19));
                        t = set_config_0(t);
                      }
                    }
                    t = v_14;
                    return(t);
                  }
                  ATerm o_2 (ATerm t)
                  {
                    t = term_b_15;
                    return(t);
                  }
                  t = Option_3(t, m_2, n_2, o_2);
                  LocalPopChoice(u_14);
                }
              else
                {
                  t = r_14;
                  {
                    ATerm c_15 = t;
                    int d_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_2 (ATerm t)
                        {
                          ATerm p_19 = NULL;
                          p_19 = t;
                          t_18 :
                          if(!(match_string(p_19, "-t")))
                            {
                              if(!(match_string(p_19, "--tool")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm b_3 (ATerm t)
                        {
                          ATerm e_15;
                          e_15 = t;
                          {
                            ATerm q_19 = NULL;
                            ATerm r_19 = NULL;
                            r_19 = t;
                            if(((q_19 != NULL) && (q_19 != r_19)))
                              _fail(r_19);
                            else
                              q_19 = r_19;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATempty, not_null(q_19)));
                              t = extend_config_0(t);
                            }
                          }
                          t = e_15;
                          return(t);
                        }
                        ATerm c_3 (ATerm t)
                        {
                          t = term_k_15;
                          return(t);
                        }
                        t = ArgOption_3(t, q_2, b_3, c_3);
                        LocalPopChoice(d_15);
                      }
                    else
                      {
                        t = c_15;
                        {
                          ATerm l_15 = t;
                          int o_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_3 (ATerm t)
                              {
                                ATerm s_19 = NULL;
                                s_19 = t;
                                w_18 :
                                if(!(match_string(s_19, "-l")))
                                  {
                                    if(!(match_string(s_19, "--location")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm e_3 (ATerm t)
                              {
                                ATerm p_15;
                                p_15 = t;
                                {
                                  ATerm t_19 = NULL;
                                  ATerm u_19 = NULL;
                                  u_19 = t;
                                  if(((t_19 != NULL) && (t_19 != u_19)))
                                    _fail(u_19);
                                  else
                                    t_19 = u_19;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(t_19));
                                    t = set_config_0(t);
                                  }
                                }
                                t = p_15;
                                return(t);
                              }
                              ATerm h_3 (ATerm t)
                              {
                                t = term_r_15;
                                return(t);
                              }
                              t = ArgOption_3(t, d_3, e_3, h_3);
                              LocalPopChoice(o_15);
                            }
                          else
                            {
                              t = l_15;
                              {
                                ATerm s_15 = t;
                                int t_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_3 (ATerm t)
                                    {
                                      ATerm v_19 = NULL;
                                      v_19 = t;
                                      y_18 :
                                      if(!(match_string(v_19, "-V")))
                                        {
                                          if(!(match_string(v_19, "--Version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm j_3 (ATerm t)
                                    {
                                      ATerm v_15;
                                      v_15 = t;
                                      {
                                        ATerm w_19 = NULL;
                                        ATerm x_19 = NULL;
                                        x_19 = t;
                                        if(((w_19 != NULL) && (w_19 != x_19)))
                                          _fail(x_19);
                                        else
                                          w_19 = x_19;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_e_6, not_null(w_19));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = v_15;
                                      return(t);
                                    }
                                    ATerm m_3 (ATerm t)
                                    {
                                      t = term_w_15;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, i_3, j_3, m_3);
                                    LocalPopChoice(t_15);
                                  }
                                else
                                  {
                                    t = s_15;
                                    {
                                      ATerm x_15 = t;
                                      int y_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_3 (ATerm t)
                                          {
                                            ATerm y_19 = NULL;
                                            y_19 = t;
                                            a_19 :
                                            if(!(match_string(y_19, "q")))
                                              {
                                                if(!(match_string(y_19, "query")))
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            return(t);
                                          }
                                          ATerm p_3 (ATerm t)
                                          {
                                            ATerm z_15;
                                            z_15 = t;
                                            {
                                              ATerm z_19 = NULL;
                                              ATerm a_20 = NULL;
                                              a_20 = t;
                                              if(((z_19 != NULL) && (z_19 != a_20)))
                                                _fail(a_20);
                                              else
                                                z_19 = a_20;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, term_h_16, not_null(z_19));
                                                t = set_config_0(t);
                                              }
                                            }
                                            t = z_15;
                                            return(t);
                                          }
                                          ATerm q_3 (ATerm t)
                                          {
                                            t = term_i_16;
                                            return(t);
                                          }
                                          t = Option_3(t, o_3, p_3, q_3);
                                          LocalPopChoice(y_15);
                                        }
                                      else
                                        {
                                          t = x_15;
                                          {
                                            ATerm j_16 = t;
                                            int m_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_3 (ATerm t)
                                                {
                                                  ATerm g_20 = NULL;
                                                  g_20 = t;
                                                  c_19 :
                                                  if(!(match_string(g_20, "-a")))
                                                    {
                                                      if(!(match_string(g_20, "--all")))
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  return(t);
                                                }
                                                ATerm w_3 (ATerm t)
                                                {
                                                  ATerm n_16;
                                                  n_16 = t;
                                                  {
                                                    t = term_p_16;
                                                    t = set_config_0(t);
                                                  }
                                                  t = n_16;
                                                  return(t);
                                                }
                                                ATerm x_3 (ATerm t)
                                                {
                                                  t = term_u_16;
                                                  return(t);
                                                }
                                                t = Option_3(t, v_3, w_3, x_3);
                                                LocalPopChoice(m_16);
                                              }
                                            else
                                              {
                                                t = j_16;
                                                {
                                                  ATerm v_16 = t;
                                                  int w_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_3 (ATerm t)
                                                      {
                                                        ATerm h_20 = NULL;
                                                        h_20 = t;
                                                        d_19 :
                                                        if(!(match_string(h_20, "-L")))
                                                          {
                                                            if(!(match_string(h_20, "--Location")))
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm z_3 (ATerm t)
                                                      {
                                                        ATerm x_16;
                                                        x_16 = t;
                                                        {
                                                          t = term_y_16;
                                                          t = set_config_0(t);
                                                        }
                                                        t = x_16;
                                                        return(t);
                                                      }
                                                      ATerm h_4 (ATerm t)
                                                      {
                                                        t = term_z_16;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, y_3, z_3, h_4);
                                                      LocalPopChoice(w_16);
                                                    }
                                                  else
                                                    {
                                                      t = v_16;
                                                      {
                                                        ATerm i_4 (ATerm t)
                                                        {
                                                          ATerm i_20 = NULL;
                                                          i_20 = t;
                                                          e_19 :
                                                          if(!(match_string(i_20, "--verbose")))
                                                            {
                                                              _fail(t);
                                                            }
                                                          return(t);
                                                        }
                                                        ATerm m_4 (ATerm t)
                                                        {
                                                          ATerm a_17;
                                                          a_17 = t;
                                                          {
                                                            ATerm j_20 = NULL;
                                                            ATerm k_20 = NULL;
                                                            t = string_to_int_0(t);
                                                            {
                                                              k_20 = t;
                                                              if(((j_20 != NULL) && (j_20 != k_20)))
                                                                _fail(k_20);
                                                              else
                                                                j_20 = k_20;
                                                            }
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__2, term_i_6, not_null(j_20));
                                                              t = set_config_0(t);
                                                            }
                                                          }
                                                          t = a_17;
                                                          return(t);
                                                        }
                                                        ATerm n_4 (ATerm t)
                                                        {
                                                          t = term_e_17;
                                                          return(t);
                                                        }
                                                        t = ArgOption_3(t, i_4, m_4, n_4);
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
  ATerm x_20 = NULL;
  x_20 = t;
  t = SSL_table_destroy(not_null(x_20));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  a_21 :
  if(((ATgetType(b_21) == AT_LIST) && ATisEmpty(b_21)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
        {
          c_21 = ATgetFirst((ATermList) b_21);
          d_21 = (ATerm) ATgetNext((ATermList) b_21);
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
  ATerm h_17;
  h_17 = t;
  {
    ATerm g_21 = NULL;
    ATerm j_21 = NULL;
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        {
          ATerm h_21 = NULL;
          ATerm i_21 = NULL;
          i_21 = t;
          if(((h_21 != NULL) && (h_21 != i_21)))
            _fail(i_21);
          else
            h_21 = i_21;
          t = (ATerm) ATinsert(ATempty, not_null(h_21));
        }
      }
    {
      j_21 = t;
      if(((g_21 != NULL) && (g_21 != j_21)))
        _fail(j_21);
      else
        g_21 = j_21;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, not_null(g_21));
      t = printnl_0(t);
    }
  }
  t = h_17;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_17), term_n_17);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm m_21 (ATerm t)
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = Cons_2(t, u_65, m_21);
      }
    return(t);
  }
  t = m_21(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  v_21 = t;
  s_21 :
  if(((ATgetType(v_21) == AT_LIST) && !(ATisEmpty(v_21))))
    {
      t_21 = ATgetFirst((ATermList) v_21);
      u_21 = (ATerm) ATgetNext((ATermList) v_21);
      {
        ATerm y_21 = NULL;
        t = not_null(u_21);
        {
          ATerm w_17;
          w_17 = t;
          {
            ATerm z_21 = NULL,b_22 = NULL,d_22 = NULL;
            ATerm x_17;
            x_17 = t;
            {
              ATerm a_22 = NULL;
              t = j_0(t);
              {
                a_22 = t;
                if(((z_21 != NULL) && (z_21 != a_22)))
                  _fail(a_22);
                else
                  z_21 = a_22;
              }
            }
            t = x_17;
            {
              ATerm c_22 = NULL;
              t = not_null(t_21);
              {
                t = i_0(t);
                {
                  c_22 = t;
                  if(((b_22 != NULL) && (b_22 != c_22)))
                    _fail(c_22);
                  else
                    b_22 = c_22;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_21)), not_null(b_22));
                {
                  d_22 = t;
                  if(((y_21 != NULL) && (y_21 != d_22)))
                    _fail(d_22);
                  else
                    y_21 = d_22;
                }
              }
            }
          }
          t = w_17;
          {
            ATerm o_4 (ATerm t)
            {
              t = not_null(y_21);
              return(t);
            }
            t = reverse_acc_2(t, i_0, o_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_21) == AT_LIST) && ATisEmpty(v_21)))
        {
          {
            t = term_o_16;
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
  ATerm p_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_18), term_z_17), term_y_17);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_57 (ATerm))
{
  ATerm o_22 = NULL,p_22 = NULL;
  o_22 = t;
  n_22 :
  if(match_cons(o_22, sym_Program_1))
    {
      p_22 = ATgetArgument(o_22, 0);
      {
        ATerm s_22 = NULL,u_22 = NULL;
        ATerm t_22 = NULL;
        t = SSLgetAnnotations(not_null(o_22));
        {
          t_22 = t;
          if(((s_22 != NULL) && (s_22 != t_22)))
            _fail(t_22);
          else
            s_22 = t_22;
        }
        {
          t = not_null(p_22);
          {
            ATerm w_22 = NULL;
            t = i_57(t);
            {
              u_22 = t;
              {
                ATerm x_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_22)), not_null(s_22));
                {
                  x_22 = t;
                  if(((w_22 != NULL) && (w_22 != x_22)))
                    _fail(x_22);
                  else
                    w_22 = x_22;
                }
                t = not_null(w_22);
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
  ATerm g_23 = NULL;
  ATerm f_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_23 = NULL;
      t = term_l_18;
      {
        t = get_config_0(t);
        {
          h_23 = t;
          if(((g_23 != NULL) && (g_23 != h_23)))
            _fail(h_23);
          else
            g_23 = h_23;
        }
      }
      LocalPopChoice(k_18);
    }
  else
    {
      t = f_18;
      {
        ATerm q_4 (ATerm t)
        {
          ATerm r_4 (ATerm t)
          {
            ATerm i_23 = NULL;
            i_23 = t;
            if(((g_23 != NULL) && (g_23 != i_23)))
              _fail(i_23);
            else
              g_23 = i_23;
            return(t);
          }
          t = Program_1(t, r_4);
          return(t);
        }
        t = fetch_1(t, q_4);
      }
    }
  {
    ATerm m_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 (ATerm t)
        {
          t = not_null(g_23);
          return(t);
        }
        t = short_description_1(t, s_4);
        t = echo_0(t);
        LocalPopChoice(o_18);
      }
    else
      {
        t = m_18;
        {
        }
      }
    {
      t = term_q_18;
      {
        t = echo_0(t);
        {
          t = term_v_18;
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
                ATerm x_4 (ATerm t)
                {
                  ATerm j_23 = NULL;
                  ATerm k_23 = NULL;
                  k_23 = t;
                  if(((j_23 != NULL) && (j_23 != k_23)))
                    _fail(k_23);
                  else
                    j_23 = k_23;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_23)), term_x_18);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, x_4);
                {
                  ATerm z_18 = t;
                  int b_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_23 = NULL;
                      ATerm m_23 = NULL;
                      ATerm y_4 (ATerm t)
                      {
                        t = not_null(g_23);
                        return(t);
                      }
                      t = long_description_1(t, y_4);
                      {
                        m_23 = t;
                        if(((l_23 != NULL) && (l_23 != m_23)))
                          _fail(m_23);
                        else
                          l_23 = m_23;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(l_23)), term_g_7);
                        t = echo_0(t);
                      }
                      LocalPopChoice(b_19);
                    }
                  else
                    {
                      t = z_18;
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
ATerm printnl_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym__2))
    {
      u_23 = ATgetArgument(t_23, 0);
      v_23 = ATgetArgument(t_23, 1);
      {
        ATerm f_19;
        f_19 = t;
        t = SSL_printnl(not_null(u_23), not_null(v_23));
        t = f_19;
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
  ATerm b_20;
  b_20 = t;
  {
    ATerm a_24 = NULL;
    ATerm b_24 = NULL;
    b_24 = t;
    if(((a_24 != NULL) && (a_24 != b_24)))
      _fail(b_24);
    else
      a_24 = b_24;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_6, (ATerm) ATinsert(ATempty, not_null(a_24)));
      t = printnl_0(t);
    }
  }
  t = b_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm c_20;
  c_20 = t;
  {
    t = t_76(t);
    t = debug_0(t);
  }
  t = c_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_57 (ATerm))
{
  ATerm i_24 = NULL,j_24 = NULL;
  i_24 = t;
  h_24 :
  if(match_cons(i_24, sym_Undefined_1))
    {
      j_24 = ATgetArgument(i_24, 0);
      {
        ATerm m_24 = NULL,o_24 = NULL;
        ATerm n_24 = NULL;
        t = SSLgetAnnotations(not_null(i_24));
        {
          n_24 = t;
          if(((m_24 != NULL) && (m_24 != n_24)))
            _fail(n_24);
          else
            m_24 = n_24;
        }
        {
          t = not_null(j_24);
          {
            ATerm q_24 = NULL;
            t = j_57(t);
            {
              o_24 = t;
              {
                ATerm r_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_24)), not_null(m_24));
                {
                  r_24 = t;
                  if(((q_24 != NULL) && (q_24 != r_24)))
                    _fail(r_24);
                  else
                    q_24 = r_24;
                }
                t = not_null(q_24);
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
ATerm fetch_1 (ATerm t, ATerm d_66 (ATerm))
{
  ATerm w_24 (ATerm t)
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_66, _id);
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = Cons_2(t, _id, w_24);
      }
    return(t);
  }
  t = w_24(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_79 (ATerm))
{
  t = fetch_1(t, p_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  a_25 :
  if(match_cons(b_25, sym_Help_0))
    {
      ATerm d_25 = NULL,f_25 = NULL;
      ATerm f_20;
      f_20 = t;
      {
        ATerm e_25 = NULL;
        t = SSLgetAnnotations(not_null(b_25));
        {
          e_25 = t;
          if(((d_25 != NULL) && (d_25 != e_25)))
            _fail(e_25);
          else
            d_25 = e_25;
        }
      }
      t = f_20;
      {
        ATerm g_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_25));
        {
          g_25 = t;
          if(((f_25 != NULL) && (f_25 != g_25)))
            _fail(g_25);
          else
            f_25 = g_25;
        }
        t = not_null(f_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_58 (ATerm))
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_58(t);
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  l_25 :
  if(match_cons(m_25, sym__2))
    {
      n_25 = ATgetArgument(m_25, 0);
      o_25 = ATgetArgument(m_25, 1);
      t = SSL_table_get(not_null(n_25), not_null(o_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym__3))
    {
      b_26 = ATgetArgument(a_26, 0);
      c_26 = ATgetArgument(a_26, 1);
      d_26 = ATgetArgument(a_26, 2);
      {
        ATerm n_20;
        n_20 = t;
        {
          ATerm h_26 = NULL;
          ATerm i_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_26), not_null(c_26));
          {
            ATerm o_20 = t;
            int p_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_20);
              }
            else
              {
                t = o_20;
                t = (ATerm) ATempty;
              }
            {
              i_26 = t;
              if(((h_26 != NULL) && (h_26 != i_26)))
                _fail(i_26);
              else
                h_26 = i_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_26), not_null(c_26), (ATerm) ATinsert(CheckATermList(not_null(h_26)), not_null(d_26)));
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
ATerm register_usage_1 (ATerm t, ATerm u_80 (ATerm))
{
  ATerm m_26 = NULL;
  ATerm n_26 = NULL;
  t = term_o_16;
  {
    t = u_80(t);
    {
      n_26 = t;
      if(((m_26 != NULL) && (m_26 != n_26)))
        _fail(n_26);
      else
        m_26 = n_26;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_18, term_u_18, not_null(m_26));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  s_26 :
  if(match_string(t_26, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
        {
          u_26 = ATgetFirst((ATermList) t_26);
          v_26 = (ATerm) ATgetNext((ATermList) t_26);
          {
            ATerm y_26 = NULL;
            ATerm q_20;
            q_20 = t;
            {
              t = not_null(u_26);
              t = a_0(t);
            }
            t = q_20;
            {
              ATerm z_26 = NULL;
              t = term_o_16;
              {
                t = d_0(t);
                {
                  z_26 = t;
                  if(((y_26 != NULL) && (y_26 != z_26)))
                    _fail(z_26);
                  else
                    y_26 = z_26;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_26)), not_null(y_26));
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
  ATerm c_5 (ATerm t)
  {
    ATerm e_27 = NULL;
    e_27 = t;
    d_27 :
    if(!(match_string(e_27, "--help")))
      {
        if(!(match_string(e_27, "-h")))
          {
            if(!(match_string(e_27, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    t = term_s_20;
    {
      t = set_config_0(t);
      t = term_t_20;
    }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_u_20;
    return(t);
  }
  t = Option_3(t, c_5, f_5, g_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  g_27 :
  if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
    {
      i_27 = ATgetFirst((ATermList) h_27);
      j_27 = (ATerm) ATgetNext((ATermList) h_27);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_27)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_27)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_52 (ATerm), ATerm h_52 (ATerm))
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t_27 = t;
  s_27 :
  if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
    {
      u_27 = ATgetFirst((ATermList) t_27);
      v_27 = (ATerm) ATgetNext((ATermList) t_27);
      {
        ATerm z_27 = NULL,b_28 = NULL;
        ATerm a_28 = NULL;
        t = SSLgetAnnotations(not_null(t_27));
        {
          a_28 = t;
          if(((z_27 != NULL) && (z_27 != a_28)))
            _fail(a_28);
          else
            z_27 = a_28;
        }
        {
          t = not_null(u_27);
          {
            ATerm d_28 = NULL;
            t = g_52(t);
            {
              b_28 = t;
              {
                t = not_null(v_27);
                {
                  ATerm f_28 = NULL;
                  t = h_52(t);
                  {
                    d_28 = t;
                    {
                      ATerm g_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_28)), not_null(b_28)), not_null(z_27));
                      {
                        g_28 = t;
                        if(((f_28 != NULL) && (f_28 != g_28)))
                          _fail(g_28);
                        else
                          f_28 = g_28;
                      }
                      t = not_null(f_28);
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
  ATerm q_28 = NULL;
  q_28 = t;
  p_28 :
  if(((ATgetType(q_28) == AT_LIST) && ATisEmpty(q_28)))
    {
      {
        ATerm s_28 = NULL,u_28 = NULL;
        ATerm v_20;
        v_20 = t;
        {
          ATerm t_28 = NULL;
          t = SSLgetAnnotations(not_null(q_28));
          {
            t_28 = t;
            if(((s_28 != NULL) && (s_28 != t_28)))
              _fail(t_28);
            else
              s_28 = t_28;
          }
        }
        t = v_20;
        {
          ATerm v_28 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_28));
          {
            v_28 = t;
            if(((u_28 != NULL) && (u_28 != v_28)))
              _fail(v_28);
            else
              u_28 = v_28;
          }
          t = not_null(u_28);
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
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  b_29 = t;
  a_29 :
  if(match_cons(b_29, sym__2))
    {
      c_29 = ATgetArgument(b_29, 0);
      d_29 = ATgetArgument(b_29, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_8, not_null(c_29), not_null(d_29));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm w_20;
  w_20 = t;
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_21;
        t = s_80(t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        {
        }
      }
  }
  t = w_20;
  {
    ATerm h_5 (ATerm t)
    {
      ATerm l_29 = NULL;
      ATerm f_21;
      f_21 = t;
      {
        ATerm j_29 = NULL;
        ATerm k_29 = NULL;
        k_29 = t;
        if(((j_29 != NULL) && (j_29 != k_29)))
          _fail(k_29);
        else
          j_29 = k_29;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_18, not_null(j_29));
          t = set_config_0(t);
        }
      }
      t = f_21;
      {
        ATerm m_29 = NULL;
        m_29 = t;
        if(((l_29 != NULL) && (l_29 != m_29)))
          _fail(m_29);
        else
          l_29 = m_29;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_29));
      }
      return(t);
    }
    ATerm i_5 (ATerm t)
    {
      ATerm k_21 = t;
      int l_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_21);
            }
          else
            {
              t = n_21;
              {
                t = s_80(t);
                t = Cons_2(t, _id, i_5);
              }
            }
          LocalPopChoice(l_21);
        }
      else
        {
          t = k_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_5, i_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
  ATerm p_21;
  p_21 = t;
  {
    ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
    v_29 = t;
    r_29 :
    if(match_cons(v_29, sym__3))
      {
        w_29 = ATgetArgument(v_29, 0);
        x_29 = ATgetArgument(v_29, 1);
        y_29 = ATgetArgument(v_29, 2);
        {
          if(((s_29 != NULL) && (s_29 != w_29)))
            _fail(w_29);
          else
            s_29 = w_29;
          {
            if(((t_29 != NULL) && (t_29 != x_29)))
              _fail(x_29);
            else
              t_29 = x_29;
            {
              if(((u_29 != NULL) && (u_29 != y_29)))
                _fail(y_29);
              else
                u_29 = y_29;
              t = SSL_table_put(not_null(s_29), not_null(t_29), not_null(u_29));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm b_30 = NULL;
  ATerm q_21;
  q_21 = t;
  {
    t = term_r_21;
    t = table_put_0(t);
  }
  t = q_21;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm w_21 = t;
      int x_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_80(t);
          LocalPopChoice(x_21);
        }
      else
        {
          t = w_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_5);
    {
      ATerm e_22 = t;
      int f_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_22;
          g_22 = t;
          {
            ATerm h_22 = t;
            int i_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_r_20;
                t = get_config_0(t);
                LocalPopChoice(i_22);
              }
            else
              {
                t = h_22;
                t = fetch_1(t, Help_0);
              }
          }
          t = g_22;
          {
            t = system_usage_0(t);
            {
              t = term_j_22;
              t = exit_0(t);
            }
          }
          LocalPopChoice(f_22);
        }
      else
        {
          t = e_22;
          {
            ATerm k_22 = t;
            int l_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_5 (ATerm t)
                {
                  ATerm l_5 (ATerm t)
                  {
                    ATerm c_30 = NULL;
                    c_30 = t;
                    if(((b_30 != NULL) && (b_30 != c_30)))
                      _fail(c_30);
                    else
                      b_30 = c_30;
                    return(t);
                  }
                  t = Undefined_1(t, l_5);
                  return(t);
                }
                t = fetch_1(t, k_5);
                {
                  ATerm m_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_30)), term_m_22);
                    return(t);
                  }
                  t = say_1(t, m_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_o_9;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(l_22);
              }
            else
              {
                t = k_22;
                {
                }
              }
          }
        }
      {
        ATerm q_22;
        q_22 = t;
        {
          t = term_s_18;
          t = table_destroy_0(t);
        }
        t = q_22;
      }
    }
  }
  return(t);
}
ATerm xtc_0 (ATerm t)
{
  ATerm r_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_options_1(t, xtc_options_0);
      {
        t = xtc_location_0(t);
        {
          ATerm n_5 (ATerm t)
          {
            ATerm s_5 (ATerm t)
            {
              t = term_y_22;
              return(t);
            }
            t = debug_1(t, s_5);
            return(t);
          }
          t = if_verbose2_1(t, n_5);
          {
            t = xtc_read_0(t);
            {
              ATerm z_22 = t;
              int a_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_23 = t;
                  int c_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_w_14;
                      {
                        t = get_config_0(t);
                        t = xtc_register_0(t);
                      }
                      LocalPopChoice(c_23);
                    }
                  else
                    {
                      t = b_23;
                      {
                        t = term_x_8;
                        {
                          t = get_config_0(t);
                          t = register_import_0(t);
                        }
                      }
                    }
                  t = xtc_store_0(t);
                  LocalPopChoice(a_23);
                }
              else
                {
                  t = z_22;
                  {
                    t = term_h_16;
                    {
                      t = get_config_0(t);
                      {
                        ATerm d_23 = t;
                        int e_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = all_query_0(t);
                            LocalPopChoice(e_23);
                          }
                        else
                          {
                            t = d_23;
                            t = tool_query_0(t);
                          }
                      }
                    }
                  }
                }
              {
                t = term_j_22;
                t = exit_0(t);
              }
            }
          }
        }
      }
      LocalPopChoice(v_22);
    }
  else
    {
      t = r_22;
      {
        ATerm t_5 (ATerm t)
        {
          t = term_f_23;
          return(t);
        }
        t = debug_1(t, t_5);
      }
    }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = xtc_0(t);
  return(t);
}