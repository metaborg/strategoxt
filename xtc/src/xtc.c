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
ATerm term_d_19;
ATerm term_y_18;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_l_17;
ATerm term_a_17;
ATerm term_w_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_n_13;
ATerm term_g_13;
ATerm term_a_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_b_12;
ATerm term_u_11;
ATerm term_g_11;
ATerm term_x_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_k_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_a_8;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_v_6;
ATerm term_q_6;
ATerm term_n_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_f_6;
ATerm term_d_6;
void init_constant_terms (void)
{
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_o_7, term_x_10);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools\n", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_x_10);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_t_15, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__3, term_t_15, term_u_15, (ATerm) ATempty);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm d_59 (ATerm));
ATerm exit_0 (ATerm);
ATerm version_query_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm n_51 (ATerm));
ATerm tool_query_0 (ATerm);
ATerm print_0 (ATerm);
ATerm list_tool_0 (ATerm);
ATerm Tool_1 (ATerm, ATerm t_45 (ATerm));
ATerm all_query_0 (ATerm);
ATerm xtc_query_0 (ATerm);
ATerm _2 (ATerm, ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm xtc_store_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm p_51 (ATerm));
ATerm register_import_0 (ATerm);
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_64 (ATerm), ATerm i_64 (ATerm));
ATerm union_1 (ATerm, ATerm j_64 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_union_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_59 (ATerm));
ATerm if_verbose1_1 (ATerm, ATerm l_51 (ATerm));
ATerm xtc_register_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm o_51 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_51 (ATerm));
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm xtc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_69 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm q_68 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm e_46 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_46 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_68 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_57 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_77 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_56 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_50 (ATerm), ATerm v_50 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_56 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_56 (ATerm));
ATerm xtc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm a_6;
  a_6 = t;
  {
    ATerm i_1 = NULL,u_1 = NULL;
    ATerm c_6;
    c_6 = t;
    {
      ATerm t_1 = NULL;
      t = d_59(t);
      {
        t_1 = t;
        if(((i_1 != NULL) && (i_1 != t_1)))
          _fail(t_1);
        else
          i_1 = t_1;
      }
    }
    t = c_6;
    {
      ATerm v_1 = NULL;
      v_1 = t;
      if(((u_1 != NULL) && (u_1 != v_1)))
        _fail(v_1);
      else
        u_1 = v_1;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_1)), not_null(i_1)));
        t = printnl_0(t);
      }
    }
  }
  t = a_6;
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
  ATerm e_6;
  e_6 = t;
  {
    ATerm l_2 = NULL;
    t = term_f_6;
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
  t = e_6;
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
    t = _2(t, c_0, d_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(m_2)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(k_2), not_null(n_2))));
      t = list_tool_0(t);
    }
  }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm n_51 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm g_6;
    g_6 = t;
    {
      ATerm x_2 = NULL;
      ATerm y_2 = NULL;
      t = term_h_6;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_2), term_i_6);
        t = geq_0(t);
      }
    }
    t = g_6;
    t = n_51(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm tool_query_0 (ATerm t)
{
  ATerm c_3 = NULL;
  t = term_n_6;
  {
    t = get_config_0(t);
    {
      ATerm o_0 (ATerm t)
      {
        ATerm d_3 = NULL;
        d_3 = t;
        {
          ATerm o_6 = t;
          int p_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL;
              ATerm p_0 (ATerm t)
              {
                ATerm q_0 (ATerm t)
                {
                  t = term_q_6;
                  return(t);
                }
                t = debug_1(t, q_0);
                return(t);
              }
              t = if_verbose3_1(t, p_0);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(d_3)));
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
                          ATerm w_6 = t;
                          int x_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = version_query_0(t);
                              LocalPopChoice(x_6);
                            }
                          else
                            {
                              t = w_6;
                              t = list_tool_0(t);
                            }
                        }
                      }
                    }
                  }
                }
              }
              LocalPopChoice(p_6);
            }
          else
            {
              t = o_6;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_z_6), not_null(d_3)));
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
        ATerm a_7;
        a_7 = t;
        t = SSL_print(not_null(l_3), not_null(m_3));
        t = a_7;
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
                      ATerm b_7 = t;
                      int d_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_g_7;
                          {
                            t = get_config_0(t);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_h_7), not_null(d_4)));
                              t = print_0(t);
                            }
                          }
                          LocalPopChoice(d_7);
                        }
                      else
                        {
                          t = b_7;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_7), not_null(d_4)), term_n_7), not_null(c_4)), term_i_7), not_null(x_3)));
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
ATerm Tool_1 (ATerm t, ATerm t_45 (ATerm))
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
            t = t_45(t);
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
  t = term_o_7;
  {
    t = get_config_0(t);
    {
      t = term_v_6;
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
ATerm _2 (ATerm t, ATerm i_44 (ATerm), ATerm j_44 (ATerm))
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
            t = i_44(t);
            {
              p_5 = t;
              {
                t = not_null(j_5);
                {
                  ATerm t_5 = NULL;
                  t = j_44(t);
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
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_0);
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
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
                          ATerm w_7 = t;
                          int y_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(y_7);
                            }
                          else
                            {
                              t = w_7;
                              {
                                ATerm w_0 (ATerm t)
                                {
                                  t = term_a_8;
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
                            ATerm d_8;
                            d_8 = t;
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
                            t = d_8;
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
    t = (ATerm) ATmakeAppl(sym__2, term_e_8, not_null(c_7));
    {
      t = table_get_0(t);
      {
        ATerm x_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm f_8;
            f_8 = t;
            {
              ATerm e_7 = NULL;
              ATerm f_7 = NULL;
              f_7 = t;
              if(((e_7 != NULL) && (e_7 != f_7)))
                _fail(f_7);
              else
                e_7 = f_7;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_e_8, not_null(c_7), not_null(e_7));
                t = table_put_0(t);
              }
            }
            t = f_8;
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
      t = term_g_8;
      return(t);
    }
    t = say_1(t, a_1);
    return(t);
  }
  t = if_verbose1_1(t, z_0);
  {
    ATerm h_8;
    h_8 = t;
    {
      ATerm j_8 = NULL;
      t = term_m_8;
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
    t = h_8;
    {
      ATerm l_8 = NULL;
      t = term_v_6;
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
ATerm if_verbose5_1 (ATerm t, ATerm p_51 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm n_8;
    n_8 = t;
    {
      ATerm p_8 = NULL;
      ATerm q_8 = NULL;
      t = term_h_6;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_8), term_o_8);
        t = geq_0(t);
      }
    }
    t = n_8;
    t = p_51(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm register_import_0 (ATerm t)
{
  ATerm u_8 = NULL;
  t = term_r_8;
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
            t = term_s_8;
            return(t);
          }
          t = debug_1(t, d_1);
          return(t);
        }
        t = if_verbose2_1(t, c_1);
        {
          t = term_r_8;
          {
            t = get_config_0(t);
            {
              w_8 = t;
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = term_t_8;
                    return(t);
                  }
                  t = debug_1(t, f_1);
                  return(t);
                }
                t = if_verbose5_1(t, e_1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_v_6, term_v_8, not_null(w_8));
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
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym__2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      if(((d_9 != NULL) && (d_9 != e_9)))
        _fail(e_9);
      else
        d_9 = e_9;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_64 (ATerm), ATerm i_64 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(((ATgetType(k_9) == AT_LIST) && ((ATermList) k_9 != ATempty)))
    {
      l_9 = ATgetFirst((ATermList) k_9);
      m_9 = (ATerm) ATgetNext((ATermList) k_9);
      {
        t = i_64(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm p_9 = NULL;
            p_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), not_null(p_9));
              t = h_64(t);
            }
            return(t);
          }
          t = fetch_1(t, g_1);
        }
        t = not_null(m_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm j_64 (ATerm))
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym__2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      {
        t = not_null(w_9);
        {
          ATerm b_10 (ATerm t)
          {
            ATerm x_8 = t;
            int y_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(x_9);
                LocalPopChoice(y_8);
              }
            else
              {
                t = x_8;
                {
                  ATerm z_8 = t;
                  int a_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_1 (ATerm t)
                      {
                        t = not_null(x_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_64, h_1);
                      t = b_10(t);
                      LocalPopChoice(a_9);
                    }
                  else
                    {
                      t = z_8;
                      t = Cons_2(t, _id, b_10);
                    }
                }
              }
            return(t);
          }
          t = b_10(t);
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
ATerm table_union_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym__3))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      j_10 = ATgetArgument(g_10, 2);
      {
        ATerm f_9;
        f_9 = t;
        {
          ATerm n_10 = NULL;
          ATerm o_10 = NULL,q_10 = NULL;
          ATerm p_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), not_null(i_10));
          {
            ATerm g_9 = t;
            int h_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(h_9);
              }
            else
              {
                t = g_9;
                t = (ATerm) ATempty;
              }
            {
              p_10 = t;
              if(((o_10 != NULL) && (o_10 != p_10)))
                _fail(p_10);
              else
                o_10 = p_10;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_10), not_null(o_10));
            {
              t = union_0(t);
              {
                q_10 = t;
                if(((n_10 != NULL) && (n_10 != q_10)))
                  _fail(q_10);
                else
                  n_10 = q_10;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_10), not_null(i_10), not_null(n_10));
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
  ATerm i_9;
  i_9 = t;
  {
    ATerm v_10 = NULL;
    ATerm w_10 = NULL;
    w_10 = t;
    if(((v_10 != NULL) && (v_10 != w_10)))
      _fail(w_10);
    else
      v_10 = w_10;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATempty, not_null(v_10)));
      t = printnl_0(t);
    }
  }
  t = i_9;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_59 (ATerm))
{
  ATerm n_9;
  n_9 = t;
  {
    t = e_59(t);
    t = debug_0(t);
  }
  t = n_9;
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_51 (ATerm))
{
  ATerm j_1 (ATerm t)
  {
    ATerm o_9;
    o_9 = t;
    {
      ATerm z_10 = NULL;
      ATerm a_11 = NULL;
      t = term_h_6;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_10), term_q_9);
        t = geq_0(t);
      }
    }
    t = o_9;
    t = l_51(t);
    return(t);
  }
  t = try_1(t, j_1);
  return(t);
}
ATerm xtc_register_0 (ATerm t)
{
  ATerm i_11 = NULL;
  t = term_n_6;
  {
    ATerm k_11 = NULL;
    t = get_config_0(t);
    {
      i_11 = t;
      {
        ATerm k_1 (ATerm t)
        {
          ATerm l_1 (ATerm t)
          {
            t = term_r_9;
            return(t);
          }
          t = say_1(t, l_1);
          return(t);
        }
        t = if_verbose1_1(t, k_1);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm n_1 (ATerm t)
            {
              t = term_s_9;
              return(t);
            }
            t = debug_1(t, n_1);
            return(t);
          }
          t = if_verbose2_1(t, m_1);
          {
            t = term_f_6;
            {
              ATerm m_11 = NULL;
              t = get_config_0(t);
              {
                k_11 = t;
                {
                  ATerm o_1 (ATerm t)
                  {
                    ATerm p_1 (ATerm t)
                    {
                      t = term_t_9;
                      return(t);
                    }
                    t = debug_1(t, p_1);
                    return(t);
                  }
                  t = if_verbose2_1(t, o_1);
                  {
                    t = term_g_7;
                    {
                      t = get_config_0(t);
                      {
                        m_11 = t;
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm r_1 (ATerm t)
                            {
                              t = term_y_9;
                              return(t);
                            }
                            t = debug_1(t, r_1);
                            return(t);
                          }
                          t = if_verbose2_1(t, q_1);
                          {
                            t = not_null(i_11);
                            {
                              ATerm s_1 (ATerm t)
                              {
                                ATerm o_11 = NULL,q_11 = NULL;
                                ATerm z_9;
                                z_9 = t;
                                {
                                  ATerm p_11 = NULL;
                                  p_11 = t;
                                  if(((o_11 != NULL) && (o_11 != p_11)))
                                    _fail(p_11);
                                  else
                                    o_11 = p_11;
                                }
                                t = z_9;
                                {
                                  ATerm r_11 = NULL,t_11 = NULL;
                                  ATerm s_11 = NULL;
                                  s_11 = t;
                                  if(((r_11 != NULL) && (r_11 != s_11)))
                                    _fail(s_11);
                                  else
                                    r_11 = s_11;
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_11)), term_a_10), not_null(m_11));
                                    {
                                      t = concat_strings_0(t);
                                      {
                                        t_11 = t;
                                        if(((q_11 != NULL) && (q_11 != t_11)))
                                          _fail(t_11);
                                        else
                                          q_11 = t_11;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, term_v_6, (ATerm)ATmakeAppl(sym_Tool_1, not_null(o_11)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(k_11), not_null(q_11))));
                                    t = table_union_0(t);
                                  }
                                }
                                return(t);
                              }
                              t = map_1(t, s_1);
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
ATerm table_putlist_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym__2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      {
        t = not_null(g_12);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
            j_12 = t;
            c_12 :
            if(match_cons(j_12, sym__2))
              {
                k_12 = ATgetArgument(j_12, 0);
                l_12 = ATgetArgument(j_12, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_12), not_null(k_12), not_null(l_12));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, w_1);
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
  ATerm r_12 = NULL;
  r_12 = t;
  t = SSL_ReadFromFile(not_null(r_12));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm w_12 = NULL;
  ATerm y_12 = NULL;
  w_12 = t;
  {
    ATerm c_10;
    c_10 = t;
    {
      ATerm z_12 = NULL;
      t = term_d_10;
      {
        z_12 = t;
        if(((y_12 != NULL) && (y_12 != z_12)))
          _fail(z_12);
        else
          y_12 = z_12;
      }
    }
    t = c_10;
    {
      t = SSL_open_file(not_null(w_12), not_null(y_12));
      t = SSL_close_file(not_null(w_12));
    }
  }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm o_51 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm e_10;
    e_10 = t;
    {
      ATerm d_13 = NULL;
      ATerm e_13 = NULL;
      t = term_h_6;
      {
        t = get_config_0(t);
        {
          e_13 = t;
          if(((d_13 != NULL) && (d_13 != e_13)))
            _fail(e_13);
          else
            d_13 = e_13;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), term_k_10);
        t = geq_0(t);
      }
    }
    t = e_10;
    t = o_51(t);
    return(t);
  }
  t = try_1(t, x_1);
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm i_13 = NULL;
  ATerm k_13 = NULL;
  i_13 = t;
  {
    ATerm l_10 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_13)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_10;
      }
    {
      ATerm m_10;
      m_10 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_6, term_r_10, not_null(i_13));
        t = table_put_0(t);
      }
      t = m_10;
      {
        ATerm y_1 (ATerm t)
        {
          ATerm z_1 (ATerm t)
          {
            t = term_s_10;
            return(t);
          }
          t = debug_1(t, z_1);
          return(t);
        }
        t = if_verbose4_1(t, y_1);
        {
          ATerm t_10 = t;
          int u_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(u_10);
            }
          else
            {
              t = t_10;
              t = (ATerm) ATempty;
            }
          {
            ATerm l_13 = NULL;
            l_13 = t;
            if(((k_13 != NULL) && (k_13 != l_13)))
              _fail(l_13);
            else
              k_13 = l_13;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_v_6, not_null(k_13));
              {
                t = table_putlist_0(t);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_v_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_13)), term_x_10);
                  t = table_put_0(t);
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
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym__2))
    {
      r_13 = ATgetArgument(q_13, 0);
      s_13 = ATgetArgument(q_13, 1);
      {
        ATerm y_10;
        y_10 = t;
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_13), not_null(s_13));
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              t = SSL_gtr(not_null(r_13), not_null(s_13));
            }
        }
        t = y_10;
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
  ATerm y_13 = NULL;
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
      z_13 = t;
      x_13 :
      if(match_cons(z_13, sym__2))
        {
          a_14 = ATgetArgument(z_13, 0);
          b_14 = ATgetArgument(z_13, 1);
          {
            if(((y_13 != NULL) && (y_13 != a_14)))
              _fail(a_14);
            else
              y_13 = a_14;
            if(((y_13 != NULL) && (y_13 != b_14)))
              _fail(b_14);
            else
              y_13 = b_14;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_51 (ATerm))
{
  ATerm a_2 (ATerm t)
  {
    ATerm f_11;
    f_11 = t;
    {
      ATerm e_14 = NULL;
      ATerm f_14 = NULL;
      t = term_h_6;
      {
        t = get_config_0(t);
        {
          f_14 = t;
          if(((e_14 != NULL) && (e_14 != f_14)))
            _fail(f_14);
          else
            e_14 = f_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_14), term_g_11);
        t = geq_0(t);
      }
    }
    t = f_11;
    t = m_51(t);
    return(t);
  }
  t = try_1(t, a_2);
  return(t);
}
ATerm getenv_0 (ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  t = SSL_getenv(not_null(i_14));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm h_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_8;
      t = get_config_0(t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = h_11;
      {
        ATerm l_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_11;
            t = getenv_0(t);
            LocalPopChoice(n_11);
          }
        else
          {
            t = l_11;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  t = SSL_string_to_int(not_null(m_14));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
  u_14 = t;
  s_14 :
  if(match_string(u_14, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(u_14) == AT_LIST) && ((ATermList) u_14 != ATempty)))
        {
          v_14 = ATgetFirst((ATermList) u_14);
          w_14 = (ATerm) ATgetNext((ATermList) u_14);
          t_14 :
          if(((ATgetType(w_14) == AT_LIST) && ((ATermList) w_14 != ATempty)))
            {
              x_14 = ATgetFirst((ATermList) w_14);
              y_14 = (ATerm) ATgetNext((ATermList) w_14);
              {
                ATerm c_15 = NULL;
                ATerm v_11;
                v_11 = t;
                {
                  t = not_null(v_14);
                  t = l_0(t);
                }
                t = v_11;
                {
                  ATerm d_15 = NULL;
                  t = not_null(x_14);
                  {
                    t = m_0(t);
                    {
                      d_15 = t;
                      if(((c_15 != NULL) && (c_15 != d_15)))
                        _fail(d_15);
                      else
                        c_15 = d_15;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_14)), not_null(c_15));
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
ATerm conc_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym__2))
    {
      k_15 = ATgetArgument(j_15, 0);
      l_15 = ATgetArgument(j_15, 1);
      {
        t = not_null(k_15);
        {
          ATerm b_2 (ATerm t)
          {
            t = not_null(l_15);
            return(t);
          }
          t = at_end_1(t, b_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  a_16 :
  if(match_cons(g_16, sym__2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      {
        ATerm l_16 = NULL;
        ATerm m_16 = NULL,o_16 = NULL;
        ATerm n_16 = NULL;
        t = not_null(h_16);
        {
          ATerm w_11 = t;
          int x_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(x_11);
            }
          else
            {
              t = w_11;
              t = (ATerm) ATempty;
            }
          {
            n_16 = t;
            if(((m_16 != NULL) && (m_16 != n_16)))
              _fail(n_16);
            else
              m_16 = n_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), not_null(m_16));
          {
            t = conc_0(t);
            {
              o_16 = t;
              if(((l_16 != NULL) && (l_16 != o_16)))
                _fail(o_16);
              else
                l_16 = o_16;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_8, not_null(h_16), not_null(l_16));
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
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm v_17 = NULL;
        v_17 = t;
        t_16 :
        if(!(match_string(v_17, "-r")))
          {
            if(!(match_string(v_17, "--repository")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        ATerm a_12;
        a_12 = t;
        {
          ATerm w_17 = NULL;
          ATerm x_17 = NULL;
          x_17 = t;
          if(((w_17 != NULL) && (w_17 != x_17)))
            _fail(x_17);
          else
            w_17 = x_17;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(w_17));
            t = set_config_0(t);
          }
        }
        t = a_12;
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = ArgOption_3(t, d_2, e_2, f_2);
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_2 (ATerm t)
            {
              ATerm y_17 = NULL;
              y_17 = t;
              v_16 :
              if(!(match_string(y_17, "i")))
                {
                  if(!(match_string(y_17, "imp")))
                    {
                      if(!(match_string(y_17, "import")))
                        {
                          _fail(t);
                        }
                    }
                }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              ATerm m_12;
              m_12 = t;
              {
                ATerm z_17 = NULL;
                ATerm a_18 = NULL;
                a_18 = t;
                if(((z_17 != NULL) && (z_17 != a_18)))
                  _fail(a_18);
                else
                  z_17 = a_18;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_8, (ATerm) ATinsert(ATempty, not_null(z_17)));
                  t = extend_config_0(t);
                }
              }
              t = m_12;
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              t = term_n_12;
              return(t);
            }
            t = ArgOption_3(t, g_2, i_2, t_2);
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            {
              ATerm o_12 = t;
              int p_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_2 (ATerm t)
                  {
                    ATerm b_18 = NULL;
                    b_18 = t;
                    x_16 :
                    if(!(match_string(b_18, "r")))
                      {
                        if(!(match_string(b_18, "reg")))
                          {
                            if(!(match_string(b_18, "register")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm v_2 (ATerm t)
                  {
                    ATerm q_12;
                    q_12 = t;
                    {
                      ATerm c_18 = NULL;
                      ATerm d_18 = NULL;
                      d_18 = t;
                      if(((c_18 != NULL) && (c_18 != d_18)))
                        _fail(d_18);
                      else
                        c_18 = d_18;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_s_12, not_null(c_18));
                        t = set_config_0(t);
                      }
                    }
                    t = q_12;
                    return(t);
                  }
                  ATerm w_2 (ATerm t)
                  {
                    t = term_t_12;
                    return(t);
                  }
                  t = Option_3(t, u_2, v_2, w_2);
                  LocalPopChoice(p_12);
                }
              else
                {
                  t = o_12;
                  {
                    ATerm u_12 = t;
                    int v_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_2 (ATerm t)
                        {
                          ATerm e_18 = NULL;
                          e_18 = t;
                          z_16 :
                          if(!(match_string(e_18, "-t")))
                            {
                              if(!(match_string(e_18, "--tool")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm a_3 (ATerm t)
                        {
                          ATerm x_12;
                          x_12 = t;
                          {
                            ATerm f_18 = NULL;
                            ATerm g_18 = NULL;
                            g_18 = t;
                            if(((f_18 != NULL) && (f_18 != g_18)))
                              _fail(g_18);
                            else
                              f_18 = g_18;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATinsert(ATempty, not_null(f_18)));
                              t = extend_config_0(t);
                            }
                          }
                          t = x_12;
                          return(t);
                        }
                        ATerm b_3 (ATerm t)
                        {
                          t = term_a_13;
                          return(t);
                        }
                        t = ArgOption_3(t, z_2, a_3, b_3);
                        LocalPopChoice(v_12);
                      }
                    else
                      {
                        t = u_12;
                        {
                          ATerm b_13 = t;
                          int c_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_3 (ATerm t)
                              {
                                ATerm h_18 = NULL;
                                h_18 = t;
                                c_17 :
                                if(!(match_string(h_18, "-l")))
                                  {
                                    if(!(match_string(h_18, "--location")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm g_3 (ATerm t)
                              {
                                ATerm f_13;
                                f_13 = t;
                                {
                                  ATerm i_18 = NULL;
                                  ATerm j_18 = NULL;
                                  j_18 = t;
                                  if(((i_18 != NULL) && (i_18 != j_18)))
                                    _fail(j_18);
                                  else
                                    i_18 = j_18;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_g_7, not_null(i_18));
                                    t = set_config_0(t);
                                  }
                                }
                                t = f_13;
                                return(t);
                              }
                              ATerm h_3 (ATerm t)
                              {
                                t = term_g_13;
                                return(t);
                              }
                              t = ArgOption_3(t, e_3, g_3, h_3);
                              LocalPopChoice(c_13);
                            }
                          else
                            {
                              t = b_13;
                              {
                                ATerm h_13 = t;
                                int j_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_3 (ATerm t)
                                    {
                                      ATerm k_18 = NULL;
                                      k_18 = t;
                                      e_17 :
                                      if(!(match_string(k_18, "-V")))
                                        {
                                          if(!(match_string(k_18, "--Version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm n_3 (ATerm t)
                                    {
                                      ATerm m_13;
                                      m_13 = t;
                                      {
                                        ATerm l_18 = NULL;
                                        ATerm m_18 = NULL;
                                        m_18 = t;
                                        if(((l_18 != NULL) && (l_18 != m_18)))
                                          _fail(m_18);
                                        else
                                          l_18 = m_18;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_f_6, not_null(l_18));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = m_13;
                                      return(t);
                                    }
                                    ATerm o_3 (ATerm t)
                                    {
                                      t = term_n_13;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, i_3, n_3, o_3);
                                    LocalPopChoice(j_13);
                                  }
                                else
                                  {
                                    t = h_13;
                                    {
                                      ATerm o_13 = t;
                                      int t_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_3 (ATerm t)
                                          {
                                            ATerm n_18 = NULL;
                                            n_18 = t;
                                            i_17 :
                                            if(!(match_string(n_18, "q")))
                                              {
                                                if(!(match_string(n_18, "query")))
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            return(t);
                                          }
                                          ATerm q_3 (ATerm t)
                                          {
                                            ATerm u_13;
                                            u_13 = t;
                                            {
                                              ATerm o_18 = NULL;
                                              ATerm p_18 = NULL;
                                              p_18 = t;
                                              if(((o_18 != NULL) && (o_18 != p_18)))
                                                _fail(p_18);
                                              else
                                                o_18 = p_18;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, term_v_13, not_null(o_18));
                                                t = set_config_0(t);
                                              }
                                            }
                                            t = u_13;
                                            return(t);
                                          }
                                          ATerm r_3 (ATerm t)
                                          {
                                            t = term_w_13;
                                            return(t);
                                          }
                                          t = Option_3(t, p_3, q_3, r_3);
                                          LocalPopChoice(t_13);
                                        }
                                      else
                                        {
                                          t = o_13;
                                          {
                                            ATerm c_14 = t;
                                            int d_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm z_3 (ATerm t)
                                                {
                                                  ATerm q_18 = NULL;
                                                  q_18 = t;
                                                  k_17 :
                                                  if(!(match_string(q_18, "-a")))
                                                    {
                                                      if(!(match_string(q_18, "--all")))
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  return(t);
                                                }
                                                ATerm a_4 (ATerm t)
                                                {
                                                  ATerm g_14;
                                                  g_14 = t;
                                                  {
                                                    t = term_h_14;
                                                    t = set_config_0(t);
                                                  }
                                                  t = g_14;
                                                  return(t);
                                                }
                                                ATerm e_4 (ATerm t)
                                                {
                                                  t = term_j_14;
                                                  return(t);
                                                }
                                                t = Option_3(t, z_3, a_4, e_4);
                                                LocalPopChoice(d_14);
                                              }
                                            else
                                              {
                                                t = c_14;
                                                {
                                                  ATerm k_14 = t;
                                                  int l_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_4 (ATerm t)
                                                      {
                                                        ATerm r_18 = NULL;
                                                        r_18 = t;
                                                        n_17 :
                                                        if(!(match_string(r_18, "-L")))
                                                          {
                                                            if(!(match_string(r_18, "--Location")))
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm g_4 (ATerm t)
                                                      {
                                                        ATerm n_14;
                                                        n_14 = t;
                                                        {
                                                          t = term_o_14;
                                                          t = set_config_0(t);
                                                        }
                                                        t = n_14;
                                                        return(t);
                                                      }
                                                      ATerm h_4 (ATerm t)
                                                      {
                                                        t = term_p_14;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, f_4, g_4, h_4);
                                                      LocalPopChoice(l_14);
                                                    }
                                                  else
                                                    {
                                                      t = k_14;
                                                      {
                                                        ATerm i_4 (ATerm t)
                                                        {
                                                          ATerm s_18 = NULL;
                                                          s_18 = t;
                                                          o_17 :
                                                          if(!(match_string(s_18, "--verbose")))
                                                            {
                                                              _fail(t);
                                                            }
                                                          return(t);
                                                        }
                                                        ATerm j_4 (ATerm t)
                                                        {
                                                          ATerm q_14;
                                                          q_14 = t;
                                                          {
                                                            ATerm t_18 = NULL;
                                                            ATerm u_18 = NULL;
                                                            t = string_to_int_0(t);
                                                            {
                                                              u_18 = t;
                                                              if(((t_18 != NULL) && (t_18 != u_18)))
                                                                _fail(u_18);
                                                              else
                                                                t_18 = u_18;
                                                            }
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__2, term_h_6, not_null(t_18));
                                                              t = set_config_0(t);
                                                            }
                                                          }
                                                          t = q_14;
                                                          return(t);
                                                        }
                                                        ATerm k_4 (ATerm t)
                                                        {
                                                          t = term_r_14;
                                                          return(t);
                                                        }
                                                        t = ArgOption_3(t, i_4, j_4, k_4);
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
  ATerm e_19 = NULL;
  e_19 = t;
  t = SSL_table_destroy(not_null(e_19));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm i_19 = NULL;
  i_19 = t;
  t = SSL_implode_string(not_null(i_19));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_69 (ATerm))
{
  ATerm l_19 (ATerm t)
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_19);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        {
          t = Nil_0(t);
          t = f_69(t);
        }
      }
    return(t);
  }
  t = l_19(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = b_15;
      {
        ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
        o_19 = t;
        n_19 :
        if(((ATgetType(o_19) == AT_LIST) && ((ATermList) o_19 != ATempty)))
          {
            p_19 = ATgetFirst((ATermList) o_19);
            q_19 = (ATerm) ATgetNext((ATermList) o_19);
            {
              t = not_null(p_19);
              {
                ATerm l_4 (ATerm t)
                {
                  t = not_null(q_19);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_4);
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
  ATerm w_19 = NULL;
  w_19 = t;
  t = SSL_explode_string(not_null(w_19));
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
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_15), term_f_15);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm z_19 (ATerm t)
  {
    ATerm h_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_15);
      }
    else
      {
        t = h_15;
        t = Cons_2(t, q_68, z_19);
      }
    return(t);
  }
  t = z_19(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  i_20 = t;
  f_20 :
  if(((ATgetType(i_20) == AT_LIST) && ((ATermList) i_20 != ATempty)))
    {
      g_20 = ATgetFirst((ATermList) i_20);
      h_20 = (ATerm) ATgetNext((ATermList) i_20);
      {
        ATerm l_20 = NULL;
        t = not_null(h_20);
        {
          ATerm n_15;
          n_15 = t;
          {
            ATerm m_20 = NULL,u_20 = NULL,x_20 = NULL;
            ATerm o_15;
            o_15 = t;
            {
              ATerm n_20 = NULL;
              t = j_0(t);
              {
                n_20 = t;
                if(((m_20 != NULL) && (m_20 != n_20)))
                  _fail(n_20);
                else
                  m_20 = n_20;
              }
            }
            t = o_15;
            {
              ATerm v_20 = NULL;
              t = not_null(g_20);
              {
                t = i_0(t);
                {
                  v_20 = t;
                  if(((u_20 != NULL) && (u_20 != v_20)))
                    _fail(v_20);
                  else
                    u_20 = v_20;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_20)), not_null(u_20));
                {
                  x_20 = t;
                  if(((l_20 != NULL) && (l_20 != x_20)))
                    _fail(x_20);
                  else
                    l_20 = x_20;
                }
              }
            }
          }
          t = n_15;
          {
            ATerm p_4 (ATerm t)
            {
              t = not_null(l_20);
              return(t);
            }
            t = reverse_acc_2(t, i_0, p_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) i_20 == ATempty))
        {
          {
            t = term_x_10;
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
  ATerm q_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_15), term_q_15), term_p_15);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_46 (ATerm))
{
  ATerm r_21 = NULL,s_21 = NULL;
  r_21 = t;
  q_21 :
  if(match_cons(r_21, sym_Program_1))
    {
      s_21 = ATgetArgument(r_21, 0);
      {
        ATerm v_21 = NULL,a_22 = NULL;
        ATerm z_21 = NULL;
        t = SSLgetAnnotations(not_null(r_21));
        {
          z_21 = t;
          if(((v_21 != NULL) && (v_21 != z_21)))
            _fail(z_21);
          else
            v_21 = z_21;
        }
        {
          t = not_null(s_21);
          {
            ATerm d_22 = NULL;
            t = e_46(t);
            {
              a_22 = t;
              {
                ATerm e_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_22)), not_null(v_21));
                {
                  e_22 = t;
                  if(((d_22 != NULL) && (d_22 != e_22)))
                    _fail(e_22);
                  else
                    d_22 = e_22;
                }
                t = not_null(d_22);
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
  ATerm n_22 = NULL;
  ATerm u_4 (ATerm t)
  {
    ATerm x_4 (ATerm t)
    {
      ATerm o_22 = NULL;
      o_22 = t;
      if(((n_22 != NULL) && (n_22 != o_22)))
        _fail(o_22);
      else
        n_22 = o_22;
      return(t);
    }
    t = Program_1(t, x_4);
    return(t);
  }
  t = option_defined_1(t, u_4);
  {
    ATerm y_4 (ATerm t)
    {
      ATerm p_22 = NULL;
      ATerm q_22 = NULL;
      t = term_x_10;
      {
        ATerm z_4 (ATerm t)
        {
          t = not_null(n_22);
          return(t);
        }
        t = short_description_1(t, z_4);
        {
          t = concat_strings_0(t);
          {
            q_22 = t;
            if(((p_22 != NULL) && (p_22 != q_22)))
              _fail(q_22);
            else
              p_22 = q_22;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATempty, not_null(p_22)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, y_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATempty, term_s_15));
      {
        t = printnl_0(t);
        {
          t = term_v_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm r_22 = NULL;
                  r_22 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_22)), term_w_15));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_5);
                {
                  ATerm b_5 (ATerm t)
                  {
                    ATerm t_22 = NULL;
                    ATerm u_22 = NULL;
                    t = term_x_10;
                    {
                      ATerm c_5 (ATerm t)
                      {
                        t = not_null(n_22);
                        return(t);
                      }
                      t = long_description_1(t, c_5);
                      {
                        t = concat_strings_0(t);
                        {
                          u_22 = t;
                          if(((t_22 != NULL) && (t_22 != u_22)))
                            _fail(u_22);
                          else
                            t_22 = u_22;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_22)), term_x_15));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_5);
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
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym__2))
    {
      c_23 = ATgetArgument(b_23, 0);
      d_23 = ATgetArgument(b_23, 1);
      {
        ATerm y_15;
        y_15 = t;
        t = SSL_printnl(not_null(c_23), not_null(d_23));
        t = y_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_46 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL;
  m_23 = t;
  l_23 :
  if(match_cons(m_23, sym_Undefined_1))
    {
      n_23 = ATgetArgument(m_23, 0);
      {
        ATerm y_23 = NULL,a_24 = NULL;
        ATerm z_23 = NULL;
        t = SSLgetAnnotations(not_null(m_23));
        {
          z_23 = t;
          if(((y_23 != NULL) && (y_23 != z_23)))
            _fail(z_23);
          else
            y_23 = z_23;
        }
        {
          t = not_null(n_23);
          {
            ATerm c_24 = NULL;
            t = f_46(t);
            {
              a_24 = t;
              {
                ATerm d_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_24)), not_null(y_23));
                {
                  d_24 = t;
                  if(((c_24 != NULL) && (c_24 != d_24)))
                    _fail(d_24);
                  else
                    c_24 = d_24;
                }
                t = not_null(c_24);
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
ATerm fetch_1 (ATerm t, ATerm z_68 (ATerm))
{
  ATerm k_24 (ATerm t)
  {
    ATerm z_15 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_68, _id);
        LocalPopChoice(b_16);
      }
    else
      {
        t = z_15;
        t = Cons_2(t, _id, k_24);
      }
    return(t);
  }
  t = k_24(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_57 (ATerm))
{
  t = fetch_1(t, m_57);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  o_24 :
  if(match_cons(p_24, sym_Help_0))
    {
      ATerm r_24 = NULL,t_24 = NULL;
      ATerm c_16;
      c_16 = t;
      {
        ATerm s_24 = NULL;
        t = SSLgetAnnotations(not_null(p_24));
        {
          s_24 = t;
          if(((r_24 != NULL) && (r_24 != s_24)))
            _fail(s_24);
          else
            r_24 = s_24;
        }
      }
      t = c_16;
      {
        ATerm u_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(r_24));
        {
          u_24 = t;
          if(((t_24 != NULL) && (t_24 != u_24)))
            _fail(u_24);
          else
            t_24 = u_24;
        }
        t = not_null(t_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_77(t);
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  a_25 = t;
  z_24 :
  if(match_cons(a_25, sym__2))
    {
      b_25 = ATgetArgument(a_25, 0);
      c_25 = ATgetArgument(a_25, 1);
      t = SSL_table_get(not_null(b_25), not_null(c_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym__3))
    {
      k_25 = ATgetArgument(j_25, 0);
      l_25 = ATgetArgument(j_25, 1);
      m_25 = ATgetArgument(j_25, 2);
      {
        ATerm f_16;
        f_16 = t;
        {
          ATerm q_25 = NULL;
          ATerm r_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_25), not_null(l_25));
          {
            ATerm j_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_16);
              }
            else
              {
                t = j_16;
                t = (ATerm) ATempty;
              }
            {
              r_25 = t;
              if(((q_25 != NULL) && (q_25 != r_25)))
                _fail(r_25);
              else
                q_25 = r_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_25), not_null(l_25), (ATerm) ATinsert(CheckATermList(not_null(q_25)), not_null(m_25)));
            t = table_put_0(t);
          }
        }
        t = f_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_56 (ATerm))
{
  ATerm v_25 = NULL;
  ATerm w_25 = NULL;
  t = term_x_10;
  {
    t = m_56(t);
    {
      w_25 = t;
      if(((v_25 != NULL) && (v_25 != w_25)))
        _fail(w_25);
      else
        v_25 = w_25;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_15, term_u_15, not_null(v_25));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  b_26 :
  if(match_string(c_26, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(c_26) == AT_LIST) && ((ATermList) c_26 != ATempty)))
        {
          d_26 = ATgetFirst((ATermList) c_26);
          e_26 = (ATerm) ATgetNext((ATermList) c_26);
          {
            ATerm h_26 = NULL;
            ATerm p_16;
            p_16 = t;
            {
              t = not_null(d_26);
              t = a_0(t);
            }
            t = p_16;
            {
              ATerm i_26 = NULL;
              t = term_x_10;
              {
                t = b_0(t);
                {
                  i_26 = t;
                  if(((h_26 != NULL) && (h_26 != i_26)))
                    _fail(i_26);
                  else
                    h_26 = i_26;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_26)), not_null(h_26));
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
  ATerm d_5 (ATerm t)
  {
    ATerm n_26 = NULL;
    n_26 = t;
    m_26 :
    if(!(match_string(n_26, "--help")))
      {
        if(!(match_string(n_26, "-h")))
          {
            if(!(match_string(n_26, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_q_16;
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    t = term_r_16;
    return(t);
  }
  t = Option_3(t, d_5, e_5, f_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
  q_26 = t;
  p_26 :
  if(((ATgetType(q_26) == AT_LIST) && ((ATermList) q_26 != ATempty)))
    {
      r_26 = ATgetFirst((ATermList) q_26);
      s_26 = (ATerm) ATgetNext((ATermList) q_26);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_26)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_26)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_50 (ATerm), ATerm v_50 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL,m_27 = NULL;
  i_27 = t;
  g_27 :
  if(((ATgetType(i_27) == AT_LIST) && ((ATermList) i_27 != ATempty)))
    {
      j_27 = ATgetFirst((ATermList) i_27);
      m_27 = (ATerm) ATgetNext((ATermList) i_27);
      {
        ATerm q_27 = NULL,s_27 = NULL;
        ATerm r_27 = NULL;
        t = SSLgetAnnotations(not_null(i_27));
        {
          r_27 = t;
          if(((q_27 != NULL) && (q_27 != r_27)))
            _fail(r_27);
          else
            q_27 = r_27;
        }
        {
          t = not_null(j_27);
          {
            ATerm u_27 = NULL;
            t = u_50(t);
            {
              s_27 = t;
              {
                t = not_null(m_27);
                {
                  ATerm w_27 = NULL;
                  t = v_50(t);
                  {
                    u_27 = t;
                    {
                      ATerm x_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(u_27)), not_null(s_27)), not_null(q_27));
                      {
                        x_27 = t;
                        if(((w_27 != NULL) && (w_27 != x_27)))
                          _fail(x_27);
                        else
                          w_27 = x_27;
                      }
                      t = not_null(w_27);
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
  ATerm h_28 = NULL;
  h_28 = t;
  g_28 :
  if(((ATermList) h_28 == ATempty))
    {
      {
        ATerm j_28 = NULL,l_28 = NULL;
        ATerm s_16;
        s_16 = t;
        {
          ATerm k_28 = NULL;
          t = SSLgetAnnotations(not_null(h_28));
          {
            k_28 = t;
            if(((j_28 != NULL) && (j_28 != k_28)))
              _fail(k_28);
            else
              j_28 = k_28;
          }
        }
        t = s_16;
        {
          ATerm m_28 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_28));
          {
            m_28 = t;
            if(((l_28 != NULL) && (l_28 != m_28)))
              _fail(m_28);
            else
              l_28 = m_28;
          }
          t = not_null(l_28);
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
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  s_28 = t;
  r_28 :
  if(match_cons(s_28, sym__2))
    {
      t_28 = ATgetArgument(s_28, 0);
      u_28 = ATgetArgument(s_28, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_8, not_null(t_28), not_null(u_28));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_56 (ATerm))
{
  ATerm u_16;
  u_16 = t;
  {
    ATerm k_5 (ATerm t)
    {
      t = term_w_16;
      t = k_56(t);
      return(t);
    }
    t = try_1(t, k_5);
  }
  t = u_16;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm c_29 = NULL;
      ATerm y_16;
      y_16 = t;
      {
        ATerm a_29 = NULL;
        ATerm b_29 = NULL;
        b_29 = t;
        if(((a_29 != NULL) && (a_29 != b_29)))
          _fail(b_29);
        else
          a_29 = b_29;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_17, not_null(a_29));
          t = set_config_0(t);
        }
      }
      t = y_16;
      {
        ATerm d_29 = NULL;
        d_29 = t;
        if(((c_29 != NULL) && (c_29 != d_29)))
          _fail(d_29);
        else
          c_29 = d_29;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_29));
      }
      return(t);
    }
    ATerm m_5 (ATerm t)
    {
      ATerm b_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_17 = t;
          int g_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(g_17);
            }
          else
            {
              t = f_17;
              {
                t = k_56(t);
                t = Cons_2(t, _id, m_5);
              }
            }
          LocalPopChoice(d_17);
        }
      else
        {
          t = b_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_5, m_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,n_29 = NULL;
  ATerm h_17;
  h_17 = t;
  {
    ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,s_29 = NULL;
    o_29 = t;
    i_29 :
    if(match_cons(o_29, sym__3))
      {
        p_29 = ATgetArgument(o_29, 0);
        q_29 = ATgetArgument(o_29, 1);
        s_29 = ATgetArgument(o_29, 2);
        {
          if(((j_29 != NULL) && (j_29 != p_29)))
            _fail(p_29);
          else
            j_29 = p_29;
          {
            if(((k_29 != NULL) && (k_29 != q_29)))
              _fail(q_29);
            else
              k_29 = q_29;
            {
              if(((n_29 != NULL) && (n_29 != s_29)))
                _fail(s_29);
              else
                n_29 = s_29;
              t = SSL_table_put(not_null(j_29), not_null(k_29), not_null(n_29));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_17;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_56 (ATerm))
{
  ATerm w_29 = NULL;
  ATerm j_17;
  j_17 = t;
  {
    t = term_l_17;
    t = table_put_0(t);
  }
  t = j_17;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm m_17 = t;
      int p_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_56(t);
          LocalPopChoice(p_17);
        }
      else
        {
          t = m_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_5);
    {
      ATerm s_5 (ATerm t)
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_s_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            {
              ATerm v_5 (ATerm t)
              {
                ATerm w_5 (ATerm t)
                {
                  ATerm x_29 = NULL;
                  x_29 = t;
                  if(((w_29 != NULL) && (w_29 != x_29)))
                    _fail(x_29);
                  else
                    w_29 = x_29;
                  return(t);
                }
                t = Undefined_1(t, w_5);
                return(t);
              }
              t = option_defined_1(t, v_5);
              {
                ATerm t_17;
                t_17 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_29)), term_u_17));
                  t = printnl_0(t);
                }
                t = t_17;
                {
                  t = system_usage_0(t);
                  {
                    t = term_q_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_5);
      {
        ATerm v_18;
        v_18 = t;
        {
          t = term_t_15;
          t = table_destroy_0(t);
        }
        t = v_18;
      }
    }
  }
  return(t);
}
ATerm xtc_0 (ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_options_1(t, xtc_options_0);
      {
        t = xtc_location_0(t);
        {
          ATerm x_5 (ATerm t)
          {
            ATerm y_5 (ATerm t)
            {
              t = term_y_18;
              return(t);
            }
            t = debug_1(t, y_5);
            return(t);
          }
          t = if_verbose2_1(t, x_5);
          {
            t = xtc_read_0(t);
            {
              ATerm z_18 = t;
              int a_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_19 = t;
                  int c_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_s_12;
                      {
                        t = get_config_0(t);
                        t = xtc_register_0(t);
                      }
                      LocalPopChoice(c_19);
                    }
                  else
                    {
                      t = b_19;
                      {
                        t = term_r_8;
                        {
                          t = get_config_0(t);
                          t = register_import_0(t);
                        }
                      }
                    }
                  t = xtc_store_0(t);
                  LocalPopChoice(a_19);
                }
              else
                {
                  t = z_18;
                  {
                    t = term_v_13;
                    {
                      t = get_config_0(t);
                      t = xtc_query_0(t);
                    }
                  }
                }
              {
                t = term_s_17;
                t = exit_0(t);
              }
            }
          }
        }
      }
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
        ATerm z_5 (ATerm t)
        {
          t = term_d_19;
          return(t);
        }
        t = debug_1(t, z_5);
      }
    }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = xtc_0(t);
  return(t);
}
