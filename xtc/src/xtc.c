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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
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
ATerm term_b_46;
ATerm term_a_46;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_o_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_e_45;
ATerm term_m_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_b_44;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_b_43;
ATerm term_s_42;
ATerm term_l_42;
ATerm term_b_42;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_e_41;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_k_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_z_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_p_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_i_35;
ATerm term_f_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_b_34;
ATerm term_f_10;
ATerm term_x_5;
void init_constant_terms (void)
{
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym__3, term_f_10, term_w_39, term_f_37);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
ATerm version_query_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm h_30 (ATerm);
ATerm j_30 (ATerm);
ATerm tool_query_0_0 (ATerm);
ATerm list_tool_0_0 (ATerm);
ATerm Tool_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm l_30 (ATerm);
ATerm m_30 (ATerm);
ATerm n_30 (ATerm);
ATerm o_30 (ATerm);
ATerm all_query_0_0 (ATerm);
ATerm repository_query_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm p_30 (ATerm);
ATerm q_30 (ATerm);
ATerm r_30 (ATerm);
ATerm xtc_store_0_0 (ATerm);
ATerm s_30 (ATerm);
ATerm t_30 (ATerm);
ATerm register_import_0_0 (ATerm);
ATerm u_30 (ATerm);
ATerm table_union_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm v_30 (ATerm);
ATerm w_30 (ATerm);
ATerm x_30 (ATerm);
ATerm y_30 (ATerm);
ATerm xtc_register_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_99 (ATerm), ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm j_6 (ATerm b_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm c_31 (ATerm);
ATerm d_31 (ATerm);
ATerm e_31 (ATerm);
ATerm f_31 (ATerm);
ATerm g_31 (ATerm);
ATerm h_31 (ATerm);
ATerm i_31 (ATerm);
ATerm j_31 (ATerm);
ATerm k_31 (ATerm);
ATerm l_31 (ATerm);
ATerm m_31 (ATerm);
ATerm n_31 (ATerm);
ATerm o_31 (ATerm);
ATerm p_31 (ATerm);
ATerm q_31 (ATerm);
ATerm r_31 (ATerm);
ATerm s_31 (ATerm);
ATerm t_31 (ATerm);
ATerm u_31 (ATerm);
ATerm v_31 (ATerm);
ATerm w_31 (ATerm);
ATerm x_31 (ATerm);
ATerm y_31 (ATerm);
ATerm z_31 (ATerm);
ATerm a_32 (ATerm);
ATerm b_32 (ATerm);
ATerm c_32 (ATerm);
ATerm d_32 (ATerm);
ATerm e_32 (ATerm);
ATerm f_32 (ATerm);
ATerm g_32 (ATerm);
ATerm h_32 (ATerm);
ATerm i_32 (ATerm);
ATerm xtc_options_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_69 (ATerm), ATerm);
ATerm k_32 (ATerm);
ATerm l_32 (ATerm);
ATerm m_32 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_32 (ATerm);
ATerm o_32 (ATerm);
ATerm p_32 (ATerm);
ATerm q_32 (ATerm);
ATerm r_32 (ATerm);
ATerm s_32 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm t_32 (ATerm);
ATerm parse_options_p__1_0 (ATerm k_95 (ATerm), ATerm);
ATerm w_32 (ATerm);
ATerm x_32 (ATerm);
ATerm y_32 (ATerm);
ATerm z_32 (ATerm);
ATerm parse_options_1_0 (ATerm j_95 (ATerm), ATerm);
ATerm c_33 (ATerm);
ATerm xtc_main_0_0 (ATerm);
ATerm xtc_xtc_get_0_0 (ATerm);
ATerm map_1_0 (ATerm s_77 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm d_99 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm c_78 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_99 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm e_99 (ATerm), ATerm);
ATerm union_1_0 (ATerm w_81 (ATerm), ATerm);
ATerm e_33 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm n_95 (ATerm), ATerm);
ATerm p_13 (ATerm j_13, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm _2_0 (ATerm q_59 (ATerm), ATerm r_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm g_33 (ATerm);
ATerm h_33 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm i_33 (ATerm);
ATerm j_33 (ATerm);
ATerm k_33 (ATerm);
ATerm l_33 (ATerm);
ATerm m_33 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm);
ATerm filter_1_0 (ATerm y_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm d_71 (ATerm), ATerm);
ATerm o_33 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm p_33 (ATerm);
ATerm q_33 (ATerm);
ATerm r_33 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm s_33 (ATerm);
ATerm u_33 (ATerm);
ATerm v_33 (ATerm);
ATerm w_33 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm version_query_0_0 (ATerm t)
{
  ATerm p_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL,m_0 = NULL;
  p_0 = t;
  t = term_x_5;
  f_0 = t;
  t = term_f_10;
  c_0 = t;
  t = f_0;
  m_0 = t;
  t = term_x_5;
  e_0 = t;
  t = SSL_table_get(c_0, e_0);
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_0 = NULL,n_0 = NULL,o_0 = NULL,q_0 = NULL,s_0 = NULL;
        t = eval_config_0_0(t);
        i_0 = t;
        q_0 = t;
        t = term_f_10;
        n_0 = t;
        t = q_0;
        s_0 = t;
        t = term_x_5;
        o_0 = t;
        t = SSL_table_put(n_0, o_0, i_0);
        t = i_0;
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
      }
    t_0 = t;
    t = p_0;
    {
      ATerm e_30 (ATerm t)
      {
        if(match_cons(t, sym_Tool_1))
          {
            if(((u_0 != NULL) && (u_0 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              u_0 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      ATerm f_30 (ATerm t)
      {
        ATerm g_30 (ATerm t)
        {
          if(match_cons(t, sym__2))
            {
              if((t_0 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              if(((v_0 != NULL) && (v_0 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                v_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(g_30, t);
        return(t);
      }
      t = _2_0(e_30, f_30, t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(u_0)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_0, not_null(v_0))));
      t = list_tool_0_0(t);
    }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 = NULL,a_1 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,f_1 = NULL;
      w_0 = t;
      t = term_b_34;
      z_0 = t;
      t = term_f_10;
      x_0 = t;
      t = z_0;
      f_1 = t;
      t = term_b_34;
      y_0 = t;
      t = SSL_table_get(x_0, y_0);
      {
        ATerm c_34 = t;
        int d_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 = NULL,m_1 = NULL,o_1 = NULL,q_1 = NULL,s_1 = NULL;
            t = eval_config_0_0(t);
            r_0 = t;
            q_1 = t;
            t = term_f_10;
            m_1 = t;
            t = q_1;
            s_1 = t;
            t = term_b_34;
            o_1 = t;
            t = SSL_table_put(m_1, o_1, r_0);
            t = r_0;
            ;
            LocalPopChoice(d_34);
          }
        else
          {
            t = c_34;
          }
        a_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_1, term_e_34);
        t = geq_0_0(t);
        t = w_0;
        t = b_99(t);
      }
      ;
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
    }
  return(t);
}
ATerm h_30 (ATerm t)
{
  ATerm l_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  u_2 = t;
  t = term_f_34;
  l_2 = t;
  t = u_2;
  v_2 = t;
  t = term_g_34;
  t_2 = t;
  t = SSL_table_get(l_2, t_2);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm h_34 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_34;
      }
  }
  return(t);
}
ATerm j_30 (ATerm t)
{
  ATerm d_1 = NULL,z_2 = NULL,a_3 = NULL,c_3 = NULL,f_3 = NULL;
  d_1 = t;
  t = term_i_34;
  c_3 = t;
  t = term_j_34;
  z_2 = t;
  t = c_3;
  f_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_1), term_i_34);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = d_1;
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm b_1 = NULL,e_1 = NULL,t_1 = NULL,v_1 = NULL,w_1 = NULL,y_1 = NULL;
  t = term_k_34;
  w_1 = t;
  t = term_f_10;
  t_1 = t;
  t = w_1;
  y_1 = t;
  t = term_k_34;
  v_1 = t;
  t = SSL_table_get(t_1, v_1);
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL,a_2 = NULL,c_2 = NULL,d_2 = NULL,k_2 = NULL;
        t = eval_config_0_0(t);
        c_1 = t;
        d_2 = t;
        t = term_f_10;
        a_2 = t;
        t = d_2;
        k_2 = t;
        t = term_k_34;
        c_2 = t;
        t = SSL_table_put(a_2, c_2, c_1);
        t = c_1;
        ;
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
      }
    e_1 = t;
    t = repeat_1_0(h_30, t);
    t = e_1;
    {
      ATerm i_30 (ATerm t)
      {
        ATerm g_1 = NULL;
        g_1 = t;
        {
          ATerm n_34 = t;
          int o_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
              t = if_verbose3_1_0(j_30, t);
              j_3 = t;
              t = term_f_34;
              h_3 = t;
              t = j_3;
              k_3 = t;
              t = (ATerm) ATmakeAppl(sym_Tool_1, g_1);
              i_3 = t;
              t = SSL_table_get(h_3, i_3);
              if(((b_1 != NULL) && (b_1 != t)))
                _fail(t);
              else
                b_1 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, g_1), not_null(b_1));
              {
                ATerm p_34 = t;
                int q_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = version_query_0_0(t);
                    ;
                    LocalPopChoice(q_34);
                  }
                else
                  {
                    t = p_34;
                    t = list_tool_0_0(t);
                  }
              }
              ;
              LocalPopChoice(o_34);
            }
          else
            {
              t = n_34;
              {
                ATerm l_3 = NULL,n_3 = NULL,q_3 = NULL,s_3 = NULL;
                q_3 = t;
                t = term_r_34;
                l_3 = t;
                t = q_3;
                s_3 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_34), term_s_34), g_1);
                n_3 = t;
                t = SSL_print(l_3, n_3);
                t = (ATerm) ATmakeAppl(sym__2, term_r_34, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_34), term_s_34), g_1));
              }
            }
        }
        return(t);
      }
      t = map_1_0(i_30, t);
    }
  }
  return(t);
}
ATerm list_tool_0_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_34 = ATgetArgument(t, 0);
      if(match_cons(u_34, sym_Tool_1))
        {
          h_1 = ATgetArgument(u_34, 0);
        }
      else
        _fail(t);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_1;
  {
    ATerm k_30 (ATerm t)
    {
      ATerm j_1 = NULL,k_1 = NULL;
      if(match_cons(t, sym__2))
        {
          j_1 = ATgetArgument(t, 0);
          k_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm v_34 = t;
        int w_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,j_4 = NULL,l_4 = NULL,o_4 = NULL,p_4 = NULL;
            t = term_x_34;
            v_3 = t;
            t = term_f_10;
            t_3 = t;
            t = v_3;
            w_3 = t;
            t = term_x_34;
            u_3 = t;
            t = SSL_table_get(t_3, u_3);
            {
              ATerm y_34 = t;
              int z_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 = NULL,a_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
                  t = eval_config_0_0(t);
                  u_1 = t;
                  h_4 = t;
                  t = term_f_10;
                  a_4 = t;
                  t = h_4;
                  i_4 = t;
                  t = term_x_34;
                  g_4 = t;
                  t = SSL_table_put(a_4, g_4, u_1);
                  t = u_1;
                  ;
                  LocalPopChoice(z_34);
                }
              else
                {
                  t = y_34;
                }
              o_4 = t;
              t = term_r_34;
              j_4 = t;
              t = o_4;
              p_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, term_t_34), k_1);
              l_4 = t;
              t = SSL_print(j_4, l_4);
              t = (ATerm) ATmakeAppl(sym__2, term_r_34, (ATerm) ATinsert(ATinsert(ATempty, term_t_34), k_1));
            }
            ;
            LocalPopChoice(w_34);
          }
        else
          {
            t = v_34;
            {
              ATerm q_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL;
              v_4 = t;
              t = term_r_34;
              q_4 = t;
              t = v_4;
              w_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_34), k_1), term_b_35), j_1), term_a_35), h_1);
              t_4 = t;
              t = SSL_print(q_4, t_4);
              t = (ATerm) ATmakeAppl(sym__2, term_r_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_34), k_1), term_b_35), j_1), term_a_35), h_1));
            }
          }
      }
      return(t);
    }
    t = map_1_0(k_30, t);
  }
  return(t);
}
ATerm Tool_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL,p_1 = NULL,r_1 = NULL,y_4 = NULL,z_4 = NULL;
  r_1 = t;
  if(match_cons(t, sym_Tool_1))
    {
      n_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_1);
  l_1 = t;
  t = n_1;
  t = x_69(t);
  p_1 = t;
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_1);
  y_4 = t;
  t = SSLsetAnnotations(y_4, l_1);
  return(t);
}
ATerm l_30 (ATerm t)
{
  ATerm p_5 = NULL,r_5 = NULL,s_5 = NULL,v_5 = NULL;
  s_5 = t;
  t = term_f_34;
  p_5 = t;
  t = s_5;
  v_5 = t;
  t = term_g_34;
  r_5 = t;
  t = SSL_table_get(p_5, r_5);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_35 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_35;
      }
  }
  return(t);
}
ATerm m_30 (ATerm t)
{
  ATerm m_2 = NULL,s_2 = NULL,h_6 = NULL,i_6 = NULL;
  m_2 = t;
  i_6 = t;
  t = term_f_34;
  h_6 = t;
  t = SSL_table_get(h_6, m_2);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_2, s_2);
  return(t);
}
ATerm n_30 (ATerm t)
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(o_30, _id, t);
      t = list_tool_0_0(t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
    }
  return(t);
}
ATerm o_30 (ATerm t)
{
  t = Tool_1_0(_id, t);
  return(t);
}
ATerm all_query_0_0 (ATerm t)
{
  ATerm a_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,w_5 = NULL,c_6 = NULL;
  t = term_f_35;
  e_5 = t;
  t = term_f_10;
  a_5 = t;
  t = e_5;
  f_5 = t;
  t = term_f_35;
  d_5 = t;
  t = SSL_table_get(a_5, d_5);
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,g_5 = NULL,h_5 = NULL,n_5 = NULL,o_5 = NULL;
        t = eval_config_0_0(t);
        b_2 = t;
        n_5 = t;
        t = term_f_10;
        g_5 = t;
        t = n_5;
        o_5 = t;
        t = term_f_35;
        h_5 = t;
        t = SSL_table_put(g_5, h_5, b_2);
        t = b_2;
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
      }
    t = repeat_1_0(l_30, t);
    t = term_f_34;
    c_6 = t;
    t = term_f_34;
    w_5 = t;
    t = SSL_table_keys(w_5);
    t = map_1_0(m_30, t);
    t = map_1_0(n_30, t);
  }
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm x_1 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,u_7 = NULL,v_7 = NULL,y_7 = NULL,z_7 = NULL;
  t = term_i_35;
  q_6 = t;
  t = term_f_10;
  o_6 = t;
  t = q_6;
  r_6 = t;
  t = term_i_35;
  p_6 = t;
  t = SSL_table_get(o_6, p_6);
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_2 = NULL,s_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
        t = eval_config_0_0(t);
        w_2 = t;
        w_6 = t;
        t = term_f_10;
        s_6 = t;
        t = w_6;
        x_6 = t;
        t = term_i_35;
        v_6 = t;
        t = SSL_table_put(s_6, v_6, w_2);
        t = w_2;
        ;
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
      }
    t = xtc_location_0_0(t);
    x_1 = t;
    y_7 = t;
    t = term_r_34;
    u_7 = t;
    t = y_7;
    z_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_34), x_1), term_l_35);
    v_7 = t;
    t = SSL_print(u_7, v_7);
    t = (ATerm) ATmakeAppl(sym__2, term_r_34, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_34), x_1), term_l_35));
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,e_2 = NULL,f_2 = NULL;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_1, term_m_35);
  t = open_stream_0_0(t);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, e_2);
  t = j_90(t);
  t = fclose_0_0(t);
  t = e_2;
  return(t);
}
ATerm p_30 (ATerm t)
{
  ATerm g_2 = NULL,a_8 = NULL,h_8 = NULL,i_8 = NULL,p_8 = NULL;
  g_2 = t;
  i_8 = t;
  t = term_j_34;
  a_8 = t;
  t = i_8;
  p_8 = t;
  t = (ATerm) ATinsert(ATempty, term_n_35);
  h_8 = t;
  t = SSL_printnl(a_8, h_8);
  t = g_2;
  return(t);
}
ATerm q_30 (ATerm t)
{
  ATerm m_3 = NULL,p_3 = NULL,m_9 = NULL,n_9 = NULL;
  m_3 = t;
  n_9 = t;
  t = term_f_34;
  m_9 = t;
  t = SSL_table_get(m_9, m_3);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, p_3);
  return(t);
}
ATerm r_30 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_35 = ATgetArgument(t, 0);
      if(match_cons(o_35, sym_Stream_1))
        {
          o_2 = ATgetArgument(o_35, 0);
        }
      else
        _fail(t);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(o_2, p_2);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_2);
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,t_8 = NULL,v_8 = NULL;
  t = if_verbose1_1_0(p_30, t);
  t = term_p_35;
  t_8 = t;
  t = term_f_10;
  q_8 = t;
  t = t_8;
  v_8 = t;
  t = term_p_35;
  r_8 = t;
  t = SSL_table_get(q_8, r_8);
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_3 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,d_9 = NULL;
        t = eval_config_0_0(t);
        d_3 = t;
        y_8 = t;
        t = term_f_10;
        w_8 = t;
        t = y_8;
        d_9 = t;
        t = term_p_35;
        x_8 = t;
        t = SSL_table_put(w_8, x_8, d_3);
        t = d_3;
        ;
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
      }
    {
      ATerm s_35 = t;
      int t_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_35 = t;
          int v_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_2 = NULL,e_9 = NULL,f_9 = NULL;
              h_2 = t;
              f_9 = t;
              t = (ATerm) ATinsert(ATempty, term_w_35);
              e_9 = t;
              t = SSL_access(h_2, e_9);
              LocalPopChoice(v_35);
              {
                ATerm i_2 = NULL,h_9 = NULL,i_9 = NULL;
                i_2 = t;
                i_9 = t;
                t = (ATerm) ATinsert(ATempty, term_x_35);
                h_9 = t;
                t = SSL_access(i_2, h_9);
              }
            }
          else
            {
              t = u_35;
            }
          LocalPopChoice(t_35);
          {
            ATerm j_2 = NULL,n_2 = NULL,j_9 = NULL,k_9 = NULL;
            j_2 = t;
            t = term_f_34;
            k_9 = t;
            t = term_f_34;
            j_9 = t;
            t = SSL_table_keys(j_9);
            t = map_1_0(q_30, t);
            n_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_2, n_2);
            t = WriteToFile_1_0(r_30, t);
          }
        }
      else
        {
          t = s_35;
          {
            ATerm r_3 = NULL,r_9 = NULL,s_9 = NULL,u_9 = NULL,w_9 = NULL;
            r_3 = t;
            t = term_y_35;
            u_9 = t;
            t = term_j_34;
            r_9 = t;
            t = u_9;
            w_9 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, r_3), term_y_35);
            s_9 = t;
            t = SSL_printnl(r_9, s_9);
            t = r_3;
            _fail(t);
          }
        }
    }
  }
  return(t);
}
ATerm s_30 (ATerm t)
{
  ATerm y_3 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
  y_3 = t;
  t = term_z_35;
  q_10 = t;
  t = term_j_34;
  o_10 = t;
  t = q_10;
  r_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_3), term_z_35);
  p_10 = t;
  t = SSL_printnl(o_10, p_10);
  t = y_3;
  return(t);
}
ATerm t_30 (ATerm t)
{
  ATerm n_4 = NULL,d_11 = NULL,f_11 = NULL,h_11 = NULL,i_11 = NULL;
  n_4 = t;
  t = term_a_36;
  h_11 = t;
  t = term_j_34;
  d_11 = t;
  t = h_11;
  i_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_4), term_a_36);
  f_11 = t;
  t = SSL_printnl(d_11, f_11);
  t = n_4;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm r_2 = NULL,z_9 = NULL,a_10 = NULL,d_10 = NULL,e_10 = NULL,s_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
  t = term_b_36;
  d_10 = t;
  t = term_f_10;
  z_9 = t;
  t = d_10;
  e_10 = t;
  t = term_b_36;
  a_10 = t;
  t = SSL_table_get(z_9, a_10);
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,n_10 = NULL;
        t = eval_config_0_0(t);
        x_3 = t;
        i_10 = t;
        t = term_f_10;
        g_10 = t;
        t = i_10;
        n_10 = t;
        t = term_b_36;
        h_10 = t;
        t = SSL_table_put(g_10, h_10, x_3);
        t = x_3;
        ;
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
      }
    t = if_verbose2_1_0(s_30, t);
    t = term_b_36;
    v_10 = t;
    t = term_f_10;
    s_10 = t;
    t = v_10;
    w_10 = t;
    t = term_b_36;
    u_10 = t;
    t = SSL_table_get(s_10, u_10);
    {
      ATerm e_36 = t;
      int f_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_4 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
          t = eval_config_0_0(t);
          m_4 = t;
          b_11 = t;
          t = term_f_10;
          z_10 = t;
          t = b_11;
          c_11 = t;
          t = term_b_36;
          a_11 = t;
          t = SSL_table_put(z_10, a_11, m_4);
          t = m_4;
          ;
          LocalPopChoice(f_36);
        }
      else
        {
          t = e_36;
        }
      r_2 = t;
      t = if_verbose5_1_0(t_30, t);
      t = (ATerm) ATmakeAppl(sym__3, term_f_34, term_g_34, r_2);
      t = table_union_0_0(t);
    }
  }
  return(t);
}
ATerm u_30 (ATerm t)
{
  ATerm o_3 = NULL;
  if(match_cons(t, sym__2))
    {
      o_3 = ATgetArgument(t, 0);
      if((o_3 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_union_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,b_3 = NULL,e_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__3))
    {
      x_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
      b_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_2, y_2);
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_36 = ATgetArgument(t, 0);
            ATerm j_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_2, y_2);
        ;
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = (ATerm) ATempty;
      }
    e_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_3, e_3);
    t = union_1_0(u_30, t);
    g_3 = t;
    t = SSL_table_put(x_2, y_2, g_3);
    t = (ATerm) ATmakeAppl(sym__3, x_2, y_2, b_3);
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 = NULL,b_4 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,n_11 = NULL;
      z_3 = t;
      t = term_b_34;
      l_11 = t;
      t = term_f_10;
      j_11 = t;
      t = l_11;
      n_11 = t;
      t = term_b_34;
      k_11 = t;
      t = SSL_table_get(j_11, k_11);
      {
        ATerm m_36 = t;
        int n_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_4 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
            t = eval_config_0_0(t);
            x_4 = t;
            r_11 = t;
            t = term_f_10;
            p_11 = t;
            t = r_11;
            s_11 = t;
            t = term_b_34;
            q_11 = t;
            t = SSL_table_put(p_11, q_11, x_4);
            t = x_4;
            ;
            LocalPopChoice(n_36);
          }
        else
          {
            t = m_36;
          }
        b_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_4, term_o_36);
        t = geq_0_0(t);
        t = z_3;
        t = z_98(t);
      }
      ;
      LocalPopChoice(l_36);
    }
  else
    {
      t = k_36;
    }
  return(t);
}
ATerm v_30 (ATerm t)
{
  ATerm f_4 = NULL,h_12 = NULL,i_12 = NULL,m_12 = NULL,n_12 = NULL;
  f_4 = t;
  m_12 = t;
  t = term_j_34;
  h_12 = t;
  t = m_12;
  n_12 = t;
  t = (ATerm) ATinsert(ATempty, term_p_36);
  i_12 = t;
  t = SSL_printnl(h_12, i_12);
  t = f_4;
  return(t);
}
ATerm w_30 (ATerm t)
{
  ATerm c_5 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,x_12 = NULL;
  c_5 = t;
  t = term_q_36;
  v_12 = t;
  t = term_j_34;
  t_12 = t;
  t = v_12;
  x_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_5), term_q_36);
  u_12 = t;
  t = SSL_printnl(t_12, u_12);
  t = c_5;
  return(t);
}
ATerm x_30 (ATerm t)
{
  ATerm a_6 = NULL,l_13 = NULL,o_13 = NULL,w_13 = NULL,x_13 = NULL;
  a_6 = t;
  t = term_r_36;
  w_13 = t;
  t = term_j_34;
  l_13 = t;
  t = w_13;
  x_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_6), term_r_36);
  o_13 = t;
  t = SSL_printnl(l_13, o_13);
  t = a_6;
  return(t);
}
ATerm y_30 (ATerm t)
{
  ATerm u_6 = NULL,m_15 = NULL,n_15 = NULL,p_15 = NULL,q_15 = NULL;
  u_6 = t;
  t = term_s_36;
  p_15 = t;
  t = term_j_34;
  m_15 = t;
  t = p_15;
  q_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_6), term_s_36);
  n_15 = t;
  t = SSL_printnl(m_15, n_15);
  t = u_6;
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,b_14 = NULL,c_14 = NULL,e_14 = NULL,r_14 = NULL;
  t = term_k_34;
  v_11 = t;
  t = term_f_10;
  t_11 = t;
  t = v_11;
  w_11 = t;
  t = term_k_34;
  u_11 = t;
  t = SSL_table_get(t_11, u_11);
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_5 = NULL,a_12 = NULL,b_12 = NULL,d_12 = NULL,g_12 = NULL;
        t = eval_config_0_0(t);
        b_5 = t;
        d_12 = t;
        t = term_f_10;
        a_12 = t;
        t = d_12;
        g_12 = t;
        t = term_k_34;
        b_12 = t;
        t = SSL_table_put(a_12, b_12, b_5);
        t = b_5;
        ;
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
      }
    c_4 = t;
    t = if_verbose1_1_0(v_30, t);
    t = if_verbose2_1_0(w_30, t);
    t = term_x_5;
    e_13 = t;
    t = term_f_10;
    c_13 = t;
    t = e_13;
    f_13 = t;
    t = term_x_5;
    d_13 = t;
    t = SSL_table_get(c_13, d_13);
    {
      ATerm v_36 = t;
      int w_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_5 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,k_13 = NULL;
          t = eval_config_0_0(t);
          z_5 = t;
          i_13 = t;
          t = term_f_10;
          g_13 = t;
          t = i_13;
          k_13 = t;
          t = term_x_5;
          h_13 = t;
          t = SSL_table_put(g_13, h_13, z_5);
          t = z_5;
          ;
          LocalPopChoice(w_36);
        }
      else
        {
          t = v_36;
        }
      d_4 = t;
      t = if_verbose2_1_0(x_30, t);
      t = term_x_34;
      e_14 = t;
      t = term_f_10;
      b_14 = t;
      t = e_14;
      r_14 = t;
      t = term_x_34;
      c_14 = t;
      t = SSL_table_get(b_14, c_14);
      {
        ATerm x_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_6 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,e_15 = NULL;
            t = eval_config_0_0(t);
            t_6 = t;
            c_15 = t;
            t = term_f_10;
            a_15 = t;
            t = c_15;
            e_15 = t;
            t = term_x_34;
            b_15 = t;
            t = SSL_table_put(a_15, b_15, t_6);
            t = t_6;
            ;
            LocalPopChoice(y_36);
          }
        else
          {
            t = x_36;
          }
        e_4 = t;
        t = if_verbose2_1_0(y_30, t);
        t = c_4;
        {
          ATerm z_30 (ATerm t)
          {
            ATerm k_4 = NULL,r_4 = NULL,r_15 = NULL,s_15 = NULL;
            k_4 = t;
            s_15 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_4), term_z_36), e_4);
            r_15 = t;
            t = SSL_concat_strings(r_15);
            r_4 = t;
            t = (ATerm) ATmakeAppl(sym__3, term_f_34, (ATerm)ATmakeAppl(sym_Tool_1, k_4), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_4, r_4)));
            t = table_union_0_0(t);
            return(t);
          }
          t = map_1_0(z_30, t);
        }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 = NULL,u_4 = NULL,t_15 = NULL,u_15 = NULL,w_15 = NULL,x_15 = NULL;
      s_4 = t;
      t = term_b_34;
      w_15 = t;
      t = term_f_10;
      t_15 = t;
      t = w_15;
      x_15 = t;
      t = term_b_34;
      u_15 = t;
      t = SSL_table_get(t_15, u_15);
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_8 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
            t = eval_config_0_0(t);
            l_8 = t;
            a_16 = t;
            t = term_f_10;
            y_15 = t;
            t = a_16;
            b_16 = t;
            t = term_b_34;
            z_15 = t;
            t = SSL_table_put(y_15, z_15, l_8);
            t = l_8;
            ;
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
          }
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_4, term_e_37);
        t = geq_0_0(t);
        t = s_4;
        t = a_99(t);
      }
      ;
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_5 = NULL;
      t = term_f_37;
      t = l_0(t);
      m_5 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_37, term_h_37, m_5);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_5 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_5 = ATgetFirst((ATermList) t);
          j_5 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_5;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_5 = ATgetFirst((ATermList) t);
          l_5 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_5;
      t = j_0(t);
      t = k_5;
      t = k_0(t);
      q_5 = t;
      t = (ATerm) ATinsert(CheckATermList(l_5), q_5);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_5, t);
        ;
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_78(t);
      }
    return(t);
  }
  t = y_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_37 = t;
  int l_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_37);
    }
  else
    {
      t = k_37;
      {
        ATerm t_5 = NULL,u_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_5 = ATgetFirst((ATermList) t);
            u_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_5;
        {
          ATerm a_31 (ATerm t)
          {
            t = u_5;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_31, t);
        }
      }
    }
  return(t);
}
ATerm j_6 (ATerm b_6, ATerm t)
{
  ATerm d_6 = NULL;
  t = SSL_explode_term(b_6);
  if(match_cons(t, sym__2))
    {
      ATerm m_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  g_6 = t;
  if(match_cons(t, sym__2))
    {
      e_6 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
      {
        ATerm n_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_31 (ATerm t)
            {
              t = f_6;
              return(t);
            }
            t = e_6;
            t = at_end_1_0(b_31, t);
            ;
            LocalPopChoice(o_37);
          }
        else
          {
            t = n_37;
            t = j_6(g_6, t);
          }
      }
    }
  else
    {
      t = j_6(g_6, t);
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,j_16 = NULL,k_16 = NULL;
  if(match_cons(t, sym__2))
    {
      k_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6;
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_16 = NULL,d_16 = NULL;
        d_16 = t;
        t = term_f_10;
        c_16 = t;
        t = SSL_table_get(c_16, k_6);
        {
          ATerm r_37 = t;
          int s_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_8 = NULL,e_16 = NULL,f_16 = NULL;
              t = eval_config_0_0(t);
              z_8 = t;
              f_16 = t;
              t = term_f_10;
              e_16 = t;
              t = SSL_table_put(e_16, k_6, z_8);
              t = z_8;
              ;
              LocalPopChoice(s_37);
            }
          else
            {
              t = r_37;
            }
        }
        ;
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        t = (ATerm) ATempty;
      }
    m_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_6, m_6);
    t = conc_0_0(t);
    n_6 = t;
    k_16 = t;
    t = term_f_10;
    j_16 = t;
    t = SSL_table_put(j_16, k_6, n_6);
    t = (ATerm) ATmakeAppl(sym__3, term_f_10, k_6, n_6);
  }
  return(t);
}
ATerm c_31 (ATerm t)
{
  ATerm y_6 = NULL;
  y_6 = t;
  if(match_string(t, "-r"))
    {
      t = y_6;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = y_6;
    }
  return(t);
}
ATerm d_31 (ATerm t)
{
  ATerm z_6 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  z_6 = t;
  n_16 = t;
  t = term_f_10;
  l_16 = t;
  t = n_16;
  o_16 = t;
  t = term_p_35;
  m_16 = t;
  t = SSL_table_put(l_16, m_16, z_6);
  t = z_6;
  return(t);
}
ATerm e_31 (ATerm t)
{
  t = term_t_37;
  return(t);
}
ATerm f_31 (ATerm t)
{
  ATerm a_7 = NULL;
  a_7 = t;
  if(match_string(t, "i"))
    {
      t = a_7;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = a_7;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = a_7;
        }
    }
  return(t);
}
ATerm g_31 (ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(ATempty, b_7));
  t = extend_config_0_0(t);
  t = b_7;
  return(t);
}
ATerm h_31 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm i_31 (ATerm t)
{
  ATerm c_7 = NULL;
  c_7 = t;
  if(match_string(t, "r"))
    {
      t = c_7;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = c_7;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = c_7;
        }
    }
  return(t);
}
ATerm j_31 (ATerm t)
{
  ATerm d_7 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,v_16 = NULL;
  d_7 = t;
  t_16 = t;
  t = term_f_10;
  r_16 = t;
  t = t_16;
  v_16 = t;
  t = term_v_37;
  s_16 = t;
  t = SSL_table_put(r_16, s_16, d_7);
  t = d_7;
  return(t);
}
ATerm k_31 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm l_31 (ATerm t)
{
  ATerm e_7 = NULL;
  e_7 = t;
  if(match_string(t, "-t"))
    {
      t = e_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = e_7;
    }
  return(t);
}
ATerm m_31 (ATerm t)
{
  ATerm f_7 = NULL;
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_34, (ATerm) ATinsert(ATempty, f_7));
  t = extend_config_0_0(t);
  t = f_7;
  return(t);
}
ATerm n_31 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm o_31 (ATerm t)
{
  ATerm g_7 = NULL;
  g_7 = t;
  if(match_string(t, "-l"))
    {
      t = g_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = g_7;
    }
  return(t);
}
ATerm p_31 (ATerm t)
{
  ATerm h_7 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,b_17 = NULL;
  h_7 = t;
  y_16 = t;
  t = term_f_10;
  w_16 = t;
  t = y_16;
  b_17 = t;
  t = term_x_34;
  x_16 = t;
  t = SSL_table_put(w_16, x_16, h_7);
  t = h_7;
  return(t);
}
ATerm q_31 (ATerm t)
{
  t = term_y_37;
  return(t);
}
ATerm r_31 (ATerm t)
{
  ATerm i_7 = NULL;
  i_7 = t;
  if(match_string(t, "-V"))
    {
      t = i_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = i_7;
    }
  return(t);
}
ATerm s_31 (ATerm t)
{
  ATerm j_7 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  j_7 = t;
  e_17 = t;
  t = term_f_10;
  c_17 = t;
  t = e_17;
  f_17 = t;
  t = term_x_5;
  d_17 = t;
  t = SSL_table_put(c_17, d_17, j_7);
  t = j_7;
  return(t);
}
ATerm t_31 (ATerm t)
{
  t = term_z_37;
  return(t);
}
ATerm u_31 (ATerm t)
{
  ATerm k_7 = NULL;
  k_7 = t;
  if(match_string(t, "q"))
    {
      t = k_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = k_7;
    }
  return(t);
}
ATerm v_31 (ATerm t)
{
  ATerm l_7 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,l_17 = NULL;
  l_7 = t;
  j_17 = t;
  t = term_f_10;
  h_17 = t;
  t = j_17;
  l_17 = t;
  t = term_a_38;
  i_17 = t;
  t = SSL_table_put(h_17, i_17, l_7);
  t = l_7;
  return(t);
}
ATerm w_31 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm x_31 (ATerm t)
{
  ATerm m_7 = NULL;
  m_7 = t;
  if(match_string(t, "-a"))
    {
      t = m_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = m_7;
    }
  return(t);
}
ATerm y_31 (ATerm t)
{
  ATerm n_7 = NULL,m_17 = NULL,n_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  n_7 = t;
  r_17 = t;
  t = term_f_10;
  m_17 = t;
  t = r_17;
  s_17 = t;
  t = term_f_35;
  n_17 = t;
  t = s_17;
  t_17 = t;
  t = term_f_37;
  q_17 = t;
  t = SSL_table_put(m_17, n_17, q_17);
  t = n_7;
  return(t);
}
ATerm z_31 (ATerm t)
{
  t = term_c_38;
  return(t);
}
ATerm a_32 (ATerm t)
{
  ATerm o_7 = NULL;
  o_7 = t;
  if(match_string(t, "-L"))
    {
      t = o_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = o_7;
    }
  return(t);
}
ATerm b_32 (ATerm t)
{
  ATerm p_7 = NULL,u_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,a_18 = NULL,b_18 = NULL;
  p_7 = t;
  y_17 = t;
  t = term_f_10;
  u_17 = t;
  t = y_17;
  a_18 = t;
  t = term_x_34;
  w_17 = t;
  t = a_18;
  b_18 = t;
  t = term_f_37;
  x_17 = t;
  t = SSL_table_put(u_17, w_17, x_17);
  t = p_7;
  return(t);
}
ATerm c_32 (ATerm t)
{
  t = term_d_38;
  return(t);
}
ATerm d_32 (ATerm t)
{
  ATerm q_7 = NULL;
  q_7 = t;
  if(match_string(t, "-R"))
    {
      t = q_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = q_7;
    }
  return(t);
}
ATerm e_32 (ATerm t)
{
  ATerm r_7 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  r_7 = t;
  f_18 = t;
  t = term_f_10;
  c_18 = t;
  t = f_18;
  g_18 = t;
  t = term_i_35;
  d_18 = t;
  t = g_18;
  h_18 = t;
  t = term_f_37;
  e_18 = t;
  t = SSL_table_put(c_18, d_18, e_18);
  t = r_7;
  return(t);
}
ATerm f_32 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm g_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_32 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  s_7 = t;
  t = SSL_string_to_int(s_7);
  t_7 = t;
  k_18 = t;
  t = term_f_10;
  i_18 = t;
  t = k_18;
  l_18 = t;
  t = term_b_34;
  j_18 = t;
  t = SSL_table_put(i_18, j_18, t_7);
  t = s_7;
  return(t);
}
ATerm i_32 (ATerm t)
{
  t = term_f_38;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(c_31, d_31, e_31, t);
      ;
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
      {
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_31, g_31, h_31, t);
            ;
            LocalPopChoice(j_38);
          }
        else
          {
            t = i_38;
            {
              ATerm k_38 = t;
              int l_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_31, j_31, k_31, t);
                  ;
                  LocalPopChoice(l_38);
                }
              else
                {
                  t = k_38;
                  {
                    ATerm m_38 = t;
                    int n_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(l_31, m_31, n_31, t);
                        ;
                        LocalPopChoice(n_38);
                      }
                    else
                      {
                        t = m_38;
                        {
                          ATerm o_38 = t;
                          int p_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(o_31, p_31, q_31, t);
                              ;
                              LocalPopChoice(p_38);
                            }
                          else
                            {
                              t = o_38;
                              {
                                ATerm q_38 = t;
                                int r_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(r_31, s_31, t_31, t);
                                    ;
                                    LocalPopChoice(r_38);
                                  }
                                else
                                  {
                                    t = q_38;
                                    {
                                      ATerm s_38 = t;
                                      int t_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(u_31, v_31, w_31, t);
                                          ;
                                          LocalPopChoice(t_38);
                                        }
                                      else
                                        {
                                          t = s_38;
                                          {
                                            ATerm u_38 = t;
                                            int v_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(x_31, y_31, z_31, t);
                                                ;
                                                LocalPopChoice(v_38);
                                              }
                                            else
                                              {
                                                t = u_38;
                                                {
                                                  ATerm w_38 = t;
                                                  int x_38 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(a_32, b_32, c_32, t);
                                                      ;
                                                      LocalPopChoice(x_38);
                                                    }
                                                  else
                                                    {
                                                      t = w_38;
                                                      {
                                                        ATerm y_38 = t;
                                                        int z_38 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(d_32, e_32, f_32, t);
                                                            ;
                                                            LocalPopChoice(z_38);
                                                          }
                                                        else
                                                          {
                                                            t = y_38;
                                                            t = ArgOption_3_0(g_32, h_32, i_32, t);
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
  ATerm w_7 = NULL,x_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_7 = ATgetFirst((ATermList) t);
      x_7 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_8 = NULL,c_8 = NULL;
        t = x_7;
        t = h_0(t);
        b_8 = t;
        t = w_7;
        t = g_0(t);
        c_8 = t;
        t = x_7;
        {
          ATerm j_32 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(b_8), c_8);
            return(t);
          }
          t = reverse_acc_2_0(g_0, j_32, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_37;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm s_69 (ATerm), ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,q_18 = NULL,r_18 = NULL;
  g_8 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_8);
  d_8 = t;
  t = e_8;
  t = s_69(t);
  f_8 = t;
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_8);
  q_18 = t;
  t = SSLsetAnnotations(q_18, d_8);
  return(t);
}
ATerm k_32 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm l_32 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_32 (ATerm t)
{
  ATerm j_8 = NULL;
  j_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_8), term_a_39);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,g_19 = NULL,h_19 = NULL;
  ATerm b_39 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
      t = term_d_39;
      u_18 = t;
      t = term_f_10;
      s_18 = t;
      t = u_18;
      v_18 = t;
      t = term_d_39;
      t_18 = t;
      t = SSL_table_get(s_18, t_18);
      {
        ATerm e_39 = t;
        int f_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_9 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
            t = eval_config_0_0(t);
            l_9 = t;
            y_18 = t;
            t = term_f_10;
            w_18 = t;
            t = y_18;
            z_18 = t;
            t = term_d_39;
            x_18 = t;
            t = SSL_table_put(w_18, x_18, l_9);
            t = l_9;
            ;
            LocalPopChoice(f_39);
          }
        else
          {
            t = e_39;
          }
      }
      ;
      LocalPopChoice(c_39);
    }
  else
    {
      t = b_39;
      t = fetch_1_0(k_32, t);
    }
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_39), term_j_39), term_i_39);
        t = echo_0_0(t);
        ;
        LocalPopChoice(h_39);
      }
    else
      {
        t = g_39;
      }
    t = term_l_39;
    t = echo_0_0(t);
    g_19 = t;
    t = term_g_37;
    d_19 = t;
    t = g_19;
    h_19 = t;
    t = term_h_37;
    e_19 = t;
    t = SSL_table_get(d_19, e_19);
    t = reverse_acc_2_0(_id, l_32, t);
    t = map_1_0(m_32, t);
    {
      ATerm m_39 = t;
      int n_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_39), term_o_39), term_t_34);
          t = echo_0_0(t);
          ;
          LocalPopChoice(n_39);
        }
      else
        {
          t = m_39;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm k_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,j_19 = NULL,k_19 = NULL;
  o_8 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      m_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_8);
  k_8 = t;
  t = m_8;
  t = t_69(t);
  n_8 = t;
  k_19 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_8);
  j_19 = t;
  t = SSLsetAnnotations(j_19, k_8);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_8 = NULL,u_8 = NULL,m_19 = NULL,n_19 = NULL;
  s_8 = t;
  {
    ATerm q_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_8;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_39 = ATgetFirst((ATermList) t);
                ATerm t_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_8;
          }
        ;
        LocalPopChoice(r_39);
      }
    else
      {
        t = q_39;
        t = (ATerm) ATinsert(ATempty, s_8);
      }
    u_8 = t;
    n_19 = t;
    t = term_r_34;
    m_19 = t;
    t = SSL_printnl(m_19, u_8);
    t = s_8;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  t = term_d_39;
  r_19 = t;
  t = term_f_10;
  p_19 = t;
  t = r_19;
  s_19 = t;
  t = term_d_39;
  q_19 = t;
  t = SSL_table_get(p_19, q_19);
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_9 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
        t = eval_config_0_0(t);
        y_9 = t;
        v_19 = t;
        t = term_f_10;
        t_19 = t;
        t = v_19;
        w_19 = t;
        t = term_d_39;
        u_19 = t;
        t = SSL_table_put(t_19, u_19, y_9);
        t = y_9;
        ;
        LocalPopChoice(v_39);
      }
    else
      {
        t = u_39;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm n_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_32 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
  a_20 = t;
  t = term_f_10;
  x_19 = t;
  t = a_20;
  b_20 = t;
  t = term_w_39;
  y_19 = t;
  t = b_20;
  c_20 = t;
  t = term_f_37;
  z_19 = t;
  t = SSL_table_put(x_19, y_19, z_19);
  t = term_x_39;
  return(t);
}
ATerm p_32 (ATerm t)
{
  t = term_y_39;
  return(t);
}
ATerm q_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_32 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
  g_20 = t;
  t = term_f_10;
  d_20 = t;
  t = g_20;
  h_20 = t;
  t = term_w_39;
  e_20 = t;
  t = h_20;
  i_20 = t;
  t = term_f_37;
  f_20 = t;
  t = SSL_table_put(d_20, e_20, f_20);
  n_20 = t;
  t = term_f_10;
  k_20 = t;
  t = n_20;
  o_20 = t;
  t = term_z_39;
  l_20 = t;
  t = o_20;
  p_20 = t;
  t = term_f_37;
  m_20 = t;
  t = SSL_table_put(k_20, l_20, m_20);
  t = term_a_40;
  return(t);
}
ATerm s_32 (ATerm t)
{
  t = term_b_40;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_32, o_32, p_32, t);
      ;
      LocalPopChoice(d_40);
    }
  else
    {
      t = c_40;
      t = Option_3_0(q_32, r_32, s_32, t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,g_9 = NULL,q_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym__3))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
      c_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_9, b_9);
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_40 = ATgetArgument(t, 0);
            ATerm h_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_9, b_9);
        ;
        LocalPopChoice(f_40);
      }
    else
      {
        t = e_40;
        t = (ATerm) ATempty;
      }
    g_9 = t;
    r_20 = t;
    t = (ATerm) ATinsert(CheckATermList(g_9), c_9);
    q_20 = t;
    t = SSL_table_put(a_9, b_9, q_20);
    t = (ATerm) ATmakeAppl(sym__3, a_9, b_9, c_9);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_9 = NULL;
      t = term_f_37;
      t = d_0(t);
      q_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_37, term_h_37, q_9);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_9 = ATgetFirst((ATermList) t);
          p_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_9;
      t = a_0(t);
      t = term_f_37;
      t = b_0(t);
      t_9 = t;
      t = (ATerm) ATinsert(CheckATermList(p_9), t_9);
    }
  return(t);
}
ATerm t_32 (ATerm t)
{
  ATerm x_9 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  x_9 = t;
  w_20 = t;
  t = term_f_10;
  u_20 = t;
  t = w_20;
  x_20 = t;
  t = term_d_39;
  v_20 = t;
  t = SSL_table_put(u_20, v_20, x_9);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_9);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_40;
        t = k_95(t);
        ;
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
      }
    t = v_9;
    {
      ATerm u_32 (ATerm t)
      {
        ATerm l_40 = t;
        int m_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_40 = t;
            int o_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(o_40);
              }
            else
              {
                t = n_40;
                t = k_95(t);
                t = Cons_2_0(_id, u_32, t);
              }
            ;
            LocalPopChoice(m_40);
          }
        else
          {
            t = l_40;
            {
              ATerm b_10 = NULL,c_10 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_10 = ATgetFirst((ATermList) t);
                  c_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_10), (ATerm) ATmakeAppl(sym_Undefined_1, b_10));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_32, u_32, t);
    }
  }
  return(t);
}
ATerm w_32 (ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  if(match_string(t, "--help"))
    {
      t = m_10;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_10;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_10;
        }
    }
  return(t);
}
ATerm x_32 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,q_21 = NULL;
  l_21 = t;
  t = term_f_10;
  i_21 = t;
  t = l_21;
  m_21 = t;
  t = term_p_40;
  j_21 = t;
  t = m_21;
  q_21 = t;
  t = term_f_37;
  k_21 = t;
  t = SSL_table_put(i_21, j_21, k_21);
  t = term_q_40;
  return(t);
}
ATerm y_32 (ATerm t)
{
  t = term_r_40;
  return(t);
}
ATerm z_32 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,y_20 = NULL,z_20 = NULL,c_21 = NULL,d_21 = NULL,f_21 = NULL,g_21 = NULL,a_23 = NULL,b_23 = NULL;
  j_10 = t;
  d_21 = t;
  t = term_g_37;
  y_20 = t;
  t = d_21;
  f_21 = t;
  t = term_h_37;
  z_20 = t;
  t = f_21;
  g_21 = t;
  t = (ATerm) ATempty;
  c_21 = t;
  t = SSL_table_put(y_20, z_20, c_21);
  t = j_10;
  {
    ATerm v_32 (ATerm t)
    {
      ATerm s_40 = t;
      int t_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_95(t);
          ;
          LocalPopChoice(t_40);
        }
      else
        {
          t = s_40;
          {
            ATerm u_40 = t;
            int v_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_32, x_32, y_32, t);
                ;
                LocalPopChoice(v_40);
              }
            else
              {
                t = u_40;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_32, t);
    {
      ATerm w_40 = t;
      int x_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_10 = NULL;
          t_10 = t;
          {
            ATerm y_40 = t;
            int z_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_22 = NULL,d_22 = NULL;
                t = t_10;
                {
                  ATerm a_41 = t;
                  int b_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
                      t = term_p_40;
                      w_21 = t;
                      t = term_f_10;
                      r_21 = t;
                      t = w_21;
                      x_21 = t;
                      t = term_p_40;
                      v_21 = t;
                      t = SSL_table_get(r_21, v_21);
                      {
                        ATerm c_41 = t;
                        int d_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_14 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
                            t = eval_config_0_0(t);
                            d_14 = t;
                            a_22 = t;
                            t = term_f_10;
                            y_21 = t;
                            t = a_22;
                            b_22 = t;
                            t = term_p_40;
                            z_21 = t;
                            t = SSL_table_put(y_21, z_21, d_14);
                            t = d_14;
                            ;
                            LocalPopChoice(d_41);
                          }
                        else
                          {
                            t = c_41;
                          }
                      }
                      ;
                      LocalPopChoice(b_41);
                    }
                  else
                    {
                      t = a_41;
                      t = fetch_1_0(z_32, t);
                    }
                  t = t_10;
                  t = default_system_usage_0_0(t);
                  d_22 = t;
                  t = term_e_41;
                  c_22 = t;
                  t = SSL_exit(c_22);
                }
                ;
                LocalPopChoice(z_40);
              }
            else
              {
                t = y_40;
                {
                  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,m_22 = NULL,q_22 = NULL;
                  t = term_w_39;
                  g_22 = t;
                  t = term_f_10;
                  e_22 = t;
                  t = g_22;
                  h_22 = t;
                  t = term_w_39;
                  f_22 = t;
                  t = SSL_table_get(e_22, f_22);
                  {
                    ATerm f_41 = t;
                    int g_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_16 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
                        t = eval_config_0_0(t);
                        z_16 = t;
                        k_22 = t;
                        t = term_f_10;
                        i_22 = t;
                        t = k_22;
                        l_22 = t;
                        t = term_w_39;
                        j_22 = t;
                        t = SSL_table_put(i_22, j_22, z_16);
                        t = z_16;
                        ;
                        LocalPopChoice(g_41);
                      }
                    else
                      {
                        t = f_41;
                      }
                    t = t_10;
                    t = default_system_about_0_0(t);
                    q_22 = t;
                    t = term_e_41;
                    m_22 = t;
                    t = SSL_exit(m_22);
                  }
                }
              }
          }
          ;
          LocalPopChoice(x_40);
        }
      else
        {
          t = w_40;
          {
            ATerm h_41 = t;
            int i_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,y_22 = NULL,z_22 = NULL;
                ATerm a_33 (ATerm t)
                {
                  ATerm b_33 (ATerm t)
                  {
                    if(((k_10 != NULL) && (k_10 != t)))
                      _fail(t);
                    else
                      k_10 = t;
                    return(t);
                  }
                  t = Undefined_1_0(b_33, t);
                  return(t);
                }
                t = fetch_1_0(a_33, t);
                t_22 = t;
                t = term_j_34;
                r_22 = t;
                t = t_22;
                u_22 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_10)), term_j_41);
                s_22 = t;
                t = SSL_printnl(r_22, s_22);
                t = (ATerm) ATmakeAppl(sym__2, term_j_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_10)), term_j_41));
                t = default_system_usage_0_0(t);
                z_22 = t;
                t = term_o_36;
                y_22 = t;
                t = SSL_exit(y_22);
                ;
                LocalPopChoice(i_41);
              }
            else
              {
                t = h_41;
              }
          }
        }
      l_10 = t;
      b_23 = t;
      t = term_g_37;
      a_23 = t;
      t = SSL_table_destroy(a_23);
      t = l_10;
    }
  }
  return(t);
}
ATerm c_33 (ATerm t)
{
  ATerm a_17 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  a_17 = t;
  t = term_k_41;
  e_23 = t;
  t = term_j_34;
  c_23 = t;
  t = e_23;
  f_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_17), term_k_41);
  d_23 = t;
  t = SSL_printnl(c_23, d_23);
  t = a_17;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_24 = NULL,f_24 = NULL;
      t = parse_options_1_0(xtc_options_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(c_33, t);
      t = xtc_read_0_0(t);
      {
        ATerm n_41 = t;
        int o_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_41 = t;
            int q_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
                t = term_v_37;
                i_23 = t;
                t = term_f_10;
                g_23 = t;
                t = i_23;
                j_23 = t;
                t = term_v_37;
                h_23 = t;
                t = SSL_table_get(g_23, h_23);
                {
                  ATerm r_41 = t;
                  int s_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_17 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
                      t = eval_config_0_0(t);
                      g_17 = t;
                      m_23 = t;
                      t = term_f_10;
                      k_23 = t;
                      t = m_23;
                      n_23 = t;
                      t = term_v_37;
                      l_23 = t;
                      t = SSL_table_put(k_23, l_23, g_17);
                      t = g_17;
                      ;
                      LocalPopChoice(s_41);
                    }
                  else
                    {
                      t = r_41;
                    }
                  t = xtc_register_0_0(t);
                }
                ;
                LocalPopChoice(q_41);
              }
            else
              {
                t = p_41;
                {
                  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
                  t = term_b_36;
                  q_23 = t;
                  t = term_f_10;
                  o_23 = t;
                  t = q_23;
                  r_23 = t;
                  t = term_b_36;
                  p_23 = t;
                  t = SSL_table_get(o_23, p_23);
                  {
                    ATerm t_41 = t;
                    int u_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_17 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
                        t = eval_config_0_0(t);
                        k_17 = t;
                        u_23 = t;
                        t = term_f_10;
                        s_23 = t;
                        t = u_23;
                        v_23 = t;
                        t = term_b_36;
                        t_23 = t;
                        t = SSL_table_put(s_23, t_23, k_17);
                        t = k_17;
                        ;
                        LocalPopChoice(u_41);
                      }
                    else
                      {
                        t = t_41;
                      }
                    t = register_import_0_0(t);
                  }
                }
              }
            t = xtc_store_0_0(t);
            ;
            LocalPopChoice(o_41);
          }
        else
          {
            t = n_41;
            {
              ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
              t = term_a_38;
              y_23 = t;
              t = term_f_10;
              w_23 = t;
              t = y_23;
              z_23 = t;
              t = term_a_38;
              x_23 = t;
              t = SSL_table_get(w_23, x_23);
              {
                ATerm v_41 = t;
                int w_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_17 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
                    t = eval_config_0_0(t);
                    o_17 = t;
                    c_24 = t;
                    t = term_f_10;
                    a_24 = t;
                    t = c_24;
                    d_24 = t;
                    t = term_a_38;
                    b_24 = t;
                    t = SSL_table_put(a_24, b_24, o_17);
                    t = o_17;
                    ;
                    LocalPopChoice(w_41);
                  }
                else
                  {
                    t = v_41;
                  }
                {
                  ATerm x_41 = t;
                  int y_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = repository_query_0_0(t);
                      ;
                      LocalPopChoice(y_41);
                    }
                  else
                    {
                      t = x_41;
                      {
                        ATerm z_41 = t;
                        int a_42 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = all_query_0_0(t);
                            ;
                            LocalPopChoice(a_42);
                          }
                        else
                          {
                            t = z_41;
                            t = tool_query_0_0(t);
                          }
                      }
                    }
                }
              }
            }
          }
        f_24 = t;
        t = term_e_41;
        e_24 = t;
        t = SSL_exit(e_24);
      }
      ;
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      {
        ATerm p_17 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
        p_17 = t;
        t = term_b_42;
        i_24 = t;
        t = term_j_34;
        g_24 = t;
        t = i_24;
        j_24 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, p_17), term_b_42);
        h_24 = t;
        t = SSL_printnl(g_24, h_24);
        t = p_17;
      }
    }
  return(t);
}
ATerm xtc_xtc_get_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,k_24 = NULL,l_24 = NULL,q_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,r_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_42 = ATgetFirst((ATermList) t);
      ATerm d_42 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
        {
          ATerm e_42 = ATgetFirst((ATermList) d_42);
          if((ATgetSymbol((ATermAppl) e_42) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          x_10 = (ATerm) ATgetNext((ATermList) d_42);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = x_10;
  t = map_1_0(xtc_find_0_0, t);
  y_10 = t;
  l_24 = t;
  t = term_r_34;
  k_24 = t;
  t = SSL_print(k_24, y_10);
  o_24 = t;
  t = term_r_34;
  m_24 = t;
  t = o_24;
  p_24 = t;
  t = (ATerm) ATinsert(ATempty, term_t_34);
  n_24 = t;
  t = SSL_print(m_24, n_24);
  r_24 = t;
  t = term_e_41;
  q_24 = t;
  t = SSL_exit(q_24);
  return(t);
}
ATerm map_1_0 (ATerm s_77 (ATerm), ATerm t)
{
  ATerm o_15 (ATerm t)
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
        t = Cons_2_0(s_77, o_15, t);
      }
    return(t);
  }
  t = o_15(t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_11 = NULL,g_11 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
      e_11 = t;
      t = term_b_34;
      u_24 = t;
      t = term_f_10;
      s_24 = t;
      t = u_24;
      v_24 = t;
      t = term_b_34;
      t_24 = t;
      t = SSL_table_get(s_24, t_24);
      {
        ATerm j_42 = t;
        int k_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_17 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
            t = eval_config_0_0(t);
            v_17 = t;
            y_24 = t;
            t = term_f_10;
            w_24 = t;
            t = y_24;
            z_24 = t;
            t = term_b_34;
            x_24 = t;
            t = SSL_table_put(w_24, x_24, v_17);
            t = v_17;
            ;
            LocalPopChoice(k_42);
          }
        else
          {
            t = j_42;
          }
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_l_42);
        t = geq_0_0(t);
        t = e_11;
        t = d_99(t);
      }
      ;
      LocalPopChoice(i_42);
    }
  else
    {
      t = h_42;
    }
  return(t);
}
ATerm fetch_1_0 (ATerm c_78 (ATerm), ATerm t)
{
  ATerm f_12 (ATerm t)
  {
    ATerm m_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(c_78, _id, t);
        ;
        LocalPopChoice(n_42);
      }
    else
      {
        t = m_42;
        t = Cons_2_0(_id, f_12, t);
      }
    return(t);
  }
  t = f_12(t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm o_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_11 = NULL,o_11 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
      m_11 = t;
      t = term_b_34;
      c_25 = t;
      t = term_f_10;
      a_25 = t;
      t = c_25;
      d_25 = t;
      t = term_b_34;
      b_25 = t;
      t = SSL_table_get(a_25, b_25);
      {
        ATerm q_42 = t;
        int r_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_17 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
            t = eval_config_0_0(t);
            z_17 = t;
            g_25 = t;
            t = term_f_10;
            e_25 = t;
            t = g_25;
            h_25 = t;
            t = term_b_34;
            f_25 = t;
            t = SSL_table_put(e_25, f_25, z_17);
            t = z_17;
            ;
            LocalPopChoice(r_42);
          }
        else
          {
            t = q_42;
          }
        o_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_11, term_s_42);
        t = geq_0_0(t);
        t = m_11;
        t = c_99(t);
      }
      ;
      LocalPopChoice(p_42);
    }
  else
    {
      t = o_42;
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  x_11 = t;
  if(match_cons(t, sym__2))
    {
      y_11 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_11;
        if((y_11 != t))
          {
            _fail(t);
          }
        t = x_11;
        ;
        LocalPopChoice(u_42);
      }
    else
      {
        t = t_42;
        t = x_11;
        {
          ATerm v_42 = t;
          int w_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_11, z_11);
              ;
              LocalPopChoice(w_42);
            }
          else
            {
              t = v_42;
              t = SSL_gtr(y_11, z_11);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_11, z_11);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_12 = NULL,e_12 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
      c_12 = t;
      t = term_b_34;
      k_25 = t;
      t = term_f_10;
      i_25 = t;
      t = k_25;
      l_25 = t;
      t = term_b_34;
      j_25 = t;
      t = SSL_table_get(i_25, j_25);
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_18 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
            t = eval_config_0_0(t);
            m_18 = t;
            o_25 = t;
            t = term_f_10;
            m_25 = t;
            t = o_25;
            p_25 = t;
            t = term_b_34;
            n_25 = t;
            t = SSL_table_put(m_25, n_25, m_18);
            t = m_18;
            ;
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
          }
        e_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_12, term_b_43);
        t = geq_0_0(t);
        t = c_12;
        t = e_99(t);
      }
      ;
      LocalPopChoice(y_42);
    }
  else
    {
      t = x_42;
    }
  return(t);
}
ATerm union_1_0 (ATerm w_81 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12;
  {
    ATerm l_12 (ATerm t)
    {
      ATerm c_43 = t;
      int d_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_12;
          ;
          LocalPopChoice(d_43);
        }
      else
        {
          t = c_43;
          {
            ATerm e_43 = t;
            int f_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_18 = NULL,o_18 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    n_18 = ATgetFirst((ATermList) t);
                    o_18 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = k_12;
                {
                  ATerm d_33 (ATerm t)
                  {
                    ATerm p_18 = NULL;
                    p_18 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_18, p_18);
                    t = w_81(t);
                    return(t);
                  }
                  t = fetch_1_0(d_33, t);
                  t = o_18;
                  t = l_12(t);
                }
                ;
                LocalPopChoice(f_43);
              }
            else
              {
                t = e_43;
                t = Cons_2_0(_id, l_12, t);
              }
          }
        }
      return(t);
    }
    t = l_12(t);
  }
  return(t);
}
ATerm e_33 (ATerm t)
{
  ATerm w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      if((w_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__3))
    {
      o_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
      q_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_12, p_12);
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_43 = ATgetArgument(t, 0);
            ATerm j_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_12, p_12);
        ;
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        t = (ATerm) ATempty;
      }
    r_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_12, q_12);
    t = union_1_0(e_33, t);
    s_12 = t;
    t = SSL_table_put(o_12, p_12, s_12);
    t = (ATerm) ATmakeAppl(sym__3, o_12, p_12, q_12);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm n_95 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_12;
  {
    ATerm f_33 (ATerm t)
    {
      ATerm a_13 = NULL,b_13 = NULL;
      if(match_cons(t, sym__2))
        {
          a_13 = ATgetArgument(t, 0);
          b_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, z_12, a_13, b_13);
      t = n_95(t);
      return(t);
    }
    t = map_1_0(f_33, t);
  }
  return(t);
}
ATerm p_13 (ATerm j_13, ATerm t)
{
  t = SSL_fclose(j_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  n_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_13 = ATgetArgument(t, 0);
      {
        ATerm k_43 = t;
        int l_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_13);
            ;
            LocalPopChoice(l_43);
          }
        else
          {
            t = k_43;
            t = p_13(n_13, t);
          }
      }
    }
  else
    {
      t = p_13(n_13, t);
    }
  return(t);
}
ATerm _2_0 (ATerm q_59 (ATerm), ATerm r_59 (ATerm), ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,q_25 = NULL,r_25 = NULL;
  v_13 = t;
  if(match_cons(t, sym__2))
    {
      r_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_13);
  q_13 = t;
  t = r_13;
  t = q_59(t);
  t_13 = t;
  t = s_13;
  t = r_59(t);
  u_13 = t;
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_13, u_13);
  q_25 = t;
  t = SSLsetAnnotations(q_25, q_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_13 = NULL;
  t = SSL_stdin_stream();
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_stdout_stream();
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_14 = NULL;
  t = SSL_stderr_stream();
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_14);
  return(t);
}
ATerm g_33 (ATerm t)
{
  ATerm i_14 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      i_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14;
  return(t);
}
ATerm h_33 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  t = SSL_is_string(m_14);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_43 = ATgetArgument(t, 0);
      ATerm n_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL,b_19 = NULL;
        a_19 = t;
        t = SSL_explode_term(a_19);
        if(match_cons(t, sym__2))
          {
            ATerm q_43 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_43) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_43 = ATgetArgument(t, 1);
              if(((ATgetType(r_43) == AT_LIST) && !(ATisEmpty(r_43))))
                {
                  b_19 = ATgetFirst((ATermList) r_43);
                  {
                    ATerm s_43 = (ATerm) ATgetNext((ATermList) r_43);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_19;
        if(match_cons(t, sym_stderr_0))
          {
            t = b_19;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = b_19;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_19;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(p_43);
      }
    else
      {
        t = o_43;
        {
          ATerm t_43 = t;
          int u_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL;
              t = _2_0(g_33, _id, t);
              if(match_cons(t, sym__2))
                {
                  f_14 = ATgetArgument(t, 0);
                  g_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(f_14, g_14);
              h_14 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, h_14);
              ;
              LocalPopChoice(u_43);
            }
          else
            {
              t = t_43;
              {
                ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
                t = _2_0(h_33, _id, t);
                if(match_cons(t, sym__2))
                  {
                    j_14 = ATgetArgument(t, 0);
                    k_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(j_14, k_14);
                l_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, l_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_14 = NULL;
      q_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_14, term_x_43);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_43);
    }
  else
    {
      t = v_43;
      {
        ATerm c_19 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
        c_19 = t;
        t = term_y_43;
        u_25 = t;
        t = term_j_34;
        s_25 = t;
        t = u_25;
        v_25 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_19), term_y_43);
        t_25 = t;
        t = SSL_printnl(s_25, t_25);
        t = c_19;
        _fail(t);
      }
    }
  n_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_14);
  o_14 = t;
  t = n_14;
  t = fclose_0_0(t);
  t = o_14;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm z_43 = t;
  int a_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_14 = NULL,w_25 = NULL,x_25 = NULL;
      s_14 = t;
      x_25 = t;
      t = (ATerm) ATinsert(ATempty, term_b_44);
      w_25 = t;
      t = SSL_access(s_14, w_25);
      LocalPopChoice(a_44);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = z_43;
      {
        ATerm c_44 = t;
        int d_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_19 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
            ATerm e_44 = t;
            if((PushChoice() == 0))
              {
                ATerm t_14 = NULL,y_25 = NULL,z_25 = NULL;
                t_14 = t;
                z_25 = t;
                t = (ATerm) ATinsert(ATempty, term_w_35);
                y_25 = t;
                t = SSL_access(t_14, y_25);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_44;
              }
            f_19 = t;
            t = term_f_44;
            c_26 = t;
            t = term_j_34;
            a_26 = t;
            t = c_26;
            d_26 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, f_19), term_f_44);
            b_26 = t;
            t = SSL_printnl(a_26, b_26);
            t = f_19;
            ;
            LocalPopChoice(d_44);
          }
        else
          {
            t = c_44;
            {
              ATerm i_19 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
              i_19 = t;
              t = term_g_44;
              g_26 = t;
              t = term_j_34;
              e_26 = t;
              t = g_26;
              h_26 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, i_19), term_g_44);
              f_26 = t;
              t = SSL_printnl(e_26, f_26);
              t = i_19;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm i_33 (ATerm t)
{
  ATerm l_19 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
  l_19 = t;
  t = term_h_44;
  k_26 = t;
  t = term_j_34;
  i_26 = t;
  t = k_26;
  l_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_19), term_h_44);
  j_26 = t;
  t = SSL_printnl(i_26, j_26);
  t = l_19;
  return(t);
}
ATerm j_33 (ATerm t)
{
  ATerm o_19 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  o_19 = t;
  t = term_i_44;
  y_26 = t;
  t = term_j_34;
  w_26 = t;
  t = y_26;
  z_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_19), term_i_44);
  x_26 = t;
  t = SSL_printnl(w_26, x_26);
  t = o_19;
  return(t);
}
ATerm k_33 (ATerm t)
{
  ATerm x_14 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  x_14 = t;
  c_27 = t;
  t = term_j_34;
  a_27 = t;
  t = c_27;
  d_27 = t;
  t = (ATerm) ATinsert(ATempty, term_j_44);
  b_27 = t;
  t = SSL_printnl(a_27, b_27);
  t = x_14;
  return(t);
}
ATerm l_33 (ATerm t)
{
  ATerm y_14 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  y_14 = t;
  g_27 = t;
  t = term_j_34;
  e_27 = t;
  t = g_27;
  h_27 = t;
  t = (ATerm) ATinsert(ATempty, term_k_44);
  f_27 = t;
  t = SSL_printnl(e_27, f_27);
  t = y_14;
  return(t);
}
ATerm m_33 (ATerm t)
{
  ATerm z_14 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  z_14 = t;
  q_27 = t;
  t = term_j_34;
  o_27 = t;
  t = q_27;
  r_27 = t;
  t = (ATerm) ATinsert(ATempty, term_j_44);
  p_27 = t;
  t = SSL_printnl(o_27, p_27);
  t = z_14;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  u_14 = t;
  t = if_verbose5_1_0(i_33, t);
  {
    ATerm l_44 = t;
    if((PushChoice() == 0))
      {
        ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
        o_26 = t;
        t = term_f_34;
        m_26 = t;
        t = o_26;
        p_26 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_14);
        n_26 = t;
        t = SSL_table_get(m_26, n_26);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_44;
      }
    v_14 = t;
    t_26 = t;
    t = term_f_34;
    q_26 = t;
    t = t_26;
    u_26 = t;
    t = term_m_44;
    r_26 = t;
    t = u_26;
    v_26 = t;
    t = (ATerm) ATinsert(ATempty, u_14);
    s_26 = t;
    t = SSL_table_put(q_26, r_26, s_26);
    t = v_14;
    t = if_verbose4_1_0(j_33, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(k_33, t);
    w_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_34, w_14);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(l_33, t);
    l_27 = t;
    t = term_f_34;
    i_27 = t;
    t = l_27;
    m_27 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, u_14);
    j_27 = t;
    t = m_27;
    n_27 = t;
    t = (ATerm) ATempty;
    k_27 = t;
    t = SSL_table_put(i_27, j_27, k_27);
    t = (ATerm) ATmakeAppl(sym__3, term_f_34, (ATerm)ATmakeAppl(sym_Imported_1, u_14), (ATerm) ATempty);
    t = if_verbose4_1_0(m_33, t);
  }
  return(t);
}
ATerm Cons_2_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,s_27 = NULL,t_27 = NULL;
  l_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_15 = ATgetFirst((ATermList) t);
      i_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_15);
  g_15 = t;
  t = h_15;
  t = f_64(t);
  j_15 = t;
  t = i_15;
  t = g_64(t);
  k_15 = t;
  t_27 = t;
  t = (ATerm) ATinsert(CheckATermList(k_15), j_15);
  s_27 = t;
  t = SSLsetAnnotations(s_27, g_15);
  return(t);
}
ATerm filter_1_0 (ATerm y_84 (ATerm), ATerm t)
{
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_44);
    }
  else
    {
      t = n_44;
      {
        ATerm p_44 = t;
        int q_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_33 (ATerm t)
            {
              t = filter_1_0(y_84, t);
              return(t);
            }
            t = Cons_2_0(y_84, n_33, t);
            ;
            LocalPopChoice(q_44);
          }
        else
          {
            t = p_44;
            {
              ATerm d_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_44 = ATgetFirst((ATermList) t);
                  d_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = d_15;
              t = filter_1_0(y_84, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm d_71 (ATerm), ATerm t)
{
  ATerm f_15 (ATerm t)
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_71(t);
        t = f_15(t);
        ;
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
      }
    return(t);
  }
  t = f_15(t);
  return(t);
}
ATerm o_33 (ATerm t)
{
  ATerm u_44 = t;
  int v_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_44);
    }
  else
    {
      t = u_44;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_15 = NULL;
      v_15 = t;
      t = SSL_is_string(v_15);
      ;
      LocalPopChoice(x_44);
    }
  else
    {
      t = w_44;
      {
        ATerm y_44 = t;
        int z_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_33, t);
            ;
            LocalPopChoice(z_44);
          }
        else
          {
            t = y_44;
            {
              ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
              g_16 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_16 = ATgetArgument(t, 0);
                  t = h_16;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_16 = ATgetArgument(t, 0);
                      t = h_16;
                      {
                        ATerm a_45 = t;
                        int b_45 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm u_27 = NULL,v_27 = NULL;
                            v_27 = t;
                            t = term_f_10;
                            u_27 = t;
                            t = SSL_table_get(u_27, h_16);
                            {
                              ATerm c_45 = t;
                              int d_45 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_20 = NULL,w_27 = NULL,x_27 = NULL;
                                  t = eval_config_0_0(t);
                                  j_20 = t;
                                  x_27 = t;
                                  t = term_f_10;
                                  w_27 = t;
                                  t = SSL_table_put(w_27, h_16, j_20);
                                  t = j_20;
                                  ;
                                  LocalPopChoice(d_45);
                                }
                              else
                                {
                                  t = c_45;
                                }
                            }
                            ;
                            LocalPopChoice(b_45);
                          }
                        else
                          {
                            t = a_45;
                            {
                              ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
                              t = term_e_45;
                              a_28 = t;
                              t = term_j_34;
                              y_27 = t;
                              t = a_28;
                              b_28 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, h_16), term_e_45);
                              z_27 = t;
                              t = SSL_printnl(y_27, z_27);
                              t = h_16;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_20 = NULL,t_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_16 = ATgetArgument(t, 0);
                          i_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_16;
                      t = eval_config_0_0(t);
                      s_20 = t;
                      t = i_16;
                      t = eval_config_0_0(t);
                      t_20 = t;
                      t = SSL_strcat(s_20, t_20);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_45 = t;
  int g_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
      t = term_p_35;
      e_28 = t;
      t = term_f_10;
      c_28 = t;
      t = e_28;
      f_28 = t;
      t = term_p_35;
      d_28 = t;
      t = SSL_table_get(c_28, d_28);
      {
        ATerm h_45 = t;
        int i_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_21 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
            t = eval_config_0_0(t);
            a_21 = t;
            i_28 = t;
            t = term_f_10;
            g_28 = t;
            t = i_28;
            j_28 = t;
            t = term_p_35;
            h_28 = t;
            t = SSL_table_put(g_28, h_28, a_21);
            t = a_21;
            ;
            LocalPopChoice(i_45);
          }
        else
          {
            t = h_45;
          }
      }
      ;
      LocalPopChoice(g_45);
    }
  else
    {
      t = f_45;
      {
        ATerm j_45 = t;
        int k_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_28 = NULL,l_28 = NULL;
            l_28 = t;
            t = term_l_45;
            k_28 = t;
            t = SSL_getenv(k_28);
            ;
            LocalPopChoice(k_45);
          }
        else
          {
            t = j_45;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm p_33 (ATerm t)
{
  ATerm b_21 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  b_21 = t;
  t = term_m_45;
  o_28 = t;
  t = term_j_34;
  m_28 = t;
  t = o_28;
  p_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_21), term_m_45);
  n_28 = t;
  t = SSL_printnl(m_28, n_28);
  t = b_21;
  return(t);
}
ATerm q_33 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  w_28 = t;
  t = term_f_34;
  u_28 = t;
  t = w_28;
  x_28 = t;
  t = term_g_34;
  v_28 = t;
  t = SSL_table_get(u_28, v_28);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_45 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_45;
      }
  }
  return(t);
}
ATerm r_33 (ATerm t)
{
  ATerm e_21 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  e_21 = t;
  t = term_o_45;
  a_29 = t;
  t = term_j_34;
  y_28 = t;
  t = a_29;
  b_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_21), term_o_45);
  z_28 = t;
  t = SSL_printnl(y_28, z_28);
  t = e_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_16 = NULL;
  t = if_verbose5_1_0(p_33, t);
  p_16 = t;
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
        s_28 = t;
        t = term_f_34;
        q_28 = t;
        t = s_28;
        t_28 = t;
        t = term_m_44;
        r_28 = t;
        t = SSL_table_get(q_28, r_28);
        ;
        LocalPopChoice(q_45);
      }
    else
      {
        t = p_45;
        {
          ATerm q_16 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          q_16 = t;
          t = repeat_1_0(q_33, t);
          t = q_16;
        }
      }
    t = p_16;
    t = if_verbose5_1_0(r_33, t);
  }
  return(t);
}
ATerm s_33 (ATerm t)
{
  ATerm h_21 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  h_21 = t;
  t = term_r_45;
  e_29 = t;
  t = term_j_34;
  c_29 = t;
  t = e_29;
  f_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_21), term_r_45);
  d_29 = t;
  t = SSL_printnl(c_29, d_29);
  t = h_21;
  return(t);
}
ATerm u_33 (ATerm t)
{
  ATerm u_21 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  u_21 = t;
  t = term_r_45;
  q_29 = t;
  t = term_j_34;
  o_29 = t;
  t = q_29;
  r_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_21), term_r_45);
  p_29 = t;
  t = SSL_printnl(o_29, p_29);
  t = u_21;
  return(t);
}
ATerm v_33 (ATerm t)
{
  ATerm p_22 = NULL,w_29 = NULL,x_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  t = term_f_34;
  x_29 = t;
  t = term_f_34;
  w_29 = t;
  t = SSL_table_keys(w_29);
  t = map_1_0(w_33, t);
  p_22 = t;
  t = term_s_45;
  c_30 = t;
  t = term_j_34;
  a_30 = t;
  t = c_30;
  d_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_22), term_s_45);
  b_30 = t;
  t = SSL_printnl(a_30, b_30);
  t = p_22;
  return(t);
}
ATerm w_33 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,y_29 = NULL,z_29 = NULL;
  n_22 = t;
  z_29 = t;
  t = term_f_34;
  y_29 = t;
  t = SSL_table_get(y_29, n_22);
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_22, o_22);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_45 = t;
  int u_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(s_33, t);
      t = xtc_load_0_0(t);
      {
        ATerm v_45 = t;
        int w_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
            if(match_cons(t, sym__2))
              {
                n_21 = ATgetArgument(t, 0);
                o_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            i_29 = t;
            t = term_f_34;
            g_29 = t;
            t = i_29;
            j_29 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, n_21);
            h_29 = t;
            t = SSL_table_get(g_29, h_29);
            {
              ATerm t_33 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((o_21 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((p_21 != NULL) && (p_21 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(t_33, t);
              t = not_null(p_21);
            }
            ;
            LocalPopChoice(w_45);
          }
        else
          {
            t = v_45;
            {
              ATerm s_21 = NULL,t_21 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
              s_21 = t;
              m_29 = t;
              t = term_f_34;
              k_29 = t;
              t = m_29;
              n_29 = t;
              t = (ATerm) ATmakeAppl(sym_Tool_1, s_21);
              l_29 = t;
              t = SSL_table_get(k_29, l_29);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_45 = ATgetFirst((ATermList) t);
                  if(match_cons(x_45, sym__2))
                    {
                      ATerm z_45 = ATgetArgument(x_45, 0);
                      t_21 = ATgetArgument(x_45, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm y_45 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = t_21;
            }
          }
        t = if_verbose5_1_0(u_33, t);
      }
      ;
      LocalPopChoice(u_45);
    }
  else
    {
      t = t_45;
      {
        ATerm u_16 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
        u_16 = t;
        u_29 = t;
        t = term_j_34;
        s_29 = t;
        t = u_29;
        v_29 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_46), u_16), term_a_46);
        t_29 = t;
        t = SSL_printnl(s_29, t_29);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_46), u_16), term_a_46);
        t = if_verbose5_1_0(v_33, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm c_46 = t;
  int d_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm e_46 = ATgetFirst((ATermList) t);
          ATerm f_46 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(f_46) == AT_LIST) && !(ATisEmpty(f_46))))
            {
              ATerm g_46 = ATgetFirst((ATermList) f_46);
              if((ATgetSymbol((ATermAppl) g_46) != ATmakeSymbol("call", 0, ATtrue)))
                _fail(t);
              {
                ATerm h_46 = (ATerm) ATgetNext((ATermList) f_46);
                if(((ATgetType(h_46) == AT_LIST) && !(ATisEmpty(h_46))))
                  {
                    v_22 = ATgetFirst((ATermList) h_46);
                    w_22 = (ATerm) ATgetNext((ATermList) h_46);
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
      t = v_22;
      t = xtc_find_0_0(t);
      x_22 = t;
      t = SSL_execvp(x_22, w_22);
      ;
      LocalPopChoice(d_46);
    }
  else
    {
      t = c_46;
      {
        ATerm i_46 = t;
        int j_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_xtc_get_0_0(t);
            ;
            LocalPopChoice(j_46);
          }
        else
          {
            t = i_46;
            t = xtc_main_0_0(t);
          }
      }
    }
  return(t);
}
