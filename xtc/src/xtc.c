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
ATerm term_p_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_o_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_a_21;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_b_19;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_r_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_n_15;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
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
ATerm term_r_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_a_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(3);
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
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
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
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
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
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_o_12);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_o_12);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_o_12);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_u_12);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, term_s_16, term_o_12);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__2, term_z_16, term_o_12);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_o_12);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
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
ATerm if_verbose3_1_0 (ATerm g_94 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm o_0 (ATerm t);
ATerm tool_query_0_0 (ATerm t);
static ATerm a_5 (ATerm t_49, ATerm m_636, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm all_query_0_0 (ATerm t);
ATerm repository_query_0_0 (ATerm t);
static ATerm b_5 (ATerm d_14, ATerm e_14, ATerm t);
static ATerm c_5 (ATerm z_70 (ATerm), ATerm t_143, ATerm l_14, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm xtc_store_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm register_import_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm d_5 (ATerm a_43, ATerm b_43, ATerm z_42, ATerm t);
ATerm if_verbose1_1_0 (ATerm e_94 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm f_94 (ATerm), ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm y_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm p_12 (ATerm q_11, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_5 (ATerm l_47, ATerm k_47, ATerm t);
static ATerm o_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm xtc_options_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm h_5 (ATerm f_47, ATerm g_47, ATerm t);
static ATerm f_5 (ATerm i_42, ATerm j_42, ATerm h_42, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm l_50 (ATerm), ATerm m_50 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_89 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm parse_options_1_0 (ATerm n_89 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm xtc_main_0_0 (ATerm t);
static ATerm j_5 (ATerm j_50, ATerm k_50, ATerm t);
static ATerm k_5 (ATerm k_38, ATerm l_38, ATerm t);
ATerm debug_1_0 (ATerm x_70 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm i_94 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm s_71 (ATerm), ATerm t);
static ATerm x_5 (ATerm z_43, ATerm a_44, ATerm t);
ATerm if_verbose4_1_0 (ATerm h_94 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm j_94 (ATerm), ATerm t);
static ATerm o_5 (ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm e_20, ATerm d_20, ATerm t);
static ATerm p_5 (ATerm m_75 (ATerm), ATerm a_20, ATerm z_19, ATerm t);
static ATerm z_6 (ATerm t);
static ATerm q_5 (ATerm f_43, ATerm g_43, ATerm h_43, ATerm t);
static ATerm r_5 (ATerm r_89 (ATerm), ATerm p_43, ATerm o_43, ATerm t);
static ATerm v_5 (ATerm u_28, ATerm v_28, ATerm t);
static ATerm b_29 (ATerm t_28, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_5 (ATerm j_14, ATerm t);
static ATerm t_5 (ATerm d_29, ATerm e_29, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_30 (ATerm p_29, ATerm t);
static ATerm r_30 (ATerm t_29, ATerm u_29, ATerm v_29, ATerm t);
static ATerm s_30 (ATerm d_30, ATerm e_30, ATerm f_30, ATerm t);
static ATerm u_5 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm p_78 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm t);
static ATerm w_5 (ATerm u_27, ATerm v_27, ATerm t);
ATerm map_1_0 (ATerm i_71 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm p_35 (ATerm x_34, ATerm t);
static ATerm v_8 (ATerm t);
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
  ATerm m_0 = NULL,s_0 = NULL,u_0 = NULL,v_0 = NULL,x_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,k_0 = NULL;
  v_0 = t;
  t = term_a_9;
  t = get_config_0_0(t);
  s_0 = t;
  t = v_0;
  if(match_cons(t, sym__2))
    {
      a_1 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_0);
  y_0 = t;
  t = a_1;
  if(match_cons(t, sym_Tool_1))
    {
      m_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_1;
  {
    static ATerm a_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((s_0 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((u_0 != NULL) && (u_0 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(a_0, t);
  }
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, c_1);
  k_0 = t;
  t = SSLsetAnnotations(k_0, y_0);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_0, not_null(u_0)));
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, m_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_0, not_null(u_0))));
  t = a_5(m_0, x_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm g_94 (ATerm), ATerm t)
{
  ATerm e_1 = NULL;
  e_1 = t;
  {
    ATerm d_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_j_9);
        t = geq_0_0(t);
        t = e_1;
        t = g_94(t);
        LocalPopChoice(f_9);
      }
    else
      {
        t = d_9;
        t = e_1;
      }
  }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm o_1 = NULL,q_1 = NULL;
  t = term_m_9;
  o_1 = t;
  t = term_n_9;
  q_1 = t;
  t = term_o_9;
  t = x_5(o_1, q_1, t);
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
static ATerm j_0 (ATerm t)
{
  t = debug_1_0(o_0, t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL;
  static ATerm c_0 (ATerm t)
  {
    ATerm u_1 = NULL;
    u_1 = t;
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 = NULL,y_1 = NULL;
          t = if_verbose3_1_0(j_0, t);
          t = term_m_9;
          w_1 = t;
          t = (ATerm) ATmakeAppl(sym_Tool_1, u_1);
          y_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym_Tool_1, u_1));
          t = x_5(w_1, y_1, t);
          if(((l_1 != NULL) && (l_1 != t)))
            _fail(t);
          else
            l_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, u_1), l_1);
          {
            ATerm u_9 = t;
            int v_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = version_query_0_0(t);
                LocalPopChoice(v_9);
              }
            else
              {
                t = u_9;
                if(match_cons(t, sym__2))
                  {
                    ATerm w_9 = ATgetArgument(t, 0);
                    ATerm a_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, u_1), l_1);
                t = a_5(u_1, l_1, t);
              }
          }
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
          {
            ATerm i_2 = NULL,j_2 = NULL;
            t = term_b_10;
            i_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), term_e_10), u_1);
            j_2 = t;
            t = SSL_print(i_2, j_2);
            t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), term_e_10), u_1));
          }
        }
    }
    return(t);
  }
  t = term_h_10;
  t = get_config_0_0(t);
  m_1 = t;
  t = repeat_2_0(b_0, _id, t);
  t = m_1;
  t = map_1_0(c_0, t);
  return(t);
}
static ATerm a_5 (ATerm t_49, ATerm m_636, ATerm t)
{
  static ATerm d_1 (ATerm t)
  {
    ATerm l_2 = NULL,m_2 = NULL;
    if(match_cons(t, sym__2))
      {
        l_2 = ATgetArgument(t, 0);
        m_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm k_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_2 = NULL,p_2 = NULL;
          t = term_n_10;
          t = get_config_0_0(t);
          t = term_b_10;
          n_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_f_10), m_2);
          p_2 = t;
          t = SSL_print(n_2, p_2);
          t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATempty, term_f_10), m_2));
          LocalPopChoice(l_10);
        }
      else
        {
          t = k_10;
          {
            ATerm q_2 = NULL,s_2 = NULL;
            t = term_b_10;
            q_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_10), m_2), term_r_10), l_2), term_q_10), t_49);
            s_2 = t;
            t = SSL_print(q_2, s_2);
            t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_10), m_2), term_r_10), l_2), term_q_10), t_49));
          }
        }
    }
    return(t);
  }
  t = m_636;
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm b_3 = NULL,e_3 = NULL;
  t = term_m_9;
  b_3 = t;
  t = term_n_9;
  e_3 = t;
  t = term_o_9;
  t = x_5(b_3, e_3, t);
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
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
  d_4 = t;
  if(match_cons(t, sym__2))
    {
      b_4 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 = NULL,f_0 = NULL,h_0 = NULL,q_0 = NULL,w_0 = NULL,z_0 = NULL,m_3 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(d_4);
            h_0 = t;
            t = b_4;
            if(match_cons(t, sym_Tool_1))
              {
                w_0 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_4);
            q_0 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, w_0);
            i_3 = t;
            t = SSLsetAnnotations(i_3, q_0);
            z_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_0, c_4);
            m_3 = t;
            t = SSLsetAnnotations(m_3, h_0);
            if(match_cons(t, sym__2))
              {
                ATerm x_10 = ATgetArgument(t, 0);
                if(match_cons(x_10, sym_Tool_1))
                  {
                    e_0 = ATgetArgument(x_10, 0);
                  }
                else
                  _fail(t);
                f_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_5(e_0, f_0, t);
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            t = d_4;
          }
      }
    }
  else
    {
      t = d_4;
    }
  return(t);
}
ATerm all_query_0_0 (ATerm t)
{
  t = term_z_10;
  t = get_config_0_0(t);
  t = repeat_2_0(f_1, _id, t);
  t = term_m_9;
  t = table_getlist_0_0(t);
  t = map_1_0(h_1, t);
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  t = term_b_11;
  t = get_config_0_0(t);
  t = xtc_location_0_0(t);
  r_4 = t;
  t = term_b_10;
  s_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), r_4), term_c_11);
  t_4 = t;
  t = SSL_print(s_4, t_4);
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), r_4), term_c_11));
  return(t);
}
static ATerm b_5 (ATerm d_14, ATerm e_14, ATerm t)
{
  ATerm u_4 = NULL;
  t = SSL_write_term_to_stream_baf(d_14, e_14);
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_4);
  return(t);
}
static ATerm c_5 (ATerm z_70 (ATerm), ATerm t_143, ATerm l_14, ATerm t)
{
  ATerm v_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_143, term_d_11);
  t = u_5(t);
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, l_14);
  t = z_70(t);
  t = fclose_0_0(t);
  t = l_14;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm z_4 = NULL,l_5 = NULL,n_5 = NULL;
  z_4 = t;
  t = term_f_11;
  l_5 = t;
  t = (ATerm) ATinsert(ATempty, term_g_11);
  n_5 = t;
  t = SSL_printnl(l_5, n_5);
  t = z_4;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm q_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      if(match_cons(h_11, sym_Stream_1))
        {
          q_6 = ATgetArgument(h_11, 0);
        }
      else
        _fail(t);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(q_6, t_6, t);
  return(t);
}
static ATerm k_1 (ATerm t)
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
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 = NULL,z_5 = NULL;
            y_5 = t;
            t = (ATerm) ATinsert(ATempty, term_p_11);
            z_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_5, (ATerm) ATinsert(ATempty, term_p_11));
            t = v_5(y_5, z_5, t);
            LocalPopChoice(o_11);
            {
              ATerm b_6 = NULL,g_6 = NULL;
              b_6 = t;
              t = (ATerm) ATinsert(ATempty, term_r_11);
              g_6 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_6, (ATerm) ATinsert(ATempty, term_r_11));
              t = v_5(b_6, g_6, t);
            }
          }
        else
          {
            t = n_11;
          }
        LocalPopChoice(m_11);
        {
          ATerm o_6 = NULL,p_6 = NULL;
          p_6 = t;
          t = term_m_9;
          t = table_getlist_0_0(t);
          o_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_6, o_6);
          t = c_5(j_1, p_6, o_6, t);
        }
      }
    else
      {
        t = l_11;
        t = debug_1_0(k_1, t);
        _fail(t);
      }
  }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_s_11;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
  t = term_v_11;
  t = get_config_0_0(t);
  t = if_verbose2_1_0(n_1, t);
  t = term_v_11;
  t = get_config_0_0(t);
  u_6 = t;
  t = if_verbose5_1_0(r_1, t);
  t = term_m_9;
  v_6 = t;
  t = term_n_9;
  w_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_9, term_n_9, u_6);
  t = d_5(v_6, w_6, u_6, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      i_7 = ATgetArgument(t, 0);
      if((i_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm a_43, ATerm b_43, ATerm z_42, ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_43, b_43);
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_11 = ATgetArgument(t, 0);
            ATerm a_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_43, b_43);
        t = x_5(a_43, b_43, t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = (ATerm) ATempty;
      }
  }
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_42, c_7);
  t = p_5(v_1, z_42, c_7, t);
  b_7 = t;
  t = SSL_table_put(a_43, b_43, b_7);
  t = a_7;
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  ATerm k_7 = NULL;
  k_7 = t;
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_7, term_d_12);
        t = geq_0_0(t);
        t = k_7;
        t = e_94(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        t = k_7;
      }
  }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,h_8 = NULL;
  a_8 = t;
  t = term_f_11;
  b_8 = t;
  t = (ATerm) ATinsert(ATempty, term_e_12);
  h_8 = t;
  t = SSL_printnl(b_8, h_8);
  t = a_8;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_g_12;
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
  ATerm v_7 = NULL,y_7 = NULL,z_7 = NULL;
  static ATerm g_2 (ATerm t)
  {
    ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
    j_8 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_8), term_k_12), not_null(z_7));
    n_8 = t;
    t = SSL_concat_strings(n_8);
    i_8 = t;
    t = term_m_9;
    k_8 = t;
    t = (ATerm) ATmakeAppl(sym_Tool_1, j_8);
    l_8 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(y_7), i_8));
    m_8 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_m_9, (ATerm)ATmakeAppl(sym_Tool_1, j_8), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(y_7), i_8)));
    t = d_5(k_8, l_8, m_8, t);
    return(t);
  }
  t = term_h_10;
  t = get_config_0_0(t);
  v_7 = t;
  t = if_verbose1_1_0(x_1, t);
  t = if_verbose2_1_0(a_2, t);
  t = term_a_9;
  t = get_config_0_0(t);
  if(((y_7 != NULL) && (y_7 != t)))
    _fail(t);
  else
    y_7 = t;
  t = if_verbose2_1_0(c_2, t);
  t = term_n_10;
  t = get_config_0_0(t);
  if(((z_7 != NULL) && (z_7 != t)))
    _fail(t);
  else
    z_7 = t;
  t = if_verbose2_1_0(e_2, t);
  t = v_7;
  t = map_1_0(g_2, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm s_8 = NULL;
  s_8 = t;
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_8 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        u_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_8, term_n_12);
        t = geq_0_0(t);
        t = s_8;
        t = f_94(t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = s_8;
      }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL,e_9 = NULL,g_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_9 = NULL,k_9 = NULL,l_9 = NULL;
      t = term_o_12;
      t = t_0(t);
      i_9 = t;
      t = term_r_12;
      k_9 = t;
      t = term_u_12;
      l_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_12, term_u_12, i_9);
      t = f_5(k_9, l_9, i_9, t);
      _fail(t);
    }
  else
    {
      ATerm t_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_9 = ATgetFirst((ATermList) t);
          c_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_9 = ATgetFirst((ATermList) t);
          g_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_9;
      t = p_0(t);
      t = e_9;
      t = r_0(t);
      t_9 = t;
      t = (ATerm) ATinsert(CheckATermList(g_9), t_9);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  static ATerm i_11 (ATerm t)
  {
    ATerm y_10 = NULL,a_11 = NULL,e_11 = NULL;
    e_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_10 = ATgetFirst((ATermList) t);
        a_11 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_1 = NULL,z_1 = NULL,q_3 = NULL;
          t = SSLgetAnnotations(e_11);
          t_1 = t;
          t = a_11;
          t = i_11(t);
          z_1 = t;
          t = (ATerm) ATinsert(CheckATermList(z_1), y_10);
          q_3 = t;
          t = SSLsetAnnotations(q_3, t_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_11;
        t = y_71(t);
      }
    return(t);
  }
  t = i_11(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  x_9 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_9;
    }
  else
    {
      static ATerm h_2 (ATerm t)
      {
        t = not_null(z_9);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_9 = ATgetFirst((ATermList) t);
          if(((z_9 != NULL) && (z_9 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_9;
      t = at_end_1_0(h_2, t);
    }
  return(t);
}
static ATerm p_12 (ATerm q_11, ATerm t)
{
  ATerm u_11 = NULL;
  t = SSL_explode_term(q_11);
  if(match_cons(t, sym__2))
    {
      ATerm v_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_11 = NULL,f_12 = NULL,h_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym__2))
    {
      y_11 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_2 (ATerm t)
            {
              t = f_12;
              return(t);
            }
            t = y_11;
            t = at_end_1_0(k_2, t);
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
            t = p_12(h_12, t);
          }
      }
    }
  else
    {
      t = p_12(h_12, t);
    }
  return(t);
}
static ATerm e_5 (ATerm l_47, ATerm k_47, ATerm t)
{
  ATerm q_12 = NULL,s_12 = NULL,t_12 = NULL;
  t = l_47;
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
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_47, s_12);
  t = conc_0_0(t);
  q_12 = t;
  t = term_a_13;
  t_12 = t;
  t = SSL_table_put(t_12, l_47, q_12);
  t = (ATerm) ATmakeAppl(sym__3, term_a_13, l_47, q_12);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm q_13 = NULL;
  q_13 = t;
  if(match_string(t, "-r"))
    {
      t = q_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = q_13;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm r_13 = NULL,u_13 = NULL;
  r_13 = t;
  t = term_k_11;
  u_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_11, r_13);
  t = h_5(u_13, r_13, t);
  t = r_13;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_b_13;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  if(match_string(t, "i"))
    {
      t = v_13;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = v_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = v_13;
        }
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
  w_13 = t;
  t = term_v_11;
  x_13 = t;
  t = (ATerm) ATinsert(ATempty, w_13);
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATinsert(ATempty, w_13));
  t = e_5(x_13, y_13, t);
  t = w_13;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  if(match_string(t, "r"))
    {
      t = c_14;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = c_14;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = c_14;
        }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm i_14 = NULL,m_14 = NULL;
  i_14 = t;
  t = term_d_13;
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, i_14);
  t = h_5(m_14, i_14, t);
  t = i_14;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_e_13;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  if(match_string(t, "-t"))
    {
      t = n_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = n_14;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  t = term_h_10;
  p_14 = t;
  t = (ATerm) ATinsert(ATempty, o_14);
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_10, (ATerm) ATinsert(ATempty, o_14));
  t = e_5(p_14, q_14, t);
  t = o_14;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_f_13;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  if(match_string(t, "-l"))
    {
      t = r_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = r_14;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm s_14 = NULL,y_14 = NULL;
  s_14 = t;
  t = term_n_10;
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, s_14);
  t = h_5(y_14, s_14, t);
  t = s_14;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_g_13;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  if(match_string(t, "-V"))
    {
      t = z_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = z_14;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm a_15 = NULL,d_15 = NULL;
  a_15 = t;
  t = term_a_9;
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, a_15);
  t = h_5(d_15, a_15, t);
  t = a_15;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_h_13;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm g_15 = NULL;
  g_15 = t;
  if(match_string(t, "q"))
    {
      t = g_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = g_15;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  h_15 = t;
  t = term_i_13;
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, h_15);
  t = h_5(i_15, h_15, t);
  t = h_15;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_j_13;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm j_15 = NULL;
  j_15 = t;
  if(match_string(t, "-a"))
    {
      t = j_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = j_15;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm o_15 = NULL,q_15 = NULL,a_16 = NULL;
  o_15 = t;
  t = term_z_10;
  q_15 = t;
  t = term_o_12;
  a_16 = t;
  t = term_k_13;
  t = h_5(q_15, a_16, t);
  t = o_15;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_l_13;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm b_16 = NULL;
  b_16 = t;
  if(match_string(t, "-L"))
    {
      t = b_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = b_16;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm c_16 = NULL,f_16 = NULL,g_16 = NULL;
  c_16 = t;
  t = term_n_10;
  f_16 = t;
  t = term_o_12;
  g_16 = t;
  t = term_m_13;
  t = h_5(f_16, g_16, t);
  t = c_16;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_n_13;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  if(match_string(t, "-R"))
    {
      t = h_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = h_16;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm l_16 = NULL,n_16 = NULL,q_16 = NULL;
  l_16 = t;
  t = term_b_11;
  n_16 = t;
  t = term_o_12;
  q_16 = t;
  t = term_o_13;
  t = h_5(n_16, q_16, t);
  t = l_16;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_p_13;
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
  ATerm r_16 = NULL,t_16 = NULL,u_16 = NULL;
  r_16 = t;
  t = SSL_string_to_int(r_16);
  t_16 = t;
  t = term_h_9;
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_9, t_16);
  t = h_5(u_16, t_16, t);
  t = r_16;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm t_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(o_2, t_2, u_2, t);
      LocalPopChoice(z_13);
    }
  else
    {
      t = t_13;
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_2, x_2, y_2, t);
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            {
              ATerm f_14 = t;
              int g_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(z_2, a_3, d_3, t);
                  LocalPopChoice(g_14);
                }
              else
                {
                  t = f_14;
                  {
                    ATerm h_14 = t;
                    int k_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(f_3, g_3, h_3, t);
                        LocalPopChoice(k_14);
                      }
                    else
                      {
                        t = h_14;
                        {
                          ATerm t_14 = t;
                          int u_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(k_3, l_3, n_3, t);
                              LocalPopChoice(u_14);
                            }
                          else
                            {
                              t = t_14;
                              {
                                ATerm v_14 = t;
                                int w_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(o_3, p_3, r_3, t);
                                    LocalPopChoice(w_14);
                                  }
                                else
                                  {
                                    t = v_14;
                                    {
                                      ATerm x_14 = t;
                                      int b_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(t_3, u_3, v_3, t);
                                          LocalPopChoice(b_15);
                                        }
                                      else
                                        {
                                          t = x_14;
                                          {
                                            ATerm c_15 = t;
                                            int e_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(w_3, y_3, z_3, t);
                                                LocalPopChoice(e_15);
                                              }
                                            else
                                              {
                                                t = c_15;
                                                {
                                                  ATerm f_15 = t;
                                                  int k_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(f_4, g_4, i_4, t);
                                                      LocalPopChoice(k_15);
                                                    }
                                                  else
                                                    {
                                                      t = f_15;
                                                      {
                                                        ATerm l_15 = t;
                                                        int m_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(j_4, k_4, l_4, t);
                                                            LocalPopChoice(m_15);
                                                          }
                                                        else
                                                          {
                                                            t = l_15;
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
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_16 = ATgetFirst((ATermList) t);
      x_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_17 = NULL,f_17 = NULL;
        static ATerm p_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_17)), not_null(f_17));
          return(t);
        }
        t = x_16;
        t = n_0(t);
        if(((d_17 != NULL) && (d_17 != t)))
          _fail(t);
        else
          d_17 = t;
        t = w_16;
        t = l_0(t);
        if(((f_17 != NULL) && (f_17 != t)))
          _fail(t);
        else
          f_17 = t;
        t = x_16;
        t = reverse_acc_2_0(l_0, p_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_12;
      t = n_0(t);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,s_17 = NULL,s_3 = NULL;
  s_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_17);
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_17);
  s_3 = t;
  t = SSLsetAnnotations(s_3, n_17);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm y_17 = NULL;
  y_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_17), term_n_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  ATerm p_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_15;
      t = get_config_0_0(t);
      LocalPopChoice(r_15);
    }
  else
    {
      t = p_15;
      t = fetch_1_0(q_4, t);
    }
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_15), term_w_15), term_v_15);
        t = echo_0_0(t);
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
      }
  }
  t = term_y_15;
  t = echo_0_0(t);
  t = term_r_12;
  l_17 = t;
  t = term_u_12;
  m_17 = t;
  t = term_z_15;
  t = x_5(l_17, m_17, t);
  t = reverse_acc_2_0(_id, w_4, t);
  t = map_1_0(x_4, t);
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_16), term_i_16), term_f_10);
        t = echo_0_0(t);
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,q_18 = NULL;
  i_18 = t;
  {
    ATerm k_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_16 = ATgetFirst((ATermList) t);
                ATerm p_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_18;
          }
        LocalPopChoice(m_16);
      }
    else
      {
        t = k_16;
        t = (ATerm) ATinsert(ATempty, i_18);
      }
  }
  j_18 = t;
  t = term_b_10;
  q_18 = t;
  t = SSL_printnl(q_18, j_18);
  t = i_18;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_15;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  t = term_s_16;
  u_18 = t;
  t = term_o_12;
  v_18 = t;
  t = term_v_16;
  t = h_5(u_18, v_18, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_y_16;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  t = term_s_16;
  y_18 = t;
  t = term_o_12;
  z_18 = t;
  t = term_v_16;
  t = h_5(y_18, z_18, t);
  t = term_z_16;
  w_18 = t;
  t = term_o_12;
  x_18 = t;
  t = term_a_17;
  t = h_5(w_18, x_18, t);
  t = term_b_17;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_c_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_4, g_5, i_5, t);
      LocalPopChoice(g_17);
    }
  else
    {
      t = e_17;
      t = Option_3_0(m_5, a_6, c_6, t);
    }
  return(t);
}
static ATerm h_5 (ATerm f_47, ATerm g_47, ATerm t)
{
  ATerm a_19 = NULL;
  t = term_a_13;
  a_19 = t;
  t = SSL_table_put(a_19, f_47, g_47);
  t = (ATerm) ATmakeAppl(sym__3, term_a_13, f_47, g_47);
  return(t);
}
static ATerm f_5 (ATerm i_42, ATerm j_42, ATerm h_42, ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_42, j_42);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_17 = ATgetArgument(t, 0);
            ATerm k_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_42, j_42);
        t = x_5(i_42, j_42, t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        t = (ATerm) ATempty;
      }
  }
  d_19 = t;
  t = (ATerm) ATinsert(CheckATermList(d_19), h_42);
  e_19 = t;
  t = SSL_table_put(i_42, j_42, e_19);
  t = c_19;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_19 = NULL,n_19 = NULL,q_19 = NULL;
      t = term_o_12;
      t = i_0(t);
      m_19 = t;
      t = term_r_12;
      n_19 = t;
      t = term_u_12;
      q_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_12, term_u_12, m_19);
      t = f_5(n_19, q_19, m_19, t);
      _fail(t);
    }
  else
    {
      ATerm t_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_19 = ATgetFirst((ATermList) t);
          l_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_19;
      t = d_0(t);
      t = term_o_12;
      t = g_0(t);
      t_19 = t;
      t = (ATerm) ATinsert(CheckATermList(l_19), t_19);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_50 (ATerm), ATerm m_50 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,y_19 = NULL,b_20 = NULL,c_20 = NULL,g_20 = NULL,x_3 = NULL;
  g_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_19 = ATgetFirst((ATermList) t);
      y_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_20);
  u_19 = t;
  t = v_19;
  t = l_50(t);
  b_20 = t;
  t = y_19;
  t = m_50(t);
  c_20 = t;
  t = (ATerm) ATinsert(CheckATermList(c_20), b_20);
  x_3 = t;
  t = SSLsetAnnotations(x_3, u_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,s_20 = NULL,t_20 = NULL,a_4 = NULL;
  n_20 = t;
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_17;
        t = o_89(t);
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
      }
  }
  t = n_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_20 = ATgetFirst((ATermList) t);
      q_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_20);
  o_20 = t;
  t = term_s_15;
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_15, p_20);
  t = h_5(t_20, p_20, t);
  t = q_20;
  {
    static ATerm f_21 (ATerm t)
    {
      ATerm t_17 = t;
      int u_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_20 = NULL;
              y_20 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_20;
              LocalPopChoice(w_17);
            }
          else
            {
              t = v_17;
              t = o_89(t);
              t = Cons_2_0(_id, f_21, t);
            }
          LocalPopChoice(u_17);
        }
      else
        {
          t = t_17;
          {
            ATerm b_21 = NULL,c_21 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_21 = ATgetFirst((ATermList) t);
                c_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_21), (ATerm) ATmakeAppl(sym_Undefined_1, b_21));
          }
        }
      return(t);
    }
    t = f_21(t);
  }
  s_20 = t;
  t = (ATerm) ATinsert(CheckATermList(s_20), (ATerm) ATmakeAppl(sym_Program_1, p_20));
  a_4 = t;
  t = SSLsetAnnotations(a_4, o_20);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  if(match_string(t, "--help"))
    {
      t = u_21;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_21;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_21;
        }
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  t = term_x_17;
  v_21 = t;
  t = term_o_12;
  w_21 = t;
  t = term_z_17;
  t = h_5(v_21, w_21, t);
  t = term_a_18;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_b_18;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_89 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  n_21 = t;
  t = term_r_12;
  p_21 = t;
  t = term_u_12;
  q_21 = t;
  t = (ATerm) ATempty;
  r_21 = t;
  t = SSL_table_put(p_21, q_21, r_21);
  t = n_21;
  {
    static ATerm d_6 (ATerm t)
    {
      ATerm c_18 = t;
      int d_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_89(t);
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
                t = Option_3_0(e_6, h_6, i_6, t);
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
    t = parse_options_p__1_0(d_6, t);
  }
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL;
        j_22 = t;
        {
          ATerm k_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_2 = NULL;
              t = j_22;
              {
                ATerm m_18 = t;
                int n_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_x_17;
                    t = get_config_0_0(t);
                    LocalPopChoice(n_18);
                  }
                else
                  {
                    t = m_18;
                    t = fetch_1_0(k_6, t);
                  }
              }
              t = j_22;
              t = default_system_usage_0_0(t);
              t = term_o_18;
              r_2 = t;
              t = SSL_exit(r_2);
              LocalPopChoice(l_18);
            }
          else
            {
              t = k_18;
              {
                ATerm w_2 = NULL;
                t = term_s_16;
                t = get_config_0_0(t);
                t = j_22;
                t = default_system_about_0_0(t);
                t = term_o_18;
                w_2 = t;
                t = SSL_exit(w_2);
              }
            }
        }
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          ATerm p_18 = t;
          int r_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_22 = NULL,n_22 = NULL,p_22 = NULL;
              static ATerm l_6 (ATerm t)
              {
                ATerm r_22 = NULL,s_22 = NULL,y_22 = NULL,g_10 = NULL;
                y_22 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_22);
                r_22 = t;
                t = s_22;
                if(((l_21 != NULL) && (l_21 != t)))
                  _fail(t);
                else
                  l_21 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_22);
                g_10 = t;
                t = SSLsetAnnotations(g_10, r_22);
                return(t);
              }
              t = fetch_1_0(l_6, t);
              t = term_f_11;
              n_22 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_21)), term_s_18);
              p_22 = t;
              t = SSL_printnl(n_22, p_22);
              t = (ATerm) ATmakeAppl(sym__2, term_f_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_21)), term_s_18));
              t = default_system_usage_0_0(t);
              t = term_d_12;
              l_22 = t;
              t = SSL_exit(l_22);
              LocalPopChoice(r_18);
            }
          else
            {
              t = p_18;
            }
        }
      }
  }
  m_21 = t;
  t = term_r_12;
  o_21 = t;
  t = SSL_table_destroy(o_21);
  t = m_21;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = debug_1_0(n_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_t_18;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_23 = NULL;
      t = parse_options_1_0(xtc_options_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(m_6, t);
      t = xtc_read_0_0(t);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_19 = t;
            int o_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_d_13;
                t = get_config_0_0(t);
                t = xtc_register_0_0(t);
                LocalPopChoice(o_19);
              }
            else
              {
                t = j_19;
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
              ATerm p_19 = t;
              int r_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = repository_query_0_0(t);
                  LocalPopChoice(r_19);
                }
              else
                {
                  t = p_19;
                  {
                    ATerm s_19 = t;
                    int w_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = all_query_0_0(t);
                        LocalPopChoice(w_19);
                      }
                    else
                      {
                        t = s_19;
                        t = tool_query_0_0(t);
                      }
                  }
                }
            }
          }
      }
      t = term_o_18;
      e_23 = t;
      t = SSL_exit(e_23);
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      t = debug_1_0(r_6, t);
    }
  return(t);
}
static ATerm j_5 (ATerm j_50, ATerm k_50, ATerm t)
{
  ATerm f_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,m_23 = NULL;
  t = k_50;
  t = map_1_0(xtc_find_0_0, t);
  f_23 = t;
  t = term_b_10;
  m_23 = t;
  t = SSL_print(m_23, f_23);
  t = term_b_10;
  j_23 = t;
  t = (ATerm) ATinsert(ATempty, term_f_10);
  k_23 = t;
  t = SSL_print(j_23, k_23);
  t = term_o_18;
  i_23 = t;
  t = SSL_exit(i_23);
  return(t);
}
static ATerm k_5 (ATerm k_38, ATerm l_38, ATerm t)
{
  t = SSL_execvp(k_38, l_38);
  return(t);
}
ATerm debug_1_0 (ATerm x_70 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  n_23 = t;
  t = x_70(t);
  s_23 = t;
  t = term_f_11;
  t_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_23), s_23);
  u_23 = t;
  t = SSL_printnl(t_23, u_23);
  t = n_23;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_23 = NULL;
  static ATerm s_6 (ATerm t)
  {
    ATerm w_23 = NULL,x_23 = NULL;
    w_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_23), w_23);
    t = x_5(not_null(v_23), w_23, t);
    x_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_23, x_23);
    return(t);
  }
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  t = SSL_table_keys(v_23);
  t = map_1_0(s_6, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm i_94 (ATerm), ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  {
    ATerm x_19 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_24 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        g_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_24, term_h_20);
        t = geq_0_0(t);
        t = b_24;
        t = i_94(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = x_19;
        t = b_24;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  static ATerm p_25 (ATerm t)
  {
    ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
    i_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_25 = ATgetFirst((ATermList) t);
        k_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_3 = NULL,j_3 = NULL,i_10 = NULL;
          t = SSLgetAnnotations(i_25);
          c_3 = t;
          t = j_25;
          t = s_71(t);
          j_3 = t;
          t = (ATerm) ATinsert(CheckATermList(k_25), j_3);
          i_10 = t;
          t = SSLsetAnnotations(i_10, c_3);
          LocalPopChoice(j_20);
        }
      else
        {
          t = i_20;
          {
            ATerm e_4 = NULL,h_4 = NULL,j_10 = NULL;
            t = SSLgetAnnotations(i_25);
            e_4 = t;
            t = k_25;
            t = p_25(t);
            h_4 = t;
            t = (ATerm) ATinsert(CheckATermList(h_4), j_25);
            j_10 = t;
            t = SSLsetAnnotations(j_10, e_4);
          }
        }
    }
    return(t);
  }
  t = p_25(t);
  return(t);
}
static ATerm x_5 (ATerm z_43, ATerm a_44, ATerm t)
{
  t = SSL_table_get(z_43, a_44);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_26 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        d_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_26, term_m_20);
        t = geq_0_0(t);
        t = y_25;
        t = h_94(t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        t = y_25;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  if(match_cons(t, sym__2))
    {
      t_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_26;
        if((t_26 != t))
          {
            _fail(t);
          }
        t = s_26;
        LocalPopChoice(u_20);
      }
    else
      {
        t = r_20;
        t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
        {
          ATerm v_20 = t;
          int w_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_26, u_26);
              LocalPopChoice(w_20);
            }
          else
            {
              t = v_20;
              t = SSL_gtr(t_26, u_26);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm j_94 (ATerm), ATerm t)
{
  ATerm y_26 = NULL;
  y_26 = t;
  {
    ATerm x_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        a_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_27, term_a_21);
        t = geq_0_0(t);
        t = y_26;
        t = j_94(t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = x_20;
        t = y_26;
      }
  }
  return(t);
}
static ATerm o_5 (ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm e_20, ATerm d_20, ATerm t)
{
  t = q_75(t);
  {
    static ATerm x_6 (ATerm t)
    {
      ATerm c_27 = NULL;
      c_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_20, c_27);
      t = p_75(t);
      return(t);
    }
    t = fetch_1_0(x_6, t);
  }
  t = d_20;
  return(t);
}
static ATerm p_5 (ATerm m_75 (ATerm), ATerm a_20, ATerm z_19, ATerm t)
{
  static ATerm s_27 (ATerm t)
  {
    ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
    n_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_19;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_27 = ATgetFirst((ATermList) t);
            p_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_27;
              {
                static ATerm y_6 (ATerm t)
                {
                  t = z_19;
                  return(t);
                }
                t = o_5(m_75, y_6, o_27, p_27, t);
              }
              t = s_27(t);
              LocalPopChoice(e_21);
            }
          else
            {
              t = d_21;
              {
                ATerm f_6 = NULL,j_6 = NULL,m_10 = NULL;
                t = SSLgetAnnotations(n_27);
                f_6 = t;
                t = p_27;
                t = s_27(t);
                j_6 = t;
                t = (ATerm) ATinsert(CheckATermList(j_6), o_27);
                m_10 = t;
                t = SSLsetAnnotations(m_10, f_6);
              }
            }
        }
      }
    return(t);
  }
  t = a_20;
  t = s_27(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm h_28 = NULL;
  if(match_cons(t, sym__2))
    {
      h_28 = ATgetArgument(t, 0);
      if((h_28 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm f_43, ATerm g_43, ATerm h_43, ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_43, g_43);
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            ATerm j_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_43, g_43);
        t = x_5(f_43, g_43, t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = (ATerm) ATempty;
      }
  }
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_28, h_43);
  t = p_5(z_6, c_28, h_43, t);
  b_28 = t;
  t = SSL_table_put(f_43, g_43, b_28);
  t = a_28;
  return(t);
}
static ATerm r_5 (ATerm r_89 (ATerm), ATerm p_43, ATerm o_43, ATerm t)
{
  static ATerm d_7 (ATerm t)
  {
    ATerm i_28 = NULL,j_28 = NULL;
    if(match_cons(t, sym__2))
      {
        i_28 = ATgetArgument(t, 0);
        j_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, p_43, i_28, j_28);
    t = r_89(t);
    return(t);
  }
  t = o_43;
  t = map_1_0(d_7, t);
  return(t);
}
static ATerm v_5 (ATerm u_28, ATerm v_28, ATerm t)
{
  t = SSL_access(u_28, v_28);
  return(t);
}
static ATerm b_29 (ATerm t_28, ATerm t)
{
  t = SSL_fclose(t_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  z_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_28 = ATgetArgument(t, 0);
      {
        ATerm k_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_28);
            LocalPopChoice(s_21);
          }
        else
          {
            t = k_21;
            t = b_29(z_28, t);
          }
      }
    }
  else
    {
      t = b_29(z_28, t);
    }
  return(t);
}
static ATerm s_5 (ATerm j_14, ATerm t)
{
  t = SSL_read_term_from_stream(j_14);
  return(t);
}
static ATerm t_5 (ATerm d_29, ATerm e_29, ATerm t)
{
  ATerm c_29 = NULL;
  t = SSL_fopen(d_29, e_29);
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_29);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_29 = NULL;
  t = SSL_stdin_stream();
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_29 = NULL;
  t = SSL_stdout_stream();
  i_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_29 = NULL;
  t = SSL_stderr_stream();
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_29);
  return(t);
}
static ATerm q_30 (ATerm p_29, ATerm t)
{
  ATerm q_29 = NULL;
  t = SSL_explode_term(p_29);
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_21 = ATgetArgument(t, 1);
        if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
          {
            q_29 = ATgetFirst((ATermList) x_21);
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
  t = q_29;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_29;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_29;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_29;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_30 (ATerm t_29, ATerm u_29, ATerm v_29, ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,b_30 = NULL,o_10 = NULL;
  t = SSLgetAnnotations(v_29);
  y_29 = t;
  t = t_29;
  if(match_cons(t, sym_Path_1))
    {
      b_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_30, u_29);
  o_10 = t;
  t = SSLsetAnnotations(o_10, y_29);
  if(match_cons(t, sym__2))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(w_29, x_29, t);
  return(t);
}
static ATerm s_30 (ATerm d_30, ATerm e_30, ATerm f_30, ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,l_30 = NULL,p_10 = NULL;
  t = SSLgetAnnotations(f_30);
  i_30 = t;
  t = SSL_is_string(d_30);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_30, e_30);
  p_10 = t;
  t = SSLsetAnnotations(p_10, i_30);
  if(match_cons(t, sym__2))
    {
      g_30 = ATgetArgument(t, 0);
      h_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(g_30, h_30, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  n_30 = t;
  if(match_cons(t, sym__2))
    {
      o_30 = ATgetArgument(t, 0);
      p_30 = ATgetArgument(t, 1);
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_30(n_30, t);
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
                  t = r_30(o_30, p_30, n_30, t);
                  LocalPopChoice(c_22);
                }
              else
                {
                  t = b_22;
                  t = s_30(o_30, p_30, n_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_30(n_30, t);
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
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_30 = NULL;
      w_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_30, term_g_22);
      t = u_5(t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      t = debug_1_0(e_7, t);
      _fail(t);
    }
  u_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(v_30, t);
  t_30 = t;
  t = u_30;
  t = fclose_0_0(t);
  t = t_30;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_h_22;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_30 = NULL,z_30 = NULL;
      y_30 = t;
      t = (ATerm) ATinsert(ATempty, term_o_22);
      z_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_30, (ATerm) ATinsert(ATempty, term_o_22));
      t = v_5(y_30, z_30, t);
      LocalPopChoice(m_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_22;
      {
        ATerm q_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_22 = t;
            if((PushChoice() == 0))
              {
                ATerm a_31 = NULL,b_31 = NULL;
                a_31 = t;
                t = (ATerm) ATinsert(ATempty, term_p_11);
                b_31 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_31, (ATerm) ATinsert(ATempty, term_p_11));
                t = v_5(a_31, b_31, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_22;
              }
            t = debug_1_0(f_7, t);
            LocalPopChoice(t_22);
          }
        else
          {
            t = q_22;
            t = debug_1_0(g_7, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = debug_1_0(j_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_v_22;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = debug_1_0(m_7, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  t = term_f_11;
  p_31 = t;
  t = (ATerm) ATinsert(ATempty, term_x_22);
  q_31 = t;
  t = SSL_printnl(p_31, q_31);
  t = o_31;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  if(match_cons(t, sym__3))
    {
      r_31 = ATgetArgument(t, 0);
      s_31 = ATgetArgument(t, 1);
      t_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_5(r_31, s_31, t_31, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t = term_f_11;
  v_31 = t;
  t = (ATerm) ATinsert(ATempty, term_z_22);
  w_31 = t;
  t = SSL_printnl(v_31, w_31);
  t = u_31;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  t = term_f_11;
  y_31 = t;
  t = (ATerm) ATinsert(ATempty, term_x_22);
  z_31 = t;
  t = SSL_printnl(y_31, z_31);
  t = x_31;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  c_31 = t;
  t = if_verbose5_1_0(h_7, t);
  {
    ATerm a_23 = t;
    if((PushChoice() == 0))
      {
        ATerm m_31 = NULL,n_31 = NULL;
        t = term_m_9;
        m_31 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_31);
        n_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym_Imported_1, c_31));
        t = x_5(m_31, n_31, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_23;
      }
  }
  e_31 = t;
  t = term_m_9;
  j_31 = t;
  t = term_b_23;
  k_31 = t;
  t = (ATerm) ATinsert(ATempty, c_31);
  l_31 = t;
  t = SSL_table_put(j_31, k_31, l_31);
  t = e_31;
  t = if_verbose4_1_0(l_7, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(o_7, t);
  d_31 = t;
  t = term_m_9;
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, d_31);
  t = r_5(p_7, i_31, d_31, t);
  t = if_verbose6_1_0(q_7, t);
  t = term_m_9;
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_31);
  g_31 = t;
  t = (ATerm) ATempty;
  h_31 = t;
  t = SSL_table_put(f_31, g_31, h_31);
  t = (ATerm) ATmakeAppl(sym__3, term_m_9, (ATerm)ATmakeAppl(sym_Imported_1, c_31), (ATerm) ATempty);
  t = if_verbose4_1_0(u_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm p_78 (ATerm), ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
  l_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_32;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_32 = ATgetFirst((ATermList) t);
          n_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 = NULL,s_7 = NULL,t_7 = NULL,s_10 = NULL;
            t = SSLgetAnnotations(l_32);
            n_7 = t;
            t = m_32;
            t = p_78(t);
            s_7 = t;
            t = n_32;
            t = filter_1_0(p_78, t);
            t_7 = t;
            t = (ATerm) ATinsert(CheckATermList(t_7), s_7);
            s_10 = t;
            t = SSLsetAnnotations(s_10, n_7);
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            t = n_32;
            t = filter_1_0(p_78, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm t)
{
  static ATerm q_32 (ATerm t)
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_63(t);
        t = q_32(t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = x_63(t);
      }
    return(t);
  }
  t = q_32(t);
  return(t);
}
static ATerm w_5 (ATerm u_27, ATerm v_27, ATerm t)
{
  t = SSL_strcat(u_27, v_27);
  return(t);
}
ATerm map_1_0 (ATerm i_71 (ATerm), ATerm t)
{
  static ATerm g_33 (ATerm t)
  {
    ATerm c_33 = NULL,e_33 = NULL,f_33 = NULL;
    c_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_33;
      }
    else
      {
        ATerm o_8 = NULL,r_8 = NULL,w_8 = NULL,u_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_33 = ATgetFirst((ATermList) t);
            f_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_33);
        o_8 = t;
        t = e_33;
        t = i_71(t);
        r_8 = t;
        t = f_33;
        t = g_33(t);
        w_8 = t;
        t = (ATerm) ATinsert(CheckATermList(w_8), r_8);
        u_10 = t;
        t = SSLsetAnnotations(u_10, o_8);
      }
    return(t);
  }
  t = g_33(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm l_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = l_23;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_p_23;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_33 = NULL;
      o_33 = t;
      t = SSL_is_string(o_33);
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(w_7, t);
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            {
              ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
              u_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_33 = ATgetArgument(t, 0);
                  t = v_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_33 = ATgetArgument(t, 0);
                      t = v_33;
                      {
                        ATerm a_24 = t;
                        int c_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(c_24);
                          }
                        else
                          {
                            t = a_24;
                            t = debug_1_0(x_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_34 = NULL,b_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_33 = ATgetArgument(t, 0);
                          w_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_33;
                      t = eval_config_0_0(t);
                      a_34 = t;
                      t = w_33;
                      t = eval_config_0_0(t);
                      b_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_34, b_34);
                      t = w_5(a_34, b_34, t);
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
  ATerm f_34 = NULL,g_34 = NULL;
  f_34 = t;
  t = term_a_13;
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, f_34);
  t = x_5(g_34, f_34, t);
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_34 = NULL,i_34 = NULL;
        t = eval_config_0_0(t);
        h_34 = t;
        t = term_a_13;
        i_34 = t;
        t = SSL_table_put(i_34, f_34, h_34);
        t = h_34;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
      }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_11;
      t = get_config_0_0(t);
      LocalPopChoice(h_24);
    }
  else
    {
      t = f_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_34 = NULL;
            t = term_k_24;
            l_34 = t;
            t = SSL_getenv(l_34);
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
static ATerm c_8 (ATerm t)
{
  t = debug_1_0(d_8, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_l_24;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL;
  t = term_m_9;
  r_34 = t;
  t = term_n_9;
  s_34 = t;
  t = term_o_9;
  t = x_5(r_34, s_34, t);
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
static ATerm f_8 (ATerm t)
{
  t = debug_1_0(g_8, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm n_34 = NULL;
  t = if_verbose5_1_0(c_8, t);
  n_34 = t;
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_34 = NULL,p_34 = NULL;
        t = term_m_9;
        o_34 = t;
        t = term_b_23;
        p_34 = t;
        t = term_q_24;
        t = x_5(o_34, p_34, t);
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        {
          ATerm q_34 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          q_34 = t;
          t = repeat_2_0(e_8, _id, t);
          t = q_34;
        }
      }
  }
  t = n_34;
  t = if_verbose5_1_0(f_8, t);
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
static ATerm p_35 (ATerm x_34, ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  t = term_m_9;
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_34);
  b_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym_Tool_1, x_34));
  t = x_5(a_35, b_35, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_24 = ATgetFirst((ATermList) t);
      if(match_cons(s_24, sym__2))
        {
          ATerm u_24 = ATgetArgument(s_24, 0);
          z_34 = ATgetArgument(s_24, 1);
        }
      else
        _fail(t);
      {
        ATerm t_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_34;
  return(t);
}
static ATerm v_8 (ATerm t)
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
      ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
      t = if_verbose5_1_0(p_8, t);
      t = xtc_load_0_0(t);
      e_35 = t;
      if(match_cons(t, sym__2))
        {
          c_35 = ATgetArgument(t, 0);
          d_35 = ATgetArgument(t, 1);
          {
            ATerm y_24 = t;
            int z_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
                t = term_m_9;
                i_35 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, c_35);
                j_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym_Tool_1, c_35));
                t = x_5(i_35, j_35, t);
                {
                  static ATerm t_8 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((d_35 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((h_35 != NULL) && (h_35 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_35 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_8, t);
                }
                t = not_null(h_35);
                LocalPopChoice(z_24);
              }
            else
              {
                t = y_24;
                t = p_35(e_35, t);
              }
          }
        }
      else
        {
          t = p_35(e_35, t);
        }
      t = if_verbose5_1_0(v_8, t);
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm o_35 = NULL,c_10 = NULL,d_10 = NULL;
        o_35 = t;
        t = term_f_11;
        c_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), o_35), term_a_25);
        d_10 = t;
        t = SSL_printnl(c_10, d_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), o_35), term_a_25);
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
      ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
      x_35 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_35 = ATgetFirst((ATermList) t);
          z_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_36 = ATgetFirst((ATermList) t);
          b_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_36;
      if(match_string(t, "call"))
        {
          ATerm f_36 = NULL;
          t = b_36;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_35 = ATgetFirst((ATermList) t);
              w_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_35;
          t = xtc_find_0_0(t);
          f_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_36, w_35);
          t = k_5(f_36, w_35, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = x_35;
          t = j_5(y_35, b_36, t);
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
