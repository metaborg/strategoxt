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
ATerm term_u_24;
ATerm term_t_24;
ATerm term_o_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_q_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_o_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_z_21;
ATerm term_e_21;
ATerm term_n_20;
ATerm term_h_20;
ATerm term_k_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_v_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_q_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_v_15;
ATerm term_q_15;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_t_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_g_9;
void init_constant_terms (void)
{
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_m_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_r_12);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_r_12);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_c_11, term_r_12);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_t_12);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, term_y_16, term_r_12);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_b_17, term_r_12);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_r_12);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_h_23);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
ATerm version_query_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm c_99 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm tool_query_0_0 (ATerm);
ATerm a_5 (ATerm y_58, ATerm k_629, ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm all_query_0_0 (ATerm);
ATerm repository_query_0_0 (ATerm);
ATerm b_5 (ATerm d_46, ATerm e_46, ATerm);
ATerm c_5 (ATerm k_90 (ATerm), ATerm k_425, ATerm l_46, ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm n_1 (ATerm);
ATerm xtc_store_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm w_1 (ATerm);
ATerm register_import_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm d_5 (ATerm k_52, ATerm l_52, ATerm j_52, ATerm);
ATerm if_verbose1_1_0 (ATerm a_99 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm xtc_register_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm j_78 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm d_12 (ATerm g_11, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_5 (ATerm r_56, ATerm q_56, ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm s_4 (ATerm);
ATerm x_4 (ATerm);
ATerm xtc_options_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm m_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm h_5 (ATerm l_56, ATerm m_56, ATerm);
ATerm f_5 (ATerm s_51, ATerm t_51, ATerm r_51, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm l_95 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm parse_options_1_0 (ATerm k_95 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm xtc_main_0_0 (ATerm);
ATerm j_5 (ATerm o_59, ATerm p_59, ATerm);
ATerm k_5 (ATerm w_47, ATerm x_47, ATerm);
ATerm debug_1_0 (ATerm i_90 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm e_99 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm d_78 (ATerm), ATerm);
ATerm w_5 (ATerm j_53, ATerm k_53, ATerm);
ATerm if_verbose4_1_0 (ATerm d_99 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm f_99 (ATerm), ATerm);
ATerm o_5 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm y_29, ATerm x_29, ATerm);
ATerm p_5 (ATerm x_81 (ATerm), ATerm u_29, ATerm t_29, ATerm);
ATerm d_7 (ATerm);
ATerm q_5 (ATerm p_52, ATerm q_52, ATerm r_52, ATerm);
ATerm r_5 (ATerm o_95 (ATerm), ATerm z_52, ATerm y_52, ATerm);
ATerm u_5 (ATerm n_42, ATerm o_42, ATerm);
ATerm i_28 (ATerm c_28, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm s_5 (ATerm j_46, ATerm);
ATerm t_5 (ATerm v_42, ATerm w_42, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_29 (ATerm s_28, ATerm);
ATerm w_29 (ATerm w_28, ATerm x_28, ATerm y_28, ATerm);
ATerm a_30 (ATerm g_29, ATerm h_29, ATerm i_29, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm j_7 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm e_71 (ATerm), ATerm);
ATerm v_5 (ATerm j_37, ATerm k_37, ATerm);
ATerm map_1_0 (ATerm t_77 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm f_8 (ATerm);
ATerm j_8 (ATerm);
ATerm l_8 (ATerm);
ATerm n_8 (ATerm);
ATerm p_8 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm x_34 (ATerm f_34, ATerm);
ATerm a_9 (ATerm);
ATerm c_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm version_query_0_0 (ATerm t)
{
  ATerm m_0 = NULL,p_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,x_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL,n_0 = NULL;
  if(((u_0 != NULL) && (u_0 != t)))
    _fail(t);
  else
    u_0 = t;
  t = term_g_9;
  t = get_config_0_0(t);
  if(((p_0 != NULL) && (p_0 != t)))
    _fail(t);
  else
    p_0 = t;
  t = not_null(u_0);
  if(match_cons(t, sym__2))
    {
      if(((y_0 != NULL) && (y_0 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_0 = ATgetArgument(t, 0);
      if(((a_1 != NULL) && (a_1 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(u_0));
  if(((x_0 != NULL) && (x_0 != t)))
    _fail(t);
  else
    x_0 = t;
  t = not_null(y_0);
  if(match_cons(t, sym_Tool_1))
    {
      if(((m_0 != NULL) && (m_0 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(a_1);
  {
    ATerm c_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((p_0 != NULL) && (p_0 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_0 = ATgetArgument(t, 0);
          if(((t_0 != NULL) && (t_0 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(c_0, t);
    if(((b_1 != NULL) && (b_1 != t)))
      _fail(t);
    else
      b_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_0), not_null(b_1));
    if(((n_0 != NULL) && (n_0 != t)))
      _fail(t);
    else
      n_0 = t;
    t = SSLsetAnnotations(not_null(n_0), not_null(x_0));
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(p_0), not_null(t_0)));
    if(((v_0 != NULL) && (v_0 != t)))
      _fail(t);
    else
      v_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(m_0)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(p_0), not_null(t_0))));
    t = a_5(not_null(m_0), not_null(v_0), t);
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm d_1 = NULL;
  d_1 = t;
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_k_9);
        t = geq_0_0(t);
        t = d_1;
        t = c_99(t);
        ;
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        t = d_1;
      }
  }
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm m_1 = NULL,o_1 = NULL;
  t = term_l_9;
  m_1 = t;
  t = term_m_9;
  o_1 = t;
  t = term_n_9;
  t = w_5(m_1, o_1, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm p_9 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_9;
      }
  }
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = debug_1_0(s_0, t);
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  ATerm f_0 (ATerm t)
  {
    ATerm q_1 = NULL;
    q_1 = t;
    {
      ATerm u_9 = t;
      int v_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_1 = NULL,u_1 = NULL;
          t = if_verbose3_1_0(r_0, t);
          t = term_l_9;
          s_1 = t;
          t = (ATerm) ATmakeAppl(sym_Tool_1, q_1);
          u_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATmakeAppl(sym_Tool_1, q_1));
          t = w_5(s_1, u_1, t);
          if(((k_1 != NULL) && (k_1 != t)))
            _fail(t);
          else
            k_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, q_1), not_null(k_1));
          {
            ATerm w_9 = t;
            int x_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = version_query_0_0(t);
                ;
                LocalPopChoice(x_9);
              }
            else
              {
                t = w_9;
                if(match_cons(t, sym__2))
                  {
                    ATerm y_9 = ATgetArgument(t, 0);
                    ATerm z_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, q_1), not_null(k_1));
                t = a_5(q_1, not_null(k_1), t);
              }
          }
          ;
          LocalPopChoice(v_9);
        }
      else
        {
          t = u_9;
          {
            ATerm g_2 = NULL,h_2 = NULL;
            t = term_d_10;
            g_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_10), term_e_10), q_1);
            h_2 = t;
            t = SSL_print(g_2, h_2);
            t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_10), term_e_10), q_1));
          }
        }
    }
    return(t);
  }
  t = term_i_10;
  t = get_config_0_0(t);
  if(((l_1 != NULL) && (l_1 != t)))
    _fail(t);
  else
    l_1 = t;
  t = repeat_1_0(e_0, t);
  t = not_null(l_1);
  t = map_1_0(f_0, t);
  return(t);
}
ATerm a_5 (ATerm y_58, ATerm k_629, ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm i_2 = NULL,j_2 = NULL;
    if(match_cons(t, sym__2))
      {
        i_2 = ATgetArgument(t, 0);
        j_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm k_10 = t;
      int p_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_2 = NULL,m_2 = NULL;
          t = term_q_10;
          t = get_config_0_0(t);
          t = term_d_10;
          l_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_h_10), j_2);
          m_2 = t;
          t = SSL_print(l_2, m_2);
          t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATinsert(ATinsert(ATempty, term_h_10), j_2));
          ;
          LocalPopChoice(p_10);
        }
      else
        {
          t = k_10;
          {
            ATerm n_2 = NULL,p_2 = NULL;
            t = term_d_10;
            n_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_10), j_2), term_v_10), i_2), term_s_10), not_null(y_58));
            p_2 = t;
            t = SSL_print(n_2, p_2);
            t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_10), j_2), term_v_10), i_2), term_s_10), not_null(y_58)));
          }
        }
    }
    return(t);
  }
  t = not_null(k_629);
  t = map_1_0(e_1, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm u_2 = NULL,w_2 = NULL;
  t = term_l_9;
  u_2 = t;
  t = term_m_9;
  w_2 = t;
  t = term_n_9;
  t = w_5(u_2, w_2, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm x_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_10;
      }
  }
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm t_3 = NULL,x_3 = NULL,z_3 = NULL;
  z_3 = t;
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_0 = NULL,o_0 = NULL,q_0 = NULL,w_0 = NULL,z_0 = NULL,c_1 = NULL,e_3 = NULL,b_3 = NULL;
            t = SSLgetAnnotations(z_3);
            q_0 = t;
            t = t_3;
            if(match_cons(t, sym_Tool_1))
              {
                z_0 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_3);
            w_0 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, z_0);
            b_3 = t;
            t = SSLsetAnnotations(b_3, w_0);
            c_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_1, x_3);
            e_3 = t;
            t = SSLsetAnnotations(e_3, q_0);
            if(match_cons(t, sym__2))
              {
                ATerm a_11 = ATgetArgument(t, 0);
                if(match_cons(a_11, sym_Tool_1))
                  {
                    i_0 = ATgetArgument(a_11, 0);
                  }
                else
                  _fail(t);
                o_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_5(i_0, o_0, t);
            ;
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            t = z_3;
          }
      }
    }
  else
    {
      t = z_3;
    }
  return(t);
}
ATerm all_query_0_0 (ATerm t)
{
  t = term_b_11;
  t = get_config_0_0(t);
  t = repeat_1_0(f_1, t);
  t = term_l_9;
  t = table_getlist_0_0(t);
  t = map_1_0(h_1, t);
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm d_4 = NULL,k_4 = NULL,n_4 = NULL;
  t = term_c_11;
  t = get_config_0_0(t);
  t = xtc_location_0_0(t);
  d_4 = t;
  t = term_d_10;
  k_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_10), d_4), term_d_11);
  n_4 = t;
  t = SSL_print(k_4, n_4);
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_10), d_4), term_d_11));
  return(t);
}
ATerm b_5 (ATerm d_46, ATerm e_46, ATerm t)
{
  ATerm q_4 = NULL;
  t = SSL_write_term_to_stream_baf(d_46, e_46);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_4);
  return(t);
}
ATerm c_5 (ATerm k_90 (ATerm), ATerm k_425, ATerm l_46, ATerm t)
{
  ATerm r_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_425, term_e_11);
  t = open_stream_0_0(t);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_4, l_46);
  t = k_90(t);
  t = fclose_0_0(t);
  t = l_46;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
  t_4 = t;
  t = term_f_11;
  u_4 = t;
  t = (ATerm) ATinsert(ATempty, term_i_11);
  v_4 = t;
  t = SSL_printnl(u_4, v_4);
  t = t_4;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm f_6 = NULL,l_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      if(match_cons(j_11, sym_Stream_1))
        {
          f_6 = ATgetArgument(j_11, 0);
        }
      else
        _fail(t);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(f_6, l_6, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_l_11;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_1, t);
  t = term_m_11;
  t = get_config_0_0(t);
  {
    ATerm n_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 = NULL,z_4 = NULL;
            w_4 = t;
            t = (ATerm) ATinsert(ATempty, term_t_11);
            z_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_4, (ATerm) ATinsert(ATempty, term_t_11));
            t = u_5(w_4, z_4, t);
            LocalPopChoice(r_11);
            {
              ATerm l_5 = NULL,n_5 = NULL;
              l_5 = t;
              t = (ATerm) ATinsert(ATempty, term_u_11);
              n_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_5, (ATerm) ATinsert(ATempty, term_u_11));
              t = u_5(l_5, n_5, t);
            }
          }
        else
          {
            t = q_11;
          }
        LocalPopChoice(p_11);
        {
          ATerm y_5 = NULL,a_6 = NULL;
          a_6 = t;
          t = term_l_9;
          t = table_getlist_0_0(t);
          y_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_6, y_5);
          t = c_5(j_1, a_6, y_5, t);
        }
      }
    else
      {
        t = n_11;
        t = debug_1_0(n_1, t);
        _fail(t);
      }
  }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
  t = term_x_11;
  t = get_config_0_0(t);
  t = if_verbose2_1_0(p_1, t);
  t = term_x_11;
  t = get_config_0_0(t);
  m_6 = t;
  t = if_verbose5_1_0(t_1, t);
  t = term_l_9;
  n_6 = t;
  t = term_m_9;
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_9, term_m_9, m_6);
  t = d_5(n_6, o_6, m_6, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm a_7 = NULL;
  if(match_cons(t, sym__2))
    {
      a_7 = ATgetArgument(t, 0);
      if((a_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm k_52, ATerm l_52, ATerm j_52, ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_12 = ATgetArgument(t, 0);
            ATerm b_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
        t = w_5(k_52, l_52, t);
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = (ATerm) ATempty;
      }
    u_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_52, u_6);
    t = p_5(x_1, j_52, u_6, t);
    t_6 = t;
    t = SSL_table_put(k_52, l_52, t_6);
    t = s_6;
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm c_7 = NULL;
  c_7 = t;
  {
    ATerm c_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_7 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        g_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_7, term_g_12);
        t = geq_0_0(t);
        t = c_7;
        t = a_99(t);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = c_12;
        t = c_7;
      }
  }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  t = term_f_11;
  w_7 = t;
  t = (ATerm) ATinsert(ATempty, term_h_12);
  x_7 = t;
  t = SSL_printnl(w_7, x_7);
  t = v_7;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_j_12;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm i_7 = NULL,r_7 = NULL,s_7 = NULL;
  ATerm k_2 (ATerm t)
  {
    ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
    z_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_7), term_n_12), not_null(s_7));
    i_8 = t;
    t = SSL_concat_strings(i_8);
    y_7 = t;
    t = term_l_9;
    a_8 = t;
    t = (ATerm) ATmakeAppl(sym_Tool_1, z_7);
    g_8 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(r_7), y_7));
    h_8 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_l_9, (ATerm)ATmakeAppl(sym_Tool_1, z_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(r_7), y_7)));
    t = d_5(a_8, g_8, h_8, t);
    return(t);
  }
  t = term_i_10;
  t = get_config_0_0(t);
  if(((i_7 != NULL) && (i_7 != t)))
    _fail(t);
  else
    i_7 = t;
  t = if_verbose1_1_0(y_1, t);
  t = if_verbose2_1_0(z_1, t);
  t = term_g_9;
  t = get_config_0_0(t);
  if(((r_7 != NULL) && (r_7 != t)))
    _fail(t);
  else
    r_7 = t;
  t = if_verbose2_1_0(c_2, t);
  t = term_q_10;
  t = get_config_0_0(t);
  if(((s_7 != NULL) && (s_7 != t)))
    _fail(t);
  else
    s_7 = t;
  t = if_verbose2_1_0(e_2, t);
  t = not_null(i_7);
  t = map_1_0(k_2, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm k_8 = NULL;
  k_8 = t;
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_8 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_8, term_q_12);
        t = geq_0_0(t);
        t = k_8;
        t = b_99(t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = k_8;
      }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm t_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_8 = NULL,b_9 = NULL,d_9 = NULL;
      t = term_r_12;
      t = l_0(t);
      z_8 = t;
      t = term_s_12;
      b_9 = t;
      t = term_t_12;
      d_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_12, term_t_12, z_8);
      t = f_5(b_9, d_9, z_8, t);
      _fail(t);
    }
  else
    {
      ATerm o_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_8 = ATgetFirst((ATermList) t);
          w_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_8;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_8 = ATgetFirst((ATermList) t);
          y_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_8;
      t = j_0(t);
      t = x_8;
      t = k_0(t);
      o_9 = t;
      t = (ATerm) ATinsert(CheckATermList(y_8), o_9);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  ATerm w_10 (ATerm t)
  {
    ATerm n_10 = NULL,o_10 = NULL,t_10 = NULL;
    t_10 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_10 = ATgetFirst((ATermList) t);
        o_10 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_1 = NULL,a_2 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(t_10);
          v_1 = t;
          t = o_10;
          t = w_10(t);
          a_2 = t;
          t = (ATerm) ATinsert(CheckATermList(a_2), n_10);
          i_3 = t;
          t = SSLsetAnnotations(i_3, v_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_10;
        t = j_78(t);
      }
    return(t);
  }
  t = w_10(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
  q_9 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_9;
    }
  else
    {
      ATerm o_2 (ATerm t)
      {
        t = not_null(s_9);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_9 != NULL) && (r_9 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_9 = ATgetFirst((ATermList) t);
          if(((s_9 != NULL) && (s_9 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(r_9);
      t = at_end_1_0(o_2, t);
    }
  return(t);
}
ATerm d_12 (ATerm g_11, ATerm t)
{
  ATerm h_11 = NULL;
  t = SSL_explode_term(g_11);
  if(match_cons(t, sym__2))
    {
      ATerm u_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_11 = NULL,o_11 = NULL,s_11 = NULL;
  if(((s_11 != NULL) && (s_11 != t)))
    _fail(t);
  else
    s_11 = t;
  if(match_cons(t, sym__2))
    {
      k_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              t = not_null(o_11);
              return(t);
            }
            t = not_null(k_11);
            t = at_end_1_0(q_2, t);
            ;
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            t = d_12(not_null(s_11), t);
          }
      }
    }
  else
    {
      t = d_12(not_null(s_11), t);
    }
  return(t);
}
ATerm e_5 (ATerm r_56, ATerm q_56, ATerm t)
{
  ATerm f_12 = NULL,i_12 = NULL,m_12 = NULL;
  t = r_56;
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = (ATerm) ATempty;
      }
    i_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_56, i_12);
    t = conc_0_0(t);
    f_12 = t;
    t = term_z_12;
    m_12 = t;
    t = SSL_table_put(m_12, r_56, f_12);
    t = (ATerm) ATmakeAppl(sym__3, term_z_12, r_56, f_12);
  }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm f_13 = NULL;
  f_13 = t;
  if(match_string(t, "-r"))
    {
      t = f_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = f_13;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm g_13 = NULL,i_13 = NULL;
  g_13 = t;
  t = term_m_11;
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_11, g_13);
  t = h_5(i_13, g_13, t);
  t = g_13;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_a_13;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  if(match_string(t, "i"))
    {
      t = l_13;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = l_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = l_13;
        }
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm n_13 = NULL,r_13 = NULL,t_13 = NULL;
  n_13 = t;
  t = term_x_11;
  r_13 = t;
  t = (ATerm) ATinsert(ATempty, n_13);
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATempty, n_13));
  t = e_5(r_13, t_13, t);
  t = n_13;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  if(match_string(t, "r"))
    {
      t = u_13;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = u_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = u_13;
        }
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL;
  v_13 = t;
  t = term_c_13;
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, v_13);
  t = h_5(w_13, v_13, t);
  t = v_13;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_d_13;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm x_13 = NULL;
  x_13 = t;
  if(match_string(t, "-t"))
    {
      t = x_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = x_13;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  z_13 = t;
  t = term_i_10;
  a_14 = t;
  t = (ATerm) ATinsert(ATempty, z_13);
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, (ATerm) ATinsert(ATempty, z_13));
  t = e_5(a_14, b_14, t);
  t = z_13;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm f_14 = NULL;
  f_14 = t;
  if(match_string(t, "-l"))
    {
      t = f_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = f_14;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  g_14 = t;
  t = term_q_10;
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_10, g_14);
  t = h_5(h_14, g_14, t);
  t = g_14;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  if(match_string(t, "-V"))
    {
      t = i_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = i_14;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm j_14 = NULL,m_14 = NULL;
  j_14 = t;
  t = term_g_9;
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, j_14);
  t = h_5(m_14, j_14, t);
  t = j_14;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  if(match_string(t, "q"))
    {
      t = p_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = p_14;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  q_14 = t;
  t = term_k_13;
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_13, q_14);
  t = h_5(r_14, q_14, t);
  t = q_14;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm s_14 = NULL;
  s_14 = t;
  if(match_string(t, "-a"))
    {
      t = s_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = s_14;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm w_14 = NULL,z_14 = NULL,g_15 = NULL;
  w_14 = t;
  t = term_b_11;
  z_14 = t;
  t = term_r_12;
  g_15 = t;
  t = term_o_13;
  t = h_5(z_14, g_15, t);
  t = w_14;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm h_15 = NULL;
  h_15 = t;
  if(match_string(t, "-L"))
    {
      t = h_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = h_15;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm i_15 = NULL,l_15 = NULL,m_15 = NULL;
  i_15 = t;
  t = term_q_10;
  l_15 = t;
  t = term_r_12;
  m_15 = t;
  t = term_q_13;
  t = h_5(l_15, m_15, t);
  t = i_15;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm n_15 = NULL;
  n_15 = t;
  if(match_string(t, "-R"))
    {
      t = n_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = n_15;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,w_15 = NULL;
  r_15 = t;
  t = term_c_11;
  s_15 = t;
  t = term_r_12;
  w_15 = t;
  t = term_y_13;
  t = h_5(s_15, w_15, t);
  t = r_15;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm x_15 = NULL,z_15 = NULL,a_16 = NULL;
  x_15 = t;
  t = SSL_string_to_int(x_15);
  z_15 = t;
  t = term_j_9;
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, z_15);
  t = h_5(a_16, z_15, t);
  t = x_15;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm e_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(s_2, t_2, v_2, t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = e_14;
      {
        ATerm l_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_2, z_2, a_3, t);
            ;
            LocalPopChoice(n_14);
          }
        else
          {
            t = l_14;
            {
              ATerm o_14 = t;
              int t_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(c_3, d_3, f_3, t);
                  ;
                  LocalPopChoice(t_14);
                }
              else
                {
                  t = o_14;
                  {
                    ATerm u_14 = t;
                    int v_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(g_3, j_3, k_3, t);
                        ;
                        LocalPopChoice(v_14);
                      }
                    else
                      {
                        t = u_14;
                        {
                          ATerm x_14 = t;
                          int y_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(m_3, o_3, p_3, t);
                              ;
                              LocalPopChoice(y_14);
                            }
                          else
                            {
                              t = x_14;
                              {
                                ATerm a_15 = t;
                                int b_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(r_3, u_3, v_3, t);
                                    ;
                                    LocalPopChoice(b_15);
                                  }
                                else
                                  {
                                    t = a_15;
                                    {
                                      ATerm c_15 = t;
                                      int d_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(w_3, y_3, a_4, t);
                                          ;
                                          LocalPopChoice(d_15);
                                        }
                                      else
                                        {
                                          t = c_15;
                                          {
                                            ATerm e_15 = t;
                                            int f_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(b_4, c_4, e_4, t);
                                                ;
                                                LocalPopChoice(f_15);
                                              }
                                            else
                                              {
                                                t = e_15;
                                                {
                                                  ATerm j_15 = t;
                                                  int k_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(f_4, h_4, i_4, t);
                                                      ;
                                                      LocalPopChoice(k_15);
                                                    }
                                                  else
                                                    {
                                                      t = j_15;
                                                      {
                                                        ATerm o_15 = t;
                                                        int p_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(l_4, m_4, o_4, t);
                                                            ;
                                                            LocalPopChoice(p_15);
                                                          }
                                                        else
                                                          {
                                                            t = o_15;
                                                            t = ArgOption_3_0(p_4, s_4, x_4, t);
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
  ATerm c_16 = NULL,d_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_16 = ATgetFirst((ATermList) t);
      d_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_16 = NULL,l_16 = NULL;
        ATerm y_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_16)), not_null(l_16));
          return(t);
        }
        t = not_null(d_16);
        t = h_0(t);
        if(((j_16 != NULL) && (j_16 != t)))
          _fail(t);
        else
          j_16 = t;
        t = not_null(c_16);
        t = g_0(t);
        if(((l_16 != NULL) && (l_16 != t)))
          _fail(t);
        else
          l_16 = t;
        t = not_null(d_16);
        t = reverse_acc_2_0(g_0, y_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_12;
      t = h_0(t);
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,n_3 = NULL;
  v_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_16);
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_16);
  n_3 = t;
  t = SSLsetAnnotations(n_3, t_16);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm g_17 = NULL;
  g_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_17), term_q_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
      t = fetch_1_0(g_5, t);
    }
  {
    ATerm y_15 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_16), term_f_16), term_e_16);
        t = echo_0_0(t);
        ;
        LocalPopChoice(b_16);
      }
    else
      {
        t = y_15;
      }
    t = term_h_16;
    t = echo_0_0(t);
    t = term_s_12;
    r_16 = t;
    t = term_t_12;
    s_16 = t;
    t = term_i_16;
    t = w_5(r_16, s_16, t);
    t = reverse_acc_2_0(_id, i_5, t);
    t = map_1_0(m_5, t);
    {
      ATerm k_16 = t;
      int m_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_16), term_n_16), term_h_10);
          t = echo_0_0(t);
          ;
          LocalPopChoice(m_16);
        }
      else
        {
          t = k_16;
        }
    }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,t_17 = NULL;
  l_17 = t;
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_16 = ATgetFirst((ATermList) t);
                ATerm x_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_17;
          }
        ;
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        t = (ATerm) ATinsert(ATempty, l_17);
      }
    m_17 = t;
    t = term_d_10;
    t_17 = t;
    t = SSL_printnl(t_17, m_17);
    t = l_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_15;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  t = term_y_16;
  d_18 = t;
  t = term_r_12;
  e_18 = t;
  t = term_z_16;
  t = h_5(d_18, e_18, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_a_17;
  return(t);
}
ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  t = term_y_16;
  h_18 = t;
  t = term_r_12;
  i_18 = t;
  t = term_z_16;
  t = h_5(h_18, i_18, t);
  t = term_b_17;
  f_18 = t;
  t = term_r_12;
  g_18 = t;
  t = term_c_17;
  t = h_5(f_18, g_18, t);
  t = term_d_17;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_5, z_5, b_6, t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = f_17;
      t = Option_3_0(c_6, d_6, e_6, t);
    }
  return(t);
}
ATerm h_5 (ATerm l_56, ATerm m_56, ATerm t)
{
  ATerm j_18 = NULL;
  t = term_z_12;
  j_18 = t;
  t = SSL_table_put(j_18, l_56, m_56);
  t = (ATerm) ATmakeAppl(sym__3, term_z_12, l_56, m_56);
  return(t);
}
ATerm f_5 (ATerm s_51, ATerm t_51, ATerm r_51, ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_51, t_51);
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_17 = ATgetArgument(t, 0);
            ATerm n_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_51, t_51);
        t = w_5(s_51, t_51, t);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = (ATerm) ATempty;
      }
    m_18 = t;
    t = (ATerm) ATinsert(CheckATermList(m_18), r_51);
    n_18 = t;
    t = SSL_table_put(s_51, t_51, n_18);
    t = l_18;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,w_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
      t = term_r_12;
      t = d_0(t);
      x_18 = t;
      t = term_s_12;
      y_18 = t;
      t = term_t_12;
      z_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_12, term_t_12, x_18);
      t = f_5(y_18, z_18, x_18, t);
      _fail(t);
    }
  else
    {
      ATerm e_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_18 = ATgetFirst((ATermList) t);
          w_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_18;
      t = a_0(t);
      t = term_r_12;
      t = b_0(t);
      e_19 = t;
      t = (ATerm) ATinsert(CheckATermList(w_18), e_19);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,m_19 = NULL,q_3 = NULL;
  m_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_19 = ATgetFirst((ATermList) t);
      h_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_19);
  f_19 = t;
  t = g_19;
  t = g_64(t);
  i_19 = t;
  t = h_19;
  t = h_64(t);
  j_19 = t;
  t = (ATerm) ATinsert(CheckATermList(j_19), i_19);
  q_3 = t;
  t = SSLsetAnnotations(q_3, f_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,y_19 = NULL,z_19 = NULL,s_3 = NULL;
  if(((r_19 != NULL) && (r_19 != t)))
    _fail(t);
  else
    r_19 = t;
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_17;
        t = l_95(t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
      }
    t = not_null(r_19);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_19 != NULL) && (t_19 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_19 = ATgetFirst((ATermList) t);
        if(((u_19 != NULL) && (u_19 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          u_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(r_19));
    if(((s_19 != NULL) && (s_19 != t)))
      _fail(t);
    else
      s_19 = t;
    t = term_v_15;
    if(((z_19 != NULL) && (z_19 != t)))
      _fail(t);
    else
      z_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_15, not_null(t_19));
    t = h_5(not_null(z_19), not_null(t_19), t);
    t = not_null(u_19);
    {
      ATerm j_20 (ATerm t)
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_17 = t;
            int v_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_20 = NULL;
                c_20 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_20;
                ;
                LocalPopChoice(v_17);
              }
            else
              {
                t = u_17;
                t = l_95(t);
                t = Cons_2_0(_id, j_20, t);
              }
            ;
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            {
              ATerm f_20 = NULL,g_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_20 = ATgetFirst((ATermList) t);
                  g_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_20), (ATerm) ATmakeAppl(sym_Undefined_1, f_20));
            }
          }
        return(t);
      }
      t = j_20(t);
      if(((y_19 != NULL) && (y_19 != t)))
        _fail(t);
      else
        y_19 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(y_19)), (ATerm) ATmakeAppl(sym_Program_1, not_null(t_19)));
      if(((s_3 != NULL) && (s_3 != t)))
        _fail(t);
      else
        s_3 = t;
      t = SSLsetAnnotations(not_null(s_3), not_null(s_19));
    }
  }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  if(match_string(t, "--help"))
    {
      t = y_20;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_20;
        }
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm z_20 = NULL,d_21 = NULL;
  t = term_w_17;
  z_20 = t;
  t = term_r_12;
  d_21 = t;
  t = term_x_17;
  t = h_5(z_20, d_21, t);
  t = term_y_17;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,w_20 = NULL,x_20 = NULL;
  if(((r_20 != NULL) && (r_20 != t)))
    _fail(t);
  else
    r_20 = t;
  t = term_s_12;
  if(((t_20 != NULL) && (t_20 != t)))
    _fail(t);
  else
    t_20 = t;
  t = term_t_12;
  if(((w_20 != NULL) && (w_20 != t)))
    _fail(t);
  else
    w_20 = t;
  t = (ATerm) ATempty;
  if(((x_20 != NULL) && (x_20 != t)))
    _fail(t);
  else
    x_20 = t;
  t = SSL_table_put(not_null(t_20), not_null(w_20), not_null(x_20));
  t = not_null(r_20);
  {
    ATerm g_6 (ATerm t)
    {
      ATerm a_18 = t;
      int b_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_95(t);
          ;
          LocalPopChoice(b_18);
        }
      else
        {
          t = a_18;
          {
            ATerm c_18 = t;
            int k_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_6, j_6, p_6, t);
                ;
                LocalPopChoice(k_18);
              }
            else
              {
                t = c_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_6, t);
    {
      ATerm o_18 = t;
      int p_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_21 = NULL;
          p_21 = t;
          {
            ATerm q_18 = t;
            int r_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_2 = NULL;
                t = p_21;
                {
                  ATerm s_18 = t;
                  int u_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_w_17;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_18);
                    }
                  else
                    {
                      t = s_18;
                      t = fetch_1_0(q_6, t);
                    }
                  t = p_21;
                  t = default_system_usage_0_0(t);
                  t = term_v_18;
                  r_2 = t;
                  t = SSL_exit(r_2);
                }
                ;
                LocalPopChoice(r_18);
              }
            else
              {
                t = q_18;
                {
                  ATerm x_2 = NULL;
                  t = term_y_16;
                  t = get_config_0_0(t);
                  t = p_21;
                  t = default_system_about_0_0(t);
                  t = term_v_18;
                  x_2 = t;
                  t = SSL_exit(x_2);
                }
              }
          }
          ;
          LocalPopChoice(p_18);
        }
      else
        {
          t = o_18;
          {
            ATerm a_19 = t;
            int b_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_21 = NULL,y_21 = NULL,a_22 = NULL;
                ATerm r_6 (ATerm t)
                {
                  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,c_10 = NULL;
                  d_22 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      c_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_22);
                  b_22 = t;
                  t = c_22;
                  if(((p_20 != NULL) && (p_20 != t)))
                    _fail(t);
                  else
                    p_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, c_22);
                  c_10 = t;
                  t = SSLsetAnnotations(c_10, b_22);
                  return(t);
                }
                t = fetch_1_0(r_6, t);
                t = term_f_11;
                if(((y_21 != NULL) && (y_21 != t)))
                  _fail(t);
                else
                  y_21 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_20)), term_c_19);
                if(((a_22 != NULL) && (a_22 != t)))
                  _fail(t);
                else
                  a_22 = t;
                t = SSL_printnl(not_null(y_21), not_null(a_22));
                t = (ATerm) ATmakeAppl(sym__2, term_f_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_20)), term_c_19));
                t = default_system_usage_0_0(t);
                t = term_g_12;
                if(((r_21 != NULL) && (r_21 != t)))
                  _fail(t);
                else
                  r_21 = t;
                t = SSL_exit(not_null(r_21));
                ;
                LocalPopChoice(b_19);
              }
            else
              {
                t = a_19;
              }
          }
        }
      if(((q_20 != NULL) && (q_20 != t)))
        _fail(t);
      else
        q_20 = t;
      t = term_s_12;
      if(((s_20 != NULL) && (s_20 != t)))
        _fail(t);
      else
        s_20 = t;
      t = SSL_table_destroy(not_null(s_20));
      t = not_null(q_20);
    }
  }
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = debug_1_0(w_6, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_k_19;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm l_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_22 = NULL;
      t = parse_options_1_0(xtc_options_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(v_6, t);
      t = xtc_read_0_0(t);
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_19 = t;
            int v_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_c_13;
                t = get_config_0_0(t);
                t = xtc_register_0_0(t);
                ;
                LocalPopChoice(v_19);
              }
            else
              {
                t = q_19;
                t = term_x_11;
                t = get_config_0_0(t);
                t = register_import_0_0(t);
              }
            t = xtc_store_0_0(t);
            ;
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            t = term_k_13;
            t = get_config_0_0(t);
            {
              ATerm w_19 = t;
              int x_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = repository_query_0_0(t);
                  ;
                  LocalPopChoice(x_19);
                }
              else
                {
                  t = w_19;
                  {
                    ATerm a_20 = t;
                    int b_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = all_query_0_0(t);
                        ;
                        LocalPopChoice(b_20);
                      }
                    else
                      {
                        t = a_20;
                        t = tool_query_0_0(t);
                      }
                  }
                }
            }
          }
        t = term_v_18;
        k_22 = t;
        t = SSL_exit(k_22);
      }
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = l_19;
      t = debug_1_0(x_6, t);
    }
  return(t);
}
ATerm j_5 (ATerm o_59, ATerm p_59, ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  t = p_59;
  t = map_1_0(xtc_find_0_0, t);
  m_22 = t;
  t = term_d_10;
  u_22 = t;
  t = SSL_print(u_22, m_22);
  t = term_d_10;
  s_22 = t;
  t = (ATerm) ATinsert(ATempty, term_h_10);
  t_22 = t;
  t = SSL_print(s_22, t_22);
  t = term_v_18;
  n_22 = t;
  t = SSL_exit(n_22);
  return(t);
}
ATerm k_5 (ATerm w_47, ATerm x_47, ATerm t)
{
  t = SSL_execvp(w_47, x_47);
  return(t);
}
ATerm debug_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,a_23 = NULL;
  v_22 = t;
  t = i_90(t);
  w_22 = t;
  t = term_f_11;
  x_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_22), w_22);
  a_23 = t;
  t = SSL_printnl(x_22, a_23);
  t = v_22;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm b_23 = NULL;
  ATerm y_6 (ATerm t)
  {
    ATerm c_23 = NULL,d_23 = NULL;
    c_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_23), c_23);
    t = w_5(not_null(b_23), c_23, t);
    d_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_23, d_23);
    return(t);
  }
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  t = SSL_table_keys(not_null(b_23));
  t = map_1_0(y_6, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm j_23 = NULL;
  j_23 = t;
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_23 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        l_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_23, term_h_20);
        t = geq_0_0(t);
        t = j_23;
        t = e_99(t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = j_23;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm d_78 (ATerm), ATerm t)
{
  ATerm d_25 (ATerm t)
  {
    ATerm z_24 = NULL,a_25 = NULL,c_25 = NULL;
    z_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_25 = ATgetFirst((ATermList) t);
        c_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_20 = t;
      int k_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_3 = NULL,l_3 = NULL,f_10 = NULL;
          t = SSLgetAnnotations(z_24);
          h_3 = t;
          t = a_25;
          t = d_78(t);
          l_3 = t;
          t = (ATerm) ATinsert(CheckATermList(c_25), l_3);
          f_10 = t;
          t = SSLsetAnnotations(f_10, h_3);
          ;
          LocalPopChoice(k_20);
        }
      else
        {
          t = i_20;
          {
            ATerm g_4 = NULL,j_4 = NULL,g_10 = NULL;
            t = SSLgetAnnotations(z_24);
            g_4 = t;
            t = c_25;
            t = d_25(t);
            j_4 = t;
            t = (ATerm) ATinsert(CheckATermList(j_4), a_25);
            g_10 = t;
            t = SSLsetAnnotations(g_10, g_4);
          }
        }
    }
    return(t);
  }
  t = d_25(t);
  return(t);
}
ATerm w_5 (ATerm j_53, ATerm k_53, ATerm t)
{
  t = SSL_table_get(j_53, k_53);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_25 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        r_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_25, term_n_20);
        t = geq_0_0(t);
        t = n_25;
        t = d_99(t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = n_25;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  if(match_cons(t, sym__2))
    {
      e_26 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_26;
        if((e_26 != t))
          {
            _fail(t);
          }
        t = d_26;
        ;
        LocalPopChoice(u_20);
      }
    else
      {
        t = o_20;
        t = (ATerm) ATmakeAppl(sym__2, e_26, f_26);
        {
          ATerm v_20 = t;
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_26, f_26);
              ;
              LocalPopChoice(a_21);
            }
          else
            {
              t = v_20;
              t = SSL_gtr(e_26, f_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_26, f_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_99 (ATerm), ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_26 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        l_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_26, term_e_21);
        t = geq_0_0(t);
        t = j_26;
        t = f_99(t);
        ;
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        t = j_26;
      }
  }
  return(t);
}
ATerm o_5 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm y_29, ATerm x_29, ATerm t)
{
  t = b_82(t);
  {
    ATerm z_6 (ATerm t)
    {
      ATerm n_26 = NULL;
      n_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_29), n_26);
      t = a_82(t);
      return(t);
    }
    t = fetch_1_0(z_6, t);
    t = not_null(x_29);
  }
  return(t);
}
ATerm p_5 (ATerm x_81 (ATerm), ATerm u_29, ATerm t_29, ATerm t)
{
  ATerm g_27 (ATerm t)
  {
    ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
    y_26 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(t_29);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_26 = ATgetFirst((ATermList) t);
            a_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_21 = t;
          int g_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_26;
              {
                ATerm b_7 (ATerm t)
                {
                  t = not_null(t_29);
                  return(t);
                }
                t = o_5(x_81, b_7, not_null(z_26), not_null(a_27), t);
                t = g_27(t);
              }
              ;
              LocalPopChoice(g_21);
            }
          else
            {
              t = f_21;
              {
                ATerm h_6 = NULL,k_6 = NULL,j_10 = NULL;
                t = SSLgetAnnotations(y_26);
                h_6 = t;
                t = a_27;
                t = g_27(t);
                k_6 = t;
                t = (ATerm) ATinsert(CheckATermList(k_6), z_26);
                j_10 = t;
                t = SSLsetAnnotations(j_10, h_6);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(u_29);
  t = g_27(t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm s_27 = NULL;
  if(match_cons(t, sym__2))
    {
      s_27 = ATgetArgument(t, 0);
      if((s_27 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm p_52, ATerm q_52, ATerm r_52, ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            ATerm k_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
        t = w_5(p_52, q_52, t);
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = (ATerm) ATempty;
      }
    m_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_27, r_52);
    t = p_5(d_7, m_27, r_52, t);
    l_27 = t;
    t = SSL_table_put(p_52, q_52, l_27);
    t = k_27;
  }
  return(t);
}
ATerm r_5 (ATerm o_95 (ATerm), ATerm z_52, ATerm y_52, ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm t_27 = NULL,u_27 = NULL;
    if(match_cons(t, sym__2))
      {
        t_27 = ATgetArgument(t, 0);
        u_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(z_52), t_27, u_27);
    t = o_95(t);
    return(t);
  }
  t = not_null(y_52);
  t = map_1_0(e_7, t);
  return(t);
}
ATerm u_5 (ATerm n_42, ATerm o_42, ATerm t)
{
  t = SSL_access(n_42, o_42);
  return(t);
}
ATerm i_28 (ATerm c_28, ATerm t)
{
  t = SSL_fclose(c_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  g_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_28 = ATgetArgument(t, 0);
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_28);
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = i_28(g_28, t);
          }
      }
    }
  else
    {
      t = i_28(g_28, t);
    }
  return(t);
}
ATerm s_5 (ATerm j_46, ATerm t)
{
  t = SSL_read_term_from_stream(j_46);
  return(t);
}
ATerm t_5 (ATerm v_42, ATerm w_42, ATerm t)
{
  ATerm j_28 = NULL;
  t = SSL_fopen(v_42, w_42);
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_28 = NULL;
  t = SSL_stdin_stream();
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_28 = NULL;
  t = SSL_stdout_stream();
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_28);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_28 = NULL;
  t = SSL_stderr_stream();
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_28);
  return(t);
}
ATerm v_29 (ATerm s_28, ATerm t)
{
  ATerm t_28 = NULL;
  t = SSL_explode_term(s_28);
  if(match_cons(t, sym__2))
    {
      ATerm n_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_21 = ATgetArgument(t, 1);
        if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
          {
            t_28 = ATgetFirst((ATermList) o_21);
            {
              ATerm q_21 = (ATerm) ATgetNext((ATermList) o_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_28;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_28;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_28;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_28;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_29 (ATerm w_28, ATerm x_28, ATerm y_28, ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,e_29 = NULL,l_10 = NULL;
  t = SSLgetAnnotations(y_28);
  b_29 = t;
  t = w_28;
  if(match_cons(t, sym_Path_1))
    {
      e_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_29, x_28);
  l_10 = t;
  t = SSLsetAnnotations(l_10, b_29);
  if(match_cons(t, sym__2))
    {
      z_28 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(z_28, a_29, t);
  return(t);
}
ATerm a_30 (ATerm g_29, ATerm h_29, ATerm i_29, ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,o_29 = NULL,m_10 = NULL;
  t = SSLgetAnnotations(i_29);
  l_29 = t;
  t = SSL_is_string(g_29);
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_29, h_29);
  m_10 = t;
  t = SSLsetAnnotations(m_10, l_29);
  if(match_cons(t, sym__2))
    {
      j_29 = ATgetArgument(t, 0);
      k_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(j_29, k_29, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      ATerm t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  q_29 = t;
  if(match_cons(t, sym__2))
    {
      r_29 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_29(q_29, t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            {
              ATerm w_21 = t;
              int x_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_29(r_29, s_29, q_29, t);
                  ;
                  LocalPopChoice(x_21);
                }
              else
                {
                  t = w_21;
                  t = a_30(r_29, s_29, q_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_29(q_29, t);
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_30 = NULL;
      e_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_30, term_g_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      t = debug_1_0(f_7, t);
      _fail(t);
    }
  c_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(d_30, t);
  b_30 = t;
  t = c_30;
  t = fclose_0_0(t);
  t = b_30;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm j_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_30 = NULL,h_30 = NULL;
      g_30 = t;
      t = (ATerm) ATinsert(ATempty, term_o_22);
      h_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_30, (ATerm) ATinsert(ATempty, term_o_22));
      t = u_5(g_30, h_30, t);
      LocalPopChoice(l_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = j_22;
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_22 = t;
            if((PushChoice() == 0))
              {
                ATerm i_30 = NULL,j_30 = NULL;
                i_30 = t;
                t = (ATerm) ATinsert(ATempty, term_t_11);
                j_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_30, (ATerm) ATinsert(ATempty, term_t_11));
                t = u_5(i_30, j_30, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_22;
              }
            t = debug_1_0(h_7, t);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = debug_1_0(j_7, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = debug_1_0(l_7, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = debug_1_0(n_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_z_22;
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  t = term_f_11;
  x_30 = t;
  t = (ATerm) ATinsert(ATempty, term_e_23);
  y_30 = t;
  t = SSL_printnl(x_30, y_30);
  t = w_30;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  if(match_cons(t, sym__3))
    {
      z_30 = ATgetArgument(t, 0);
      a_31 = ATgetArgument(t, 1);
      b_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_5(z_30, a_31, b_31, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  c_31 = t;
  t = term_f_11;
  d_31 = t;
  t = (ATerm) ATinsert(ATempty, term_f_23);
  e_31 = t;
  t = SSL_printnl(d_31, e_31);
  t = c_31;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  t = term_f_11;
  g_31 = t;
  t = (ATerm) ATinsert(ATempty, term_e_23);
  h_31 = t;
  t = SSL_printnl(g_31, h_31);
  t = f_31;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  k_30 = t;
  t = if_verbose5_1_0(k_7, t);
  {
    ATerm g_23 = t;
    if((PushChoice() == 0))
      {
        ATerm u_30 = NULL,v_30 = NULL;
        t = term_l_9;
        u_30 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, k_30);
        v_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATmakeAppl(sym_Imported_1, k_30));
        t = w_5(u_30, v_30, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_23;
      }
    m_30 = t;
    t = term_l_9;
    r_30 = t;
    t = term_h_23;
    s_30 = t;
    t = (ATerm) ATinsert(ATempty, k_30);
    t_30 = t;
    t = SSL_table_put(r_30, s_30, t_30);
    t = m_30;
    t = if_verbose4_1_0(m_7, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(p_7, t);
    l_30 = t;
    t = term_l_9;
    q_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_9, l_30);
    t = r_5(q_7, q_30, l_30, t);
    t = if_verbose6_1_0(b_8, t);
    t = term_l_9;
    n_30 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, k_30);
    o_30 = t;
    t = (ATerm) ATempty;
    p_30 = t;
    t = SSL_table_put(n_30, o_30, p_30);
    t = (ATerm) ATmakeAppl(sym__3, term_l_9, (ATerm)ATmakeAppl(sym_Imported_1, k_30), (ATerm) ATempty);
    t = if_verbose4_1_0(c_8, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_31;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_31 = ATgetFirst((ATermList) t);
          v_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 = NULL,t_7 = NULL,u_7 = NULL,r_10 = NULL;
            t = SSLgetAnnotations(t_31);
            o_7 = t;
            t = u_31;
            t = z_84(t);
            t_7 = t;
            t = v_31;
            t = filter_1_0(z_84, t);
            u_7 = t;
            t = (ATerm) ATinsert(CheckATermList(u_7), t_7);
            r_10 = t;
            t = SSLsetAnnotations(r_10, o_7);
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = i_23;
            t = v_31;
            t = filter_1_0(z_84, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  ATerm b_32 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_71(t);
        t = b_32(t);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
      }
    return(t);
  }
  t = b_32(t);
  return(t);
}
ATerm v_5 (ATerm j_37, ATerm k_37, ATerm t)
{
  t = SSL_strcat(j_37, k_37);
  return(t);
}
ATerm map_1_0 (ATerm t_77 (ATerm), ATerm t)
{
  ATerm q_32 (ATerm t)
  {
    ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
    n_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_32;
      }
    else
      {
        ATerm o_8 = NULL,u_8 = NULL,v_8 = NULL,u_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_32 = ATgetFirst((ATermList) t);
            p_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_32);
        o_8 = t;
        t = o_32;
        t = t_77(t);
        u_8 = t;
        t = p_32;
        t = q_32(t);
        v_8 = t;
        t = (ATerm) ATinsert(CheckATermList(v_8), u_8);
        u_10 = t;
        t = SSLsetAnnotations(u_10, o_8);
      }
    return(t);
  }
  t = q_32(t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_32 = NULL;
      y_32 = t;
      t = SSL_is_string(y_32);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_8, t);
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            {
              ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
              e_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_33 = ATgetArgument(t, 0);
                  t = f_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_33 = ATgetArgument(t, 0);
                      t = f_33;
                      {
                        ATerm v_23 = t;
                        int w_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(w_23);
                          }
                        else
                          {
                            t = v_23;
                            t = debug_1_0(e_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_33 = NULL,l_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_33 = ATgetArgument(t, 0);
                          g_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_33;
                      t = eval_config_0_0(t);
                      k_33 = t;
                      t = g_33;
                      t = eval_config_0_0(t);
                      l_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
                      t = v_5(k_33, l_33, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL;
  p_33 = t;
  t = term_z_12;
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, p_33);
  t = w_5(q_33, p_33, t);
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_33 = NULL,s_33 = NULL;
        t = eval_config_0_0(t);
        r_33 = t;
        t = term_z_12;
        s_33 = t;
        t = SSL_table_put(s_33, p_33, r_33);
        t = r_33;
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
      }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm b_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_33 = NULL;
            t = term_d_24;
            v_33 = t;
            t = SSL_getenv(v_33);
            ;
            LocalPopChoice(c_24);
          }
        else
          {
            t = b_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = debug_1_0(j_8, t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL;
  t = term_l_9;
  a_34 = t;
  t = term_m_9;
  b_34 = t;
  t = term_n_9;
  t = w_5(a_34, b_34, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm f_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_24;
      }
  }
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = debug_1_0(p_8, t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_g_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm w_33 = NULL;
  t = if_verbose5_1_0(f_8, t);
  w_33 = t;
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_33 = NULL,y_33 = NULL;
        t = term_l_9;
        x_33 = t;
        t = term_h_23;
        y_33 = t;
        t = term_j_24;
        t = w_5(x_33, y_33, t);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm z_33 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          z_33 = t;
          t = repeat_1_0(l_8, t);
          t = z_33;
        }
      }
    t = w_33;
    t = if_verbose5_1_0(n_8, t);
  }
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = debug_1_0(r_8, t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm x_34 (ATerm f_34, ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
  t = term_l_9;
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, f_34);
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATmakeAppl(sym_Tool_1, f_34));
  t = w_5(i_34, j_34, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_24 = ATgetFirst((ATermList) t);
      if(match_cons(l_24, sym__2))
        {
          ATerm n_24 = ATgetArgument(l_24, 0);
          h_34 = ATgetArgument(l_24, 1);
        }
      else
        _fail(t);
      {
        ATerm m_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_34;
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = debug_1_0(c_9, t);
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_l_9;
  t = table_getlist_0_0(t);
  t = debug_1_0(f_9, t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
      t = if_verbose5_1_0(q_8, t);
      t = xtc_load_0_0(t);
      if(((m_34 != NULL) && (m_34 != t)))
        _fail(t);
      else
        m_34 = t;
      if(match_cons(t, sym__2))
        {
          k_34 = ATgetArgument(t, 0);
          l_34 = ATgetArgument(t, 1);
          {
            ATerm r_24 = t;
            int s_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
                t = term_l_9;
                if(((q_34 != NULL) && (q_34 != t)))
                  _fail(t);
                else
                  q_34 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_34));
                if(((r_34 != NULL) && (r_34 != t)))
                  _fail(t);
                else
                  r_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_34)));
                t = w_5(not_null(q_34), not_null(r_34), t);
                {
                  ATerm s_8 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((l_34 != NULL) && (l_34 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          l_34 = ATgetArgument(t, 0);
                        if(((p_34 != NULL) && (p_34 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_34 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(s_8, t);
                  t = not_null(p_34);
                }
                ;
                LocalPopChoice(s_24);
              }
            else
              {
                t = r_24;
                t = x_34(not_null(m_34), t);
              }
          }
        }
      else
        {
          t = x_34(not_null(m_34), t);
        }
      t = if_verbose5_1_0(a_9, t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm w_34 = NULL,a_10 = NULL,b_10 = NULL;
        w_34 = t;
        t = term_f_11;
        a_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_24), w_34), term_t_24);
        b_10 = t;
        t = SSL_printnl(a_10, b_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_24), w_34), term_t_24);
        t = if_verbose5_1_0(e_9, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
      f_35 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_35 = ATgetFirst((ATermList) t);
          h_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_35 = ATgetFirst((ATermList) t);
          j_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_35;
      if(match_string(t, "call"))
        {
          ATerm n_35 = NULL;
          t = j_35;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_35 = ATgetFirst((ATermList) t);
              e_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_35;
          t = xtc_find_0_0(t);
          n_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_35, e_35);
          t = k_5(n_35, e_35, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = f_35;
          t = j_5(g_35, j_35, t);
        }
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      t = xtc_main_0_0(t);
    }
  return(t);
}
