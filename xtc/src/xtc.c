#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
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
static void init_module_constructors (void)
{
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
}
ATerm term_b_25;
ATerm term_a_25;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_q_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_s_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_c_21;
ATerm term_q_20;
ATerm term_h_20;
ATerm term_e_19;
ATerm term_a_19;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_s_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_p_15;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
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
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_d_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_n_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_r_12);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_r_12);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__2, term_c_11, term_r_12);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_u_12);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_r_12);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__2, term_z_16, term_r_12);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_r_12);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_b_23);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm version_query_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm d_94 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm tool_query_0_0 (ATerm t);
static ATerm a_5 (ATerm q_49, ATerm f_635, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm all_query_0_0 (ATerm t);
ATerm repository_query_0_0 (ATerm t);
static ATerm b_5 (ATerm d_14, ATerm e_14, ATerm t);
static ATerm c_5 (ATerm w_70 (ATerm), ATerm q_143, ATerm l_14, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm xtc_store_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm register_import_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm d_5 (ATerm x_42, ATerm y_42, ATerm w_42, ATerm t);
ATerm if_verbose1_1_0 (ATerm b_94 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm c_94 (ATerm), ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm v_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_12 (ATerm m_11, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_5 (ATerm i_47, ATerm h_47, ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm xtc_options_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm h_5 (ATerm c_47, ATerm d_47, ATerm t);
static ATerm f_5 (ATerm f_42, ATerm g_42, ATerm e_42, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm i_50 (ATerm), ATerm j_50 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_89 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm parse_options_1_0 (ATerm k_89 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm xtc_main_0_0 (ATerm t);
static ATerm j_5 (ATerm g_50, ATerm h_50, ATerm t);
static ATerm k_5 (ATerm h_38, ATerm i_38, ATerm t);
ATerm debug_1_0 (ATerm u_70 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm f_94 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm p_71 (ATerm), ATerm t);
static ATerm x_5 (ATerm w_43, ATerm x_43, ATerm t);
ATerm if_verbose4_1_0 (ATerm e_94 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm g_94 (ATerm), ATerm t);
static ATerm o_5 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm e_20, ATerm d_20, ATerm t);
static ATerm p_5 (ATerm j_75 (ATerm), ATerm a_20, ATerm z_19, ATerm t);
static ATerm c_7 (ATerm t);
static ATerm q_5 (ATerm c_43, ATerm d_43, ATerm e_43, ATerm t);
static ATerm r_5 (ATerm o_89 (ATerm), ATerm m_43, ATerm l_43, ATerm t);
static ATerm v_5 (ATerm s_28, ATerm t_28, ATerm t);
static ATerm a_29 (ATerm u_28, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_5 (ATerm j_14, ATerm t);
static ATerm t_5 (ATerm b_29, ATerm c_29, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_30 (ATerm o_29, ATerm t);
static ATerm q_30 (ATerm s_29, ATerm t_29, ATerm u_29, ATerm t);
static ATerm r_30 (ATerm c_30, ATerm d_30, ATerm e_30, ATerm t);
static ATerm u_5 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm m_78 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm t_63 (ATerm), ATerm u_63 (ATerm), ATerm t);
static ATerm w_5 (ATerm s_27, ATerm t_27, ATerm t);
ATerm map_1_0 (ATerm f_71 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm o_35 (ATerm w_34, ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm version_query_0_0 (ATerm t)
{
  ATerm l_0 = NULL,m_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,x_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL,g_0 = NULL;
  u_0 = t;
  t = term_d_9;
  t = get_config_0_0(t);
  m_0 = t;
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
    static ATerm a_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((m_0 != ATgetArgument(t, 0)))
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
  }
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_0, b_1);
  g_0 = t;
  t = SSLsetAnnotations(g_0, x_0);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_0, not_null(t_0)));
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, l_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_0, not_null(t_0))));
  t = a_5(l_0, v_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm d_1 = NULL;
  d_1 = t;
  {
    ATerm f_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        f_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_1, term_l_9);
        t = geq_0_0(t);
        t = d_1;
        t = d_94(t);
        LocalPopChoice(h_9);
      }
    else
      {
        t = f_9;
        t = d_1;
      }
  }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm m_1 = NULL,o_1 = NULL;
  t = term_m_9;
  m_1 = t;
  t = term_n_9;
  o_1 = t;
  t = term_o_9;
  t = x_5(m_1, o_1, t);
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
static ATerm r_0 (ATerm t)
{
  t = debug_1_0(s_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  static ATerm f_0 (ATerm t)
  {
    ATerm s_1 = NULL;
    s_1 = t;
    {
      ATerm r_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_1 = NULL,w_1 = NULL;
          t = if_verbose3_1_0(r_0, t);
          t = term_m_9;
          u_1 = t;
          t = (ATerm) ATmakeAppl(sym_Tool_1, s_1);
          w_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym_Tool_1, s_1));
          t = x_5(u_1, w_1, t);
          if(((k_1 != NULL) && (k_1 != t)))
            _fail(t);
          else
            k_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, s_1), k_1);
          {
            ATerm v_9 = t;
            int w_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = version_query_0_0(t);
                LocalPopChoice(w_9);
              }
            else
              {
                t = v_9;
                if(match_cons(t, sym__2))
                  {
                    ATerm z_9 = ATgetArgument(t, 0);
                    ATerm a_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, s_1), k_1);
                t = a_5(s_1, k_1, t);
              }
          }
          LocalPopChoice(t_9);
        }
      else
        {
          t = r_9;
          {
            ATerm h_2 = NULL,i_2 = NULL;
            t = term_b_10;
            h_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), term_c_10), s_1);
            i_2 = t;
            t = SSL_print(h_2, i_2);
            t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), term_c_10), s_1));
          }
        }
    }
    return(t);
  }
  t = term_h_10;
  t = get_config_0_0(t);
  l_1 = t;
  t = repeat_2_0(b_0, _id, t);
  t = l_1;
  t = map_1_0(f_0, t);
  return(t);
}
static ATerm a_5 (ATerm q_49, ATerm f_635, ATerm t)
{
  static ATerm e_1 (ATerm t)
  {
    ATerm j_2 = NULL,l_2 = NULL;
    if(match_cons(t, sym__2))
      {
        j_2 = ATgetArgument(t, 0);
        l_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm k_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_2 = NULL,n_2 = NULL;
          t = term_n_10;
          t = get_config_0_0(t);
          t = term_b_10;
          m_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_f_10), l_2);
          n_2 = t;
          t = SSL_print(m_2, n_2);
          t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATempty, term_f_10), l_2));
          LocalPopChoice(l_10);
        }
      else
        {
          t = k_10;
          {
            ATerm p_2 = NULL,q_2 = NULL;
            t = term_b_10;
            p_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_10), l_2), term_r_10), j_2), term_q_10), q_49);
            q_2 = t;
            t = SSL_print(p_2, q_2);
            t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_10), l_2), term_r_10), j_2), term_q_10), q_49));
          }
        }
    }
    return(t);
  }
  t = f_635;
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL;
  t = term_m_9;
  a_3 = t;
  t = term_n_9;
  b_3 = t;
  t = term_o_9;
  t = x_5(a_3, b_3, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm t_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_10;
      }
  }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
  c_4 = t;
  if(match_cons(t, sym__2))
    {
      a_4 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 = NULL,j_0 = NULL,q_0 = NULL,w_0 = NULL,z_0 = NULL,c_1 = NULL,i_3 = NULL,g_3 = NULL;
            t = SSLgetAnnotations(c_4);
            q_0 = t;
            t = a_4;
            if(match_cons(t, sym_Tool_1))
              {
                z_0 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_4);
            w_0 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, z_0);
            g_3 = t;
            t = SSLsetAnnotations(g_3, w_0);
            c_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_1, b_4);
            i_3 = t;
            t = SSLsetAnnotations(i_3, q_0);
            if(match_cons(t, sym__2))
              {
                ATerm z_10 = ATgetArgument(t, 0);
                if(match_cons(z_10, sym_Tool_1))
                  {
                    h_0 = ATgetArgument(z_10, 0);
                  }
                else
                  _fail(t);
                j_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_5(h_0, j_0, t);
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            t = c_4;
          }
      }
    }
  else
    {
      t = c_4;
    }
  return(t);
}
ATerm all_query_0_0 (ATerm t)
{
  t = term_b_11;
  t = get_config_0_0(t);
  t = repeat_2_0(g_1, _id, t);
  t = term_m_9;
  t = table_getlist_0_0(t);
  t = map_1_0(h_1, t);
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  t = term_c_11;
  t = get_config_0_0(t);
  t = xtc_location_0_0(t);
  q_4 = t;
  t = term_b_10;
  r_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), q_4), term_d_11);
  s_4 = t;
  t = SSL_print(r_4, s_4);
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), q_4), term_d_11));
  return(t);
}
static ATerm b_5 (ATerm d_14, ATerm e_14, ATerm t)
{
  ATerm t_4 = NULL;
  t = SSL_write_term_to_stream_baf(d_14, e_14);
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_4);
  return(t);
}
static ATerm c_5 (ATerm w_70 (ATerm), ATerm q_143, ATerm l_14, ATerm t)
{
  ATerm u_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_143, term_f_11);
  t = u_5(t);
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_4, l_14);
  t = w_70(t);
  t = fclose_0_0(t);
  t = l_14;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm w_4 = NULL,z_4 = NULL,l_5 = NULL;
  w_4 = t;
  t = term_g_11;
  z_4 = t;
  t = (ATerm) ATinsert(ATempty, term_h_11);
  l_5 = t;
  t = SSL_printnl(z_4, l_5);
  t = w_4;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      if(match_cons(i_11, sym_Stream_1))
        {
          p_6 = ATgetArgument(i_11, 0);
        }
      else
        _fail(t);
      q_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(p_6, q_6, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_1, t);
  t = term_k_11;
  t = get_config_0_0(t);
  {
    ATerm l_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 = NULL,y_5 = NULL;
            n_5 = t;
            t = (ATerm) ATinsert(ATempty, term_r_11);
            y_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_5, (ATerm) ATinsert(ATempty, term_r_11));
            t = v_5(n_5, y_5, t);
            LocalPopChoice(p_11);
            {
              ATerm z_5 = NULL,b_6 = NULL;
              z_5 = t;
              t = (ATerm) ATinsert(ATempty, term_s_11);
              b_6 = t;
              t = (ATerm) ATmakeAppl(sym__2, z_5, (ATerm) ATinsert(ATempty, term_s_11));
              t = v_5(z_5, b_6, t);
            }
          }
        else
          {
            t = o_11;
          }
        LocalPopChoice(n_11);
        {
          ATerm n_6 = NULL,o_6 = NULL;
          o_6 = t;
          t = term_m_9;
          t = table_getlist_0_0(t);
          n_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_6, n_6);
          t = c_5(j_1, o_6, n_6, t);
        }
      }
    else
      {
        t = l_11;
        t = debug_1_0(n_1, t);
        _fail(t);
      }
  }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_t_11;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  t = term_v_11;
  t = get_config_0_0(t);
  t = if_verbose2_1_0(p_1, t);
  t = term_v_11;
  t = get_config_0_0(t);
  t_6 = t;
  t = if_verbose5_1_0(r_1, t);
  t = term_m_9;
  u_6 = t;
  t = term_n_9;
  v_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_9, term_n_9, t_6);
  t = d_5(u_6, v_6, t_6, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm h_7 = NULL;
  if(match_cons(t, sym__2))
    {
      h_7 = ATgetArgument(t, 0);
      if((h_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm x_42, ATerm y_42, ATerm w_42, ATerm t)
{
  ATerm x_6 = NULL,a_7 = NULL,b_7 = NULL;
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_42, y_42);
  {
    ATerm x_11 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, x_42, y_42);
        t = x_5(x_42, y_42, t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = x_11;
        t = (ATerm) ATempty;
      }
  }
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_42, b_7);
  t = p_5(x_1, w_42, b_7, t);
  a_7 = t;
  t = SSL_table_put(x_42, y_42, a_7);
  t = x_6;
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm j_7 = NULL;
  j_7 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        q_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_7, term_e_12);
        t = geq_0_0(t);
        t = j_7;
        t = b_94(t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = j_7;
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  z_7 = t;
  t = term_g_11;
  a_8 = t;
  t = (ATerm) ATinsert(ATempty, term_g_12);
  b_8 = t;
  t = SSL_printnl(a_8, b_8);
  t = z_7;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_h_12;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_i_12;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_j_12;
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,y_7 = NULL;
  static ATerm g_2 (ATerm t)
  {
    ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
    i_8 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_8), term_k_12), not_null(y_7));
    m_8 = t;
    t = SSL_concat_strings(m_8);
    h_8 = t;
    t = term_m_9;
    j_8 = t;
    t = (ATerm) ATmakeAppl(sym_Tool_1, i_8);
    k_8 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(v_7), h_8));
    l_8 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_m_9, (ATerm)ATmakeAppl(sym_Tool_1, i_8), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(v_7), h_8)));
    t = d_5(j_8, k_8, l_8, t);
    return(t);
  }
  t = term_h_10;
  t = get_config_0_0(t);
  u_7 = t;
  t = if_verbose1_1_0(y_1, t);
  t = if_verbose2_1_0(z_1, t);
  t = term_d_9;
  t = get_config_0_0(t);
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  t = if_verbose2_1_0(c_2, t);
  t = term_n_10;
  t = get_config_0_0(t);
  if(((y_7 != NULL) && (y_7 != t)))
    _fail(t);
  else
    y_7 = t;
  t = if_verbose2_1_0(e_2, t);
  t = u_7;
  t = map_1_0(g_2, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm r_8 = NULL;
  r_8 = t;
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        t_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_8, term_o_12);
        t = geq_0_0(t);
        t = r_8;
        t = c_94(t);
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = r_8;
      }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,e_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_9 = NULL,i_9 = NULL,k_9 = NULL;
      t = term_r_12;
      t = p_0(t);
      g_9 = t;
      t = term_t_12;
      i_9 = t;
      t = term_u_12;
      k_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_12, term_u_12, g_9);
      t = f_5(i_9, k_9, g_9, t);
      _fail(t);
    }
  else
    {
      ATerm s_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_9 = ATgetFirst((ATermList) t);
          b_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_9 = ATgetFirst((ATermList) t);
          e_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_9;
      t = n_0(t);
      t = c_9;
      t = o_0(t);
      s_9 = t;
      t = (ATerm) ATinsert(CheckATermList(e_9), s_9);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_71 (ATerm), ATerm t)
{
  static ATerm e_11 (ATerm t)
  {
    ATerm v_10 = NULL,y_10 = NULL,a_11 = NULL;
    a_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_10 = ATgetFirst((ATermList) t);
        y_10 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_1 = NULL,a_2 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(a_11);
          v_1 = t;
          t = y_10;
          t = e_11(t);
          a_2 = t;
          t = (ATerm) ATinsert(CheckATermList(a_2), v_10);
          p_3 = t;
          t = SSLsetAnnotations(p_3, v_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_11;
        t = v_71(t);
      }
    return(t);
  }
  t = e_11(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_9 = NULL,x_9 = NULL,y_9 = NULL;
  u_9 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_9;
    }
  else
    {
      static ATerm k_2 (ATerm t)
      {
        t = not_null(y_9);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_9 = ATgetFirst((ATermList) t);
          if(((y_9 != NULL) && (y_9 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_9;
      t = at_end_1_0(k_2, t);
    }
  return(t);
}
static ATerm l_12 (ATerm m_11, ATerm t)
{
  ATerm q_11 = NULL;
  t = SSL_explode_term(m_11);
  if(match_cons(t, sym__2))
    {
      ATerm v_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_11 = NULL,y_11 = NULL,f_12 = NULL;
  f_12 = t;
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      y_11 = ATgetArgument(t, 1);
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_2 (ATerm t)
            {
              t = y_11;
              return(t);
            }
            t = w_11;
            t = at_end_1_0(o_2, t);
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
            t = l_12(f_12, t);
          }
      }
    }
  else
    {
      t = l_12(f_12, t);
    }
  return(t);
}
static ATerm e_5 (ATerm i_47, ATerm h_47, ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,s_12 = NULL;
  t = i_47;
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = (ATerm) ATempty;
      }
  }
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_47, q_12);
  t = conc_0_0(t);
  p_12 = t;
  t = term_a_13;
  s_12 = t;
  t = SSL_table_put(s_12, i_47, p_12);
  t = (ATerm) ATmakeAppl(sym__3, term_a_13, i_47, p_12);
  return(t);
}
static ATerm r_2 (ATerm t)
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
static ATerm t_2 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  q_13 = t;
  t = term_k_11;
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_11, q_13);
  t = h_5(r_13, q_13, t);
  t = q_13;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_b_13;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  if(match_string(t, "i"))
    {
      t = u_13;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = u_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = u_13;
        }
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  v_13 = t;
  t = term_v_11;
  w_13 = t;
  t = (ATerm) ATinsert(ATempty, v_13);
  x_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATinsert(ATempty, v_13));
  t = e_5(w_13, x_13, t);
  t = v_13;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  if(match_string(t, "r"))
    {
      t = y_13;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = y_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = y_13;
        }
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm c_14 = NULL,i_14 = NULL;
  c_14 = t;
  t = term_d_13;
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, c_14);
  t = h_5(i_14, c_14, t);
  t = c_14;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_e_13;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  if(match_string(t, "-t"))
    {
      t = m_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = m_14;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  t = term_h_10;
  o_14 = t;
  t = (ATerm) ATinsert(ATempty, n_14);
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_10, (ATerm) ATinsert(ATempty, n_14));
  t = e_5(o_14, p_14, t);
  t = n_14;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_f_13;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  if(match_string(t, "-l"))
    {
      t = q_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = q_14;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL;
  r_14 = t;
  t = term_n_10;
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, r_14);
  t = h_5(s_14, r_14, t);
  t = r_14;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_g_13;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  if(match_string(t, "-V"))
    {
      t = y_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = y_14;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  z_14 = t;
  t = term_d_9;
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_9, z_14);
  t = h_5(a_15, z_14, t);
  t = z_14;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_h_13;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm d_15 = NULL;
  d_15 = t;
  if(match_string(t, "q"))
    {
      t = d_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = d_15;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  t = term_i_13;
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, g_15);
  t = h_5(h_15, g_15, t);
  t = g_15;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_j_13;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm i_15 = NULL;
  i_15 = t;
  if(match_string(t, "-a"))
    {
      t = i_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = i_15;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm j_15 = NULL,o_15 = NULL,q_15 = NULL;
  j_15 = t;
  t = term_b_11;
  o_15 = t;
  t = term_r_12;
  q_15 = t;
  t = term_k_13;
  t = h_5(o_15, q_15, t);
  t = j_15;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_l_13;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm a_16 = NULL;
  a_16 = t;
  if(match_string(t, "-L"))
    {
      t = a_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = a_16;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,f_16 = NULL;
  b_16 = t;
  t = term_n_10;
  c_16 = t;
  t = term_r_12;
  f_16 = t;
  t = term_n_13;
  t = h_5(c_16, f_16, t);
  t = b_16;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_o_13;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_16 = NULL;
  g_16 = t;
  if(match_string(t, "-R"))
    {
      t = g_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = g_16;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm h_16 = NULL,l_16 = NULL,n_16 = NULL;
  h_16 = t;
  t = term_c_11;
  l_16 = t;
  t = term_r_12;
  n_16 = t;
  t = term_p_13;
  t = h_5(l_16, n_16, t);
  t = h_16;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,t_16 = NULL;
  q_16 = t;
  t = SSL_string_to_int(q_16);
  r_16 = t;
  t = term_j_9;
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, r_16);
  t = h_5(t_16, r_16, t);
  t = q_16;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(r_2, t_2, u_2, t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm b_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_2, x_2, y_2, t);
            LocalPopChoice(f_14);
          }
        else
          {
            t = b_14;
            {
              ATerm g_14 = t;
              int h_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(z_2, c_3, e_3, t);
                  LocalPopChoice(h_14);
                }
              else
                {
                  t = g_14;
                  {
                    ATerm k_14 = t;
                    int t_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(f_3, h_3, j_3, t);
                        LocalPopChoice(t_14);
                      }
                    else
                      {
                        t = k_14;
                        {
                          ATerm u_14 = t;
                          int v_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(l_3, m_3, n_3, t);
                              LocalPopChoice(v_14);
                            }
                          else
                            {
                              t = u_14;
                              {
                                ATerm w_14 = t;
                                int x_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(o_3, q_3, s_3, t);
                                    LocalPopChoice(x_14);
                                  }
                                else
                                  {
                                    t = w_14;
                                    {
                                      ATerm b_15 = t;
                                      int c_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(u_3, v_3, w_3, t);
                                          LocalPopChoice(c_15);
                                        }
                                      else
                                        {
                                          t = b_15;
                                          {
                                            ATerm e_15 = t;
                                            int f_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(x_3, y_3, d_4, t);
                                                LocalPopChoice(f_15);
                                              }
                                            else
                                              {
                                                t = e_15;
                                                {
                                                  ATerm k_15 = t;
                                                  int l_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(e_4, g_4, h_4, t);
                                                      LocalPopChoice(l_15);
                                                    }
                                                  else
                                                    {
                                                      t = k_15;
                                                      {
                                                        ATerm m_15 = t;
                                                        int n_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(j_4, k_4, l_4, t);
                                                            LocalPopChoice(n_15);
                                                          }
                                                        else
                                                          {
                                                            t = m_15;
                                                            t = ArgOption_3_0(m_4, n_4, o_4, t);
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
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_16 = ATgetFirst((ATermList) t);
      w_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_17 = NULL,d_17 = NULL;
        static ATerm p_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_17)), not_null(d_17));
          return(t);
        }
        t = w_16;
        t = k_0(t);
        if(((c_17 != NULL) && (c_17 != t)))
          _fail(t);
        else
          c_17 = t;
        t = v_16;
        t = i_0(t);
        if(((d_17 != NULL) && (d_17 != t)))
          _fail(t);
        else
          d_17 = t;
        t = w_16;
        t = reverse_acc_2_0(i_0, p_4, t);
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
static ATerm v_4 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,r_3 = NULL;
  o_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_17);
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_17);
  r_3 = t;
  t = SSLsetAnnotations(r_3, m_17);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm x_17 = NULL;
  x_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_17), term_p_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL;
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_15;
      t = get_config_0_0(t);
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      t = fetch_1_0(v_4, t);
    }
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_15), term_x_15), term_w_15);
        t = echo_0_0(t);
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
      }
  }
  t = term_z_15;
  t = echo_0_0(t);
  t = term_t_12;
  k_17 = t;
  t = term_u_12;
  l_17 = t;
  t = term_d_16;
  t = x_5(k_17, l_17, t);
  t = reverse_acc_2_0(_id, x_4, t);
  t = map_1_0(y_4, t);
  {
    ATerm e_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_16), term_j_16), term_f_10);
        t = echo_0_0(t);
        LocalPopChoice(i_16);
      }
    else
      {
        t = e_16;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  h_18 = t;
  {
    ATerm m_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_16 = ATgetFirst((ATermList) t);
                ATerm s_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_18;
          }
        LocalPopChoice(o_16);
      }
    else
      {
        t = m_16;
        t = (ATerm) ATinsert(ATempty, h_18);
      }
  }
  i_18 = t;
  t = term_b_10;
  j_18 = t;
  t = SSL_printnl(j_18, i_18);
  t = h_18;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_15;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL;
  t = term_u_16;
  t_18 = t;
  t = term_r_12;
  u_18 = t;
  t = term_x_16;
  t = h_5(t_18, u_18, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_y_16;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  t = term_u_16;
  x_18 = t;
  t = term_r_12;
  y_18 = t;
  t = term_x_16;
  t = h_5(x_18, y_18, t);
  t = term_z_16;
  v_18 = t;
  t = term_r_12;
  w_18 = t;
  t = term_a_17;
  t = h_5(v_18, w_18, t);
  t = term_b_17;
  return(t);
}
static ATerm d_6 (ATerm t)
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
      t = Option_3_0(g_5, i_5, m_5, t);
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      t = Option_3_0(a_6, c_6, d_6, t);
    }
  return(t);
}
static ATerm h_5 (ATerm c_47, ATerm d_47, ATerm t)
{
  ATerm z_18 = NULL;
  t = term_a_13;
  z_18 = t;
  t = SSL_table_put(z_18, c_47, d_47);
  t = (ATerm) ATmakeAppl(sym__3, term_a_13, c_47, d_47);
  return(t);
}
static ATerm f_5 (ATerm f_42, ATerm g_42, ATerm e_42, ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_42, g_42);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_17 = ATgetArgument(t, 0);
            ATerm p_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_42, g_42);
        t = x_5(f_42, g_42, t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        t = (ATerm) ATempty;
      }
  }
  c_19 = t;
  t = (ATerm) ATinsert(CheckATermList(c_19), e_42);
  d_19 = t;
  t = SSL_table_put(f_42, g_42, d_19);
  t = b_19;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
      t = term_r_12;
      t = e_0(t);
      l_19 = t;
      t = term_t_12;
      m_19 = t;
      t = term_u_12;
      n_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_12, term_u_12, l_19);
      t = f_5(m_19, n_19, l_19, t);
      _fail(t);
    }
  else
    {
      ATerm s_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_19 = ATgetFirst((ATermList) t);
          k_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_19;
      t = c_0(t);
      t = term_r_12;
      t = d_0(t);
      s_19 = t;
      t = (ATerm) ATinsert(CheckATermList(k_19), s_19);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_50 (ATerm), ATerm j_50 (ATerm), ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,y_19 = NULL,b_20 = NULL,c_20 = NULL,t_3 = NULL;
  c_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_19 = ATgetFirst((ATermList) t);
      v_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_20);
  t_19 = t;
  t = u_19;
  t = i_50(t);
  y_19 = t;
  t = v_19;
  t = j_50(t);
  b_20 = t;
  t = (ATerm) ATinsert(CheckATermList(b_20), y_19);
  t_3 = t;
  t = SSLsetAnnotations(t_3, t_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_89 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,r_20 = NULL,s_20 = NULL,z_3 = NULL;
  m_20 = t;
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_17;
        t = l_89(t);
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
      }
  }
  t = m_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_20 = ATgetFirst((ATermList) t);
      p_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_20);
  n_20 = t;
  t = term_t_15;
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_15, o_20);
  t = h_5(s_20, o_20, t);
  t = p_20;
  {
    static ATerm e_21 (ATerm t)
    {
      ATerm t_17 = t;
      int u_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_20 = NULL;
              x_20 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_20;
              LocalPopChoice(w_17);
            }
          else
            {
              t = v_17;
              t = l_89(t);
              t = Cons_2_0(_id, e_21, t);
            }
          LocalPopChoice(u_17);
        }
      else
        {
          t = t_17;
          {
            ATerm a_21 = NULL,b_21 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_21 = ATgetFirst((ATermList) t);
                b_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_21), (ATerm) ATmakeAppl(sym_Undefined_1, a_21));
          }
        }
      return(t);
    }
    t = e_21(t);
  }
  r_20 = t;
  t = (ATerm) ATinsert(CheckATermList(r_20), (ATerm) ATmakeAppl(sym_Program_1, o_20));
  z_3 = t;
  t = SSLsetAnnotations(z_3, n_20);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  if(match_string(t, "--help"))
    {
      t = r_21;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_21;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_21;
        }
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL;
  t = term_y_17;
  u_21 = t;
  t = term_r_12;
  v_21 = t;
  t = term_z_17;
  t = h_5(u_21, v_21, t);
  t = term_a_18;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_b_18;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm j_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  m_21 = t;
  t = term_t_12;
  o_21 = t;
  t = term_u_12;
  p_21 = t;
  t = (ATerm) ATempty;
  q_21 = t;
  t = SSL_table_put(o_21, p_21, q_21);
  t = m_21;
  {
    static ATerm e_6 (ATerm t)
    {
      ATerm c_18 = t;
      int d_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_89(t);
          LocalPopChoice(d_18);
        }
      else
        {
          t = c_18;
          {
            ATerm e_18 = t;
            int f_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_6, g_6, i_6, t);
                LocalPopChoice(f_18);
              }
            else
              {
                t = e_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_6, t);
  }
  {
    ATerm g_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_22 = NULL;
        i_22 = t;
        {
          ATerm l_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_2 = NULL;
              t = i_22;
              {
                ATerm n_18 = t;
                int o_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_y_17;
                    t = get_config_0_0(t);
                    LocalPopChoice(o_18);
                  }
                else
                  {
                    t = n_18;
                    t = fetch_1_0(j_6, t);
                  }
              }
              t = i_22;
              t = default_system_usage_0_0(t);
              t = term_p_18;
              s_2 = t;
              t = SSL_exit(s_2);
              LocalPopChoice(m_18);
            }
          else
            {
              t = l_18;
              {
                ATerm w_2 = NULL;
                t = term_u_16;
                t = get_config_0_0(t);
                t = i_22;
                t = default_system_about_0_0(t);
                t = term_p_18;
                w_2 = t;
                t = SSL_exit(w_2);
              }
            }
        }
        LocalPopChoice(k_18);
      }
    else
      {
        t = g_18;
        {
          ATerm q_18 = t;
          int r_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_22 = NULL,l_22 = NULL,n_22 = NULL;
              static ATerm l_6 (ATerm t)
              {
                ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,g_10 = NULL;
                r_22 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_22);
                p_22 = t;
                t = q_22;
                if(((j_21 != NULL) && (j_21 != t)))
                  _fail(t);
                else
                  j_21 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_22);
                g_10 = t;
                t = SSLsetAnnotations(g_10, p_22);
                return(t);
              }
              t = fetch_1_0(l_6, t);
              t = term_g_11;
              l_22 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_21)), term_s_18);
              n_22 = t;
              t = SSL_printnl(l_22, n_22);
              t = (ATerm) ATmakeAppl(sym__2, term_g_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_21)), term_s_18));
              t = default_system_usage_0_0(t);
              t = term_e_12;
              j_22 = t;
              t = SSL_exit(j_22);
              LocalPopChoice(r_18);
            }
          else
            {
              t = q_18;
            }
        }
      }
  }
  l_21 = t;
  t = term_t_12;
  n_21 = t;
  t = SSL_table_destroy(n_21);
  t = l_21;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = debug_1_0(r_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_23 = NULL;
      t = parse_options_1_0(xtc_options_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(m_6, t);
      t = xtc_read_0_0(t);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_19 = t;
            int p_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_d_13;
                t = get_config_0_0(t);
                t = xtc_register_0_0(t);
                LocalPopChoice(p_19);
              }
            else
              {
                t = o_19;
                t = term_v_11;
                t = get_config_0_0(t);
                t = register_import_0_0(t);
              }
            t = xtc_store_0_0(t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = term_i_13;
            t = get_config_0_0(t);
            {
              ATerm q_19 = t;
              int r_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = repository_query_0_0(t);
                  LocalPopChoice(r_19);
                }
              else
                {
                  t = q_19;
                  {
                    ATerm w_19 = t;
                    int x_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = all_query_0_0(t);
                        LocalPopChoice(x_19);
                      }
                    else
                      {
                        t = w_19;
                        t = tool_query_0_0(t);
                      }
                  }
                }
            }
          }
      }
      t = term_p_18;
      d_23 = t;
      t = SSL_exit(d_23);
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      t = debug_1_0(s_6, t);
    }
  return(t);
}
static ATerm j_5 (ATerm g_50, ATerm h_50, ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  t = h_50;
  t = map_1_0(xtc_find_0_0, t);
  e_23 = t;
  t = term_b_10;
  k_23 = t;
  t = SSL_print(k_23, e_23);
  t = term_b_10;
  i_23 = t;
  t = (ATerm) ATinsert(ATempty, term_f_10);
  j_23 = t;
  t = SSL_print(i_23, j_23);
  t = term_p_18;
  f_23 = t;
  t = SSL_exit(f_23);
  return(t);
}
static ATerm k_5 (ATerm h_38, ATerm i_38, ATerm t)
{
  t = SSL_execvp(h_38, i_38);
  return(t);
}
ATerm debug_1_0 (ATerm u_70 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,s_23 = NULL,t_23 = NULL;
  m_23 = t;
  t = u_70(t);
  n_23 = t;
  t = term_g_11;
  s_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_23), n_23);
  t_23 = t;
  t = SSL_printnl(s_23, t_23);
  t = m_23;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_23 = NULL;
  static ATerm w_6 (ATerm t)
  {
    ATerm v_23 = NULL,w_23 = NULL;
    v_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), v_23);
    t = x_5(not_null(u_23), v_23, t);
    w_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_23, w_23);
    return(t);
  }
  if(((u_23 != NULL) && (u_23 != t)))
    _fail(t);
  else
    u_23 = t;
  t = SSL_table_keys(u_23);
  t = map_1_0(w_6, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_24 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_24, term_h_20);
        t = geq_0_0(t);
        t = a_24;
        t = f_94(t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = a_24;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm p_71 (ATerm), ATerm t)
{
  static ATerm k_25 (ATerm t)
  {
    ATerm g_25 = NULL,i_25 = NULL,j_25 = NULL;
    g_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_25 = ATgetFirst((ATermList) t);
        j_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_3 = NULL,k_3 = NULL,i_10 = NULL;
          t = SSLgetAnnotations(g_25);
          d_3 = t;
          t = i_25;
          t = p_71(t);
          k_3 = t;
          t = (ATerm) ATinsert(CheckATermList(j_25), k_3);
          i_10 = t;
          t = SSLsetAnnotations(i_10, d_3);
          LocalPopChoice(j_20);
        }
      else
        {
          t = i_20;
          {
            ATerm f_4 = NULL,i_4 = NULL,j_10 = NULL;
            t = SSLgetAnnotations(g_25);
            f_4 = t;
            t = j_25;
            t = k_25(t);
            i_4 = t;
            t = (ATerm) ATinsert(CheckATermList(i_4), i_25);
            j_10 = t;
            t = SSLsetAnnotations(j_10, f_4);
          }
        }
    }
    return(t);
  }
  t = k_25(t);
  return(t);
}
static ATerm x_5 (ATerm w_43, ATerm x_43, ATerm t)
{
  t = SSL_table_get(w_43, x_43);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  ATerm x_25 = NULL;
  x_25 = t;
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_25 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_25, term_q_20);
        t = geq_0_0(t);
        t = x_25;
        t = e_94(t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        t = x_25;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_26;
        if((s_26 != t))
          {
            _fail(t);
          }
        t = r_26;
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        t = (ATerm) ATmakeAppl(sym__2, s_26, t_26);
        {
          ATerm v_20 = t;
          int w_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_26, t_26);
              LocalPopChoice(w_20);
            }
          else
            {
              t = v_20;
              t = SSL_gtr(s_26, t_26);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_26, t_26);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_94 (ATerm), ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL;
        t = term_j_9;
        t = get_config_0_0(t);
        z_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_26, term_c_21);
        t = geq_0_0(t);
        t = x_26;
        t = g_94(t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = x_26;
      }
  }
  return(t);
}
static ATerm o_5 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm e_20, ATerm d_20, ATerm t)
{
  t = n_75(t);
  {
    static ATerm y_6 (ATerm t)
    {
      ATerm b_27 = NULL;
      b_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_20, b_27);
      t = m_75(t);
      return(t);
    }
    t = fetch_1_0(y_6, t);
  }
  t = d_20;
  return(t);
}
static ATerm p_5 (ATerm j_75 (ATerm), ATerm a_20, ATerm z_19, ATerm t)
{
  static ATerm r_27 (ATerm t)
  {
    ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
    m_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_19;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_27 = ATgetFirst((ATermList) t);
            o_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_27;
              {
                static ATerm z_6 (ATerm t)
                {
                  t = z_19;
                  return(t);
                }
                t = o_5(j_75, z_6, n_27, o_27, t);
              }
              t = r_27(t);
              LocalPopChoice(f_21);
            }
          else
            {
              t = d_21;
              {
                ATerm h_6 = NULL,k_6 = NULL,m_10 = NULL;
                t = SSLgetAnnotations(m_27);
                h_6 = t;
                t = o_27;
                t = r_27(t);
                k_6 = t;
                t = (ATerm) ATinsert(CheckATermList(k_6), n_27);
                m_10 = t;
                t = SSLsetAnnotations(m_10, h_6);
              }
            }
        }
      }
    return(t);
  }
  t = a_20;
  t = r_27(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm g_28 = NULL;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      if((g_28 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm c_43, ATerm d_43, ATerm e_43, ATerm t)
{
  ATerm w_27 = NULL,a_28 = NULL,b_28 = NULL;
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_43, d_43);
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            ATerm k_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_43, d_43);
        t = x_5(c_43, d_43, t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = (ATerm) ATempty;
      }
  }
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_28, e_43);
  t = p_5(c_7, b_28, e_43, t);
  a_28 = t;
  t = SSL_table_put(c_43, d_43, a_28);
  t = w_27;
  return(t);
}
static ATerm r_5 (ATerm o_89 (ATerm), ATerm m_43, ATerm l_43, ATerm t)
{
  static ATerm d_7 (ATerm t)
  {
    ATerm h_28 = NULL,i_28 = NULL;
    if(match_cons(t, sym__2))
      {
        h_28 = ATgetArgument(t, 0);
        i_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_43, h_28, i_28);
    t = o_89(t);
    return(t);
  }
  t = l_43;
  t = map_1_0(d_7, t);
  return(t);
}
static ATerm v_5 (ATerm s_28, ATerm t_28, ATerm t)
{
  t = SSL_access(s_28, t_28);
  return(t);
}
static ATerm a_29 (ATerm u_28, ATerm t)
{
  t = SSL_fclose(u_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  y_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_28 = ATgetArgument(t, 0);
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_28);
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            t = a_29(y_28, t);
          }
      }
    }
  else
    {
      t = a_29(y_28, t);
    }
  return(t);
}
static ATerm s_5 (ATerm j_14, ATerm t)
{
  t = SSL_read_term_from_stream(j_14);
  return(t);
}
static ATerm t_5 (ATerm b_29, ATerm c_29, ATerm t)
{
  ATerm f_29 = NULL;
  t = SSL_fopen(b_29, c_29);
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_29);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_29 = NULL;
  t = SSL_stdin_stream();
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_29 = NULL;
  t = SSL_stdout_stream();
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_29 = NULL;
  t = SSL_stderr_stream();
  i_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_29);
  return(t);
}
static ATerm p_30 (ATerm o_29, ATerm t)
{
  ATerm p_29 = NULL;
  t = SSL_explode_term(o_29);
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_21 = ATgetArgument(t, 1);
        if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
          {
            p_29 = ATgetFirst((ATermList) x_21);
            {
              ATerm y_21 = (ATerm) ATgetNext((ATermList) x_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_29;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_29;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_29;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_29;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_30 (ATerm s_29, ATerm t_29, ATerm u_29, ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,a_30 = NULL,o_10 = NULL;
  t = SSLgetAnnotations(u_29);
  x_29 = t;
  t = s_29;
  if(match_cons(t, sym_Path_1))
    {
      a_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_30, t_29);
  o_10 = t;
  t = SSLsetAnnotations(o_10, x_29);
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(v_29, w_29, t);
  return(t);
}
static ATerm r_30 (ATerm c_30, ATerm d_30, ATerm e_30, ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,k_30 = NULL,p_10 = NULL;
  t = SSLgetAnnotations(e_30);
  h_30 = t;
  t = SSL_is_string(c_30);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_30, d_30);
  p_10 = t;
  t = SSLsetAnnotations(p_10, h_30);
  if(match_cons(t, sym__2))
    {
      f_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(f_30, g_30, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  if(match_cons(t, sym__2))
    {
      n_30 = ATgetArgument(t, 0);
      o_30 = ATgetArgument(t, 1);
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_30(m_30, t);
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
                  t = q_30(n_30, o_30, m_30, t);
                  LocalPopChoice(c_22);
                }
              else
                {
                  t = b_22;
                  t = r_30(n_30, o_30, m_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_30(m_30, t);
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_30 = NULL;
      v_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_30, term_g_22);
      t = u_5(t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      t = debug_1_0(e_7, t);
      _fail(t);
    }
  t_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(u_30, t);
  s_30 = t;
  t = t_30;
  t = fclose_0_0(t);
  t = s_30;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_h_22;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_30 = NULL,y_30 = NULL;
      x_30 = t;
      t = (ATerm) ATinsert(ATempty, term_s_22);
      y_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_30, (ATerm) ATinsert(ATempty, term_s_22));
      t = v_5(x_30, y_30, t);
      LocalPopChoice(o_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_22;
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_22 = t;
            if((PushChoice() == 0))
              {
                ATerm z_30 = NULL,a_31 = NULL;
                z_30 = t;
                t = (ATerm) ATinsert(ATempty, term_r_11);
                a_31 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_30, (ATerm) ATinsert(ATempty, term_r_11));
                t = v_5(z_30, a_31, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_22;
              }
            t = debug_1_0(f_7, t);
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            t = debug_1_0(g_7, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = debug_1_0(k_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = debug_1_0(m_7, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  n_31 = t;
  t = term_g_11;
  o_31 = t;
  t = (ATerm) ATinsert(ATempty, term_y_22);
  p_31 = t;
  t = SSL_printnl(o_31, p_31);
  t = n_31;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  if(match_cons(t, sym__3))
    {
      q_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
      s_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_5(q_31, r_31, s_31, t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t_31 = t;
  t = term_g_11;
  u_31 = t;
  t = (ATerm) ATinsert(ATempty, term_z_22);
  v_31 = t;
  t = SSL_printnl(u_31, v_31);
  t = t_31;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  t = term_g_11;
  x_31 = t;
  t = (ATerm) ATinsert(ATempty, term_y_22);
  y_31 = t;
  t = SSL_printnl(x_31, y_31);
  t = w_31;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  b_31 = t;
  t = if_verbose5_1_0(i_7, t);
  {
    ATerm a_23 = t;
    if((PushChoice() == 0))
      {
        ATerm l_31 = NULL,m_31 = NULL;
        t = term_m_9;
        l_31 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, b_31);
        m_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym_Imported_1, b_31));
        t = x_5(l_31, m_31, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_23;
      }
  }
  d_31 = t;
  t = term_m_9;
  i_31 = t;
  t = term_b_23;
  j_31 = t;
  t = (ATerm) ATinsert(ATempty, b_31);
  k_31 = t;
  t = SSL_table_put(i_31, j_31, k_31);
  t = d_31;
  t = if_verbose4_1_0(l_7, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(n_7, t);
  c_31 = t;
  t = term_m_9;
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, c_31);
  t = r_5(p_7, h_31, c_31, t);
  t = if_verbose6_1_0(r_7, t);
  t = term_m_9;
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, b_31);
  f_31 = t;
  t = (ATerm) ATempty;
  g_31 = t;
  t = SSL_table_put(e_31, f_31, g_31);
  t = (ATerm) ATmakeAppl(sym__3, term_m_9, (ATerm)ATmakeAppl(sym_Imported_1, b_31), (ATerm) ATempty);
  t = if_verbose4_1_0(s_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm m_78 (ATerm), ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_32;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_32 = ATgetFirst((ATermList) t);
          m_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 = NULL,t_7 = NULL,w_7 = NULL,s_10 = NULL;
            t = SSLgetAnnotations(k_32);
            o_7 = t;
            t = l_32;
            t = m_78(t);
            t_7 = t;
            t = m_32;
            t = filter_1_0(m_78, t);
            w_7 = t;
            t = (ATerm) ATinsert(CheckATermList(w_7), t_7);
            s_10 = t;
            t = SSLsetAnnotations(s_10, o_7);
            LocalPopChoice(g_23);
          }
        else
          {
            t = c_23;
            t = m_32;
            t = filter_1_0(m_78, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm t_63 (ATerm), ATerm u_63 (ATerm), ATerm t)
{
  static ATerm p_32 (ATerm t)
  {
    ATerm h_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_63(t);
        t = p_32(t);
        LocalPopChoice(l_23);
      }
    else
      {
        t = h_23;
        t = u_63(t);
      }
    return(t);
  }
  t = p_32(t);
  return(t);
}
static ATerm w_5 (ATerm s_27, ATerm t_27, ATerm t)
{
  t = SSL_strcat(s_27, t_27);
  return(t);
}
ATerm map_1_0 (ATerm f_71 (ATerm), ATerm t)
{
  static ATerm f_33 (ATerm t)
  {
    ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
    c_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_33;
      }
    else
      {
        ATerm o_8 = NULL,v_8 = NULL,w_8 = NULL,u_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_33 = ATgetFirst((ATermList) t);
            e_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_33);
        o_8 = t;
        t = d_33;
        t = f_71(t);
        v_8 = t;
        t = e_33;
        t = f_33(t);
        w_8 = t;
        t = (ATerm) ATinsert(CheckATermList(w_8), v_8);
        u_10 = t;
        t = SSLsetAnnotations(u_10, o_8);
      }
    return(t);
  }
  t = f_33(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_33 = NULL;
      n_33 = t;
      t = SSL_is_string(n_33);
      LocalPopChoice(x_23);
    }
  else
    {
      t = r_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_7, t);
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            {
              ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
              t_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_33 = ATgetArgument(t, 0);
                  t = u_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_33 = ATgetArgument(t, 0);
                      t = u_33;
                      {
                        ATerm b_24 = t;
                        int d_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(d_24);
                          }
                        else
                          {
                            t = b_24;
                            t = debug_1_0(c_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_33 = NULL,a_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_33 = ATgetArgument(t, 0);
                          v_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_33;
                      t = eval_config_0_0(t);
                      z_33 = t;
                      t = v_33;
                      t = eval_config_0_0(t);
                      a_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_33, a_34);
                      t = w_5(z_33, a_34, t);
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
  ATerm e_34 = NULL,f_34 = NULL;
  e_34 = t;
  t = term_a_13;
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, e_34);
  t = x_5(f_34, e_34, t);
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_34 = NULL,h_34 = NULL;
        t = eval_config_0_0(t);
        g_34 = t;
        t = term_a_13;
        h_34 = t;
        t = SSL_table_put(h_34, e_34, g_34);
        t = g_34;
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
      }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_11;
      t = get_config_0_0(t);
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_34 = NULL;
            t = term_k_24;
            k_34 = t;
            t = SSL_getenv(k_34);
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = debug_1_0(e_8, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_l_24;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL;
  t = term_m_9;
  q_34 = t;
  t = term_n_9;
  r_34 = t;
  t = term_o_9;
  t = x_5(q_34, r_34, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm m_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_24;
      }
  }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = debug_1_0(n_8, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_34 = NULL;
  t = if_verbose5_1_0(d_8, t);
  m_34 = t;
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_34 = NULL,o_34 = NULL;
        t = term_m_9;
        n_34 = t;
        t = term_b_23;
        o_34 = t;
        t = term_q_24;
        t = x_5(n_34, o_34, t);
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        {
          ATerm p_34 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          p_34 = t;
          t = repeat_2_0(f_8, _id, t);
          t = p_34;
        }
      }
  }
  t = m_34;
  t = if_verbose5_1_0(g_8, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = debug_1_0(q_8, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm o_35 (ATerm w_34, ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  t = term_m_9;
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, w_34);
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym_Tool_1, w_34));
  t = x_5(z_34, a_35, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_24 = ATgetFirst((ATermList) t);
      if(match_cons(s_24, sym__2))
        {
          ATerm u_24 = ATgetArgument(s_24, 0);
          y_34 = ATgetArgument(s_24, 1);
        }
      else
        _fail(t);
      {
        ATerm t_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_34;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = debug_1_0(x_8, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_m_9;
  t = table_getlist_0_0(t);
  t = debug_1_0(z_8, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
      t = if_verbose5_1_0(p_8, t);
      t = xtc_load_0_0(t);
      d_35 = t;
      if(match_cons(t, sym__2))
        {
          b_35 = ATgetArgument(t, 0);
          c_35 = ATgetArgument(t, 1);
          {
            ATerm y_24 = t;
            int z_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
                t = term_m_9;
                h_35 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, b_35);
                i_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym_Tool_1, b_35));
                t = x_5(h_35, i_35, t);
                {
                  static ATerm s_8 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_35 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((g_35 != NULL) && (g_35 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_35 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(s_8, t);
                }
                t = not_null(g_35);
                LocalPopChoice(z_24);
              }
            else
              {
                t = y_24;
                t = o_35(d_35, t);
              }
          }
        }
      else
        {
          t = o_35(d_35, t);
        }
      t = if_verbose5_1_0(u_8, t);
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm n_35 = NULL,d_10 = NULL,e_10 = NULL;
        n_35 = t;
        t = term_g_11;
        d_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), n_35), term_a_25);
        e_10 = t;
        t = SSL_printnl(d_10, e_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), n_35), term_a_25);
        t = if_verbose5_1_0(y_8, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
      w_35 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_35 = ATgetFirst((ATermList) t);
          y_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_35 = ATgetFirst((ATermList) t);
          a_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_35;
      if(match_string(t, "call"))
        {
          ATerm e_36 = NULL;
          t = a_36;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_35 = ATgetFirst((ATermList) t);
              v_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_35;
          t = xtc_find_0_0(t);
          e_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_36, v_35);
          t = k_5(e_36, v_35, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = w_35;
          t = j_5(x_35, a_36, t);
        }
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      t = xtc_main_0_0(t);
    }
  return(t);
}
