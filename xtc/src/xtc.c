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
ATerm term_l_20;
ATerm term_g_19;
ATerm term_w_18;
ATerm term_s_18;
ATerm term_h_18;
ATerm term_z_17;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_w_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_r_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_o_12;
ATerm term_e_12;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_b_11;
ATerm term_x_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_e_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_q_6;
ATerm term_o_6;
void init_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools\n", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_j_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_r_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__3, term_q_16, term_r_16, (ATerm) ATempty);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm s_60 (ATerm));
ATerm exit_0 (ATerm);
ATerm version_query_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm v_52 (ATerm));
ATerm tool_query_0 (ATerm);
ATerm print_0 (ATerm);
ATerm list_tool_0 (ATerm);
ATerm Tool_1 (ATerm, ATerm w_46 (ATerm));
ATerm all_query_0 (ATerm);
ATerm xtc_query_0 (ATerm);
ATerm _2 (ATerm, ATerm l_45 (ATerm), ATerm m_45 (ATerm));
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
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_60 (ATerm));
ATerm if_verbose1_1 (ATerm, ATerm t_52 (ATerm));
ATerm xtc_register_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm x_52 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm y_52 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm a_66 (ATerm), ATerm b_66 (ATerm));
ATerm union_1 (ATerm, ATerm c_66 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm l_56 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm w_52 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_52 (ATerm));
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm xtc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm j_70 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_70 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm h_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_70 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_58 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_57 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_51 (ATerm), ATerm y_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_57 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_57 (ATerm));
ATerm xtc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm s_60 (ATerm))
{
  ATerm i_6;
  i_6 = t;
  {
    ATerm i_1 = NULL,u_1 = NULL;
    ATerm n_6;
    n_6 = t;
    {
      ATerm t_1 = NULL;
      t = s_60(t);
      {
        t_1 = t;
        if(((i_1 != NULL) && (i_1 != t_1)))
          _fail(t_1);
        else
          i_1 = t_1;
      }
    }
    t = n_6;
    {
      ATerm v_1 = NULL;
      v_1 = t;
      if(((u_1 != NULL) && (u_1 != v_1)))
        _fail(v_1);
      else
        u_1 = v_1;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_1)), not_null(i_1)));
        t = printnl_0(t);
      }
    }
  }
  t = i_6;
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
  ATerm p_6;
  p_6 = t;
  {
    ATerm l_2 = NULL;
    t = term_q_6;
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
  t = p_6;
  {
    ATerm a_0 (ATerm t)
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
    ATerm b_0 (ATerm t)
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
    t = _2(t, a_0, b_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(m_2)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(k_2), not_null(n_2))));
      t = list_tool_0(t);
    }
  }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm v_52 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm v_6;
    v_6 = t;
    {
      ATerm x_2 = NULL;
      ATerm y_2 = NULL;
      t = term_w_6;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_2), term_x_6);
        t = geq_0(t);
      }
    }
    t = v_6;
    t = v_52(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm tool_query_0 (ATerm t)
{
  ATerm c_3 = NULL;
  t = term_y_6;
  {
    t = get_config_0(t);
    {
      ATerm o_0 (ATerm t)
      {
        ATerm d_3 = NULL;
        d_3 = t;
        {
          ATerm z_6 = t;
          int a_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL;
              ATerm p_0 (ATerm t)
              {
                ATerm q_0 (ATerm t)
                {
                  t = term_b_7;
                  return(t);
                }
                t = debug_1(t, q_0);
                return(t);
              }
              t = if_verbose3_1(t, p_0);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(d_3)));
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
                          ATerm g_7 = t;
                          int h_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = version_query_0(t);
                              LocalPopChoice(h_7);
                            }
                          else
                            {
                              t = g_7;
                              t = list_tool_0(t);
                            }
                        }
                      }
                    }
                  }
                }
              }
              LocalPopChoice(a_7);
            }
          else
            {
              t = z_6;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, term_n_7), not_null(d_3)));
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
        ATerm o_7;
        o_7 = t;
        t = SSL_print(not_null(l_3), not_null(m_3));
        t = o_7;
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
                      ATerm p_7 = t;
                      int q_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_s_7;
                          {
                            t = get_config_0(t);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, term_t_7), not_null(d_4)));
                              t = print_0(t);
                            }
                          }
                          LocalPopChoice(q_7);
                        }
                      else
                        {
                          t = p_7;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(d_4)), term_v_7), not_null(c_4)), term_u_7), not_null(x_3)));
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
ATerm Tool_1 (ATerm t, ATerm w_46 (ATerm))
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
            t = w_46(t);
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
  t = term_w_7;
  {
    t = get_config_0(t);
    {
      t = term_d_7;
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
  ATerm y_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = all_query_0(t);
      LocalPopChoice(a_8);
    }
  else
    {
      t = y_7;
      t = tool_query_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm l_45 (ATerm), ATerm m_45 (ATerm))
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
            t = l_45(t);
            {
              p_5 = t;
              {
                t = not_null(j_5);
                {
                  ATerm t_5 = NULL;
                  t = m_45(t);
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
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_0);
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
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
                          ATerm h_8 = t;
                          int m_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(m_8);
                            }
                          else
                            {
                              t = h_8;
                              {
                                ATerm w_0 (ATerm t)
                                {
                                  t = term_n_8;
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
                            ATerm o_8;
                            o_8 = t;
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
                            t = o_8;
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
    t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(c_7));
    {
      t = table_get_0(t);
      {
        ATerm x_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_8;
            r_8 = t;
            {
              ATerm e_7 = NULL;
              ATerm f_7 = NULL;
              f_7 = t;
              if(((e_7 != NULL) && (e_7 != f_7)))
                _fail(f_7);
              else
                e_7 = f_7;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(c_7), not_null(e_7));
                t = table_put_0(t);
              }
            }
            t = r_8;
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
      t = term_t_8;
      return(t);
    }
    t = say_1(t, a_1);
    return(t);
  }
  t = if_verbose1_1(t, z_0);
  {
    ATerm u_8;
    u_8 = t;
    {
      ATerm j_8 = NULL;
      t = term_v_8;
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
    t = u_8;
    {
      ATerm l_8 = NULL;
      t = term_d_7;
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
  t = term_w_8;
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
            t = term_x_8;
            return(t);
          }
          t = debug_1(t, c_1);
          return(t);
        }
        t = if_verbose2_1(t, b_1);
        {
          t = term_w_8;
          {
            t = get_config_0(t);
            {
              s_8 = t;
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = term_y_8;
                    return(t);
                  }
                  t = debug_1(t, e_1);
                  return(t);
                }
                t = if_verbose5_1(t, d_1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_d_7, term_e_9, not_null(s_8));
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
        ATerm f_9;
        f_9 = t;
        {
          ATerm h_9 = NULL;
          ATerm i_9 = NULL,k_9 = NULL;
          ATerm j_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_9), not_null(c_9));
          {
            ATerm g_9 = t;
            int l_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(l_9);
              }
            else
              {
                t = g_9;
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
        t = f_9;
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
  ATerm m_9;
  m_9 = t;
  {
    ATerm p_9 = NULL;
    ATerm q_9 = NULL;
    q_9 = t;
    if(((p_9 != NULL) && (p_9 != q_9)))
      _fail(q_9);
    else
      p_9 = q_9;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATempty, not_null(p_9)));
      t = printnl_0(t);
    }
  }
  t = m_9;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm n_9;
  n_9 = t;
  {
    t = t_60(t);
    t = debug_0(t);
  }
  t = n_9;
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_52 (ATerm))
{
  ATerm f_1 (ATerm t)
  {
    ATerm o_9;
    o_9 = t;
    {
      ATerm t_9 = NULL;
      ATerm u_9 = NULL;
      t = term_w_6;
      {
        t = get_config_0(t);
        {
          u_9 = t;
          if(((t_9 != NULL) && (t_9 != u_9)))
            _fail(u_9);
          else
            t_9 = u_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_9), term_r_9);
        t = geq_0(t);
      }
    }
    t = o_9;
    t = t_52(t);
    return(t);
  }
  t = try_1(t, f_1);
  return(t);
}
ATerm xtc_register_0 (ATerm t)
{
  ATerm c_10 = NULL;
  t = term_y_6;
  {
    ATerm e_10 = NULL;
    t = get_config_0(t);
    {
      c_10 = t;
      {
        ATerm g_1 (ATerm t)
        {
          ATerm h_1 (ATerm t)
          {
            t = term_s_9;
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
            t = term_q_6;
            {
              ATerm g_10 = NULL;
              t = get_config_0(t);
              {
                e_10 = t;
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
                    t = term_s_7;
                    {
                      t = get_config_0(t);
                      {
                        g_10 = t;
                        {
                          ATerm n_1 (ATerm t)
                          {
                            ATerm o_1 (ATerm t)
                            {
                              t = term_x_9;
                              return(t);
                            }
                            t = debug_1(t, o_1);
                            return(t);
                          }
                          t = if_verbose2_1(t, n_1);
                          {
                            t = not_null(c_10);
                            {
                              ATerm p_1 (ATerm t)
                              {
                                ATerm i_10 = NULL,k_10 = NULL;
                                ATerm y_9;
                                y_9 = t;
                                {
                                  ATerm j_10 = NULL;
                                  j_10 = t;
                                  if(((i_10 != NULL) && (i_10 != j_10)))
                                    _fail(j_10);
                                  else
                                    i_10 = j_10;
                                }
                                t = y_9;
                                {
                                  ATerm l_10 = NULL,n_10 = NULL;
                                  ATerm m_10 = NULL;
                                  m_10 = t;
                                  if(((l_10 != NULL) && (l_10 != m_10)))
                                    _fail(m_10);
                                  else
                                    l_10 = m_10;
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_10)), term_z_9), not_null(g_10));
                                    {
                                      t = concat_strings_0(t);
                                      {
                                        n_10 = t;
                                        if(((k_10 != NULL) && (k_10 != n_10)))
                                          _fail(n_10);
                                        else
                                          k_10 = n_10;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, term_d_7, (ATerm)ATmakeAppl(sym_Tool_1, not_null(i_10)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(e_10), not_null(k_10))));
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
ATerm if_verbose5_1 (ATerm t, ATerm x_52 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm a_10;
    a_10 = t;
    {
      ATerm v_10 = NULL;
      ATerm w_10 = NULL;
      t = term_w_6;
      {
        t = get_config_0(t);
        {
          w_10 = t;
          if(((v_10 != NULL) && (v_10 != w_10)))
            _fail(w_10);
          else
            v_10 = w_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), term_b_10);
        t = geq_0(t);
      }
    }
    t = a_10;
    t = x_52(t);
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm y_52 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm z_10 = NULL;
      ATerm a_11 = NULL;
      t = term_w_6;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_10), term_f_10);
        t = geq_0(t);
      }
    }
    t = d_10;
    t = y_52(t);
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
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
  e_11 = t;
  d_11 :
  if(match_cons(e_11, sym__2))
    {
      f_11 = ATgetArgument(e_11, 0);
      g_11 = ATgetArgument(e_11, 1);
      if(((f_11 != NULL) && (f_11 != g_11)))
        _fail(g_11);
      else
        f_11 = g_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_66 (ATerm), ATerm b_66 (ATerm))
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  l_11 :
  if(((ATgetType(m_11) == AT_LIST) && ((ATermList) m_11 != ATempty)))
    {
      n_11 = ATgetFirst((ATermList) m_11);
      o_11 = (ATerm) ATgetNext((ATermList) m_11);
      {
        t = b_66(t);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm r_11 = NULL;
            r_11 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_11), not_null(r_11));
              t = a_66(t);
            }
            return(t);
          }
          t = fetch_1(t, s_1);
        }
        t = not_null(o_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm c_66 (ATerm))
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  x_11 = t;
  w_11 :
  if(match_cons(x_11, sym__2))
    {
      y_11 = ATgetArgument(x_11, 0);
      z_11 = ATgetArgument(x_11, 1);
      {
        t = not_null(y_11);
        {
          ATerm d_12 (ATerm t)
          {
            ATerm h_10 = t;
            int o_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(z_11);
                LocalPopChoice(o_10);
              }
            else
              {
                t = h_10;
                {
                  ATerm p_10 = t;
                  int q_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_1 (ATerm t)
                      {
                        t = not_null(z_11);
                        return(t);
                      }
                      t = HdMember_p__2(t, c_66, w_1);
                      t = d_12(t);
                      LocalPopChoice(q_10);
                    }
                  else
                    {
                      t = p_10;
                      t = Cons_2(t, _id, d_12);
                    }
                }
              }
            return(t);
          }
          t = d_12(t);
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
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym__3))
    {
      j_12 = ATgetArgument(i_12, 0);
      k_12 = ATgetArgument(i_12, 1);
      l_12 = ATgetArgument(i_12, 2);
      {
        ATerm r_10;
        r_10 = t;
        {
          ATerm p_12 = NULL;
          ATerm q_12 = NULL,s_12 = NULL;
          ATerm r_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_12), not_null(k_12));
          {
            ATerm s_10 = t;
            int t_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(t_10);
              }
            else
              {
                t = s_10;
                t = (ATerm) ATempty;
              }
            {
              r_12 = t;
              if(((q_12 != NULL) && (q_12 != r_12)))
                _fail(r_12);
              else
                q_12 = r_12;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), not_null(l_12));
            {
              t = union_0(t);
              {
                s_12 = t;
                if(((p_12 != NULL) && (p_12 != s_12)))
                  _fail(s_12);
                else
                  p_12 = s_12;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_12), not_null(k_12), not_null(p_12));
            t = set_0(t);
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
ATerm table_putlist_1 (ATerm t, ATerm l_56 (ATerm))
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym__2))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      {
        t = not_null(c_13);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
            f_13 = t;
            y_12 :
            if(match_cons(f_13, sym__2))
              {
                g_13 = ATgetArgument(f_13, 0);
                h_13 = ATgetArgument(f_13, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(b_13), not_null(g_13), not_null(h_13));
                  t = l_56(t);
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
  ATerm n_13 = NULL;
  n_13 = t;
  t = SSL_ReadFromFile(not_null(n_13));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm s_13 = NULL;
  ATerm u_13 = NULL;
  s_13 = t;
  {
    ATerm u_10;
    u_10 = t;
    {
      ATerm v_13 = NULL;
      t = term_x_10;
      {
        v_13 = t;
        if(((u_13 != NULL) && (u_13 != v_13)))
          _fail(v_13);
        else
          u_13 = v_13;
      }
    }
    t = u_10;
    {
      t = SSL_open_file(not_null(s_13), not_null(u_13));
      t = SSL_close_file(not_null(s_13));
    }
  }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm w_52 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    ATerm y_10;
    y_10 = t;
    {
      ATerm z_13 = NULL;
      ATerm a_14 = NULL;
      t = term_w_6;
      {
        t = get_config_0(t);
        {
          a_14 = t;
          if(((z_13 != NULL) && (z_13 != a_14)))
            _fail(a_14);
          else
            z_13 = a_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), term_b_11);
        t = geq_0(t);
      }
    }
    t = y_10;
    t = w_52(t);
    return(t);
  }
  t = try_1(t, y_1);
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm e_14 = NULL;
  ATerm g_14 = NULL;
  e_14 = t;
  {
    ATerm c_11 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_14)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_11;
      }
    {
      ATerm h_11;
      h_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_7, term_i_11, (ATerm) ATinsert(ATempty, not_null(e_14)));
        t = table_put_0(t);
      }
      t = h_11;
      {
        ATerm z_1 (ATerm t)
        {
          ATerm a_2 (ATerm t)
          {
            t = term_j_11;
            return(t);
          }
          t = debug_1(t, a_2);
          return(t);
        }
        t = if_verbose4_1(t, z_1);
        {
          ATerm k_11 = t;
          int p_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(p_11);
            }
          else
            {
              t = k_11;
              t = (ATerm) ATempty;
            }
          {
            ATerm b_2 (ATerm t)
            {
              ATerm d_2 (ATerm t)
              {
                t = term_q_11;
                return(t);
              }
              t = debug_1(t, d_2);
              return(t);
            }
            t = if_verbose6_1(t, b_2);
            {
              ATerm h_14 = NULL;
              h_14 = t;
              if(((g_14 != NULL) && (g_14 != h_14)))
                _fail(h_14);
              else
                g_14 = h_14;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_d_7, not_null(g_14));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm e_2 (ATerm t)
                    {
                      ATerm f_2 (ATerm t)
                      {
                        t = term_s_11;
                        return(t);
                      }
                      t = debug_1(t, f_2);
                      return(t);
                    }
                    t = if_verbose6_1(t, e_2);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_d_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_14)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm g_2 (ATerm t)
                          {
                            ATerm i_2 (ATerm t)
                            {
                              t = term_q_11;
                              return(t);
                            }
                            t = debug_1(t, i_2);
                            return(t);
                          }
                          t = if_verbose5_1(t, g_2);
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
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym__2))
    {
      n_14 = ATgetArgument(m_14, 0);
      o_14 = ATgetArgument(m_14, 1);
      {
        ATerm t_11;
        t_11 = t;
        {
          ATerm u_11 = t;
          int v_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_14), not_null(o_14));
              LocalPopChoice(v_11);
            }
          else
            {
              t = u_11;
              t = SSL_gtr(not_null(n_14), not_null(o_14));
            }
        }
        t = t_11;
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
  ATerm u_14 = NULL;
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
      v_14 = t;
      t_14 :
      if(match_cons(v_14, sym__2))
        {
          w_14 = ATgetArgument(v_14, 0);
          x_14 = ATgetArgument(v_14, 1);
          {
            if(((u_14 != NULL) && (u_14 != w_14)))
              _fail(w_14);
            else
              u_14 = w_14;
            if(((u_14 != NULL) && (u_14 != x_14)))
              _fail(x_14);
            else
              u_14 = x_14;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_52 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm c_12;
    c_12 = t;
    {
      ATerm a_15 = NULL;
      ATerm b_15 = NULL;
      t = term_w_6;
      {
        t = get_config_0(t);
        {
          b_15 = t;
          if(((a_15 != NULL) && (a_15 != b_15)))
            _fail(b_15);
          else
            a_15 = b_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_15), term_e_12);
        t = geq_0(t);
      }
    }
    t = c_12;
    t = u_52(t);
    return(t);
  }
  t = try_1(t, t_2);
  return(t);
}
ATerm getenv_0 (ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  t = SSL_getenv(not_null(e_15));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_8;
      t = get_config_0(t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_12;
            t = getenv_0(t);
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_15 = NULL;
  i_15 = t;
  t = SSL_string_to_int(not_null(i_15));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,c_16 = NULL;
  q_15 = t;
  o_15 :
  if(match_string(q_15, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(q_15) == AT_LIST) && ((ATermList) q_15 != ATempty)))
        {
          r_15 = ATgetFirst((ATermList) q_15);
          s_15 = (ATerm) ATgetNext((ATermList) q_15);
          p_15 :
          if(((ATgetType(s_15) == AT_LIST) && ((ATermList) s_15 != ATempty)))
            {
              t_15 = ATgetFirst((ATermList) s_15);
              c_16 = (ATerm) ATgetNext((ATermList) s_15);
              {
                ATerm g_16 = NULL;
                ATerm t_12;
                t_12 = t;
                {
                  t = not_null(r_15);
                  t = l_0(t);
                }
                t = t_12;
                {
                  ATerm h_16 = NULL;
                  t = not_null(t_15);
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
          ATerm u_2 (ATerm t)
          {
            t = not_null(l_17);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,a_18 = NULL;
  w_17 = t;
  v_17 :
  if(match_cons(w_17, sym__2))
    {
      x_17 = ATgetArgument(w_17, 0);
      a_18 = ATgetArgument(w_17, 1);
      {
        ATerm i_18 = NULL;
        ATerm j_18 = NULL,l_18 = NULL;
        ATerm k_18 = NULL;
        t = not_null(x_17);
        {
          ATerm w_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(x_12);
            }
          else
            {
              t = w_12;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), not_null(j_18));
          {
            t = conc_0(t);
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
          t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(x_17), not_null(i_18));
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
      ATerm v_2 (ATerm t)
      {
        ATerm h_19 = NULL;
        h_19 = t;
        p_18 :
        if(!(match_string(h_19, "-r")))
          {
            if(!(match_string(h_19, "--repository")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        ATerm i_13;
        i_13 = t;
        {
          ATerm i_19 = NULL;
          ATerm j_19 = NULL;
          j_19 = t;
          if(((i_19 != NULL) && (i_19 != j_19)))
            _fail(j_19);
          else
            i_19 = j_19;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_v_8, not_null(i_19));
            t = set_config_0(t);
          }
        }
        t = i_13;
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_j_13;
        return(t);
      }
      t = ArgOption_3(t, v_2, w_2, z_2);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              ATerm k_19 = NULL;
              k_19 = t;
              r_18 :
              if(!(match_string(k_19, "i")))
                {
                  if(!(match_string(k_19, "imp")))
                    {
                      if(!(match_string(k_19, "import")))
                        {
                          _fail(t);
                        }
                    }
                }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              ATerm m_13;
              m_13 = t;
              {
                ATerm l_19 = NULL;
                ATerm m_19 = NULL;
                m_19 = t;
                if(((l_19 != NULL) && (l_19 != m_19)))
                  _fail(m_19);
                else
                  l_19 = m_19;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATempty, not_null(l_19)));
                  t = extend_config_0(t);
                }
              }
              t = m_13;
              return(t);
            }
            ATerm e_3 (ATerm t)
            {
              t = term_o_13;
              return(t);
            }
            t = ArgOption_3(t, a_3, b_3, e_3);
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            {
              ATerm p_13 = t;
              int q_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_3 (ATerm t)
                  {
                    ATerm n_19 = NULL;
                    n_19 = t;
                    t_18 :
                    if(!(match_string(n_19, "r")))
                      {
                        if(!(match_string(n_19, "reg")))
                          {
                            if(!(match_string(n_19, "register")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm h_3 (ATerm t)
                  {
                    ATerm r_13;
                    r_13 = t;
                    {
                      ATerm o_19 = NULL;
                      ATerm p_19 = NULL;
                      p_19 = t;
                      if(((o_19 != NULL) && (o_19 != p_19)))
                        _fail(p_19);
                      else
                        o_19 = p_19;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_t_13, not_null(o_19));
                        t = set_config_0(t);
                      }
                    }
                    t = r_13;
                    return(t);
                  }
                  ATerm i_3 (ATerm t)
                  {
                    t = term_w_13;
                    return(t);
                  }
                  t = Option_3(t, g_3, h_3, i_3);
                  LocalPopChoice(q_13);
                }
              else
                {
                  t = p_13;
                  {
                    ATerm x_13 = t;
                    int y_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_3 (ATerm t)
                        {
                          ATerm q_19 = NULL;
                          q_19 = t;
                          v_18 :
                          if(!(match_string(q_19, "-t")))
                            {
                              if(!(match_string(q_19, "--tool")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm o_3 (ATerm t)
                        {
                          ATerm b_14;
                          b_14 = t;
                          {
                            ATerm r_19 = NULL;
                            ATerm s_19 = NULL;
                            s_19 = t;
                            if(((r_19 != NULL) && (r_19 != s_19)))
                              _fail(s_19);
                            else
                              r_19 = s_19;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATempty, not_null(r_19)));
                              t = extend_config_0(t);
                            }
                          }
                          t = b_14;
                          return(t);
                        }
                        ATerm p_3 (ATerm t)
                        {
                          t = term_c_14;
                          return(t);
                        }
                        t = ArgOption_3(t, n_3, o_3, p_3);
                        LocalPopChoice(y_13);
                      }
                    else
                      {
                        t = x_13;
                        {
                          ATerm d_14 = t;
                          int f_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_3 (ATerm t)
                              {
                                ATerm t_19 = NULL;
                                t_19 = t;
                                x_18 :
                                if(!(match_string(t_19, "-l")))
                                  {
                                    if(!(match_string(t_19, "--location")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm r_3 (ATerm t)
                              {
                                ATerm i_14;
                                i_14 = t;
                                {
                                  ATerm u_19 = NULL;
                                  ATerm v_19 = NULL;
                                  v_19 = t;
                                  if(((u_19 != NULL) && (u_19 != v_19)))
                                    _fail(v_19);
                                  else
                                    u_19 = v_19;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_s_7, not_null(u_19));
                                    t = set_config_0(t);
                                  }
                                }
                                t = i_14;
                                return(t);
                              }
                              ATerm z_3 (ATerm t)
                              {
                                t = term_j_14;
                                return(t);
                              }
                              t = ArgOption_3(t, q_3, r_3, z_3);
                              LocalPopChoice(f_14);
                            }
                          else
                            {
                              t = d_14;
                              {
                                ATerm k_14 = t;
                                int p_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_4 (ATerm t)
                                    {
                                      ATerm w_19 = NULL;
                                      w_19 = t;
                                      z_18 :
                                      if(!(match_string(w_19, "-V")))
                                        {
                                          if(!(match_string(w_19, "--Version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm e_4 (ATerm t)
                                    {
                                      ATerm q_14;
                                      q_14 = t;
                                      {
                                        ATerm x_19 = NULL;
                                        ATerm y_19 = NULL;
                                        y_19 = t;
                                        if(((x_19 != NULL) && (x_19 != y_19)))
                                          _fail(y_19);
                                        else
                                          x_19 = y_19;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_q_6, not_null(x_19));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = q_14;
                                      return(t);
                                    }
                                    ATerm f_4 (ATerm t)
                                    {
                                      t = term_r_14;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, a_4, e_4, f_4);
                                    LocalPopChoice(p_14);
                                  }
                                else
                                  {
                                    t = k_14;
                                    {
                                      ATerm s_14 = t;
                                      int y_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm g_4 (ATerm t)
                                          {
                                            ATerm z_19 = NULL;
                                            z_19 = t;
                                            b_19 :
                                            if(!(match_string(z_19, "q")))
                                              {
                                                if(!(match_string(z_19, "query")))
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            return(t);
                                          }
                                          ATerm h_4 (ATerm t)
                                          {
                                            ATerm z_14;
                                            z_14 = t;
                                            {
                                              ATerm a_20 = NULL;
                                              ATerm b_20 = NULL;
                                              b_20 = t;
                                              if(((a_20 != NULL) && (a_20 != b_20)))
                                                _fail(b_20);
                                              else
                                                a_20 = b_20;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, term_c_15, not_null(a_20));
                                                t = set_config_0(t);
                                              }
                                            }
                                            t = z_14;
                                            return(t);
                                          }
                                          ATerm i_4 (ATerm t)
                                          {
                                            t = term_d_15;
                                            return(t);
                                          }
                                          t = Option_3(t, g_4, h_4, i_4);
                                          LocalPopChoice(y_14);
                                        }
                                      else
                                        {
                                          t = s_14;
                                          {
                                            ATerm f_15 = t;
                                            int g_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm j_4 (ATerm t)
                                                {
                                                  ATerm c_20 = NULL;
                                                  c_20 = t;
                                                  d_19 :
                                                  if(!(match_string(c_20, "-a")))
                                                    {
                                                      if(!(match_string(c_20, "--all")))
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  return(t);
                                                }
                                                ATerm k_4 (ATerm t)
                                                {
                                                  ATerm h_15;
                                                  h_15 = t;
                                                  {
                                                    t = term_k_15;
                                                    t = set_config_0(t);
                                                  }
                                                  t = h_15;
                                                  return(t);
                                                }
                                                ATerm l_4 (ATerm t)
                                                {
                                                  t = term_l_15;
                                                  return(t);
                                                }
                                                t = Option_3(t, j_4, k_4, l_4);
                                                LocalPopChoice(g_15);
                                              }
                                            else
                                              {
                                                t = f_15;
                                                {
                                                  ATerm m_15 = t;
                                                  int n_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_4 (ATerm t)
                                                      {
                                                        ATerm d_20 = NULL;
                                                        d_20 = t;
                                                        e_19 :
                                                        if(!(match_string(d_20, "-L")))
                                                          {
                                                            if(!(match_string(d_20, "--Location")))
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm q_4 (ATerm t)
                                                      {
                                                        ATerm u_15;
                                                        u_15 = t;
                                                        {
                                                          t = term_v_15;
                                                          t = set_config_0(t);
                                                        }
                                                        t = u_15;
                                                        return(t);
                                                      }
                                                      ATerm u_4 (ATerm t)
                                                      {
                                                        t = term_w_15;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, p_4, q_4, u_4);
                                                      LocalPopChoice(n_15);
                                                    }
                                                  else
                                                    {
                                                      t = m_15;
                                                      {
                                                        ATerm x_4 (ATerm t)
                                                        {
                                                          ATerm e_20 = NULL;
                                                          e_20 = t;
                                                          f_19 :
                                                          if(!(match_string(e_20, "--verbose")))
                                                            {
                                                              _fail(t);
                                                            }
                                                          return(t);
                                                        }
                                                        ATerm y_4 (ATerm t)
                                                        {
                                                          ATerm x_15;
                                                          x_15 = t;
                                                          {
                                                            ATerm f_20 = NULL;
                                                            ATerm g_20 = NULL;
                                                            t = string_to_int_0(t);
                                                            {
                                                              g_20 = t;
                                                              if(((f_20 != NULL) && (f_20 != g_20)))
                                                                _fail(g_20);
                                                              else
                                                                f_20 = g_20;
                                                            }
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__2, term_w_6, not_null(f_20));
                                                              t = set_config_0(t);
                                                            }
                                                          }
                                                          t = x_15;
                                                          return(t);
                                                        }
                                                        ATerm z_4 (ATerm t)
                                                        {
                                                          t = term_y_15;
                                                          return(t);
                                                        }
                                                        t = ArgOption_3(t, x_4, y_4, z_4);
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
  ATerm q_20 = NULL;
  q_20 = t;
  t = SSL_table_destroy(not_null(q_20));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_16), term_z_15);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_70 (ATerm))
{
  ATerm t_20 (ATerm t)
  {
    ATerm b_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_16);
      }
    else
      {
        t = b_16;
        t = Cons_2(t, j_70, t_20);
      }
    return(t);
  }
  t = t_20(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm a_21 = NULL,h_21 = NULL,i_21 = NULL;
  i_21 = t;
  z_20 :
  if(((ATgetType(i_21) == AT_LIST) && ((ATermList) i_21 != ATempty)))
    {
      a_21 = ATgetFirst((ATermList) i_21);
      h_21 = (ATerm) ATgetNext((ATermList) i_21);
      {
        ATerm o_21 = NULL;
        t = not_null(h_21);
        {
          ATerm e_16;
          e_16 = t;
          {
            ATerm p_21 = NULL,r_21 = NULL,x_21 = NULL;
            ATerm f_16;
            f_16 = t;
            {
              ATerm q_21 = NULL;
              t = j_0(t);
              {
                q_21 = t;
                if(((p_21 != NULL) && (p_21 != q_21)))
                  _fail(q_21);
                else
                  p_21 = q_21;
              }
            }
            t = f_16;
            {
              ATerm w_21 = NULL;
              t = not_null(a_21);
              {
                t = i_0(t);
                {
                  w_21 = t;
                  if(((r_21 != NULL) && (r_21 != w_21)))
                    _fail(w_21);
                  else
                    r_21 = w_21;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_21)), not_null(r_21));
                {
                  x_21 = t;
                  if(((o_21 != NULL) && (o_21 != x_21)))
                    _fail(x_21);
                  else
                    o_21 = x_21;
                }
              }
            }
          }
          t = e_16;
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(o_21);
              return(t);
            }
            t = reverse_acc_2(t, i_0, a_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) i_21 == ATempty))
        {
          {
            t = term_j_15;
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
  ATerm b_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_5);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm h_22 = NULL;
  h_22 = t;
  t = SSL_implode_string(not_null(h_22));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_70 (ATerm))
{
  ATerm k_22 (ATerm t)
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_22);
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        {
          t = Nil_0(t);
          t = y_70(t);
        }
      }
    return(t);
  }
  t = k_22(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
        q_22 = t;
        m_22 :
        if(((ATgetType(q_22) == AT_LIST) && ((ATermList) q_22 != ATempty)))
          {
            r_22 = ATgetFirst((ATermList) q_22);
            s_22 = (ATerm) ATgetNext((ATermList) q_22);
            {
              t = not_null(r_22);
              {
                ATerm c_5 (ATerm t)
                {
                  t = not_null(s_22);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm c_23 = NULL;
  c_23 = t;
  t = SSL_explode_string(not_null(c_23));
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
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_16), term_n_16), term_m_16);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_47 (ATerm))
{
  ATerm k_23 = NULL,l_23 = NULL;
  k_23 = t;
  j_23 :
  if(match_cons(k_23, sym_Program_1))
    {
      l_23 = ATgetArgument(k_23, 0);
      {
        ATerm o_23 = NULL,q_23 = NULL;
        ATerm p_23 = NULL;
        t = SSLgetAnnotations(not_null(k_23));
        {
          p_23 = t;
          if(((o_23 != NULL) && (o_23 != p_23)))
            _fail(p_23);
          else
            o_23 = p_23;
        }
        {
          t = not_null(l_23);
          {
            ATerm s_23 = NULL;
            t = h_47(t);
            {
              q_23 = t;
              {
                ATerm t_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_23)), not_null(o_23));
                {
                  t_23 = t;
                  if(((s_23 != NULL) && (s_23 != t_23)))
                    _fail(t_23);
                  else
                    s_23 = t_23;
                }
                t = not_null(s_23);
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
  ATerm c_24 = NULL;
  ATerm d_5 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      ATerm d_24 = NULL;
      d_24 = t;
      if(((c_24 != NULL) && (c_24 != d_24)))
        _fail(d_24);
      else
        c_24 = d_24;
      return(t);
    }
    t = Program_1(t, e_5);
    return(t);
  }
  t = option_defined_1(t, d_5);
  {
    ATerm f_5 (ATerm t)
    {
      ATerm e_24 = NULL;
      ATerm f_24 = NULL;
      t = term_j_15;
      {
        ATerm k_5 (ATerm t)
        {
          t = not_null(c_24);
          return(t);
        }
        t = short_description_1(t, k_5);
        {
          t = concat_strings_0(t);
          {
            f_24 = t;
            if(((e_24 != NULL) && (e_24 != f_24)))
              _fail(f_24);
            else
              e_24 = f_24;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATempty, not_null(e_24)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, f_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATempty, term_p_16));
      {
        t = printnl_0(t);
        {
          t = term_s_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_5 (ATerm t)
                {
                  ATerm g_24 = NULL;
                  ATerm h_24 = NULL;
                  h_24 = t;
                  if(((g_24 != NULL) && (g_24 != h_24)))
                    _fail(h_24);
                  else
                    g_24 = h_24;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_24)), term_w_16));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_5);
                {
                  ATerm m_5 (ATerm t)
                  {
                    ATerm i_24 = NULL;
                    ATerm q_24 = NULL;
                    ATerm q_5 (ATerm t)
                    {
                      t = not_null(c_24);
                      return(t);
                    }
                    t = long_description_1(t, q_5);
                    {
                      q_24 = t;
                      if(((i_24 != NULL) && (i_24 != q_24)))
                        _fail(q_24);
                      else
                        i_24 = q_24;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(CheckATermList(not_null(i_24)), term_t_7));
                      t = printnl_0(t);
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
  ATerm x_24 = NULL,a_25 = NULL,b_25 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym__2))
    {
      a_25 = ATgetArgument(x_24, 0);
      b_25 = ATgetArgument(x_24, 1);
      {
        ATerm z_16;
        z_16 = t;
        t = SSL_printnl(not_null(a_25), not_null(b_25));
        t = z_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_47 (ATerm))
{
  ATerm k_25 = NULL,l_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym_Undefined_1))
    {
      l_25 = ATgetArgument(k_25, 0);
      {
        ATerm o_25 = NULL,q_25 = NULL;
        ATerm p_25 = NULL;
        t = SSLgetAnnotations(not_null(k_25));
        {
          p_25 = t;
          if(((o_25 != NULL) && (o_25 != p_25)))
            _fail(p_25);
          else
            o_25 = p_25;
        }
        {
          t = not_null(l_25);
          {
            ATerm s_25 = NULL;
            t = i_47(t);
            {
              q_25 = t;
              {
                ATerm t_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_25)), not_null(o_25));
                {
                  t_25 = t;
                  if(((s_25 != NULL) && (s_25 != t_25)))
                    _fail(t_25);
                  else
                    s_25 = t_25;
                }
                t = not_null(s_25);
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
ATerm fetch_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm y_25 (ATerm t)
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_70, _id);
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = Cons_2(t, _id, y_25);
      }
    return(t);
  }
  t = y_25(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_58 (ATerm))
{
  t = fetch_1(t, v_58);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_26 = NULL;
  d_26 = t;
  c_26 :
  if(match_cons(d_26, sym_Help_0))
    {
      ATerm f_26 = NULL,h_26 = NULL;
      ATerm f_17;
      f_17 = t;
      {
        ATerm g_26 = NULL;
        t = SSLgetAnnotations(not_null(d_26));
        {
          g_26 = t;
          if(((f_26 != NULL) && (f_26 != g_26)))
            _fail(g_26);
          else
            f_26 = g_26;
        }
      }
      t = f_17;
      {
        ATerm i_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_26));
        {
          i_26 = t;
          if(((h_26 != NULL) && (h_26 != i_26)))
            _fail(i_26);
          else
            h_26 = i_26;
        }
        t = not_null(h_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_79(t);
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym__2))
    {
      p_26 = ATgetArgument(o_26, 0);
      q_26 = ATgetArgument(o_26, 1);
      t = SSL_table_get(not_null(p_26), not_null(q_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
  x_26 = t;
  w_26 :
  if(match_cons(x_26, sym__3))
    {
      y_26 = ATgetArgument(x_26, 0);
      z_26 = ATgetArgument(x_26, 1);
      a_27 = ATgetArgument(x_26, 2);
      {
        ATerm m_17;
        m_17 = t;
        {
          ATerm e_27 = NULL;
          ATerm f_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_26), not_null(z_26));
          {
            ATerm n_17 = t;
            int o_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_17);
              }
            else
              {
                t = n_17;
                t = (ATerm) ATempty;
              }
            {
              f_27 = t;
              if(((e_27 != NULL) && (e_27 != f_27)))
                _fail(f_27);
              else
                e_27 = f_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_26), not_null(z_26), (ATerm) ATinsert(CheckATermList(not_null(e_27)), not_null(a_27)));
            t = table_put_0(t);
          }
        }
        t = m_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm j_27 = NULL;
  ATerm k_27 = NULL;
  t = term_j_15;
  {
    t = v_57(t);
    {
      k_27 = t;
      if(((j_27 != NULL) && (j_27 != k_27)))
        _fail(k_27);
      else
        j_27 = k_27;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_16, term_r_16, not_null(j_27));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_27 = NULL,w_27 = NULL,x_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_string(r_27, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(r_27) == AT_LIST) && ((ATermList) r_27 != ATempty)))
        {
          w_27 = ATgetFirst((ATermList) r_27);
          x_27 = (ATerm) ATgetNext((ATermList) r_27);
          {
            ATerm b_28 = NULL;
            ATerm p_17;
            p_17 = t;
            {
              t = not_null(w_27);
              t = c_0(t);
            }
            t = p_17;
            {
              ATerm c_28 = NULL;
              t = term_j_15;
              {
                t = d_0(t);
                {
                  c_28 = t;
                  if(((b_28 != NULL) && (b_28 != c_28)))
                    _fail(c_28);
                  else
                    b_28 = c_28;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_27)), not_null(b_28));
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
    ATerm j_28 = NULL;
    j_28 = t;
    i_28 :
    if(!(match_string(j_28, "--help")))
      {
        if(!(match_string(j_28, "-h")))
          {
            if(!(match_string(j_28, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_q_17;
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  t = Option_3(t, s_5, v_5, w_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  m_28 = t;
  l_28 :
  if(((ATgetType(m_28) == AT_LIST) && ((ATermList) m_28 != ATempty)))
    {
      n_28 = ATgetFirst((ATermList) m_28);
      o_28 = (ATerm) ATgetNext((ATermList) m_28);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_28)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_28)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_51 (ATerm), ATerm y_51 (ATerm))
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  y_28 = t;
  x_28 :
  if(((ATgetType(y_28) == AT_LIST) && ((ATermList) y_28 != ATempty)))
    {
      z_28 = ATgetFirst((ATermList) y_28);
      a_29 = (ATerm) ATgetNext((ATermList) y_28);
      {
        ATerm e_29 = NULL,g_29 = NULL;
        ATerm f_29 = NULL;
        t = SSLgetAnnotations(not_null(y_28));
        {
          f_29 = t;
          if(((e_29 != NULL) && (e_29 != f_29)))
            _fail(f_29);
          else
            e_29 = f_29;
        }
        {
          t = not_null(z_28);
          {
            ATerm i_29 = NULL;
            t = x_51(t);
            {
              g_29 = t;
              {
                t = not_null(a_29);
                {
                  ATerm k_29 = NULL;
                  t = y_51(t);
                  {
                    i_29 = t;
                    {
                      ATerm l_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_29)), not_null(g_29)), not_null(e_29));
                      {
                        l_29 = t;
                        if(((k_29 != NULL) && (k_29 != l_29)))
                          _fail(l_29);
                        else
                          k_29 = l_29;
                      }
                      t = not_null(k_29);
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
  ATerm v_29 = NULL;
  v_29 = t;
  u_29 :
  if(((ATermList) v_29 == ATempty))
    {
      {
        ATerm x_29 = NULL,z_29 = NULL;
        ATerm s_17;
        s_17 = t;
        {
          ATerm y_29 = NULL;
          t = SSLgetAnnotations(not_null(v_29));
          {
            y_29 = t;
            if(((x_29 != NULL) && (x_29 != y_29)))
              _fail(y_29);
            else
              x_29 = y_29;
          }
        }
        t = s_17;
        {
          ATerm a_30 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_29));
          {
            a_30 = t;
            if(((z_29 != NULL) && (z_29 != a_30)))
              _fail(a_30);
            else
              z_29 = a_30;
          }
          t = not_null(z_29);
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
  ATerm i_30 = NULL,j_30 = NULL,l_30 = NULL;
  i_30 = t;
  h_30 :
  if(match_cons(i_30, sym__2))
    {
      j_30 = ATgetArgument(i_30, 0);
      l_30 = ATgetArgument(i_30, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(j_30), not_null(l_30));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm t_17;
  t_17 = t;
  {
    ATerm x_5 (ATerm t)
    {
      t = term_u_17;
      t = t_57(t);
      return(t);
    }
    t = try_1(t, x_5);
  }
  t = t_17;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm u_30 = NULL;
      ATerm y_17;
      y_17 = t;
      {
        ATerm s_30 = NULL;
        ATerm t_30 = NULL;
        t_30 = t;
        if(((s_30 != NULL) && (s_30 != t_30)))
          _fail(t_30);
        else
          s_30 = t_30;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_17, not_null(s_30));
          t = set_config_0(t);
        }
      }
      t = y_17;
      {
        ATerm v_30 = NULL;
        v_30 = t;
        if(((u_30 != NULL) && (u_30 != v_30)))
          _fail(v_30);
        else
          u_30 = v_30;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_30));
      }
      return(t);
    }
    ATerm z_5 (ATerm t)
    {
      ATerm b_18 = t;
      int c_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              {
                t = t_57(t);
                t = Cons_2(t, _id, z_5);
              }
            }
          LocalPopChoice(c_18);
        }
      else
        {
          t = b_18;
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
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  ATerm f_18;
  f_18 = t;
  {
    ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
    e_31 = t;
    a_31 :
    if(match_cons(e_31, sym__3))
      {
        f_31 = ATgetArgument(e_31, 0);
        g_31 = ATgetArgument(e_31, 1);
        h_31 = ATgetArgument(e_31, 2);
        {
          if(((b_31 != NULL) && (b_31 != f_31)))
            _fail(f_31);
          else
            b_31 = f_31;
          {
            if(((c_31 != NULL) && (c_31 != g_31)))
              _fail(g_31);
            else
              c_31 = g_31;
            {
              if(((d_31 != NULL) && (d_31 != h_31)))
                _fail(h_31);
              else
                d_31 = h_31;
              t = SSL_table_put(not_null(b_31), not_null(c_31), not_null(d_31));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm k_31 = NULL;
  ATerm g_18;
  g_18 = t;
  {
    t = term_h_18;
    t = table_put_0(t);
  }
  t = g_18;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_57(t);
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_6);
    {
      ATerm c_6 (ATerm t)
      {
        ATerm o_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_s_18;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_18);
          }
        else
          {
            t = o_18;
            {
              ATerm d_6 (ATerm t)
              {
                ATerm e_6 (ATerm t)
                {
                  ATerm l_31 = NULL;
                  l_31 = t;
                  if(((k_31 != NULL) && (k_31 != l_31)))
                    _fail(l_31);
                  else
                    k_31 = l_31;
                  return(t);
                }
                t = Undefined_1(t, e_6);
                return(t);
              }
              t = option_defined_1(t, d_6);
              {
                ATerm u_18;
                u_18 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_31)), term_w_18));
                  t = printnl_0(t);
                }
                t = u_18;
                {
                  t = system_usage_0(t);
                  {
                    t = term_r_9;
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
        ATerm y_18;
        y_18 = t;
        {
          t = term_q_16;
          t = table_destroy_0(t);
        }
        t = y_18;
      }
    }
  }
  return(t);
}
ATerm xtc_0 (ATerm t)
{
  ATerm a_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_options_1(t, xtc_options_0);
      {
        t = xtc_location_0(t);
        {
          ATerm f_6 (ATerm t)
          {
            ATerm g_6 (ATerm t)
            {
              t = term_g_19;
              return(t);
            }
            t = debug_1(t, g_6);
            return(t);
          }
          t = if_verbose2_1(t, f_6);
          {
            t = xtc_read_0(t);
            {
              ATerm h_20 = t;
              int i_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_20 = t;
                  int k_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_t_13;
                      {
                        t = get_config_0(t);
                        t = xtc_register_0(t);
                      }
                      LocalPopChoice(k_20);
                    }
                  else
                    {
                      t = j_20;
                      {
                        t = term_w_8;
                        {
                          t = get_config_0(t);
                          t = register_import_0(t);
                        }
                      }
                    }
                  t = xtc_store_0(t);
                  LocalPopChoice(i_20);
                }
              else
                {
                  t = h_20;
                  {
                    t = term_c_15;
                    {
                      t = get_config_0(t);
                      t = xtc_query_0(t);
                    }
                  }
                }
              {
                t = term_s_18;
                t = exit_0(t);
              }
            }
          }
        }
      }
      LocalPopChoice(c_19);
    }
  else
    {
      t = a_19;
      {
        ATerm h_6 (ATerm t)
        {
          t = term_l_20;
          return(t);
        }
        t = debug_1(t, h_6);
      }
    }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = xtc_0(t);
  return(t);
}
