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
ATerm term_q_28;
ATerm term_p_28;
ATerm term_c_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_p_27;
ATerm term_h_27;
ATerm term_f_27;
ATerm term_c_26;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_r_24;
ATerm term_n_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_u_23;
ATerm term_i_22;
ATerm term_a_22;
ATerm term_n_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_u_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_k_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_g_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_r_8;
void init_constant_terms (void)
{
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_t_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_r_13);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_r_13);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_r_13);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__2, term_s_13, term_v_13);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_r_13);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_r_13);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_r_13);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_h_25);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
ATerm version_query_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm c_99 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm tool_query_0_0 (ATerm);
ATerm a_5 (ATerm y_58, ATerm k_629, ATerm);
ATerm Tool_1_0 (ATerm y_69 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm all_query_0_0 (ATerm);
ATerm repository_query_0_0 (ATerm);
ATerm b_5 (ATerm d_46, ATerm e_46, ATerm);
ATerm c_5 (ATerm k_90 (ATerm), ATerm k_425, ATerm l_46, ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm xtc_store_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm register_import_0_0 (ATerm);
ATerm a_2 (ATerm);
ATerm d_5 (ATerm k_52, ATerm l_52, ATerm j_52, ATerm);
ATerm if_verbose1_1_0 (ATerm a_99 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm xtc_register_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm j_78 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm l_9 (ATerm w_8, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_5 (ATerm r_56, ATerm q_56, ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm c_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm xtc_options_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm g_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_69 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm h_5 (ATerm l_56, ATerm m_56, ATerm);
ATerm f_5 (ATerm s_51, ATerm t_51, ATerm r_51, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm l_95 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm parse_options_1_0 (ATerm k_95 (ATerm), ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm b_7 (ATerm);
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
ATerm k_7 (ATerm);
ATerm q_5 (ATerm p_52, ATerm q_52, ATerm r_52, ATerm);
ATerm r_5 (ATerm o_95 (ATerm), ATerm z_52, ATerm y_52, ATerm);
ATerm u_5 (ATerm n_42, ATerm o_42, ATerm);
ATerm i_21 (ATerm z_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm s_5 (ATerm j_46, ATerm);
ATerm t_5 (ATerm v_42, ATerm w_42, ATerm);
ATerm _2_0 (ATerm r_59 (ATerm), ATerm s_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm w_7 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm n_8 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm e_71 (ATerm), ATerm);
ATerm v_5 (ATerm j_37, ATerm k_37, ATerm);
ATerm Cons_2_0 (ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_77 (ATerm), ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm z_8 (ATerm);
ATerm b_9 (ATerm);
ATerm y_27 (ATerm g_27, ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm version_query_0_0 (ATerm t)
{
  ATerm p_0 = NULL,t_0 = NULL,v_0 = NULL,w_0 = NULL,y_0 = NULL;
  p_0 = t;
  t = term_r_8;
  t = get_config_0_0(t);
  t_0 = t;
  t = p_0;
  {
    ATerm z_0 (ATerm t)
    {
      if(match_cons(t, sym_Tool_1))
        {
          if(((v_0 != NULL) && (v_0 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    ATerm b_1 (ATerm t)
    {
      ATerm c_1 (ATerm t)
      {
        if(match_cons(t, sym__2))
          {
            if((t_0 != ATgetArgument(t, 0)))
              {
                _fail(ATgetArgument(t, 0));
              }
            if(((w_0 != NULL) && (w_0 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              w_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        return(t);
      }
      t = fetch_1_0(c_1, t);
      return(t);
    }
    t = _2_0(z_0, b_1, t);
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_0, not_null(w_0)));
    y_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(v_0)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_0, not_null(w_0))));
    t = a_5(not_null(v_0), y_0, t);
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm k_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 = NULL,e_1 = NULL;
      a_1 = t;
      t = term_q_9;
      t = get_config_0_0(t);
      e_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_1, term_r_9);
      t = geq_0_0(t);
      t = a_1;
      t = c_99(t);
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = k_9;
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  t = term_s_9;
  k_1 = t;
  t = term_t_9;
  l_1 = t;
  t = term_u_9;
  t = w_5(k_1, l_1, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_9 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_9;
      }
  }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL;
  t = term_x_9;
  t = get_config_0_0(t);
  j_1 = t;
  t = repeat_1_0(d_1, t);
  t = j_1;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm n_1 = NULL;
      n_1 = t;
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 = NULL,r_1 = NULL;
            t = if_verbose3_1_0(g_1, t);
            t = term_s_9;
            p_1 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, n_1);
            r_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATmakeAppl(sym_Tool_1, n_1));
            t = w_5(p_1, r_1, t);
            if(((i_1 != NULL) && (i_1 != t)))
              _fail(t);
            else
              i_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, n_1), not_null(i_1));
            {
              ATerm a_10 = t;
              int b_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = version_query_0_0(t);
                  ;
                  LocalPopChoice(b_10);
                }
              else
                {
                  t = a_10;
                  if(match_cons(t, sym__2))
                    {
                      ATerm c_10 = ATgetArgument(t, 0);
                      ATerm f_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, n_1), not_null(i_1));
                  t = a_5(n_1, not_null(i_1), t);
                }
            }
            ;
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm e_2 = NULL,f_2 = NULL;
              t = term_g_10;
              e_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_10), term_k_10), n_1);
              f_2 = t;
              t = SSL_print(e_2, f_2);
              t = (ATerm) ATmakeAppl(sym__2, term_g_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_10), term_k_10), n_1));
            }
          }
      }
      return(t);
    }
    t = map_1_0(f_1, t);
  }
  return(t);
}
ATerm a_5 (ATerm y_58, ATerm k_629, ATerm t)
{
  t = k_629;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm g_2 = NULL,h_2 = NULL;
      if(match_cons(t, sym__2))
        {
          g_2 = ATgetArgument(t, 0);
          h_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 = NULL,j_2 = NULL;
            t = term_p_10;
            t = get_config_0_0(t);
            t = term_g_10;
            i_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, term_l_10), h_2);
            j_2 = t;
            t = SSL_print(i_2, j_2);
            t = (ATerm) ATmakeAppl(sym__2, term_g_10, (ATerm) ATinsert(ATinsert(ATempty, term_l_10), h_2));
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            {
              ATerm n_2 = NULL,o_2 = NULL;
              t = term_g_10;
              n_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_10), h_2), term_t_10), g_2), term_r_10), y_58);
              o_2 = t;
              t = SSL_print(n_2, o_2);
              t = (ATerm) ATmakeAppl(sym__2, term_g_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_10), h_2), term_t_10), g_2), term_r_10), y_58));
            }
          }
      }
      return(t);
    }
    t = map_1_0(m_1, t);
  }
  return(t);
}
ATerm Tool_1_0 (ATerm y_69 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,r_2 = NULL,t_2 = NULL,u_2 = NULL,c_0 = NULL,e_0 = NULL;
  u_2 = t;
  if(match_cons(t, sym_Tool_1))
    {
      r_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_2);
  p_2 = t;
  t = r_2;
  t = y_69(t);
  t_2 = t;
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, t_2);
  c_0 = t;
  t = SSLsetAnnotations(c_0, p_2);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL;
  t = term_s_9;
  d_3 = t;
  t = term_t_9;
  e_3 = t;
  t = term_u_9;
  t = w_5(d_3, e_3, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_10;
      }
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm w_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 = NULL,h_3 = NULL;
      t = _2_0(s_1, _id, t);
      if(match_cons(t, sym__2))
        {
          ATerm c_11 = ATgetArgument(t, 0);
          if(match_cons(c_11, sym_Tool_1))
            {
              g_3 = ATgetArgument(c_11, 0);
            }
          else
            _fail(t);
          h_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_5(g_3, h_3, t);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = w_10;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = Tool_1_0(_id, t);
  return(t);
}
ATerm all_query_0_0 (ATerm t)
{
  t = term_e_11;
  t = get_config_0_0(t);
  t = repeat_1_0(o_1, t);
  t = term_s_9;
  t = table_getlist_0_0(t);
  t = map_1_0(q_1, t);
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm i_3 = NULL,p_3 = NULL,y_3 = NULL;
  t = term_f_11;
  t = get_config_0_0(t);
  t = xtc_location_0_0(t);
  i_3 = t;
  t = term_g_10;
  p_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_10), i_3), term_g_11);
  y_3 = t;
  t = SSL_print(p_3, y_3);
  t = (ATerm) ATmakeAppl(sym__2, term_g_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_10), i_3), term_g_11));
  return(t);
}
ATerm b_5 (ATerm d_46, ATerm e_46, ATerm t)
{
  ATerm z_3 = NULL;
  t = SSL_write_term_to_stream_baf(d_46, e_46);
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_3);
  return(t);
}
ATerm c_5 (ATerm k_90 (ATerm), ATerm k_425, ATerm l_46, ATerm t)
{
  ATerm a_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_425, term_i_11);
  t = open_stream_0_0(t);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_4, l_46);
  t = k_90(t);
  t = fclose_0_0(t);
  t = l_46;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm b_4 = NULL,d_4 = NULL,e_4 = NULL;
  b_4 = t;
  t = term_j_11;
  d_4 = t;
  t = (ATerm) ATinsert(ATempty, term_k_11);
  e_4 = t;
  t = SSL_printnl(d_4, e_4);
  t = b_4;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(match_cons(m_11, sym_Stream_1))
        {
          m_5 = ATgetArgument(m_11, 0);
        }
      else
        _fail(t);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(m_5, n_5, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_1, t);
  t = term_q_11;
  t = get_config_0_0(t);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_4 = NULL,s_4 = NULL;
            r_4 = t;
            t = (ATerm) ATinsert(ATempty, term_v_11);
            s_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_4, (ATerm) ATinsert(ATempty, term_v_11));
            t = u_5(r_4, s_4, t);
            LocalPopChoice(u_11);
            {
              ATerm t_4 = NULL,u_4 = NULL;
              t_4 = t;
              t = (ATerm) ATinsert(ATempty, term_x_11);
              u_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATinsert(ATempty, term_x_11));
              t = u_5(t_4, u_4, t);
            }
          }
        else
          {
            t = t_11;
          }
        LocalPopChoice(s_11);
        {
          ATerm i_5 = NULL,l_5 = NULL;
          i_5 = t;
          t = term_s_9;
          t = table_getlist_0_0(t);
          l_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_5, l_5);
          t = c_5(u_1, i_5, l_5, t);
        }
      }
    else
      {
        t = r_11;
        t = debug_1_0(v_1, t);
        _fail(t);
      }
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_c_12;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_d_12;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,a_6 = NULL;
  t = term_k_12;
  t = get_config_0_0(t);
  t = if_verbose2_1_0(w_1, t);
  t = term_k_12;
  t = get_config_0_0(t);
  x_5 = t;
  t = if_verbose5_1_0(y_1, t);
  t = term_s_9;
  y_5 = t;
  t = term_t_9;
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_9, term_t_9, x_5);
  t = d_5(y_5, a_6, x_5, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm r_6 = NULL;
  if(match_cons(t, sym__2))
    {
      r_6 = ATgetArgument(t, 0);
      if((r_6 != ATgetArgument(t, 1)))
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
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL;
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_12 = ATgetArgument(t, 0);
            ATerm s_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
        t = w_5(k_52, l_52, t);
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = (ATerm) ATempty;
      }
    k_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_52, k_6);
    t = p_5(a_2, j_52, k_6, t);
    l_6 = t;
    t = SSL_table_put(k_52, l_52, l_6);
    t = j_6;
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_6 = NULL,w_6 = NULL;
      s_6 = t;
      t = term_q_9;
      t = get_config_0_0(t);
      w_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_6, term_a_13);
      t = geq_0_0(t);
      t = s_6;
      t = a_99(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm a_7 = NULL,d_7 = NULL,e_7 = NULL;
  a_7 = t;
  t = term_j_11;
  d_7 = t;
  t = (ATerm) ATinsert(ATempty, term_b_13);
  e_7 = t;
  t = SSL_printnl(d_7, e_7);
  t = a_7;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = debug_1_0(s_2, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  t = term_x_9;
  t = get_config_0_0(t);
  x_6 = t;
  t = if_verbose1_1_0(c_2, t);
  t = if_verbose2_1_0(d_2, t);
  t = term_r_8;
  t = get_config_0_0(t);
  y_6 = t;
  t = if_verbose2_1_0(l_2, t);
  t = term_p_10;
  t = get_config_0_0(t);
  z_6 = t;
  t = if_verbose2_1_0(q_2, t);
  t = x_6;
  {
    ATerm v_2 (ATerm t)
    {
      ATerm f_7 = NULL,g_7 = NULL,j_7 = NULL,m_7 = NULL,n_7 = NULL,q_7 = NULL;
      f_7 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_7), term_h_13), z_6);
      j_7 = t;
      t = SSL_concat_strings(j_7);
      g_7 = t;
      t = term_s_9;
      m_7 = t;
      t = (ATerm) ATmakeAppl(sym_Tool_1, f_7);
      n_7 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_6, g_7));
      q_7 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_9, (ATerm)ATmakeAppl(sym_Tool_1, f_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_6, g_7)));
      t = d_5(m_7, n_7, q_7, t);
      return(t);
    }
    t = map_1_0(v_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 = NULL,t_7 = NULL;
      r_7 = t;
      t = term_q_9;
      t = get_config_0_0(t);
      t_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_7, term_q_13);
      t = geq_0_0(t);
      t = r_7;
      t = b_99(t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
      t = term_r_13;
      t = l_0(t);
      b_8 = t;
      t = term_s_13;
      c_8 = t;
      t = term_v_13;
      d_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_13, term_v_13, b_8);
      t = f_5(c_8, d_8, b_8, t);
      _fail(t);
    }
  else
    {
      ATerm h_8 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_7 = ATgetFirst((ATermList) t);
          y_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_7;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_7 = ATgetFirst((ATermList) t);
          a_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_7;
      t = j_0(t);
      t = z_7;
      t = k_0(t);
      h_8 = t;
      t = (ATerm) ATinsert(CheckATermList(a_8), h_8);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, s_8, t);
        ;
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_78(t);
      }
    return(t);
  }
  t = s_8(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm l_8 = NULL,m_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_8 = ATgetFirst((ATermList) t);
            m_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_8;
        {
          ATerm w_2 (ATerm t)
          {
            t = m_8;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(w_2, t);
        }
      }
    }
  return(t);
}
ATerm l_9 (ATerm w_8, ATerm t)
{
  ATerm a_9 = NULL;
  t = SSL_explode_term(w_8);
  if(match_cons(t, sym__2))
    {
      ATerm f_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  e_9 = t;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
      {
        ATerm g_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 (ATerm t)
            {
              t = d_9;
              return(t);
            }
            t = c_9;
            t = at_end_1_0(x_2, t);
            ;
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
            t = l_9(e_9, t);
          }
      }
    }
  else
    {
      t = l_9(e_9, t);
    }
  return(t);
}
ATerm e_5 (ATerm r_56, ATerm q_56, ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  t = r_56;
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        t = (ATerm) ATempty;
      }
    m_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_56, m_9);
    t = conc_0_0(t);
    n_9 = t;
    t = term_k_14;
    o_9 = t;
    t = SSL_table_put(o_9, r_56, n_9);
    t = (ATerm) ATmakeAppl(sym__3, term_k_14, r_56, n_9);
  }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm d_10 = NULL;
  d_10 = t;
  if(match_string(t, "-r"))
    {
      t = d_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = d_10;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm e_10 = NULL,h_10 = NULL;
  e_10 = t;
  t = term_q_11;
  h_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_11, e_10);
  t = h_5(h_10, e_10, t);
  t = e_10;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_l_14;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  if(match_string(t, "i"))
    {
      t = i_10;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = i_10;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = i_10;
        }
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm j_10 = NULL,o_10 = NULL,q_10 = NULL;
  j_10 = t;
  t = term_k_12;
  o_10 = t;
  t = (ATerm) ATinsert(ATempty, j_10);
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_12, (ATerm) ATinsert(ATempty, j_10));
  t = e_5(o_10, q_10, t);
  t = j_10;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  if(match_string(t, "r"))
    {
      t = s_10;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = s_10;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = s_10;
        }
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm u_10 = NULL,x_10 = NULL;
  u_10 = t;
  t = term_n_14;
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, u_10);
  t = h_5(x_10, u_10, t);
  t = u_10;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_o_14;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm y_10 = NULL;
  y_10 = t;
  if(match_string(t, "-t"))
    {
      t = y_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = y_10;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,d_11 = NULL;
  a_11 = t;
  t = term_x_9;
  b_11 = t;
  t = (ATerm) ATinsert(ATempty, a_11);
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATempty, a_11));
  t = e_5(b_11, d_11, t);
  t = a_11;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm h_11 = NULL;
  h_11 = t;
  if(match_string(t, "-l"))
    {
      t = h_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = h_11;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm l_11 = NULL,n_11 = NULL;
  l_11 = t;
  t = term_p_10;
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_10, l_11);
  t = h_5(n_11, l_11, t);
  t = l_11;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  if(match_string(t, "-V"))
    {
      t = p_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = p_11;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm w_11 = NULL,y_11 = NULL;
  w_11 = t;
  t = term_r_8;
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_8, w_11);
  t = h_5(y_11, w_11, t);
  t = w_11;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm z_11 = NULL;
  z_11 = t;
  if(match_string(t, "q"))
    {
      t = z_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = z_11;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  a_12 = t;
  t = term_v_14;
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_14, a_12);
  t = h_5(b_12, a_12, t);
  t = a_12;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm e_12 = NULL;
  e_12 = t;
  if(match_string(t, "-a"))
    {
      t = e_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = e_12;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  t = term_e_11;
  g_12 = t;
  t = term_r_13;
  h_12 = t;
  t = term_x_14;
  t = h_5(g_12, h_12, t);
  t = f_12;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  if(match_string(t, "-L"))
    {
      t = i_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = i_12;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm j_12 = NULL,l_12 = NULL,m_12 = NULL;
  j_12 = t;
  t = term_p_10;
  l_12 = t;
  t = term_r_13;
  m_12 = t;
  t = term_z_14;
  t = h_5(l_12, m_12, t);
  t = j_12;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_h_15;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm n_12 = NULL;
  n_12 = t;
  if(match_string(t, "-R"))
    {
      t = n_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = n_12;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm o_12 = NULL,v_12 = NULL,w_12 = NULL;
  o_12 = t;
  t = term_f_11;
  v_12 = t;
  t = term_r_13;
  w_12 = t;
  t = term_i_15;
  t = h_5(v_12, w_12, t);
  t = o_12;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  x_12 = t;
  t = SSL_string_to_int(x_12);
  y_12 = t;
  t = term_q_9;
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, y_12);
  t = h_5(z_12, y_12, t);
  t = x_12;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_n_15;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(y_2, z_2, a_3, t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_3, j_3, k_3, t);
            ;
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
            {
              ATerm s_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_3, m_3, n_3, t);
                  ;
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  {
                    ATerm w_15 = t;
                    int x_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(o_3, q_3, r_3, t);
                        ;
                        LocalPopChoice(x_15);
                      }
                    else
                      {
                        t = w_15;
                        {
                          ATerm b_16 = t;
                          int c_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(s_3, t_3, u_3, t);
                              ;
                              LocalPopChoice(c_16);
                            }
                          else
                            {
                              t = b_16;
                              {
                                ATerm e_16 = t;
                                int f_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(v_3, w_3, x_3, t);
                                    ;
                                    LocalPopChoice(f_16);
                                  }
                                else
                                  {
                                    t = e_16;
                                    {
                                      ATerm h_16 = t;
                                      int k_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(c_4, f_4, g_4, t);
                                          ;
                                          LocalPopChoice(k_16);
                                        }
                                      else
                                        {
                                          t = h_16;
                                          {
                                            ATerm n_16 = t;
                                            int o_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(h_4, i_4, j_4, t);
                                                ;
                                                LocalPopChoice(o_16);
                                              }
                                            else
                                              {
                                                t = n_16;
                                                {
                                                  ATerm p_16 = t;
                                                  int q_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(k_4, l_4, m_4, t);
                                                      ;
                                                      LocalPopChoice(q_16);
                                                    }
                                                  else
                                                    {
                                                      t = p_16;
                                                      {
                                                        ATerm r_16 = t;
                                                        int s_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(n_4, o_4, p_4, t);
                                                            ;
                                                            LocalPopChoice(s_16);
                                                          }
                                                        else
                                                          {
                                                            t = r_16;
                                                            t = ArgOption_3_0(q_4, v_4, w_4, t);
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
  ATerm c_13 = NULL,d_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_13 = ATgetFirst((ATermList) t);
      d_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_13 = NULL,l_13 = NULL;
        t = d_13;
        t = h_0(t);
        k_13 = t;
        t = c_13;
        t = g_0(t);
        l_13 = t;
        t = d_13;
        {
          ATerm x_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(k_13), l_13);
            return(t);
          }
          t = reverse_acc_2_0(g_0, x_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_13;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,i_0 = NULL,m_0 = NULL;
  p_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_13);
  m_13 = t;
  t = n_13;
  t = t_69(t);
  o_13 = t;
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_13);
  i_0 = t;
  t = SSLsetAnnotations(i_0, m_13);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm w_13 = NULL;
  w_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_13), term_d_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL;
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      t = fetch_1_0(y_4, t);
    }
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_18), term_o_17), term_n_17);
        t = echo_0_0(t);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
      }
    t = term_d_18;
    t = echo_0_0(t);
    t = term_s_13;
    t_13 = t;
    t = term_v_13;
    u_13 = t;
    t = term_f_18;
    t = w_5(t_13, u_13, t);
    t = reverse_acc_2_0(_id, z_4, t);
    t = map_1_0(g_5, t);
    {
      ATerm j_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_18), term_l_18), term_l_10);
          t = echo_0_0(t);
          ;
          LocalPopChoice(k_18);
        }
      else
        {
          t = j_18;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm u_69 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,n_0 = NULL,o_0 = NULL;
  c_14 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_14);
  z_13 = t;
  t = a_14;
  t = u_69(t);
  b_14 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, b_14);
  n_0 = t;
  t = SSLsetAnnotations(n_0, z_13);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_18 = ATgetFirst((ATermList) t);
                ATerm r_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_14;
          }
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = (ATerm) ATinsert(ATempty, p_14);
      }
    q_14 = t;
    t = term_g_10;
    r_14 = t;
    t = SSL_printnl(r_14, q_14);
    t = p_14;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_17;
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
  ATerm a_15 = NULL,b_15 = NULL;
  t = term_s_18;
  a_15 = t;
  t = term_r_13;
  b_15 = t;
  t = term_t_18;
  t = h_5(a_15, b_15, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_u_18;
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
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  t = term_s_18;
  c_15 = t;
  t = term_r_13;
  d_15 = t;
  t = term_t_18;
  t = h_5(c_15, d_15, t);
  t = term_v_18;
  e_15 = t;
  t = term_r_13;
  f_15 = t;
  t = term_w_18;
  t = h_5(e_15, f_15, t);
  t = term_y_18;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_z_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_5, b_6, c_6, t);
      ;
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      t = Option_3_0(d_6, e_6, f_6, t);
    }
  return(t);
}
ATerm h_5 (ATerm l_56, ATerm m_56, ATerm t)
{
  ATerm g_15 = NULL;
  t = term_k_14;
  g_15 = t;
  t = SSL_table_put(g_15, l_56, m_56);
  t = (ATerm) ATmakeAppl(sym__3, term_k_14, l_56, m_56);
  return(t);
}
ATerm f_5 (ATerm s_51, ATerm t_51, ATerm r_51, ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_51, t_51);
  {
    ATerm f_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_19 = ATgetArgument(t, 0);
            ATerm n_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_51, t_51);
        t = w_5(s_51, t_51, t);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = f_19;
        t = (ATerm) ATempty;
      }
    k_15 = t;
    t = (ATerm) ATinsert(CheckATermList(k_15), r_51);
    l_15 = t;
    t = SSL_table_put(s_51, t_51, l_15);
    t = j_15;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
      t = term_r_13;
      t = d_0(t);
      y_15 = t;
      t = term_s_13;
      z_15 = t;
      t = term_v_13;
      a_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_13, term_v_13, y_15);
      t = f_5(z_15, a_16, y_15, t);
      _fail(t);
    }
  else
    {
      ATerm d_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_15 = ATgetFirst((ATermList) t);
          v_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_15;
      t = a_0(t);
      t = term_r_13;
      t = b_0(t);
      d_16 = t;
      t = (ATerm) ATinsert(CheckATermList(v_15), d_16);
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  i_16 = t;
  t = term_g_17;
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_17, i_16);
  t = h_5(j_16, i_16, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, i_16);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm g_16 = NULL;
  g_16 = t;
  {
    ATerm o_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_19;
        t = l_95(t);
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = o_19;
      }
    t = g_16;
    {
      ATerm h_6 (ATerm t)
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_19 = t;
            int y_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(y_19);
              }
            else
              {
                t = x_19;
                t = l_95(t);
                t = Cons_2_0(_id, h_6, t);
              }
            ;
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            {
              ATerm l_16 = NULL,m_16 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_16 = ATgetFirst((ATermList) t);
                  m_16 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_16), (ATerm) ATmakeAppl(sym_Undefined_1, l_16));
            }
          }
        return(t);
      }
      t = Cons_2_0(g_6, h_6, t);
    }
  }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm a_17 = NULL;
  a_17 = t;
  if(match_string(t, "--help"))
    {
      t = a_17;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_17;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_17;
        }
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  t = term_z_19;
  b_17 = t;
  t = term_r_13;
  c_17 = t;
  t = term_a_20;
  t = h_5(b_17, c_17, t);
  t = term_b_20;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  t_16 = t;
  t = term_s_13;
  w_16 = t;
  t = term_v_13;
  x_16 = t;
  t = (ATerm) ATempty;
  y_16 = t;
  t = SSL_table_put(w_16, x_16, y_16);
  t = t_16;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm d_20 = t;
      int e_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_95(t);
          ;
          LocalPopChoice(e_20);
        }
      else
        {
          t = d_20;
          {
            ATerm h_20 = t;
            int j_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_6, n_6, o_6, t);
                ;
                LocalPopChoice(j_20);
              }
            else
              {
                t = h_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_6, t);
    {
      ATerm k_20 = t;
      int l_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_17 = NULL;
          j_17 = t;
          {
            ATerm m_20 = t;
            int n_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_0 = NULL;
                t = j_17;
                {
                  ATerm o_20 = t;
                  int p_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_z_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(p_20);
                    }
                  else
                    {
                      t = o_20;
                      t = fetch_1_0(p_6, t);
                    }
                  t = j_17;
                  t = default_system_usage_0_0(t);
                  t = term_q_20;
                  f_0 = t;
                  t = SSL_exit(f_0);
                }
                ;
                LocalPopChoice(n_20);
              }
            else
              {
                t = m_20;
                {
                  ATerm q_0 = NULL;
                  t = term_s_18;
                  t = get_config_0_0(t);
                  t = j_17;
                  t = default_system_about_0_0(t);
                  t = term_q_20;
                  q_0 = t;
                  t = SSL_exit(q_0);
                }
              }
          }
          ;
          LocalPopChoice(l_20);
        }
      else
        {
          t = k_20;
          {
            ATerm r_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
                ATerm q_6 (ATerm t)
                {
                  ATerm t_6 (ATerm t)
                  {
                    if(((u_16 != NULL) && (u_16 != t)))
                      _fail(t);
                    else
                      u_16 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_6, t);
                  return(t);
                }
                t = fetch_1_0(q_6, t);
                t = term_j_11;
                k_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_16)), term_t_20);
                l_17 = t;
                t = SSL_printnl(k_17, l_17);
                t = (ATerm) ATmakeAppl(sym__2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_16)), term_t_20));
                t = default_system_usage_0_0(t);
                t = term_a_13;
                m_17 = t;
                t = SSL_exit(m_17);
                ;
                LocalPopChoice(s_20);
              }
            else
              {
                t = r_20;
              }
          }
        }
      v_16 = t;
      t = term_s_13;
      z_16 = t;
      t = SSL_table_destroy(z_16);
      t = v_16;
    }
  }
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = debug_1_0(v_6, t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_v_20;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_17 = NULL;
      t = parse_options_1_0(xtc_options_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(u_6, t);
      t = xtc_read_0_0(t);
      {
        ATerm y_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_n_14;
                t = get_config_0_0(t);
                t = xtc_register_0_0(t);
                ;
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
                t = term_k_12;
                t = get_config_0_0(t);
                t = register_import_0_0(t);
              }
            t = xtc_store_0_0(t);
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = y_20;
            t = term_v_14;
            t = get_config_0_0(t);
            {
              ATerm d_21 = t;
              int g_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = repository_query_0_0(t);
                  ;
                  LocalPopChoice(g_21);
                }
              else
                {
                  t = d_21;
                  {
                    ATerm h_21 = t;
                    int k_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = all_query_0_0(t);
                        ;
                        LocalPopChoice(k_21);
                      }
                    else
                      {
                        t = h_21;
                        t = tool_query_0_0(t);
                      }
                  }
                }
            }
          }
        t = term_q_20;
        p_17 = t;
        t = SSL_exit(p_17);
      }
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      t = debug_1_0(b_7, t);
    }
  return(t);
}
ATerm j_5 (ATerm o_59, ATerm p_59, ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  t = p_59;
  t = map_1_0(xtc_find_0_0, t);
  q_17 = t;
  t = term_g_10;
  r_17 = t;
  t = SSL_print(r_17, q_17);
  t = term_g_10;
  s_17 = t;
  t = (ATerm) ATinsert(ATempty, term_l_10);
  t_17 = t;
  t = SSL_print(s_17, t_17);
  t = term_q_20;
  u_17 = t;
  t = SSL_exit(u_17);
  return(t);
}
ATerm k_5 (ATerm w_47, ATerm x_47, ATerm t)
{
  t = SSL_execvp(w_47, x_47);
  return(t);
}
ATerm debug_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  v_17 = t;
  t = i_90(t);
  w_17 = t;
  t = term_j_11;
  x_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_17), w_17);
  y_17 = t;
  t = SSL_printnl(x_17, y_17);
  t = v_17;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_17 = NULL;
  z_17 = t;
  t = SSL_table_keys(z_17);
  {
    ATerm c_7 (ATerm t)
    {
      ATerm a_18 = NULL,c_18 = NULL;
      a_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_17, a_18);
      t = w_5(z_17, a_18, t);
      c_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_18, c_18);
      return(t);
    }
    t = map_1_0(c_7, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_18 = NULL,g_18 = NULL;
      e_18 = t;
      t = term_q_9;
      t = get_config_0_0(t);
      g_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_18, term_n_21);
      t = geq_0_0(t);
      t = e_18;
      t = e_99(t);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
    }
  return(t);
}
ATerm fetch_1_0 (ATerm d_78 (ATerm), ATerm t)
{
  ATerm h_18 (ATerm t)
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_78, _id, t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = Cons_2_0(_id, h_18, t);
      }
    return(t);
  }
  t = h_18(t);
  return(t);
}
ATerm w_5 (ATerm j_53, ATerm k_53, ATerm t)
{
  t = SSL_table_get(j_53, k_53);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_18 = NULL,m_18 = NULL;
      i_18 = t;
      t = term_q_9;
      t = get_config_0_0(t);
      m_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_18, term_a_22);
      t = geq_0_0(t);
      t = i_18;
      t = d_99(t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_18 = NULL,a_19 = NULL,b_19 = NULL;
  x_18 = t;
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_19;
        if((a_19 != t))
          {
            _fail(t);
          }
        t = x_18;
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = (ATerm) ATmakeAppl(sym__2, a_19, b_19);
        {
          ATerm d_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_19, b_19);
              ;
              LocalPopChoice(f_22);
            }
          else
            {
              t = d_22;
              t = SSL_gtr(a_19, b_19);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_19, b_19);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_99 (ATerm), ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_19 = NULL,g_19 = NULL;
      e_19 = t;
      t = term_q_9;
      t = get_config_0_0(t);
      g_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_19, term_i_22);
      t = geq_0_0(t);
      t = e_19;
      t = f_99(t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
    }
  return(t);
}
ATerm o_5 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm y_29, ATerm x_29, ATerm t)
{
  t = b_82(t);
  {
    ATerm h_7 (ATerm t)
    {
      ATerm h_19 = NULL;
      h_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_29, h_19);
      t = a_82(t);
      return(t);
    }
    t = fetch_1_0(h_7, t);
    t = x_29;
  }
  return(t);
}
ATerm p_5 (ATerm x_81 (ATerm), ATerm u_29, ATerm t_29, ATerm t)
{
  t = u_29;
  {
    ATerm p_19 (ATerm t)
    {
      ATerm j_22 = t;
      int k_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_29;
          ;
          LocalPopChoice(k_22);
        }
      else
        {
          t = j_22;
          {
            ATerm l_22 = t;
            int m_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
                j_19 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    k_19 = ATgetFirst((ATermList) t);
                    l_19 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_19;
                {
                  ATerm i_7 (ATerm t)
                  {
                    t = t_29;
                    return(t);
                  }
                  t = o_5(x_81, i_7, k_19, l_19, t);
                  t = p_19(t);
                }
                ;
                LocalPopChoice(m_22);
              }
            else
              {
                t = l_22;
                t = Cons_2_0(_id, p_19, t);
              }
          }
        }
      return(t);
    }
    t = p_19(t);
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm f_20 = NULL;
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      if((f_20 != ATgetArgument(t, 1)))
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
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
  {
    ATerm r_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_22 = ATgetArgument(t, 0);
            ATerm y_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
        t = w_5(p_52, q_52, t);
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = r_22;
        t = (ATerm) ATempty;
      }
    s_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_19, r_52);
    t = p_5(k_7, s_19, r_52, t);
    t_19 = t;
    t = SSL_table_put(p_52, q_52, t_19);
    t = r_19;
  }
  return(t);
}
ATerm r_5 (ATerm o_95 (ATerm), ATerm z_52, ATerm y_52, ATerm t)
{
  t = y_52;
  {
    ATerm l_7 (ATerm t)
    {
      ATerm g_20 = NULL,i_20 = NULL;
      if(match_cons(t, sym__2))
        {
          g_20 = ATgetArgument(t, 0);
          i_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, z_52, g_20, i_20);
      t = o_95(t);
      return(t);
    }
    t = map_1_0(l_7, t);
  }
  return(t);
}
ATerm u_5 (ATerm n_42, ATerm o_42, ATerm t)
{
  t = SSL_access(n_42, o_42);
  return(t);
}
ATerm i_21 (ATerm z_20, ATerm t)
{
  t = SSL_fclose(z_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL;
  f_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_21 = ATgetArgument(t, 0);
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_21);
            ;
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            t = i_21(f_21, t);
          }
      }
    }
  else
    {
      t = i_21(f_21, t);
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
  ATerm j_21 = NULL;
  t = SSL_fopen(v_42, w_42);
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_21);
  return(t);
}
ATerm _2_0 (ATerm r_59 (ATerm), ATerm s_59 (ATerm), ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,r_0 = NULL,s_0 = NULL;
  t_21 = t;
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_21);
  o_21 = t;
  t = p_21;
  t = r_59(t);
  r_21 = t;
  t = q_21;
  t = s_59(t);
  s_21 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_21, s_21);
  r_0 = t;
  t = SSLsetAnnotations(r_0, o_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_21 = NULL;
  t = SSL_stdin_stream();
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_21 = NULL;
  t = SSL_stdout_stream();
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_22 = NULL;
  t = SSL_stderr_stream();
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_22);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm q_22 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      q_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_22;
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  t = SSL_is_string(u_22);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_23 = ATgetArgument(t, 0);
      ATerm h_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_22 = NULL,b_2 = NULL;
        n_22 = t;
        t = SSL_explode_term(n_22);
        if(match_cons(t, sym__2))
          {
            ATerm k_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_23 = ATgetArgument(t, 1);
              if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
                {
                  b_2 = ATgetFirst((ATermList) l_23);
                  {
                    ATerm m_23 = (ATerm) ATgetNext((ATermList) l_23);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = b_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = b_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm n_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_22 = NULL,p_22 = NULL;
              t = _2_0(o_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  o_22 = ATgetArgument(t, 0);
                  p_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_5(o_22, p_22, t);
              ;
              LocalPopChoice(r_23);
            }
          else
            {
              t = n_23;
              {
                ATerm s_22 = NULL,t_22 = NULL;
                t = _2_0(p_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    s_22 = ATgetArgument(t, 0);
                    t_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_5(s_22, t_22, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_22 = NULL,z_22 = NULL,a_23 = NULL;
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_23 = NULL;
      b_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_23, term_z_23);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = debug_1_0(s_7, t);
      _fail(t);
    }
  x_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(a_23, t);
  z_22 = t;
  t = x_22;
  t = fclose_0_0(t);
  t = z_22;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_23 = NULL,f_23 = NULL;
      e_23 = t;
      t = (ATerm) ATinsert(ATempty, term_n_24);
      f_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_23, (ATerm) ATinsert(ATempty, term_n_24));
      t = u_5(e_23, f_23, t);
      LocalPopChoice(i_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = h_24;
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_24 = t;
            if((PushChoice() == 0))
              {
                ATerm o_23 = NULL,p_23 = NULL;
                o_23 = t;
                t = (ATerm) ATinsert(ATempty, term_v_11);
                p_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_23, (ATerm) ATinsert(ATempty, term_v_11));
                t = u_5(o_23, p_23, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_24;
              }
            t = debug_1_0(u_7, t);
            ;
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            t = debug_1_0(v_7, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = debug_1_0(e_8, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = debug_1_0(g_8, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,s_24 = NULL;
  l_24 = t;
  t = term_j_11;
  m_24 = t;
  t = (ATerm) ATinsert(ATempty, term_d_25);
  s_24 = t;
  t = SSL_printnl(m_24, s_24);
  t = l_24;
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  if(match_cons(t, sym__3))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
      v_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_5(t_24, u_24, v_24, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  w_24 = t;
  t = term_j_11;
  x_24 = t;
  t = (ATerm) ATinsert(ATempty, term_e_25);
  y_24 = t;
  t = SSL_printnl(x_24, y_24);
  t = w_24;
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
  z_24 = t;
  t = term_j_11;
  a_25 = t;
  t = (ATerm) ATinsert(ATempty, term_d_25);
  b_25 = t;
  t = SSL_printnl(a_25, b_25);
  t = z_24;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm q_23 = NULL,s_23 = NULL,t_23 = NULL,x_23 = NULL,y_23 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  q_23 = t;
  t = if_verbose5_1_0(w_7, t);
  {
    ATerm g_25 = t;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL,k_24 = NULL;
        t = term_s_9;
        j_24 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, q_23);
        k_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATmakeAppl(sym_Imported_1, q_23));
        t = w_5(j_24, k_24, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_25;
      }
    s_23 = t;
    t = term_s_9;
    x_23 = t;
    t = term_h_25;
    y_23 = t;
    t = (ATerm) ATinsert(ATempty, q_23);
    c_24 = t;
    t = SSL_table_put(x_23, y_23, c_24);
    t = s_23;
    t = if_verbose4_1_0(f_8, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(i_8, t);
    t_23 = t;
    t = term_s_9;
    d_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_9, t_23);
    t = r_5(j_8, d_24, t_23, t);
    t = if_verbose6_1_0(k_8, t);
    t = term_s_9;
    e_24 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, q_23);
    f_24 = t;
    t = (ATerm) ATempty;
    g_24 = t;
    t = SSL_table_put(e_24, f_24, g_24);
    t = (ATerm) ATmakeAppl(sym__3, term_s_9, (ATerm)ATmakeAppl(sym_Imported_1, q_23), (ATerm) ATempty);
    t = if_verbose4_1_0(n_8, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm i_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = i_25;
      {
        ATerm r_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_8 (ATerm t)
            {
              t = filter_1_0(z_84, t);
              return(t);
            }
            t = Cons_2_0(z_84, o_8, t);
            ;
            LocalPopChoice(t_25);
          }
        else
          {
            t = r_25;
            {
              ATerm f_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_25 = ATgetFirst((ATermList) t);
                  f_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = f_25;
              t = filter_1_0(z_84, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  ATerm j_25 (ATerm t)
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_71(t);
        t = j_25(t);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
      }
    return(t);
  }
  t = j_25(t);
  return(t);
}
ATerm v_5 (ATerm j_37, ATerm k_37, ATerm t)
{
  t = SSL_strcat(j_37, k_37);
  return(t);
}
ATerm Cons_2_0 (ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,u_0 = NULL,x_0 = NULL;
  p_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_25 = ATgetFirst((ATermList) t);
      m_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_25);
  k_25 = t;
  t = l_25;
  t = g_64(t);
  n_25 = t;
  t = m_25;
  t = h_64(t);
  o_25 = t;
  x_0 = t;
  t = (ATerm) ATinsert(CheckATermList(o_25), n_25);
  u_0 = t;
  t = SSLsetAnnotations(u_0, k_25);
  return(t);
}
ATerm map_1_0 (ATerm t_77 (ATerm), ATerm t)
{
  ATerm s_25 (ATerm t)
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = Cons_2_0(t_77, s_25, t);
      }
    return(t);
  }
  t = s_25(t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_26 = NULL;
      b_26 = t;
      t = SSL_is_string(b_26);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm f_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_8, t);
            ;
            LocalPopChoice(i_26);
          }
        else
          {
            t = f_26;
            {
              ATerm g_26 = NULL,h_26 = NULL,k_26 = NULL;
              g_26 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_26 = ATgetArgument(t, 0);
                  t = h_26;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_26 = ATgetArgument(t, 0);
                      t = h_26;
                      {
                        ATerm j_26 = t;
                        int l_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_26);
                          }
                        else
                          {
                            t = j_26;
                            t = debug_1_0(q_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_26 = NULL,p_26 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_26 = ATgetArgument(t, 0);
                          k_26 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_26;
                      t = eval_config_0_0(t);
                      o_26 = t;
                      t = k_26;
                      t = eval_config_0_0(t);
                      p_26 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_26, p_26);
                      t = v_5(o_26, p_26, t);
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
  ATerm s_26 = NULL,t_26 = NULL;
  s_26 = t;
  t = term_k_14;
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_14, s_26);
  t = w_5(t_26, s_26, t);
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL,v_26 = NULL;
        t = eval_config_0_0(t);
        u_26 = t;
        t = term_k_14;
        v_26 = t;
        t = SSL_table_put(v_26, s_26, u_26);
        t = u_26;
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
      }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_26 = NULL;
            t = term_f_27;
            w_26 = t;
            t = SSL_getenv(w_26);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = debug_1_0(u_8, t);
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  t = term_s_9;
  b_27 = t;
  t = term_t_9;
  c_27 = t;
  t = term_u_9;
  t = w_5(b_27, c_27, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm o_27 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_27;
      }
  }
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = debug_1_0(y_8, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm x_26 = NULL;
  t = if_verbose5_1_0(t_8, t);
  x_26 = t;
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_26 = NULL,z_26 = NULL;
        t = term_s_9;
        y_26 = t;
        t = term_h_25;
        z_26 = t;
        t = term_v_27;
        t = w_5(y_26, z_26, t);
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        {
          ATerm a_27 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          a_27 = t;
          t = repeat_1_0(v_8, t);
          t = a_27;
        }
      }
    t = x_26;
    t = if_verbose5_1_0(x_8, t);
  }
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = debug_1_0(b_9, t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm y_27 (ATerm g_27, ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  t = term_s_9;
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_27);
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATmakeAppl(sym_Tool_1, g_27));
  t = w_5(j_27, k_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_27 = ATgetFirst((ATermList) t);
      if(match_cons(z_27, sym__2))
        {
          ATerm b_28 = ATgetArgument(z_27, 0);
          i_27 = ATgetArgument(z_27, 1);
        }
      else
        _fail(t);
      {
        ATerm a_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_27;
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = debug_1_0(h_9, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_s_9;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_9, t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm d_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(z_8, t);
      t = xtc_load_0_0(t);
      {
        ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
        n_27 = t;
        if(match_cons(t, sym__2))
          {
            l_27 = ATgetArgument(t, 0);
            m_27 = ATgetArgument(t, 1);
            {
              ATerm m_28 = t;
              int n_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
                  t = term_s_9;
                  r_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, l_27);
                  s_27 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATmakeAppl(sym_Tool_1, l_27));
                  t = w_5(r_27, s_27, t);
                  {
                    ATerm f_9 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((m_27 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((q_27 != NULL) && (q_27 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            q_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(f_9, t);
                    t = not_null(q_27);
                  }
                  ;
                  LocalPopChoice(n_28);
                }
              else
                {
                  t = m_28;
                  t = y_27(n_27, t);
                }
            }
          }
        else
          {
            t = y_27(n_27, t);
          }
        t = if_verbose5_1_0(g_9, t);
      }
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = d_28;
      {
        ATerm x_27 = NULL,c_3 = NULL,f_3 = NULL;
        x_27 = t;
        t = term_j_11;
        c_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_28), x_27), term_p_28);
        f_3 = t;
        t = SSL_printnl(c_3, f_3);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_28), x_27), term_p_28);
        t = if_verbose5_1_0(i_9, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
      g_28 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_28 = ATgetFirst((ATermList) t);
          i_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_28 = ATgetFirst((ATermList) t);
          k_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_28;
      if(match_string(t, "call"))
        {
          ATerm o_28 = NULL;
          t = k_28;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_28 = ATgetFirst((ATermList) t);
              f_28 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_28;
          t = xtc_find_0_0(t);
          o_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_28, f_28);
          t = k_5(o_28, f_28, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = g_28;
          t = j_5(h_28, k_28, t);
        }
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      t = xtc_main_0_0(t);
    }
  return(t);
}
