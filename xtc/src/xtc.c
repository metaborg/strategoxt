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
ATerm term_q_26;
ATerm term_p_26;
ATerm term_k_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_i_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_r_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_q_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_h_19;
ATerm term_p_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_f_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_k_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_l_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_r_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_d_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_n_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_x_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_l_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_b_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_l_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_j_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_j_14);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_j_14);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_q_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_m_14);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_j_14);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_j_14);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_j_14);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__3, term_l_14, term_m_14, (ATerm) ATempty);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_o_19);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_x_17);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_w_14);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_e_15);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_y_24);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm version_query_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm v_116 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm tool_query_0_0 (ATerm t);
static ATerm k_5 (ATerm v_68, ATerm b_823, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm all_query_0_0 (ATerm t);
ATerm repository_query_0_0 (ATerm t);
static ATerm l_5 (ATerm t_25, ATerm u_25, ATerm t);
static ATerm m_5 (ATerm f_92 (ATerm), ATerm l_235, ATerm d_26, ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm xtc_store_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm register_import_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm n_5 (ATerm r_47, ATerm s_47, ATerm q_47, ATerm t);
ATerm xtc_register_0_3 (ATerm q_68, ATerm r_68, ATerm s_68, ATerm t);
ATerm if_verbose1_1_0 (ATerm t_116 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm u_116 (ATerm), ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm f_93 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm o_15 (ATerm o_14, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm o_5 (ATerm m_66, ATerm l_66, ATerm t);
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm xtc_options_0_0 (ATerm t);
static ATerm p_5 (ATerm w_51, ATerm x_51, ATerm t);
static ATerm q_5 (ATerm b_52, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm t_5 (ATerm g_66, ATerm h_66, ATerm t);
static ATerm r_5 (ATerm z_46, ATerm a_47, ATerm y_46, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_111 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm parse_options_1_0 (ATerm w_111 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm xtc_main_0_0 (ATerm t);
static ATerm v_5 (ATerm l_69, ATerm m_69, ATerm t);
static ATerm w_5 (ATerm c_61, ATerm d_61, ATerm t);
ATerm debug_1_0 (ATerm d_92 (ATerm), ATerm t);
static ATerm x_5 (ATerm y_51, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_116 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm y_92 (ATerm), ATerm t);
static ATerm m_6 (ATerm s_48, ATerm t_48, ATerm t);
ATerm if_verbose4_1_0 (ATerm w_116 (ATerm), ATerm t);
static ATerm l_6 (ATerm r_51, ATerm s_51, ATerm t_51, ATerm t);
static ATerm k_6 (ATerm u_51, ATerm v_51, ATerm t);
ATerm new_hashtable_0_2 (ATerm z_51, ATerm a_52, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm l_48, ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm y_116 (ATerm), ATerm t);
static ATerm b_6 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm g_32, ATerm f_32, ATerm t);
static ATerm c_6 (ATerm z_96 (ATerm), ATerm c_32, ATerm b_32, ATerm t);
static ATerm k_7 (ATerm t);
static ATerm d_6 (ATerm w_47, ATerm x_47, ATerm y_47, ATerm t);
ATerm map_1_0 (ATerm o_92 (ATerm), ATerm t);
static ATerm e_6 (ATerm c_106 (ATerm), ATerm g_48, ATerm f_48, ATerm t);
static ATerm j_6 (ATerm i_41, ATerm j_41, ATerm t);
static ATerm o_36 (ATerm i_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_6 (ATerm z_25, ATerm t);
static ATerm g_6 (ATerm w_39, ATerm x_39, ATerm t);
static ATerm h_6 (ATerm u_41, ATerm v_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_37 (ATerm y_36, ATerm t);
static ATerm a_38 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t);
static ATerm b_38 (ATerm m_37, ATerm n_37, ATerm o_37, ATerm t);
static ATerm i_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm r_100 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm y_41 (ATerm a_41, ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
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
  ATerm k_0 = NULL,m_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,y_3 = NULL;
  u_0 = t;
  t = term_k_9;
  x_0 = t;
  t = term_l_9;
  z_0 = t;
  t = term_n_9;
  t = m_6(x_0, z_0, t);
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
  y_3 = t;
  t = SSLsetAnnotations(y_3, a_1);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_0, not_null(t_0)));
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, k_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_0, not_null(t_0))));
  t = k_5(k_0, v_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  {
    ATerm o_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL;
        t = term_k_9;
        j_1 = t;
        t = term_r_9;
        k_1 = t;
        t = term_t_9;
        t = m_6(j_1, k_1, t);
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, term_u_9);
        t = geq_0_0(t);
        t = g_1;
        t = v_116(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = o_9;
        t = g_1;
      }
  }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm y_1 = NULL,a_2 = NULL;
  t = term_b_10;
  y_1 = t;
  t = term_d_10;
  a_2 = t;
  t = term_e_10;
  t = m_6(y_1, a_2, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm f_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_10;
      }
  }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = debug_1_0(r_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_h_10;
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm q_1 = NULL,s_1 = NULL,u_1 = NULL,w_1 = NULL;
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    ATerm k_2 = NULL;
    k_2 = t;
    {
      ATerm k_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_2 = NULL,m_2 = NULL;
          t = if_verbose3_1_0(n_0, t);
          t = term_b_10;
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym_Tool_1, k_2);
          m_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATmakeAppl(sym_Tool_1, k_2));
          t = m_6(l_2, m_2, t);
          if(((q_1 != NULL) && (q_1 != t)))
            _fail(t);
          else
            q_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, k_2), q_1);
          {
            ATerm n_10 = t;
            int u_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = version_query_0_0(t);
                LocalPopChoice(u_10);
              }
            else
              {
                t = n_10;
                if(match_cons(t, sym__2))
                  {
                    ATerm w_10 = ATgetArgument(t, 0);
                    ATerm a_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, k_2), q_1);
                t = k_5(k_2, q_1, t);
              }
          }
          LocalPopChoice(l_10);
        }
      else
        {
          t = k_10;
          {
            ATerm s_2 = NULL,t_2 = NULL;
            t = term_h_11;
            s_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_11), term_i_11), k_2);
            t_2 = t;
            t = SSL_print(s_2, t_2);
            t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_11), term_i_11), k_2));
          }
        }
    }
    return(t);
  }
  t = term_k_9;
  u_1 = t;
  t = term_n_11;
  w_1 = t;
  t = term_q_11;
  t = m_6(u_1, w_1, t);
  s_1 = t;
  t = repeat_2_0(b_0, _id, t);
  t = s_1;
  t = map_1_0(c_0, t);
  return(t);
}
static ATerm k_5 (ATerm v_68, ATerm b_823, ATerm t)
{
  static ATerm b_1 (ATerm t);
  static ATerm b_1 (ATerm t)
  {
    ATerm v_2 = NULL,w_2 = NULL;
    if(match_cons(t, sym__2))
      {
        v_2 = ATgetArgument(t, 0);
        w_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm u_11 = t;
      int w_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,c_3 = NULL;
          t = term_k_9;
          a_3 = t;
          t = term_x_11;
          c_3 = t;
          t = term_y_11;
          t = m_6(a_3, c_3, t);
          t = term_h_11;
          y_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_l_11), w_2);
          z_2 = t;
          t = SSL_print(y_2, z_2);
          t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATinsert(ATinsert(ATempty, term_l_11), w_2));
          LocalPopChoice(w_11);
        }
      else
        {
          t = u_11;
          {
            ATerm g_3 = NULL,h_3 = NULL;
            t = term_h_11;
            g_3 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), w_2), term_f_12), v_2), term_d_12), v_68);
            h_3 = t;
            t = SSL_print(g_3, h_3);
            t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), w_2), term_f_12), v_2), term_d_12), v_68));
          }
        }
    }
    return(t);
  }
  t = b_823;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL;
  t = term_b_10;
  v_3 = t;
  t = term_d_10;
  w_3 = t;
  t = term_e_10;
  t = m_6(v_3, w_3, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm g_12 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_12;
      }
  }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  d_5 = t;
  if(match_cons(t, sym__2))
    {
      b_5 = ATgetArgument(t, 0);
      c_5 = ATgetArgument(t, 1);
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 = NULL,h_0 = NULL,i_0 = NULL,s_0 = NULL,w_0 = NULL,y_0 = NULL,g_4 = NULL,d_4 = NULL;
            t = SSLgetAnnotations(d_5);
            i_0 = t;
            t = b_5;
            if(match_cons(t, sym_Tool_1))
              {
                w_0 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_5);
            s_0 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, w_0);
            d_4 = t;
            t = SSLsetAnnotations(d_4, s_0);
            y_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_0, c_5);
            g_4 = t;
            t = SSLsetAnnotations(g_4, i_0);
            if(match_cons(t, sym__2))
              {
                ATerm k_12 = ATgetArgument(t, 0);
                if(match_cons(k_12, sym_Tool_1))
                  {
                    e_0 = ATgetArgument(k_12, 0);
                  }
                else
                  _fail(t);
                h_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_5(e_0, h_0, t);
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            t = d_5;
          }
      }
    }
  else
    {
      t = d_5;
    }
  return(t);
}
ATerm all_query_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL;
  t = term_k_9;
  s_3 = t;
  t = term_l_12;
  t_3 = t;
  t = term_o_12;
  t = m_6(s_3, t_3, t);
  t = repeat_2_0(f_1, _id, t);
  t = term_b_10;
  t = table_getlist_0_0(t);
  t = map_1_0(h_1, t);
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm a_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,u_6 = NULL;
  t = term_k_9;
  p_6 = t;
  t = term_p_12;
  u_6 = t;
  t = term_q_12;
  t = m_6(p_6, u_6, t);
  t = xtc_location_0_0(t);
  a_6 = t;
  t = term_h_11;
  n_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_11), a_6), term_r_12);
  o_6 = t;
  t = SSL_print(n_6, o_6);
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_11), a_6), term_r_12));
  return(t);
}
static ATerm l_5 (ATerm t_25, ATerm u_25, ATerm t)
{
  ATerm z_6 = NULL;
  t = SSL_write_term_to_stream_baf(t_25, u_25);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_6);
  return(t);
}
static ATerm m_5 (ATerm f_92 (ATerm), ATerm l_235, ATerm d_26, ATerm t)
{
  ATerm a_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_235, term_s_12);
  t = i_6(t);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_7, d_26);
  t = f_92(t);
  t = fclose_0_0(t);
  t = d_26;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  o_7 = t;
  t = term_t_12;
  p_7 = t;
  t = (ATerm) ATinsert(ATempty, term_u_12);
  q_7 = t;
  t = SSL_printnl(p_7, q_7);
  t = o_7;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm c_8 = NULL,f_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_12 = ATgetArgument(t, 0);
      if(match_cons(v_12, sym_Stream_1))
        {
          c_8 = ATgetArgument(v_12, 0);
        }
      else
        _fail(t);
      f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(c_8, f_8, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  t = if_verbose1_1_0(l_1, t);
  t = term_k_9;
  e_7 = t;
  t = term_b_13;
  f_7 = t;
  t = term_c_13;
  t = m_6(e_7, f_7, t);
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_7 = NULL,u_7 = NULL;
            r_7 = t;
            t = (ATerm) ATinsert(ATempty, term_h_13);
            u_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_7, (ATerm) ATinsert(ATempty, term_h_13));
            t = j_6(r_7, u_7, t);
            LocalPopChoice(g_13);
            {
              ATerm v_7 = NULL,w_7 = NULL;
              v_7 = t;
              t = (ATerm) ATinsert(ATempty, term_i_13);
              w_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_7, (ATerm) ATinsert(ATempty, term_i_13));
              t = j_6(v_7, w_7, t);
            }
          }
        else
          {
            t = f_13;
          }
        LocalPopChoice(e_13);
        {
          ATerm y_7 = NULL,b_8 = NULL;
          b_8 = t;
          t = term_b_10;
          t = table_getlist_0_0(t);
          y_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_8, y_7);
          t = m_5(m_1, b_8, y_7, t);
        }
      }
    else
      {
        t = d_13;
        t = debug_1_0(n_1, t);
        _fail(t);
      }
  }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_j_13;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_k_13;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
  t = term_k_9;
  n_8 = t;
  t = term_l_13;
  o_8 = t;
  t = term_m_13;
  t = m_6(n_8, o_8, t);
  t = if_verbose2_1_0(o_1, t);
  t = term_k_9;
  j_8 = t;
  t = term_l_13;
  m_8 = t;
  t = term_m_13;
  t = m_6(j_8, m_8, t);
  g_8 = t;
  t = if_verbose5_1_0(r_1, t);
  t = term_b_10;
  h_8 = t;
  t = term_d_10;
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_10, term_d_10, g_8);
  t = n_5(h_8, i_8, g_8, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      i_9 = ATgetArgument(t, 0);
      if((i_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm r_47, ATerm s_47, ATerm q_47, ATerm t)
{
  ATerm q_8 = NULL,t_8 = NULL,y_8 = NULL,z_8 = NULL;
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_13 = ATgetArgument(t, 0);
            ATerm q_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
        t = m_6(r_47, s_47, t);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        t = (ATerm) ATempty;
      }
  }
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_47, y_8);
  t = c_6(x_1, q_47, y_8, t);
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_47, s_47, t_8);
  t = lookup_table_0_1(r_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(s_47, t_8, z_8, t);
  t = q_8;
  return(t);
}
ATerm xtc_register_0_3 (ATerm q_68, ATerm r_68, ATerm s_68, ATerm t)
{
  ATerm m_9 = NULL;
  m_9 = t;
  t = xtc_load_0_0(t);
  t = q_68;
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_68;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_13 = ATgetFirst((ATermList) t);
                ATerm u_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_68;
          }
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        t = (ATerm) ATinsert(ATempty, q_68);
      }
  }
  {
    static ATerm b_2 (ATerm t);
    static ATerm b_2 (ATerm t)
    {
      ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,c_10 = NULL;
      w_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_9), term_v_13), s_68);
      c_10 = t;
      t = SSL_concat_strings(c_10);
      v_9 = t;
      t = term_b_10;
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym_Tool_1, w_9);
      y_9 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_68, v_9));
      z_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_10, (ATerm)ATmakeAppl(sym_Tool_1, w_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_68, v_9)));
      t = n_5(x_9, y_9, z_9, t);
      return(t);
    }
    t = map_1_0(b_2, t);
  }
  t = m_9;
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_116 (ATerm), ATerm t)
{
  ATerm g_10 = NULL;
  g_10 = t;
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_10 = NULL,j_10 = NULL,m_10 = NULL;
        t = term_k_9;
        j_10 = t;
        t = term_r_9;
        m_10 = t;
        t = term_t_9;
        t = m_6(j_10, m_10, t);
        i_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_10, term_y_13);
        t = geq_0_0(t);
        t = g_10;
        t = t_116(t);
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        t = g_10;
      }
  }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,j_11 = NULL;
  f_11 = t;
  t = term_t_12;
  g_11 = t;
  t = (ATerm) ATinsert(ATempty, term_z_13);
  j_11 = t;
  t = SSL_printnl(g_11, j_11);
  t = f_11;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,t_10 = NULL,v_10 = NULL,x_10 = NULL,z_10 = NULL,b_11 = NULL,c_11 = NULL;
  t = term_k_9;
  b_11 = t;
  t = term_n_11;
  c_11 = t;
  t = term_q_11;
  t = m_6(b_11, c_11, t);
  o_10 = t;
  t = if_verbose1_1_0(c_2, t);
  t = if_verbose2_1_0(d_2, t);
  t = term_k_9;
  x_10 = t;
  t = term_l_9;
  z_10 = t;
  t = term_n_9;
  t = m_6(x_10, z_10, t);
  p_10 = t;
  t = if_verbose2_1_0(f_2, t);
  t = term_k_9;
  t_10 = t;
  t = term_x_11;
  v_10 = t;
  t = term_y_11;
  t = m_6(t_10, v_10, t);
  q_10 = t;
  t = if_verbose2_1_0(h_2, t);
  t = o_10;
  t = xtc_register_0_3(o_10, p_10, q_10, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_116 (ATerm), ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
        t = term_k_9;
        s_11 = t;
        t = term_r_9;
        t_11 = t;
        t = term_t_9;
        t = m_6(s_11, t_11, t);
        r_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_11, term_h_14);
        t = geq_0_0(t);
        t = p_11;
        t = u_116(t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = p_11;
      }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,e_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_12 = NULL,m_12 = NULL,n_12 = NULL;
      t = term_j_14;
      t = q_0(t);
      j_12 = t;
      t = term_l_14;
      m_12 = t;
      t = term_m_14;
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_14, term_m_14, j_12);
      t = r_5(m_12, n_12, j_12, t);
      _fail(t);
    }
  else
    {
      ATerm w_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_11 = ATgetFirst((ATermList) t);
          a_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_12 = ATgetFirst((ATermList) t);
          e_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_11;
      t = o_0(t);
      t = b_12;
      t = p_0(t);
      w_12 = t;
      t = (ATerm) ATinsert(CheckATermList(e_12), w_12);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  static ATerm k_14 (ATerm t);
  static ATerm k_14 (ATerm t)
  {
    ATerm f_14 = NULL,g_14 = NULL,i_14 = NULL;
    i_14 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_14 = ATgetFirst((ATermList) t);
        g_14 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_1 = NULL,z_1 = NULL,j_4 = NULL;
          t = SSLgetAnnotations(i_14);
          t_1 = t;
          t = g_14;
          t = k_14(t);
          z_1 = t;
          t = (ATerm) ATinsert(CheckATermList(z_1), f_14);
          j_4 = t;
          t = SSLsetAnnotations(j_4, t_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_14;
        t = f_93(t);
      }
    return(t);
  }
  t = k_14(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  y_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_12;
    }
  else
    {
      static ATerm o_2 (ATerm t);
      static ATerm o_2 (ATerm t)
      {
        t = not_null(a_13);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_12 = ATgetFirst((ATermList) t);
          if(((a_13 != NULL) && (a_13 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_12;
      t = at_end_1_0(o_2, t);
    }
  return(t);
}
static ATerm o_15 (ATerm o_14, ATerm t)
{
  ATerm r_14 = NULL;
  t = SSL_explode_term(o_14);
  if(match_cons(t, sym__2))
    {
      ATerm n_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_14;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_14 = NULL,b_15 = NULL,d_15 = NULL;
  d_15 = t;
  if(match_cons(t, sym__2))
    {
      x_14 = ATgetArgument(t, 0);
      b_15 = ATgetArgument(t, 1);
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_2 (ATerm t);
            static ATerm p_2 (ATerm t)
            {
              t = b_15;
              return(t);
            }
            t = x_14;
            t = at_end_1_0(p_2, t);
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            t = o_15(d_15, t);
          }
      }
    }
  else
    {
      t = o_15(d_15, t);
    }
  return(t);
}
static ATerm o_5 (ATerm m_66, ATerm l_66, ATerm t)
{
  ATerm q_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
  t = m_66;
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_15 = NULL;
        t = term_k_9;
        z_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_9, m_66);
        t = m_6(z_15, m_66, t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = (ATerm) ATempty;
      }
  }
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_66, s_15);
  t = conc_0_0(t);
  q_15 = t;
  t = term_k_9;
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, m_66, q_15);
  t = lookup_table_0_1(t_15, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(m_66, q_15, u_15, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, m_66, q_15);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  if(match_string(t, "-r"))
    {
      t = y_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = y_16;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  z_16 = t;
  t = term_b_13;
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_13, z_16);
  t = t_5(a_17, z_16, t);
  t = z_16;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_u_14;
  return(t);
}
static ATerm b_3 (ATerm t)
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
static ATerm i_3 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  t = term_l_13;
  d_17 = t;
  t = (ATerm) ATinsert(ATempty, c_17);
  e_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_13, (ATerm) ATinsert(ATempty, c_17));
  t = o_5(d_17, e_17, t);
  t = c_17;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_v_14;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm i_17 = NULL;
  i_17 = t;
  if(match_string(t, "r"))
    {
      t = i_17;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = i_17;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = i_17;
        }
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm j_17 = NULL,n_17 = NULL;
  j_17 = t;
  t = term_w_14;
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_14, j_17);
  t = t_5(n_17, j_17, t);
  t = j_17;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_y_14;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm o_17 = NULL;
  o_17 = t;
  if(match_string(t, "-t"))
    {
      t = o_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = o_17;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  r_17 = t;
  t = term_n_11;
  s_17 = t;
  t = (ATerm) ATinsert(ATempty, r_17);
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATempty, r_17));
  t = o_5(s_17, t_17, t);
  t = r_17;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_z_14;
  return(t);
}
static ATerm u_3 (ATerm t)
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
static ATerm x_3 (ATerm t)
{
  ATerm v_17 = NULL,z_17 = NULL;
  v_17 = t;
  t = term_x_11;
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, v_17);
  t = t_5(z_17, v_17, t);
  t = v_17;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_a_15;
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
static ATerm b_4 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  t = term_l_9;
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, b_18);
  t = t_5(c_18, b_18, t);
  t = b_18;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_c_15;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm d_18 = NULL;
  d_18 = t;
  if(match_string(t, "q"))
    {
      t = d_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = d_18;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm g_18 = NULL,i_18 = NULL;
  g_18 = t;
  t = term_e_15;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_15, g_18);
  t = t_5(i_18, g_18, t);
  t = g_18;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_f_15;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm k_18 = NULL;
  k_18 = t;
  if(match_string(t, "-a"))
    {
      t = k_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = k_18;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  t = term_l_12;
  m_18 = t;
  t = term_j_14;
  n_18 = t;
  t = term_g_15;
  t = t_5(m_18, n_18, t);
  t = l_18;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_h_15;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm o_18 = NULL;
  o_18 = t;
  if(match_string(t, "-L"))
    {
      t = o_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = o_18;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm r_18 = NULL,u_18 = NULL,v_18 = NULL;
  r_18 = t;
  t = term_x_11;
  u_18 = t;
  t = term_j_14;
  v_18 = t;
  t = term_i_15;
  t = t_5(u_18, v_18, t);
  t = r_18;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  if(match_string(t, "-R"))
    {
      t = w_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = w_18;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm x_18 = NULL,z_18 = NULL,a_19 = NULL;
  x_18 = t;
  t = term_p_12;
  z_18 = t;
  t = term_j_14;
  a_19 = t;
  t = term_k_15;
  t = t_5(z_18, a_19, t);
  t = x_18;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_l_15;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm b_19 = NULL,g_19 = NULL,m_19 = NULL;
  b_19 = t;
  t = SSL_string_to_int(b_19);
  g_19 = t;
  t = term_r_9;
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, g_19);
  t = t_5(m_19, g_19, t);
  t = b_19;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm n_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(r_2, u_2, x_2, t);
      LocalPopChoice(p_15);
    }
  else
    {
      t = n_15;
      {
        ATerm r_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_3, i_3, j_3, t);
            LocalPopChoice(v_15);
          }
        else
          {
            t = r_15;
            {
              ATerm w_15 = t;
              int x_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(k_3, l_3, n_3, t);
                  LocalPopChoice(x_15);
                }
              else
                {
                  t = w_15;
                  {
                    ATerm y_15 = t;
                    int a_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(o_3, q_3, r_3, t);
                        LocalPopChoice(a_16);
                      }
                    else
                      {
                        t = y_15;
                        {
                          ATerm b_16 = t;
                          int c_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(u_3, x_3, z_3, t);
                              LocalPopChoice(c_16);
                            }
                          else
                            {
                              t = b_16;
                              {
                                ATerm d_16 = t;
                                int e_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(a_4, b_4, c_4, t);
                                    LocalPopChoice(e_16);
                                  }
                                else
                                  {
                                    t = d_16;
                                    {
                                      ATerm f_16 = t;
                                      int g_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(e_4, h_4, i_4, t);
                                          LocalPopChoice(g_16);
                                        }
                                      else
                                        {
                                          t = f_16;
                                          {
                                            ATerm h_16 = t;
                                            int i_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(k_4, l_4, n_4, t);
                                                LocalPopChoice(i_16);
                                              }
                                            else
                                              {
                                                t = h_16;
                                                {
                                                  ATerm j_16 = t;
                                                  int k_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(p_4, q_4, r_4, t);
                                                      LocalPopChoice(k_16);
                                                    }
                                                  else
                                                    {
                                                      t = j_16;
                                                      {
                                                        ATerm l_16 = t;
                                                        int m_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(s_4, t_4, u_4, t);
                                                            LocalPopChoice(m_16);
                                                          }
                                                        else
                                                          {
                                                            t = l_16;
                                                            t = ArgOption_3_0(x_4, y_4, z_4, t);
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
static ATerm p_5 (ATerm w_51, ATerm x_51, ATerm t)
{
  ATerm n_19 = NULL;
  t = SSL_hashtable_remove(x_51, w_51);
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_19);
  return(t);
}
static ATerm q_5 (ATerm b_52, ATerm t)
{
  ATerm q_19 = NULL;
  t = SSL_hashtable_destroy(b_52);
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_19);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,x_19 = NULL,y_19 = NULL;
  s_19 = t;
  t = table_hashtable_0_0(t);
  t_19 = t;
  t = lookup_table_0_1(s_19, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(y_19, t);
  t = t_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(s_19, x_19, t);
  t = s_19;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm a_20 = NULL,d_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_20 = ATgetFirst((ATermList) t);
      d_20 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_20 = NULL,l_20 = NULL;
        static ATerm a_5 (ATerm t);
        static ATerm a_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_20)), not_null(l_20));
          return(t);
        }
        t = d_20;
        t = l_0(t);
        if(((i_20 != NULL) && (i_20 != t)))
          _fail(t);
        else
          i_20 = t;
        t = a_20;
        t = j_0(t);
        if(((l_20 != NULL) && (l_20 != t)))
          _fail(t);
        else
          l_20 = t;
        t = d_20;
        t = reverse_acc_2_0(j_0, a_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_14;
      t = l_0(t);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,m_4 = NULL;
  g_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_21);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_21);
  m_4 = t;
  t = SSLsetAnnotations(m_4, e_21);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_21), term_n_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_21 = NULL,d_21 = NULL;
      t = term_k_9;
      c_21 = t;
      t = term_q_16;
      d_21 = t;
      t = term_r_16;
      t = m_6(c_21, d_21, t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      t = fetch_1_0(e_5, t);
    }
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_16), term_v_16), term_u_16);
        t = echo_0_0(t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
      }
  }
  t = term_x_16;
  t = echo_0_0(t);
  t = term_l_14;
  z_20 = t;
  t = term_m_14;
  a_21 = t;
  t = term_f_17;
  t = m_6(z_20, a_21, t);
  t = reverse_acc_2_0(_id, f_5, t);
  t = map_1_0(h_5, t);
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_17), term_k_17), term_l_11);
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
  ATerm t_21 = NULL,u_21 = NULL,w_21 = NULL;
  t_21 = t;
  {
    ATerm m_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_21;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_17 = ATgetFirst((ATermList) t);
                ATerm w_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_21;
          }
        LocalPopChoice(p_17);
      }
    else
      {
        t = m_17;
        t = (ATerm) ATinsert(ATempty, t_21);
      }
  }
  u_21 = t;
  t = term_h_11;
  w_21 = t;
  t = SSL_printnl(w_21, u_21);
  t = t_21;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  t = term_k_9;
  d_22 = t;
  t = term_q_16;
  e_22 = t;
  t = term_r_16;
  t = m_6(d_22, e_22, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm f_22 = NULL,i_22 = NULL;
  t = term_x_17;
  f_22 = t;
  t = term_j_14;
  i_22 = t;
  t = term_y_17;
  t = t_5(f_22, i_22, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_e_18;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm j_22 = NULL,n_22 = NULL,o_22 = NULL,q_22 = NULL;
  t = term_x_17;
  o_22 = t;
  t = term_j_14;
  q_22 = t;
  t = term_y_17;
  t = t_5(o_22, q_22, t);
  t = term_f_18;
  j_22 = t;
  t = term_j_14;
  n_22 = t;
  t = term_h_18;
  t = t_5(j_22, n_22, t);
  t = term_j_18;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_p_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_5, j_5, s_5, t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = q_18;
      t = Option_3_0(u_5, y_5, q_6, t);
    }
  return(t);
}
static ATerm t_5 (ATerm g_66, ATerm h_66, ATerm t)
{
  ATerm v_22 = NULL,x_22 = NULL;
  t = term_k_9;
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, g_66, h_66);
  t = lookup_table_0_1(v_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(g_66, h_66, x_22, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, g_66, h_66);
  return(t);
}
static ATerm r_5 (ATerm z_46, ATerm a_47, ATerm y_46, ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_46, a_47);
  {
    ATerm t_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            ATerm d_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_46, a_47);
        t = m_6(z_46, a_47, t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = t_18;
        t = (ATerm) ATempty;
      }
  }
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_46, a_47, (ATerm) ATinsert(CheckATermList(b_23), y_46));
  t = lookup_table_0_1(z_46, t);
  k_23 = t;
  t = (ATerm) ATinsert(CheckATermList(b_23), y_46);
  i_23 = t;
  t = k_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(a_47, i_23, j_23, t);
  t = a_23;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
      t = term_j_14;
      t = g_0(t);
      s_23 = t;
      t = term_l_14;
      t_23 = t;
      t = term_m_14;
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_14, term_m_14, s_23);
      t = r_5(t_23, u_23, s_23, t);
      _fail(t);
    }
  else
    {
      ATerm x_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_23 = ATgetFirst((ATermList) t);
          r_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_23;
      t = d_0(t);
      t = term_j_14;
      t = f_0(t);
      x_23 = t;
      t = (ATerm) ATinsert(CheckATermList(r_23), x_23);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,f_24 = NULL,v_4 = NULL;
  f_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_23 = ATgetFirst((ATermList) t);
      a_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_24);
  y_23 = t;
  t = z_23;
  t = x_73(t);
  b_24 = t;
  t = a_24;
  t = y_73(t);
  c_24 = t;
  t = (ATerm) ATinsert(CheckATermList(c_24), b_24);
  v_4 = t;
  t = SSLsetAnnotations(v_4, y_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_111 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,r_24 = NULL,s_24 = NULL,z_5 = NULL;
  m_24 = t;
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_19;
        t = x_111(t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
      }
  }
  t = m_24;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_24 = ATgetFirst((ATermList) t);
      p_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_24);
  n_24 = t;
  t = term_q_16;
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_16, o_24);
  t = t_5(s_24, o_24, t);
  t = p_24;
  {
    static ATerm g_25 (ATerm t);
    static ATerm g_25 (ATerm t)
    {
      ATerm i_19 = t;
      int j_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_24 = NULL;
              x_24 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_24;
              LocalPopChoice(l_19);
            }
          else
            {
              t = k_19;
              t = x_111(t);
              t = Cons_2_0(_id, g_25, t);
            }
          LocalPopChoice(j_19);
        }
      else
        {
          t = i_19;
          {
            ATerm a_25 = NULL,b_25 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_25 = ATgetFirst((ATermList) t);
                b_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_25), (ATerm) ATmakeAppl(sym_Undefined_1, a_25));
          }
        }
      return(t);
    }
    t = g_25(t);
  }
  r_24 = t;
  t = (ATerm) ATinsert(CheckATermList(r_24), (ATerm) ATmakeAppl(sym_Program_1, o_24));
  z_5 = t;
  t = SSLsetAnnotations(z_5, n_24);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm x_25 = NULL;
  x_25 = t;
  if(match_string(t, "--help"))
    {
      t = x_25;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_25;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_25;
        }
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm y_25 = NULL,a_26 = NULL;
  t = term_o_19;
  y_25 = t;
  t = term_j_14;
  a_26 = t;
  t = term_p_19;
  t = t_5(y_25, a_26, t);
  t = term_r_19;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_111 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,v_25 = NULL,w_25 = NULL;
  p_25 = t;
  t = term_l_14;
  q_25 = t;
  t = term_v_19;
  t = lookup_table_0_1(q_25, t);
  w_25 = t;
  t = term_m_14;
  r_25 = t;
  t = (ATerm) ATempty;
  s_25 = t;
  t = w_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(r_25, s_25, v_25, t);
  t = p_25;
  {
    static ATerm r_6 (ATerm t);
    static ATerm r_6 (ATerm t)
    {
      ATerm w_19 = t;
      int z_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_111(t);
          LocalPopChoice(z_19);
        }
      else
        {
          t = w_19;
          {
            ATerm b_20 = t;
            int c_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_6, t_6, v_6, t);
                LocalPopChoice(c_20);
              }
            else
              {
                t = b_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_6, t);
  }
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL;
        u_26 = t;
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL;
              t = u_26;
              {
                ATerm j_20 = t;
                int k_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_2 = NULL,q_2 = NULL;
                    t = term_k_9;
                    j_2 = t;
                    t = term_o_19;
                    q_2 = t;
                    t = term_m_20;
                    t = m_6(j_2, q_2, t);
                    LocalPopChoice(k_20);
                  }
                else
                  {
                    t = j_20;
                    t = fetch_1_0(w_6, t);
                  }
              }
              t = u_26;
              t = default_system_usage_0_0(t);
              t = term_n_20;
              i_2 = t;
              t = SSL_exit(i_2);
              LocalPopChoice(h_20);
            }
          else
            {
              t = g_20;
              {
                ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
                t = term_k_9;
                e_3 = t;
                t = term_x_17;
                f_3 = t;
                t = term_o_20;
                t = m_6(e_3, f_3, t);
                t = u_26;
                t = default_system_about_0_0(t);
                t = term_n_20;
                d_3 = t;
                t = SSL_exit(d_3);
              }
            }
        }
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
              static ATerm x_6 (ATerm t);
              static ATerm x_6 (ATerm t)
              {
                ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,y_10 = NULL;
                a_27 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_26 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_27);
                y_26 = t;
                t = z_26;
                if(((n_25 != NULL) && (n_25 != t)))
                  _fail(t);
                else
                  n_25 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_26);
                y_10 = t;
                t = SSLsetAnnotations(y_10, y_26);
                return(t);
              }
              t = fetch_1_0(x_6, t);
              t = term_t_12;
              w_26 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_25)), term_r_20);
              x_26 = t;
              t = SSL_printnl(w_26, x_26);
              t = (ATerm) ATmakeAppl(sym__2, term_t_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_25)), term_r_20));
              t = default_system_usage_0_0(t);
              t = term_y_13;
              v_26 = t;
              t = SSL_exit(v_26);
              LocalPopChoice(q_20);
            }
          else
            {
              t = p_20;
            }
        }
      }
  }
  o_25 = t;
  t = term_l_14;
  t = table_destroy_0_0(t);
  t = o_25;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = debug_1_0(c_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_s_20;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_27 = NULL;
      t = parse_options_1_0(xtc_options_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(y_6, t);
      t = xtc_read_0_0(t);
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_20 = t;
            int b_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_27 = NULL,k_27 = NULL;
                t = term_k_9;
                j_27 = t;
                t = term_w_14;
                k_27 = t;
                t = term_h_21;
                t = m_6(j_27, k_27, t);
                t = xtc_register_0_0(t);
                LocalPopChoice(b_21);
              }
            else
              {
                t = y_20;
                {
                  ATerm n_27 = NULL,o_27 = NULL;
                  t = term_k_9;
                  n_27 = t;
                  t = term_l_13;
                  o_27 = t;
                  t = term_m_13;
                  t = m_6(n_27, o_27, t);
                  t = register_import_0_0(t);
                }
              }
            t = xtc_store_0_0(t);
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            {
              ATerm p_27 = NULL,q_27 = NULL;
              t = term_k_9;
              p_27 = t;
              t = term_e_15;
              q_27 = t;
              t = term_i_21;
              t = m_6(p_27, q_27, t);
              {
                ATerm j_21 = t;
                int k_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = repository_query_0_0(t);
                    LocalPopChoice(k_21);
                  }
                else
                  {
                    t = j_21;
                    {
                      ATerm l_21 = t;
                      int n_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = all_query_0_0(t);
                          LocalPopChoice(n_21);
                        }
                      else
                        {
                          t = l_21;
                          t = tool_query_0_0(t);
                        }
                    }
                  }
              }
            }
          }
      }
      t = term_n_20;
      g_27 = t;
      t = SSL_exit(g_27);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      t = debug_1_0(d_7, t);
    }
  return(t);
}
static ATerm v_5 (ATerm l_69, ATerm m_69, ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,x_27 = NULL;
  t = m_69;
  t = map_1_0(xtc_find_0_0, t);
  r_27 = t;
  t = term_h_11;
  x_27 = t;
  t = SSL_print(x_27, r_27);
  t = term_h_11;
  t_27 = t;
  t = (ATerm) ATinsert(ATempty, term_l_11);
  u_27 = t;
  t = SSL_print(t_27, u_27);
  t = term_n_20;
  s_27 = t;
  t = SSL_exit(s_27);
  return(t);
}
static ATerm w_5 (ATerm c_61, ATerm d_61, ATerm t)
{
  t = SSL_execvp(c_61, d_61);
  return(t);
}
ATerm debug_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,e_28 = NULL;
  y_27 = t;
  t = d_92(t);
  z_27 = t;
  t = term_t_12;
  a_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_27), z_27);
  e_28 = t;
  t = SSL_printnl(a_28, e_28);
  t = y_27;
  return(t);
}
static ATerm x_5 (ATerm y_51, ATerm t)
{
  t = SSL_hashtable_keys(y_51);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  static ATerm h_7 (ATerm t);
  static ATerm h_7 (ATerm t)
  {
    ATerm k_28 = NULL,n_28 = NULL;
    k_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), k_28);
    t = m_6(not_null(f_28), k_28, t);
    n_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_28, n_28);
    return(t);
  }
  if(((f_28 != NULL) && (f_28 != t)))
    _fail(t);
  else
    f_28 = t;
  t = lookup_table_0_1(f_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(g_28, t);
  t = map_1_0(h_7, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_116 (ATerm), ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_28 = NULL,v_28 = NULL,a_29 = NULL;
        t = term_k_9;
        v_28 = t;
        t = term_r_9;
        a_29 = t;
        t = term_t_9;
        t = m_6(v_28, a_29, t);
        t_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_28, term_q_21);
        t = geq_0_0(t);
        t = p_28;
        t = x_116(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = p_28;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm y_92 (ATerm), ATerm t)
{
  static ATerm p_30 (ATerm t);
  static ATerm p_30 (ATerm t)
  {
    ATerm l_30 = NULL,n_30 = NULL,o_30 = NULL;
    l_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_30 = ATgetFirst((ATermList) t);
        o_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_3 = NULL,p_3 = NULL,d_11 = NULL;
          t = SSLgetAnnotations(l_30);
          m_3 = t;
          t = n_30;
          t = y_92(t);
          p_3 = t;
          t = (ATerm) ATinsert(CheckATermList(o_30), p_3);
          d_11 = t;
          t = SSLsetAnnotations(d_11, m_3);
          LocalPopChoice(s_21);
        }
      else
        {
          t = r_21;
          {
            ATerm f_4 = NULL,o_4 = NULL,e_11 = NULL;
            t = SSLgetAnnotations(l_30);
            f_4 = t;
            t = o_30;
            t = p_30(t);
            o_4 = t;
            t = (ATerm) ATinsert(CheckATermList(o_4), n_30);
            e_11 = t;
            t = SSLsetAnnotations(e_11, f_4);
          }
        }
    }
    return(t);
  }
  t = p_30(t);
  return(t);
}
static ATerm m_6 (ATerm s_48, ATerm t_48, ATerm t)
{
  ATerm c_29 = NULL;
  t = lookup_table_0_1(s_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(t_48, c_29, t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_116 (ATerm), ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  {
    ATerm v_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_31 = NULL,b_31 = NULL,e_31 = NULL;
        t = term_k_9;
        b_31 = t;
        t = term_r_9;
        e_31 = t;
        t = term_t_9;
        t = m_6(b_31, e_31, t);
        a_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_31, term_y_21);
        t = geq_0_0(t);
        t = y_30;
        t = w_116(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = v_21;
        t = y_30;
      }
  }
  return(t);
}
static ATerm l_6 (ATerm r_51, ATerm s_51, ATerm t_51, ATerm t)
{
  ATerm g_31 = NULL;
  t = SSL_hashtable_put(t_51, r_51, s_51);
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_31);
  return(t);
}
static ATerm k_6 (ATerm u_51, ATerm v_51, ATerm t)
{
  t = SSL_hashtable_get(v_51, u_51);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm z_51, ATerm a_52, ATerm t)
{
  ATerm h_31 = NULL;
  t = SSL_hashtable_create(z_51, a_52);
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_31);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,r_31 = NULL,s_31 = NULL;
  i_31 = t;
  t = term_z_21;
  r_31 = t;
  t = term_a_22;
  s_31 = t;
  t = i_31;
  t = new_hashtable_0_2(r_31, s_31, t);
  j_31 = t;
  t = i_31;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(i_31, j_31, k_31, t);
  t = i_31;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm t_31 = NULL;
  t = SSL_table_hashtable();
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_31);
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_48, ATerm t)
{
  ATerm w_32 = NULL;
  t = table_hashtable_0_0(t);
  w_32 = t;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_4 = NULL;
        t = w_32;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_6(l_48, w_4, t);
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        {
          ATerm g_5 = NULL;
          t = l_48;
          t = table_create_0_0(t);
          t = w_32;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_6(l_48, g_5, t);
        }
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  if(match_cons(t, sym__2))
    {
      q_33 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_33;
        if((q_33 != t))
          {
            _fail(t);
          }
        t = p_33;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = (ATerm) ATmakeAppl(sym__2, q_33, r_33);
        {
          ATerm k_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_33, r_33);
              LocalPopChoice(l_22);
            }
          else
            {
              t = k_22;
              t = SSL_gtr(q_33, r_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_33, r_33);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_116 (ATerm), ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  {
    ATerm m_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
        t = term_k_9;
        y_33 = t;
        t = term_r_9;
        z_33 = t;
        t = term_t_9;
        t = m_6(y_33, z_33, t);
        x_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_33, term_r_22);
        t = geq_0_0(t);
        t = v_33;
        t = y_116(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = m_22;
        t = v_33;
      }
  }
  return(t);
}
static ATerm b_6 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm g_32, ATerm f_32, ATerm t)
{
  t = d_97(t);
  {
    static ATerm i_7 (ATerm t);
    static ATerm i_7 (ATerm t)
    {
      ATerm b_34 = NULL;
      b_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_32, b_34);
      t = c_97(t);
      return(t);
    }
    t = fetch_1_0(i_7, t);
  }
  t = f_32;
  return(t);
}
static ATerm c_6 (ATerm z_96 (ATerm), ATerm c_32, ATerm b_32, ATerm t)
{
  static ATerm r_34 (ATerm t);
  static ATerm r_34 (ATerm t)
  {
    ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
    m_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_32;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_34 = ATgetFirst((ATermList) t);
            o_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_34;
              {
                static ATerm j_7 (ATerm t);
                static ATerm j_7 (ATerm t)
                {
                  t = b_32;
                  return(t);
                }
                t = b_6(z_96, j_7, n_34, o_34, t);
              }
              t = r_34(t);
              LocalPopChoice(t_22);
            }
          else
            {
              t = s_22;
              {
                ATerm b_7 = NULL,g_7 = NULL,k_11 = NULL;
                t = SSLgetAnnotations(m_34);
                b_7 = t;
                t = o_34;
                t = r_34(t);
                g_7 = t;
                t = (ATerm) ATinsert(CheckATermList(g_7), n_34);
                k_11 = t;
                t = SSLsetAnnotations(k_11, b_7);
              }
            }
        }
      }
    return(t);
  }
  t = c_32;
  t = r_34(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm g_35 = NULL;
  if(match_cons(t, sym__2))
    {
      g_35 = ATgetArgument(t, 0);
      if((g_35 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_6 (ATerm w_47, ATerm x_47, ATerm y_47, ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,b_35 = NULL;
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_47, x_47);
  {
    ATerm u_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_22 = ATgetArgument(t, 0);
            ATerm z_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_47, x_47);
        t = m_6(w_47, x_47, t);
        LocalPopChoice(w_22);
      }
    else
      {
        t = u_22;
        t = (ATerm) ATempty;
      }
  }
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_34, y_47);
  t = c_6(k_7, z_34, y_47, t);
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_47, x_47, y_34);
  t = lookup_table_0_1(w_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(x_47, y_34, b_35, t);
  t = x_34;
  return(t);
}
ATerm map_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  static ATerm x_35 (ATerm t);
  static ATerm x_35 (ATerm t)
  {
    ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
    u_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_35;
      }
    else
      {
        ATerm s_7 = NULL,a_8 = NULL,d_8 = NULL,m_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_35 = ATgetFirst((ATermList) t);
            w_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_35);
        s_7 = t;
        t = v_35;
        t = o_92(t);
        a_8 = t;
        t = w_35;
        t = x_35(t);
        d_8 = t;
        t = (ATerm) ATinsert(CheckATermList(d_8), a_8);
        m_11 = t;
        t = SSLsetAnnotations(m_11, s_7);
      }
    return(t);
  }
  t = x_35(t);
  return(t);
}
static ATerm e_6 (ATerm c_106 (ATerm), ATerm g_48, ATerm f_48, ATerm t)
{
  static ATerm l_7 (ATerm t);
  static ATerm l_7 (ATerm t)
  {
    ATerm z_35 = NULL,a_36 = NULL;
    if(match_cons(t, sym__2))
      {
        z_35 = ATgetArgument(t, 0);
        a_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, g_48, z_35, a_36);
    t = c_106(t);
    return(t);
  }
  t = f_48;
  t = map_1_0(l_7, t);
  return(t);
}
static ATerm j_6 (ATerm i_41, ATerm j_41, ATerm t)
{
  t = SSL_access(i_41, j_41);
  return(t);
}
static ATerm o_36 (ATerm i_36, ATerm t)
{
  t = SSL_fclose(i_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  m_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_36 = ATgetArgument(t, 0);
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_36);
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            t = o_36(m_36, t);
          }
      }
    }
  else
    {
      t = o_36(m_36, t);
    }
  return(t);
}
static ATerm f_6 (ATerm z_25, ATerm t)
{
  t = SSL_read_term_from_stream(z_25);
  return(t);
}
static ATerm g_6 (ATerm w_39, ATerm x_39, ATerm t)
{
  t = SSL_strcat(w_39, x_39);
  return(t);
}
static ATerm h_6 (ATerm u_41, ATerm v_41, ATerm t)
{
  ATerm p_36 = NULL;
  t = SSL_fopen(u_41, v_41);
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_36 = NULL;
  t = SSL_stdin_stream();
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_36 = NULL;
  t = SSL_stdout_stream();
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_36 = NULL;
  t = SSL_stderr_stream();
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_36);
  return(t);
}
static ATerm z_37 (ATerm y_36, ATerm t)
{
  ATerm z_36 = NULL;
  t = SSL_explode_term(y_36);
  if(match_cons(t, sym__2))
    {
      ATerm e_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_23 = ATgetArgument(t, 1);
        if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
          {
            z_36 = ATgetFirst((ATermList) f_23);
            {
              ATerm g_23 = (ATerm) ATgetNext((ATermList) f_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_38 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,k_37 = NULL,o_11 = NULL;
  t = SSLgetAnnotations(e_37);
  h_37 = t;
  t = c_37;
  if(match_cons(t, sym_Path_1))
    {
      k_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_37, d_37);
  o_11 = t;
  t = SSLsetAnnotations(o_11, h_37);
  if(match_cons(t, sym__2))
    {
      f_37 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(f_37, g_37, t);
  return(t);
}
static ATerm b_38 (ATerm m_37, ATerm n_37, ATerm o_37, ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,u_37 = NULL,v_11 = NULL;
  t = SSLgetAnnotations(o_37);
  r_37 = t;
  t = SSL_is_string(m_37);
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_37, n_37);
  v_11 = t;
  t = SSLsetAnnotations(v_11, r_37);
  if(match_cons(t, sym__2))
    {
      p_37 = ATgetArgument(t, 0);
      q_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(p_37, q_37, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
  w_37 = t;
  if(match_cons(t, sym__2))
    {
      x_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
      {
        ATerm h_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_37(w_37, t);
            LocalPopChoice(l_23);
          }
        else
          {
            t = h_23;
            {
              ATerm m_23 = t;
              int n_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_38(x_37, y_37, w_37, t);
                  LocalPopChoice(n_23);
                }
              else
                {
                  t = m_23;
                  t = b_38(x_37, y_37, w_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_37(w_37, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,k_38 = NULL;
  k_38 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_38, term_v_23);
        t = i_6(t);
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        {
          ATerm f_9 = NULL,g_9 = NULL;
          t = term_w_23;
          g_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_23, k_38);
          t = g_6(g_9, k_38, t);
          f_9 = t;
          t = SSL_perror(f_9);
          _fail(t);
        }
      }
  }
  e_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(f_38, t);
  d_38 = t;
  t = e_38;
  t = fclose_0_0(t);
  t = d_38;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_d_24;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_38 = NULL,o_38 = NULL;
      n_38 = t;
      t = (ATerm) ATinsert(ATempty, term_i_24);
      o_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_38, (ATerm) ATinsert(ATempty, term_i_24));
      t = j_6(n_38, o_38, t);
      LocalPopChoice(h_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_24;
      {
        ATerm j_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_24 = t;
            if((PushChoice() == 0))
              {
                ATerm p_38 = NULL,q_38 = NULL;
                p_38 = t;
                t = (ATerm) ATinsert(ATempty, term_h_13);
                q_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_38, (ATerm) ATinsert(ATempty, term_h_13));
                t = j_6(p_38, q_38, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_24;
              }
            t = debug_1_0(m_7, t);
            LocalPopChoice(k_24);
          }
        else
          {
            t = j_24;
            t = debug_1_0(n_7, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = debug_1_0(x_7, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_q_24;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = debug_1_0(e_8, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_t_24;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  t = term_t_12;
  i_39 = t;
  t = (ATerm) ATinsert(ATempty, term_u_24);
  j_39 = t;
  t = SSL_printnl(i_39, j_39);
  t = h_39;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
  if(match_cons(t, sym__3))
    {
      k_39 = ATgetArgument(t, 0);
      l_39 = ATgetArgument(t, 1);
      m_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_6(k_39, l_39, m_39, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
  n_39 = t;
  t = term_t_12;
  o_39 = t;
  t = (ATerm) ATinsert(ATempty, term_v_24);
  p_39 = t;
  t = SSL_printnl(o_39, p_39);
  t = n_39;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  t = term_t_12;
  r_39 = t;
  t = (ATerm) ATinsert(ATempty, term_u_24);
  s_39 = t;
  t = SSL_printnl(r_39, s_39);
  t = q_39;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
  r_38 = t;
  t = if_verbose5_1_0(t_7, t);
  {
    ATerm w_24 = t;
    if((PushChoice() == 0))
      {
        ATerm f_39 = NULL,g_39 = NULL;
        t = term_b_10;
        f_39 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, r_38);
        g_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATmakeAppl(sym_Imported_1, r_38));
        t = m_6(f_39, g_39, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_24;
      }
  }
  t_38 = t;
  t = term_b_10;
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_10, term_y_24, (ATerm) ATinsert(ATempty, r_38));
  t = lookup_table_0_1(a_39, t);
  e_39 = t;
  t = term_y_24;
  b_39 = t;
  t = (ATerm) ATinsert(ATempty, r_38);
  c_39 = t;
  t = e_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(b_39, c_39, d_39, t);
  t = t_38;
  t = if_verbose4_1_0(z_7, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(k_8, t);
  s_38 = t;
  t = term_b_10;
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, s_38);
  t = e_6(l_8, z_38, s_38, t);
  t = if_verbose6_1_0(p_8, t);
  t = term_b_10;
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_10, (ATerm)ATmakeAppl(sym_Imported_1, r_38), (ATerm) ATempty);
  t = lookup_table_0_1(u_38, t);
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, r_38);
  v_38 = t;
  t = (ATerm) ATempty;
  w_38 = t;
  t = y_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(v_38, w_38, x_38, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_10, (ATerm)ATmakeAppl(sym_Imported_1, r_38), (ATerm) ATempty);
  t = if_verbose4_1_0(r_8, t);
  return(t);
}
ATerm filter_1_0 (ATerm r_100 (ATerm), ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_40;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_40 = ATgetFirst((ATermList) t);
          i_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_24 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_9 = NULL,s_9 = NULL,a_10 = NULL,c_12 = NULL;
            t = SSLgetAnnotations(g_40);
            p_9 = t;
            t = h_40;
            t = r_100(t);
            s_9 = t;
            t = i_40;
            t = filter_1_0(r_100, t);
            a_10 = t;
            t = (ATerm) ATinsert(CheckATermList(a_10), s_9);
            c_12 = t;
            t = SSLsetAnnotations(c_12, p_9);
            LocalPopChoice(c_25);
          }
        else
          {
            t = z_24;
            t = i_40;
            t = filter_1_0(r_100, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm t)
{
  static ATerm l_40 (ATerm t);
  static ATerm l_40 (ATerm t)
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_85(t);
        t = l_40(t);
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        t = d_85(t);
      }
    return(t);
  }
  t = l_40(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_40 = NULL,n_40 = NULL;
      t = term_k_9;
      m_40 = t;
      t = term_b_13;
      n_40 = t;
      t = term_c_13;
      t = m_6(m_40, n_40, t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = f_25;
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_40 = NULL;
            t = term_k_25;
            o_40 = t;
            t = SSL_getenv(o_40);
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = debug_1_0(u_8, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  t = term_b_10;
  u_40 = t;
  t = term_d_10;
  v_40 = t;
  t = term_e_10;
  t = m_6(u_40, v_40, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm m_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_25;
      }
  }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = debug_1_0(x_8, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm q_40 = NULL;
  t = if_verbose5_1_0(s_8, t);
  q_40 = t;
  {
    ATerm c_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_40 = NULL,s_40 = NULL;
        t = term_b_10;
        r_40 = t;
        t = term_y_24;
        s_40 = t;
        t = term_f_26;
        t = m_6(r_40, s_40, t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = c_26;
        {
          ATerm t_40 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_40 = t;
          t = repeat_2_0(v_8, _id, t);
          t = t_40;
        }
      }
  }
  t = q_40;
  t = if_verbose5_1_0(w_8, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = debug_1_0(b_9, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_g_26;
  return(t);
}
static ATerm y_41 (ATerm a_41, ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
  t = term_b_10;
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, a_41);
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATmakeAppl(sym_Tool_1, a_41));
  t = m_6(d_41, e_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_26 = ATgetFirst((ATermList) t);
      if(match_cons(h_26, sym__2))
        {
          ATerm j_26 = ATgetArgument(h_26, 0);
          c_41 = ATgetArgument(h_26, 1);
        }
      else
        _fail(t);
      {
        ATerm i_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_41;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = debug_1_0(e_9, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_g_26;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_b_10;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_9, t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
      t = if_verbose5_1_0(a_9, t);
      t = xtc_load_0_0(t);
      h_41 = t;
      if(match_cons(t, sym__2))
        {
          f_41 = ATgetArgument(t, 0);
          g_41 = ATgetArgument(t, 1);
          {
            ATerm n_26 = t;
            int o_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
                t = term_b_10;
                n_41 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, f_41);
                o_41 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATmakeAppl(sym_Tool_1, f_41));
                t = m_6(n_41, o_41, t);
                {
                  static ATerm c_9 (ATerm t);
                  static ATerm c_9 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((g_41 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((m_41 != NULL) && (m_41 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          m_41 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(c_9, t);
                }
                t = not_null(m_41);
                LocalPopChoice(o_26);
              }
            else
              {
                t = n_26;
                t = y_41(h_41, t);
              }
          }
        }
      else
        {
          t = y_41(h_41, t);
        }
      t = if_verbose5_1_0(d_9, t);
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm t_41 = NULL,r_10 = NULL,s_10 = NULL;
        t_41 = t;
        t = term_t_12;
        r_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_26), t_41), term_p_26);
        s_10 = t;
        t = SSL_printnl(r_10, s_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_26), t_41), term_p_26);
        t = if_verbose5_1_0(h_9, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
      g_42 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_42 = ATgetFirst((ATermList) t);
          i_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_42 = ATgetFirst((ATermList) t);
          k_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_42;
      if(match_string(t, "call"))
        {
          ATerm o_42 = NULL;
          t = k_42;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_42 = ATgetFirst((ATermList) t);
              f_42 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_42;
          t = xtc_find_0_0(t);
          o_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_42, f_42);
          t = w_5(o_42, f_42, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = g_42;
          t = v_5(h_42, k_42, t);
        }
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      t = xtc_main_0_0(t);
    }
  return(t);
}
