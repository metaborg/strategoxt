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
Symbol sym_Hashtable_1;
Symbol sym_Path_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
ATerm term_p_26;
ATerm term_o_26;
ATerm term_j_26;
ATerm term_z_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_a_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_z_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_q_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_s_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_f_19;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_q_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_k_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_m_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_r_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_i_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_r_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_d_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_p_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_a_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_k_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_h_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_d_12, term_h_14);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_h_14);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_p_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_j_14);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_h_14);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_h_14);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_h_14);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__3, term_i_14, term_j_14, (ATerm) ATempty);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_s_19);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_v_17);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_y_14);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_d_15);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_a_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm version_query_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm p_99 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm tool_query_0_0 (ATerm t);
static ATerm i_5 (ATerm s_53, ATerm r_676, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm all_query_0_0 (ATerm t);
ATerm repository_query_0_0 (ATerm t);
static ATerm j_5 (ATerm e_14, ATerm f_14, ATerm t);
static ATerm k_5 (ATerm z_74 (ATerm), ATerm o_149, ATerm o_14, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm xtc_store_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm register_import_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm l_5 (ATerm i_44, ATerm j_44, ATerm h_44, ATerm t);
ATerm if_verbose1_1_0 (ATerm n_99 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm o_99 (ATerm), ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm z_75 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_15 (ATerm m_14, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_5 (ATerm o_51, ATerm n_51, ATerm t);
static ATerm q_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm xtc_options_0_0 (ATerm t);
static ATerm n_5 (ATerm n_47, ATerm o_47, ATerm t);
static ATerm o_5 (ATerm s_47, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm r_5 (ATerm i_51, ATerm j_51, ATerm t);
static ATerm p_5 (ATerm q_43, ATerm r_43, ATerm p_43, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm k_54 (ATerm), ATerm l_54 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_94 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm parse_options_1_0 (ATerm o_94 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm xtc_main_0_0 (ATerm t);
static ATerm t_5 (ATerm i_54, ATerm j_54, ATerm t);
static ATerm u_5 (ATerm s_39, ATerm t_39, ATerm t);
ATerm debug_1_0 (ATerm x_74 (ATerm), ATerm t);
static ATerm v_5 (ATerm p_47, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm r_99 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm s_75 (ATerm), ATerm t);
static ATerm k_6 (ATerm j_45, ATerm k_45, ATerm t);
ATerm if_verbose4_1_0 (ATerm q_99 (ATerm), ATerm t);
static ATerm j_6 (ATerm i_47, ATerm j_47, ATerm k_47, ATerm t);
static ATerm i_6 (ATerm l_47, ATerm m_47, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_47, ATerm r_47, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm c_45, ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm s_99 (ATerm), ATerm t);
static ATerm z_5 (ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm q_20, ATerm p_20, ATerm t);
static ATerm a_6 (ATerm t_79 (ATerm), ATerm m_20, ATerm l_20, ATerm t);
static ATerm j_7 (ATerm t);
static ATerm b_6 (ATerm n_44, ATerm o_44, ATerm p_44, ATerm t);
ATerm map_1_0 (ATerm i_75 (ATerm), ATerm t);
static ATerm c_6 (ATerm s_94 (ATerm), ATerm x_44, ATerm w_44, ATerm t);
static ATerm h_6 (ATerm g_29, ATerm h_29, ATerm t);
static ATerm r_36 (ATerm l_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_6 (ATerm k_14, ATerm t);
static ATerm e_6 (ATerm g_28, ATerm h_28, ATerm t);
static ATerm f_6 (ATerm p_29, ATerm q_29, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_38 (ATerm b_37, ATerm t);
static ATerm d_38 (ATerm f_37, ATerm g_37, ATerm h_37, ATerm t);
static ATerm e_38 (ATerm p_37, ATerm q_37, ATerm r_37, ATerm t);
static ATerm g_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_83 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm v_41 (ATerm d_41, ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
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
  ATerm l_0 = NULL,m_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,x_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,g_0 = NULL;
  u_0 = t;
  t = term_k_9;
  x_0 = t;
  t = term_m_9;
  y_0 = t;
  t = term_n_9;
  t = k_6(x_0, y_0, t);
  m_0 = t;
  t = u_0;
  if(match_cons(t, sym__2))
    {
      b_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_0);
  a_1 = t;
  t = b_1;
  if(match_cons(t, sym_Tool_1))
    {
      l_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_1;
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
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_1, d_1);
  g_0 = t;
  t = SSLsetAnnotations(g_0, a_1);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_0, not_null(t_0)));
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, l_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_0, not_null(t_0))));
  t = i_5(l_0, v_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  {
    ATerm o_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL;
        t = term_k_9;
        i_1 = t;
        t = term_r_9;
        j_1 = t;
        t = term_v_9;
        t = k_6(i_1, j_1, t);
        h_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_1, term_y_9);
        t = geq_0_0(t);
        t = f_1;
        t = p_99(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = o_9;
        t = f_1;
      }
  }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm y_1 = NULL,d_2 = NULL;
  t = term_c_10;
  y_1 = t;
  t = term_i_10;
  d_2 = t;
  t = term_j_10;
  t = k_6(y_1, d_2, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm p_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_10;
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
  t = term_q_10;
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm q_1 = NULL,s_1 = NULL,u_1 = NULL,w_1 = NULL;
  static ATerm f_0 (ATerm t)
  {
    ATerm j_2 = NULL;
    j_2 = t;
    {
      ATerm s_10 = t;
      int y_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_2 = NULL,l_2 = NULL;
          t = if_verbose3_1_0(r_0, t);
          t = term_c_10;
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym_Tool_1, j_2);
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATmakeAppl(sym_Tool_1, j_2));
          t = k_6(k_2, l_2, t);
          if(((q_1 != NULL) && (q_1 != t)))
            _fail(t);
          else
            q_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, j_2), q_1);
          {
            ATerm b_11 = t;
            int e_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = version_query_0_0(t);
                LocalPopChoice(e_11);
              }
            else
              {
                t = b_11;
                if(match_cons(t, sym__2))
                  {
                    ATerm g_11 = ATgetArgument(t, 0);
                    ATerm j_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, j_2), q_1);
                t = i_5(j_2, q_1, t);
              }
          }
          LocalPopChoice(y_10);
        }
      else
        {
          t = s_10;
          {
            ATerm r_2 = NULL,t_2 = NULL;
            t = term_l_11;
            r_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_11), term_o_11), j_2);
            t_2 = t;
            t = SSL_print(r_2, t_2);
            t = (ATerm) ATmakeAppl(sym__2, term_l_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_11), term_o_11), j_2));
          }
        }
    }
    return(t);
  }
  t = term_k_9;
  u_1 = t;
  t = term_r_11;
  w_1 = t;
  t = term_a_12;
  t = k_6(u_1, w_1, t);
  s_1 = t;
  t = repeat_2_0(b_0, _id, t);
  t = s_1;
  t = map_1_0(f_0, t);
  return(t);
}
static ATerm i_5 (ATerm s_53, ATerm r_676, ATerm t)
{
  static ATerm g_1 (ATerm t)
  {
    ATerm u_2 = NULL,w_2 = NULL;
    if(match_cons(t, sym__2))
      {
        u_2 = ATgetArgument(t, 0);
        w_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm b_12 = t;
      int c_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_2 = NULL,y_2 = NULL,a_3 = NULL,e_3 = NULL;
          t = term_k_9;
          a_3 = t;
          t = term_d_12;
          e_3 = t;
          t = term_f_12;
          t = k_6(a_3, e_3, t);
          t = term_l_11;
          x_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_p_11), w_2);
          y_2 = t;
          t = SSL_print(x_2, y_2);
          t = (ATerm) ATmakeAppl(sym__2, term_l_11, (ATerm) ATinsert(ATinsert(ATempty, term_p_11), w_2));
          LocalPopChoice(c_12);
        }
      else
        {
          t = b_12;
          {
            ATerm f_3 = NULL,i_3 = NULL;
            t = term_l_11;
            f_3 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_11), w_2), term_i_12), u_2), term_g_12), s_53);
            i_3 = t;
            t = SSL_print(f_3, i_3);
            t = (ATerm) ATmakeAppl(sym__2, term_l_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_11), w_2), term_i_12), u_2), term_g_12), s_53));
          }
        }
    }
    return(t);
  }
  t = r_676;
  t = map_1_0(g_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  t = term_c_10;
  u_3 = t;
  t = term_i_10;
  v_3 = t;
  t = term_j_10;
  t = k_6(u_3, v_3, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm j_12 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_12;
      }
  }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
  c_5 = t;
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
      {
        ATerm k_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 = NULL,j_0 = NULL,q_0 = NULL,w_0 = NULL,z_0 = NULL,e_1 = NULL,e_4 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(c_5);
            q_0 = t;
            t = a_5;
            if(match_cons(t, sym_Tool_1))
              {
                z_0 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_5);
            w_0 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, z_0);
            b_4 = t;
            t = SSLsetAnnotations(b_4, w_0);
            e_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_1, b_5);
            e_4 = t;
            t = SSLsetAnnotations(e_4, q_0);
            if(match_cons(t, sym__2))
              {
                ATerm o_12 = ATgetArgument(t, 0);
                if(match_cons(o_12, sym_Tool_1))
                  {
                    h_0 = ATgetArgument(o_12, 0);
                  }
                else
                  _fail(t);
                j_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_5(h_0, j_0, t);
            LocalPopChoice(n_12);
          }
        else
          {
            t = k_12;
            t = c_5;
          }
      }
    }
  else
    {
      t = c_5;
    }
  return(t);
}
ATerm all_query_0_0 (ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL;
  t = term_k_9;
  r_3 = t;
  t = term_p_12;
  t_3 = t;
  t = term_r_12;
  t = k_6(r_3, t_3, t);
  t = repeat_2_0(k_1, _id, t);
  t = term_c_10;
  t = table_getlist_0_0(t);
  t = map_1_0(l_1, t);
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,s_6 = NULL,x_6 = NULL;
  t = term_k_9;
  s_6 = t;
  t = term_s_12;
  x_6 = t;
  t = term_t_12;
  t = k_6(s_6, x_6, t);
  t = xtc_location_0_0(t);
  l_6 = t;
  t = term_l_11;
  m_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_11), l_6), term_u_12);
  n_6 = t;
  t = SSL_print(m_6, n_6);
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_11), l_6), term_u_12));
  return(t);
}
static ATerm j_5 (ATerm e_14, ATerm f_14, ATerm t)
{
  ATerm y_6 = NULL;
  t = SSL_write_term_to_stream_baf(e_14, f_14);
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_6);
  return(t);
}
static ATerm k_5 (ATerm z_74 (ATerm), ATerm o_149, ATerm o_14, ATerm t)
{
  ATerm z_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_149, term_v_12);
  t = g_6(t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_6, o_14);
  t = z_74(t);
  t = fclose_0_0(t);
  t = o_14;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  t = term_w_12;
  o_7 = t;
  t = (ATerm) ATinsert(ATempty, term_x_12);
  p_7 = t;
  t = SSL_printnl(o_7, p_7);
  t = n_7;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_12 = ATgetArgument(t, 0);
      if(match_cons(y_12, sym_Stream_1))
        {
          d_8 = ATgetArgument(y_12, 0);
        }
      else
        _fail(t);
      e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(d_8, e_8, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  ATerm d_7 = NULL,m_7 = NULL;
  t = if_verbose1_1_0(m_1, t);
  t = term_k_9;
  d_7 = t;
  t = term_a_13;
  m_7 = t;
  t = term_b_13;
  t = k_6(d_7, m_7, t);
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_7 = NULL,t_7 = NULL;
            s_7 = t;
            t = (ATerm) ATinsert(ATempty, term_g_13);
            t_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_7, (ATerm) ATinsert(ATempty, term_g_13));
            t = h_6(s_7, t_7, t);
            LocalPopChoice(f_13);
            {
              ATerm u_7 = NULL,v_7 = NULL;
              u_7 = t;
              t = (ATerm) ATinsert(ATempty, term_h_13);
              v_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_7, (ATerm) ATinsert(ATempty, term_h_13));
              t = h_6(u_7, v_7, t);
            }
          }
        else
          {
            t = e_13;
          }
        LocalPopChoice(d_13);
        {
          ATerm z_7 = NULL,a_8 = NULL;
          a_8 = t;
          t = term_c_10;
          t = table_getlist_0_0(t);
          z_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_8, z_7);
          t = k_5(n_1, a_8, z_7, t);
        }
      }
    else
      {
        t = c_13;
        t = debug_1_0(o_1, t);
        _fail(t);
      }
  }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_i_13;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
  t = term_k_9;
  m_8 = t;
  t = term_k_13;
  n_8 = t;
  t = term_l_13;
  t = k_6(m_8, n_8, t);
  t = if_verbose2_1_0(p_1, t);
  t = term_k_9;
  k_8 = t;
  t = term_k_13;
  l_8 = t;
  t = term_l_13;
  t = k_6(k_8, l_8, t);
  f_8 = t;
  t = if_verbose5_1_0(t_1, t);
  t = term_c_10;
  g_8 = t;
  t = term_i_10;
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_10, term_i_10, f_8);
  t = l_5(g_8, h_8, f_8, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm j_9 = NULL;
  if(match_cons(t, sym__2))
    {
      j_9 = ATgetArgument(t, 0);
      if((j_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm i_44, ATerm j_44, ATerm h_44, ATerm t)
{
  ATerm r_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_44, j_44);
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_13 = ATgetArgument(t, 0);
            ATerm p_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_44, j_44);
        t = k_6(i_44, j_44, t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = (ATerm) ATempty;
      }
  }
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_44, x_8);
  t = a_6(z_1, h_44, x_8, t);
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_44, j_44, w_8);
  t = lookup_table_0_1(i_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(j_44, w_8, y_8, t);
  t = r_8;
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_99 (ATerm), ATerm t)
{
  ATerm l_9 = NULL;
  l_9 = t;
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
        t = term_k_9;
        t_9 = t;
        t = term_r_9;
        u_9 = t;
        t = term_v_9;
        t = k_6(t_9, u_9, t);
        s_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, term_u_13);
        t = geq_0_0(t);
        t = l_9;
        t = n_99(t);
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        t = l_9;
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  l_10 = t;
  t = term_w_12;
  m_10 = t;
  t = (ATerm) ATinsert(ATempty, term_v_13);
  n_10 = t;
  t = SSL_printnl(m_10, n_10);
  t = l_10;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_w_13;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_y_13;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,a_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,k_10 = NULL;
  static ATerm m_2 (ATerm t)
  {
    ATerm o_10 = NULL,r_10 = NULL,t_10 = NULL,v_10 = NULL,x_10 = NULL,z_10 = NULL;
    r_10 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_10), term_a_14), not_null(a_10));
    z_10 = t;
    t = SSL_concat_strings(z_10);
    o_10 = t;
    t = term_c_10;
    t_10 = t;
    t = (ATerm) ATmakeAppl(sym_Tool_1, r_10);
    v_10 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(x_9), o_10));
    x_10 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_c_10, (ATerm)ATmakeAppl(sym_Tool_1, r_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(x_9), o_10)));
    t = l_5(t_10, v_10, x_10, t);
    return(t);
  }
  t = term_k_9;
  h_10 = t;
  t = term_r_11;
  k_10 = t;
  t = term_a_12;
  t = k_6(h_10, k_10, t);
  w_9 = t;
  t = if_verbose1_1_0(b_2, t);
  t = if_verbose2_1_0(c_2, t);
  t = term_k_9;
  f_10 = t;
  t = term_m_9;
  g_10 = t;
  t = term_n_9;
  t = k_6(f_10, g_10, t);
  if(((x_9 != NULL) && (x_9 != t)))
    _fail(t);
  else
    x_9 = t;
  t = if_verbose2_1_0(f_2, t);
  t = term_k_9;
  d_10 = t;
  t = term_d_12;
  e_10 = t;
  t = term_f_12;
  t = k_6(d_10, e_10, t);
  if(((a_10 != NULL) && (a_10 != t)))
    _fail(t);
  else
    a_10 = t;
  t = if_verbose2_1_0(h_2, t);
  t = w_9;
  t = map_1_0(m_2, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_99 (ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,i_11 = NULL,n_11 = NULL;
        t = term_k_9;
        i_11 = t;
        t = term_r_9;
        n_11 = t;
        t = term_v_9;
        t = k_6(i_11, n_11, t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_11, term_g_14);
        t = geq_0_0(t);
        t = d_11;
        t = o_99(t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = d_11;
      }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
      t = term_h_14;
      t = p_0(t);
      x_11 = t;
      t = term_i_14;
      y_11 = t;
      t = term_j_14;
      z_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_14, term_j_14, x_11);
      t = p_5(y_11, z_11, x_11, t);
      _fail(t);
    }
  else
    {
      ATerm h_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_11 = ATgetFirst((ATermList) t);
          u_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_11 = ATgetFirst((ATermList) t);
          w_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_11;
      t = n_0(t);
      t = v_11;
      t = o_0(t);
      h_12 = t;
      t = (ATerm) ATinsert(CheckATermList(w_11), h_12);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_75 (ATerm), ATerm t)
{
  static ATerm b_14 (ATerm t)
  {
    ATerm s_13 = NULL,t_13 = NULL,x_13 = NULL;
    x_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_13 = ATgetFirst((ATermList) t);
        t_13 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_1 = NULL,a_2 = NULL,h_4 = NULL;
          t = SSLgetAnnotations(x_13);
          v_1 = t;
          t = t_13;
          t = b_14(t);
          a_2 = t;
          t = (ATerm) ATinsert(CheckATermList(a_2), s_13);
          h_4 = t;
          t = SSLsetAnnotations(h_4, v_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_13;
        t = z_75(t);
      }
    return(t);
  }
  t = b_14(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,q_12 = NULL;
  l_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_12;
    }
  else
    {
      static ATerm n_2 (ATerm t)
      {
        t = not_null(q_12);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_12 = ATgetFirst((ATermList) t);
          if(((q_12 != NULL) && (q_12 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_12;
      t = at_end_1_0(n_2, t);
    }
  return(t);
}
static ATerm g_15 (ATerm m_14, ATerm t)
{
  ATerm q_14 = NULL;
  t = SSL_explode_term(m_14);
  if(match_cons(t, sym__2))
    {
      ATerm l_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_14;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  v_14 = t;
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
      {
        ATerm n_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_2 (ATerm t)
            {
              t = u_14;
              return(t);
            }
            t = t_14;
            t = at_end_1_0(p_2, t);
            LocalPopChoice(p_14);
          }
        else
          {
            t = n_14;
            t = g_15(v_14, t);
          }
      }
    }
  else
    {
      t = g_15(v_14, t);
    }
  return(t);
}
static ATerm m_5 (ATerm o_51, ATerm n_51, ATerm t)
{
  ATerm k_15 = NULL,o_15 = NULL,q_15 = NULL,t_15 = NULL;
  t = o_51;
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_16 = NULL;
        t = term_k_9;
        c_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_9, o_51);
        t = k_6(c_16, o_51, t);
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        t = (ATerm) ATempty;
      }
  }
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_51, o_15);
  t = conc_0_0(t);
  k_15 = t;
  t = term_k_9;
  q_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, o_51, k_15);
  t = lookup_table_0_1(q_15, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(o_51, k_15, t_15, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, o_51, k_15);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm x_16 = NULL;
  x_16 = t;
  if(match_string(t, "-r"))
    {
      t = x_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = x_16;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm y_16 = NULL,a_17 = NULL;
  y_16 = t;
  t = term_a_13;
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, y_16);
  t = r_5(a_17, y_16, t);
  t = y_16;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_w_14;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm b_17 = NULL;
  b_17 = t;
  if(match_string(t, "i"))
    {
      t = b_17;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = b_17;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = b_17;
        }
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  t = term_k_13;
  d_17 = t;
  t = (ATerm) ATinsert(ATempty, c_17);
  e_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_13, (ATerm) ATinsert(ATempty, c_17));
  t = m_5(d_17, e_17, t);
  t = c_17;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_x_14;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm f_17 = NULL;
  f_17 = t;
  if(match_string(t, "r"))
    {
      t = f_17;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = f_17;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = f_17;
        }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  o_17 = t;
  t = term_y_14;
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, o_17);
  t = r_5(p_17, o_17, t);
  t = o_17;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_z_14;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm q_17 = NULL;
  q_17 = t;
  if(match_string(t, "-t"))
    {
      t = q_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = q_17;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  r_17 = t;
  t = term_r_11;
  s_17 = t;
  t = (ATerm) ATinsert(ATempty, r_17);
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, (ATerm) ATinsert(ATempty, r_17));
  t = m_5(s_17, t_17, t);
  t = r_17;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_a_15;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm u_17 = NULL;
  u_17 = t;
  if(match_string(t, "-l"))
    {
      t = u_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = u_17;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  y_17 = t;
  t = term_d_12;
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_12, y_17);
  t = r_5(z_17, y_17, t);
  t = y_17;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_b_15;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm a_18 = NULL;
  a_18 = t;
  if(match_string(t, "-V"))
    {
      t = a_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = a_18;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm b_18 = NULL,d_18 = NULL;
  b_18 = t;
  t = term_m_9;
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, b_18);
  t = r_5(d_18, b_18, t);
  t = b_18;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_c_15;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  if(match_string(t, "q"))
    {
      t = h_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = h_18;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm k_18 = NULL,n_18 = NULL;
  k_18 = t;
  t = term_d_15;
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_15, k_18);
  t = r_5(n_18, k_18, t);
  t = k_18;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_e_15;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  if(match_string(t, "-a"))
    {
      t = p_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = p_18;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  t = term_p_12;
  r_18 = t;
  t = term_h_14;
  s_18 = t;
  t = term_f_15;
  t = r_5(r_18, s_18, t);
  t = q_18;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_h_15;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  if(match_string(t, "-L"))
    {
      t = t_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = t_18;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  t = term_d_12;
  x_18 = t;
  t = term_h_14;
  y_18 = t;
  t = term_i_15;
  t = r_5(x_18, y_18, t);
  t = w_18;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm a_19 = NULL;
  a_19 = t;
  if(match_string(t, "-R"))
    {
      t = a_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = a_19;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  t = term_s_12;
  c_19 = t;
  t = term_h_14;
  d_19 = t;
  t = term_l_15;
  t = r_5(c_19, d_19, t);
  t = b_19;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_m_15;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm e_19 = NULL,h_19 = NULL,k_19 = NULL;
  e_19 = t;
  t = SSL_string_to_int(e_19);
  h_19 = t;
  t = term_r_9;
  k_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, h_19);
  t = r_5(k_19, h_19, t);
  t = e_19;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_n_15;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm p_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(q_2, z_2, b_3, t);
      LocalPopChoice(r_15);
    }
  else
    {
      t = p_15;
      {
        ATerm s_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_3, j_3, k_3, t);
            LocalPopChoice(u_15);
          }
        else
          {
            t = s_15;
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_3, m_3, o_3, t);
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = v_15;
                  {
                    ATerm x_15 = t;
                    int y_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(p_3, s_3, w_3, t);
                        LocalPopChoice(y_15);
                      }
                    else
                      {
                        t = x_15;
                        {
                          ATerm z_15 = t;
                          int a_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(x_3, y_3, z_3, t);
                              LocalPopChoice(a_16);
                            }
                          else
                            {
                              t = z_15;
                              {
                                ATerm b_16 = t;
                                int d_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(a_4, c_4, d_4, t);
                                    LocalPopChoice(d_16);
                                  }
                                else
                                  {
                                    t = b_16;
                                    {
                                      ATerm e_16 = t;
                                      int f_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(f_4, g_4, i_4, t);
                                          LocalPopChoice(f_16);
                                        }
                                      else
                                        {
                                          t = e_16;
                                          {
                                            ATerm g_16 = t;
                                            int h_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(j_4, m_4, n_4, t);
                                                LocalPopChoice(h_16);
                                              }
                                            else
                                              {
                                                t = g_16;
                                                {
                                                  ATerm i_16 = t;
                                                  int j_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(p_4, q_4, r_4, t);
                                                      LocalPopChoice(j_16);
                                                    }
                                                  else
                                                    {
                                                      t = i_16;
                                                      {
                                                        ATerm k_16 = t;
                                                        int l_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(s_4, u_4, v_4, t);
                                                            LocalPopChoice(l_16);
                                                          }
                                                        else
                                                          {
                                                            t = k_16;
                                                            t = ArgOption_3_0(w_4, y_4, d_5, t);
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
static ATerm n_5 (ATerm n_47, ATerm o_47, ATerm t)
{
  ATerm l_19 = NULL;
  t = SSL_hashtable_remove(o_47, n_47);
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_19);
  return(t);
}
static ATerm o_5 (ATerm s_47, ATerm t)
{
  ATerm m_19 = NULL;
  t = SSL_hashtable_destroy(s_47);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_19);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  n_19 = t;
  t = table_hashtable_0_0(t);
  p_19 = t;
  t = lookup_table_0_1(n_19, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_5(r_19, t);
  t = p_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_5(n_19, q_19, t);
  t = n_19;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_20 = ATgetFirst((ATermList) t);
      d_20 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_20 = NULL,y_20 = NULL;
        static ATerm e_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_20)), not_null(y_20));
          return(t);
        }
        t = d_20;
        t = k_0(t);
        if(((v_20 != NULL) && (v_20 != t)))
          _fail(t);
        else
          v_20 = t;
        t = c_20;
        t = i_0(t);
        if(((y_20 != NULL) && (y_20 != t)))
          _fail(t);
        else
          y_20 = t;
        t = d_20;
        t = reverse_acc_2_0(i_0, e_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_14;
      t = k_0(t);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm l_21 = NULL,q_21 = NULL,r_21 = NULL,k_4 = NULL;
  r_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_21);
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_21);
  k_4 = t;
  t = SSLsetAnnotations(k_4, l_21);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm x_21 = NULL;
  x_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_21), term_m_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_21 = NULL,g_21 = NULL;
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_21 = NULL,k_21 = NULL;
      t = term_k_9;
      h_21 = t;
      t = term_p_16;
      k_21 = t;
      t = term_q_16;
      t = k_6(h_21, k_21, t);
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      t = fetch_1_0(f_5, t);
    }
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_16), term_u_16), term_t_16);
        t = echo_0_0(t);
        LocalPopChoice(s_16);
      }
    else
      {
        t = r_16;
      }
  }
  t = term_w_16;
  t = echo_0_0(t);
  t = term_i_14;
  d_21 = t;
  t = term_j_14;
  g_21 = t;
  t = term_z_16;
  t = k_6(d_21, g_21, t);
  t = reverse_acc_2_0(_id, h_5, t);
  t = map_1_0(q_5, t);
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_17), term_i_17), term_p_11);
        t = echo_0_0(t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,f_22 = NULL;
  b_22 = t;
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_17 = ATgetFirst((ATermList) t);
                ATerm n_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_22;
          }
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        t = (ATerm) ATinsert(ATempty, b_22);
      }
  }
  c_22 = t;
  t = term_l_11;
  f_22 = t;
  t = SSL_printnl(f_22, c_22);
  t = b_22;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_22 = NULL,n_22 = NULL;
  t = term_k_9;
  k_22 = t;
  t = term_p_16;
  n_22 = t;
  t = term_q_16;
  t = k_6(k_22, n_22, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  t = term_v_17;
  o_22 = t;
  t = term_h_14;
  p_22 = t;
  t = term_w_17;
  t = r_5(o_22, p_22, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_x_17;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm r_22 = NULL,t_22 = NULL,u_22 = NULL,y_22 = NULL;
  t = term_v_17;
  u_22 = t;
  t = term_h_14;
  y_22 = t;
  t = term_w_17;
  t = r_5(u_22, y_22, t);
  t = term_c_18;
  r_22 = t;
  t = term_h_14;
  t_22 = t;
  t = term_e_18;
  t = r_5(r_22, t_22, t);
  t = term_f_18;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_g_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_5, w_5, x_5, t);
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      t = Option_3_0(y_5, o_6, p_6, t);
    }
  return(t);
}
static ATerm r_5 (ATerm i_51, ATerm j_51, ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  t = term_k_9;
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, i_51, j_51);
  t = lookup_table_0_1(z_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(i_51, j_51, a_23, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, i_51, j_51);
  return(t);
}
static ATerm p_5 (ATerm q_43, ATerm r_43, ATerm p_43, ATerm t)
{
  ATerm g_23 = NULL,l_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_18 = ATgetArgument(t, 0);
            ATerm u_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
        t = k_6(q_43, r_43, t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        t = (ATerm) ATempty;
      }
  }
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_43, r_43, (ATerm) ATinsert(CheckATermList(l_23), p_43));
  t = lookup_table_0_1(q_43, t);
  p_23 = t;
  t = (ATerm) ATinsert(CheckATermList(l_23), p_43);
  n_23 = t;
  t = p_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(r_43, n_23, o_23, t);
  t = g_23;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
      t = term_h_14;
      t = e_0(t);
      d_24 = t;
      t = term_i_14;
      e_24 = t;
      t = term_j_14;
      f_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_14, term_j_14, d_24);
      t = p_5(e_24, f_24, d_24, t);
      _fail(t);
    }
  else
    {
      ATerm i_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_24 = ATgetFirst((ATermList) t);
          c_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_24;
      t = c_0(t);
      t = term_h_14;
      t = d_0(t);
      i_24 = t;
      t = (ATerm) ATinsert(CheckATermList(c_24), i_24);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_54 (ATerm), ATerm l_54 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,t_4 = NULL;
  o_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_24 = ATgetFirst((ATermList) t);
      l_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_24);
  j_24 = t;
  t = k_24;
  t = k_54(t);
  m_24 = t;
  t = l_24;
  t = l_54(t);
  n_24 = t;
  t = (ATerm) ATinsert(CheckATermList(n_24), m_24);
  t_4 = t;
  t = SSLsetAnnotations(t_4, j_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_94 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,y_24 = NULL,z_24 = NULL,z_4 = NULL;
  t_24 = t;
  {
    ATerm v_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_19;
        t = p_94(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = v_18;
      }
  }
  t = t_24;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_24 = ATgetFirst((ATermList) t);
      w_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_24);
  u_24 = t;
  t = term_p_16;
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, v_24);
  t = r_5(z_24, v_24, t);
  t = w_24;
  {
    static ATerm n_25 (ATerm t)
    {
      ATerm g_19 = t;
      int i_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_19 = t;
          int o_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_25 = NULL;
              e_25 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_25;
              LocalPopChoice(o_19);
            }
          else
            {
              t = j_19;
              t = p_94(t);
              t = Cons_2_0(_id, n_25, t);
            }
          LocalPopChoice(i_19);
        }
      else
        {
          t = g_19;
          {
            ATerm j_25 = NULL,k_25 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_25 = ATgetFirst((ATermList) t);
                k_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_25), (ATerm) ATmakeAppl(sym_Undefined_1, j_25));
          }
        }
      return(t);
    }
    t = n_25(t);
  }
  y_24 = t;
  t = (ATerm) ATinsert(CheckATermList(y_24), (ATerm) ATmakeAppl(sym_Program_1, v_24));
  z_4 = t;
  t = SSLsetAnnotations(z_4, u_24);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  if(match_string(t, "--help"))
    {
      t = g_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_26;
        }
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL;
  t = term_s_19;
  h_26 = t;
  t = term_h_14;
  i_26 = t;
  t = term_t_19;
  t = r_5(h_26, i_26, t);
  t = term_u_19;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_94 (ATerm), ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  w_25 = t;
  t = term_i_14;
  x_25 = t;
  t = term_w_19;
  t = lookup_table_0_1(x_25, t);
  d_26 = t;
  t = term_j_14;
  y_25 = t;
  t = (ATerm) ATempty;
  b_26 = t;
  t = d_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(y_25, b_26, c_26, t);
  t = w_25;
  {
    static ATerm q_6 (ATerm t)
    {
      ATerm x_19 = t;
      int y_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_94(t);
          LocalPopChoice(y_19);
        }
      else
        {
          t = x_19;
          {
            ATerm z_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_6, t_6, u_6, t);
                LocalPopChoice(a_20);
              }
            else
              {
                t = z_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_6, t);
  }
  {
    ATerm b_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_26 = NULL;
        v_26 = t;
        {
          ATerm f_20 = t;
          int g_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_2 = NULL;
              t = v_26;
              {
                ATerm h_20 = t;
                int i_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_2 = NULL,v_2 = NULL;
                    t = term_k_9;
                    s_2 = t;
                    t = term_s_19;
                    v_2 = t;
                    t = term_j_20;
                    t = k_6(s_2, v_2, t);
                    LocalPopChoice(i_20);
                  }
                else
                  {
                    t = h_20;
                    t = fetch_1_0(v_6, t);
                  }
              }
              t = v_26;
              t = default_system_usage_0_0(t);
              t = term_k_20;
              o_2 = t;
              t = SSL_exit(o_2);
              LocalPopChoice(g_20);
            }
          else
            {
              t = f_20;
              {
                ATerm d_3 = NULL,g_3 = NULL,h_3 = NULL;
                t = term_k_9;
                g_3 = t;
                t = term_v_17;
                h_3 = t;
                t = term_n_20;
                t = k_6(g_3, h_3, t);
                t = v_26;
                t = default_system_about_0_0(t);
                t = term_k_20;
                d_3 = t;
                t = SSL_exit(d_3);
              }
            }
        }
        LocalPopChoice(e_20);
      }
    else
      {
        t = b_20;
        {
          ATerm o_20 = t;
          int r_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
              static ATerm w_6 (ATerm t)
              {
                ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,a_11 = NULL;
                b_27 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_27);
                z_26 = t;
                t = a_27;
                if(((u_25 != NULL) && (u_25 != t)))
                  _fail(t);
                else
                  u_25 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_27);
                a_11 = t;
                t = SSLsetAnnotations(a_11, z_26);
                return(t);
              }
              t = fetch_1_0(w_6, t);
              t = term_w_12;
              x_26 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_25)), term_s_20);
              y_26 = t;
              t = SSL_printnl(x_26, y_26);
              t = (ATerm) ATmakeAppl(sym__2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_25)), term_s_20));
              t = default_system_usage_0_0(t);
              t = term_u_13;
              w_26 = t;
              t = SSL_exit(w_26);
              LocalPopChoice(r_20);
            }
          else
            {
              t = o_20;
            }
        }
      }
  }
  v_25 = t;
  t = term_i_14;
  t = table_destroy_0_0(t);
  t = v_25;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = debug_1_0(b_7, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_27 = NULL;
      t = parse_options_1_0(xtc_options_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(a_7, t);
      t = xtc_read_0_0(t);
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_27 = NULL,i_27 = NULL;
                t = term_k_9;
                h_27 = t;
                t = term_y_14;
                i_27 = t;
                t = term_e_21;
                t = k_6(h_27, i_27, t);
                t = xtc_register_0_0(t);
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
                {
                  ATerm k_27 = NULL,l_27 = NULL;
                  t = term_k_9;
                  k_27 = t;
                  t = term_k_13;
                  l_27 = t;
                  t = term_l_13;
                  t = k_6(k_27, l_27, t);
                  t = register_import_0_0(t);
                }
              }
            t = xtc_store_0_0(t);
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            {
              ATerm m_27 = NULL,n_27 = NULL;
              t = term_k_9;
              m_27 = t;
              t = term_d_15;
              n_27 = t;
              t = term_f_21;
              t = k_6(m_27, n_27, t);
              {
                ATerm i_21 = t;
                int j_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = repository_query_0_0(t);
                    LocalPopChoice(j_21);
                  }
                else
                  {
                    t = i_21;
                    {
                      ATerm m_21 = t;
                      int n_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = all_query_0_0(t);
                          LocalPopChoice(n_21);
                        }
                      else
                        {
                          t = m_21;
                          t = tool_query_0_0(t);
                        }
                    }
                  }
              }
            }
          }
      }
      t = term_k_20;
      g_27 = t;
      t = SSL_exit(g_27);
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      t = debug_1_0(e_7, t);
    }
  return(t);
}
static ATerm t_5 (ATerm i_54, ATerm j_54, ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
  t = j_54;
  t = map_1_0(xtc_find_0_0, t);
  o_27 = t;
  t = term_l_11;
  u_27 = t;
  t = SSL_print(u_27, o_27);
  t = term_l_11;
  s_27 = t;
  t = (ATerm) ATinsert(ATempty, term_p_11);
  t_27 = t;
  t = SSL_print(s_27, t_27);
  t = term_k_20;
  p_27 = t;
  t = SSL_exit(p_27);
  return(t);
}
static ATerm u_5 (ATerm s_39, ATerm t_39, ATerm t)
{
  t = SSL_execvp(s_39, t_39);
  return(t);
}
ATerm debug_1_0 (ATerm x_74 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  v_27 = t;
  t = x_74(t);
  w_27 = t;
  t = term_w_12;
  x_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_27), w_27);
  y_27 = t;
  t = SSL_printnl(x_27, y_27);
  t = v_27;
  return(t);
}
static ATerm v_5 (ATerm p_47, ATerm t)
{
  t = SSL_hashtable_keys(p_47);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_27 = NULL,c_28 = NULL;
  static ATerm f_7 (ATerm t)
  {
    ATerm d_28 = NULL,e_28 = NULL;
    d_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_27), d_28);
    t = k_6(not_null(z_27), d_28, t);
    e_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_28, e_28);
    return(t);
  }
  if(((z_27 != NULL) && (z_27 != t)))
    _fail(t);
  else
    z_27 = t;
  t = lookup_table_0_1(z_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_5(c_28, t);
  t = map_1_0(f_7, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
        t = term_k_9;
        o_28 = t;
        t = term_r_9;
        p_28 = t;
        t = term_v_9;
        t = k_6(o_28, p_28, t);
        n_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_28, term_s_21);
        t = geq_0_0(t);
        t = i_28;
        t = r_99(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = i_28;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm s_75 (ATerm), ATerm t)
{
  static ATerm t_30 (ATerm t)
  {
    ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
    q_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_30 = ATgetFirst((ATermList) t);
        s_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_21 = t;
      int u_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_3 = NULL,q_3 = NULL,c_11 = NULL;
          t = SSLgetAnnotations(q_30);
          n_3 = t;
          t = r_30;
          t = s_75(t);
          q_3 = t;
          t = (ATerm) ATinsert(CheckATermList(s_30), q_3);
          c_11 = t;
          t = SSLsetAnnotations(c_11, n_3);
          LocalPopChoice(u_21);
        }
      else
        {
          t = t_21;
          {
            ATerm l_4 = NULL,o_4 = NULL,f_11 = NULL;
            t = SSLgetAnnotations(q_30);
            l_4 = t;
            t = s_30;
            t = t_30(t);
            o_4 = t;
            t = (ATerm) ATinsert(CheckATermList(o_4), r_30);
            f_11 = t;
            t = SSLsetAnnotations(f_11, l_4);
          }
        }
    }
    return(t);
  }
  t = t_30(t);
  return(t);
}
static ATerm k_6 (ATerm j_45, ATerm k_45, ATerm t)
{
  ATerm w_28 = NULL;
  t = lookup_table_0_1(j_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(k_45, w_28, t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
        t = term_k_9;
        d_31 = t;
        t = term_r_9;
        e_31 = t;
        t = term_v_9;
        t = k_6(d_31, e_31, t);
        c_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_31, term_y_21);
        t = geq_0_0(t);
        t = z_30;
        t = q_99(t);
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = z_30;
      }
  }
  return(t);
}
static ATerm j_6 (ATerm i_47, ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm l_31 = NULL;
  t = SSL_hashtable_put(k_47, i_47, j_47);
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_31);
  return(t);
}
static ATerm i_6 (ATerm l_47, ATerm m_47, ATerm t)
{
  t = SSL_hashtable_get(m_47, l_47);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm m_31 = NULL;
  t = SSL_hashtable_create(q_47, r_47);
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_31);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,t_31 = NULL,u_31 = NULL;
  n_31 = t;
  t = term_z_21;
  t_31 = t;
  t = term_a_22;
  u_31 = t;
  t = n_31;
  t = new_hashtable_0_2(t_31, u_31, t);
  o_31 = t;
  t = n_31;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(n_31, o_31, p_31, t);
  t = n_31;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_31 = NULL;
  t = SSL_table_hashtable();
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_31);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_45, ATerm t)
{
  ATerm j_32 = NULL;
  t = table_hashtable_0_0(t);
  j_32 = t;
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 = NULL;
        t = j_32;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_6(c_45, x_4, t);
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        {
          ATerm g_5 = NULL;
          t = c_45;
          t = table_create_0_0(t);
          t = j_32;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_6(c_45, g_5, t);
        }
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym__2))
    {
      k_33 = ATgetArgument(t, 0);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_33;
        if((k_33 != t))
          {
            _fail(t);
          }
        t = j_33;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
        {
          ATerm i_22 = t;
          int j_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_33, l_33);
              LocalPopChoice(j_22);
            }
          else
            {
              t = i_22;
              t = SSL_gtr(k_33, l_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm s_99 (ATerm), ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_33 = NULL,z_33 = NULL,c_34 = NULL;
        t = term_k_9;
        z_33 = t;
        t = term_r_9;
        c_34 = t;
        t = term_v_9;
        t = k_6(z_33, c_34, t);
        y_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_33, term_q_22);
        t = geq_0_0(t);
        t = w_33;
        t = s_99(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        t = w_33;
      }
  }
  return(t);
}
static ATerm z_5 (ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm q_20, ATerm p_20, ATerm t)
{
  t = x_79(t);
  {
    static ATerm h_7 (ATerm t)
    {
      ATerm e_34 = NULL;
      e_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_20, e_34);
      t = w_79(t);
      return(t);
    }
    t = fetch_1_0(h_7, t);
  }
  t = p_20;
  return(t);
}
static ATerm a_6 (ATerm t_79 (ATerm), ATerm m_20, ATerm l_20, ATerm t)
{
  static ATerm u_34 (ATerm t)
  {
    ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
    p_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_20;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_34 = ATgetFirst((ATermList) t);
            r_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_34;
              {
                static ATerm i_7 (ATerm t)
                {
                  t = l_20;
                  return(t);
                }
                t = z_5(t_79, i_7, q_34, r_34, t);
              }
              t = u_34(t);
              LocalPopChoice(v_22);
            }
          else
            {
              t = s_22;
              {
                ATerm c_7 = NULL,g_7 = NULL,k_11 = NULL;
                t = SSLgetAnnotations(p_34);
                c_7 = t;
                t = r_34;
                t = u_34(t);
                g_7 = t;
                t = (ATerm) ATinsert(CheckATermList(g_7), q_34);
                k_11 = t;
                t = SSLsetAnnotations(k_11, c_7);
              }
            }
        }
      }
    return(t);
  }
  t = m_20;
  t = u_34(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm f_35 = NULL;
  if(match_cons(t, sym__2))
    {
      f_35 = ATgetArgument(t, 0);
      if((f_35 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm n_44, ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_44, o_44);
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_23 = ATgetArgument(t, 0);
            ATerm c_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_44, o_44);
        t = k_6(n_44, o_44, t);
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        t = (ATerm) ATempty;
      }
  }
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_34, p_44);
  t = a_6(j_7, z_34, p_44, t);
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_44, o_44, y_34);
  t = lookup_table_0_1(n_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(o_44, y_34, a_35, t);
  t = x_34;
  return(t);
}
ATerm map_1_0 (ATerm i_75 (ATerm), ATerm t)
{
  static ATerm a_36 (ATerm t)
  {
    ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
    x_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_35;
      }
    else
      {
        ATerm x_7 = NULL,c_8 = NULL,i_8 = NULL,m_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_35 = ATgetFirst((ATermList) t);
            z_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_35);
        x_7 = t;
        t = y_35;
        t = i_75(t);
        c_8 = t;
        t = z_35;
        t = a_36(t);
        i_8 = t;
        t = (ATerm) ATinsert(CheckATermList(i_8), c_8);
        m_11 = t;
        t = SSLsetAnnotations(m_11, x_7);
      }
    return(t);
  }
  t = a_36(t);
  return(t);
}
static ATerm c_6 (ATerm s_94 (ATerm), ATerm x_44, ATerm w_44, ATerm t)
{
  static ATerm k_7 (ATerm t)
  {
    ATerm c_36 = NULL,d_36 = NULL;
    if(match_cons(t, sym__2))
      {
        c_36 = ATgetArgument(t, 0);
        d_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_44, c_36, d_36);
    t = s_94(t);
    return(t);
  }
  t = w_44;
  t = map_1_0(k_7, t);
  return(t);
}
static ATerm h_6 (ATerm g_29, ATerm h_29, ATerm t)
{
  t = SSL_access(g_29, h_29);
  return(t);
}
static ATerm r_36 (ATerm l_36, ATerm t)
{
  t = SSL_fclose(l_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  p_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_36 = ATgetArgument(t, 0);
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_36);
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            t = r_36(p_36, t);
          }
      }
    }
  else
    {
      t = r_36(p_36, t);
    }
  return(t);
}
static ATerm d_6 (ATerm k_14, ATerm t)
{
  t = SSL_read_term_from_stream(k_14);
  return(t);
}
static ATerm e_6 (ATerm g_28, ATerm h_28, ATerm t)
{
  t = SSL_strcat(g_28, h_28);
  return(t);
}
static ATerm f_6 (ATerm p_29, ATerm q_29, ATerm t)
{
  ATerm s_36 = NULL;
  t = SSL_fopen(p_29, q_29);
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t = SSL_stdin_stream();
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_36 = NULL;
  t = SSL_stdout_stream();
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_36 = NULL;
  t = SSL_stderr_stream();
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_36);
  return(t);
}
static ATerm c_38 (ATerm b_37, ATerm t)
{
  ATerm c_37 = NULL;
  t = SSL_explode_term(b_37);
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_23 = ATgetArgument(t, 1);
        if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
          {
            c_37 = ATgetFirst((ATermList) h_23);
            {
              ATerm i_23 = (ATerm) ATgetNext((ATermList) h_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_38 (ATerm f_37, ATerm g_37, ATerm h_37, ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,n_37 = NULL,q_11 = NULL;
  t = SSLgetAnnotations(h_37);
  k_37 = t;
  t = f_37;
  if(match_cons(t, sym_Path_1))
    {
      n_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_37, g_37);
  q_11 = t;
  t = SSLsetAnnotations(q_11, k_37);
  if(match_cons(t, sym__2))
    {
      i_37 = ATgetArgument(t, 0);
      j_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(i_37, j_37, t);
  return(t);
}
static ATerm e_38 (ATerm p_37, ATerm q_37, ATerm r_37, ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,x_37 = NULL,t_11 = NULL;
  t = SSLgetAnnotations(r_37);
  u_37 = t;
  t = SSL_is_string(p_37);
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_37, q_37);
  t_11 = t;
  t = SSLsetAnnotations(t_11, u_37);
  if(match_cons(t, sym__2))
    {
      s_37 = ATgetArgument(t, 0);
      t_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(s_37, t_37, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  if(match_cons(t, sym__2))
    {
      a_38 = ATgetArgument(t, 0);
      b_38 = ATgetArgument(t, 1);
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_38(z_37, t);
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            {
              ATerm m_23 = t;
              int q_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_38(a_38, b_38, z_37, t);
                  LocalPopChoice(q_23);
                }
              else
                {
                  t = m_23;
                  t = e_38(a_38, b_38, z_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_38(z_37, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,n_38 = NULL;
  n_38 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_38, term_t_23);
        t = g_6(t);
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          ATerm h_9 = NULL,i_9 = NULL;
          t = term_u_23;
          i_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_23, n_38);
          t = e_6(i_9, n_38, t);
          h_9 = t;
          t = SSL_perror(h_9);
          _fail(t);
        }
      }
  }
  h_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(i_38, t);
  g_38 = t;
  t = h_38;
  t = fclose_0_0(t);
  t = g_38;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_v_23;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_38 = NULL,r_38 = NULL;
      q_38 = t;
      t = (ATerm) ATinsert(ATempty, term_z_23);
      r_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_38, (ATerm) ATinsert(ATempty, term_z_23));
      t = h_6(q_38, r_38, t);
      LocalPopChoice(y_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_23;
      {
        ATerm a_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_24 = t;
            if((PushChoice() == 0))
              {
                ATerm s_38 = NULL,t_38 = NULL;
                s_38 = t;
                t = (ATerm) ATinsert(ATempty, term_g_13);
                t_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_38, (ATerm) ATinsert(ATempty, term_g_13));
                t = h_6(s_38, t_38, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_24;
              }
            t = debug_1_0(l_7, t);
            LocalPopChoice(g_24);
          }
        else
          {
            t = a_24;
            t = debug_1_0(q_7, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = debug_1_0(w_7, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_p_24;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = debug_1_0(b_8, t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_q_24;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
  k_39 = t;
  t = term_w_12;
  l_39 = t;
  t = (ATerm) ATinsert(ATempty, term_r_24);
  m_39 = t;
  t = SSL_printnl(l_39, m_39);
  t = k_39;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
  if(match_cons(t, sym__3))
    {
      n_39 = ATgetArgument(t, 0);
      o_39 = ATgetArgument(t, 1);
      p_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_6(n_39, o_39, p_39, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,u_39 = NULL;
  q_39 = t;
  t = term_w_12;
  r_39 = t;
  t = (ATerm) ATinsert(ATempty, term_s_24);
  u_39 = t;
  t = SSL_printnl(r_39, u_39);
  t = q_39;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  t = term_w_12;
  w_39 = t;
  t = (ATerm) ATinsert(ATempty, term_r_24);
  x_39 = t;
  t = SSL_printnl(w_39, x_39);
  t = v_39;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  u_38 = t;
  t = if_verbose5_1_0(r_7, t);
  {
    ATerm x_24 = t;
    if((PushChoice() == 0))
      {
        ATerm i_39 = NULL,j_39 = NULL;
        t = term_c_10;
        i_39 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_38);
        j_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATmakeAppl(sym_Imported_1, u_38));
        t = k_6(i_39, j_39, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_24;
      }
  }
  w_38 = t;
  t = term_c_10;
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_10, term_a_25, (ATerm) ATinsert(ATempty, u_38));
  t = lookup_table_0_1(d_39, t);
  h_39 = t;
  t = term_a_25;
  e_39 = t;
  t = (ATerm) ATinsert(ATempty, u_38);
  f_39 = t;
  t = h_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(e_39, f_39, g_39, t);
  t = w_38;
  t = if_verbose4_1_0(y_7, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(j_8, t);
  v_38 = t;
  t = term_c_10;
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, v_38);
  t = c_6(o_8, c_39, v_38, t);
  t = if_verbose6_1_0(p_8, t);
  t = term_c_10;
  x_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_10, (ATerm)ATmakeAppl(sym_Imported_1, u_38), (ATerm) ATempty);
  t = lookup_table_0_1(x_38, t);
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, u_38);
  y_38 = t;
  t = (ATerm) ATempty;
  z_38 = t;
  t = b_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(y_38, z_38, a_39, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_10, (ATerm)ATmakeAppl(sym_Imported_1, u_38), (ATerm) ATempty);
  t = if_verbose4_1_0(q_8, t);
  return(t);
}
ATerm filter_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  j_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_40;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_40 = ATgetFirst((ATermList) t);
          l_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_9 = NULL,z_9 = NULL,b_10 = NULL,e_12 = NULL;
            t = SSLgetAnnotations(j_40);
            p_9 = t;
            t = k_40;
            t = l_83(t);
            z_9 = t;
            t = l_40;
            t = filter_1_0(l_83, t);
            b_10 = t;
            t = (ATerm) ATinsert(CheckATermList(b_10), z_9);
            e_12 = t;
            t = SSLsetAnnotations(e_12, p_9);
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            t = l_40;
            t = filter_1_0(l_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm t)
{
  static ATerm o_40 (ATerm t)
  {
    ATerm d_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_67(t);
        t = o_40(t);
        LocalPopChoice(f_25);
      }
    else
      {
        t = d_25;
        t = x_67(t);
      }
    return(t);
  }
  t = o_40(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_40 = NULL,q_40 = NULL;
      t = term_k_9;
      p_40 = t;
      t = term_a_13;
      q_40 = t;
      t = term_b_13;
      t = k_6(p_40, q_40, t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm i_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_40 = NULL;
            t = term_m_25;
            r_40 = t;
            t = SSL_getenv(r_40);
            LocalPopChoice(l_25);
          }
        else
          {
            t = i_25;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = debug_1_0(t_8, t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_o_25;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL;
  t = term_c_10;
  x_40 = t;
  t = term_i_10;
  y_40 = t;
  t = term_j_10;
  t = k_6(x_40, y_40, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm p_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_25;
      }
  }
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = debug_1_0(z_8, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_40 = NULL;
  t = if_verbose5_1_0(s_8, t);
  t_40 = t;
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_40 = NULL,v_40 = NULL;
        t = term_c_10;
        u_40 = t;
        t = term_a_25;
        v_40 = t;
        t = term_t_25;
        t = k_6(u_40, v_40, t);
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        {
          ATerm w_40 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          w_40 = t;
          t = repeat_2_0(u_8, _id, t);
          t = w_40;
        }
      }
  }
  t = t_40;
  t = if_verbose5_1_0(v_8, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = debug_1_0(b_9, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_z_25;
  return(t);
}
static ATerm v_41 (ATerm d_41, ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
  t = term_c_10;
  g_41 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_41);
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATmakeAppl(sym_Tool_1, d_41));
  t = k_6(g_41, h_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_26 = ATgetFirst((ATermList) t);
      if(match_cons(a_26, sym__2))
        {
          ATerm f_26 = ATgetArgument(a_26, 0);
          f_41 = ATgetArgument(a_26, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_41;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = debug_1_0(e_9, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_z_25;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_c_10;
  t = table_getlist_0_0(t);
  t = debug_1_0(g_9, t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
      t = if_verbose5_1_0(a_9, t);
      t = xtc_load_0_0(t);
      k_41 = t;
      if(match_cons(t, sym__2))
        {
          i_41 = ATgetArgument(t, 0);
          j_41 = ATgetArgument(t, 1);
          {
            ATerm m_26 = t;
            int n_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
                t = term_c_10;
                o_41 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, i_41);
                p_41 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATmakeAppl(sym_Tool_1, i_41));
                t = k_6(o_41, p_41, t);
                {
                  static ATerm c_9 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((j_41 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((n_41 != NULL) && (n_41 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_41 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(c_9, t);
                }
                t = not_null(n_41);
                LocalPopChoice(n_26);
              }
            else
              {
                t = m_26;
                t = v_41(k_41, t);
              }
          }
        }
      else
        {
          t = v_41(k_41, t);
        }
      t = if_verbose5_1_0(d_9, t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        ATerm u_41 = NULL,u_10 = NULL,w_10 = NULL;
        u_41 = t;
        t = term_w_12;
        u_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_26), u_41), term_o_26);
        w_10 = t;
        t = SSL_printnl(u_10, w_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_26), u_41), term_o_26);
        t = if_verbose5_1_0(f_9, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
      d_42 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_42 = ATgetFirst((ATermList) t);
          f_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_42 = ATgetFirst((ATermList) t);
          h_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_42;
      if(match_string(t, "call"))
        {
          ATerm l_42 = NULL;
          t = h_42;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_42 = ATgetFirst((ATermList) t);
              c_42 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_42;
          t = xtc_find_0_0(t);
          l_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_42, c_42);
          t = u_5(l_42, c_42, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = d_42;
          t = t_5(e_42, h_42, t);
        }
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      t = xtc_main_0_0(t);
    }
  return(t);
}
