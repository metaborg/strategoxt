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
ATerm term_u_26;
ATerm term_t_26;
ATerm term_h_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_n_24;
ATerm term_e_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_r_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_r_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_q_19;
ATerm term_b_19;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_g_14;
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
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
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
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_r_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_d_10);
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
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_i_14);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_i_14);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_i_14);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_u_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_o_14);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_i_14);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_i_14);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_i_14);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__3, term_l_14, term_o_14, (ATerm) ATempty);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_q_19);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_p_17);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_a_15);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_f_15);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_c_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm version_query_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm e_111 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm tool_query_0_0 (ATerm t);
static ATerm k_5 (ATerm r_63, ATerm u_751, ATerm t);
static ATerm h_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm all_query_0_0 (ATerm t);
ATerm repository_query_0_0 (ATerm t);
static ATerm l_5 (ATerm j_14, ATerm k_14, ATerm t);
static ATerm m_5 (ATerm h_85 (ATerm), ATerm y_160, ATerm t_14, ATerm t);
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
static ATerm n_5 (ATerm e_53, ATerm f_53, ATerm d_53, ATerm t);
ATerm xtc_register_0_3 (ATerm m_63, ATerm n_63, ATerm o_63, ATerm t);
ATerm if_verbose1_1_0 (ATerm c_111 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm d_111 (ATerm), ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_86 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm u_15 (ATerm w_14, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm o_5 (ATerm k_61, ATerm j_61, ATerm t);
static ATerm r_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm xtc_options_0_0 (ATerm t);
static ATerm p_5 (ATerm j_57, ATerm k_57, ATerm t);
static ATerm q_5 (ATerm o_57, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm t_5 (ATerm e_61, ATerm f_61, ATerm t);
static ATerm r_5 (ATerm m_52, ATerm n_52, ATerm l_52, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm j_64 (ATerm), ATerm k_64 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm e_106 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm parse_options_1_0 (ATerm d_106 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm xtc_main_0_0 (ATerm t);
static ATerm v_5 (ATerm h_64, ATerm i_64, ATerm t);
static ATerm w_5 (ATerm o_48, ATerm p_48, ATerm t);
ATerm debug_1_0 (ATerm f_85 (ATerm), ATerm t);
static ATerm x_5 (ATerm l_57, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm g_111 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm a_86 (ATerm), ATerm t);
static ATerm m_6 (ATerm f_54, ATerm g_54, ATerm t);
ATerm if_verbose4_1_0 (ATerm f_111 (ATerm), ATerm t);
static ATerm l_6 (ATerm e_57, ATerm f_57, ATerm g_57, ATerm t);
static ATerm k_6 (ATerm h_57, ATerm i_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_57, ATerm n_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm y_53, ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm h_111 (ATerm), ATerm t);
static ATerm b_6 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm v_20, ATerm u_20, ATerm t);
static ATerm c_6 (ATerm b_90 (ATerm), ATerm r_20, ATerm q_20, ATerm t);
static ATerm k_7 (ATerm t);
static ATerm d_6 (ATerm j_53, ATerm k_53, ATerm l_53, ATerm t);
ATerm map_1_0 (ATerm q_85 (ATerm), ATerm t);
static ATerm e_6 (ATerm h_106 (ATerm), ATerm t_53, ATerm s_53, ATerm t);
static ATerm j_6 (ATerm l_29, ATerm m_29, ATerm t);
static ATerm x_36 (ATerm r_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_6 (ATerm p_14, ATerm t);
static ATerm g_6 (ATerm l_28, ATerm m_28, ATerm t);
static ATerm h_6 (ATerm u_29, ATerm v_29, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_38 (ATerm h_37, ATerm t);
static ATerm j_38 (ATerm l_37, ATerm m_37, ATerm n_37, ATerm t);
static ATerm k_38 (ATerm v_37, ATerm w_37, ATerm x_37, ATerm t);
static ATerm i_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_93 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm z_41 (ATerm h_41, ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm h_9 (ATerm t);
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
  ATerm i_0 = NULL,n_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,o_0 = NULL;
  u_0 = t;
  t = term_k_9;
  x_0 = t;
  t = term_l_9;
  z_0 = t;
  t = term_n_9;
  t = m_6(x_0, z_0, t);
  n_0 = t;
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
      i_0 = ATgetArgument(t, 0);
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
          if((n_0 != ATgetArgument(t, 0)))
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
  o_0 = t;
  t = SSLsetAnnotations(o_0, a_1);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_0, not_null(t_0)));
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, i_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_0, not_null(t_0))));
  t = k_5(i_0, v_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL;
        t = term_k_9;
        j_1 = t;
        t = term_r_9;
        k_1 = t;
        t = term_s_9;
        t = m_6(j_1, k_1, t);
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, term_t_9);
        t = geq_0_0(t);
        t = g_1;
        t = e_111(t);
        LocalPopChoice(p_9);
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
  t = term_u_9;
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
static ATerm k_0 (ATerm t)
{
  t = debug_1_0(s_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
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
          t = if_verbose3_1_0(k_0, t);
          t = term_u_9;
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym_Tool_1, k_2);
          m_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATmakeAppl(sym_Tool_1, k_2));
          t = m_6(l_2, m_2, t);
          if(((q_1 != NULL) && (q_1 != t)))
            _fail(t);
          else
            q_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, k_2), q_1);
          {
            ATerm n_10 = t;
            int r_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = version_query_0_0(t);
                LocalPopChoice(r_10);
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
static ATerm k_5 (ATerm r_63, ATerm u_751, ATerm t)
{
  static ATerm f_1 (ATerm t);
  static ATerm f_1 (ATerm t)
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), w_2), term_f_12), v_2), term_d_12), r_63);
            h_3 = t;
            t = SSL_print(g_3, h_3);
            t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), w_2), term_f_12), v_2), term_d_12), r_63));
          }
        }
    }
    return(t);
  }
  t = u_751;
  t = map_1_0(f_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL;
  t = term_u_9;
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
static ATerm l_1 (ATerm t)
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
            ATerm e_0 = NULL,f_0 = NULL,j_0 = NULL,w_0 = NULL,y_0 = NULL,b_1 = NULL,d_4 = NULL,z_3 = NULL;
            t = SSLgetAnnotations(d_5);
            j_0 = t;
            t = b_5;
            if(match_cons(t, sym_Tool_1))
              {
                y_0 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_5);
            w_0 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, y_0);
            z_3 = t;
            t = SSLsetAnnotations(z_3, w_0);
            b_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_1, c_5);
            d_4 = t;
            t = SSLsetAnnotations(d_4, j_0);
            if(match_cons(t, sym__2))
              {
                ATerm k_12 = ATgetArgument(t, 0);
                if(match_cons(k_12, sym_Tool_1))
                  {
                    e_0 = ATgetArgument(k_12, 0);
                  }
                else
                  _fail(t);
                f_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_5(e_0, f_0, t);
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
  t = repeat_2_0(h_1, _id, t);
  t = term_u_9;
  t = table_getlist_0_0(t);
  t = map_1_0(l_1, t);
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
static ATerm l_5 (ATerm j_14, ATerm k_14, ATerm t)
{
  ATerm z_6 = NULL;
  t = SSL_write_term_to_stream_baf(j_14, k_14);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_6);
  return(t);
}
static ATerm m_5 (ATerm h_85 (ATerm), ATerm y_160, ATerm t_14, ATerm t)
{
  ATerm a_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_160, term_s_12);
  t = i_6(t);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_7, t_14);
  t = h_85(t);
  t = fclose_0_0(t);
  t = t_14;
  return(t);
}
static ATerm m_1 (ATerm t)
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
static ATerm n_1 (ATerm t)
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
static ATerm o_1 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  t = if_verbose1_1_0(m_1, t);
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
          t = term_u_9;
          t = table_getlist_0_0(t);
          y_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_8, y_7);
          t = m_5(n_1, b_8, y_7, t);
        }
      }
    else
      {
        t = d_13;
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
  t = term_j_13;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
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
  t = if_verbose2_1_0(p_1, t);
  t = term_k_9;
  j_8 = t;
  t = term_l_13;
  m_8 = t;
  t = term_m_13;
  t = m_6(j_8, m_8, t);
  g_8 = t;
  t = if_verbose5_1_0(t_1, t);
  t = term_u_9;
  h_8 = t;
  t = term_d_10;
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_9, term_d_10, g_8);
  t = n_5(h_8, i_8, g_8, t);
  return(t);
}
static ATerm z_1 (ATerm t)
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
static ATerm n_5 (ATerm e_53, ATerm f_53, ATerm d_53, ATerm t)
{
  ATerm q_8 = NULL,t_8 = NULL,y_8 = NULL,z_8 = NULL;
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_53, f_53);
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
        t = (ATerm) ATmakeAppl(sym__2, e_53, f_53);
        t = m_6(e_53, f_53, t);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        t = (ATerm) ATempty;
      }
  }
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_53, y_8);
  t = c_6(z_1, d_53, y_8, t);
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_53, f_53, t_8);
  t = lookup_table_0_1(e_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(f_53, t_8, z_8, t);
  t = q_8;
  return(t);
}
ATerm xtc_register_0_3 (ATerm m_63, ATerm n_63, ATerm o_63, ATerm t)
{
  ATerm m_9 = NULL;
  m_9 = t;
  t = xtc_load_0_0(t);
  t = m_63;
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_63;
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
            t = m_63;
          }
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        t = (ATerm) ATinsert(ATempty, m_63);
      }
  }
  {
    static ATerm c_2 (ATerm t);
    static ATerm c_2 (ATerm t)
    {
      ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,c_10 = NULL;
      w_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_9), term_v_13), o_63);
      c_10 = t;
      t = SSL_concat_strings(c_10);
      v_9 = t;
      t = term_u_9;
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym_Tool_1, w_9);
      y_9 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_63, v_9));
      z_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_9, (ATerm)ATmakeAppl(sym_Tool_1, w_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_63, v_9)));
      t = n_5(x_9, y_9, z_9, t);
      return(t);
    }
    t = map_1_0(c_2, t);
  }
  t = m_9;
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_111 (ATerm), ATerm t)
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
        t = term_s_9;
        t = m_6(j_10, m_10, t);
        i_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_10, term_y_13);
        t = geq_0_0(t);
        t = g_10;
        t = c_111(t);
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
static ATerm d_2 (ATerm t)
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
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm i_2 (ATerm t)
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
  t = if_verbose1_1_0(d_2, t);
  t = if_verbose2_1_0(e_2, t);
  t = term_k_9;
  x_10 = t;
  t = term_l_9;
  z_10 = t;
  t = term_n_9;
  t = m_6(x_10, z_10, t);
  p_10 = t;
  t = if_verbose2_1_0(g_2, t);
  t = term_k_9;
  t_10 = t;
  t = term_x_11;
  v_10 = t;
  t = term_y_11;
  t = m_6(t_10, v_10, t);
  q_10 = t;
  t = if_verbose2_1_0(i_2, t);
  t = o_10;
  t = xtc_register_0_3(o_10, p_10, q_10, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_111 (ATerm), ATerm t)
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
        t = term_s_9;
        t = m_6(s_11, t_11, t);
        r_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_11, term_g_14);
        t = geq_0_0(t);
        t = p_11;
        t = d_111(t);
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
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,e_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_12 = NULL,m_12 = NULL,n_12 = NULL;
      t = term_i_14;
      t = r_0(t);
      j_12 = t;
      t = term_l_14;
      m_12 = t;
      t = term_o_14;
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_14, term_o_14, j_12);
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
      t = p_0(t);
      t = b_12;
      t = q_0(t);
      w_12 = t;
      t = (ATerm) ATinsert(CheckATermList(e_12), w_12);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  static ATerm n_14 (ATerm t);
  static ATerm n_14 (ATerm t)
  {
    ATerm f_14 = NULL,h_14 = NULL,m_14 = NULL;
    m_14 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_14 = ATgetFirst((ATermList) t);
        h_14 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_1 = NULL,b_2 = NULL,i_4 = NULL;
          t = SSLgetAnnotations(m_14);
          v_1 = t;
          t = h_14;
          t = n_14(t);
          b_2 = t;
          t = (ATerm) ATinsert(CheckATermList(b_2), f_14);
          i_4 = t;
          t = SSLsetAnnotations(i_4, v_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_14;
        t = h_86(t);
      }
    return(t);
  }
  t = n_14(t);
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
static ATerm u_15 (ATerm w_14, ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_explode_term(w_14);
  if(match_cons(t, sym__2))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_14;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_15 = NULL,i_15 = NULL,m_15 = NULL;
  m_15 = t;
  if(match_cons(t, sym__2))
    {
      g_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_2 (ATerm t);
            static ATerm p_2 (ATerm t)
            {
              t = i_15;
              return(t);
            }
            t = g_15;
            t = at_end_1_0(p_2, t);
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            t = u_15(m_15, t);
          }
      }
    }
  else
    {
      t = u_15(m_15, t);
    }
  return(t);
}
static ATerm o_5 (ATerm k_61, ATerm j_61, ATerm t)
{
  ATerm y_15 = NULL,e_16 = NULL,g_16 = NULL,i_16 = NULL;
  t = k_61;
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_16 = NULL;
        t = term_k_9;
        l_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_9, k_61);
        t = m_6(l_16, k_61, t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        t = (ATerm) ATempty;
      }
  }
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_61, e_16);
  t = conc_0_0(t);
  y_15 = t;
  t = term_k_9;
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, k_61, y_15);
  t = lookup_table_0_1(g_16, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(k_61, y_15, i_16, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, k_61, y_15);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm e_17 = NULL;
  e_17 = t;
  if(match_string(t, "-r"))
    {
      t = e_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = e_17;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL;
  f_17 = t;
  t = term_b_13;
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_13, f_17);
  t = t_5(g_17, f_17, t);
  t = f_17;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_y_14;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm h_17 = NULL;
  h_17 = t;
  if(match_string(t, "i"))
    {
      t = h_17;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = h_17;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = h_17;
        }
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
  q_17 = t;
  t = term_l_13;
  r_17 = t;
  t = (ATerm) ATinsert(ATempty, q_17);
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_13, (ATerm) ATinsert(ATempty, q_17));
  t = o_5(r_17, s_17, t);
  t = q_17;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_z_14;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm t_17 = NULL;
  t_17 = t;
  if(match_string(t, "r"))
    {
      t = t_17;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = t_17;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = t_17;
        }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  u_17 = t;
  t = term_a_15;
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_15, u_17);
  t = t_5(v_17, u_17, t);
  t = u_17;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_b_15;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm w_17 = NULL;
  w_17 = t;
  if(match_string(t, "-t"))
    {
      t = w_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = w_17;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  t = term_n_11;
  b_18 = t;
  t = (ATerm) ATinsert(ATempty, a_18);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATempty, a_18));
  t = o_5(b_18, c_18, t);
  t = a_18;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_c_15;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm d_18 = NULL;
  d_18 = t;
  if(match_string(t, "-l"))
    {
      t = d_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = d_18;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm f_18 = NULL,j_18 = NULL;
  f_18 = t;
  t = term_x_11;
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, f_18);
  t = t_5(j_18, f_18, t);
  t = f_18;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_d_15;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm m_18 = NULL;
  m_18 = t;
  if(match_string(t, "-V"))
    {
      t = m_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = m_18;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm p_18 = NULL,r_18 = NULL;
  p_18 = t;
  t = term_l_9;
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, p_18);
  t = t_5(r_18, p_18, t);
  t = p_18;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_e_15;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm s_18 = NULL;
  s_18 = t;
  if(match_string(t, "q"))
    {
      t = s_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = s_18;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL;
  t_18 = t;
  t = term_f_15;
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_15, t_18);
  t = t_5(u_18, t_18, t);
  t = t_18;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_h_15;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm v_18 = NULL;
  v_18 = t;
  if(match_string(t, "-a"))
    {
      t = v_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = v_18;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  y_18 = t;
  t = term_l_12;
  z_18 = t;
  t = term_i_14;
  a_19 = t;
  t = term_j_15;
  t = t_5(z_18, a_19, t);
  t = y_18;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_k_15;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm c_19 = NULL;
  c_19 = t;
  if(match_string(t, "-L"))
    {
      t = c_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = c_19;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  t = term_x_11;
  e_19 = t;
  t = term_i_14;
  f_19 = t;
  t = term_l_15;
  t = t_5(e_19, f_19, t);
  t = d_19;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_n_15;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm g_19 = NULL;
  g_19 = t;
  if(match_string(t, "-R"))
    {
      t = g_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = g_19;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm j_19 = NULL,m_19 = NULL,n_19 = NULL;
  j_19 = t;
  t = term_p_12;
  m_19 = t;
  t = term_i_14;
  n_19 = t;
  t = term_o_15;
  t = t_5(m_19, n_19, t);
  t = j_19;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_p_15;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,r_19 = NULL;
  o_19 = t;
  t = SSL_string_to_int(o_19);
  p_19 = t;
  t = term_r_9;
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, p_19);
  t = t_5(r_19, p_19, t);
  t = o_19;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_q_15;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(r_2, x_2, b_3, t);
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      {
        ATerm t_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_3, j_3, k_3, t);
            LocalPopChoice(v_15);
          }
        else
          {
            t = t_15;
            {
              ATerm w_15 = t;
              int x_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_3, m_3, o_3, t);
                  LocalPopChoice(x_15);
                }
              else
                {
                  t = w_15;
                  {
                    ATerm z_15 = t;
                    int a_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(p_3, r_3, u_3, t);
                        LocalPopChoice(a_16);
                      }
                    else
                      {
                        t = z_15;
                        {
                          ATerm b_16 = t;
                          int c_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(x_3, y_3, a_4, t);
                              LocalPopChoice(c_16);
                            }
                          else
                            {
                              t = b_16;
                              {
                                ATerm d_16 = t;
                                int f_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(b_4, c_4, e_4, t);
                                    LocalPopChoice(f_16);
                                  }
                                else
                                  {
                                    t = d_16;
                                    {
                                      ATerm h_16 = t;
                                      int j_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(f_4, g_4, h_4, t);
                                          LocalPopChoice(j_16);
                                        }
                                      else
                                        {
                                          t = h_16;
                                          {
                                            ATerm k_16 = t;
                                            int m_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(j_4, m_4, n_4, t);
                                                LocalPopChoice(m_16);
                                              }
                                            else
                                              {
                                                t = k_16;
                                                {
                                                  ATerm n_16 = t;
                                                  int o_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(o_4, q_4, s_4, t);
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
                                                            t = Option_3_0(t_4, u_4, v_4, t);
                                                            LocalPopChoice(q_16);
                                                          }
                                                        else
                                                          {
                                                            t = p_16;
                                                            t = ArgOption_3_0(w_4, z_4, a_5, t);
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
static ATerm p_5 (ATerm j_57, ATerm k_57, ATerm t)
{
  ATerm s_19 = NULL;
  t = SSL_hashtable_remove(k_57, j_57);
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_19);
  return(t);
}
static ATerm q_5 (ATerm o_57, ATerm t)
{
  ATerm t_19 = NULL;
  t = SSL_hashtable_destroy(o_57);
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_19);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_19 = NULL,e_20 = NULL,f_20 = NULL,k_20 = NULL;
  y_19 = t;
  t = table_hashtable_0_0(t);
  e_20 = t;
  t = lookup_table_0_1(y_19, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(k_20, t);
  t = e_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(y_19, f_20, t);
  t = y_19;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,x_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_20 = ATgetFirst((ATermList) t);
      x_20 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_21 = NULL,f_21 = NULL;
        static ATerm e_5 (ATerm t);
        static ATerm e_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_21)), not_null(f_21));
          return(t);
        }
        t = x_20;
        t = m_0(t);
        if(((e_21 != NULL) && (e_21 != t)))
          _fail(t);
        else
          e_21 = t;
        t = t_20;
        t = l_0(t);
        if(((f_21 != NULL) && (f_21 != t)))
          _fail(t);
        else
          f_21 = t;
        t = x_20;
        t = reverse_acc_2_0(l_0, e_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_14;
      t = m_0(t);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,z_21 = NULL,k_4 = NULL;
  z_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_21);
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_21);
  k_4 = t;
  t = SSLsetAnnotations(k_4, w_21);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm d_22 = NULL;
  d_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_22), term_r_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_21 = NULL,s_21 = NULL;
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_21 = NULL,u_21 = NULL;
      t = term_k_9;
      t_21 = t;
      t = term_u_16;
      u_21 = t;
      t = term_v_16;
      t = m_6(t_21, u_21, t);
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      t = fetch_1_0(f_5, t);
    }
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_17), term_z_16), term_y_16);
        t = echo_0_0(t);
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
      }
  }
  t = term_b_17;
  t = echo_0_0(t);
  t = term_l_14;
  n_21 = t;
  t = term_o_14;
  s_21 = t;
  t = term_c_17;
  t = m_6(n_21, s_21, t);
  t = reverse_acc_2_0(_id, g_5, t);
  t = map_1_0(i_5, t);
  {
    ATerm d_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_17), term_j_17), term_l_11);
        t = echo_0_0(t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = d_17;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_22 = NULL,l_22 = NULL,m_22 = NULL;
  j_22 = t;
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_22;
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
            t = j_22;
          }
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = (ATerm) ATinsert(ATempty, j_22);
      }
  }
  l_22 = t;
  t = term_h_11;
  m_22 = t;
  t = SSL_printnl(m_22, l_22);
  t = j_22;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm t_22 = NULL,v_22 = NULL;
  t = term_k_9;
  t_22 = t;
  t = term_u_16;
  v_22 = t;
  t = term_v_16;
  t = m_6(t_22, v_22, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm w_22 = NULL,a_23 = NULL;
  t = term_p_17;
  w_22 = t;
  t = term_i_14;
  a_23 = t;
  t = term_x_17;
  t = t_5(w_22, a_23, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,f_23 = NULL,g_23 = NULL;
  t = term_p_17;
  f_23 = t;
  t = term_i_14;
  g_23 = t;
  t = term_x_17;
  t = t_5(f_23, g_23, t);
  t = term_z_17;
  b_23 = t;
  t = term_i_14;
  c_23 = t;
  t = term_e_18;
  t = t_5(b_23, c_23, t);
  t = term_g_18;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_5, s_5, u_5, t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = i_18;
      t = Option_3_0(y_5, z_5, q_6, t);
    }
  return(t);
}
static ATerm t_5 (ATerm e_61, ATerm f_61, ATerm t)
{
  ATerm i_23 = NULL,n_23 = NULL;
  t = term_k_9;
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, e_61, f_61);
  t = lookup_table_0_1(i_23, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(e_61, f_61, n_23, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, e_61, f_61);
  return(t);
}
static ATerm r_5 (ATerm m_52, ATerm n_52, ATerm l_52, ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,a_24 = NULL,b_24 = NULL;
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_52, n_52);
  {
    ATerm l_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_18 = ATgetArgument(t, 0);
            ATerm q_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_52, n_52);
        t = m_6(m_52, n_52, t);
        LocalPopChoice(n_18);
      }
    else
      {
        t = l_18;
        t = (ATerm) ATempty;
      }
  }
  s_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_52, n_52, (ATerm) ATinsert(CheckATermList(s_23), l_52));
  t = lookup_table_0_1(m_52, t);
  b_24 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), l_52);
  t_23 = t;
  t = b_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(n_52, t_23, a_24, t);
  t = r_23;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
      t = term_i_14;
      t = h_0(t);
      j_24 = t;
      t = term_l_14;
      k_24 = t;
      t = term_o_14;
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_14, term_o_14, j_24);
      t = r_5(k_24, l_24, j_24, t);
      _fail(t);
    }
  else
    {
      ATerm o_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_24 = ATgetFirst((ATermList) t);
          i_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_24;
      t = d_0(t);
      t = term_i_14;
      t = g_0(t);
      o_24 = t;
      t = (ATerm) ATinsert(CheckATermList(i_24), o_24);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_64 (ATerm), ATerm k_64 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,r_4 = NULL;
  u_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_24 = ATgetFirst((ATermList) t);
      r_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_24);
  p_24 = t;
  t = q_24;
  t = j_64(t);
  s_24 = t;
  t = r_24;
  t = k_64(t);
  t_24 = t;
  t = (ATerm) ATinsert(CheckATermList(t_24), s_24);
  r_4 = t;
  t = SSLsetAnnotations(r_4, p_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_106 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,e_25 = NULL,g_25 = NULL,j_25 = NULL,y_4 = NULL;
  z_24 = t;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_19;
        t = e_106(t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
      }
  }
  t = z_24;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_25 = ATgetFirst((ATermList) t);
      e_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_24);
  a_25 = t;
  t = term_u_16;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_16, b_25);
  t = t_5(j_25, b_25, t);
  t = e_25;
  {
    static ATerm v_25 (ATerm t);
    static ATerm v_25 (ATerm t)
    {
      ATerm h_19 = t;
      int i_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_25 = NULL;
              m_25 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_25;
              LocalPopChoice(l_19);
            }
          else
            {
              t = k_19;
              t = e_106(t);
              t = Cons_2_0(_id, v_25, t);
            }
          LocalPopChoice(i_19);
        }
      else
        {
          t = h_19;
          {
            ATerm p_25 = NULL,q_25 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_25 = ATgetFirst((ATermList) t);
                q_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_25), (ATerm) ATmakeAppl(sym_Undefined_1, p_25));
          }
        }
      return(t);
    }
    t = v_25(t);
  }
  g_25 = t;
  t = (ATerm) ATinsert(CheckATermList(g_25), (ATerm) ATmakeAppl(sym_Program_1, b_25));
  y_4 = t;
  t = SSLsetAnnotations(y_4, a_25);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm m_26 = NULL;
  m_26 = t;
  if(match_string(t, "--help"))
    {
      t = m_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_26;
        }
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  t = term_q_19;
  n_26 = t;
  t = term_i_14;
  o_26 = t;
  t = term_u_19;
  t = t_5(n_26, o_26, t);
  t = term_v_19;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_106 (ATerm), ATerm t)
{
  ATerm a_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
  e_26 = t;
  t = term_l_14;
  f_26 = t;
  t = term_x_19;
  t = lookup_table_0_1(f_26, t);
  l_26 = t;
  t = term_o_14;
  i_26 = t;
  t = (ATerm) ATempty;
  j_26 = t;
  t = l_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(i_26, j_26, k_26, t);
  t = e_26;
  {
    static ATerm r_6 (ATerm t);
    static ATerm r_6 (ATerm t)
    {
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_106(t);
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
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
    ATerm d_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL;
        b_27 = t;
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 = NULL;
              t = b_27;
              {
                ATerm j_20 = t;
                int l_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_2 = NULL,u_2 = NULL;
                    t = term_k_9;
                    q_2 = t;
                    t = term_q_19;
                    u_2 = t;
                    t = term_m_20;
                    t = m_6(q_2, u_2, t);
                    LocalPopChoice(l_20);
                  }
                else
                  {
                    t = j_20;
                    t = fetch_1_0(w_6, t);
                  }
              }
              t = b_27;
              t = default_system_usage_0_0(t);
              t = term_n_20;
              j_2 = t;
              t = SSL_exit(j_2);
              LocalPopChoice(i_20);
            }
          else
            {
              t = h_20;
              {
                ATerm e_3 = NULL,f_3 = NULL,i_3 = NULL;
                t = term_k_9;
                f_3 = t;
                t = term_p_17;
                i_3 = t;
                t = term_o_20;
                t = m_6(f_3, i_3, t);
                t = b_27;
                t = default_system_about_0_0(t);
                t = term_n_20;
                e_3 = t;
                t = SSL_exit(e_3);
              }
            }
        }
        LocalPopChoice(g_20);
      }
    else
      {
        t = d_20;
        {
          ATerm p_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
              static ATerm x_6 (ATerm t);
              static ATerm x_6 (ATerm t)
              {
                ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,y_10 = NULL;
                h_27 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_27);
                f_27 = t;
                t = g_27;
                if(((a_26 != NULL) && (a_26 != t)))
                  _fail(t);
                else
                  a_26 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_27);
                y_10 = t;
                t = SSLsetAnnotations(y_10, f_27);
                return(t);
              }
              t = fetch_1_0(x_6, t);
              t = term_t_12;
              d_27 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_26)), term_w_20);
              e_27 = t;
              t = SSL_printnl(d_27, e_27);
              t = (ATerm) ATmakeAppl(sym__2, term_t_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_26)), term_w_20));
              t = default_system_usage_0_0(t);
              t = term_y_13;
              c_27 = t;
              t = SSL_exit(c_27);
              LocalPopChoice(s_20);
            }
          else
            {
              t = p_20;
            }
        }
      }
  }
  d_26 = t;
  t = term_l_14;
  t = table_destroy_0_0(t);
  t = d_26;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = debug_1_0(b_7, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_27 = NULL;
      t = parse_options_1_0(xtc_options_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(y_6, t);
      t = xtc_read_0_0(t);
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_21 = t;
            int h_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_27 = NULL,p_27 = NULL;
                t = term_k_9;
                o_27 = t;
                t = term_a_15;
                p_27 = t;
                t = term_i_21;
                t = m_6(o_27, p_27, t);
                t = xtc_register_0_0(t);
                LocalPopChoice(h_21);
              }
            else
              {
                t = g_21;
                {
                  ATerm q_27 = NULL,r_27 = NULL;
                  t = term_k_9;
                  q_27 = t;
                  t = term_l_13;
                  r_27 = t;
                  t = term_m_13;
                  t = m_6(q_27, r_27, t);
                  t = register_import_0_0(t);
                }
              }
            t = xtc_store_0_0(t);
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            {
              ATerm u_27 = NULL,v_27 = NULL;
              t = term_k_9;
              u_27 = t;
              t = term_f_15;
              v_27 = t;
              t = term_j_21;
              t = m_6(u_27, v_27, t);
              {
                ATerm k_21 = t;
                int l_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = repository_query_0_0(t);
                    LocalPopChoice(l_21);
                  }
                else
                  {
                    t = k_21;
                    {
                      ATerm m_21 = t;
                      int o_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = all_query_0_0(t);
                          LocalPopChoice(o_21);
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
      t = term_n_20;
      n_27 = t;
      t = SSL_exit(n_27);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      t = debug_1_0(d_7, t);
    }
  return(t);
}
static ATerm v_5 (ATerm h_64, ATerm i_64, ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  t = i_64;
  t = map_1_0(xtc_find_0_0, t);
  w_27 = t;
  t = term_h_11;
  a_28 = t;
  t = SSL_print(a_28, w_27);
  t = term_h_11;
  y_27 = t;
  t = (ATerm) ATinsert(ATempty, term_l_11);
  z_27 = t;
  t = SSL_print(y_27, z_27);
  t = term_n_20;
  x_27 = t;
  t = SSL_exit(x_27);
  return(t);
}
static ATerm w_5 (ATerm o_48, ATerm p_48, ATerm t)
{
  t = SSL_execvp(o_48, p_48);
  return(t);
}
ATerm debug_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  b_28 = t;
  t = f_85(t);
  e_28 = t;
  t = term_t_12;
  f_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_28), e_28);
  g_28 = t;
  t = SSL_printnl(f_28, g_28);
  t = b_28;
  return(t);
}
static ATerm x_5 (ATerm l_57, ATerm t)
{
  t = SSL_hashtable_keys(l_57);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm h_28 = NULL,n_28 = NULL;
  static ATerm g_7 (ATerm t);
  static ATerm g_7 (ATerm t)
  {
    ATerm o_28 = NULL,p_28 = NULL;
    o_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_28), o_28);
    t = m_6(not_null(h_28), o_28, t);
    p_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
    return(t);
  }
  if(((h_28 != NULL) && (h_28 != t)))
    _fail(t);
  else
    h_28 = t;
  t = lookup_table_0_1(h_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(n_28, t);
  t = map_1_0(g_7, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm g_111 (ATerm), ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
        t = term_k_9;
        z_28 = t;
        t = term_r_9;
        a_29 = t;
        t = term_s_9;
        t = m_6(z_28, a_29, t);
        y_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_28, term_r_21);
        t = geq_0_0(t);
        t = r_28;
        t = g_111(t);
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = r_28;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  static ATerm b_31 (ATerm t);
  static ATerm b_31 (ATerm t)
  {
    ATerm w_30 = NULL,x_30 = NULL,a_31 = NULL;
    w_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_30 = ATgetFirst((ATermList) t);
        a_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_21 = t;
      int y_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_3 = NULL,q_3 = NULL,d_11 = NULL;
          t = SSLgetAnnotations(w_30);
          n_3 = t;
          t = x_30;
          t = a_86(t);
          q_3 = t;
          t = (ATerm) ATinsert(CheckATermList(a_31), q_3);
          d_11 = t;
          t = SSLsetAnnotations(d_11, n_3);
          LocalPopChoice(y_21);
        }
      else
        {
          t = v_21;
          {
            ATerm l_4 = NULL,p_4 = NULL,e_11 = NULL;
            t = SSLgetAnnotations(w_30);
            l_4 = t;
            t = a_31;
            t = b_31(t);
            p_4 = t;
            t = (ATerm) ATinsert(CheckATermList(p_4), x_30);
            e_11 = t;
            t = SSLsetAnnotations(e_11, l_4);
          }
        }
    }
    return(t);
  }
  t = b_31(t);
  return(t);
}
static ATerm m_6 (ATerm f_54, ATerm g_54, ATerm t)
{
  ATerm e_29 = NULL;
  t = lookup_table_0_1(f_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(g_54, e_29, t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_111 (ATerm), ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
        t = term_k_9;
        o_31 = t;
        t = term_r_9;
        p_31 = t;
        t = term_s_9;
        t = m_6(o_31, p_31, t);
        n_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_31, term_c_22);
        t = geq_0_0(t);
        t = g_31;
        t = f_111(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = g_31;
      }
  }
  return(t);
}
static ATerm l_6 (ATerm e_57, ATerm f_57, ATerm g_57, ATerm t)
{
  ATerm r_31 = NULL;
  t = SSL_hashtable_put(g_57, e_57, f_57);
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_31);
  return(t);
}
static ATerm k_6 (ATerm h_57, ATerm i_57, ATerm t)
{
  t = SSL_hashtable_get(i_57, h_57);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_57, ATerm n_57, ATerm t)
{
  ATerm s_31 = NULL;
  t = SSL_hashtable_create(m_57, n_57);
  s_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_31);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,z_31 = NULL,a_32 = NULL;
  v_31 = t;
  t = term_e_22;
  z_31 = t;
  t = term_f_22;
  a_32 = t;
  t = v_31;
  t = new_hashtable_0_2(z_31, a_32, t);
  w_31 = t;
  t = v_31;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(v_31, w_31, x_31, t);
  t = v_31;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_32 = NULL;
  t = SSL_table_hashtable();
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_32);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_53, ATerm t)
{
  ATerm u_32 = NULL;
  t = table_hashtable_0_0(t);
  u_32 = t;
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 = NULL;
        t = u_32;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_6(y_53, x_4, t);
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        {
          ATerm h_5 = NULL;
          t = y_53;
          t = table_create_0_0(t);
          t = u_32;
          if(match_cons(t, sym_Hashtable_1))
            {
              h_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_6(y_53, h_5, t);
        }
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_33 = NULL,x_33 = NULL,y_33 = NULL;
  t_33 = t;
  if(match_cons(t, sym__2))
    {
      x_33 = ATgetArgument(t, 0);
      y_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_33;
        if((x_33 != t))
          {
            _fail(t);
          }
        t = t_33;
        LocalPopChoice(k_22);
      }
    else
      {
        t = i_22;
        t = (ATerm) ATmakeAppl(sym__2, x_33, y_33);
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_33, y_33);
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              t = SSL_gtr(x_33, y_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_33, y_33);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm h_111 (ATerm), ATerm t)
{
  ATerm e_34 = NULL;
  e_34 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
        t = term_k_9;
        h_34 = t;
        t = term_r_9;
        i_34 = t;
        t = term_s_9;
        t = m_6(h_34, i_34, t);
        g_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_34, term_r_22);
        t = geq_0_0(t);
        t = e_34;
        t = h_111(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = e_34;
      }
  }
  return(t);
}
static ATerm b_6 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm v_20, ATerm u_20, ATerm t)
{
  t = f_90(t);
  {
    static ATerm i_7 (ATerm t);
    static ATerm i_7 (ATerm t)
    {
      ATerm k_34 = NULL;
      k_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_20, k_34);
      t = e_90(t);
      return(t);
    }
    t = fetch_1_0(i_7, t);
  }
  t = u_20;
  return(t);
}
static ATerm c_6 (ATerm b_90 (ATerm), ATerm r_20, ATerm q_20, ATerm t)
{
  static ATerm a_35 (ATerm t);
  static ATerm a_35 (ATerm t)
  {
    ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
    v_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_20;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_34 = ATgetFirst((ATermList) t);
            x_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_22 = t;
          int u_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_34;
              {
                static ATerm j_7 (ATerm t);
                static ATerm j_7 (ATerm t)
                {
                  t = q_20;
                  return(t);
                }
                t = b_6(b_90, j_7, w_34, x_34, t);
              }
              t = a_35(t);
              LocalPopChoice(u_22);
            }
          else
            {
              t = s_22;
              {
                ATerm c_7 = NULL,h_7 = NULL,k_11 = NULL;
                t = SSLgetAnnotations(v_34);
                c_7 = t;
                t = x_34;
                t = a_35(t);
                h_7 = t;
                t = (ATerm) ATinsert(CheckATermList(h_7), w_34);
                k_11 = t;
                t = SSLsetAnnotations(k_11, c_7);
              }
            }
        }
      }
    return(t);
  }
  t = r_20;
  t = a_35(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm p_35 = NULL;
  if(match_cons(t, sym__2))
    {
      p_35 = ATgetArgument(t, 0);
      if((p_35 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_6 (ATerm j_53, ATerm k_53, ATerm l_53, ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  d_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_53, k_53);
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_22 = ATgetArgument(t, 0);
            ATerm d_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_53, k_53);
        t = m_6(j_53, k_53, t);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = (ATerm) ATempty;
      }
  }
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_35, l_53);
  t = c_6(k_7, f_35, l_53, t);
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_53, k_53, e_35);
  t = lookup_table_0_1(j_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(k_53, e_35, g_35, t);
  t = d_35;
  return(t);
}
ATerm map_1_0 (ATerm q_85 (ATerm), ATerm t)
{
  static ATerm g_36 (ATerm t);
  static ATerm g_36 (ATerm t)
  {
    ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
    d_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_36;
      }
    else
      {
        ATerm t_7 = NULL,d_8 = NULL,e_8 = NULL,m_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_36 = ATgetFirst((ATermList) t);
            f_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_36);
        t_7 = t;
        t = e_36;
        t = q_85(t);
        d_8 = t;
        t = f_36;
        t = g_36(t);
        e_8 = t;
        t = (ATerm) ATinsert(CheckATermList(e_8), d_8);
        m_11 = t;
        t = SSLsetAnnotations(m_11, t_7);
      }
    return(t);
  }
  t = g_36(t);
  return(t);
}
static ATerm e_6 (ATerm h_106 (ATerm), ATerm t_53, ATerm s_53, ATerm t)
{
  static ATerm l_7 (ATerm t);
  static ATerm l_7 (ATerm t)
  {
    ATerm i_36 = NULL,j_36 = NULL;
    if(match_cons(t, sym__2))
      {
        i_36 = ATgetArgument(t, 0);
        j_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, t_53, i_36, j_36);
    t = h_106(t);
    return(t);
  }
  t = s_53;
  t = map_1_0(l_7, t);
  return(t);
}
static ATerm j_6 (ATerm l_29, ATerm m_29, ATerm t)
{
  t = SSL_access(l_29, m_29);
  return(t);
}
static ATerm x_36 (ATerm r_36, ATerm t)
{
  t = SSL_fclose(r_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  v_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_36 = ATgetArgument(t, 0);
      {
        ATerm e_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_36);
            LocalPopChoice(h_23);
          }
        else
          {
            t = e_23;
            t = x_36(v_36, t);
          }
      }
    }
  else
    {
      t = x_36(v_36, t);
    }
  return(t);
}
static ATerm f_6 (ATerm p_14, ATerm t)
{
  t = SSL_read_term_from_stream(p_14);
  return(t);
}
static ATerm g_6 (ATerm l_28, ATerm m_28, ATerm t)
{
  t = SSL_strcat(l_28, m_28);
  return(t);
}
static ATerm h_6 (ATerm u_29, ATerm v_29, ATerm t)
{
  ATerm y_36 = NULL;
  t = SSL_fopen(u_29, v_29);
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_36 = NULL;
  t = SSL_stdin_stream();
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_37 = NULL;
  t = SSL_stdout_stream();
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_37);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_37 = NULL;
  t = SSL_stderr_stream();
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_37);
  return(t);
}
static ATerm i_38 (ATerm h_37, ATerm t)
{
  ATerm i_37 = NULL;
  t = SSL_explode_term(h_37);
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_23 = ATgetArgument(t, 1);
        if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
          {
            i_37 = ATgetFirst((ATermList) k_23);
            {
              ATerm l_23 = (ATerm) ATgetNext((ATermList) k_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_38 (ATerm l_37, ATerm m_37, ATerm n_37, ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,t_37 = NULL,o_11 = NULL;
  t = SSLgetAnnotations(n_37);
  q_37 = t;
  t = l_37;
  if(match_cons(t, sym_Path_1))
    {
      t_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_37, m_37);
  o_11 = t;
  t = SSLsetAnnotations(o_11, q_37);
  if(match_cons(t, sym__2))
    {
      o_37 = ATgetArgument(t, 0);
      p_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(o_37, p_37, t);
  return(t);
}
static ATerm k_38 (ATerm v_37, ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,d_38 = NULL,v_11 = NULL;
  t = SSLgetAnnotations(x_37);
  a_38 = t;
  t = SSL_is_string(v_37);
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_38, w_37);
  v_11 = t;
  t = SSLsetAnnotations(v_11, a_38);
  if(match_cons(t, sym__2))
    {
      y_37 = ATgetArgument(t, 0);
      z_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(y_37, z_37, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  if(match_cons(t, sym__2))
    {
      g_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
      {
        ATerm m_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_38(f_38, t);
            LocalPopChoice(o_23);
          }
        else
          {
            t = m_23;
            {
              ATerm p_23 = t;
              int q_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_38(g_38, h_38, f_38, t);
                  LocalPopChoice(q_23);
                }
              else
                {
                  t = p_23;
                  t = k_38(g_38, h_38, f_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_38(f_38, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,t_38 = NULL;
  t_38 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_38, term_w_23);
        t = i_6(t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        {
          ATerm g_9 = NULL,j_9 = NULL;
          t = term_x_23;
          j_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_23, t_38);
          t = g_6(j_9, t_38, t);
          g_9 = t;
          t = SSL_perror(g_9);
          _fail(t);
        }
      }
  }
  n_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(o_38, t);
  m_38 = t;
  t = n_38;
  t = fclose_0_0(t);
  t = m_38;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_y_23;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_38 = NULL,x_38 = NULL;
      w_38 = t;
      t = (ATerm) ATinsert(ATempty, term_e_24);
      x_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_38, (ATerm) ATinsert(ATempty, term_e_24));
      t = j_6(w_38, x_38, t);
      LocalPopChoice(d_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_24;
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_24 = t;
            if((PushChoice() == 0))
              {
                ATerm y_38 = NULL,z_38 = NULL;
                y_38 = t;
                t = (ATerm) ATinsert(ATempty, term_h_13);
                z_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_38, (ATerm) ATinsert(ATempty, term_h_13));
                t = j_6(y_38, z_38, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_24;
              }
            t = debug_1_0(m_7, t);
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            t = debug_1_0(n_7, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = debug_1_0(x_7, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_n_24;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = debug_1_0(a_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_v_24;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  t = term_t_12;
  r_39 = t;
  t = (ATerm) ATinsert(ATempty, term_w_24);
  s_39 = t;
  t = SSL_printnl(r_39, s_39);
  t = q_39;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
  if(match_cons(t, sym__3))
    {
      t_39 = ATgetArgument(t, 0);
      u_39 = ATgetArgument(t, 1);
      v_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_6(t_39, u_39, v_39, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  t = term_t_12;
  x_39 = t;
  t = (ATerm) ATinsert(ATempty, term_x_24);
  y_39 = t;
  t = SSL_printnl(x_39, y_39);
  t = w_39;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  z_39 = t;
  t = term_t_12;
  a_40 = t;
  t = (ATerm) ATinsert(ATempty, term_w_24);
  b_40 = t;
  t = SSL_printnl(a_40, b_40);
  t = z_39;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
  a_39 = t;
  t = if_verbose5_1_0(s_7, t);
  {
    ATerm y_24 = t;
    if((PushChoice() == 0))
      {
        ATerm o_39 = NULL,p_39 = NULL;
        t = term_u_9;
        o_39 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, a_39);
        p_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATmakeAppl(sym_Imported_1, a_39));
        t = m_6(o_39, p_39, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_24;
      }
  }
  c_39 = t;
  t = term_u_9;
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_9, term_c_25, (ATerm) ATinsert(ATempty, a_39));
  t = lookup_table_0_1(j_39, t);
  n_39 = t;
  t = term_c_25;
  k_39 = t;
  t = (ATerm) ATinsert(ATempty, a_39);
  l_39 = t;
  t = n_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(k_39, l_39, m_39, t);
  t = c_39;
  t = if_verbose4_1_0(z_7, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(k_8, t);
  b_39 = t;
  t = term_u_9;
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_9, b_39);
  t = e_6(l_8, i_39, b_39, t);
  t = if_verbose6_1_0(p_8, t);
  t = term_u_9;
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_9, (ATerm)ATmakeAppl(sym_Imported_1, a_39), (ATerm) ATempty);
  t = lookup_table_0_1(d_39, t);
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, a_39);
  e_39 = t;
  t = (ATerm) ATempty;
  f_39 = t;
  t = h_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(e_39, f_39, g_39, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_9, (ATerm)ATmakeAppl(sym_Imported_1, a_39), (ATerm) ATempty);
  t = if_verbose4_1_0(r_8, t);
  return(t);
}
ATerm filter_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
  n_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_40;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_40 = ATgetFirst((ATermList) t);
          p_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_9 = NULL,a_10 = NULL,b_10 = NULL,c_12 = NULL;
            t = SSLgetAnnotations(n_40);
            q_9 = t;
            t = o_40;
            t = t_93(t);
            a_10 = t;
            t = p_40;
            t = filter_1_0(t_93, t);
            b_10 = t;
            t = (ATerm) ATinsert(CheckATermList(b_10), a_10);
            c_12 = t;
            t = SSLsetAnnotations(c_12, q_9);
            LocalPopChoice(f_25);
          }
        else
          {
            t = d_25;
            t = p_40;
            t = filter_1_0(t_93, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm t)
{
  static ATerm s_40 (ATerm t);
  static ATerm s_40 (ATerm t)
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_78(t);
        t = s_40(t);
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = f_78(t);
      }
    return(t);
  }
  t = s_40(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_40 = NULL,u_40 = NULL;
      t = term_k_9;
      t_40 = t;
      t = term_b_13;
      u_40 = t;
      t = term_c_13;
      t = m_6(t_40, u_40, t);
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      {
        ATerm n_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_40 = NULL;
            t = term_r_25;
            v_40 = t;
            t = SSL_getenv(v_40);
            LocalPopChoice(o_25);
          }
        else
          {
            t = n_25;
            t = XTC_REPOSITORY();
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
  t = term_s_25;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL;
  t = term_u_9;
  b_41 = t;
  t = term_d_10;
  c_41 = t;
  t = term_e_10;
  t = m_6(b_41, c_41, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm t_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_25;
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
  t = term_u_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm x_40 = NULL;
  t = if_verbose5_1_0(s_8, t);
  x_40 = t;
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_40 = NULL,z_40 = NULL;
        t = term_u_9;
        y_40 = t;
        t = term_c_25;
        z_40 = t;
        t = term_y_25;
        t = m_6(y_40, z_40, t);
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        {
          ATerm a_41 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          a_41 = t;
          t = repeat_2_0(v_8, _id, t);
          t = a_41;
        }
      }
  }
  t = x_40;
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
  t = term_z_25;
  return(t);
}
static ATerm z_41 (ATerm h_41, ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  t = term_u_9;
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, h_41);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATmakeAppl(sym_Tool_1, h_41));
  t = m_6(k_41, l_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_26 = ATgetFirst((ATermList) t);
      if(match_cons(b_26, sym__2))
        {
          ATerm g_26 = ATgetArgument(b_26, 0);
          j_41 = ATgetArgument(b_26, 1);
        }
      else
        _fail(t);
      {
        ATerm c_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_41;
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
  t = term_u_9;
  t = table_getlist_0_0(t);
  t = debug_1_0(h_9, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
      t = if_verbose5_1_0(a_9, t);
      t = xtc_load_0_0(t);
      o_41 = t;
      if(match_cons(t, sym__2))
        {
          m_41 = ATgetArgument(t, 0);
          n_41 = ATgetArgument(t, 1);
          {
            ATerm r_26 = t;
            int s_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
                t = term_u_9;
                s_41 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, m_41);
                t_41 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATmakeAppl(sym_Tool_1, m_41));
                t = m_6(s_41, t_41, t);
                {
                  static ATerm c_9 (ATerm t);
                  static ATerm c_9 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((n_41 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((r_41 != NULL) && (r_41 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_41 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(c_9, t);
                }
                t = not_null(r_41);
                LocalPopChoice(s_26);
              }
            else
              {
                t = r_26;
                t = z_41(o_41, t);
              }
          }
        }
      else
        {
          t = z_41(o_41, t);
        }
      t = if_verbose5_1_0(d_9, t);
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm y_41 = NULL,s_10 = NULL,u_10 = NULL;
        y_41 = t;
        t = term_t_12;
        s_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_26), y_41), term_t_26);
        u_10 = t;
        t = SSL_printnl(s_10, u_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_26), y_41), term_t_26);
        t = if_verbose5_1_0(f_9, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
      h_42 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_42 = ATgetFirst((ATermList) t);
          j_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_42 = ATgetFirst((ATermList) t);
          l_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_42;
      if(match_string(t, "call"))
        {
          ATerm p_42 = NULL;
          t = l_42;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_42 = ATgetFirst((ATermList) t);
              g_42 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_42;
          t = xtc_find_0_0(t);
          p_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_42, g_42);
          t = w_5(p_42, g_42, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = h_42;
          t = v_5(i_42, l_42, t);
        }
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      t = xtc_main_0_0(t);
    }
  return(t);
}
