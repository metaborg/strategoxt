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
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_j_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_j_25;
ATerm term_a_24;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_j_23;
ATerm term_h_23;
ATerm term_b_23;
ATerm term_a_22;
ATerm term_k_21;
ATerm term_a_21;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_y_19;
ATerm term_p_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_x_18;
ATerm term_i_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_a_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_i_14;
ATerm term_c_14;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_c_13;
ATerm term_y_12;
ATerm term_p_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_c_8;
void init_constant_terms (void)
{
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_x_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_x_14);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_x_14);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_g_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_t_17, term_x_14);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__3, term_d_17, term_g_17, (ATerm) ATempty);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_l_11);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_q_23);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
}
ATerm version_query_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm s_85 (ATerm));
ATerm tool_query_0 (ATerm);
ATerm list_tool_0 (ATerm);
ATerm Tool_1 (ATerm, ATerm m_58 (ATerm));
ATerm all_query_0 (ATerm);
ATerm repository_query_0 (ATerm);
ATerm xtc_query_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm xtc_store_0 (ATerm);
ATerm register_import_0 (ATerm);
ATerm table_union_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_85 (ATerm));
ATerm xtc_register_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_85 (ATerm));
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
ATerm Program_1 (ATerm, ATerm b_58 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_58 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_80 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_81 (ATerm));
ATerm parse_options_1 (ATerm, ATerm c_81 (ATerm));
ATerm xtc_main_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm print_0 (ATerm);
ATerm xtc_xtc_get_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_77 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm u_85 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm v_73 (ATerm));
ATerm repeat_1 (ATerm, ATerm s_59 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_77 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm t_85 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm v_85 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm r_66 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm f_72 (ATerm), ATerm g_72 (ATerm));
ATerm union_1 (ATerm, ATerm b_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm l_82 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm table_put_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_66 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm q_51 (ATerm), ATerm r_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_52 (ATerm), ATerm a_53 (ATerm));
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm i_66 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_58 (ATerm));
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
  ATerm b_8;
  b_8 = t;
  {
    ATerm a_2 = NULL;
    t = term_c_8;
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
  t = b_8;
  {
    ATerm b_0 (ATerm t)
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
    t = _2(t, b_0, e_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(b_2)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(z_1), not_null(c_2))));
      t = list_tool_0(t);
    }
  }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm s_85 (ATerm))
{
  ATerm h_0 (ATerm t)
  {
    ATerm d_8;
    d_8 = t;
    {
      ATerm m_2 = NULL;
      ATerm n_2 = NULL;
      t = term_e_8;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_2), term_f_8);
        t = geq_0(t);
      }
    }
    t = d_8;
    t = s_85(t);
    return(t);
  }
  t = try_1(t, h_0);
  return(t);
}
ATerm tool_query_0 (ATerm t)
{
  ATerm r_2 = NULL;
  t = term_g_8;
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
            ATerm l_8 = t;
            int m_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_2 = NULL;
                ATerm p_0 (ATerm t)
                {
                  ATerm q_0 (ATerm t)
                  {
                    t = term_r_8;
                    return(t);
                  }
                  t = debug_1(t, q_0);
                  return(t);
                }
                t = if_verbose3_1(t, p_0);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_2)));
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
                            ATerm t_8 = t;
                            int v_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = version_query_0(t);
                                ;
                                LocalPopChoice(v_8);
                              }
                            else
                              {
                                t = t_8;
                                t = list_tool_0(t);
                              }
                          }
                        }
                      }
                    }
                  }
                }
                ;
                LocalPopChoice(m_8);
              }
            else
              {
                t = l_8;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), term_z_8), not_null(s_2)));
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
                      ATerm d_9 = t;
                      int f_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_h_9;
                          {
                            t = get_config_0(t);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATempty, term_b_9), not_null(k_3)));
                              t = print_0(t);
                            }
                          }
                          ;
                          LocalPopChoice(f_9);
                        }
                      else
                        {
                          t = d_9;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(k_3)), term_o_10), not_null(j_3)), term_m_9), not_null(e_3)));
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
ATerm Tool_1 (ATerm t, ATerm m_58 (ATerm))
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
            t = m_58(t);
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
  t = term_p_10;
  {
    t = get_config_0(t);
    {
      t = xtc_import_0(t);
      {
        t = term_s_8;
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
  t = term_q_10;
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
          t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(j_4)), term_r_10));
          t = print_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm xtc_query_0 (ATerm t)
{
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = repository_query_0(t);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = all_query_0(t);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
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
ATerm xtc_store_0 (ATerm t)
{
  ATerm w_4 = NULL,y_4 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      t = term_w_10;
      return(t);
    }
    t = say_1(t, w_0);
    return(t);
  }
  t = if_verbose1_1(t, v_0);
  {
    ATerm y_10;
    y_10 = t;
    {
      ATerm x_4 = NULL;
      t = term_z_10;
      {
        t = get_config_0(t);
        {
          x_4 = t;
          if(((w_4 != NULL) && (w_4 != x_4)))
            _fail(x_4);
          else
            w_4 = x_4;
        }
      }
    }
    t = y_10;
    {
      ATerm z_4 = NULL;
      t = term_s_8;
      {
        t = table_getlist_0(t);
        {
          z_4 = t;
          if(((y_4 != NULL) && (y_4 != z_4)))
            _fail(z_4);
          else
            y_4 = z_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), not_null(y_4));
        t = WriteToTextFile_0(t);
      }
    }
  }
  return(t);
}
ATerm register_import_0 (ATerm t)
{
  ATerm e_5 = NULL;
  t = term_e_11;
  {
    ATerm g_5 = NULL;
    t = get_config_0(t);
    {
      e_5 = t;
      {
        ATerm x_0 (ATerm t)
        {
          ATerm y_0 (ATerm t)
          {
            t = term_f_11;
            return(t);
          }
          t = debug_1(t, y_0);
          return(t);
        }
        t = if_verbose2_1(t, x_0);
        {
          t = term_e_11;
          {
            t = get_config_0(t);
            {
              g_5 = t;
              {
                ATerm z_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = term_k_11;
                    return(t);
                  }
                  t = debug_1(t, a_1);
                  return(t);
                }
                t = if_verbose5_1(t, z_0);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_s_8, term_l_11, not_null(g_5));
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
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  o_5 = t;
  n_5 :
  if(match_cons(o_5, sym__3))
    {
      p_5 = ATgetArgument(o_5, 0);
      q_5 = ATgetArgument(o_5, 1);
      r_5 = ATgetArgument(o_5, 2);
      {
        ATerm m_11;
        m_11 = t;
        {
          ATerm v_5 = NULL;
          ATerm w_5 = NULL,y_5 = NULL;
          ATerm x_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), not_null(q_5));
          {
            ATerm n_11 = t;
            int o_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(o_11);
              }
            else
              {
                t = n_11;
                t = (ATerm) ATempty;
              }
            {
              x_5 = t;
              if(((w_5 != NULL) && (w_5 != x_5)))
                _fail(x_5);
              else
                w_5 = x_5;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_5), not_null(w_5));
            {
              t = union_0(t);
              {
                y_5 = t;
                if(((v_5 != NULL) && (v_5 != y_5)))
                  _fail(y_5);
                else
                  v_5 = y_5;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_5), not_null(q_5), not_null(v_5));
            t = set_0(t);
          }
        }
        t = m_11;
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
ATerm if_verbose1_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm p_11;
    p_11 = t;
    {
      ATerm d_6 = NULL;
      ATerm e_6 = NULL;
      t = term_e_8;
      {
        t = get_config_0(t);
        {
          e_6 = t;
          if(((d_6 != NULL) && (d_6 != e_6)))
            _fail(e_6);
          else
            d_6 = e_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), term_q_11);
        t = geq_0(t);
      }
    }
    t = p_11;
    t = q_85(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm xtc_register_0 (ATerm t)
{
  ATerm m_6 = NULL;
  t = term_g_8;
  {
    ATerm o_6 = NULL;
    t = get_config_0(t);
    {
      m_6 = t;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            t = term_v_11;
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
              t = term_w_11;
              return(t);
            }
            t = debug_1(t, f_1);
            return(t);
          }
          t = if_verbose2_1(t, e_1);
          {
            t = term_c_8;
            {
              ATerm q_6 = NULL;
              t = get_config_0(t);
              {
                o_6 = t;
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm h_1 (ATerm t)
                    {
                      t = term_d_12;
                      return(t);
                    }
                    t = debug_1(t, h_1);
                    return(t);
                  }
                  t = if_verbose2_1(t, g_1);
                  {
                    t = term_h_9;
                    {
                      t = get_config_0(t);
                      {
                        q_6 = t;
                        {
                          ATerm i_1 (ATerm t)
                          {
                            ATerm j_1 (ATerm t)
                            {
                              t = term_e_12;
                              return(t);
                            }
                            t = debug_1(t, j_1);
                            return(t);
                          }
                          t = if_verbose2_1(t, i_1);
                          {
                            t = not_null(m_6);
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm s_6 = NULL,u_6 = NULL;
                                ATerm f_12;
                                f_12 = t;
                                {
                                  ATerm t_6 = NULL;
                                  t_6 = t;
                                  if(((s_6 != NULL) && (s_6 != t_6)))
                                    _fail(t_6);
                                  else
                                    s_6 = t_6;
                                }
                                t = f_12;
                                {
                                  ATerm v_6 = NULL,x_6 = NULL;
                                  ATerm w_6 = NULL;
                                  w_6 = t;
                                  if(((v_6 != NULL) && (v_6 != w_6)))
                                    _fail(w_6);
                                  else
                                    v_6 = w_6;
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_6)), term_g_12), not_null(q_6));
                                    {
                                      t = concat_strings_0(t);
                                      {
                                        x_6 = t;
                                        if(((u_6 != NULL) && (u_6 != x_6)))
                                          _fail(x_6);
                                        else
                                          u_6 = x_6;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, term_s_8, (ATerm)ATmakeAppl(sym_Tool_1, not_null(s_6)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(o_6), not_null(u_6))));
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
ATerm if_verbose2_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm h_12;
    h_12 = t;
    {
      ATerm f_7 = NULL;
      ATerm g_7 = NULL;
      t = term_e_8;
      {
        t = get_config_0(t);
        {
          g_7 = t;
          if(((f_7 != NULL) && (f_7 != g_7)))
            _fail(g_7);
          else
            f_7 = g_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_7), term_i_12);
        t = geq_0(t);
      }
    }
    t = h_12;
    t = r_85(t);
    return(t);
  }
  t = try_1(t, l_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm j_7 = NULL;
  j_7 = t;
  t = SSL_string_to_int(not_null(j_7));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
  r_7 = t;
  p_7 :
  if(match_string(r_7, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(r_7) == AT_LIST) && !(ATisEmpty(r_7))))
        {
          s_7 = ATgetFirst((ATermList) r_7);
          t_7 = (ATerm) ATgetNext((ATermList) r_7);
          q_7 :
          if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
            {
              u_7 = ATgetFirst((ATermList) t_7);
              v_7 = (ATerm) ATgetNext((ATermList) t_7);
              {
                ATerm z_7 = NULL;
                ATerm j_12;
                j_12 = t;
                {
                  t = not_null(s_7);
                  t = l_0(t);
                }
                t = j_12;
                {
                  ATerm a_8 = NULL;
                  t = not_null(u_7);
                  {
                    t = m_0(t);
                    {
                      a_8 = t;
                      if(((z_7 != NULL) && (z_7 != a_8)))
                        _fail(a_8);
                      else
                        z_7 = a_8;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_7)), not_null(z_7));
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
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym__2))
    {
      j_8 = ATgetArgument(i_8, 0);
      k_8 = ATgetArgument(i_8, 1);
      {
        ATerm n_8 = NULL;
        ATerm o_8 = NULL,q_8 = NULL;
        ATerm p_8 = NULL;
        t = not_null(j_8);
        {
          ATerm k_12 = t;
          int l_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(l_12);
            }
          else
            {
              t = k_12;
              t = (ATerm) ATempty;
            }
          {
            p_8 = t;
            if(((o_8 != NULL) && (o_8 != p_8)))
              _fail(p_8);
            else
              o_8 = p_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), not_null(o_8));
          {
            t = conc_0(t);
            {
              q_8 = t;
              if(((n_8 != NULL) && (n_8 != q_8)))
                _fail(q_8);
              else
                n_8 = q_8;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_12, not_null(j_8), not_null(n_8));
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
  ATerm q_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm n_9 = NULL;
        n_9 = t;
        u_8 :
        if(!(match_string(n_9, "-r")))
          {
            if(!(match_string(n_9, "--repository")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        ATerm x_12;
        x_12 = t;
        {
          ATerm o_9 = NULL;
          ATerm p_9 = NULL;
          p_9 = t;
          if(((o_9 != NULL) && (o_9 != p_9)))
            _fail(p_9);
          else
            o_9 = p_9;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(o_9));
            t = set_config_0(t);
          }
        }
        t = x_12;
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_y_12;
        return(t);
      }
      t = ArgOption_3(t, m_1, n_1, o_1);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = q_12;
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm q_9 = NULL;
              q_9 = t;
              w_8 :
              if(!(match_string(q_9, "i")))
                {
                  if(!(match_string(q_9, "imp")))
                    {
                      if(!(match_string(q_9, "import")))
                        {
                          _fail(t);
                        }
                    }
                }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm b_13;
              b_13 = t;
              {
                ATerm r_9 = NULL;
                ATerm s_9 = NULL;
                s_9 = t;
                if(((r_9 != NULL) && (r_9 != s_9)))
                  _fail(s_9);
                else
                  r_9 = s_9;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_11, (ATerm) ATinsert(ATempty, not_null(r_9)));
                  t = extend_config_0(t);
                }
              }
              t = b_13;
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              t = term_c_13;
              return(t);
            }
            t = ArgOption_3(t, p_1, q_1, r_1);
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            {
              ATerm d_13 = t;
              int e_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    ATerm t_9 = NULL;
                    t_9 = t;
                    y_8 :
                    if(!(match_string(t_9, "r")))
                      {
                        if(!(match_string(t_9, "reg")))
                          {
                            if(!(match_string(t_9, "register")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm u_1 (ATerm t)
                  {
                    ATerm m_13;
                    m_13 = t;
                    {
                      ATerm u_9 = NULL;
                      ATerm v_9 = NULL;
                      v_9 = t;
                      if(((u_9 != NULL) && (u_9 != v_9)))
                        _fail(v_9);
                      else
                        u_9 = v_9;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_n_13, not_null(u_9));
                        t = set_config_0(t);
                      }
                    }
                    t = m_13;
                    return(t);
                  }
                  ATerm w_1 (ATerm t)
                  {
                    t = term_o_13;
                    return(t);
                  }
                  t = Option_3(t, s_1, u_1, w_1);
                  ;
                  LocalPopChoice(e_13);
                }
              else
                {
                  t = d_13;
                  {
                    ATerm p_13 = t;
                    int q_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_1 (ATerm t)
                        {
                          ATerm w_9 = NULL;
                          w_9 = t;
                          a_9 :
                          if(!(match_string(w_9, "-t")))
                            {
                              if(!(match_string(w_9, "--tool")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm y_1 (ATerm t)
                        {
                          ATerm r_13;
                          r_13 = t;
                          {
                            ATerm x_9 = NULL;
                            ATerm y_9 = NULL;
                            y_9 = t;
                            if(((x_9 != NULL) && (x_9 != y_9)))
                              _fail(y_9);
                            else
                              x_9 = y_9;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATempty, not_null(x_9)));
                              t = extend_config_0(t);
                            }
                          }
                          t = r_13;
                          return(t);
                        }
                        ATerm i_2 (ATerm t)
                        {
                          t = term_s_13;
                          return(t);
                        }
                        t = ArgOption_3(t, x_1, y_1, i_2);
                        ;
                        LocalPopChoice(q_13);
                      }
                    else
                      {
                        t = p_13;
                        {
                          ATerm t_13 = t;
                          int x_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_2 (ATerm t)
                              {
                                ATerm z_9 = NULL;
                                z_9 = t;
                                c_9 :
                                if(!(match_string(z_9, "-l")))
                                  {
                                    if(!(match_string(z_9, "--location")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm k_2 (ATerm t)
                              {
                                ATerm y_13;
                                y_13 = t;
                                {
                                  ATerm a_10 = NULL;
                                  ATerm b_10 = NULL;
                                  b_10 = t;
                                  if(((a_10 != NULL) && (a_10 != b_10)))
                                    _fail(b_10);
                                  else
                                    a_10 = b_10;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_h_9, not_null(a_10));
                                    t = set_config_0(t);
                                  }
                                }
                                t = y_13;
                                return(t);
                              }
                              ATerm l_2 (ATerm t)
                              {
                                t = term_c_14;
                                return(t);
                              }
                              t = ArgOption_3(t, j_2, k_2, l_2);
                              ;
                              LocalPopChoice(x_13);
                            }
                          else
                            {
                              t = t_13;
                              {
                                ATerm f_14 = t;
                                int g_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_2 (ATerm t)
                                    {
                                      ATerm c_10 = NULL;
                                      c_10 = t;
                                      e_9 :
                                      if(!(match_string(c_10, "-V")))
                                        {
                                          if(!(match_string(c_10, "--Version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm p_2 (ATerm t)
                                    {
                                      ATerm h_14;
                                      h_14 = t;
                                      {
                                        ATerm d_10 = NULL;
                                        ATerm e_10 = NULL;
                                        e_10 = t;
                                        if(((d_10 != NULL) && (d_10 != e_10)))
                                          _fail(e_10);
                                        else
                                          d_10 = e_10;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_c_8, not_null(d_10));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = h_14;
                                      return(t);
                                    }
                                    ATerm q_2 (ATerm t)
                                    {
                                      t = term_i_14;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, o_2, p_2, q_2);
                                    ;
                                    LocalPopChoice(g_14);
                                  }
                                else
                                  {
                                    t = f_14;
                                    {
                                      ATerm j_14 = t;
                                      int k_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_2 (ATerm t)
                                          {
                                            ATerm f_10 = NULL;
                                            f_10 = t;
                                            g_9 :
                                            if(!(match_string(f_10, "q")))
                                              {
                                                if(!(match_string(f_10, "query")))
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            return(t);
                                          }
                                          ATerm v_2 (ATerm t)
                                          {
                                            ATerm l_14;
                                            l_14 = t;
                                            {
                                              ATerm g_10 = NULL;
                                              ATerm h_10 = NULL;
                                              h_10 = t;
                                              if(((g_10 != NULL) && (g_10 != h_10)))
                                                _fail(h_10);
                                              else
                                                g_10 = h_10;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, term_o_14, not_null(g_10));
                                                t = set_config_0(t);
                                              }
                                            }
                                            t = l_14;
                                            return(t);
                                          }
                                          ATerm w_2 (ATerm t)
                                          {
                                            t = term_t_14;
                                            return(t);
                                          }
                                          t = Option_3(t, t_2, v_2, w_2);
                                          ;
                                          LocalPopChoice(k_14);
                                        }
                                      else
                                        {
                                          t = j_14;
                                          {
                                            ATerm u_14 = t;
                                            int v_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_2 (ATerm t)
                                                {
                                                  ATerm i_10 = NULL;
                                                  i_10 = t;
                                                  i_9 :
                                                  if(!(match_string(i_10, "-a")))
                                                    {
                                                      if(!(match_string(i_10, "--all")))
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  return(t);
                                                }
                                                ATerm y_2 (ATerm t)
                                                {
                                                  ATerm w_14;
                                                  w_14 = t;
                                                  {
                                                    t = term_d_15;
                                                    t = set_config_0(t);
                                                  }
                                                  t = w_14;
                                                  return(t);
                                                }
                                                ATerm g_3 (ATerm t)
                                                {
                                                  t = term_e_15;
                                                  return(t);
                                                }
                                                t = Option_3(t, x_2, y_2, g_3);
                                                ;
                                                LocalPopChoice(v_14);
                                              }
                                            else
                                              {
                                                t = u_14;
                                                {
                                                  ATerm f_15 = t;
                                                  int i_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_3 (ATerm t)
                                                      {
                                                        ATerm j_10 = NULL;
                                                        j_10 = t;
                                                        j_9 :
                                                        if(!(match_string(j_10, "-L")))
                                                          {
                                                            if(!(match_string(j_10, "--Location")))
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm l_3 (ATerm t)
                                                      {
                                                        ATerm j_15;
                                                        j_15 = t;
                                                        {
                                                          t = term_k_15;
                                                          t = set_config_0(t);
                                                        }
                                                        t = j_15;
                                                        return(t);
                                                      }
                                                      ATerm m_3 (ATerm t)
                                                      {
                                                        t = term_n_15;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, h_3, l_3, m_3);
                                                      ;
                                                      LocalPopChoice(i_15);
                                                    }
                                                  else
                                                    {
                                                      t = f_15;
                                                      {
                                                        ATerm o_15 = t;
                                                        int p_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm n_3 (ATerm t)
                                                            {
                                                              ATerm k_10 = NULL;
                                                              k_10 = t;
                                                              k_9 :
                                                              if(!(match_string(k_10, "-R")))
                                                                {
                                                                  if(!(match_string(k_10, "--Repository")))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm o_3 (ATerm t)
                                                            {
                                                              ATerm q_15;
                                                              q_15 = t;
                                                              {
                                                                t = term_v_15;
                                                                t = set_config_0(t);
                                                              }
                                                              t = q_15;
                                                              return(t);
                                                            }
                                                            ATerm p_3 (ATerm t)
                                                            {
                                                              t = term_w_15;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, n_3, o_3, p_3);
                                                            ;
                                                            LocalPopChoice(p_15);
                                                          }
                                                        else
                                                          {
                                                            t = o_15;
                                                            {
                                                              ATerm q_3 (ATerm t)
                                                              {
                                                                ATerm l_10 = NULL;
                                                                l_10 = t;
                                                                l_9 :
                                                                if(!(match_string(l_10, "--verbose")))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                return(t);
                                                              }
                                                              ATerm r_3 (ATerm t)
                                                              {
                                                                ATerm z_15;
                                                                z_15 = t;
                                                                {
                                                                  ATerm m_10 = NULL;
                                                                  ATerm n_10 = NULL;
                                                                  t = string_to_int_0(t);
                                                                  {
                                                                    n_10 = t;
                                                                    if(((m_10 != NULL) && (m_10 != n_10)))
                                                                      _fail(n_10);
                                                                    else
                                                                      m_10 = n_10;
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym__2, term_e_8, not_null(m_10));
                                                                    t = set_config_0(t);
                                                                  }
                                                                }
                                                                t = z_15;
                                                                return(t);
                                                              }
                                                              ATerm s_3 (ATerm t)
                                                              {
                                                                t = term_a_16;
                                                                return(t);
                                                              }
                                                              t = ArgOption_3(t, q_3, r_3, s_3);
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
  ATerm x_10 = NULL;
  x_10 = t;
  t = SSL_table_destroy(not_null(x_10));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
  b_11 = t;
  a_11 :
  if(((ATgetType(b_11) == AT_LIST) && ATisEmpty(b_11)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_11) == AT_LIST) && !(ATisEmpty(b_11))))
        {
          c_11 = ATgetFirst((ATermList) b_11);
          d_11 = (ATerm) ATgetNext((ATermList) b_11);
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
  ATerm b_16;
  b_16 = t;
  {
    ATerm g_11 = NULL;
    ATerm j_11 = NULL;
    ATerm e_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = e_16;
        {
          ATerm h_11 = NULL;
          ATerm i_11 = NULL;
          i_11 = t;
          if(((h_11 != NULL) && (h_11 != i_11)))
            _fail(i_11);
          else
            h_11 = i_11;
          t = (ATerm) ATinsert(ATempty, not_null(h_11));
        }
      }
    {
      j_11 = t;
      if(((g_11 != NULL) && (g_11 != j_11)))
        _fail(j_11);
      else
        g_11 = j_11;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_8, not_null(g_11));
      t = printnl_0(t);
    }
  }
  t = b_16;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_16), term_k_16);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
  u_11 = t;
  r_11 :
  if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
    {
      s_11 = ATgetFirst((ATermList) u_11);
      t_11 = (ATerm) ATgetNext((ATermList) u_11);
      {
        ATerm x_11 = NULL;
        t = not_null(t_11);
        {
          ATerm m_16;
          m_16 = t;
          {
            ATerm y_11 = NULL,a_12 = NULL,c_12 = NULL;
            ATerm r_16;
            r_16 = t;
            {
              ATerm z_11 = NULL;
              t = j_0(t);
              {
                z_11 = t;
                if(((y_11 != NULL) && (y_11 != z_11)))
                  _fail(z_11);
                else
                  y_11 = z_11;
              }
            }
            t = r_16;
            {
              ATerm b_12 = NULL;
              t = not_null(s_11);
              {
                t = i_0(t);
                {
                  b_12 = t;
                  if(((a_12 != NULL) && (a_12 != b_12)))
                    _fail(b_12);
                  else
                    a_12 = b_12;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_11)), not_null(a_12));
                {
                  c_12 = t;
                  if(((x_11 != NULL) && (x_11 != c_12)))
                    _fail(c_12);
                  else
                    x_11 = c_12;
                }
              }
            }
          }
          t = m_16;
          {
            ATerm w_3 (ATerm t)
            {
              t = not_null(x_11);
              return(t);
            }
            t = reverse_acc_2(t, i_0, w_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_11) == AT_LIST) && ATisEmpty(u_11)))
        {
          {
            t = term_x_14;
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
  ATerm x_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_16), term_t_16), term_s_16);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_58 (ATerm))
{
  ATerm n_12 = NULL,o_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_Program_1))
    {
      o_12 = ATgetArgument(n_12, 0);
      {
        ATerm r_12 = NULL,t_12 = NULL;
        ATerm s_12 = NULL;
        t = SSLgetAnnotations(not_null(n_12));
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
        {
          t = not_null(o_12);
          {
            ATerm v_12 = NULL;
            t = b_58(t);
            {
              t_12 = t;
              {
                ATerm w_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_12)), not_null(r_12));
                {
                  w_12 = t;
                  if(((v_12 != NULL) && (v_12 != w_12)))
                    _fail(w_12);
                  else
                    v_12 = w_12;
                }
                t = not_null(v_12);
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
  ATerm f_13 = NULL;
  ATerm v_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL;
      t = term_b_17;
      {
        t = get_config_0(t);
        {
          g_13 = t;
          if(((f_13 != NULL) && (f_13 != g_13)))
            _fail(g_13);
          else
            f_13 = g_13;
        }
      }
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = v_16;
      {
        ATerm b_4 (ATerm t)
        {
          ATerm e_4 (ATerm t)
          {
            ATerm h_13 = NULL;
            h_13 = t;
            if(((f_13 != NULL) && (f_13 != h_13)))
              _fail(h_13);
            else
              f_13 = h_13;
            return(t);
          }
          t = Program_1(t, e_4);
          return(t);
        }
        t = option_defined_1(t, b_4);
      }
    }
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        t = not_null(f_13);
        return(t);
      }
      t = short_description_1(t, g_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, f_4);
    {
      t = term_c_17;
      {
        t = echo_0(t);
        {
          t = term_h_17;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm h_4 (ATerm t)
                {
                  ATerm i_13 = NULL;
                  ATerm j_13 = NULL;
                  j_13 = t;
                  if(((i_13 != NULL) && (i_13 != j_13)))
                    _fail(j_13);
                  else
                    i_13 = j_13;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_13)), term_j_17);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_4);
                {
                  ATerm i_4 (ATerm t)
                  {
                    ATerm k_13 = NULL;
                    ATerm l_13 = NULL;
                    ATerm l_4 (ATerm t)
                    {
                      t = not_null(f_13);
                      return(t);
                    }
                    t = long_description_1(t, l_4);
                    {
                      l_13 = t;
                      if(((k_13 != NULL) && (k_13 != l_13)))
                        _fail(l_13);
                      else
                        k_13 = l_13;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(k_13)), term_b_9);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, i_4);
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
ATerm Undefined_1 (ATerm t, ATerm c_58 (ATerm))
{
  ATerm v_13 = NULL,w_13 = NULL;
  v_13 = t;
  u_13 :
  if(match_cons(v_13, sym_Undefined_1))
    {
      w_13 = ATgetArgument(v_13, 0);
      {
        ATerm z_13 = NULL,b_14 = NULL;
        ATerm a_14 = NULL;
        t = SSLgetAnnotations(not_null(v_13));
        {
          a_14 = t;
          if(((z_13 != NULL) && (z_13 != a_14)))
            _fail(a_14);
          else
            z_13 = a_14;
        }
        {
          t = not_null(w_13);
          {
            ATerm d_14 = NULL;
            t = c_58(t);
            {
              b_14 = t;
              {
                ATerm e_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_14)), not_null(z_13));
                {
                  e_14 = t;
                  if(((d_14 != NULL) && (d_14 != e_14)))
                    _fail(e_14);
                  else
                    d_14 = e_14;
                }
                t = not_null(d_14);
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
ATerm option_defined_1 (ATerm t, ATerm a_80 (ATerm))
{
  t = fetch_1(t, a_80);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_Help_0))
    {
      ATerm p_14 = NULL,r_14 = NULL;
      ATerm k_17;
      k_17 = t;
      {
        ATerm q_14 = NULL;
        t = SSLgetAnnotations(not_null(n_14));
        {
          q_14 = t;
          if(((p_14 != NULL) && (p_14 != q_14)))
            _fail(q_14);
          else
            p_14 = q_14;
        }
      }
      t = k_17;
      {
        ATerm s_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_14));
        {
          s_14 = t;
          if(((r_14 != NULL) && (r_14 != s_14)))
            _fail(s_14);
          else
            r_14 = s_14;
        }
        t = not_null(r_14);
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
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  z_14 = t;
  y_14 :
  if(match_cons(z_14, sym__3))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      c_15 = ATgetArgument(z_14, 2);
      {
        ATerm l_17;
        l_17 = t;
        {
          ATerm g_15 = NULL;
          ATerm h_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_15), not_null(b_15));
          {
            ATerm q_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(r_17);
              }
            else
              {
                t = q_17;
                t = (ATerm) ATempty;
              }
            {
              h_15 = t;
              if(((g_15 != NULL) && (g_15 != h_15)))
                _fail(h_15);
              else
                g_15 = h_15;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_15), not_null(b_15), (ATerm) ATinsert(CheckATermList(not_null(g_15)), not_null(c_15)));
            t = table_put_0(t);
          }
        }
        t = l_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_81 (ATerm))
{
  ATerm l_15 = NULL;
  ATerm m_15 = NULL;
  t = term_x_14;
  {
    t = f_81(t);
    {
      m_15 = t;
      if(((l_15 != NULL) && (l_15 != m_15)))
        _fail(m_15);
      else
        l_15 = m_15;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_17, term_g_17, not_null(l_15));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_string(s_15, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(s_15) == AT_LIST) && !(ATisEmpty(s_15))))
        {
          t_15 = ATgetFirst((ATermList) s_15);
          u_15 = (ATerm) ATgetNext((ATermList) s_15);
          {
            ATerm x_15 = NULL;
            ATerm s_17;
            s_17 = t;
            {
              t = not_null(t_15);
              t = a_0(t);
            }
            t = s_17;
            {
              ATerm y_15 = NULL;
              t = term_x_14;
              {
                t = c_0(t);
                {
                  y_15 = t;
                  if(((x_15 != NULL) && (x_15 != y_15)))
                    _fail(y_15);
                  else
                    x_15 = y_15;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_15)), not_null(x_15));
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
  ATerm m_4 (ATerm t)
  {
    ATerm d_16 = NULL;
    d_16 = t;
    c_16 :
    if(!(match_string(d_16, "--help")))
      {
        if(!(match_string(d_16, "-h")))
          {
            if(!(match_string(d_16, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = term_u_17;
    {
      t = set_config_0(t);
      t = term_d_18;
    }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_e_18;
    return(t);
  }
  t = Option_3(t, m_4, r_4, s_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  f_16 :
  if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
    {
      h_16 = ATgetFirst((ATermList) g_16);
      i_16 = (ATerm) ATgetNext((ATermList) g_16);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_16)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_16)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym__2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_12, not_null(p_16), not_null(q_16));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_81 (ATerm))
{
  ATerm h_18;
  h_18 = t;
  {
    ATerm t_4 (ATerm t)
    {
      t = term_i_18;
      t = d_81(t);
      return(t);
    }
    t = try_1(t, t_4);
  }
  t = h_18;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm y_16 = NULL;
      ATerm j_18;
      j_18 = t;
      {
        ATerm w_16 = NULL;
        ATerm x_16 = NULL;
        x_16 = t;
        if(((w_16 != NULL) && (w_16 != x_16)))
          _fail(x_16);
        else
          w_16 = x_16;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_17, not_null(w_16));
          t = set_config_0(t);
        }
      }
      t = j_18;
      {
        ATerm z_16 = NULL;
        z_16 = t;
        if(((y_16 != NULL) && (y_16 != z_16)))
          _fail(z_16);
        else
          y_16 = z_16;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_16));
      }
      return(t);
    }
    ATerm v_4 (ATerm t)
    {
      ATerm o_18 = t;
      int p_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_18 = t;
          int r_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(r_18);
            }
          else
            {
              t = q_18;
              {
                t = d_81(t);
                t = Cons_2(t, _id, v_4);
              }
            }
          ;
          LocalPopChoice(p_18);
        }
      else
        {
          t = o_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_4, v_4);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm e_17 = NULL;
  ATerm s_18;
  s_18 = t;
  {
    t = term_x_18;
    t = table_put_0(t);
  }
  t = s_18;
  {
    ATerm a_5 (ATerm t)
    {
      ATerm y_18 = t;
      int z_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_81(t);
          ;
          LocalPopChoice(z_18);
        }
      else
        {
          t = y_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_5);
    {
      ATerm b_5 (ATerm t)
      {
        ATerm a_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_19;
            d_19 = t;
            {
              ATerm e_19 = t;
              int f_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_t_17;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(f_19);
                }
              else
                {
                  t = e_19;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = d_19;
            {
              t = system_usage_0(t);
              {
                t = term_g_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(c_19);
          }
        else
          {
            t = a_19;
            {
              ATerm c_5 (ATerm t)
              {
                ATerm d_5 (ATerm t)
                {
                  ATerm f_17 = NULL;
                  f_17 = t;
                  if(((e_17 != NULL) && (e_17 != f_17)))
                    _fail(f_17);
                  else
                    e_17 = f_17;
                  return(t);
                }
                t = Undefined_1(t, d_5);
                return(t);
              }
              t = option_defined_1(t, c_5);
              {
                ATerm f_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_17)), term_i_19);
                  return(t);
                }
                t = say_1(t, f_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_q_11;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, b_5);
      {
        ATerm k_19;
        k_19 = t;
        {
          t = term_d_17;
          t = table_destroy_0(t);
        }
        t = k_19;
      }
    }
  }
  return(t);
}
ATerm xtc_main_0 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_options_1(t, xtc_options_0);
      {
        t = xtc_location_0(t);
        {
          ATerm h_5 (ATerm t)
          {
            ATerm i_5 (ATerm t)
            {
              t = term_p_19;
              return(t);
            }
            t = debug_1(t, i_5);
            return(t);
          }
          t = if_verbose2_1(t, h_5);
          {
            t = xtc_read_0(t);
            {
              ATerm q_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_19 = t;
                  int x_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_n_13;
                      {
                        t = get_config_0(t);
                        t = xtc_register_0(t);
                      }
                      ;
                      LocalPopChoice(x_19);
                    }
                  else
                    {
                      t = u_19;
                      {
                        t = term_e_11;
                        {
                          t = get_config_0(t);
                          t = register_import_0(t);
                        }
                      }
                    }
                  t = xtc_store_0(t);
                  ;
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = q_19;
                  {
                    t = term_o_14;
                    {
                      t = get_config_0(t);
                      t = xtc_query_0(t);
                    }
                  }
                }
              {
                t = term_g_19;
                t = exit_0(t);
              }
            }
          }
        }
      }
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm j_5 (ATerm t)
        {
          t = term_y_19;
          return(t);
        }
        t = debug_1(t, j_5);
      }
    }
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_17 = NULL;
  i_17 = t;
  t = SSL_exit(not_null(i_17));
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym__2))
    {
      o_17 = ATgetArgument(n_17, 0);
      p_17 = ATgetArgument(n_17, 1);
      {
        ATerm z_19;
        z_19 = t;
        t = SSL_print(not_null(o_17), not_null(p_17));
        t = z_19;
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
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  y_17 = t;
  v_17 :
  if(((ATgetType(y_17) == AT_LIST) && !(ATisEmpty(y_17))))
    {
      z_17 = ATgetFirst((ATermList) y_17);
      a_18 = (ATerm) ATgetNext((ATermList) y_17);
      w_17 :
      if(((ATgetType(a_18) == AT_LIST) && !(ATisEmpty(a_18))))
        {
          b_18 = ATgetFirst((ATermList) a_18);
          c_18 = (ATerm) ATgetNext((ATermList) a_18);
          x_17 :
          if(match_string(b_18, "get"))
            {
              ATerm f_18 = NULL;
              ATerm g_18 = NULL;
              t = not_null(c_18);
              {
                t = map_1(t, xtc_find_0);
                {
                  g_18 = t;
                  if(((f_18 != NULL) && (f_18 != g_18)))
                    _fail(g_18);
                  else
                    f_18 = g_18;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, term_x_8, not_null(f_18));
                {
                  t = print_0(t);
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATempty, term_b_9));
                    {
                      t = print_0(t);
                      {
                        t = term_g_19;
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
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      t = SSL_execvp(not_null(m_18), not_null(n_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm d_20;
  d_20 = t;
  {
    ATerm t_18 = NULL,v_18 = NULL;
    ATerm i_20;
    i_20 = t;
    {
      ATerm u_18 = NULL;
      t = c_77(t);
      {
        u_18 = t;
        if(((t_18 != NULL) && (t_18 != u_18)))
          _fail(u_18);
        else
          t_18 = u_18;
      }
    }
    t = i_20;
    {
      ATerm w_18 = NULL;
      w_18 = t;
      if(((v_18 != NULL) && (v_18 != w_18)))
        _fail(w_18);
      else
        v_18 = w_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_18)), not_null(t_18)));
        t = printnl_0(t);
      }
    }
  }
  t = d_20;
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  t = SSL_table_keys(not_null(b_19));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  {
    t = table_keys_0(t);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm j_19 = NULL;
        ATerm l_19 = NULL;
        j_19 = t;
        {
          ATerm m_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), not_null(j_19));
          {
            t = table_get_0(t);
            {
              m_19 = t;
              if(((l_19 != NULL) && (l_19 != m_19)))
                _fail(m_19);
              else
                l_19 = m_19;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), not_null(l_19));
        }
        return(t);
      }
      t = map_1(t, k_5);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm l_5 (ATerm t)
  {
    ATerm k_20;
    k_20 = t;
    {
      ATerm r_19 = NULL;
      ATerm s_19 = NULL;
      t = term_e_8;
      {
        t = get_config_0(t);
        {
          s_19 = t;
          if(((r_19 != NULL) && (r_19 != s_19)))
            _fail(s_19);
          else
            r_19 = s_19;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_19), term_l_20);
        t = geq_0(t);
      }
    }
    t = k_20;
    t = u_85(t);
    return(t);
  }
  t = try_1(t, l_5);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm m_20;
  m_20 = t;
  {
    ATerm v_19 = NULL;
    ATerm w_19 = NULL;
    w_19 = t;
    if(((v_19 != NULL) && (v_19 != w_19)))
      _fail(w_19);
    else
      v_19 = w_19;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_20, not_null(v_19));
      t = printnl_0(t);
    }
  }
  t = m_20;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm c_20 = NULL;
  ATerm e_20 = NULL,f_20 = NULL;
  c_20 = t;
  {
    ATerm g_20 = NULL,h_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_20)));
    {
      t = table_get_0(t);
      {
        g_20 = t;
        a_20 :
        if(((ATgetType(g_20) == AT_LIST) && !(ATisEmpty(g_20))))
          {
            h_20 = ATgetFirst((ATermList) g_20);
            p_20 = (ATerm) ATgetNext((ATermList) g_20);
            b_20 :
            if(match_cons(h_20, sym__2))
              {
                n_20 = ATgetArgument(h_20, 0);
                o_20 = ATgetArgument(h_20, 1);
                {
                  if(((e_20 != NULL) && (e_20 != n_20)))
                    _fail(n_20);
                  else
                    e_20 = n_20;
                  if(((f_20 != NULL) && (f_20 != o_20)))
                    _fail(o_20);
                  else
                    f_20 = o_20;
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
    t = not_null(f_20);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  v_20 :
  if(match_cons(w_20, sym__2))
    {
      x_20 = ATgetArgument(w_20, 0);
      y_20 = ATgetArgument(w_20, 1);
      {
        ATerm e_21 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(x_20)));
        {
          t = table_get_0(t);
          {
            ATerm m_5 (ATerm t)
            {
              ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
              f_21 = t;
              u_20 :
              if(match_cons(f_21, sym__2))
                {
                  g_21 = ATgetArgument(f_21, 0);
                  h_21 = ATgetArgument(f_21, 1);
                  {
                    if(((y_20 != NULL) && (y_20 != g_21)))
                      _fail(g_21);
                    else
                      y_20 = g_21;
                    if(((e_21 != NULL) && (e_21 != h_21)))
                      _fail(h_21);
                    else
                      e_21 = h_21;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, m_5);
          }
        }
        t = not_null(e_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm v_73 (ATerm))
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              t = filter_1(t, v_73);
              return(t);
            }
            t = Cons_2(t, v_73, s_5);
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            {
              ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
              m_21 = t;
              l_21 :
              if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
                {
                  n_21 = ATgetFirst((ATermList) m_21);
                  o_21 = (ATerm) ATgetNext((ATermList) m_21);
                  {
                    t = not_null(o_21);
                    t = filter_1(t, v_73);
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
ATerm repeat_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm r_21 (ATerm t)
  {
    ATerm t_5 (ATerm t)
    {
      t = s_59(t);
      t = r_21(t);
      return(t);
    }
    t = try_1(t, t_5);
    return(t);
  }
  t = r_21(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm z_20;
  z_20 = t;
  {
    ATerm u_5 (ATerm t)
    {
      t = term_a_21;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm b_21 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_21;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, u_5);
  }
  t = z_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  u_21 = t;
  t_21 :
  if(match_cons(u_21, sym__2))
    {
      v_21 = ATgetArgument(u_21, 0);
      w_21 = ATgetArgument(u_21, 1);
      {
        ATerm c_21;
        c_21 = t;
        t = SSL_printnl(not_null(v_21), not_null(w_21));
        t = c_21;
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
  ATerm d_21;
  d_21 = t;
  {
    ATerm b_22 = NULL;
    ATerm c_22 = NULL;
    c_22 = t;
    if(((b_22 != NULL) && (b_22 != c_22)))
      _fail(c_22);
    else
      b_22 = c_22;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATinsert(ATempty, not_null(b_22)));
      t = printnl_0(t);
    }
  }
  t = d_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_77 (ATerm))
{
  ATerm i_21;
  i_21 = t;
  {
    t = d_77(t);
    t = debug_0(t);
  }
  t = i_21;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm t_85 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm j_21;
    j_21 = t;
    {
      ATerm f_22 = NULL;
      ATerm g_22 = NULL;
      t = term_e_8;
      {
        t = get_config_0(t);
        {
          g_22 = t;
          if(((f_22 != NULL) && (f_22 != g_22)))
            _fail(g_22);
          else
            f_22 = g_22;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_22), term_k_21);
        t = geq_0(t);
      }
    }
    t = j_21;
    t = t_85(t);
    return(t);
  }
  t = try_1(t, z_5);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
  k_22 = t;
  j_22 :
  if(match_cons(k_22, sym__2))
    {
      l_22 = ATgetArgument(k_22, 0);
      m_22 = ATgetArgument(k_22, 1);
      {
        ATerm p_21;
        p_21 = t;
        {
          ATerm q_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_22), not_null(m_22));
              ;
              LocalPopChoice(s_21);
            }
          else
            {
              t = q_21;
              t = SSL_gtr(not_null(l_22), not_null(m_22));
            }
        }
        t = p_21;
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
  ATerm s_22 = NULL;
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
      t_22 = t;
      r_22 :
      if(match_cons(t_22, sym__2))
        {
          u_22 = ATgetArgument(t_22, 0);
          v_22 = ATgetArgument(t_22, 1);
          {
            if(((s_22 != NULL) && (s_22 != u_22)))
              _fail(u_22);
            else
              s_22 = u_22;
            if(((s_22 != NULL) && (s_22 != v_22)))
              _fail(v_22);
            else
              s_22 = v_22;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm v_85 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm z_21;
    z_21 = t;
    {
      ATerm y_22 = NULL;
      ATerm z_22 = NULL;
      t = term_e_8;
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
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_22), term_a_22);
        t = geq_0(t);
      }
    }
    t = z_21;
    t = v_85(t);
    return(t);
  }
  t = try_1(t, a_6);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  c_23 :
  if(match_cons(d_23, sym__2))
    {
      e_23 = ATgetArgument(d_23, 0);
      f_23 = ATgetArgument(d_23, 1);
      if(((e_23 != NULL) && (e_23 != f_23)))
        _fail(f_23);
      else
        e_23 = f_23;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_66 (ATerm))
{
  ATerm i_23 (ATerm t)
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_66, _id);
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = Cons_2(t, _id, i_23);
      }
    return(t);
  }
  t = i_23(t);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm f_72 (ATerm), ATerm g_72 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  l_23 :
  if(((ATgetType(m_23) == AT_LIST) && !(ATisEmpty(m_23))))
    {
      n_23 = ATgetFirst((ATermList) m_23);
      o_23 = (ATerm) ATgetNext((ATermList) m_23);
      {
        t = g_72(t);
        {
          ATerm b_6 (ATerm t)
          {
            ATerm r_23 = NULL;
            r_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_23), not_null(r_23));
              t = f_72(t);
            }
            return(t);
          }
          t = fetch_1(t, b_6);
        }
        t = not_null(o_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym__2))
    {
      y_23 = ATgetArgument(x_23, 0);
      z_23 = ATgetArgument(x_23, 1);
      {
        t = not_null(y_23);
        {
          ATerm d_24 (ATerm t)
          {
            ATerm h_22 = t;
            int i_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(z_23);
                ;
                LocalPopChoice(i_22);
              }
            else
              {
                t = h_22;
                {
                  ATerm n_22 = t;
                  int o_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_6 (ATerm t)
                      {
                        t = not_null(z_23);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_72, c_6);
                      t = d_24(t);
                      ;
                      LocalPopChoice(o_22);
                    }
                  else
                    {
                      t = n_22;
                      t = Cons_2(t, _id, d_24);
                    }
                }
              }
            return(t);
          }
          t = d_24(t);
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
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  i_24 = t;
  h_24 :
  if(match_cons(i_24, sym__3))
    {
      j_24 = ATgetArgument(i_24, 0);
      k_24 = ATgetArgument(i_24, 1);
      l_24 = ATgetArgument(i_24, 2);
      {
        ATerm p_22;
        p_22 = t;
        {
          ATerm p_24 = NULL;
          ATerm q_24 = NULL,s_24 = NULL;
          ATerm r_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), not_null(k_24));
          {
            ATerm q_22 = t;
            int w_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(w_22);
              }
            else
              {
                t = q_22;
                t = (ATerm) ATempty;
              }
            {
              r_24 = t;
              if(((q_24 != NULL) && (q_24 != r_24)))
                _fail(r_24);
              else
                q_24 = r_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_24), not_null(l_24));
            {
              t = union_0(t);
              {
                s_24 = t;
                if(((p_24 != NULL) && (p_24 != s_24)))
                  _fail(s_24);
                else
                  p_24 = s_24;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_24), not_null(k_24), not_null(p_24));
            t = set_0(t);
          }
        }
        t = p_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm l_82 (ATerm))
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  a_25 = t;
  z_24 :
  if(match_cons(a_25, sym__2))
    {
      b_25 = ATgetArgument(a_25, 0);
      c_25 = ATgetArgument(a_25, 1);
      {
        t = not_null(c_25);
        {
          ATerm f_6 (ATerm t)
          {
            ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
            f_25 = t;
            y_24 :
            if(match_cons(f_25, sym__2))
              {
                g_25 = ATgetArgument(f_25, 0);
                h_25 = ATgetArgument(f_25, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(b_25), not_null(g_25), not_null(h_25));
                  t = l_82(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm n_25 = NULL;
  ATerm x_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_25 = NULL;
      o_25 = t;
      {
        if(((n_25 != NULL) && (n_25 != o_25)))
          _fail(o_25);
        else
          n_25 = o_25;
        t = SSL_ReadFromFile(not_null(n_25));
      }
      ;
      LocalPopChoice(a_23);
    }
  else
    {
      t = x_22;
      {
        ATerm g_6 (ATerm t)
        {
          t = term_b_23;
          return(t);
        }
        t = debug_1(t, g_6);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm s_25 = NULL;
  ATerm u_25 = NULL;
  s_25 = t;
  {
    ATerm g_23;
    g_23 = t;
    {
      ATerm v_25 = NULL;
      t = term_h_23;
      {
        v_25 = t;
        if(((u_25 != NULL) && (u_25 != v_25)))
          _fail(v_25);
        else
          u_25 = v_25;
      }
    }
    t = g_23;
    {
      t = SSL_open_file(not_null(s_25), not_null(u_25));
      t = SSL_close_file(not_null(s_25));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm f_26 = NULL;
  ATerm h_26 = NULL;
  f_26 = t;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm i_6 (ATerm t)
      {
        t = term_j_23;
        return(t);
      }
      t = debug_1(t, i_6);
      return(t);
    }
    t = if_verbose5_1(t, h_6);
    {
      ATerm k_23 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(f_26)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_23;
        }
      {
        ATerm p_23;
        p_23 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_8, term_q_23, (ATerm) ATinsert(ATempty, not_null(f_26)));
          t = table_put_0(t);
        }
        t = p_23;
        {
          ATerm j_6 (ATerm t)
          {
            ATerm k_6 (ATerm t)
            {
              t = term_s_23;
              return(t);
            }
            t = debug_1(t, k_6);
            return(t);
          }
          t = if_verbose4_1(t, j_6);
          {
            ATerm t_23 = t;
            int u_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(u_23);
              }
            else
              {
                t = t_23;
                t = (ATerm) ATempty;
              }
            {
              ATerm l_6 (ATerm t)
              {
                ATerm n_6 (ATerm t)
                {
                  t = term_v_23;
                  return(t);
                }
                t = say_1(t, n_6);
                return(t);
              }
              t = if_verbose6_1(t, l_6);
              {
                ATerm i_26 = NULL;
                i_26 = t;
                if(((h_26 != NULL) && (h_26 != i_26)))
                  _fail(i_26);
                else
                  h_26 = i_26;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_8, not_null(h_26));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm p_6 (ATerm t)
                      {
                        ATerm r_6 (ATerm t)
                        {
                          t = term_a_24;
                          return(t);
                        }
                        t = say_1(t, r_6);
                        return(t);
                      }
                      t = if_verbose6_1(t, p_6);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_s_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(f_26)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm y_6 (ATerm t)
                            {
                              ATerm z_6 (ATerm t)
                              {
                                t = term_v_23;
                                return(t);
                              }
                              t = say_1(t, z_6);
                              return(t);
                            }
                            t = if_verbose4_1(t, y_6);
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
  ATerm m_26 = NULL;
  m_26 = t;
  t = SSL_getenv(not_null(m_26));
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  ATerm b_24;
  b_24 = t;
  {
    ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
    u_26 = t;
    q_26 :
    if(match_cons(u_26, sym__3))
      {
        v_26 = ATgetArgument(u_26, 0);
        w_26 = ATgetArgument(u_26, 1);
        x_26 = ATgetArgument(u_26, 2);
        {
          if(((r_26 != NULL) && (r_26 != v_26)))
            _fail(v_26);
          else
            r_26 = v_26;
          {
            if(((s_26 != NULL) && (s_26 != w_26)))
              _fail(w_26);
            else
              s_26 = w_26;
            {
              if(((t_26 != NULL) && (t_26 != x_26)))
                _fail(x_26);
              else
                t_26 = x_26;
              t = SSL_table_put(not_null(r_26), not_null(s_26), not_null(t_26));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_24;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  t = SSL_implode_string(not_null(a_27));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = c_24;
      {
        ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
        f_27 = t;
        e_27 :
        if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
          {
            g_27 = ATgetFirst((ATermList) f_27);
            h_27 = (ATerm) ATgetNext((ATermList) f_27);
            {
              t = not_null(g_27);
              {
                ATerm a_7 (ATerm t)
                {
                  t = not_null(h_27);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, a_7);
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
  ATerm r_27 = NULL;
  ATerm t_27 = NULL;
  r_27 = t;
  {
    ATerm u_27 = NULL;
    ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
    t = not_null(r_27);
    {
      u_27 = t;
      {
        t = SSL_explode_term(not_null(u_27));
        {
          w_27 = t;
          p_27 :
          if(match_cons(w_27, sym__2))
            {
              x_27 = ATgetArgument(w_27, 0);
              y_27 = ATgetArgument(w_27, 1);
              q_27 :
              if(match_string(x_27, ""))
                {
                  if(((t_27 != NULL) && (t_27 != y_27)))
                    _fail(y_27);
                  else
                    t_27 = y_27;
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
      t = not_null(t_27);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm c_28 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_28);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          t = Nil_0(t);
          t = x_66(t);
        }
      }
    return(t);
  }
  t = c_28(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  e_28 :
  if(match_cons(f_28, sym__2))
    {
      g_28 = ATgetArgument(f_28, 0);
      h_28 = ATgetArgument(f_28, 1);
      {
        t = not_null(g_28);
        {
          ATerm b_7 (ATerm t)
          {
            t = not_null(h_28);
            return(t);
          }
          t = at_end_1(t, b_7);
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
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  t = SSL_explode_string(not_null(m_28));
  return(t);
}
ATerm _2 (ATerm t, ATerm q_51 (ATerm), ATerm r_51 (ATerm))
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym__2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      {
        ATerm b_29 = NULL,d_29 = NULL;
        ATerm c_29 = NULL;
        t = SSLgetAnnotations(not_null(v_28));
        {
          c_29 = t;
          if(((b_29 != NULL) && (b_29 != c_29)))
            _fail(c_29);
          else
            b_29 = c_29;
        }
        {
          t = not_null(w_28);
          {
            ATerm f_29 = NULL;
            t = q_51(t);
            {
              d_29 = t;
              {
                t = not_null(x_28);
                {
                  ATerm h_29 = NULL;
                  t = r_51(t);
                  {
                    f_29 = t;
                    {
                      ATerm i_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_29), not_null(f_29)), not_null(b_29));
                      {
                        i_29 = t;
                        if(((h_29 != NULL) && (h_29 != i_29)))
                          _fail(i_29);
                        else
                          h_29 = i_29;
                      }
                      t = not_null(h_29);
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
ATerm Cons_2 (ATerm t, ATerm z_52 (ATerm), ATerm a_53 (ATerm))
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  t_29 :
  if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
    {
      v_29 = ATgetFirst((ATermList) u_29);
      w_29 = (ATerm) ATgetNext((ATermList) u_29);
      {
        ATerm a_30 = NULL,c_30 = NULL;
        ATerm b_30 = NULL;
        t = SSLgetAnnotations(not_null(u_29));
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
        {
          t = not_null(v_29);
          {
            ATerm e_30 = NULL;
            t = z_52(t);
            {
              c_30 = t;
              {
                t = not_null(w_29);
                {
                  ATerm g_30 = NULL;
                  t = a_53(t);
                  {
                    e_30 = t;
                    {
                      ATerm h_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_30)), not_null(c_30)), not_null(a_30));
                      {
                        h_30 = t;
                        if(((g_30 != NULL) && (g_30 != h_30)))
                          _fail(h_30);
                        else
                          g_30 = h_30;
                      }
                      t = not_null(g_30);
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
  ATerm r_30 = NULL;
  r_30 = t;
  q_30 :
  if(((ATgetType(r_30) == AT_LIST) && ATisEmpty(r_30)))
    {
      {
        ATerm t_30 = NULL,v_30 = NULL;
        ATerm o_24;
        o_24 = t;
        {
          ATerm u_30 = NULL;
          t = SSLgetAnnotations(not_null(r_30));
          {
            u_30 = t;
            if(((t_30 != NULL) && (t_30 != u_30)))
              _fail(u_30);
            else
              t_30 = u_30;
          }
        }
        t = o_24;
        {
          ATerm w_30 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_30));
          {
            w_30 = t;
            if(((v_30 != NULL) && (v_30 != w_30)))
              _fail(w_30);
            else
              v_30 = w_30;
          }
          t = not_null(v_30);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm a_31 (ATerm t)
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        t = Cons_2(t, i_66, a_31);
      }
    return(t);
  }
  t = a_31(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm c_31 = NULL;
  c_31 = t;
  t = SSL_is_string(not_null(c_31));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      {
        ATerm x_24 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_7 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_7);
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = x_24;
            {
              ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
              l_31 = t;
              k_31 :
              if(match_cons(l_31, sym_Path_1))
                {
                  m_31 = ATgetArgument(l_31, 0);
                  t = not_null(m_31);
                }
              else
                {
                  if(match_cons(l_31, sym_Var_1))
                    {
                      m_31 = ATgetArgument(l_31, 0);
                      {
                        t = not_null(m_31);
                        {
                          ATerm e_25 = t;
                          int i_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(i_25);
                            }
                          else
                            {
                              t = e_25;
                              {
                                ATerm d_7 (ATerm t)
                                {
                                  t = term_j_25;
                                  return(t);
                                }
                                t = debug_1(t, d_7);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_31, sym_Prefix_2))
                        {
                          m_31 = ATgetArgument(l_31, 0);
                          n_31 = ATgetArgument(l_31, 1);
                          {
                            ATerm s_31 = NULL,u_31 = NULL;
                            ATerm k_25;
                            k_25 = t;
                            {
                              ATerm t_31 = NULL;
                              t = not_null(m_31);
                              {
                                t = eval_config_0(t);
                                {
                                  t_31 = t;
                                  if(((s_31 != NULL) && (s_31 != t_31)))
                                    _fail(t_31);
                                  else
                                    s_31 = t_31;
                                }
                              }
                            }
                            t = k_25;
                            {
                              ATerm v_31 = NULL;
                              t = not_null(n_31);
                              {
                                t = eval_config_0(t);
                                {
                                  v_31 = t;
                                  if(((u_31 != NULL) && (u_31 != v_31)))
                                    _fail(v_31);
                                  else
                                    u_31 = v_31;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_31), not_null(u_31));
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
ATerm try_1 (ATerm t, ATerm w_58 (ATerm))
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_58(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm d_32 = NULL;
  d_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_12, not_null(d_32));
    {
      t = table_get_0(t);
      {
        ATerm e_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_25;
            p_25 = t;
            {
              ATerm f_32 = NULL;
              ATerm g_32 = NULL;
              g_32 = t;
              if(((f_32 != NULL) && (f_32 != g_32)))
                _fail(g_32);
              else
                f_32 = g_32;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_12, not_null(d_32), not_null(f_32));
                t = table_put_0(t);
              }
            }
            t = p_25;
          }
          return(t);
        }
        t = try_1(t, e_7);
      }
    }
  }
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm t_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_25;
            t = getenv_0(t);
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = t_25;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
  l_32 = t;
  k_32 :
  if(match_cons(l_32, sym__2))
    {
      m_32 = ATgetArgument(l_32, 0);
      n_32 = ATgetArgument(l_32, 1);
      t = SSL_table_get(not_null(m_32), not_null(n_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm i_7 (ATerm t)
    {
      t = term_y_25;
      return(t);
    }
    t = debug_1(t, i_7);
    return(t);
  }
  t = if_verbose5_1(t, h_7);
  {
    ATerm z_25;
    z_25 = t;
    {
      ATerm a_26 = t;
      int b_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_c_26;
          t = table_get_0(t);
          ;
          LocalPopChoice(b_26);
        }
      else
        {
          t = a_26;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = z_25;
    {
      ATerm k_7 (ATerm t)
      {
        ATerm l_7 (ATerm t)
        {
          t = term_d_26;
          return(t);
        }
        t = debug_1(t, l_7);
        return(t);
      }
      t = if_verbose5_1(t, k_7);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm e_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_7 (ATerm t)
      {
        ATerm n_7 (ATerm t)
        {
          t = term_j_26;
          return(t);
        }
        t = debug_1(t, n_7);
        return(t);
      }
      t = if_verbose5_1(t, m_7);
      {
        t = xtc_load_0(t);
        {
          ATerm k_26 = t;
          int l_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(l_26);
            }
          else
            {
              t = k_26;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm o_7 (ATerm t)
            {
              ATerm w_7 (ATerm t)
              {
                t = term_j_26;
                return(t);
              }
              t = debug_1(t, w_7);
              return(t);
            }
            t = if_verbose5_1(t, o_7);
          }
        }
      }
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = e_26;
      {
        ATerm s_32 = NULL;
        ATerm t_32 = NULL;
        t_32 = t;
        if(((s_32 != NULL) && (s_32 != t_32)))
          _fail(t_32);
        else
          s_32 = t_32;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_26), not_null(s_32)), term_n_26);
          {
            t = error_0(t);
            {
              ATerm x_7 (ATerm t)
              {
                t = term_s_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm y_7 (ATerm t)
                    {
                      t = term_p_26;
                      return(t);
                    }
                    t = debug_1(t, y_7);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, x_7);
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
  ATerm b_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL;
  b_33 = t;
  x_32 :
  if(((ATgetType(b_33) == AT_LIST) && !(ATisEmpty(b_33))))
    {
      f_33 = ATgetFirst((ATermList) b_33);
      g_33 = (ATerm) ATgetNext((ATermList) b_33);
      y_32 :
      if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
        {
          h_33 = ATgetFirst((ATermList) g_33);
          i_33 = (ATerm) ATgetNext((ATermList) g_33);
          z_32 :
          if(match_string(h_33, "call"))
            {
              a_33 :
              if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
                {
                  j_33 = ATgetFirst((ATermList) i_33);
                  k_33 = (ATerm) ATgetNext((ATermList) i_33);
                  {
                    ATerm o_33 = NULL;
                    ATerm p_33 = NULL;
                    t = not_null(j_33);
                    {
                      t = xtc_find_0(t);
                      {
                        p_33 = t;
                        if(((o_33 != NULL) && (o_33 != p_33)))
                          _fail(p_33);
                        else
                          o_33 = p_33;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_33), not_null(k_33));
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
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_xtc_call_0(t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_xtc_get_0(t);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
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
