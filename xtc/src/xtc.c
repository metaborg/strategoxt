#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "xtc-conf.h"
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
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_a_21;
ATerm term_v_20;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_u_18;
ATerm term_j_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_u_14;
ATerm term_m_14;
ATerm term_f_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_j_12;
ATerm term_a_12;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_o_8;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_g_7;
ATerm term_d_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_p_6;
void init_constant_terms (void)
{
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_y_7, term_l_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools\n", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_l_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_z_16, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_l_15);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__3, term_z_16, term_a_17, (ATerm) ATempty);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm d_62 (ATerm));
ATerm exit_0 (ATerm);
ATerm version_query_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm s_53 (ATerm));
ATerm tool_query_0 (ATerm);
ATerm print_0 (ATerm);
ATerm list_tool_0 (ATerm);
ATerm Tool_1 (ATerm, ATerm n_47 (ATerm));
ATerm all_query_0 (ATerm);
ATerm xtc_query_0 (ATerm);
ATerm _2 (ATerm, ATerm c_46 (ATerm), ATerm d_46 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm xtc_store_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm u_53 (ATerm));
ATerm register_import_0 (ATerm);
ATerm table_union_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_53 (ATerm));
ATerm xtc_register_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm t_53 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm v_53 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm n_67 (ATerm), ATerm o_67 (ATerm));
ATerm union_1 (ATerm, ATerm p_67 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm i_57 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_53 (ATerm));
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_72 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm xtc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_0 (ATerm));
ATerm map_1 (ATerm, ATerm w_71 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_0 (ATerm));
ATerm Program_1 (ATerm, ATerm y_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_62 (ATerm));
ATerm Undefined_1 (ATerm, ATerm z_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_59 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_80 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_58 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_52 (ATerm), ATerm p_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_58 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_58 (ATerm));
ATerm xtc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm n_6;
  n_6 = t;
  {
    ATerm i_1 = NULL,u_1 = NULL;
    ATerm o_6;
    o_6 = t;
    {
      ATerm t_1 = NULL;
      t = d_62(t);
      {
        t_1 = t;
        if(((i_1 != NULL) && (i_1 != t_1)))
          _fail(t_1);
        else
          i_1 = t_1;
      }
    }
    t = o_6;
    {
      ATerm v_1 = NULL;
      v_1 = t;
      if(((u_1 != NULL) && (u_1 != v_1)))
        _fail(v_1);
      else
        u_1 = v_1;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_1)), not_null(i_1)));
        t = printnl_0(t);
      }
    }
  }
  t = n_6;
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
  ATerm q_6;
  q_6 = t;
  {
    ATerm l_2 = NULL;
    t = term_v_6;
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
  t = q_6;
  {
    ATerm c_0 (ATerm t)
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
    ATerm d_0 (ATerm t)
    {
      ATerm m_0 (ATerm t)
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
      t = fetch_1(t, m_0);
      return(t);
    }
    t = _2(t, c_0, d_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(m_2)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(k_2), not_null(n_2))));
      t = list_tool_0(t);
    }
  }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm s_53 (ATerm))
{
  ATerm n_0 (ATerm t)
  {
    ATerm w_6;
    w_6 = t;
    {
      ATerm x_2 = NULL;
      ATerm y_2 = NULL;
      t = term_x_6;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_2), term_y_6);
        t = geq_0(t);
      }
    }
    t = w_6;
    t = s_53(t);
    return(t);
  }
  t = try_1(t, n_0);
  return(t);
}
ATerm tool_query_0 (ATerm t)
{
  ATerm c_3 = NULL;
  t = term_z_6;
  {
    t = get_config_0(t);
    {
      ATerm o_0 (ATerm t)
      {
        ATerm d_3 = NULL;
        d_3 = t;
        {
          ATerm a_7 = t;
          int b_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL;
              ATerm p_0 (ATerm t)
              {
                ATerm q_0 (ATerm t)
                {
                  t = term_d_7;
                  return(t);
                }
                t = debug_1(t, q_0);
                return(t);
              }
              t = if_verbose3_1(t, p_0);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(d_3)));
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
                          ATerm h_7 = t;
                          int i_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = version_query_0(t);
                              LocalPopChoice(i_7);
                            }
                          else
                            {
                              t = h_7;
                              t = list_tool_0(t);
                            }
                        }
                      }
                    }
                  }
                }
              }
              LocalPopChoice(b_7);
            }
          else
            {
              t = a_7;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, term_o_7), not_null(d_3)));
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
        ATerm p_7;
        p_7 = t;
        t = SSL_print(not_null(l_3), not_null(m_3));
        t = p_7;
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
                      ATerm q_7 = t;
                      int s_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_t_7;
                          {
                            t = get_config_0(t);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, term_u_7), not_null(d_4)));
                              t = print_0(t);
                            }
                          }
                          LocalPopChoice(s_7);
                        }
                      else
                        {
                          t = q_7;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_7), not_null(d_4)), term_w_7), not_null(c_4)), term_v_7), not_null(x_3)));
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
ATerm Tool_1 (ATerm t, ATerm n_47 (ATerm))
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
            t = n_47(t);
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
  t = term_y_7;
  {
    t = get_config_0(t);
    {
      t = term_g_7;
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
  ATerm a_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = all_query_0(t);
      LocalPopChoice(d_8);
    }
  else
    {
      t = a_8;
      t = tool_query_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_46 (ATerm), ATerm d_46 (ATerm))
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
            t = c_46(t);
            {
              p_5 = t;
              {
                t = not_null(j_5);
                {
                  ATerm t_5 = NULL;
                  t = d_46(t);
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
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      {
        ATerm g_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_0);
            LocalPopChoice(h_8);
          }
        else
          {
            t = g_8;
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
                          ATerm m_8 = t;
                          int n_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(n_8);
                            }
                          else
                            {
                              t = m_8;
                              {
                                ATerm w_0 (ATerm t)
                                {
                                  t = term_o_8;
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
                            ATerm r_8;
                            r_8 = t;
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
                            t = r_8;
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
    t = (ATerm) ATmakeAppl(sym__2, term_s_8, not_null(c_7));
    {
      t = table_get_0(t);
      {
        ATerm x_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm t_8;
            t_8 = t;
            {
              ATerm e_7 = NULL;
              ATerm f_7 = NULL;
              f_7 = t;
              if(((e_7 != NULL) && (e_7 != f_7)))
                _fail(f_7);
              else
                e_7 = f_7;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_s_8, not_null(c_7), not_null(e_7));
                t = table_put_0(t);
              }
            }
            t = t_8;
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
      t = term_v_8;
      return(t);
    }
    t = say_1(t, a_1);
    return(t);
  }
  t = if_verbose1_1(t, z_0);
  {
    ATerm x_8;
    x_8 = t;
    {
      ATerm j_8 = NULL;
      t = term_y_8;
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
    t = x_8;
    {
      ATerm l_8 = NULL;
      t = term_g_7;
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
ATerm if_verbose5_1 (ATerm t, ATerm u_53 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm z_8;
    z_8 = t;
    {
      ATerm p_8 = NULL;
      ATerm q_8 = NULL;
      t = term_x_6;
      {
        t = get_config_0(t);
        {
          q_8 = t;
          if(((p_8 != NULL) && (p_8 != q_8)))
            _fail(q_8);
          else
            p_8 = q_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_8), term_a_9);
        t = geq_0(t);
      }
    }
    t = z_8;
    t = u_53(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm register_import_0 (ATerm t)
{
  ATerm u_8 = NULL;
  t = term_b_9;
  {
    ATerm w_8 = NULL;
    t = get_config_0(t);
    {
      u_8 = t;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            t = term_c_9;
            return(t);
          }
          t = debug_1(t, d_1);
          return(t);
        }
        t = if_verbose2_1(t, c_1);
        {
          t = term_b_9;
          {
            t = get_config_0(t);
            {
              w_8 = t;
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = term_i_9;
                    return(t);
                  }
                  t = debug_1(t, f_1);
                  return(t);
                }
                t = if_verbose5_1(t, e_1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_g_7, term_j_9, not_null(w_8));
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
        ATerm k_9;
        k_9 = t;
        {
          ATerm l_9 = NULL;
          ATerm m_9 = NULL,o_9 = NULL;
          ATerm n_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_9), not_null(g_9));
          {
            ATerm p_9 = t;
            int q_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(q_9);
              }
            else
              {
                t = p_9;
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
        t = k_9;
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
ATerm if_verbose1_1 (ATerm t, ATerm q_53 (ATerm))
{
  ATerm g_1 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm b_10 = NULL;
      ATerm c_10 = NULL;
      t = term_x_6;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_10), term_s_9);
        t = geq_0(t);
      }
    }
    t = r_9;
    t = q_53(t);
    return(t);
  }
  t = try_1(t, g_1);
  return(t);
}
ATerm xtc_register_0 (ATerm t)
{
  ATerm k_10 = NULL;
  t = term_z_6;
  {
    ATerm m_10 = NULL;
    t = get_config_0(t);
    {
      k_10 = t;
      {
        ATerm h_1 (ATerm t)
        {
          ATerm j_1 (ATerm t)
          {
            t = term_u_9;
            return(t);
          }
          t = say_1(t, j_1);
          return(t);
        }
        t = if_verbose1_1(t, h_1);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm l_1 (ATerm t)
            {
              t = term_v_9;
              return(t);
            }
            t = debug_1(t, l_1);
            return(t);
          }
          t = if_verbose2_1(t, k_1);
          {
            t = term_v_6;
            {
              ATerm o_10 = NULL;
              t = get_config_0(t);
              {
                m_10 = t;
                {
                  ATerm m_1 (ATerm t)
                  {
                    ATerm n_1 (ATerm t)
                    {
                      t = term_w_9;
                      return(t);
                    }
                    t = debug_1(t, n_1);
                    return(t);
                  }
                  t = if_verbose2_1(t, m_1);
                  {
                    t = term_t_7;
                    {
                      t = get_config_0(t);
                      {
                        o_10 = t;
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm p_1 (ATerm t)
                            {
                              t = term_y_9;
                              return(t);
                            }
                            t = debug_1(t, p_1);
                            return(t);
                          }
                          t = if_verbose2_1(t, o_1);
                          {
                            t = not_null(k_10);
                            {
                              ATerm q_1 (ATerm t)
                              {
                                ATerm q_10 = NULL,s_10 = NULL;
                                ATerm z_9;
                                z_9 = t;
                                {
                                  ATerm r_10 = NULL;
                                  r_10 = t;
                                  if(((q_10 != NULL) && (q_10 != r_10)))
                                    _fail(r_10);
                                  else
                                    q_10 = r_10;
                                }
                                t = z_9;
                                {
                                  ATerm t_10 = NULL,v_10 = NULL;
                                  ATerm u_10 = NULL;
                                  u_10 = t;
                                  if(((t_10 != NULL) && (t_10 != u_10)))
                                    _fail(u_10);
                                  else
                                    t_10 = u_10;
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_10)), term_a_10), not_null(o_10));
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
                                    t = (ATerm) ATmakeAppl(sym__3, term_g_7, (ATerm)ATmakeAppl(sym_Tool_1, not_null(q_10)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(m_10), not_null(s_10))));
                                    t = table_union_0(t);
                                  }
                                }
                                return(t);
                              }
                              t = map_1(t, q_1);
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
ATerm if_verbose4_1 (ATerm t, ATerm t_53 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm d_11 = NULL;
      ATerm e_11 = NULL;
      t = term_x_6;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), term_e_10);
        t = geq_0(t);
      }
    }
    t = d_10;
    t = t_53(t);
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm v_53 (ATerm))
{
  ATerm s_1 (ATerm t)
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm h_11 = NULL;
      ATerm i_11 = NULL;
      t = term_x_6;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_11), term_g_10);
        t = geq_0(t);
      }
    }
    t = f_10;
    t = v_53(t);
    return(t);
  }
  t = try_1(t, s_1);
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
ATerm HdMember_p__2 (ATerm t, ATerm n_67 (ATerm), ATerm o_67 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  u_11 = t;
  t_11 :
  if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
    {
      v_11 = ATgetFirst((ATermList) u_11);
      w_11 = (ATerm) ATgetNext((ATermList) u_11);
      {
        t = o_67(t);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm z_11 = NULL;
            z_11 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(z_11));
              t = n_67(t);
            }
            return(t);
          }
          t = fetch_1(t, w_1);
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
ATerm union_1 (ATerm t, ATerm p_67 (ATerm))
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
            ATerm h_10 = t;
            int i_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(h_12);
                LocalPopChoice(i_10);
              }
            else
              {
                t = h_10;
                {
                  ATerm j_10 = t;
                  int l_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_1 (ATerm t)
                      {
                        t = not_null(h_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_67, x_1);
                      t = l_12(t);
                      LocalPopChoice(l_10);
                    }
                  else
                    {
                      t = j_10;
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
        ATerm n_10;
        n_10 = t;
        {
          ATerm x_12 = NULL;
          ATerm y_12 = NULL,a_13 = NULL;
          ATerm z_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), not_null(s_12));
          {
            ATerm p_10 = t;
            int w_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(w_10);
              }
            else
              {
                t = p_10;
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
        t = n_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm i_57 (ATerm))
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
          ATerm y_1 (ATerm t)
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
                  t = i_57(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, y_1);
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
  v_13 = t;
  t = SSL_ReadFromFile(not_null(v_13));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm a_14 = NULL;
  ATerm c_14 = NULL;
  a_14 = t;
  {
    ATerm x_10;
    x_10 = t;
    {
      ATerm d_14 = NULL;
      t = term_y_10;
      {
        d_14 = t;
        if(((c_14 != NULL) && (c_14 != d_14)))
          _fail(d_14);
        else
          c_14 = d_14;
      }
    }
    t = x_10;
    {
      t = SSL_open_file(not_null(a_14), not_null(c_14));
      t = SSL_close_file(not_null(a_14));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm i_14 = NULL;
  ATerm k_14 = NULL;
  i_14 = t;
  {
    ATerm z_10 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_14)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_10;
      }
    {
      ATerm a_11;
      a_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_g_7, term_b_11, (ATerm) ATinsert(ATempty, not_null(i_14)));
        t = table_put_0(t);
      }
      t = a_11;
      {
        ATerm z_1 (ATerm t)
        {
          ATerm a_2 (ATerm t)
          {
            t = term_c_11;
            return(t);
          }
          t = debug_1(t, a_2);
          return(t);
        }
        t = if_verbose4_1(t, z_1);
        {
          ATerm f_11 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(g_11);
            }
          else
            {
              t = f_11;
              t = (ATerm) ATempty;
            }
          {
            ATerm b_2 (ATerm t)
            {
              ATerm d_2 (ATerm t)
              {
                t = term_j_11;
                return(t);
              }
              t = say_1(t, d_2);
              return(t);
            }
            t = if_verbose6_1(t, b_2);
            {
              ATerm l_14 = NULL;
              l_14 = t;
              if(((k_14 != NULL) && (k_14 != l_14)))
                _fail(l_14);
              else
                k_14 = l_14;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_g_7, not_null(k_14));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm e_2 (ATerm t)
                    {
                      ATerm f_2 (ATerm t)
                      {
                        t = term_k_11;
                        return(t);
                      }
                      t = say_1(t, f_2);
                      return(t);
                    }
                    t = if_verbose6_1(t, e_2);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_g_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_14)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm g_2 (ATerm t)
                          {
                            ATerm i_2 (ATerm t)
                            {
                              t = term_j_11;
                              return(t);
                            }
                            t = say_1(t, i_2);
                            return(t);
                          }
                          t = if_verbose4_1(t, g_2);
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
        ATerm p_11;
        p_11 = t;
        {
          ATerm q_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_14), not_null(s_14));
              LocalPopChoice(r_11);
            }
          else
            {
              t = q_11;
              t = SSL_gtr(not_null(r_14), not_null(s_14));
            }
        }
        t = p_11;
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
  ATerm s_11 = t;
  int x_11 = stack_ptr;
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
      LocalPopChoice(x_11);
    }
  else
    {
      t = s_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_53 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm y_11;
    y_11 = t;
    {
      ATerm e_15 = NULL;
      ATerm f_15 = NULL;
      t = term_x_6;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), term_a_12);
        t = geq_0(t);
      }
    }
    t = y_11;
    t = r_53(t);
    return(t);
  }
  t = try_1(t, t_2);
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
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_8;
      t = get_config_0(t);
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm d_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_j_12;
            t = getenv_0(t);
            LocalPopChoice(i_12);
          }
        else
          {
            t = d_12;
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
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,g_16 = NULL;
  u_15 = t;
  s_15 :
  if(match_string(u_15, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
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
              g_16 = (ATerm) ATgetNext((ATermList) w_15);
              {
                ATerm k_16 = NULL;
                ATerm k_12;
                k_12 = t;
                {
                  t = not_null(v_15);
                  t = j_0(t);
                }
                t = k_12;
                {
                  ATerm l_16 = NULL;
                  t = not_null(x_15);
                  {
                    t = k_0(t);
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
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
        w_16 = t;
        v_16 :
        if(((ATgetType(w_16) == AT_LIST) && !(ATisEmpty(w_16))))
          {
            x_16 = ATgetFirst((ATermList) w_16);
            y_16 = (ATerm) ATgetNext((ATermList) w_16);
            {
              t = not_null(x_16);
              {
                ATerm u_2 (ATerm t)
                {
                  t = not_null(y_16);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_2);
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
  ATerm i_17 = NULL;
  ATerm k_17 = NULL;
  i_17 = t;
  {
    ATerm l_17 = NULL;
    ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
    t = not_null(i_17);
    {
      l_17 = t;
      {
        t = SSL_explode_term(not_null(l_17));
        {
          n_17 = t;
          g_17 :
          if(match_cons(n_17, sym__2))
            {
              o_17 = ATgetArgument(n_17, 0);
              p_17 = ATgetArgument(n_17, 1);
              h_17 :
              if(match_string(o_17, ""))
                {
                  if(((k_17 != NULL) && (k_17 != p_17)))
                    _fail(p_17);
                  else
                    k_17 = p_17;
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
      t = not_null(k_17);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_72 (ATerm))
{
  ATerm u_17 (ATerm t)
  {
    ATerm o_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_17);
        LocalPopChoice(u_12);
      }
    else
      {
        t = o_12;
        {
          t = Nil_0(t);
          t = l_72(t);
        }
      }
    return(t);
  }
  t = u_17(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  w_17 :
  if(match_cons(x_17, sym__2))
    {
      y_17 = ATgetArgument(x_17, 0);
      z_17 = ATgetArgument(x_17, 1);
      {
        t = not_null(y_17);
        {
          ATerm v_2 (ATerm t)
          {
            t = not_null(z_17);
            return(t);
          }
          t = at_end_1(t, v_2);
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
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  h_18 :
  if(match_cons(k_18, sym__2))
    {
      l_18 = ATgetArgument(k_18, 0);
      m_18 = ATgetArgument(k_18, 1);
      {
        ATerm w_18 = NULL;
        ATerm x_18 = NULL,z_18 = NULL;
        ATerm y_18 = NULL;
        t = not_null(l_18);
        {
          ATerm b_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(c_13);
            }
          else
            {
              t = b_13;
              t = (ATerm) ATempty;
            }
          {
            y_18 = t;
            if(((x_18 != NULL) && (x_18 != y_18)))
              _fail(y_18);
            else
              x_18 = y_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_18), not_null(x_18));
          {
            t = conc_0(t);
            {
              z_18 = t;
              if(((w_18 != NULL) && (w_18 != z_18)))
                _fail(z_18);
              else
                w_18 = z_18;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_8, not_null(l_18), not_null(w_18));
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
      ATerm w_2 (ATerm t)
      {
        ATerm v_19 = NULL;
        v_19 = t;
        d_19 :
        if(!(match_string(v_19, "-r")))
          {
            if(!(match_string(v_19, "--repository")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        ATerm f_13;
        f_13 = t;
        {
          ATerm w_19 = NULL;
          ATerm x_19 = NULL;
          x_19 = t;
          if(((w_19 != NULL) && (w_19 != x_19)))
            _fail(x_19);
          else
            w_19 = x_19;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(w_19));
            t = set_config_0(t);
          }
        }
        t = f_13;
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_l_13;
        return(t);
      }
      t = ArgOption_3(t, w_2, z_2, a_3);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm m_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_3 (ATerm t)
            {
              ATerm y_19 = NULL;
              y_19 = t;
              f_19 :
              if(!(match_string(y_19, "i")))
                {
                  if(!(match_string(y_19, "imp")))
                    {
                      if(!(match_string(y_19, "import")))
                        {
                          _fail(t);
                        }
                    }
                }
              return(t);
            }
            ATerm e_3 (ATerm t)
            {
              ATerm r_13;
              r_13 = t;
              {
                ATerm z_19 = NULL;
                ATerm a_20 = NULL;
                a_20 = t;
                if(((z_19 != NULL) && (z_19 != a_20)))
                  _fail(a_20);
                else
                  z_19 = a_20;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATempty, not_null(z_19)));
                  t = extend_config_0(t);
                }
              }
              t = r_13;
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              t = term_s_13;
              return(t);
            }
            t = ArgOption_3(t, b_3, e_3, g_3);
            LocalPopChoice(q_13);
          }
        else
          {
            t = m_13;
            {
              ATerm t_13 = t;
              int u_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_3 (ATerm t)
                  {
                    ATerm b_20 = NULL;
                    b_20 = t;
                    h_19 :
                    if(!(match_string(b_20, "r")))
                      {
                        if(!(match_string(b_20, "reg")))
                          {
                            if(!(match_string(b_20, "register")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm i_3 (ATerm t)
                  {
                    ATerm w_13;
                    w_13 = t;
                    {
                      ATerm c_20 = NULL;
                      ATerm d_20 = NULL;
                      d_20 = t;
                      if(((c_20 != NULL) && (c_20 != d_20)))
                        _fail(d_20);
                      else
                        c_20 = d_20;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_x_13, not_null(c_20));
                        t = set_config_0(t);
                      }
                    }
                    t = w_13;
                    return(t);
                  }
                  ATerm n_3 (ATerm t)
                  {
                    t = term_y_13;
                    return(t);
                  }
                  t = Option_3(t, h_3, i_3, n_3);
                  LocalPopChoice(u_13);
                }
              else
                {
                  t = t_13;
                  {
                    ATerm z_13 = t;
                    int b_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_3 (ATerm t)
                        {
                          ATerm e_20 = NULL;
                          e_20 = t;
                          j_19 :
                          if(!(match_string(e_20, "-t")))
                            {
                              if(!(match_string(e_20, "--tool")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm p_3 (ATerm t)
                        {
                          ATerm e_14;
                          e_14 = t;
                          {
                            ATerm f_20 = NULL;
                            ATerm g_20 = NULL;
                            g_20 = t;
                            if(((f_20 != NULL) && (f_20 != g_20)))
                              _fail(g_20);
                            else
                              f_20 = g_20;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATempty, not_null(f_20)));
                              t = extend_config_0(t);
                            }
                          }
                          t = e_14;
                          return(t);
                        }
                        ATerm q_3 (ATerm t)
                        {
                          t = term_f_14;
                          return(t);
                        }
                        t = ArgOption_3(t, o_3, p_3, q_3);
                        LocalPopChoice(b_14);
                      }
                    else
                      {
                        t = z_13;
                        {
                          ATerm g_14 = t;
                          int h_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_3 (ATerm t)
                              {
                                ATerm h_20 = NULL;
                                h_20 = t;
                                l_19 :
                                if(!(match_string(h_20, "-l")))
                                  {
                                    if(!(match_string(h_20, "--location")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm z_3 (ATerm t)
                              {
                                ATerm j_14;
                                j_14 = t;
                                {
                                  ATerm i_20 = NULL;
                                  ATerm j_20 = NULL;
                                  j_20 = t;
                                  if(((i_20 != NULL) && (i_20 != j_20)))
                                    _fail(j_20);
                                  else
                                    i_20 = j_20;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_t_7, not_null(i_20));
                                    t = set_config_0(t);
                                  }
                                }
                                t = j_14;
                                return(t);
                              }
                              ATerm a_4 (ATerm t)
                              {
                                t = term_m_14;
                                return(t);
                              }
                              t = ArgOption_3(t, r_3, z_3, a_4);
                              LocalPopChoice(h_14);
                            }
                          else
                            {
                              t = g_14;
                              {
                                ATerm n_14 = t;
                                int o_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_4 (ATerm t)
                                    {
                                      ATerm k_20 = NULL;
                                      k_20 = t;
                                      n_19 :
                                      if(!(match_string(k_20, "-V")))
                                        {
                                          if(!(match_string(k_20, "--Version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm f_4 (ATerm t)
                                    {
                                      ATerm t_14;
                                      t_14 = t;
                                      {
                                        ATerm l_20 = NULL;
                                        ATerm m_20 = NULL;
                                        m_20 = t;
                                        if(((l_20 != NULL) && (l_20 != m_20)))
                                          _fail(m_20);
                                        else
                                          l_20 = m_20;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_v_6, not_null(l_20));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = t_14;
                                      return(t);
                                    }
                                    ATerm g_4 (ATerm t)
                                    {
                                      t = term_u_14;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_4, f_4, g_4);
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
                                          ATerm h_4 (ATerm t)
                                          {
                                            ATerm n_20 = NULL;
                                            n_20 = t;
                                            p_19 :
                                            if(!(match_string(n_20, "q")))
                                              {
                                                if(!(match_string(n_20, "query")))
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            return(t);
                                          }
                                          ATerm i_4 (ATerm t)
                                          {
                                            ATerm c_15;
                                            c_15 = t;
                                            {
                                              ATerm o_20 = NULL;
                                              ATerm p_20 = NULL;
                                              p_20 = t;
                                              if(((o_20 != NULL) && (o_20 != p_20)))
                                                _fail(p_20);
                                              else
                                                o_20 = p_20;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, term_d_15, not_null(o_20));
                                                t = set_config_0(t);
                                              }
                                            }
                                            t = c_15;
                                            return(t);
                                          }
                                          ATerm j_4 (ATerm t)
                                          {
                                            t = term_g_15;
                                            return(t);
                                          }
                                          t = Option_3(t, h_4, i_4, j_4);
                                          LocalPopChoice(w_14);
                                        }
                                      else
                                        {
                                          t = v_14;
                                          {
                                            ATerm h_15 = t;
                                            int j_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm k_4 (ATerm t)
                                                {
                                                  ATerm q_20 = NULL;
                                                  q_20 = t;
                                                  r_19 :
                                                  if(!(match_string(q_20, "-a")))
                                                    {
                                                      if(!(match_string(q_20, "--all")))
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  return(t);
                                                }
                                                ATerm l_4 (ATerm t)
                                                {
                                                  ATerm k_15;
                                                  k_15 = t;
                                                  {
                                                    t = term_n_15;
                                                    t = set_config_0(t);
                                                  }
                                                  t = k_15;
                                                  return(t);
                                                }
                                                ATerm p_4 (ATerm t)
                                                {
                                                  t = term_o_15;
                                                  return(t);
                                                }
                                                t = Option_3(t, k_4, l_4, p_4);
                                                LocalPopChoice(j_15);
                                              }
                                            else
                                              {
                                                t = h_15;
                                                {
                                                  ATerm p_15 = t;
                                                  int q_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_4 (ATerm t)
                                                      {
                                                        ATerm r_20 = NULL;
                                                        r_20 = t;
                                                        s_19 :
                                                        if(!(match_string(r_20, "-L")))
                                                          {
                                                            if(!(match_string(r_20, "--Location")))
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm u_4 (ATerm t)
                                                      {
                                                        ATerm r_15;
                                                        r_15 = t;
                                                        {
                                                          t = term_y_15;
                                                          t = set_config_0(t);
                                                        }
                                                        t = r_15;
                                                        return(t);
                                                      }
                                                      ATerm x_4 (ATerm t)
                                                      {
                                                        t = term_z_15;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, q_4, u_4, x_4);
                                                      LocalPopChoice(q_15);
                                                    }
                                                  else
                                                    {
                                                      t = p_15;
                                                      {
                                                        ATerm y_4 (ATerm t)
                                                        {
                                                          ATerm s_20 = NULL;
                                                          s_20 = t;
                                                          t_19 :
                                                          if(!(match_string(s_20, "--verbose")))
                                                            {
                                                              _fail(t);
                                                            }
                                                          return(t);
                                                        }
                                                        ATerm z_4 (ATerm t)
                                                        {
                                                          ATerm a_16;
                                                          a_16 = t;
                                                          {
                                                            ATerm t_20 = NULL;
                                                            ATerm u_20 = NULL;
                                                            t = string_to_int_0(t);
                                                            {
                                                              u_20 = t;
                                                              if(((t_20 != NULL) && (t_20 != u_20)))
                                                                _fail(u_20);
                                                              else
                                                                t_20 = u_20;
                                                            }
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__2, term_x_6, not_null(t_20));
                                                              t = set_config_0(t);
                                                            }
                                                          }
                                                          t = a_16;
                                                          return(t);
                                                        }
                                                        ATerm a_5 (ATerm t)
                                                        {
                                                          t = term_b_16;
                                                          return(t);
                                                        }
                                                        t = ArgOption_3(t, y_4, z_4, a_5);
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
  ATerm e_21 = NULL;
  e_21 = t;
  t = SSL_table_destroy(not_null(e_21));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  i_21 = t;
  h_21 :
  if(((ATgetType(i_21) == AT_LIST) && ATisEmpty(i_21)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
        {
          j_21 = ATgetFirst((ATermList) i_21);
          k_21 = (ATerm) ATgetNext((ATermList) i_21);
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
  ATerm c_16;
  c_16 = t;
  {
    ATerm n_21 = NULL;
    ATerm w_21 = NULL;
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        {
          ATerm o_21 = NULL;
          ATerm p_21 = NULL;
          p_21 = t;
          if(((o_21 != NULL) && (o_21 != p_21)))
            _fail(p_21);
          else
            o_21 = p_21;
          t = (ATerm) ATinsert(ATempty, not_null(o_21));
        }
      }
    {
      w_21 = t;
      if(((n_21 != NULL) && (n_21 != w_21)))
        _fail(w_21);
      else
        n_21 = w_21;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_7, not_null(n_21));
      t = printnl_0(t);
    }
  }
  t = c_16;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_16), term_f_16);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_71 (ATerm))
{
  ATerm a_22 (ATerm t)
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        t = Cons_2(t, w_71, a_22);
      }
    return(t);
  }
  t = a_22(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
  s_22 = t;
  m_22 :
  if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
    {
      q_22 = ATgetFirst((ATermList) s_22);
      r_22 = (ATerm) ATgetNext((ATermList) s_22);
      {
        ATerm v_22 = NULL;
        t = not_null(r_22);
        {
          ATerm m_16;
          m_16 = t;
          {
            ATerm w_22 = NULL,y_22 = NULL,a_23 = NULL;
            ATerm n_16;
            n_16 = t;
            {
              ATerm x_22 = NULL;
              t = h_0(t);
              {
                x_22 = t;
                if(((w_22 != NULL) && (w_22 != x_22)))
                  _fail(x_22);
                else
                  w_22 = x_22;
              }
            }
            t = n_16;
            {
              ATerm z_22 = NULL;
              t = not_null(q_22);
              {
                t = g_0(t);
                {
                  z_22 = t;
                  if(((y_22 != NULL) && (y_22 != z_22)))
                    _fail(z_22);
                  else
                    y_22 = z_22;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_22)), not_null(y_22));
                {
                  a_23 = t;
                  if(((v_22 != NULL) && (v_22 != a_23)))
                    _fail(a_23);
                  else
                    v_22 = a_23;
                }
              }
            }
          }
          t = m_16;
          {
            ATerm b_5 (ATerm t)
            {
              t = not_null(v_22);
              return(t);
            }
            t = reverse_acc_2(t, g_0, b_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(s_22) == AT_LIST) && ATisEmpty(s_22)))
        {
          {
            t = term_l_15;
            t = h_0(t);
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
  ATerm c_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_16), term_p_16), term_o_16);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_47 (ATerm))
{
  ATerm s_23 = NULL,t_23 = NULL;
  s_23 = t;
  r_23 :
  if(match_cons(s_23, sym_Program_1))
    {
      t_23 = ATgetArgument(s_23, 0);
      {
        ATerm w_23 = NULL,y_23 = NULL;
        ATerm x_23 = NULL;
        t = SSLgetAnnotations(not_null(s_23));
        {
          x_23 = t;
          if(((w_23 != NULL) && (w_23 != x_23)))
            _fail(x_23);
          else
            w_23 = x_23;
        }
        {
          t = not_null(t_23);
          {
            ATerm a_24 = NULL;
            t = y_47(t);
            {
              y_23 = t;
              {
                ATerm b_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_23)), not_null(w_23));
                {
                  b_24 = t;
                  if(((a_24 != NULL) && (a_24 != b_24)))
                    _fail(b_24);
                  else
                    a_24 = b_24;
                }
                t = not_null(a_24);
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
  ATerm k_24 = NULL;
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_24 = NULL;
      t = term_t_16;
      {
        t = get_config_0(t);
        {
          l_24 = t;
          if(((k_24 != NULL) && (k_24 != l_24)))
            _fail(l_24);
          else
            k_24 = l_24;
        }
      }
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        ATerm d_5 (ATerm t)
        {
          ATerm e_5 (ATerm t)
          {
            ATerm m_24 = NULL;
            m_24 = t;
            if(((k_24 != NULL) && (k_24 != m_24)))
              _fail(m_24);
            else
              k_24 = m_24;
            return(t);
          }
          t = Program_1(t, e_5);
          return(t);
        }
        t = option_defined_1(t, d_5);
      }
    }
  {
    ATerm f_5 (ATerm t)
    {
      ATerm k_5 (ATerm t)
      {
        t = not_null(k_24);
        return(t);
      }
      t = short_description_1(t, k_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, f_5);
    {
      t = term_u_16;
      {
        t = echo_0(t);
        {
          t = term_b_17;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_5 (ATerm t)
                {
                  ATerm n_24 = NULL;
                  ATerm o_24 = NULL;
                  o_24 = t;
                  if(((n_24 != NULL) && (n_24 != o_24)))
                    _fail(o_24);
                  else
                    n_24 = o_24;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_24)), term_c_17);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_5);
                {
                  ATerm m_5 (ATerm t)
                  {
                    ATerm p_24 = NULL;
                    ATerm q_24 = NULL;
                    ATerm q_5 (ATerm t)
                    {
                      t = not_null(k_24);
                      return(t);
                    }
                    t = long_description_1(t, q_5);
                    {
                      q_24 = t;
                      if(((p_24 != NULL) && (p_24 != q_24)))
                        _fail(q_24);
                      else
                        p_24 = q_24;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(p_24)), term_u_7);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_5);
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
  ATerm x_24 = NULL,f_25 = NULL,g_25 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym__2))
    {
      f_25 = ATgetArgument(x_24, 0);
      g_25 = ATgetArgument(x_24, 1);
      {
        ATerm d_17;
        d_17 = t;
        t = SSL_printnl(not_null(f_25), not_null(g_25));
        t = d_17;
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
  ATerm e_17;
  e_17 = t;
  {
    ATerm l_25 = NULL;
    ATerm m_25 = NULL;
    m_25 = t;
    if(((l_25 != NULL) && (l_25 != m_25)))
      _fail(m_25);
    else
      l_25 = m_25;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATinsert(ATempty, not_null(l_25)));
      t = printnl_0(t);
    }
  }
  t = e_17;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_62 (ATerm))
{
  ATerm f_17;
  f_17 = t;
  {
    t = e_62(t);
    t = debug_0(t);
  }
  t = f_17;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_47 (ATerm))
{
  ATerm v_25 = NULL,w_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_Undefined_1))
    {
      w_25 = ATgetArgument(v_25, 0);
      {
        ATerm z_25 = NULL,b_26 = NULL;
        ATerm a_26 = NULL;
        t = SSLgetAnnotations(not_null(v_25));
        {
          a_26 = t;
          if(((z_25 != NULL) && (z_25 != a_26)))
            _fail(a_26);
          else
            z_25 = a_26;
        }
        {
          t = not_null(w_25);
          {
            ATerm d_26 = NULL;
            t = z_47(t);
            {
              b_26 = t;
              {
                ATerm e_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_26)), not_null(z_25));
                {
                  e_26 = t;
                  if(((d_26 != NULL) && (d_26 != e_26)))
                    _fail(e_26);
                  else
                    d_26 = e_26;
                }
                t = not_null(d_26);
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
ATerm fetch_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm j_26 (ATerm t)
  {
    ATerm j_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_72, _id);
        LocalPopChoice(m_17);
      }
    else
      {
        t = j_17;
        t = Cons_2(t, _id, j_26);
      }
    return(t);
  }
  t = j_26(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_59 (ATerm))
{
  t = fetch_1(t, s_59);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym_Help_0))
    {
      ATerm q_26 = NULL,s_26 = NULL;
      ATerm q_17;
      q_17 = t;
      {
        ATerm r_26 = NULL;
        t = SSLgetAnnotations(not_null(o_26));
        {
          r_26 = t;
          if(((q_26 != NULL) && (q_26 != r_26)))
            _fail(r_26);
          else
            q_26 = r_26;
        }
      }
      t = q_17;
      {
        ATerm t_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_26));
        {
          t_26 = t;
          if(((s_26 != NULL) && (s_26 != t_26)))
            _fail(t_26);
          else
            s_26 = t_26;
        }
        t = not_null(s_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_80(t);
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym__2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      t = SSL_table_get(not_null(a_27), not_null(b_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym__3))
    {
      j_27 = ATgetArgument(i_27, 0);
      k_27 = ATgetArgument(i_27, 1);
      l_27 = ATgetArgument(i_27, 2);
      {
        ATerm t_17;
        t_17 = t;
        {
          ATerm p_27 = NULL;
          ATerm q_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), not_null(k_27));
          {
            ATerm v_17 = t;
            int a_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_18);
              }
            else
              {
                t = v_17;
                t = (ATerm) ATempty;
              }
            {
              q_27 = t;
              if(((p_27 != NULL) && (p_27 != q_27)))
                _fail(q_27);
              else
                p_27 = q_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_27), not_null(k_27), (ATerm) ATinsert(CheckATermList(not_null(p_27)), not_null(l_27)));
            t = table_put_0(t);
          }
        }
        t = t_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_58 (ATerm))
{
  ATerm u_27 = NULL;
  ATerm v_27 = NULL;
  t = term_l_15;
  {
    t = s_58(t);
    {
      v_27 = t;
      if(((u_27 != NULL) && (u_27 != v_27)))
        _fail(v_27);
      else
        u_27 = v_27;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_16, term_a_17, not_null(u_27));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm c_28 = NULL,d_28 = NULL,i_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_string(c_28, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
        {
          d_28 = ATgetFirst((ATermList) c_28);
          i_28 = (ATerm) ATgetNext((ATermList) c_28);
          {
            ATerm l_28 = NULL;
            ATerm b_18;
            b_18 = t;
            {
              t = not_null(d_28);
              t = a_0(t);
            }
            t = b_18;
            {
              ATerm n_28 = NULL;
              t = term_l_15;
              {
                t = b_0(t);
                {
                  n_28 = t;
                  if(((l_28 != NULL) && (l_28 != n_28)))
                    _fail(n_28);
                  else
                    l_28 = n_28;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_28)), not_null(l_28));
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
    ATerm u_28 = NULL;
    u_28 = t;
    t_28 :
    if(!(match_string(u_28, "--help")))
      {
        if(!(match_string(u_28, "-h")))
          {
            if(!(match_string(u_28, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_d_18;
    {
      t = set_config_0(t);
      t = term_e_18;
    }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_f_18;
    return(t);
  }
  t = Option_3(t, s_5, v_5, w_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  w_28 :
  if(((ATgetType(x_28) == AT_LIST) && !(ATisEmpty(x_28))))
    {
      y_28 = ATgetFirst((ATermList) x_28);
      z_28 = (ATerm) ATgetNext((ATermList) x_28);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_28)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_28)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_52 (ATerm), ATerm p_52 (ATerm))
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  i_29 :
  if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
    {
      k_29 = ATgetFirst((ATermList) j_29);
      l_29 = (ATerm) ATgetNext((ATermList) j_29);
      {
        ATerm p_29 = NULL,r_29 = NULL;
        ATerm q_29 = NULL;
        t = SSLgetAnnotations(not_null(j_29));
        {
          q_29 = t;
          if(((p_29 != NULL) && (p_29 != q_29)))
            _fail(q_29);
          else
            p_29 = q_29;
        }
        {
          t = not_null(k_29);
          {
            ATerm t_29 = NULL;
            t = o_52(t);
            {
              r_29 = t;
              {
                t = not_null(l_29);
                {
                  ATerm v_29 = NULL;
                  t = p_52(t);
                  {
                    t_29 = t;
                    {
                      ATerm w_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_29)), not_null(r_29)), not_null(p_29));
                      {
                        w_29 = t;
                        if(((v_29 != NULL) && (v_29 != w_29)))
                          _fail(w_29);
                        else
                          v_29 = w_29;
                      }
                      t = not_null(v_29);
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
  ATerm g_30 = NULL;
  g_30 = t;
  f_30 :
  if(((ATgetType(g_30) == AT_LIST) && ATisEmpty(g_30)))
    {
      {
        ATerm i_30 = NULL,k_30 = NULL;
        ATerm g_18;
        g_18 = t;
        {
          ATerm j_30 = NULL;
          t = SSLgetAnnotations(not_null(g_30));
          {
            j_30 = t;
            if(((i_30 != NULL) && (i_30 != j_30)))
              _fail(j_30);
            else
              i_30 = j_30;
          }
        }
        t = g_18;
        {
          ATerm l_30 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_30));
          {
            l_30 = t;
            if(((k_30 != NULL) && (k_30 != l_30)))
              _fail(l_30);
            else
              k_30 = l_30;
          }
          t = not_null(k_30);
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
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  s_30 :
  if(match_cons(t_30, sym__2))
    {
      u_30 = ATgetArgument(t_30, 0);
      v_30 = ATgetArgument(t_30, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_8, not_null(u_30), not_null(v_30));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_58 (ATerm))
{
  ATerm i_18;
  i_18 = t;
  {
    ATerm x_5 (ATerm t)
    {
      t = term_j_18;
      t = q_58(t);
      return(t);
    }
    t = try_1(t, x_5);
  }
  t = i_18;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm f_31 = NULL;
      ATerm n_18;
      n_18 = t;
      {
        ATerm d_31 = NULL;
        ATerm e_31 = NULL;
        e_31 = t;
        if(((d_31 != NULL) && (d_31 != e_31)))
          _fail(e_31);
        else
          d_31 = e_31;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_16, not_null(d_31));
          t = set_config_0(t);
        }
      }
      t = n_18;
      {
        ATerm g_31 = NULL;
        g_31 = t;
        if(((f_31 != NULL) && (f_31 != g_31)))
          _fail(g_31);
        else
          f_31 = g_31;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_31));
      }
      return(t);
    }
    ATerm z_5 (ATerm t)
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
              LocalPopChoice(r_18);
            }
          else
            {
              t = q_18;
              {
                t = q_58(t);
                t = Cons_2(t, _id, z_5);
              }
            }
          LocalPopChoice(p_18);
        }
      else
        {
          t = o_18;
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
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
  ATerm s_18;
  s_18 = t;
  {
    ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
    p_31 = t;
    l_31 :
    if(match_cons(p_31, sym__3))
      {
        q_31 = ATgetArgument(p_31, 0);
        r_31 = ATgetArgument(p_31, 1);
        s_31 = ATgetArgument(p_31, 2);
        {
          if(((m_31 != NULL) && (m_31 != q_31)))
            _fail(q_31);
          else
            m_31 = q_31;
          {
            if(((n_31 != NULL) && (n_31 != r_31)))
              _fail(r_31);
            else
              n_31 = r_31;
            {
              if(((o_31 != NULL) && (o_31 != s_31)))
                _fail(s_31);
              else
                o_31 = s_31;
              t = SSL_table_put(not_null(m_31), not_null(n_31), not_null(o_31));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_58 (ATerm))
{
  ATerm v_31 = NULL;
  ATerm t_18;
  t_18 = t;
  {
    t = term_u_18;
    t = table_put_0(t);
  }
  t = t_18;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm v_18 = t;
      int a_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_58(t);
          LocalPopChoice(a_19);
        }
      else
        {
          t = v_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_6);
    {
      ATerm c_6 (ATerm t)
      {
        ATerm b_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_19;
            e_19 = t;
            {
              ATerm g_19 = t;
              int i_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_18;
                  t = get_config_0(t);
                  LocalPopChoice(i_19);
                }
              else
                {
                  t = g_19;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = e_19;
            {
              t = system_usage_0(t);
              {
                t = term_k_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(c_19);
          }
        else
          {
            t = b_19;
            {
              ATerm d_6 (ATerm t)
              {
                ATerm e_6 (ATerm t)
                {
                  ATerm w_31 = NULL;
                  w_31 = t;
                  if(((v_31 != NULL) && (v_31 != w_31)))
                    _fail(w_31);
                  else
                    v_31 = w_31;
                  return(t);
                }
                t = Undefined_1(t, e_6);
                return(t);
              }
              t = option_defined_1(t, d_6);
              {
                ATerm f_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_31)), term_m_19);
                  return(t);
                }
                t = say_1(t, f_6);
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
      t = try_1(t, c_6);
      {
        ATerm o_19;
        o_19 = t;
        {
          t = term_z_16;
          t = table_destroy_0(t);
        }
        t = o_19;
      }
    }
  }
  return(t);
}
ATerm xtc_0 (ATerm t)
{
  ATerm q_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_options_1(t, xtc_options_0);
      {
        t = xtc_location_0(t);
        {
          ATerm g_6 (ATerm t)
          {
            ATerm h_6 (ATerm t)
            {
              t = term_v_20;
              return(t);
            }
            t = debug_1(t, h_6);
            return(t);
          }
          t = if_verbose2_1(t, g_6);
          {
            t = xtc_read_0(t);
            {
              ATerm w_20 = t;
              int x_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_20 = t;
                  int z_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_x_13;
                      {
                        t = get_config_0(t);
                        t = xtc_register_0(t);
                      }
                      LocalPopChoice(z_20);
                    }
                  else
                    {
                      t = y_20;
                      {
                        t = term_b_9;
                        {
                          t = get_config_0(t);
                          t = register_import_0(t);
                        }
                      }
                    }
                  t = xtc_store_0(t);
                  LocalPopChoice(x_20);
                }
              else
                {
                  t = w_20;
                  {
                    t = term_d_15;
                    {
                      t = get_config_0(t);
                      t = xtc_query_0(t);
                    }
                  }
                }
              {
                t = term_k_19;
                t = exit_0(t);
              }
            }
          }
        }
      }
      LocalPopChoice(u_19);
    }
  else
    {
      t = q_19;
      {
        ATerm i_6 (ATerm t)
        {
          t = term_a_21;
          return(t);
        }
        t = debug_1(t, i_6);
      }
    }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = xtc_0(t);
  return(t);
}
