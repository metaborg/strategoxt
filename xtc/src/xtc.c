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
Symbol sym_Undefined_0;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Version_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
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
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_w_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_v_19;
ATerm term_q_19;
ATerm term_j_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_y_15;
ATerm term_k_15;
ATerm term_f_15;
ATerm term_z_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_p_9;
void init_constant_terms (void)
{
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__3, term_n_13, term_r_17, term_n_16);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
}
ATerm version_query_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm x_91 (ATerm), ATerm);
ATerm tool_query_0_0 (ATerm);
ATerm list_tool_0_0 (ATerm);
ATerm Tool_1_0 (ATerm f_63 (ATerm), ATerm);
ATerm all_query_0_0 (ATerm);
ATerm repository_query_0_0 (ATerm);
ATerm xtc_query_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm m_83 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm can_write_repository_0_0 (ATerm);
ATerm xtc_store_0_0 (ATerm);
ATerm register_import_0_0 (ATerm);
ATerm table_union_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_91 (ATerm), ATerm);
ATerm xtc_register_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm xtc_options_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm a_63 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm b_63 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm k_87 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm p_88 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_88 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm m_88 (ATerm), ATerm);
ATerm xtc_main_0_0 (ATerm);
ATerm xtc_xtc_get_0_0 (ATerm);
ATerm debug_1_0 (ATerm y_82 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm z_91 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm e_78 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_64 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm c_83 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm y_91 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm a_92 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_71 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm);
ATerm union_1_0 (ATerm d_75 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm q_88 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_71 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm e_56 (ATerm), ATerm f_56 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_57 (ATerm), ATerm o_57 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_71 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm try_1_0 (ATerm p_63 (ATerm), ATerm);
ATerm get_config_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_xtc_call_0_0 (ATerm);
ATerm xtc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm version_query_0_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL;
  g_1 = t;
  t = term_p_9;
  t = get_config_0_0(t);
  h_1 = t;
  t = g_1;
  {
    ATerm b_0 (ATerm t)
    {
      if(match_cons(t, sym_Tool_1))
        {
          i_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    ATerm f_0 (ATerm t)
    {
      ATerm m_0 (ATerm t)
      {
        if(match_cons(t, sym__2))
          {
            if((h_1 != ATgetArgument(t, 0)))
              {
                _fail(ATgetArgument(t, 0));
              }
            j_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        return(t);
      }
      t = fetch_1_0(m_0, t);
      return(t);
    }
    t = _2_0(b_0, f_0, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(i_1)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_1, not_null(j_1))));
    t = list_tool_0_0(t);
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm l_1 = NULL,n_1 = NULL;
    l_1 = t;
    t = term_s_9;
    t = get_config_0_0(t);
    n_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_1, term_v_9);
    t = geq_0_0(t);
    t = l_1;
    t = x_91(t);
    return(t);
  }
  t = try_1_0(n_0, t);
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm p_1 = NULL;
  t = term_w_9;
  t = get_config_0_0(t);
  t = xtc_import_0_0(t);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm r_1 = NULL;
      r_1 = t;
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              ATerm q_0 (ATerm t)
              {
                t = term_d_10;
                return(t);
              }
              t = debug_1_0(q_0, t);
              return(t);
            }
            t = if_verbose3_1_0(p_0, t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, r_1));
            p_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, r_1), p_1);
            {
              ATerm e_10 = t;
              int f_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = version_query_0_0(t);
                  ;
                  LocalPopChoice(f_10);
                }
              else
                {
                  t = e_10;
                  t = list_tool_0_0(t);
                }
            }
            ;
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            t = SSL_print((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue))), r_1));
            t = (ATerm) ATmakeAppl(sym__2, term_g_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_10), term_i_10), r_1));
          }
      }
      return(t);
    }
    t = map_1_0(o_0, t);
  }
  return(t);
}
ATerm list_tool_0_0 (ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      if(match_cons(t_10, sym_Tool_1))
        {
          t_1 = ATgetArgument(t_10, 0);
        }
      else
        _fail(t);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_1;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm x_1 = NULL,c_2 = NULL;
      if(match_cons(t, sym__2))
        {
          x_1 = ATgetArgument(t, 0);
          c_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_11;
            t = get_config_0_0(t);
            t = SSL_print((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), c_2));
            t = (ATerm) ATmakeAppl(sym__2, term_g_10, (ATerm) ATinsert(ATinsert(ATempty, term_j_10), c_2));
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            t = SSL_print((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), c_2), (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue))), x_1), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), t_1));
            t = (ATerm) ATmakeAppl(sym__2, term_g_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_10), c_2), term_d_11), x_1), term_b_11), t_1));
          }
      }
      return(t);
    }
    t = map_1_0(r_0, t);
  }
  return(t);
}
ATerm Tool_1_0 (ATerm f_63 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL;
  h_2 = t;
  if(match_cons(t, sym_Tool_1))
    {
      e_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_2);
  d_2 = t;
  t = e_2;
  t = f_63(t);
  f_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Tool_1, f_2), d_2);
  return(t);
}
ATerm all_query_0_0 (ATerm t)
{
  t = term_g_11;
  t = get_config_0_0(t);
  t = xtc_import_0_0(t);
  t = term_k_11;
  t = table_getlist_0_0(t);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm t_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          t = Tool_1_0(_id, t);
          return(t);
        }
        t = _2_0(u_0, _id, t);
        t = list_tool_0_0(t);
        return(t);
      }
      t = try_1_0(t_0, t);
      return(t);
    }
    t = map_1_0(s_0, t);
  }
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm m_2 = NULL;
  t = term_l_11;
  t = get_config_0_0(t);
  t = xtc_location_0_0(t);
  m_2 = t;
  t = SSL_print((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), m_2), (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_g_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_10), m_2), term_m_11));
  return(t);
}
ATerm xtc_query_0_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = repository_query_0_0(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = all_query_0_0(t);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            t = tool_query_0_0(t);
          }
      }
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm m_83 (ATerm), ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL;
  if(match_cons(t, sym__2))
    {
      n_2 = ATgetArgument(t, 0);
      o_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_2, term_r_11);
  t = open_stream_0_0(t);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_2, o_2);
  t = m_83(t);
  t = fclose_0_0(t);
  t = o_2;
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm q_2 = NULL,t_2 = NULL,u_2 = NULL,a_3 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm s_11 = ATgetArgument(t, 0);
        if(match_cons(s_11, sym_Stream_1))
          {
            q_2 = ATgetArgument(s_11, 0);
          }
        else
          _fail(t);
        t_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(q_2, t_2);
    u_2 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), u_2);
    a_3 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, a_3);
    return(t);
  }
  t = WriteToFile_1_0(v_0, t);
  return(t);
}
ATerm can_write_repository_0_0 (ATerm t)
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_0 = NULL;
      e_0 = t;
      t = SSL_access(e_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      LocalPopChoice(u_11);
      {
        ATerm i_0 = NULL;
        i_0 = t;
        t = SSL_access(i_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_W__OK_0)));
      }
    }
  else
    {
      t = t_11;
    }
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      t = term_v_11;
      return(t);
    }
    t = say_1_0(x_0, t);
    return(t);
  }
  t = if_verbose1_1_0(w_0, t);
  t = term_w_11;
  t = get_config_0_0(t);
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = can_write_repository_0_0(t);
        LocalPopChoice(y_11);
        {
          ATerm d_3 = NULL,e_3 = NULL;
          d_3 = t;
          t = term_k_11;
          t = table_getlist_0_0(t);
          e_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_3, e_3);
          t = WriteToTextFile_0_0(t);
        }
      }
    else
      {
        t = x_11;
        {
          ATerm y_0 (ATerm t)
          {
            t = term_b_12;
            return(t);
          }
          t = debug_1_0(y_0, t);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm g_3 = NULL;
  t = term_c_12;
  t = get_config_0_0(t);
  {
    ATerm z_0 (ATerm t)
    {
      ATerm a_1 (ATerm t)
      {
        t = term_e_12;
        return(t);
      }
      t = debug_1_0(a_1, t);
      return(t);
    }
    t = if_verbose2_1_0(z_0, t);
    t = term_c_12;
    t = get_config_0_0(t);
    g_3 = t;
    {
      ATerm b_1 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          t = term_f_12;
          return(t);
        }
        t = debug_1_0(c_1, t);
        return(t);
      }
      t = if_verbose5_1_0(b_1, t);
      t = (ATerm) ATmakeAppl(sym__3, term_k_11, term_i_12, g_3);
      t = table_union_0_0(t);
    }
  }
  return(t);
}
ATerm table_union_0_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,o_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym__3))
    {
      i_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
      k_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_3, j_3);
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_12 = ATgetArgument(t, 0);
            ATerm m_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_3, j_3);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = (ATerm) ATempty;
      }
    o_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_3, o_3);
    t = union_0_0(t);
    r_3 = t;
    t = SSL_table_put(i_3, j_3, r_3);
    t = (ATerm) ATmakeAppl(sym__3, i_3, j_3, k_3);
  }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm u_3 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm v_3 = NULL;
    v_3 = t;
    t = SSL_explode_string(v_3);
    return(t);
  }
  t = map_1_0(d_1, t);
  t = concat_0_0(t);
  u_3 = t;
  t = SSL_implode_string(u_3);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm w_3 = NULL,x_3 = NULL;
    w_3 = t;
    t = term_s_9;
    t = get_config_0_0(t);
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_3, term_n_12);
    t = geq_0_0(t);
    t = w_3;
    t = v_91(t);
    return(t);
  }
  t = try_1_0(e_1, t);
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm y_3 = NULL,e_4 = NULL,l_4 = NULL;
  t = term_w_9;
  t = get_config_0_0(t);
  y_3 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm k_1 (ATerm t)
      {
        t = term_o_12;
        return(t);
      }
      t = say_1_0(k_1, t);
      return(t);
    }
    t = if_verbose1_1_0(f_1, t);
    {
      ATerm m_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          t = term_q_12;
          return(t);
        }
        t = debug_1_0(o_1, t);
        return(t);
      }
      t = if_verbose2_1_0(m_1, t);
      t = term_p_9;
      t = get_config_0_0(t);
      e_4 = t;
      {
        ATerm q_1 (ATerm t)
        {
          ATerm s_1 (ATerm t)
          {
            t = term_v_12;
            return(t);
          }
          t = debug_1_0(s_1, t);
          return(t);
        }
        t = if_verbose2_1_0(q_1, t);
        t = term_a_11;
        t = get_config_0_0(t);
        l_4 = t;
        {
          ATerm u_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              t = term_w_12;
              return(t);
            }
            t = debug_1_0(w_1, t);
            return(t);
          }
          t = if_verbose2_1_0(u_1, t);
          t = y_3;
          {
            ATerm y_1 (ATerm t)
            {
              ATerm m_4 = NULL,n_4 = NULL;
              m_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_4), term_x_12), l_4);
              t = concat_strings_0_0(t);
              n_4 = t;
              t = (ATerm) ATmakeAppl(sym__3, term_k_11, (ATerm)ATmakeAppl(sym_Tool_1, m_4), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_4, n_4)));
              t = table_union_0_0(t);
              return(t);
            }
            t = map_1_0(y_1, t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm p_4 = NULL,s_4 = NULL;
    p_4 = t;
    t = term_s_9;
    t = get_config_0_0(t);
    s_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_4, term_a_13);
    t = geq_0_0(t);
    t = p_4;
    t = w_91(t);
    return(t);
  }
  t = try_1_0(z_1, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,g_5 = NULL,h_5 = NULL;
  a_5 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = a_5;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm o_5 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_5 = ATgetFirst((ATermList) t);
          c_5 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_5;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_5 = ATgetFirst((ATermList) t);
          h_5 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_5;
      t = j_0(t);
      t = g_5;
      t = k_0(t);
      o_5 = t;
      t = (ATerm) ATinsert(CheckATermList(h_5), o_5);
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,c_6 = NULL;
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5;
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = (ATerm) ATempty;
      }
    u_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_5, u_5);
    t = conc_0_0(t);
    c_6 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_5, c_6);
    t = (ATerm) ATmakeAppl(sym__3, term_n_13, s_5, c_6);
  }
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm r_6 = NULL;
        r_6 = t;
        if(match_string(t, "-r"))
          {
            t = r_6;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
              _fail(t);
            t = r_6;
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        ATerm t_6 = NULL;
        t_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), t_6);
        t = t_6;
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = term_q_13;
        return(t);
      }
      t = ArgOption_3_0(a_2, b_2, g_2, t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 (ATerm t)
            {
              ATerm u_6 = NULL;
              u_6 = t;
              if(match_string(t, "i"))
                {
                  t = u_6;
                }
              else
                {
                  if(match_string(t, "imp"))
                    {
                      t = u_6;
                    }
                  else
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
                        _fail(t);
                      t = u_6;
                    }
                }
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              ATerm v_6 = NULL;
              v_6 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_c_12, (ATerm) ATinsert(ATempty, v_6));
              t = extend_config_0_0(t);
              t = v_6;
              return(t);
            }
            ATerm k_2 (ATerm t)
            {
              t = term_t_13;
              return(t);
            }
            t = ArgOption_3_0(i_2, j_2, k_2, t);
            ;
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
            {
              ATerm u_13 = t;
              int w_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_2 (ATerm t)
                  {
                    ATerm w_6 = NULL;
                    w_6 = t;
                    if(match_string(t, "r"))
                      {
                        t = w_6;
                      }
                    else
                      {
                        if(match_string(t, "reg"))
                          {
                            t = w_6;
                          }
                        else
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
                              _fail(t);
                            t = w_6;
                          }
                      }
                    return(t);
                  }
                  ATerm r_2 (ATerm t)
                  {
                    ATerm x_6 = NULL;
                    x_6 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("register", 0, ATtrue)), x_6);
                    t = x_6;
                    return(t);
                  }
                  ATerm s_2 (ATerm t)
                  {
                    t = term_x_13;
                    return(t);
                  }
                  t = Option_3_0(l_2, r_2, s_2, t);
                  ;
                  LocalPopChoice(w_13);
                }
              else
                {
                  t = u_13;
                  {
                    ATerm a_14 = t;
                    int b_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_2 (ATerm t)
                        {
                          ATerm y_6 = NULL;
                          y_6 = t;
                          if(match_string(t, "-t"))
                            {
                              t = y_6;
                            }
                          else
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
                                _fail(t);
                              t = y_6;
                            }
                          return(t);
                        }
                        ATerm w_2 (ATerm t)
                        {
                          ATerm z_6 = NULL;
                          z_6 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATempty, z_6));
                          t = extend_config_0_0(t);
                          t = z_6;
                          return(t);
                        }
                        ATerm x_2 (ATerm t)
                        {
                          t = term_c_14;
                          return(t);
                        }
                        t = ArgOption_3_0(v_2, w_2, x_2, t);
                        ;
                        LocalPopChoice(b_14);
                      }
                    else
                      {
                        t = a_14;
                        {
                          ATerm e_14 = t;
                          int g_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_2 (ATerm t)
                              {
                                ATerm a_7 = NULL;
                                a_7 = t;
                                if(match_string(t, "-l"))
                                  {
                                    t = a_7;
                                  }
                                else
                                  {
                                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
                                      _fail(t);
                                    t = a_7;
                                  }
                                return(t);
                              }
                              ATerm z_2 (ATerm t)
                              {
                                ATerm b_7 = NULL;
                                b_7 = t;
                                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue)), b_7);
                                t = b_7;
                                return(t);
                              }
                              ATerm b_3 (ATerm t)
                              {
                                t = term_j_14;
                                return(t);
                              }
                              t = ArgOption_3_0(y_2, z_2, b_3, t);
                              ;
                              LocalPopChoice(g_14);
                            }
                          else
                            {
                              t = e_14;
                              {
                                ATerm l_14 = t;
                                int m_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_3 (ATerm t)
                                    {
                                      ATerm c_7 = NULL;
                                      c_7 = t;
                                      if(match_string(t, "-V"))
                                        {
                                          t = c_7;
                                        }
                                      else
                                        {
                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
                                            _fail(t);
                                          t = c_7;
                                        }
                                      return(t);
                                    }
                                    ATerm f_3 (ATerm t)
                                    {
                                      ATerm d_7 = NULL;
                                      d_7 = t;
                                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue)), d_7);
                                      t = d_7;
                                      return(t);
                                    }
                                    ATerm h_3 (ATerm t)
                                    {
                                      t = term_z_14;
                                      return(t);
                                    }
                                    t = ArgOption_3_0(c_3, f_3, h_3, t);
                                    ;
                                    LocalPopChoice(m_14);
                                  }
                                else
                                  {
                                    t = l_14;
                                    {
                                      ATerm a_15 = t;
                                      int e_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm l_3 (ATerm t)
                                          {
                                            ATerm e_7 = NULL;
                                            e_7 = t;
                                            if(match_string(t, "q"))
                                              {
                                                t = e_7;
                                              }
                                            else
                                              {
                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
                                                  _fail(t);
                                                t = e_7;
                                              }
                                            return(t);
                                          }
                                          ATerm m_3 (ATerm t)
                                          {
                                            ATerm f_7 = NULL;
                                            f_7 = t;
                                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("query", 0, ATtrue)), f_7);
                                            t = f_7;
                                            return(t);
                                          }
                                          ATerm n_3 (ATerm t)
                                          {
                                            t = term_f_15;
                                            return(t);
                                          }
                                          t = Option_3_0(l_3, m_3, n_3, t);
                                          ;
                                          LocalPopChoice(e_15);
                                        }
                                      else
                                        {
                                          t = a_15;
                                          {
                                            ATerm i_15 = t;
                                            int j_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm p_3 (ATerm t)
                                                {
                                                  ATerm g_7 = NULL;
                                                  g_7 = t;
                                                  if(match_string(t, "-a"))
                                                    {
                                                      t = g_7;
                                                    }
                                                  else
                                                    {
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
                                                        _fail(t);
                                                      t = g_7;
                                                    }
                                                  return(t);
                                                }
                                                ATerm q_3 (ATerm t)
                                                {
                                                  ATerm h_7 = NULL;
                                                  h_7 = t;
                                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                  t = h_7;
                                                  return(t);
                                                }
                                                ATerm s_3 (ATerm t)
                                                {
                                                  t = term_k_15;
                                                  return(t);
                                                }
                                                t = Option_3_0(p_3, q_3, s_3, t);
                                                ;
                                                LocalPopChoice(j_15);
                                              }
                                            else
                                              {
                                                t = i_15;
                                                {
                                                  ATerm w_15 = t;
                                                  int x_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_3 (ATerm t)
                                                      {
                                                        ATerm i_7 = NULL;
                                                        i_7 = t;
                                                        if(match_string(t, "-L"))
                                                          {
                                                            t = i_7;
                                                          }
                                                        else
                                                          {
                                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
                                                              _fail(t);
                                                            t = i_7;
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm z_3 (ATerm t)
                                                      {
                                                        ATerm j_7 = NULL;
                                                        j_7 = t;
                                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                        t = j_7;
                                                        return(t);
                                                      }
                                                      ATerm a_4 (ATerm t)
                                                      {
                                                        t = term_y_15;
                                                        return(t);
                                                      }
                                                      t = Option_3_0(t_3, z_3, a_4, t);
                                                      ;
                                                      LocalPopChoice(x_15);
                                                    }
                                                  else
                                                    {
                                                      t = w_15;
                                                      {
                                                        ATerm i_16 = t;
                                                        int j_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm b_4 (ATerm t)
                                                            {
                                                              ATerm k_7 = NULL;
                                                              k_7 = t;
                                                              if(match_string(t, "-R"))
                                                                {
                                                                  t = k_7;
                                                                }
                                                              else
                                                                {
                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
                                                                    _fail(t);
                                                                  t = k_7;
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm c_4 (ATerm t)
                                                            {
                                                              ATerm l_7 = NULL;
                                                              l_7 = t;
                                                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                              t = l_7;
                                                              return(t);
                                                            }
                                                            ATerm d_4 (ATerm t)
                                                            {
                                                              t = term_k_16;
                                                              return(t);
                                                            }
                                                            t = Option_3_0(b_4, c_4, d_4, t);
                                                            ;
                                                            LocalPopChoice(j_16);
                                                          }
                                                        else
                                                          {
                                                            t = i_16;
                                                            {
                                                              ATerm f_4 (ATerm t)
                                                              {
                                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                                                                  _fail(t);
                                                                return(t);
                                                              }
                                                              ATerm g_4 (ATerm t)
                                                              {
                                                                ATerm m_7 = NULL,n_7 = NULL;
                                                                m_7 = t;
                                                                t = SSL_string_to_int(m_7);
                                                                n_7 = t;
                                                                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_7);
                                                                t = m_7;
                                                                return(t);
                                                              }
                                                              ATerm h_4 (ATerm t)
                                                              {
                                                                t = term_m_16;
                                                                return(t);
                                                              }
                                                              t = ArgOption_3_0(f_4, g_4, h_4, t);
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
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_7 = ATgetFirst((ATermList) t);
      q_7 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_7 = NULL,v_7 = NULL;
        t = q_7;
        t = h_0(t);
        u_7 = t;
        t = p_7;
        t = g_0(t);
        v_7 = t;
        t = q_7;
        {
          ATerm i_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_7), v_7);
            return(t);
          }
          t = reverse_acc_2_0(g_0, i_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_16;
      t = h_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, j_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm a_63 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL;
  z_7 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_7);
  w_7 = t;
  t = x_7;
  t = a_63(t);
  y_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_7), w_7);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      {
        ATerm k_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(k_4, t);
      }
    }
  {
    ATerm o_4 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_16), term_t_16), term_s_16);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(o_4, t);
    t = term_y_16;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_0_0(t);
    {
      ATerm q_4 (ATerm t)
      {
        ATerm d_8 = NULL;
        d_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, d_8), term_z_16);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(q_4, t);
      {
        ATerm r_4 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_17), term_a_17), term_j_10);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(r_4, t);
      }
    }
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm b_63 (ATerm), ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      f_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_8);
  e_8 = t;
  t = f_8;
  t = b_63(t);
  g_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, g_8), e_8);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  t = fetch_1_0(k_87, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL;
  o_8 = t;
  {
    ATerm e_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_8;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_17 = ATgetFirst((ATermList) t);
                ATerm o_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_8;
          }
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = e_17;
        t = (ATerm) ATinsert(ATempty, o_8);
      }
    p_8 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), p_8);
    t = o_8;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_16;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_s_17;
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        t = term_t_17;
        return(t);
      }
      t = Option_3_0(t_4, u_4, v_4, t);
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        ATerm w_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_u_17;
          return(t);
        }
        ATerm y_4 (ATerm t)
        {
          t = term_v_17;
          return(t);
        }
        t = Option_3_0(w_4, x_4, y_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__3))
    {
      v_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
      x_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_8, w_8);
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_17 = ATgetArgument(t, 0);
            ATerm z_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_8, w_8);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = (ATerm) ATempty;
      }
    y_8 = t;
    t = SSL_table_put(v_8, w_8, (ATerm) ATinsert(CheckATermList(y_8), x_8));
    t = (ATerm) ATmakeAppl(sym__3, v_8, w_8, x_8);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_88 (ATerm), ATerm t)
{
  ATerm d_9 = NULL;
  t = term_n_16;
  t = p_88(t);
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_18, term_b_18, d_9);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
  f_9 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = f_9;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm k_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_9 = ATgetFirst((ATermList) t);
          h_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_9;
      t = a_0(t);
      t = term_n_16;
      t = c_0(t);
      k_9 = t;
      t = (ATerm) ATinsert(CheckATermList(h_9), k_9);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm m_9 = NULL;
    m_9 = t;
    if(match_string(t, "--help"))
      {
        t = m_9;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = m_9;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = m_9;
          }
      }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_c_18;
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_d_18;
    return(t);
  }
  t = Option_3_0(z_4, d_5, e_5, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_88 (ATerm), ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  {
    ATerm f_5 (ATerm t)
    {
      t = term_e_18;
      t = n_88(t);
      return(t);
    }
    t = try_1_0(f_5, t);
    t = q_9;
    {
      ATerm i_5 (ATerm t)
      {
        ATerm r_9 = NULL;
        r_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_9);
        t = (ATerm) ATmakeAppl(sym_Program_1, r_9);
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_18 = t;
            int i_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_18);
              }
            else
              {
                t = h_18;
                t = n_88(t);
                t = Cons_2_0(_id, k_5, t);
              }
            ;
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            {
              ATerm t_9 = NULL,u_9 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_9 = ATgetFirst((ATermList) t);
                  u_9 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(u_9), (ATerm) ATmakeAppl(sym_Undefined_1, t_9));
            }
          }
        return(t);
      }
      t = Cons_2_0(i_5, k_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm m_88 (ATerm), ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
  a_10 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = a_10;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm j_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_88(t);
          ;
          LocalPopChoice(k_18);
        }
      else
        {
          t = j_18;
          {
            ATerm l_18 = t;
            int m_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(m_18);
              }
            else
              {
                t = l_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_5, t);
    {
      ATerm m_5 (ATerm t)
      {
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_10 = NULL;
            h_10 = t;
            {
              ATerm p_18 = t;
              int q_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_10;
                  {
                    ATerm r_18 = t;
                    int s_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_t_18;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(s_18);
                      }
                    else
                      {
                        t = r_18;
                        {
                          ATerm n_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(n_5, t);
                        }
                      }
                    t = h_10;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(q_18);
                }
              else
                {
                  t = p_18;
                  t = term_r_17;
                  t = get_config_0_0(t);
                  t = h_10;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
            {
              ATerm p_5 (ATerm t)
              {
                ATerm q_5 (ATerm t)
                {
                  b_10 = t;
                  return(t);
                }
                t = Undefined_1_0(q_5, t);
                return(t);
              }
              t = option_defined_1_0(p_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_10)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_u_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_10)), term_v_18));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(m_5, t);
      c_10 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = c_10;
    }
  }
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_options_1_0(xtc_options_0_0, t);
      t = xtc_location_0_0(t);
      {
        ATerm r_5 (ATerm t)
        {
          ATerm v_5 (ATerm t)
          {
            t = term_y_18;
            return(t);
          }
          t = debug_1_0(v_5, t);
          return(t);
        }
        t = if_verbose2_1_0(r_5, t);
        t = xtc_read_0_0(t);
        {
          ATerm z_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_19 = t;
              int c_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_19;
                  t = get_config_0_0(t);
                  t = xtc_register_0_0(t);
                  ;
                  LocalPopChoice(c_19);
                }
              else
                {
                  t = b_19;
                  t = term_c_12;
                  t = get_config_0_0(t);
                  t = register_import_0_0(t);
                }
              t = xtc_store_0_0(t);
              ;
              LocalPopChoice(a_19);
            }
          else
            {
              t = z_18;
              t = term_e_19;
              t = get_config_0_0(t);
              t = xtc_query_0_0(t);
            }
          t = SSL_exit((ATerm) ATmakeInt(0));
        }
      }
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
        ATerm w_5 (ATerm t)
        {
          t = term_f_19;
          return(t);
        }
        t = debug_1_0(w_5, t);
      }
    }
  return(t);
}
ATerm xtc_xtc_get_0_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_19 = ATgetFirst((ATermList) t);
      ATerm h_19 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
        {
          ATerm i_19 = ATgetFirst((ATermList) h_19);
          if((ATgetSymbol((ATermAppl) i_19) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          k_10 = (ATerm) ATgetNext((ATermList) h_19);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = k_10;
  t = map_1_0(xtc_find_0_0, t);
  l_10 = t;
  t = SSL_print((ATerm)ATmakeAppl(sym_stdout_0), l_10);
  t = SSL_print((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm debug_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL;
  m_10 = t;
  t = y_82(t);
  n_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_10), n_10));
  t = m_10;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  t = SSL_table_keys(o_10);
  {
    ATerm x_5 (ATerm t)
    {
      ATerm p_10 = NULL,q_10 = NULL;
      p_10 = t;
      t = SSL_table_get(o_10, p_10);
      q_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_10, q_10);
      return(t);
    }
    t = map_1_0(x_5, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_91 (ATerm), ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm r_10 = NULL,s_10 = NULL;
    r_10 = t;
    t = term_s_9;
    t = get_config_0_0(t);
    s_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_10, term_j_19);
    t = geq_0_0(t);
    t = r_10;
    t = z_91(t);
    return(t);
  }
  t = try_1_0(y_5, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  if(match_cons(t, sym__2))
    {
      w_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, w_10));
  {
    ATerm z_5 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((x_10 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          y_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(z_5, t);
    t = not_null(y_10);
  }
  return(t);
}
ATerm filter_1_0 (ATerm e_78 (ATerm), ATerm t)
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 (ATerm t)
            {
              t = filter_1_0(e_78, t);
              return(t);
            }
            t = Cons_2_0(e_78, a_6, t);
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            {
              ATerm c_11 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_19 = ATgetFirst((ATermList) t);
                  c_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_11;
              t = filter_1_0(e_78, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_64 (ATerm), ATerm t)
{
  ATerm e_11 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      t = l_64(t);
      t = e_11(t);
      return(t);
    }
    t = try_1_0(b_6, t);
    return(t);
  }
  t = e_11(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  f_11 = t;
  {
    ATerm d_6 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm p_19 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_19;
          }
      }
      return(t);
    }
    t = repeat_1_0(d_6, t);
    t = f_11;
  }
  return(t);
}
ATerm say_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm h_11 = NULL,j_5 = NULL;
  h_11 = t;
  t = c_83(t);
  j_5 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, j_5));
  t = h_11;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm i_11 = NULL,j_11 = NULL;
    i_11 = t;
    t = term_s_9;
    t = get_config_0_0(t);
    j_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_11, term_q_19);
    t = geq_0_0(t);
    t = i_11;
    t = y_91(t);
    return(t);
  }
  t = try_1_0(e_6, t);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,d_12 = NULL;
  z_11 = t;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_12;
        if((a_12 != t))
          {
            _fail(t);
          }
        t = z_11;
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = z_11;
        {
          ATerm t_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_12, d_12);
              ;
              LocalPopChoice(u_19);
            }
          else
            {
              t = t_19;
              t = SSL_gtr(a_12, d_12);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_12, d_12);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_92 (ATerm), ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm g_12 = NULL,h_12 = NULL;
    g_12 = t;
    t = term_s_9;
    t = get_config_0_0(t);
    h_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_12, term_v_19);
    t = geq_0_0(t);
    t = g_12;
    t = a_92(t);
    return(t);
  }
  t = try_1_0(f_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_71 (ATerm), ATerm t)
{
  ATerm p_12 (ATerm t)
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_71, _id, t);
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = Cons_2_0(_id, p_12, t);
      }
    return(t);
  }
  t = p_12(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_12 = ATgetFirst((ATermList) t);
      s_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_75(t);
  {
    ATerm g_6 (ATerm t)
    {
      ATerm t_12 = NULL;
      t_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_12, t_12);
      t = h_75(t);
      return(t);
    }
    t = fetch_1_0(g_6, t);
    t = s_12;
  }
  return(t);
}
ATerm union_1_0 (ATerm d_75 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_12;
  {
    ATerm z_12 (ATerm t)
    {
      ATerm y_19 = t;
      int z_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_12;
          ;
          LocalPopChoice(z_19);
        }
      else
        {
          t = y_19;
          {
            ATerm a_20 = t;
            int b_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_6 (ATerm t)
                {
                  t = u_12;
                  return(t);
                }
                t = HdMember_p__2_0(d_75, h_6, t);
                t = z_12(t);
                ;
                LocalPopChoice(b_20);
              }
            else
              {
                t = a_20;
                t = Cons_2_0(_id, z_12, t);
              }
          }
        }
      return(t);
    }
    t = z_12(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm b_13 = NULL;
    if(match_cons(t, sym__2))
      {
        b_13 = ATgetArgument(t, 0);
        if((b_13 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(i_6, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  if(match_cons(t, sym__3))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
      g_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_13, f_13);
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_20 = ATgetArgument(t, 0);
            ATerm f_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_13, f_13);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = (ATerm) ATempty;
      }
    h_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_13, g_13);
    t = union_0_0(t);
    i_13 = t;
    t = SSL_table_put(e_13, f_13, i_13);
    t = (ATerm) ATmakeAppl(sym__3, e_13, f_13, g_13);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  if(match_cons(t, sym__2))
    {
      k_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_13;
  {
    ATerm j_6 (ATerm t)
    {
      ATerm l_13 = NULL,m_13 = NULL;
      if(match_cons(t, sym__2))
        {
          l_13 = ATgetArgument(t, 0);
          m_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, k_13, l_13, m_13);
      t = q_88(t);
      return(t);
    }
    t = map_1_0(j_6, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_14 (ATerm v_13, ATerm t)
  {
    t = SSL_fclose(v_13);
    return(t);
  }
  ATerm y_13 = NULL,z_13 = NULL;
  z_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_13 = ATgetArgument(t, 0);
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_13);
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            t = d_14(z_13, t);
          }
      }
    }
  else
    {
      t = d_14(z_13, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_14 = NULL;
  t = SSL_stdin_stream();
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_14 = NULL;
  t = SSL_stdout_stream();
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_14 = NULL;
  t = SSL_stderr_stream();
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_14);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm k_14 = NULL;
  k_14 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_20 = ATgetArgument(t, 0);
      ATerm j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_6 = NULL,q_6 = NULL;
        p_6 = t;
        t = SSL_explode_term(p_6);
        if(match_cons(t, sym__2))
          {
            ATerm m_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_20 = ATgetArgument(t, 1);
              if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
                {
                  q_6 = ATgetFirst((ATermList) n_20);
                  {
                    ATerm o_20 = (ATerm) ATgetNext((ATermList) n_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_6;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
              ATerm k_6 (ATerm t)
              {
                ATerm q_14 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    q_14 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = q_14;
                return(t);
              }
              t = _2_0(k_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  n_14 = ATgetArgument(t, 0);
                  o_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(n_14, o_14);
              p_14 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, p_14);
              ;
              LocalPopChoice(q_20);
            }
          else
            {
              t = p_20;
              {
                ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
                ATerm l_6 (ATerm t)
                {
                  ATerm u_14 = NULL;
                  u_14 = t;
                  t = SSL_is_string(u_14);
                  return(t);
                }
                t = _2_0(l_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    r_14 = ATgetArgument(t, 0);
                    s_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(r_14, s_14);
                t_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, t_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_14 = NULL;
      y_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_14, term_t_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm m_6 (ATerm t)
        {
          t = term_u_20;
          return(t);
        }
        t = debug_1_0(m_6, t);
        _fail(t);
      }
    }
  v_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(x_14);
  w_14 = t;
  t = v_14;
  t = fclose_0_0(t);
  t = w_14;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_7 = NULL;
      o_7 = t;
      t = SSL_access(o_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(w_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = v_20;
      {
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_20 = t;
            if((PushChoice() == 0))
              {
                ATerm m_8 = NULL;
                m_8 = t;
                t = SSL_access(m_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_20;
              }
            {
              ATerm n_6 (ATerm t)
              {
                t = term_a_21;
                return(t);
              }
              t = debug_1_0(n_6, t);
            }
            ;
            LocalPopChoice(y_20);
          }
        else
          {
            t = x_20;
            {
              ATerm o_6 (ATerm t)
              {
                t = term_b_21;
                return(t);
              }
              t = debug_1_0(o_6, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  {
    ATerm s_6 (ATerm t)
    {
      ATerm r_7 (ATerm t)
      {
        t = term_c_21;
        return(t);
      }
      t = debug_1_0(r_7, t);
      return(t);
    }
    t = if_verbose5_1_0(s_6, t);
    {
      ATerm d_21 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, b_15));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_21;
        }
      c_15 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, b_15));
      t = c_15;
      {
        ATerm s_7 (ATerm t)
        {
          ATerm t_7 (ATerm t)
          {
            t = term_e_21;
            return(t);
          }
          t = debug_1_0(t_7, t);
          return(t);
        }
        t = if_verbose4_1_0(s_7, t);
        t = read_repository_file_0_0(t);
        {
          ATerm a_8 (ATerm t)
          {
            ATerm b_8 (ATerm t)
            {
              t = term_f_21;
              return(t);
            }
            t = say_1_0(b_8, t);
            return(t);
          }
          t = if_verbose6_1_0(a_8, t);
          d_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_11, d_15);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm c_8 (ATerm t)
            {
              ATerm i_8 (ATerm t)
              {
                t = term_g_21;
                return(t);
              }
              t = say_1_0(i_8, t);
              return(t);
            }
            t = if_verbose6_1_0(c_8, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, b_15), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_k_11, (ATerm)ATmakeAppl(sym_Imported_1, b_15), (ATerm) ATempty);
            {
              ATerm j_8 (ATerm t)
              {
                ATerm k_8 (ATerm t)
                {
                  t = term_f_21;
                  return(t);
                }
                t = say_1_0(k_8, t);
                return(t);
              }
              t = if_verbose4_1_0(j_8, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      {
        ATerm g_15 = NULL,h_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_15 = ATgetFirst((ATermList) t);
            h_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_15;
        {
          ATerm l_8 (ATerm t)
          {
            t = h_15;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(l_8, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  l_15 = t;
  t = SSL_explode_term(l_15);
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_71 (ATerm), ATerm t)
{
  ATerm n_15 (ATerm t)
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_15, t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_71(t);
      }
    return(t);
  }
  t = n_15(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      p_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_15;
  {
    ATerm n_8 (ATerm t)
    {
      t = o_15;
      return(t);
    }
    t = at_end_1_0(n_8, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm e_56 (ATerm), ATerm f_56 (ATerm), ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  v_15 = t;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_15);
  q_15 = t;
  t = r_15;
  t = e_56(t);
  t_15 = t;
  t = s_15;
  t = f_56(t);
  u_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, t_15, u_15), q_15);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm z_15 = NULL;
  ATerm q_8 (ATerm t)
  {
    ATerm a_16 = NULL;
    a_16 = t;
    t = SSL_explode_string(a_16);
    return(t);
  }
  ATerm r_8 (ATerm t)
  {
    ATerm b_16 = NULL;
    b_16 = t;
    t = SSL_explode_string(b_16);
    return(t);
  }
  t = _2_0(q_8, r_8, t);
  t = conc_0_0(t);
  z_15 = t;
  t = SSL_implode_string(z_15);
  return(t);
}
ATerm Cons_2_0 (ATerm n_57 (ATerm), ATerm o_57 (ATerm), ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  h_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_16 = ATgetFirst((ATermList) t);
      e_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_16);
  c_16 = t;
  t = d_16;
  t = n_57(t);
  f_16 = t;
  t = e_16;
  t = o_57(t);
  g_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_16), f_16), c_16);
  return(t);
}
ATerm map_1_0 (ATerm a_71 (ATerm), ATerm t)
{
  ATerm l_16 (ATerm t)
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = Cons_2_0(a_71, l_16, t);
      }
    return(t);
  }
  t = l_16(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_16 = NULL;
      r_16 = t;
      t = SSL_is_string(r_16);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_8 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(s_8, t);
            ;
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            {
              ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
              v_16 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_16 = ATgetArgument(t, 0);
                  t = w_16;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_16 = ATgetArgument(t, 0);
                      t = w_16;
                      {
                        ATerm u_21 = t;
                        int v_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(v_21);
                          }
                        else
                          {
                            t = u_21;
                            {
                              ATerm t_8 (ATerm t)
                              {
                                t = term_w_21;
                                return(t);
                              }
                              t = debug_1_0(t_8, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm b_17 = NULL,c_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_16 = ATgetArgument(t, 0);
                          x_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_16;
                      t = eval_config_0_0(t);
                      b_17 = t;
                      t = x_16;
                      t = eval_config_0_0(t);
                      c_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_17, c_17);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm try_1_0 (ATerm p_63 (ATerm), ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_63(t);
      ;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_17 = NULL;
  f_17 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_17);
  {
    ATerm u_8 (ATerm t)
    {
      ATerm g_17 = NULL;
      t = eval_config_0_0(t);
      g_17 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_17, g_17);
      t = g_17;
      return(t);
    }
    t = try_1_0(u_8, t);
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm h_17 = NULL;
  ATerm z_8 (ATerm t)
  {
    ATerm a_9 (ATerm t)
    {
      t = term_d_22;
      return(t);
    }
    t = debug_1_0(a_9, t);
    return(t);
  }
  t = if_verbose5_1_0(z_8, t);
  h_17 = t;
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = h_17;
    {
      ATerm b_9 (ATerm t)
      {
        ATerm c_9 (ATerm t)
        {
          t = term_g_22;
          return(t);
        }
        t = debug_1_0(c_9, t);
        return(t);
      }
      t = if_verbose5_1_0(b_9, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_9 (ATerm t)
      {
        ATerm i_9 (ATerm t)
        {
          t = term_j_22;
          return(t);
        }
        t = debug_1_0(i_9, t);
        return(t);
      }
      t = if_verbose5_1_0(e_9, t);
      t = xtc_load_0_0(t);
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            {
              ATerm z_9 = NULL,z_10 = NULL;
              z_9 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, z_9));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_22 = ATgetFirst((ATermList) t);
                  if(match_cons(m_22, sym__2))
                    {
                      ATerm o_22 = ATgetArgument(m_22, 0);
                      z_10 = ATgetArgument(m_22, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm n_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = z_10;
            }
          }
        {
          ATerm j_9 (ATerm t)
          {
            ATerm l_9 (ATerm t)
            {
              t = term_j_22;
              return(t);
            }
            t = debug_1_0(l_9, t);
            return(t);
          }
          t = if_verbose5_1_0(j_9, t);
        }
      }
      ;
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
        ATerm i_17 = NULL;
        i_17 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), i_17), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_22), i_17), term_p_22);
        {
          ATerm n_9 (ATerm t)
          {
            t = term_k_11;
            t = table_getlist_0_0(t);
            {
              ATerm o_9 (ATerm t)
              {
                t = term_r_22;
                return(t);
              }
              t = debug_1_0(o_9, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(n_9, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_xtc_call_0_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_22 = ATgetFirst((ATermList) t);
      ATerm t_22 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
        {
          ATerm u_22 = ATgetFirst((ATermList) t_22);
          if((ATgetSymbol((ATermAppl) u_22) != ATmakeSymbol("call", 0, ATtrue)))
            _fail(t);
          {
            ATerm v_22 = (ATerm) ATgetNext((ATermList) t_22);
            if(((ATgetType(v_22) == AT_LIST) && !(ATisEmpty(v_22))))
              {
                k_17 = ATgetFirst((ATermList) v_22);
                l_17 = (ATerm) ATgetNext((ATermList) v_22);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = k_17;
  t = xtc_find_0_0(t);
  m_17 = t;
  t = SSL_execvp(m_17, l_17);
  return(t);
}
ATerm xtc_0_0 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_xtc_call_0_0(t);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_xtc_get_0_0(t);
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            t = xtc_main_0_0(t);
          }
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = xtc_0_0(t);
  return(t);
}
