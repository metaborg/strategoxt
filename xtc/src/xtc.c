#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Undefined_0;
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
Symbol sym_Hashtable_1;
Symbol sym_Version_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Path_1;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
static void init_module_constructors (void)
{
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
ATerm term_d_27;
ATerm term_c_27;
ATerm term_p_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_o_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_g_25;
ATerm term_z_24;
ATerm term_s_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_d_24;
ATerm term_e_23;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_y_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_j_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_a_19;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_i_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_r_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_z_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_g_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_v_11);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_q_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_t_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_d_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_u_13);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_z_14);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_s_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_i_15);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_i_15);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_i_15);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_i_15);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_i_15);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_i_15);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__3, term_r_15, term_s_15, (ATerm) ATempty);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_f_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_c_18);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_o_16);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_t_16);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_o_25);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm version_query_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm y_119 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm tool_query_0_0 (ATerm t);
static ATerm l_5 (ATerm l_69, ATerm f_838, ATerm t);
static ATerm h_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm all_query_0_0 (ATerm t);
ATerm repository_query_0_0 (ATerm t);
static ATerm m_5 (ATerm c_25, ATerm d_25, ATerm t);
static ATerm n_5 (ATerm h_93 (ATerm), ATerm z_241, ATerm m_25, ATerm t);
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
static ATerm o_5 (ATerm a_47, ATerm b_47, ATerm z_46, ATerm t);
ATerm xtc_register_0_3 (ATerm g_69, ATerm h_69, ATerm i_69, ATerm t);
ATerm if_verbose1_1_0 (ATerm w_119 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm x_119 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm g_94 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_18 (ATerm u_17, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_5 (ATerm c_67, ATerm b_67, ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm xtc_options_0_0 (ATerm t);
static ATerm q_5 (ATerm y_50, ATerm z_50, ATerm t);
static ATerm r_5 (ATerm d_51, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm u_5 (ATerm w_66, ATerm x_66, ATerm t);
static ATerm s_5 (ATerm i_46, ATerm j_46, ATerm h_46, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_113 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm parse_options_3_0 (ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm xtc_main_0_0 (ATerm t);
static ATerm w_5 (ATerm b_70, ATerm c_70, ATerm t);
static ATerm x_5 (ATerm e_60, ATerm f_60, ATerm t);
ATerm debug_1_0 (ATerm f_93 (ATerm), ATerm t);
static ATerm y_5 (ATerm a_51, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm a_120 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm z_93 (ATerm), ATerm t);
static ATerm n_6 (ATerm b_48, ATerm c_48, ATerm t);
ATerm if_verbose4_1_0 (ATerm z_119 (ATerm), ATerm t);
static ATerm m_6 (ATerm t_50, ATerm u_50, ATerm v_50, ATerm t);
static ATerm l_6 (ATerm w_50, ATerm x_50, ATerm t);
ATerm new_hashtable_0_2 (ATerm b_51, ATerm c_51, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm u_47, ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm b_120 (ATerm), ATerm t);
static ATerm c_6 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm n_31, ATerm m_31, ATerm t);
static ATerm d_6 (ATerm a_98 (ATerm), ATerm j_31, ATerm i_31, ATerm t);
static ATerm u_7 (ATerm t);
static ATerm e_6 (ATerm f_47, ATerm g_47, ATerm h_47, ATerm t);
ATerm map_1_0 (ATerm p_93 (ATerm), ATerm t);
static ATerm f_6 (ATerm e_107 (ATerm), ATerm p_47, ATerm o_47, ATerm t);
static ATerm k_6 (ATerm p_40, ATerm q_40, ATerm t);
static ATerm c_37 (ATerm w_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_6 (ATerm i_25, ATerm t);
static ATerm h_6 (ATerm f_39, ATerm g_39, ATerm t);
static ATerm i_6 (ATerm b_41, ATerm c_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_38 (ATerm m_37, ATerm t);
static ATerm o_38 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t);
static ATerm p_38 (ATerm a_38, ATerm b_38, ATerm c_38, ATerm t);
static ATerm j_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm s_101 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm m_42 (ATerm u_41, ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
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
  ATerm k_0 = NULL,m_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,l_0 = NULL;
  u_0 = t;
  t = term_q_9;
  x_0 = t;
  t = term_r_9;
  z_0 = t;
  t = term_s_9;
  t = n_6(x_0, z_0, t);
  m_0 = t;
  t = u_0;
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_0);
  a_1 = t;
  t = c_1;
  if(match_cons(t, sym_Tool_1))
    {
      k_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_1;
  {
    static ATerm a_0 (ATerm t);
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
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, e_1);
  l_0 = t;
  t = SSLsetAnnotations(l_0, a_1);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_0, not_null(t_0)));
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, k_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_0, not_null(t_0))));
  t = l_5(k_0, v_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm y_119 (ATerm), ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  {
    ATerm t_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL;
        t = term_q_9;
        j_1 = t;
        t = term_z_9;
        k_1 = t;
        t = term_c_10;
        t = n_6(j_1, k_1, t);
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, term_d_10);
        t = geq_0_0(t);
        t = g_1;
        t = y_119(t);
        LocalPopChoice(v_9);
      }
    else
      {
        t = t_9;
        t = g_1;
      }
  }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm y_1 = NULL,a_2 = NULL;
  t = term_e_10;
  y_1 = t;
  t = term_g_10;
  a_2 = t;
  t = term_i_10;
  t = n_6(y_1, a_2, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm l_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_10;
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
  t = term_m_10;
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm q_1 = NULL,s_1 = NULL,u_1 = NULL,w_1 = NULL;
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    ATerm h_2 = NULL;
    h_2 = t;
    {
      ATerm o_10 = t;
      int v_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_2 = NULL,k_2 = NULL;
          t = if_verbose3_1_0(r_0, t);
          t = term_e_10;
          i_2 = t;
          t = (ATerm) ATmakeAppl(sym_Tool_1, h_2);
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_10, (ATerm) ATmakeAppl(sym_Tool_1, h_2));
          t = n_6(i_2, k_2, t);
          if(((q_1 != NULL) && (q_1 != t)))
            _fail(t);
          else
            q_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, h_2), q_1);
          {
            ATerm z_10 = t;
            int e_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = version_query_0_0(t);
                LocalPopChoice(e_11);
              }
            else
              {
                t = z_10;
                if(match_cons(t, sym__2))
                  {
                    ATerm j_11 = ATgetArgument(t, 0);
                    ATerm l_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, h_2), q_1);
                t = l_5(h_2, q_1, t);
              }
          }
          LocalPopChoice(v_10);
        }
      else
        {
          t = o_10;
          {
            ATerm q_2 = NULL,v_2 = NULL;
            t = term_n_11;
            q_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_11), term_p_11), h_2);
            v_2 = t;
            t = SSL_print(q_2, v_2);
            t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_11), term_p_11), h_2));
          }
        }
    }
    return(t);
  }
  t = term_q_9;
  u_1 = t;
  t = term_v_11;
  w_1 = t;
  t = term_d_12;
  t = n_6(u_1, w_1, t);
  s_1 = t;
  t = repeat_2_0(b_0, _id, t);
  t = s_1;
  t = map_1_0(c_0, t);
  return(t);
}
static ATerm l_5 (ATerm l_69, ATerm f_838, ATerm t)
{
  static ATerm f_1 (ATerm t);
  static ATerm f_1 (ATerm t)
  {
    ATerm w_2 = NULL,x_2 = NULL;
    if(match_cons(t, sym__2))
      {
        w_2 = ATgetArgument(t, 0);
        x_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm e_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,d_3 = NULL;
          t = term_q_9;
          b_3 = t;
          t = term_h_12;
          d_3 = t;
          t = term_i_12;
          t = n_6(b_3, d_3, t);
          t = term_n_11;
          z_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_r_11), x_2);
          a_3 = t;
          t = SSL_print(z_2, a_3);
          t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATempty, term_r_11), x_2));
          LocalPopChoice(f_12);
        }
      else
        {
          t = e_12;
          {
            ATerm h_3 = NULL,i_3 = NULL;
            t = term_n_11;
            h_3 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_11), x_2), term_k_12), w_2), term_j_12), l_69);
            i_3 = t;
            t = SSL_print(h_3, i_3);
            t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_11), x_2), term_k_12), w_2), term_j_12), l_69));
          }
        }
    }
    return(t);
  }
  t = f_838;
  t = map_1_0(f_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  t = term_e_10;
  w_3 = t;
  t = term_g_10;
  x_3 = t;
  t = term_i_10;
  t = n_6(w_3, x_3, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm l_12 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_12;
      }
  }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm w_4 = NULL,z_4 = NULL,c_5 = NULL;
  c_5 = t;
  if(match_cons(t, sym__2))
    {
      w_4 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 = NULL,i_0 = NULL,n_0 = NULL,w_0 = NULL,y_0 = NULL,b_1 = NULL,b_4 = NULL,a_4 = NULL;
            t = SSLgetAnnotations(c_5);
            n_0 = t;
            t = w_4;
            if(match_cons(t, sym_Tool_1))
              {
                y_0 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_4);
            w_0 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, y_0);
            a_4 = t;
            t = SSLsetAnnotations(a_4, w_0);
            b_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_1, z_4);
            b_4 = t;
            t = SSLsetAnnotations(b_4, n_0);
            if(match_cons(t, sym__2))
              {
                ATerm o_12 = ATgetArgument(t, 0);
                if(match_cons(o_12, sym_Tool_1))
                  {
                    e_0 = ATgetArgument(o_12, 0);
                  }
                else
                  _fail(t);
                i_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_5(e_0, i_0, t);
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
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
  ATerm t_3 = NULL,u_3 = NULL;
  t = term_q_9;
  t_3 = t;
  t = term_q_12;
  u_3 = t;
  t = term_r_12;
  t = n_6(t_3, u_3, t);
  t = repeat_2_0(h_1, _id, t);
  t = term_e_10;
  t = table_getlist_0_0(t);
  t = map_1_0(l_1, t);
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm k_5 = NULL,z_5 = NULL,b_6 = NULL,o_6 = NULL,p_6 = NULL;
  t = term_q_9;
  o_6 = t;
  t = term_t_12;
  p_6 = t;
  t = term_u_12;
  t = n_6(o_6, p_6, t);
  t = xtc_location_0_0(t);
  k_5 = t;
  t = term_n_11;
  z_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_11), k_5), term_v_12);
  b_6 = t;
  t = SSL_print(z_5, b_6);
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_11), k_5), term_v_12));
  return(t);
}
static ATerm m_5 (ATerm c_25, ATerm d_25, ATerm t)
{
  ATerm q_6 = NULL;
  t = SSL_write_term_to_stream_baf(c_25, d_25);
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_6);
  return(t);
}
static ATerm n_5 (ATerm h_93 (ATerm), ATerm z_241, ATerm m_25, ATerm t)
{
  ATerm t_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_241, term_w_12);
  t = j_6(t);
  t_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_6, m_25);
  t = h_93(t);
  t = fclose_0_0(t);
  t = m_25;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm c_7 = NULL,f_7 = NULL,g_7 = NULL;
  c_7 = t;
  t = term_x_12;
  f_7 = t;
  t = (ATerm) ATinsert(ATempty, term_y_12);
  g_7 = t;
  t = SSL_printnl(f_7, g_7);
  t = c_7;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_13 = ATgetArgument(t, 0);
      if(match_cons(b_13, sym_Stream_1))
        {
          y_7 = ATgetArgument(b_13, 0);
        }
      else
        _fail(t);
      z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(y_7, z_7, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  t = if_verbose1_1_0(m_1, t);
  t = term_q_9;
  a_7 = t;
  t = term_d_13;
  b_7 = t;
  t = term_e_13;
  t = n_6(a_7, b_7, t);
  {
    ATerm f_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_7 = NULL,q_7 = NULL;
            p_7 = t;
            t = (ATerm) ATinsert(ATempty, term_p_13);
            q_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_7, (ATerm) ATinsert(ATempty, term_p_13));
            t = k_6(p_7, q_7, t);
            LocalPopChoice(o_13);
            {
              ATerm r_7 = NULL,s_7 = NULL;
              r_7 = t;
              t = (ATerm) ATinsert(ATempty, term_r_13);
              s_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_7, (ATerm) ATinsert(ATempty, term_r_13));
              t = k_6(r_7, s_7, t);
            }
          }
        else
          {
            t = l_13;
          }
        LocalPopChoice(k_13);
        {
          ATerm w_7 = NULL,x_7 = NULL;
          x_7 = t;
          t = term_e_10;
          t = table_getlist_0_0(t);
          w_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_7, w_7);
          t = n_5(n_1, x_7, w_7, t);
        }
      }
    else
      {
        t = f_13;
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
  t = term_s_13;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL;
  t = term_q_9;
  j_8 = t;
  t = term_u_13;
  k_8 = t;
  t = term_v_13;
  t = n_6(j_8, k_8, t);
  t = if_verbose2_1_0(p_1, t);
  t = term_q_9;
  h_8 = t;
  t = term_u_13;
  i_8 = t;
  t = term_v_13;
  t = n_6(h_8, i_8, t);
  c_8 = t;
  t = if_verbose5_1_0(t_1, t);
  t = term_e_10;
  d_8 = t;
  t = term_g_10;
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_10, term_g_10, c_8);
  t = o_5(d_8, g_8, c_8, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      if((e_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm a_47, ATerm b_47, ATerm z_46, ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_47, b_47);
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_13 = ATgetArgument(t, 0);
            ATerm b_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_47, b_47);
        t = n_6(a_47, b_47, t);
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        t = (ATerm) ATempty;
      }
  }
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_46, q_8);
  t = d_6(z_1, z_46, q_8, t);
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_47, b_47, p_8);
  t = lookup_table_0_1(a_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(b_47, p_8, r_8, t);
  t = o_8;
  return(t);
}
ATerm xtc_register_0_3 (ATerm g_69, ATerm h_69, ATerm i_69, ATerm t)
{
  ATerm i_9 = NULL;
  i_9 = t;
  t = xtc_load_0_0(t);
  t = g_69;
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_69;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_14 = ATgetFirst((ATermList) t);
                ATerm f_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_69;
          }
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = (ATerm) ATinsert(ATempty, g_69);
      }
  }
  {
    static ATerm c_2 (ATerm t);
    static ATerm c_2 (ATerm t)
    {
      ATerm o_9 = NULL,p_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,f_10 = NULL;
      p_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_9), term_i_14), i_69);
      f_10 = t;
      t = SSL_concat_strings(f_10);
      o_9 = t;
      t = term_e_10;
      w_9 = t;
      t = (ATerm) ATmakeAppl(sym_Tool_1, p_9);
      x_9 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_69, o_9));
      y_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_10, (ATerm)ATmakeAppl(sym_Tool_1, p_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_69, o_9)));
      t = o_5(w_9, x_9, y_9, t);
      return(t);
    }
    t = map_1_0(c_2, t);
  }
  t = i_9;
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_119 (ATerm), ATerm t)
{
  ATerm h_10 = NULL;
  h_10 = t;
  {
    ATerm k_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL,k_10 = NULL,n_10 = NULL;
        t = term_q_9;
        k_10 = t;
        t = term_z_9;
        n_10 = t;
        t = term_c_10;
        t = n_6(k_10, n_10, t);
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_10, term_p_14);
        t = geq_0_0(t);
        t = h_10;
        t = w_119(t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = k_14;
        t = h_10;
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,k_11 = NULL;
  g_11 = t;
  t = term_x_12;
  h_11 = t;
  t = (ATerm) ATinsert(ATempty, term_q_14);
  k_11 = t;
  t = SSL_printnl(h_11, k_11);
  t = g_11;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_r_14;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_s_14;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,u_10 = NULL,w_10 = NULL,y_10 = NULL,a_11 = NULL,c_11 = NULL,d_11 = NULL;
  t = term_q_9;
  c_11 = t;
  t = term_v_11;
  d_11 = t;
  t = term_d_12;
  t = n_6(c_11, d_11, t);
  p_10 = t;
  t = if_verbose1_1_0(d_2, t);
  t = if_verbose2_1_0(e_2, t);
  t = term_q_9;
  y_10 = t;
  t = term_r_9;
  a_11 = t;
  t = term_s_9;
  t = n_6(y_10, a_11, t);
  q_10 = t;
  t = if_verbose2_1_0(g_2, t);
  t = term_q_9;
  u_10 = t;
  t = term_h_12;
  w_10 = t;
  t = term_i_12;
  t = n_6(u_10, w_10, t);
  r_10 = t;
  t = if_verbose2_1_0(l_2, t);
  t = p_10;
  t = xtc_register_0_3(p_10, q_10, r_10, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_119 (ATerm), ATerm t)
{
  ATerm q_11 = NULL;
  q_11 = t;
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
        t = term_q_9;
        t_11 = t;
        t = term_z_9;
        u_11 = t;
        t = term_c_10;
        t = n_6(t_11, u_11, t);
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, term_x_14);
        t = geq_0_0(t);
        t = q_11;
        t = x_119(t);
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        t = q_11;
      }
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  t = term_q_9;
  x_11 = t;
  t = term_z_14;
  y_11 = t;
  t = term_a_15;
  t = n_6(x_11, y_11, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
  a_12 = t;
  {
    ATerm b_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_15 = ATgetFirst((ATermList) t);
                ATerm h_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_12;
          }
        LocalPopChoice(d_15);
      }
    else
      {
        t = b_15;
        t = (ATerm) ATinsert(ATempty, a_12);
      }
  }
  b_12 = t;
  t = term_n_11;
  c_12 = t;
  t = SSL_printnl(c_12, b_12);
  t = a_12;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_12 = NULL,s_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_12 = ATgetFirst((ATermList) t);
      s_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_12 = NULL,a_13 = NULL;
        static ATerm n_2 (ATerm t);
        static ATerm n_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_12)), not_null(a_13));
          return(t);
        }
        t = s_12;
        t = j_0(t);
        if(((z_12 != NULL) && (z_12 != t)))
          _fail(t);
        else
          z_12 = t;
        t = p_12;
        t = h_0(t);
        if(((a_13 != NULL) && (a_13 != t)))
          _fail(t);
        else
          a_13 = t;
        t = s_12;
        t = reverse_acc_2_0(h_0, n_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_15;
      t = j_0(t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,q_13 = NULL,g_4 = NULL;
  q_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_13);
  m_13 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_13);
  g_4 = t;
  t = SSLsetAnnotations(g_4, m_13);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_13), term_j_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL;
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_13 = NULL,j_13 = NULL;
      t = term_q_9;
      i_13 = t;
      t = term_z_14;
      j_13 = t;
      t = term_a_15;
      t = n_6(i_13, j_13, t);
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      t = fetch_1_0(o_2, t);
    }
  {
    ATerm m_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_114(t);
        t = echo_0_0(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = m_15;
      }
  }
  t = term_q_15;
  t = echo_0_0(t);
  t = term_r_15;
  g_13 = t;
  t = term_s_15;
  h_13 = t;
  t = term_t_15;
  t = n_6(g_13, h_13, t);
  t = reverse_acc_2_0(_id, p_2, t);
  t = map_1_0(u_2, t);
  {
    ATerm u_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_14 = NULL;
        t = e_114(t);
        a_14 = t;
        t = (ATerm) ATinsert(CheckATermList(a_14), term_r_11);
        t = echo_0_0(t);
        LocalPopChoice(w_15);
      }
    else
      {
        t = u_15;
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,i_4 = NULL;
  n_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_14);
  l_14 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_14);
  i_4 = t;
  t = SSLsetAnnotations(i_4, l_14);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_16), term_b_16), term_x_15);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_16), term_d_16);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_14 = NULL,j_14 = NULL;
        t = term_q_9;
        h_14 = t;
        t = term_z_14;
        j_14 = t;
        t = term_a_15;
        t = n_6(h_14, j_14, t);
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        t = fetch_1_0(y_2, t);
      }
  }
  t = g_14;
  t = default_system_usage_2_0(c_3, j_3, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,y_14 = NULL,c_15 = NULL,e_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_15 = NULL,n_15 = NULL,p_15 = NULL;
      t = term_i_15;
      t = q_0(t);
      g_15 = t;
      t = term_r_15;
      n_15 = t;
      t = term_s_15;
      p_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_15, term_s_15, g_15);
      t = s_5(n_15, p_15, g_15, t);
      _fail(t);
    }
  else
    {
      ATerm v_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_14 = ATgetFirst((ATermList) t);
          y_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_15 = ATgetFirst((ATermList) t);
          e_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_14;
      t = o_0(t);
      t = c_15;
      t = p_0(t);
      v_15 = t;
      t = (ATerm) ATinsert(CheckATermList(e_15), v_15);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_94 (ATerm), ATerm t)
{
  static ATerm k_17 (ATerm t);
  static ATerm k_17 (ATerm t)
  {
    ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
    j_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_17 = ATgetFirst((ATermList) t);
        i_17 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_1 = NULL,b_2 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(j_17);
          v_1 = t;
          t = i_17;
          t = k_17(t);
          b_2 = t;
          t = (ATerm) ATinsert(CheckATermList(b_2), h_17);
          k_4 = t;
          t = SSLsetAnnotations(k_4, v_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_17;
        t = g_94(t);
      }
    return(t);
  }
  t = k_17(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
  y_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_15;
    }
  else
    {
      static ATerm k_3 (ATerm t);
      static ATerm k_3 (ATerm t)
      {
        t = not_null(a_16);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_15 = ATgetFirst((ATermList) t);
          if(((a_16 != NULL) && (a_16 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_15;
      t = at_end_1_0(k_3, t);
    }
  return(t);
}
static ATerm k_18 (ATerm u_17, ATerm t)
{
  ATerm y_17 = NULL;
  t = SSL_explode_term(u_17);
  if(match_cons(t, sym__2))
    {
      ATerm h_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_17;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_18 = NULL,g_18 = NULL,h_18 = NULL;
  h_18 = t;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_3 (ATerm t);
            static ATerm l_3 (ATerm t)
            {
              t = g_18;
              return(t);
            }
            t = d_18;
            t = at_end_1_0(l_3, t);
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
            t = k_18(h_18, t);
          }
      }
    }
  else
    {
      t = k_18(h_18, t);
    }
  return(t);
}
static ATerm p_5 (ATerm c_67, ATerm b_67, ATerm t)
{
  ATerm n_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  t = c_67;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_18 = NULL;
        t = term_q_9;
        t_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_9, c_67);
        t = n_6(t_18, c_67, t);
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = (ATerm) ATempty;
      }
  }
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_67, p_18);
  t = conc_0_0(t);
  n_18 = t;
  t = term_q_9;
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_9, c_67, n_18);
  t = lookup_table_0_1(q_18, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(c_67, n_18, r_18, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_9, c_67, n_18);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  if(match_string(t, "-r"))
    {
      t = n_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = n_19;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm q_19 = NULL,t_19 = NULL;
  q_19 = t;
  t = term_d_13;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, q_19);
  t = u_5(t_19, q_19, t);
  t = q_19;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_m_16;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  if(match_string(t, "i"))
    {
      t = u_19;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = u_19;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = u_19;
        }
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm x_19 = NULL,z_19 = NULL,a_20 = NULL;
  x_19 = t;
  t = term_u_13;
  z_19 = t;
  t = (ATerm) ATinsert(ATempty, x_19);
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_13, (ATerm) ATinsert(ATempty, x_19));
  t = p_5(z_19, a_20, t);
  t = x_19;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm e_20 = NULL;
  e_20 = t;
  if(match_string(t, "r"))
    {
      t = e_20;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = e_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = e_20;
        }
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  g_20 = t;
  t = term_o_16;
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, g_20);
  t = u_5(h_20, g_20, t);
  t = g_20;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  if(match_string(t, "-t"))
    {
      t = k_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = k_20;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,p_20 = NULL;
  l_20 = t;
  t = term_v_11;
  m_20 = t;
  t = (ATerm) ATinsert(ATempty, l_20);
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATinsert(ATempty, l_20));
  t = p_5(m_20, p_20, t);
  t = l_20;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_q_16;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm q_20 = NULL;
  q_20 = t;
  if(match_string(t, "-l"))
    {
      t = q_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = q_20;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  t_20 = t;
  t = term_h_12;
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, t_20);
  t = u_5(u_20, t_20, t);
  t = t_20;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_r_16;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm x_20 = NULL;
  x_20 = t;
  if(match_string(t, "-V"))
    {
      t = x_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = x_20;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm y_20 = NULL,d_21 = NULL;
  y_20 = t;
  t = term_r_9;
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, y_20);
  t = u_5(d_21, y_20, t);
  t = y_20;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_s_16;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm g_21 = NULL;
  g_21 = t;
  if(match_string(t, "q"))
    {
      t = g_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = g_21;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL;
  h_21 = t;
  t = term_t_16;
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, h_21);
  t = u_5(i_21, h_21, t);
  t = h_21;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_u_16;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm k_21 = NULL;
  k_21 = t;
  if(match_string(t, "-a"))
    {
      t = k_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = k_21;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  l_21 = t;
  t = term_q_12;
  m_21 = t;
  t = term_i_15;
  n_21 = t;
  t = term_v_16;
  t = u_5(m_21, n_21, t);
  t = l_21;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_w_16;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm o_21 = NULL;
  o_21 = t;
  if(match_string(t, "-L"))
    {
      t = o_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = o_21;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm p_21 = NULL,s_21 = NULL,t_21 = NULL;
  p_21 = t;
  t = term_h_12;
  s_21 = t;
  t = term_i_15;
  t_21 = t;
  t = term_x_16;
  t = u_5(s_21, t_21, t);
  t = p_21;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_y_16;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  if(match_string(t, "-R"))
    {
      t = u_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = u_21;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,a_22 = NULL;
  w_21 = t;
  t = term_t_12;
  x_21 = t;
  t = term_i_15;
  a_22 = t;
  t = term_z_16;
  t = u_5(x_21, a_22, t);
  t = w_21;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_a_17;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  t = SSL_string_to_int(b_22);
  c_22 = t;
  t = term_z_9;
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, c_22);
  t = u_5(d_22, c_22, t);
  t = b_22;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_b_17;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(m_3, o_3, p_3, t);
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_3, s_3, v_3, t);
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            {
              ATerm g_17 = t;
              int l_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_3, z_3, c_4, t);
                  LocalPopChoice(l_17);
                }
              else
                {
                  t = g_17;
                  {
                    ATerm m_17 = t;
                    int n_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(d_4, e_4, f_4, t);
                        LocalPopChoice(n_17);
                      }
                    else
                      {
                        t = m_17;
                        {
                          ATerm o_17 = t;
                          int p_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(h_4, j_4, l_4, t);
                              LocalPopChoice(p_17);
                            }
                          else
                            {
                              t = o_17;
                              {
                                ATerm q_17 = t;
                                int r_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(m_4, n_4, p_4, t);
                                    LocalPopChoice(r_17);
                                  }
                                else
                                  {
                                    t = q_17;
                                    {
                                      ATerm s_17 = t;
                                      int t_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(q_4, t_4, u_4, t);
                                          LocalPopChoice(t_17);
                                        }
                                      else
                                        {
                                          t = s_17;
                                          {
                                            ATerm v_17 = t;
                                            int w_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(v_4, x_4, y_4, t);
                                                LocalPopChoice(w_17);
                                              }
                                            else
                                              {
                                                t = v_17;
                                                {
                                                  ATerm x_17 = t;
                                                  int z_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(b_5, d_5, e_5, t);
                                                      LocalPopChoice(z_17);
                                                    }
                                                  else
                                                    {
                                                      t = x_17;
                                                      {
                                                        ATerm a_18 = t;
                                                        int b_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(f_5, g_5, h_5, t);
                                                            LocalPopChoice(b_18);
                                                          }
                                                        else
                                                          {
                                                            t = a_18;
                                                            t = ArgOption_3_0(i_5, t_5, v_5, t);
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
static ATerm q_5 (ATerm y_50, ATerm z_50, ATerm t)
{
  ATerm e_22 = NULL;
  t = SSL_hashtable_remove(z_50, y_50);
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_22);
  return(t);
}
static ATerm r_5 (ATerm d_51, ATerm t)
{
  ATerm g_22 = NULL;
  t = SSL_hashtable_destroy(d_51);
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_22);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,l_22 = NULL,m_22 = NULL;
  h_22 = t;
  t = table_hashtable_0_0(t);
  i_22 = t;
  t = lookup_table_0_1(h_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5(m_22, t);
  t = i_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(h_22, l_22, t);
  t = h_22;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm n_22 = NULL,w_22 = NULL;
  t = term_c_18;
  n_22 = t;
  t = term_i_15;
  w_22 = t;
  t = term_e_18;
  t = u_5(n_22, w_22, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_f_18;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,c_23 = NULL,d_23 = NULL;
  t = term_c_18;
  c_23 = t;
  t = term_i_15;
  d_23 = t;
  t = term_e_18;
  t = u_5(c_23, d_23, t);
  t = term_i_18;
  x_22 = t;
  t = term_i_15;
  y_22 = t;
  t = term_j_18;
  t = u_5(x_22, y_22, t);
  t = term_l_18;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_6, r_6, s_6, t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = o_18;
      t = Option_3_0(u_6, v_6, w_6, t);
    }
  return(t);
}
static ATerm u_5 (ATerm w_66, ATerm x_66, ATerm t)
{
  ATerm f_23 = NULL,k_23 = NULL;
  t = term_q_9;
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_9, w_66, x_66);
  t = lookup_table_0_1(f_23, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(w_66, x_66, k_23, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_9, w_66, x_66);
  return(t);
}
static ATerm s_5 (ATerm i_46, ATerm j_46, ATerm h_46, ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,x_23 = NULL,y_23 = NULL;
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            ATerm x_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
        t = n_6(i_46, j_46, t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = (ATerm) ATempty;
      }
  }
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_46, j_46, (ATerm) ATinsert(CheckATermList(p_23), h_46));
  t = lookup_table_0_1(i_46, t);
  y_23 = t;
  t = (ATerm) ATinsert(CheckATermList(p_23), h_46);
  q_23 = t;
  t = y_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(j_46, q_23, x_23, t);
  t = o_23;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
      t = term_i_15;
      t = g_0(t);
      g_24 = t;
      t = term_r_15;
      h_24 = t;
      t = term_s_15;
      i_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_15, term_s_15, g_24);
      t = s_5(h_24, i_24, g_24, t);
      _fail(t);
    }
  else
    {
      ATerm l_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_24 = ATgetFirst((ATermList) t);
          f_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_24;
      t = d_0(t);
      t = term_i_15;
      t = f_0(t);
      l_24 = t;
      t = (ATerm) ATinsert(CheckATermList(f_24), l_24);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,s_4 = NULL;
  v_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_24 = ATgetFirst((ATermList) t);
      q_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_24);
  o_24 = t;
  t = p_24;
  t = n_74(t);
  t_24 = t;
  t = q_24;
  t = o_74(t);
  u_24 = t;
  t = (ATerm) ATinsert(CheckATermList(u_24), t_24);
  s_4 = t;
  t = SSLsetAnnotations(s_4, o_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_113 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,e_25 = NULL,f_25 = NULL,h_25 = NULL,j_25 = NULL,x_10 = NULL;
  a_25 = t;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_19;
        t = y_113(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
      }
  }
  t = a_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_25 = ATgetFirst((ATermList) t);
      f_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_25);
  b_25 = t;
  t = term_z_14;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_14, e_25);
  t = u_5(j_25, e_25, t);
  t = f_25;
  {
    static ATerm g_26 (ATerm t);
    static ATerm g_26 (ATerm t)
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_25 = NULL;
              q_25 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_25;
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              t = y_113(t);
              t = Cons_2_0(_id, g_26, t);
            }
          LocalPopChoice(c_19);
        }
      else
        {
          t = b_19;
          {
            ATerm y_25 = NULL,b_26 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_25 = ATgetFirst((ATermList) t);
                b_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_26), (ATerm) ATmakeAppl(sym_Undefined_1, y_25));
          }
        }
      return(t);
    }
    t = g_26(t);
  }
  h_25 = t;
  t = (ATerm) ATinsert(CheckATermList(h_25), (ATerm) ATmakeAppl(sym_Program_1, e_25));
  x_10 = t;
  t = SSLsetAnnotations(x_10, b_25);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm v_26 = NULL;
  v_26 = t;
  if(match_string(t, "--help"))
    {
      t = v_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_26;
        }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  t = term_f_19;
  y_26 = t;
  t = term_i_15;
  z_26 = t;
  t = term_g_19;
  t = u_5(y_26, z_26, t);
  t = term_h_19;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_i_19;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  n_26 = t;
  t = term_r_15;
  q_26 = t;
  t = term_j_19;
  t = lookup_table_0_1(q_26, t);
  u_26 = t;
  t = term_s_15;
  r_26 = t;
  t = (ATerm) ATempty;
  s_26 = t;
  t = u_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(r_26, s_26, t_26, t);
  t = n_26;
  {
    static ATerm x_6 (ATerm t);
    static ATerm x_6 (ATerm t)
    {
      ATerm k_19 = t;
      int l_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_113(t);
          LocalPopChoice(l_19);
        }
      else
        {
          t = k_19;
          {
            ATerm m_19 = t;
            int o_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_6, z_6, d_7, t);
                LocalPopChoice(o_19);
              }
            else
              {
                t = m_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_6, t);
  }
  {
    ATerm p_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_27 = NULL;
        k_27 = t;
        {
          ATerm s_19 = t;
          int v_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_2 = NULL;
              t = k_27;
              {
                ATerm w_19 = t;
                int y_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_2 = NULL,t_2 = NULL;
                    t = term_q_9;
                    s_2 = t;
                    t = term_f_19;
                    t_2 = t;
                    t = term_b_20;
                    t = n_6(s_2, t_2, t);
                    LocalPopChoice(y_19);
                  }
                else
                  {
                    t = w_19;
                    t = fetch_1_0(e_7, t);
                  }
              }
              t = k_27;
              t = w_113(t);
              t = term_c_20;
              r_2 = t;
              t = SSL_exit(r_2);
              LocalPopChoice(v_19);
            }
          else
            {
              t = s_19;
              {
                ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL;
                t = term_q_9;
                f_3 = t;
                t = term_c_18;
                g_3 = t;
                t = term_d_20;
                t = n_6(f_3, g_3, t);
                t = k_27;
                t = x_113(t);
                t = term_c_20;
                e_3 = t;
                t = SSL_exit(e_3);
              }
            }
        }
        LocalPopChoice(r_19);
      }
    else
      {
        t = p_19;
        {
          ATerm f_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_27 = NULL,n_27 = NULL,o_27 = NULL;
              static ATerm i_7 (ATerm t);
              static ATerm i_7 (ATerm t)
              {
                ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,b_11 = NULL;
                r_27 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_27);
                p_27 = t;
                t = q_27;
                if(((l_26 != NULL) && (l_26 != t)))
                  _fail(t);
                else
                  l_26 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_27);
                b_11 = t;
                t = SSLsetAnnotations(b_11, p_27);
                return(t);
              }
              t = fetch_1_0(i_7, t);
              t = term_x_12;
              n_27 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_26)), term_j_20);
              o_27 = t;
              t = SSL_printnl(n_27, o_27);
              t = (ATerm) ATmakeAppl(sym__2, term_x_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_26)), term_j_20));
              t = w_113(t);
              t = term_p_14;
              l_27 = t;
              t = SSL_exit(l_27);
              LocalPopChoice(i_20);
            }
          else
            {
              t = f_20;
            }
        }
      }
  }
  m_26 = t;
  t = term_r_15;
  t = table_destroy_0_0(t);
  t = m_26;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = debug_1_0(l_7, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_27 = NULL;
      t = parse_options_3_0(xtc_options_0_0, default_system_usage_0_0, default_system_about_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(j_7, t);
      t = xtc_read_0_0(t);
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_20 = t;
            int a_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_27 = NULL,a_28 = NULL;
                t = term_q_9;
                z_27 = t;
                t = term_o_16;
                a_28 = t;
                t = term_b_21;
                t = n_6(z_27, a_28, t);
                t = xtc_register_0_0(t);
                LocalPopChoice(a_21);
              }
            else
              {
                t = z_20;
                {
                  ATerm b_28 = NULL,c_28 = NULL;
                  t = term_q_9;
                  b_28 = t;
                  t = term_u_13;
                  c_28 = t;
                  t = term_v_13;
                  t = n_6(b_28, c_28, t);
                  t = register_import_0_0(t);
                }
              }
            t = xtc_store_0_0(t);
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            {
              ATerm f_28 = NULL,g_28 = NULL;
              t = term_q_9;
              f_28 = t;
              t = term_t_16;
              g_28 = t;
              t = term_c_21;
              t = n_6(f_28, g_28, t);
              {
                ATerm e_21 = t;
                int f_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = repository_query_0_0(t);
                    LocalPopChoice(f_21);
                  }
                else
                  {
                    t = e_21;
                    {
                      ATerm j_21 = t;
                      int q_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = all_query_0_0(t);
                          LocalPopChoice(q_21);
                        }
                      else
                        {
                          t = j_21;
                          t = tool_query_0_0(t);
                        }
                    }
                  }
              }
            }
          }
      }
      t = term_c_20;
      y_27 = t;
      t = SSL_exit(y_27);
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      t = debug_1_0(m_7, t);
    }
  return(t);
}
static ATerm w_5 (ATerm b_70, ATerm c_70, ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
  t = c_70;
  t = map_1_0(xtc_find_0_0, t);
  h_28 = t;
  t = term_n_11;
  o_28 = t;
  t = SSL_print(o_28, h_28);
  t = term_n_11;
  m_28 = t;
  t = (ATerm) ATinsert(ATempty, term_r_11);
  n_28 = t;
  t = SSL_print(m_28, n_28);
  t = term_c_20;
  i_28 = t;
  t = SSL_exit(i_28);
  return(t);
}
static ATerm x_5 (ATerm e_60, ATerm f_60, ATerm t)
{
  t = SSL_execvp(e_60, f_60);
  return(t);
}
ATerm debug_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm s_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  s_28 = t;
  t = f_93(t);
  v_28 = t;
  t = term_x_12;
  w_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_28), v_28);
  x_28 = t;
  t = SSL_printnl(w_28, x_28);
  t = s_28;
  return(t);
}
static ATerm y_5 (ATerm a_51, ATerm t)
{
  t = SSL_hashtable_keys(a_51);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_28 = NULL,b_29 = NULL;
  static ATerm n_7 (ATerm t);
  static ATerm n_7 (ATerm t)
  {
    ATerm d_29 = NULL,i_29 = NULL;
    d_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), d_29);
    t = n_6(not_null(z_28), d_29, t);
    i_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_29, i_29);
    return(t);
  }
  if(((z_28 != NULL) && (z_28 != t)))
    _fail(t);
  else
    z_28 = t;
  t = lookup_table_0_1(z_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(b_29, t);
  t = map_1_0(n_7, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm a_120 (ATerm), ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  {
    ATerm r_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
        t = term_q_9;
        s_29 = t;
        t = term_z_9;
        t_29 = t;
        t = term_c_10;
        t = n_6(s_29, t_29, t);
        r_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_29, term_y_21);
        t = geq_0_0(t);
        t = k_29;
        t = a_120(t);
        LocalPopChoice(v_21);
      }
    else
      {
        t = r_21;
        t = k_29;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm z_93 (ATerm), ATerm t)
{
  static ATerm k_31 (ATerm t);
  static ATerm k_31 (ATerm t)
  {
    ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
    f_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_31 = ATgetFirst((ATermList) t);
        h_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_21 = t;
      int f_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_3 = NULL,q_3 = NULL,f_11 = NULL;
          t = SSLgetAnnotations(f_31);
          n_3 = t;
          t = g_31;
          t = z_93(t);
          q_3 = t;
          t = (ATerm) ATinsert(CheckATermList(h_31), q_3);
          f_11 = t;
          t = SSLsetAnnotations(f_11, n_3);
          LocalPopChoice(f_22);
        }
      else
        {
          t = z_21;
          {
            ATerm o_4 = NULL,r_4 = NULL,i_11 = NULL;
            t = SSLgetAnnotations(f_31);
            o_4 = t;
            t = h_31;
            t = k_31(t);
            r_4 = t;
            t = (ATerm) ATinsert(CheckATermList(r_4), g_31);
            i_11 = t;
            t = SSLsetAnnotations(i_11, o_4);
          }
        }
    }
    return(t);
  }
  t = k_31(t);
  return(t);
}
static ATerm n_6 (ATerm b_48, ATerm c_48, ATerm t)
{
  ATerm v_29 = NULL;
  t = lookup_table_0_1(b_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(c_48, v_29, t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm z_119 (ATerm), ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
        t = term_q_9;
        w_31 = t;
        t = term_z_9;
        x_31 = t;
        t = term_c_10;
        t = n_6(w_31, x_31, t);
        v_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_31, term_o_22);
        t = geq_0_0(t);
        t = t_31;
        t = z_119(t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = t_31;
      }
  }
  return(t);
}
static ATerm m_6 (ATerm t_50, ATerm u_50, ATerm v_50, ATerm t)
{
  ATerm e_32 = NULL;
  t = SSL_hashtable_put(v_50, t_50, u_50);
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_32);
  return(t);
}
static ATerm l_6 (ATerm w_50, ATerm x_50, ATerm t)
{
  t = SSL_hashtable_get(x_50, w_50);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm b_51, ATerm c_51, ATerm t)
{
  ATerm f_32 = NULL;
  t = SSL_hashtable_create(b_51, c_51);
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_32);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_32 = NULL,j_32 = NULL,k_32 = NULL,p_32 = NULL,q_32 = NULL;
  g_32 = t;
  t = term_p_22;
  p_32 = t;
  t = term_q_22;
  q_32 = t;
  t = g_32;
  t = new_hashtable_0_2(p_32, q_32, t);
  j_32 = t;
  t = g_32;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(g_32, j_32, k_32, t);
  t = g_32;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm w_32 = NULL;
  t = SSL_table_hashtable();
  w_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_32);
  return(t);
}
ATerm lookup_table_0_1 (ATerm u_47, ATerm t)
{
  ATerm q_33 = NULL;
  t = table_hashtable_0_0(t);
  q_33 = t;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL;
        t = q_33;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_6(u_47, a_5, t);
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        {
          ATerm j_5 = NULL;
          t = u_47;
          t = table_create_0_0(t);
          t = q_33;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_6(u_47, j_5, t);
        }
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
  d_34 = t;
  if(match_cons(t, sym__2))
    {
      e_34 = ATgetArgument(t, 0);
      f_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_34;
        if((e_34 != t))
          {
            _fail(t);
          }
        t = d_34;
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
        {
          ATerm v_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_34, f_34);
              LocalPopChoice(z_22);
            }
          else
            {
              t = v_22;
              t = SSL_gtr(e_34, f_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm b_120 (ATerm), ATerm t)
{
  ATerm j_34 = NULL;
  j_34 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
        t = term_q_9;
        m_34 = t;
        t = term_z_9;
        n_34 = t;
        t = term_c_10;
        t = n_6(m_34, n_34, t);
        l_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_34, term_e_23);
        t = geq_0_0(t);
        t = j_34;
        t = b_120(t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = j_34;
      }
  }
  return(t);
}
static ATerm c_6 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm n_31, ATerm m_31, ATerm t)
{
  t = e_98(t);
  {
    static ATerm o_7 (ATerm t);
    static ATerm o_7 (ATerm t)
    {
      ATerm p_34 = NULL;
      p_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_31, p_34);
      t = d_98(t);
      return(t);
    }
    t = fetch_1_0(o_7, t);
  }
  t = m_31;
  return(t);
}
static ATerm d_6 (ATerm a_98 (ATerm), ATerm j_31, ATerm i_31, ATerm t)
{
  static ATerm j_35 (ATerm t);
  static ATerm j_35 (ATerm t)
  {
    ATerm a_35 = NULL,b_35 = NULL,f_35 = NULL;
    a_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_35 = ATgetFirst((ATermList) t);
            f_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_23 = t;
          int h_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_35;
              {
                static ATerm t_7 (ATerm t);
                static ATerm t_7 (ATerm t)
                {
                  t = i_31;
                  return(t);
                }
                t = c_6(a_98, t_7, b_35, f_35, t);
              }
              t = j_35(t);
              LocalPopChoice(h_23);
            }
          else
            {
              t = g_23;
              {
                ATerm h_7 = NULL,k_7 = NULL,m_11 = NULL;
                t = SSLgetAnnotations(a_35);
                h_7 = t;
                t = f_35;
                t = j_35(t);
                k_7 = t;
                t = (ATerm) ATinsert(CheckATermList(k_7), b_35);
                m_11 = t;
                t = SSLsetAnnotations(m_11, h_7);
              }
            }
        }
      }
    return(t);
  }
  t = j_31;
  t = j_35(t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm w_35 = NULL;
  if(match_cons(t, sym__2))
    {
      w_35 = ATgetArgument(t, 0);
      if((w_35 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm f_47, ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,r_35 = NULL;
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_47, g_47);
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_23 = ATgetArgument(t, 0);
            ATerm m_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_47, g_47);
        t = n_6(f_47, g_47, t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        t = (ATerm) ATempty;
      }
  }
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_35, h_47);
  t = d_6(u_7, o_35, h_47, t);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_47, g_47, n_35);
  t = lookup_table_0_1(f_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(g_47, n_35, r_35, t);
  t = m_35;
  return(t);
}
ATerm map_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  static ATerm l_36 (ATerm t);
  static ATerm l_36 (ATerm t)
  {
    ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
    i_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_36;
      }
    else
      {
        ATerm b_8 = NULL,l_8 = NULL,m_8 = NULL,o_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_36 = ATgetFirst((ATermList) t);
            k_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_36);
        b_8 = t;
        t = j_36;
        t = p_93(t);
        l_8 = t;
        t = k_36;
        t = l_36(t);
        m_8 = t;
        t = (ATerm) ATinsert(CheckATermList(m_8), l_8);
        o_11 = t;
        t = SSLsetAnnotations(o_11, b_8);
      }
    return(t);
  }
  t = l_36(t);
  return(t);
}
static ATerm f_6 (ATerm e_107 (ATerm), ATerm p_47, ATerm o_47, ATerm t)
{
  static ATerm v_7 (ATerm t);
  static ATerm v_7 (ATerm t)
  {
    ATerm n_36 = NULL,o_36 = NULL;
    if(match_cons(t, sym__2))
      {
        n_36 = ATgetArgument(t, 0);
        o_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, p_47, n_36, o_36);
    t = e_107(t);
    return(t);
  }
  t = o_47;
  t = map_1_0(v_7, t);
  return(t);
}
static ATerm k_6 (ATerm p_40, ATerm q_40, ATerm t)
{
  t = SSL_access(p_40, q_40);
  return(t);
}
static ATerm c_37 (ATerm w_36, ATerm t)
{
  t = SSL_fclose(w_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL;
  a_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_36 = ATgetArgument(t, 0);
      {
        ATerm n_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_36);
            LocalPopChoice(r_23);
          }
        else
          {
            t = n_23;
            t = c_37(a_37, t);
          }
      }
    }
  else
    {
      t = c_37(a_37, t);
    }
  return(t);
}
static ATerm g_6 (ATerm i_25, ATerm t)
{
  t = SSL_read_term_from_stream(i_25);
  return(t);
}
static ATerm h_6 (ATerm f_39, ATerm g_39, ATerm t)
{
  t = SSL_strcat(f_39, g_39);
  return(t);
}
static ATerm i_6 (ATerm b_41, ATerm c_41, ATerm t)
{
  ATerm d_37 = NULL;
  t = SSL_fopen(b_41, c_41);
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_37);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_37 = NULL;
  t = SSL_stdin_stream();
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_37);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_37 = NULL;
  t = SSL_stdout_stream();
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_37);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_37 = NULL;
  t = SSL_stderr_stream();
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_37);
  return(t);
}
static ATerm n_38 (ATerm m_37, ATerm t)
{
  ATerm n_37 = NULL;
  t = SSL_explode_term(m_37);
  if(match_cons(t, sym__2))
    {
      ATerm s_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_23 = ATgetArgument(t, 1);
        if(((ATgetType(t_23) == AT_LIST) && !(ATisEmpty(t_23))))
          {
            n_37 = ATgetFirst((ATermList) t_23);
            {
              ATerm u_23 = (ATerm) ATgetNext((ATermList) t_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_38 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,y_37 = NULL,w_11 = NULL;
  t = SSLgetAnnotations(s_37);
  v_37 = t;
  t = q_37;
  if(match_cons(t, sym_Path_1))
    {
      y_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_37, r_37);
  w_11 = t;
  t = SSLsetAnnotations(w_11, v_37);
  if(match_cons(t, sym__2))
    {
      t_37 = ATgetArgument(t, 0);
      u_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(t_37, u_37, t);
  return(t);
}
static ATerm p_38 (ATerm a_38, ATerm b_38, ATerm c_38, ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,i_38 = NULL,z_11 = NULL;
  t = SSLgetAnnotations(c_38);
  f_38 = t;
  t = SSL_is_string(a_38);
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_38, b_38);
  z_11 = t;
  t = SSLsetAnnotations(z_11, f_38);
  if(match_cons(t, sym__2))
    {
      d_38 = ATgetArgument(t, 0);
      e_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(d_38, e_38, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
  k_38 = t;
  if(match_cons(t, sym__2))
    {
      l_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_38(k_38, t);
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            {
              ATerm z_23 = t;
              int a_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_38(l_38, m_38, k_38, t);
                  LocalPopChoice(a_24);
                }
              else
                {
                  t = z_23;
                  t = p_38(l_38, m_38, k_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_38(k_38, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,y_38 = NULL;
  y_38 = t;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_38, term_d_24);
        t = j_6(t);
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        {
          ATerm k_9 = NULL,l_9 = NULL;
          t = term_j_24;
          l_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_24, y_38);
          t = h_6(l_9, y_38, t);
          k_9 = t;
          t = SSL_perror(k_9);
          _fail(t);
        }
      }
  }
  s_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(t_38, t);
  r_38 = t;
  t = s_38;
  t = fclose_0_0(t);
  t = r_38;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_k_24;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_39 = NULL,c_39 = NULL;
      b_39 = t;
      t = (ATerm) ATinsert(ATempty, term_s_24);
      c_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_39, (ATerm) ATinsert(ATempty, term_s_24));
      t = k_6(b_39, c_39, t);
      LocalPopChoice(r_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_24;
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_24 = t;
            if((PushChoice() == 0))
              {
                ATerm d_39 = NULL,e_39 = NULL;
                d_39 = t;
                t = (ATerm) ATinsert(ATempty, term_p_13);
                e_39 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_39, (ATerm) ATinsert(ATempty, term_p_13));
                t = k_6(d_39, e_39, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_24;
              }
            t = debug_1_0(a_8, t);
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            t = debug_1_0(e_8, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = debug_1_0(n_8, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_z_24;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = debug_1_0(t_8, t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  t = term_x_12;
  y_39 = t;
  t = (ATerm) ATinsert(ATempty, term_k_25);
  z_39 = t;
  t = SSL_printnl(y_39, z_39);
  t = x_39;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  if(match_cons(t, sym__3))
    {
      a_40 = ATgetArgument(t, 0);
      b_40 = ATgetArgument(t, 1);
      c_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_6(a_40, b_40, c_40, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
  d_40 = t;
  t = term_x_12;
  e_40 = t;
  t = (ATerm) ATinsert(ATempty, term_l_25);
  f_40 = t;
  t = SSL_printnl(e_40, f_40);
  t = d_40;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  t = term_x_12;
  h_40 = t;
  t = (ATerm) ATinsert(ATempty, term_k_25);
  i_40 = t;
  t = SSL_printnl(h_40, i_40);
  t = g_40;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  h_39 = t;
  t = if_verbose5_1_0(f_8, t);
  {
    ATerm n_25 = t;
    if((PushChoice() == 0))
      {
        ATerm v_39 = NULL,w_39 = NULL;
        t = term_e_10;
        v_39 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, h_39);
        w_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_10, (ATerm) ATmakeAppl(sym_Imported_1, h_39));
        t = n_6(v_39, w_39, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_25;
      }
  }
  j_39 = t;
  t = term_e_10;
  q_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_10, term_o_25, (ATerm) ATinsert(ATempty, h_39));
  t = lookup_table_0_1(q_39, t);
  u_39 = t;
  t = term_o_25;
  r_39 = t;
  t = (ATerm) ATinsert(ATempty, h_39);
  s_39 = t;
  t = u_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(r_39, s_39, t_39, t);
  t = j_39;
  t = if_verbose4_1_0(s_8, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(u_8, t);
  i_39 = t;
  t = term_e_10;
  p_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, i_39);
  t = f_6(v_8, p_39, i_39, t);
  t = if_verbose6_1_0(w_8, t);
  t = term_e_10;
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_10, (ATerm)ATmakeAppl(sym_Imported_1, h_39), (ATerm) ATempty);
  t = lookup_table_0_1(k_39, t);
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, h_39);
  l_39 = t;
  t = (ATerm) ATempty;
  m_39 = t;
  t = o_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(l_39, m_39, n_39, t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_10, (ATerm)ATmakeAppl(sym_Imported_1, h_39), (ATerm) ATempty);
  t = if_verbose4_1_0(x_8, t);
  return(t);
}
ATerm filter_1_0 (ATerm s_101 (ATerm), ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_40;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_40 = ATgetFirst((ATermList) t);
          y_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_9 = NULL,a_10 = NULL,b_10 = NULL,g_12 = NULL;
            t = SSLgetAnnotations(w_40);
            u_9 = t;
            t = x_40;
            t = s_101(t);
            a_10 = t;
            t = y_40;
            t = filter_1_0(s_101, t);
            b_10 = t;
            t = (ATerm) ATinsert(CheckATermList(b_10), a_10);
            g_12 = t;
            t = SSLsetAnnotations(g_12, u_9);
            LocalPopChoice(r_25);
          }
        else
          {
            t = p_25;
            t = y_40;
            t = filter_1_0(s_101, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm t)
{
  static ATerm f_41 (ATerm t);
  static ATerm f_41 (ATerm t)
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_86(t);
        t = f_41(t);
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        t = f_86(t);
      }
    return(t);
  }
  t = f_41(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_41 = NULL,h_41 = NULL;
      t = term_q_9;
      g_41 = t;
      t = term_d_13;
      h_41 = t;
      t = term_e_13;
      t = n_6(g_41, h_41, t);
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm w_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_41 = NULL;
            t = term_z_25;
            i_41 = t;
            t = SSL_getenv(i_41);
            LocalPopChoice(x_25);
          }
        else
          {
            t = w_25;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = debug_1_0(z_8, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_a_26;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL;
  t = term_e_10;
  o_41 = t;
  t = term_g_10;
  p_41 = t;
  t = term_i_10;
  t = n_6(o_41, p_41, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_26;
      }
  }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = debug_1_0(c_9, t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_41 = NULL;
  t = if_verbose5_1_0(y_8, t);
  k_41 = t;
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_41 = NULL,m_41 = NULL;
        t = term_e_10;
        l_41 = t;
        t = term_o_25;
        m_41 = t;
        t = term_h_26;
        t = n_6(l_41, m_41, t);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          ATerm n_41 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_41 = t;
          t = repeat_2_0(a_9, _id, t);
          t = n_41;
        }
      }
  }
  t = k_41;
  t = if_verbose5_1_0(b_9, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = debug_1_0(f_9, t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_i_26;
  return(t);
}
static ATerm m_42 (ATerm u_41, ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  t = term_e_10;
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, u_41);
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, (ATerm) ATmakeAppl(sym_Tool_1, u_41));
  t = n_6(x_41, y_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_26 = ATgetFirst((ATermList) t);
      if(match_cons(j_26, sym__2))
        {
          ATerm o_26 = ATgetArgument(j_26, 0);
          w_41 = ATgetArgument(j_26, 1);
        }
      else
        _fail(t);
      {
        ATerm k_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_41;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = debug_1_0(j_9, t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_i_26;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_e_10;
  t = table_getlist_0_0(t);
  t = debug_1_0(n_9, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
      t = if_verbose5_1_0(d_9, t);
      t = xtc_load_0_0(t);
      b_42 = t;
      if(match_cons(t, sym__2))
        {
          z_41 = ATgetArgument(t, 0);
          a_42 = ATgetArgument(t, 1);
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
                t = term_e_10;
                f_42 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, z_41);
                g_42 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_10, (ATerm) ATmakeAppl(sym_Tool_1, z_41));
                t = n_6(f_42, g_42, t);
                {
                  static ATerm g_9 (ATerm t);
                  static ATerm g_9 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((a_42 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_42 != NULL) && (e_42 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_42 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_9, t);
                }
                t = not_null(e_42);
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                t = m_42(b_42, t);
              }
          }
        }
      else
        {
          t = m_42(b_42, t);
        }
      t = if_verbose5_1_0(h_9, t);
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm l_42 = NULL,s_10 = NULL,t_10 = NULL;
        l_42 = t;
        t = term_x_12;
        s_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), l_42), term_c_27);
        t_10 = t;
        t = SSL_printnl(s_10, t_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), l_42), term_c_27);
        t = if_verbose5_1_0(m_9, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
      u_42 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_42 = ATgetFirst((ATermList) t);
          w_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_42 = ATgetFirst((ATermList) t);
          y_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_42;
      if(match_string(t, "call"))
        {
          ATerm c_43 = NULL;
          t = y_42;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_42 = ATgetFirst((ATermList) t);
              t_42 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_42;
          t = xtc_find_0_0(t);
          c_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_43, t_42);
          t = x_5(c_43, t_42, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = u_42;
          t = w_5(v_42, y_42, t);
        }
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      t = xtc_main_0_0(t);
    }
  return(t);
}
