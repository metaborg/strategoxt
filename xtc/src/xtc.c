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
ATerm term_c_25;
ATerm term_b_25;
ATerm term_s_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_u_23;
ATerm term_g_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_y_20;
ATerm term_o_20;
ATerm term_g_20;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_v_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_s_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_t_15;
ATerm term_m_15;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
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
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_t_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_g_9;
void init_constant_terms (void)
{
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_n_9);
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
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
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
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_r_12);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_r_10, term_r_12);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_c_11, term_r_12);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_t_12);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym__2, term_t_16, term_r_12);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_r_12);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_a_18, term_r_12);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_g_23);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
ATerm version_query_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm tool_query_0_0 (ATerm);
ATerm a_5 (ATerm s_46, ATerm f_607, ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm all_query_0_0 (ATerm);
ATerm repository_query_0_0 (ATerm);
ATerm b_5 (ATerm x_33, ATerm y_33, ATerm);
ATerm c_5 (ATerm k_78 (ATerm), ATerm f_403, ATerm f_34, ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm n_1 (ATerm);
ATerm xtc_store_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm register_import_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm d_5 (ATerm e_40, ATerm f_40, ATerm d_40, ATerm);
ATerm if_verbose1_1_0 (ATerm a_87 (ATerm), ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm xtc_register_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_87 (ATerm), ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm d_66 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm x_11 (ATerm d_11, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_5 (ATerm l_44, ATerm k_44, ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
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
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm xtc_options_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm g_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm h_5 (ATerm f_44, ATerm g_44, ATerm);
ATerm f_5 (ATerm m_39, ATerm n_39, ATerm l_39, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm a_52 (ATerm), ATerm b_52 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm l_83 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm parse_options_1_0 (ATerm k_83 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm xtc_main_0_0 (ATerm);
ATerm j_5 (ATerm i_47, ATerm j_47, ATerm);
ATerm k_5 (ATerm q_35, ATerm r_35, ATerm);
ATerm debug_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm e_87 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm x_65 (ATerm), ATerm);
ATerm w_5 (ATerm d_41, ATerm e_41, ATerm);
ATerm if_verbose4_1_0 (ATerm d_87 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm o_5 (ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm q_17, ATerm p_17, ATerm);
ATerm p_5 (ATerm r_69 (ATerm), ATerm m_17, ATerm l_17, ATerm);
ATerm d_7 (ATerm);
ATerm q_5 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm);
ATerm r_5 (ATerm o_83 (ATerm), ATerm t_40, ATerm s_40, ATerm);
ATerm u_5 (ATerm h_30, ATerm i_30, ATerm);
ATerm o_28 (ATerm i_28, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm s_5 (ATerm d_34, ATerm);
ATerm t_5 (ATerm p_30, ATerm q_30, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_30 (ATerm z_28, ATerm);
ATerm b_30 (ATerm d_29, ATerm e_29, ATerm f_29, ATerm);
ATerm c_30 (ATerm n_29, ATerm o_29, ATerm p_29, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm g_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm u_72 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm y_58 (ATerm), ATerm);
ATerm v_5 (ATerm d_25, ATerm e_25, ATerm);
ATerm map_1_0 (ATerm n_65 (ATerm), ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm i_8 (ATerm);
ATerm k_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm p_8 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm k_35 (ATerm s_34, ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
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
  ATerm l_0 = NULL,o_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,x_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL,w_2 = NULL;
  u_0 = t;
  t = term_g_9;
  t = get_config_0_0(t);
  o_0 = t;
  t = u_0;
  if(match_cons(t, sym__2))
    {
      y_0 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_0);
  x_0 = t;
  t = y_0;
  if(match_cons(t, sym_Tool_1))
    {
      l_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_1;
  {
    ATerm a_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((o_0 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((t_0 != NULL) && (t_0 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(a_0, t);
    b_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_0, b_1);
    w_2 = t;
    t = SSLsetAnnotations(w_2, x_0);
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_0, not_null(t_0)));
    v_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, l_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_0, not_null(t_0))));
    t = a_5(l_0, v_0, t);
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm d_1 = NULL;
  d_1 = t;
  {
    ATerm h_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        f_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_1, term_l_9);
        t = geq_0_0(t);
        t = d_1;
        t = c_87(t);
        ;
        LocalPopChoice(j_9);
      }
    else
      {
        t = h_9;
        t = d_1;
      }
  }
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL;
  t = term_m_9;
  l_1 = t;
  t = term_n_9;
  m_1 = t;
  t = term_o_9;
  t = w_5(l_1, m_1, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm s_9 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_9;
      }
  }
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = debug_1_0(r_0, t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm o_1 = NULL;
    o_1 = t;
    {
      ATerm u_9 = t;
      int v_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_1 = NULL,s_1 = NULL;
          t = if_verbose3_1_0(q_0, t);
          t = term_m_9;
          q_1 = t;
          t = (ATerm) ATmakeAppl(sym_Tool_1, o_1);
          s_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym_Tool_1, o_1));
          t = w_5(q_1, s_1, t);
          if(((j_1 != NULL) && (j_1 != t)))
            _fail(t);
          else
            j_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, o_1), j_1);
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
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, o_1), j_1);
                t = a_5(o_1, j_1, t);
              }
          }
          ;
          LocalPopChoice(v_9);
        }
      else
        {
          t = u_9;
          {
            ATerm f_2 = NULL,g_2 = NULL;
            t = term_d_10;
            f_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_10), term_e_10), o_1);
            g_2 = t;
            t = SSL_print(f_2, g_2);
            t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_10), term_e_10), o_1));
          }
        }
    }
    return(t);
  }
  t = term_i_10;
  t = get_config_0_0(t);
  k_1 = t;
  t = repeat_1_0(b_0, t);
  t = k_1;
  t = map_1_0(c_0, t);
  return(t);
}
ATerm a_5 (ATerm s_46, ATerm f_607, ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm h_2 = NULL,i_2 = NULL;
    if(match_cons(t, sym__2))
      {
        h_2 = ATgetArgument(t, 0);
        i_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm k_10 = t;
      int q_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_2 = NULL,l_2 = NULL;
          t = term_r_10;
          t = get_config_0_0(t);
          t = term_d_10;
          j_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_h_10), i_2);
          l_2 = t;
          t = SSL_print(j_2, l_2);
          t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATinsert(ATinsert(ATempty, term_h_10), i_2));
          ;
          LocalPopChoice(q_10);
        }
      else
        {
          t = k_10;
          {
            ATerm m_2 = NULL,n_2 = NULL;
            t = term_d_10;
            m_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_10), i_2), term_w_10), h_2), term_u_10), s_46);
            n_2 = t;
            t = SSL_print(m_2, n_2);
            t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_10), i_2), term_w_10), h_2), term_u_10), s_46));
          }
        }
    }
    return(t);
  }
  t = f_607;
  t = map_1_0(c_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL;
  t = term_m_9;
  t_2 = t;
  t = term_n_9;
  u_2 = t;
  t = term_o_9;
  t = w_5(t_2, u_2, t);
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
ATerm g_1 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,x_3 = NULL;
  x_3 = t;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 = NULL,f_0 = NULL,i_0 = NULL,s_0 = NULL,w_0 = NULL,z_0 = NULL,e_3 = NULL,b_3 = NULL;
            t = SSLgetAnnotations(x_3);
            i_0 = t;
            t = s_3;
            if(match_cons(t, sym_Tool_1))
              {
                w_0 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_3);
            s_0 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, w_0);
            b_3 = t;
            t = SSLsetAnnotations(b_3, s_0);
            z_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_0, t_3);
            e_3 = t;
            t = SSLsetAnnotations(e_3, i_0);
            if(match_cons(t, sym__2))
              {
                ATerm a_11 = ATgetArgument(t, 0);
                if(match_cons(a_11, sym_Tool_1))
                  {
                    e_0 = ATgetArgument(a_11, 0);
                  }
                else
                  _fail(t);
                f_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_5(e_0, f_0, t);
            ;
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            t = x_3;
          }
      }
    }
  else
    {
      t = x_3;
    }
  return(t);
}
ATerm all_query_0_0 (ATerm t)
{
  t = term_b_11;
  t = get_config_0_0(t);
  t = repeat_1_0(e_1, t);
  t = term_m_9;
  t = table_getlist_0_0(t);
  t = map_1_0(g_1, t);
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,k_4 = NULL;
  t = term_c_11;
  t = get_config_0_0(t);
  t = xtc_location_0_0(t);
  c_4 = t;
  t = term_d_10;
  d_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_10), c_4), term_e_11);
  k_4 = t;
  t = SSL_print(d_4, k_4);
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_10), c_4), term_e_11));
  return(t);
}
ATerm b_5 (ATerm x_33, ATerm y_33, ATerm t)
{
  ATerm n_4 = NULL;
  t = SSL_write_term_to_stream_baf(x_33, y_33);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_4);
  return(t);
}
ATerm c_5 (ATerm k_78 (ATerm), ATerm f_403, ATerm f_34, ATerm t)
{
  ATerm q_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_403, term_f_11);
  t = open_stream_0_0(t);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_4, f_34);
  t = k_78(t);
  t = fclose_0_0(t);
  t = f_34;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  s_4 = t;
  t = term_g_11;
  t_4 = t;
  t = (ATerm) ATinsert(ATempty, term_i_11);
  u_4 = t;
  t = SSL_printnl(t_4, u_4);
  t = s_4;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm a_6 = NULL,f_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if(match_cons(k_11, sym_Stream_1))
        {
          a_6 = ATgetArgument(k_11, 0);
        }
      else
        _fail(t);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(a_6, f_6, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_1, t);
  t = term_n_11;
  t = get_config_0_0(t);
  {
    ATerm o_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 = NULL,w_4 = NULL;
            v_4 = t;
            t = (ATerm) ATinsert(ATempty, term_t_11);
            w_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_4, (ATerm) ATinsert(ATempty, term_t_11));
            t = u_5(v_4, w_4, t);
            LocalPopChoice(s_11);
            {
              ATerm z_4 = NULL,l_5 = NULL;
              z_4 = t;
              t = (ATerm) ATinsert(ATempty, term_u_11);
              l_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, z_4, (ATerm) ATinsert(ATempty, term_u_11));
              t = u_5(z_4, l_5, t);
            }
          }
        else
          {
            t = r_11;
          }
        LocalPopChoice(q_11);
        {
          ATerm x_5 = NULL,y_5 = NULL;
          y_5 = t;
          t = term_m_9;
          t = table_getlist_0_0(t);
          x_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_5, x_5);
          t = c_5(i_1, y_5, x_5, t);
        }
      }
    else
      {
        t = o_11;
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
  t = debug_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL;
  t = term_y_11;
  t = get_config_0_0(t);
  t = if_verbose2_1_0(p_1, t);
  t = term_y_11;
  t = get_config_0_0(t);
  l_6 = t;
  t = if_verbose5_1_0(t_1, t);
  t = term_m_9;
  m_6 = t;
  t = term_n_9;
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_9, term_n_9, l_6);
  t = d_5(m_6, n_6, l_6, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm z_6 = NULL;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      if((z_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm e_40, ATerm f_40, ATerm d_40, ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
  r_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_40, f_40);
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_12 = ATgetArgument(t, 0);
            ATerm c_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_40, f_40);
        t = w_5(e_40, f_40, t);
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = (ATerm) ATempty;
      }
    t_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_40, t_6);
    t = p_5(w_1, d_40, t_6, t);
    s_6 = t;
    t = SSL_table_put(e_40, f_40, s_6);
    t = r_6;
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  {
    ATerm d_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_7 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        f_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_7, term_g_12);
        t = geq_0_0(t);
        t = b_7;
        t = a_87(t);
        ;
        LocalPopChoice(f_12);
      }
    else
      {
        t = d_12;
        t = b_7;
      }
  }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm s_7 = NULL,v_7 = NULL,w_7 = NULL;
  s_7 = t;
  t = term_g_11;
  v_7 = t;
  t = (ATerm) ATinsert(ATempty, term_h_12);
  w_7 = t;
  t = SSL_printnl(v_7, w_7);
  t = s_7;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_i_12;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_j_12;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,r_7 = NULL;
  ATerm k_2 (ATerm t)
  {
    ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,g_8 = NULL,h_8 = NULL;
    y_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_7), term_m_12), not_null(r_7));
    h_8 = t;
    t = SSL_concat_strings(h_8);
    x_7 = t;
    t = term_m_9;
    z_7 = t;
    t = (ATerm) ATmakeAppl(sym_Tool_1, y_7);
    a_8 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(i_7), x_7));
    g_8 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_m_9, (ATerm)ATmakeAppl(sym_Tool_1, y_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(i_7), x_7)));
    t = d_5(z_7, a_8, g_8, t);
    return(t);
  }
  t = term_i_10;
  t = get_config_0_0(t);
  h_7 = t;
  t = if_verbose1_1_0(x_1, t);
  t = if_verbose2_1_0(y_1, t);
  t = term_g_9;
  t = get_config_0_0(t);
  if(((i_7 != NULL) && (i_7 != t)))
    _fail(t);
  else
    i_7 = t;
  t = if_verbose2_1_0(b_2, t);
  t = term_r_10;
  t = get_config_0_0(t);
  if(((r_7 != NULL) && (r_7 != t)))
    _fail(t);
  else
    r_7 = t;
  t = if_verbose2_1_0(d_2, t);
  t = h_7;
  t = map_1_0(k_2, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm j_8 = NULL;
  j_8 = t;
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_8 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        l_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_8, term_q_12);
        t = geq_0_0(t);
        t = j_8;
        t = b_87(t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = j_8;
      }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,w_8 = NULL,x_8 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_8 = NULL,z_8 = NULL,b_9 = NULL;
      t = term_r_12;
      t = p_0(t);
      y_8 = t;
      t = term_s_12;
      z_8 = t;
      t = term_t_12;
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_12, term_t_12, y_8);
      t = f_5(z_8, b_9, y_8, t);
      _fail(t);
    }
  else
    {
      ATerm i_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_8 = ATgetFirst((ATermList) t);
          t_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_8;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_8 = ATgetFirst((ATermList) t);
          x_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_8;
      t = m_0(t);
      t = w_8;
      t = n_0(t);
      i_9 = t;
      t = (ATerm) ATinsert(CheckATermList(x_8), i_9);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm d_66 (ATerm), ATerm t)
{
  ATerm t_10 (ATerm t)
  {
    ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
    o_10 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_10 = ATgetFirst((ATermList) t);
        n_10 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_1 = NULL,a_2 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(o_10);
          v_1 = t;
          t = n_10;
          t = t_10(t);
          a_2 = t;
          t = (ATerm) ATinsert(CheckATermList(a_2), m_10);
          i_3 = t;
          t = SSLsetAnnotations(i_3, v_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_10;
        t = d_66(t);
      }
    return(t);
  }
  t = t_10(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
  p_9 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_9;
    }
  else
    {
      ATerm o_2 (ATerm t)
      {
        t = not_null(r_9);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_9 = ATgetFirst((ATermList) t);
          if(((r_9 != NULL) && (r_9 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_9;
      t = at_end_1_0(o_2, t);
    }
  return(t);
}
ATerm x_11 (ATerm d_11, ATerm t)
{
  ATerm h_11 = NULL;
  t = SSL_explode_term(d_11);
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
  ATerm j_11 = NULL,l_11 = NULL,p_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym__2))
    {
      j_11 = ATgetArgument(t, 0);
      l_11 = ATgetArgument(t, 1);
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              t = l_11;
              return(t);
            }
            t = j_11;
            t = at_end_1_0(p_2, t);
            ;
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            t = x_11(p_11, t);
          }
      }
    }
  else
    {
      t = x_11(p_11, t);
    }
  return(t);
}
ATerm e_5 (ATerm l_44, ATerm k_44, ATerm t)
{
  ATerm e_12 = NULL,l_12 = NULL,n_12 = NULL;
  t = l_44;
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
    l_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_44, l_12);
    t = conc_0_0(t);
    e_12 = t;
    t = term_z_12;
    n_12 = t;
    t = SSL_table_put(n_12, l_44, e_12);
    t = (ATerm) ATmakeAppl(sym__3, term_z_12, l_44, e_12);
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm m_13 = NULL;
  m_13 = t;
  if(match_string(t, "-r"))
    {
      t = m_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = m_13;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  n_13 = t;
  t = term_n_11;
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, n_13);
  t = h_5(o_13, n_13, t);
  t = n_13;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_a_13;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm p_13 = NULL;
  p_13 = t;
  if(match_string(t, "i"))
    {
      t = p_13;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = p_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = p_13;
        }
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm r_13 = NULL,t_13 = NULL,w_13 = NULL;
  r_13 = t;
  t = term_y_11;
  t_13 = t;
  t = (ATerm) ATinsert(ATempty, r_13);
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_11, (ATerm) ATinsert(ATempty, r_13));
  t = e_5(t_13, w_13, t);
  t = r_13;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  if(match_string(t, "r"))
    {
      t = a_14;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = a_14;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = a_14;
        }
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  b_14 = t;
  t = term_c_13;
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, b_14);
  t = h_5(c_14, b_14, t);
  t = b_14;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_d_13;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  if(match_string(t, "-t"))
    {
      t = d_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = d_14;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,i_14 = NULL;
  e_14 = t;
  t = term_i_10;
  f_14 = t;
  t = (ATerm) ATinsert(ATempty, e_14);
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, (ATerm) ATinsert(ATempty, e_14));
  t = e_5(f_14, i_14, t);
  t = e_14;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  if(match_string(t, "-l"))
    {
      t = j_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = j_14;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm k_14 = NULL,n_14 = NULL;
  k_14 = t;
  t = term_r_10;
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_10, k_14);
  t = h_5(n_14, k_14, t);
  t = k_14;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm o_14 = NULL;
  o_14 = t;
  if(match_string(t, "-V"))
    {
      t = o_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = o_14;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  p_14 = t;
  t = term_g_9;
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, p_14);
  t = h_5(q_14, p_14, t);
  t = p_14;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  if(match_string(t, "q"))
    {
      t = r_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = r_14;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm s_14 = NULL,v_14 = NULL;
  s_14 = t;
  t = term_h_13;
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, s_14);
  t = h_5(v_14, s_14, t);
  t = s_14;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  if(match_string(t, "-a"))
    {
      t = y_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = y_14;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  t = term_b_11;
  a_15 = t;
  t = term_r_12;
  b_15 = t;
  t = term_j_13;
  t = h_5(a_15, b_15, t);
  t = z_14;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_k_13;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  if(match_string(t, "-L"))
    {
      t = f_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = f_15;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
  o_15 = t;
  t = term_r_10;
  p_15 = t;
  t = term_r_12;
  q_15 = t;
  t = term_l_13;
  t = h_5(p_15, q_15, t);
  t = o_15;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_q_13;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm r_15 = NULL;
  r_15 = t;
  if(match_string(t, "-R"))
    {
      t = r_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = r_15;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t = term_c_11;
  v_15 = t;
  t = term_r_12;
  w_15 = t;
  t = term_s_13;
  t = h_5(v_15, w_15, t);
  t = u_15;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_u_13;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm a_16 = NULL,e_16 = NULL,f_16 = NULL;
  a_16 = t;
  t = SSL_string_to_int(a_16);
  e_16 = t;
  t = term_k_9;
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_9, e_16);
  t = h_5(f_16, e_16, t);
  t = a_16;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_v_13;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(r_2, s_2, v_2, t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm z_13 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_2, z_2, a_3, t);
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = z_13;
            {
              ATerm h_14 = t;
              int l_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(c_3, d_3, f_3, t);
                  ;
                  LocalPopChoice(l_14);
                }
              else
                {
                  t = h_14;
                  {
                    ATerm m_14 = t;
                    int t_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(g_3, j_3, k_3, t);
                        ;
                        LocalPopChoice(t_14);
                      }
                    else
                      {
                        t = m_14;
                        {
                          ATerm u_14 = t;
                          int w_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(m_3, o_3, p_3, t);
                              ;
                              LocalPopChoice(w_14);
                            }
                          else
                            {
                              t = u_14;
                              {
                                ATerm x_14 = t;
                                int c_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(r_3, u_3, v_3, t);
                                    ;
                                    LocalPopChoice(c_15);
                                  }
                                else
                                  {
                                    t = x_14;
                                    {
                                      ATerm d_15 = t;
                                      int e_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(w_3, y_3, z_3, t);
                                          ;
                                          LocalPopChoice(e_15);
                                        }
                                      else
                                        {
                                          t = d_15;
                                          {
                                            ATerm g_15 = t;
                                            int h_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(a_4, e_4, f_4, t);
                                                ;
                                                LocalPopChoice(h_15);
                                              }
                                            else
                                              {
                                                t = g_15;
                                                {
                                                  ATerm i_15 = t;
                                                  int j_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(h_4, i_4, l_4, t);
                                                      ;
                                                      LocalPopChoice(j_15);
                                                    }
                                                  else
                                                    {
                                                      t = i_15;
                                                      {
                                                        ATerm k_15 = t;
                                                        int l_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(m_4, o_4, p_4, t);
                                                            ;
                                                            LocalPopChoice(l_15);
                                                          }
                                                        else
                                                          {
                                                            t = k_15;
                                                            t = ArgOption_3_0(r_4, x_4, y_4, t);
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
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_16 = ATgetFirst((ATermList) t);
      j_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_16 = NULL,q_16 = NULL;
        ATerm g_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_16)), not_null(q_16));
          return(t);
        }
        t = j_16;
        t = k_0(t);
        if(((n_16 != NULL) && (n_16 != t)))
          _fail(t);
        else
          n_16 = t;
        t = i_16;
        t = j_0(t);
        if(((q_16 != NULL) && (q_16 != t)))
          _fail(t);
        else
          q_16 = t;
        t = j_16;
        t = reverse_acc_2_0(j_0, g_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_12;
      t = k_0(t);
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,n_3 = NULL;
  b_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_17);
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_17);
  n_3 = t;
  t = SSLsetAnnotations(n_3, z_16);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm h_17 = NULL;
  h_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_17), term_m_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_16 = NULL,y_16 = NULL;
  ATerm n_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_15);
    }
  else
    {
      t = n_15;
      t = fetch_1_0(i_5, t);
    }
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_16), term_b_16), term_z_15);
        t = echo_0_0(t);
        ;
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
      }
    t = term_d_16;
    t = echo_0_0(t);
    t = term_s_12;
    v_16 = t;
    t = term_t_12;
    y_16 = t;
    t = term_g_16;
    t = w_5(v_16, y_16, t);
    t = reverse_acc_2_0(_id, m_5, t);
    t = map_1_0(n_5, t);
    {
      ATerm h_16 = t;
      int k_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_16), term_l_16), term_h_10);
          t = echo_0_0(t);
          ;
          LocalPopChoice(k_16);
        }
      else
        {
          t = h_16;
        }
    }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
  w_17 = t;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_16 = ATgetFirst((ATermList) t);
                ATerm s_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_17;
          }
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        t = (ATerm) ATinsert(ATempty, w_17);
      }
    x_17 = t;
    t = term_d_10;
    y_17 = t;
    t = SSL_printnl(y_17, x_17);
    t = w_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_15;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm i_18 = NULL,p_18 = NULL;
  t = term_t_16;
  i_18 = t;
  t = term_r_12;
  p_18 = t;
  t = term_u_16;
  t = h_5(i_18, p_18, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  t = term_t_16;
  s_18 = t;
  t = term_r_12;
  t_18 = t;
  t = term_u_16;
  t = h_5(s_18, t_18, t);
  t = term_x_16;
  q_18 = t;
  t = term_r_12;
  r_18 = t;
  t = term_c_17;
  t = h_5(q_18, r_18, t);
  t = term_d_17;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_5, b_6, c_6, t);
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      t = Option_3_0(d_6, e_6, g_6, t);
    }
  return(t);
}
ATerm h_5 (ATerm f_44, ATerm g_44, ATerm t)
{
  ATerm u_18 = NULL;
  t = term_z_12;
  u_18 = t;
  t = SSL_table_put(u_18, f_44, g_44);
  t = (ATerm) ATmakeAppl(sym__3, term_z_12, f_44, g_44);
  return(t);
}
ATerm f_5 (ATerm m_39, ATerm n_39, ATerm l_39, ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_39, n_39);
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
        t = (ATerm) ATmakeAppl(sym__2, m_39, n_39);
        t = w_5(m_39, n_39, t);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = (ATerm) ATempty;
      }
    x_18 = t;
    t = (ATerm) ATinsert(CheckATermList(x_18), l_39);
    y_18 = t;
    t = SSL_table_put(m_39, n_39, y_18);
    t = w_18;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_19 = NULL,h_19 = NULL,k_19 = NULL;
      t = term_r_12;
      t = h_0(t);
      g_19 = t;
      t = term_s_12;
      h_19 = t;
      t = term_t_12;
      k_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_12, term_t_12, g_19);
      t = f_5(h_19, k_19, g_19, t);
      _fail(t);
    }
  else
    {
      ATerm n_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_19 = ATgetFirst((ATermList) t);
          f_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_19;
      t = d_0(t);
      t = term_r_12;
      t = g_0(t);
      n_19 = t;
      t = (ATerm) ATinsert(CheckATermList(f_19), n_19);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_52 (ATerm), ATerm b_52 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,q_3 = NULL;
  v_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_19 = ATgetFirst((ATermList) t);
      s_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_19);
  o_19 = t;
  t = p_19;
  t = a_52(t);
  t_19 = t;
  t = s_19;
  t = b_52(t);
  u_19 = t;
  t = (ATerm) ATinsert(CheckATermList(u_19), t_19);
  q_3 = t;
  t = SSLsetAnnotations(q_3, o_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,h_20 = NULL,i_20 = NULL,b_4 = NULL;
  c_20 = t;
  {
    ATerm o_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_17;
        t = l_83(t);
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = o_17;
      }
    t = c_20;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_20 = ATgetFirst((ATermList) t);
        f_20 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_20);
    d_20 = t;
    t = term_t_15;
    i_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_15, e_20);
    t = h_5(i_20, e_20, t);
    t = f_20;
    {
      ATerm u_20 (ATerm t)
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_17 = t;
            int z_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_20 = NULL;
                n_20 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_20;
                ;
                LocalPopChoice(z_17);
              }
            else
              {
                t = v_17;
                t = l_83(t);
                t = Cons_2_0(_id, u_20, t);
              }
            ;
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            {
              ATerm q_20 = NULL,r_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_20 = ATgetFirst((ATermList) t);
                  r_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_20), (ATerm) ATmakeAppl(sym_Undefined_1, q_20));
            }
          }
        return(t);
      }
      t = u_20(t);
      h_20 = t;
      t = (ATerm) ATinsert(CheckATermList(h_20), (ATerm) ATmakeAppl(sym_Program_1, e_20));
      b_4 = t;
      t = SSLsetAnnotations(b_4, d_20);
    }
  }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm h_21 = NULL;
  h_21 = t;
  if(match_string(t, "--help"))
    {
      t = h_21;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_21;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_21;
        }
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL;
  t = term_a_18;
  i_21 = t;
  t = term_r_12;
  j_21 = t;
  t = term_b_18;
  t = h_5(i_21, j_21, t);
  t = term_c_18;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
  b_21 = t;
  t = term_s_12;
  e_21 = t;
  t = term_t_12;
  f_21 = t;
  t = (ATerm) ATempty;
  g_21 = t;
  t = SSL_table_put(e_21, f_21, g_21);
  t = b_21;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm e_18 = t;
      int f_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_83(t);
          ;
          LocalPopChoice(f_18);
        }
      else
        {
          t = e_18;
          {
            ATerm g_18 = t;
            int h_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_6, o_6, p_6, t);
                ;
                LocalPopChoice(h_18);
              }
            else
              {
                t = g_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_6, t);
    {
      ATerm j_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_21 = NULL;
          v_21 = t;
          {
            ATerm l_18 = t;
            int m_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_2 = NULL;
                t = v_21;
                {
                  ATerm n_18 = t;
                  int o_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_a_18;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(o_18);
                    }
                  else
                    {
                      t = n_18;
                      t = fetch_1_0(q_6, t);
                    }
                  t = v_21;
                  t = default_system_usage_0_0(t);
                  t = term_v_18;
                  q_2 = t;
                  t = SSL_exit(q_2);
                }
                ;
                LocalPopChoice(m_18);
              }
            else
              {
                t = l_18;
                {
                  ATerm x_2 = NULL;
                  t = term_t_16;
                  t = get_config_0_0(t);
                  t = v_21;
                  t = default_system_about_0_0(t);
                  t = term_v_18;
                  x_2 = t;
                  t = SSL_exit(x_2);
                }
              }
          }
          ;
          LocalPopChoice(k_18);
        }
      else
        {
          t = j_18;
          {
            ATerm z_18 = t;
            int a_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
                ATerm u_6 (ATerm t)
                {
                  ATerm d_22 = NULL,f_22 = NULL,h_22 = NULL,c_10 = NULL;
                  h_22 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      f_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_22);
                  d_22 = t;
                  t = f_22;
                  if(((z_20 != NULL) && (z_20 != t)))
                    _fail(t);
                  else
                    z_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, f_22);
                  c_10 = t;
                  t = SSLsetAnnotations(c_10, d_22);
                  return(t);
                }
                t = fetch_1_0(u_6, t);
                t = term_g_11;
                a_22 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_20)), term_b_19);
                b_22 = t;
                t = SSL_printnl(a_22, b_22);
                t = (ATerm) ATmakeAppl(sym__2, term_g_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_20)), term_b_19));
                t = default_system_usage_0_0(t);
                t = term_g_12;
                z_21 = t;
                t = SSL_exit(z_21);
                ;
                LocalPopChoice(a_19);
              }
            else
              {
                t = z_18;
              }
          }
        }
      a_21 = t;
      t = term_s_12;
      d_21 = t;
      t = SSL_table_destroy(d_21);
      t = a_21;
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
  t = term_c_19;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_22 = NULL;
      t = parse_options_1_0(xtc_options_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(v_6, t);
      t = xtc_read_0_0(t);
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_19 = t;
            int r_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_c_13;
                t = get_config_0_0(t);
                t = xtc_register_0_0(t);
                ;
                LocalPopChoice(r_19);
              }
            else
              {
                t = q_19;
                t = term_y_11;
                t = get_config_0_0(t);
                t = register_import_0_0(t);
              }
            t = xtc_store_0_0(t);
            ;
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            t = term_h_13;
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
                    ATerm y_19 = t;
                    int z_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = all_query_0_0(t);
                        ;
                        LocalPopChoice(z_19);
                      }
                    else
                      {
                        t = y_19;
                        t = tool_query_0_0(t);
                      }
                  }
                }
            }
          }
        t = term_v_18;
        t_22 = t;
        t = SSL_exit(t_22);
      }
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      t = debug_1_0(x_6, t);
    }
  return(t);
}
ATerm j_5 (ATerm i_47, ATerm j_47, ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  t = j_47;
  t = map_1_0(xtc_find_0_0, t);
  u_22 = t;
  t = term_d_10;
  a_23 = t;
  t = SSL_print(a_23, u_22);
  t = term_d_10;
  y_22 = t;
  t = (ATerm) ATinsert(ATempty, term_h_10);
  z_22 = t;
  t = SSL_print(y_22, z_22);
  t = term_v_18;
  v_22 = t;
  t = SSL_exit(v_22);
  return(t);
}
ATerm k_5 (ATerm q_35, ATerm r_35, ATerm t)
{
  t = SSL_execvp(q_35, r_35);
  return(t);
}
ATerm debug_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,i_23 = NULL,j_23 = NULL;
  c_23 = t;
  t = i_78(t);
  d_23 = t;
  t = term_g_11;
  i_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_23), d_23);
  j_23 = t;
  t = SSL_printnl(i_23, j_23);
  t = c_23;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_23 = NULL;
  ATerm y_6 (ATerm t)
  {
    ATerm l_23 = NULL,m_23 = NULL;
    l_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), l_23);
    t = w_5(not_null(k_23), l_23, t);
    m_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_23, m_23);
    return(t);
  }
  if(((k_23 != NULL) && (k_23 != t)))
    _fail(t);
  else
    k_23 = t;
  t = SSL_table_keys(k_23);
  t = map_1_0(y_6, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  ATerm q_23 = NULL;
  q_23 = t;
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_23 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        s_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_23, term_g_20);
        t = geq_0_0(t);
        t = q_23;
        t = e_87(t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = q_23;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm x_65 (ATerm), ATerm t)
{
  ATerm a_25 (ATerm t)
  {
    ATerm w_24 = NULL,y_24 = NULL,z_24 = NULL;
    w_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_24 = ATgetFirst((ATermList) t);
        z_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_20 = t;
      int k_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_3 = NULL,l_3 = NULL,f_10 = NULL;
          t = SSLgetAnnotations(w_24);
          h_3 = t;
          t = y_24;
          t = x_65(t);
          l_3 = t;
          t = (ATerm) ATinsert(CheckATermList(z_24), l_3);
          f_10 = t;
          t = SSLsetAnnotations(f_10, h_3);
          ;
          LocalPopChoice(k_20);
        }
      else
        {
          t = j_20;
          {
            ATerm g_4 = NULL,j_4 = NULL,g_10 = NULL;
            t = SSLgetAnnotations(w_24);
            g_4 = t;
            t = z_24;
            t = a_25(t);
            j_4 = t;
            t = (ATerm) ATinsert(CheckATermList(j_4), y_24);
            g_10 = t;
            t = SSLsetAnnotations(g_10, g_4);
          }
        }
    }
    return(t);
  }
  t = a_25(t);
  return(t);
}
ATerm w_5 (ATerm d_41, ATerm e_41, ATerm t)
{
  t = SSL_table_get(d_41, e_41);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_25 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        r_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_25, term_o_20);
        t = geq_0_0(t);
        t = o_25;
        t = d_87(t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = o_25;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  if(match_cons(t, sym__2))
    {
      k_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_26;
        if((k_26 != t))
          {
            _fail(t);
          }
        t = j_26;
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = p_20;
        t = (ATerm) ATmakeAppl(sym__2, k_26, l_26);
        {
          ATerm t_20 = t;
          int v_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_26, l_26);
              ;
              LocalPopChoice(v_20);
            }
          else
            {
              t = t_20;
              t = SSL_gtr(k_26, l_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_26, l_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_26 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        r_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_26, term_y_20);
        t = geq_0_0(t);
        t = p_26;
        t = f_87(t);
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = p_26;
      }
  }
  return(t);
}
ATerm o_5 (ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm q_17, ATerm p_17, ATerm t)
{
  t = v_69(t);
  {
    ATerm a_7 (ATerm t)
    {
      ATerm t_26 = NULL;
      t_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_17, t_26);
      t = u_69(t);
      return(t);
    }
    t = fetch_1_0(a_7, t);
    t = p_17;
  }
  return(t);
}
ATerm p_5 (ATerm r_69 (ATerm), ATerm m_17, ATerm l_17, ATerm t)
{
  ATerm j_27 (ATerm t)
  {
    ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
    e_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_17;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_27 = ATgetFirst((ATermList) t);
            g_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_27;
              {
                ATerm c_7 (ATerm t)
                {
                  t = l_17;
                  return(t);
                }
                t = o_5(r_69, c_7, f_27, g_27, t);
                t = j_27(t);
              }
              ;
              LocalPopChoice(k_21);
            }
          else
            {
              t = c_21;
              {
                ATerm h_6 = NULL,k_6 = NULL,j_10 = NULL;
                t = SSLgetAnnotations(e_27);
                h_6 = t;
                t = g_27;
                t = j_27(t);
                k_6 = t;
                t = (ATerm) ATinsert(CheckATermList(k_6), f_27);
                j_10 = t;
                t = SSLsetAnnotations(j_10, h_6);
              }
            }
        }
      }
    return(t);
  }
  t = m_17;
  t = j_27(t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm w_27 = NULL;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      if((w_27 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm m_27 = NULL,q_27 = NULL,r_27 = NULL;
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_40, k_40);
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_21 = ATgetArgument(t, 0);
            ATerm o_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_40, k_40);
        t = w_5(j_40, k_40, t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = (ATerm) ATempty;
      }
    r_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_27, l_40);
    t = p_5(d_7, r_27, l_40, t);
    q_27 = t;
    t = SSL_table_put(j_40, k_40, q_27);
    t = m_27;
  }
  return(t);
}
ATerm r_5 (ATerm o_83 (ATerm), ATerm t_40, ATerm s_40, ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm x_27 = NULL,y_27 = NULL;
    if(match_cons(t, sym__2))
      {
        x_27 = ATgetArgument(t, 0);
        y_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, t_40, x_27, y_27);
    t = o_83(t);
    return(t);
  }
  t = s_40;
  t = map_1_0(e_7, t);
  return(t);
}
ATerm u_5 (ATerm h_30, ATerm i_30, ATerm t)
{
  t = SSL_access(h_30, i_30);
  return(t);
}
ATerm o_28 (ATerm i_28, ATerm t)
{
  t = SSL_fclose(i_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  m_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_28 = ATgetArgument(t, 0);
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_28);
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            t = o_28(m_28, t);
          }
      }
    }
  else
    {
      t = o_28(m_28, t);
    }
  return(t);
}
ATerm s_5 (ATerm d_34, ATerm t)
{
  t = SSL_read_term_from_stream(d_34);
  return(t);
}
ATerm t_5 (ATerm p_30, ATerm q_30, ATerm t)
{
  ATerm p_28 = NULL;
  t = SSL_fopen(p_30, q_30);
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_28 = NULL;
  t = SSL_stdin_stream();
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_28 = NULL;
  t = SSL_stdout_stream();
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_28);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_28 = NULL;
  t = SSL_stderr_stream();
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_28);
  return(t);
}
ATerm a_30 (ATerm z_28, ATerm t)
{
  ATerm a_29 = NULL;
  t = SSL_explode_term(z_28);
  if(match_cons(t, sym__2))
    {
      ATerm r_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_21 = ATgetArgument(t, 1);
        if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
          {
            a_29 = ATgetFirst((ATermList) s_21);
            {
              ATerm t_21 = (ATerm) ATgetNext((ATermList) s_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_29;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_29;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_29;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_29;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_30 (ATerm d_29, ATerm e_29, ATerm f_29, ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,l_29 = NULL,l_10 = NULL;
  t = SSLgetAnnotations(f_29);
  i_29 = t;
  t = d_29;
  if(match_cons(t, sym_Path_1))
    {
      l_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_29, e_29);
  l_10 = t;
  t = SSLsetAnnotations(l_10, i_29);
  if(match_cons(t, sym__2))
    {
      g_29 = ATgetArgument(t, 0);
      h_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(g_29, h_29, t);
  return(t);
}
ATerm c_30 (ATerm n_29, ATerm o_29, ATerm p_29, ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,v_29 = NULL,p_10 = NULL;
  t = SSLgetAnnotations(p_29);
  s_29 = t;
  t = SSL_is_string(n_29);
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_29, o_29);
  p_10 = t;
  t = SSLsetAnnotations(p_10, s_29);
  if(match_cons(t, sym__2))
    {
      q_29 = ATgetArgument(t, 0);
      r_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(q_29, r_29, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_21 = ATgetArgument(t, 0);
      ATerm w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_29 = t;
  if(match_cons(t, sym__2))
    {
      y_29 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_30(x_29, t);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            {
              ATerm c_22 = t;
              int e_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_30(y_29, z_29, x_29, t);
                  ;
                  LocalPopChoice(e_22);
                }
              else
                {
                  t = c_22;
                  t = c_30(y_29, z_29, x_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_30(x_29, t);
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_30 = NULL;
      g_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_30, term_k_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      t = debug_1_0(g_7, t);
      _fail(t);
    }
  e_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(f_30, t);
  d_30 = t;
  t = e_30;
  t = fclose_0_0(t);
  t = d_30;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_30 = NULL,l_30 = NULL;
      k_30 = t;
      t = (ATerm) ATinsert(ATempty, term_p_22);
      l_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_30, (ATerm) ATinsert(ATempty, term_p_22));
      t = u_5(k_30, l_30, t);
      LocalPopChoice(o_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_22;
      {
        ATerm q_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_22 = t;
            if((PushChoice() == 0))
              {
                ATerm m_30 = NULL,n_30 = NULL;
                m_30 = t;
                t = (ATerm) ATinsert(ATempty, term_t_11);
                n_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_30, (ATerm) ATinsert(ATempty, term_t_11));
                t = u_5(m_30, n_30, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_22;
              }
            t = debug_1_0(j_7, t);
            ;
            LocalPopChoice(r_22);
          }
        else
          {
            t = q_22;
            t = debug_1_0(k_7, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = debug_1_0(m_7, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = debug_1_0(p_7, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  t = term_g_11;
  f_31 = t;
  t = (ATerm) ATinsert(ATempty, term_b_23);
  g_31 = t;
  t = SSL_printnl(f_31, g_31);
  t = e_31;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  if(match_cons(t, sym__3))
    {
      h_31 = ATgetArgument(t, 0);
      i_31 = ATgetArgument(t, 1);
      j_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_5(h_31, i_31, j_31, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  t = term_g_11;
  l_31 = t;
  t = (ATerm) ATinsert(ATempty, term_e_23);
  m_31 = t;
  t = SSL_printnl(l_31, m_31);
  t = k_31;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  n_31 = t;
  t = term_g_11;
  o_31 = t;
  t = (ATerm) ATinsert(ATempty, term_b_23);
  p_31 = t;
  t = SSL_printnl(o_31, p_31);
  t = n_31;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  o_30 = t;
  t = if_verbose5_1_0(l_7, t);
  {
    ATerm f_23 = t;
    if((PushChoice() == 0))
      {
        ATerm c_31 = NULL,d_31 = NULL;
        t = term_m_9;
        c_31 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_30);
        d_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym_Imported_1, o_30));
        t = w_5(c_31, d_31, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_23;
      }
    u_30 = t;
    t = term_m_9;
    z_30 = t;
    t = term_g_23;
    a_31 = t;
    t = (ATerm) ATinsert(ATempty, o_30);
    b_31 = t;
    t = SSL_table_put(z_30, a_31, b_31);
    t = u_30;
    t = if_verbose4_1_0(n_7, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(q_7, t);
    t_30 = t;
    t = term_m_9;
    y_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_9, t_30);
    t = r_5(b_8, y_30, t_30, t);
    t = if_verbose6_1_0(c_8, t);
    t = term_m_9;
    v_30 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, o_30);
    w_30 = t;
    t = (ATerm) ATempty;
    x_30 = t;
    t = SSL_table_put(v_30, w_30, x_30);
    t = (ATerm) ATmakeAppl(sym__3, term_m_9, (ATerm)ATmakeAppl(sym_Imported_1, o_30), (ATerm) ATempty);
    t = if_verbose4_1_0(d_8, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm u_72 (ATerm), ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_32;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_32 = ATgetFirst((ATermList) t);
          d_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 = NULL,t_7 = NULL,u_7 = NULL,s_10 = NULL;
            t = SSLgetAnnotations(b_32);
            o_7 = t;
            t = c_32;
            t = u_72(t);
            t_7 = t;
            t = d_32;
            t = filter_1_0(u_72, t);
            u_7 = t;
            t = (ATerm) ATinsert(CheckATermList(u_7), t_7);
            s_10 = t;
            t = SSLsetAnnotations(s_10, o_7);
            ;
            LocalPopChoice(n_23);
          }
        else
          {
            t = h_23;
            t = d_32;
            t = filter_1_0(u_72, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm y_58 (ATerm), ATerm t)
{
  ATerm j_32 (ATerm t)
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_58(t);
        t = j_32(t);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
      }
    return(t);
  }
  t = j_32(t);
  return(t);
}
ATerm v_5 (ATerm d_25, ATerm e_25, ATerm t)
{
  t = SSL_strcat(d_25, e_25);
  return(t);
}
ATerm map_1_0 (ATerm n_65 (ATerm), ATerm t)
{
  ATerm y_32 (ATerm t)
  {
    ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
    v_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_32;
      }
    else
      {
        ATerm o_8 = NULL,u_8 = NULL,v_8 = NULL,v_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_32 = ATgetFirst((ATermList) t);
            x_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_32);
        o_8 = t;
        t = w_32;
        t = n_65(t);
        u_8 = t;
        t = x_32;
        t = y_32(t);
        v_8 = t;
        t = (ATerm) ATinsert(CheckATermList(v_8), u_8);
        v_10 = t;
        t = SSLsetAnnotations(v_10, o_8);
      }
    return(t);
  }
  t = y_32(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm r_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = r_23;
    }
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_33 = NULL;
      g_33 = t;
      t = SSL_is_string(g_33);
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_8, t);
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            {
              ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
              m_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_33 = ATgetArgument(t, 0);
                  t = n_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_33 = ATgetArgument(t, 0);
                      t = n_33;
                      {
                        ATerm z_23 = t;
                        int a_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_24);
                          }
                        else
                          {
                            t = z_23;
                            t = debug_1_0(f_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_33 = NULL,t_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_33 = ATgetArgument(t, 0);
                          o_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_33;
                      t = eval_config_0_0(t);
                      s_33 = t;
                      t = o_33;
                      t = eval_config_0_0(t);
                      t_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_33, t_33);
                      t = v_5(s_33, t_33, t);
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
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  t = term_z_12;
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, z_33);
  t = w_5(a_34, z_33, t);
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_34 = NULL,c_34 = NULL;
        t = eval_config_0_0(t);
        b_34 = t;
        t = term_z_12;
        c_34 = t;
        t = SSL_table_put(c_34, z_33, b_34);
        t = b_34;
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
      }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_34 = NULL;
            t = term_h_24;
            i_34 = t;
            t = SSL_getenv(i_34);
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = debug_1_0(k_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  t = term_m_9;
  n_34 = t;
  t = term_n_9;
  o_34 = t;
  t = term_o_9;
  t = w_5(n_34, o_34, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm j_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_24;
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
  t = term_k_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm j_34 = NULL;
  t = if_verbose5_1_0(i_8, t);
  j_34 = t;
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_34 = NULL,l_34 = NULL;
        t = term_m_9;
        k_34 = t;
        t = term_g_23;
        l_34 = t;
        t = term_n_24;
        t = w_5(k_34, l_34, t);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        {
          ATerm m_34 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          m_34 = t;
          t = repeat_1_0(m_8, t);
          t = m_34;
        }
      }
    t = j_34;
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
  t = term_o_24;
  return(t);
}
ATerm k_35 (ATerm s_34, ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
  t = term_m_9;
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, s_34);
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym_Tool_1, s_34));
  t = w_5(v_34, w_34, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_24 = ATgetFirst((ATermList) t);
      if(match_cons(p_24, sym__2))
        {
          ATerm r_24 = ATgetArgument(p_24, 0);
          u_34 = ATgetArgument(p_24, 1);
        }
      else
        _fail(t);
      {
        ATerm q_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_34;
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = debug_1_0(d_9, t);
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_m_9;
  t = table_getlist_0_0(t);
  t = debug_1_0(f_9, t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
      t = if_verbose5_1_0(q_8, t);
      t = xtc_load_0_0(t);
      z_34 = t;
      if(match_cons(t, sym__2))
        {
          x_34 = ATgetArgument(t, 0);
          y_34 = ATgetArgument(t, 1);
          {
            ATerm v_24 = t;
            int x_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
                t = term_m_9;
                d_35 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, x_34);
                e_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym_Tool_1, x_34));
                t = w_5(d_35, e_35, t);
                {
                  ATerm a_9 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_34 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((c_35 != NULL) && (c_35 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_35 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(a_9, t);
                  t = not_null(c_35);
                }
                ;
                LocalPopChoice(x_24);
              }
            else
              {
                t = v_24;
                t = k_35(z_34, t);
              }
          }
        }
      else
        {
          t = k_35(z_34, t);
        }
      t = if_verbose5_1_0(c_9, t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm j_35 = NULL,a_10 = NULL,b_10 = NULL;
        j_35 = t;
        t = term_g_11;
        a_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_25), j_35), term_b_25);
        b_10 = t;
        t = SSL_printnl(a_10, b_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_25), j_35), term_b_25);
        t = if_verbose5_1_0(e_9, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
      u_35 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_35 = ATgetFirst((ATermList) t);
          w_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_35 = ATgetFirst((ATermList) t);
          y_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_35;
      if(match_string(t, "call"))
        {
          ATerm c_36 = NULL;
          t = y_35;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_35 = ATgetFirst((ATermList) t);
              t_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_35;
          t = xtc_find_0_0(t);
          c_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_36, t_35);
          t = k_5(c_36, t_35, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = u_35;
          t = j_5(v_35, y_35, t);
        }
      ;
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      t = xtc_main_0_0(t);
    }
  return(t);
}
