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
ATerm term_y_25;
ATerm term_x_25;
ATerm term_s_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_u_23;
ATerm term_p_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_b_22;
ATerm term_n_21;
ATerm term_g_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_t_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_u_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_n_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_h_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_l_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_z_9);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_p_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_s_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_x_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_s_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_c_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
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
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_y_13);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_y_13);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_y_13);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_g_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, term_a_14, term_b_14);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__2, term_u_17, term_y_13);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_b_18, term_y_13);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_y_13);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_d_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_u_17);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_q_14);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_v_14);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_g_24);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm version_query_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm m_97 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm tool_query_0_0 (ATerm t);
static ATerm w_4 (ATerm y_51, ATerm a_654, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm all_query_0_0 (ATerm t);
ATerm repository_query_0_0 (ATerm t);
static ATerm x_4 (ATerm e_14, ATerm f_14, ATerm t);
static ATerm y_4 (ATerm f_73 (ATerm), ATerm l_147, ATerm o_14, ATerm t);
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
static ATerm z_4 (ATerm i_44, ATerm j_44, ATerm h_44, ATerm t);
ATerm if_verbose1_1_0 (ATerm k_97 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm l_97 (ATerm), ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm f_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_15 (ATerm v_13, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_5 (ATerm u_49, ATerm t_49, ATerm t);
static ATerm r_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm xtc_options_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm d_5 (ATerm o_49, ATerm p_49, ATerm t);
static ATerm b_5 (ATerm q_43, ATerm r_43, ATerm p_43, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm q_52 (ATerm), ATerm r_52 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_92 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm parse_options_1_0 (ATerm m_92 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm xtc_main_0_0 (ATerm t);
static ATerm f_5 (ATerm o_52, ATerm p_52, ATerm t);
static ATerm g_5 (ATerm s_39, ATerm t_39, ATerm t);
ATerm debug_1_0 (ATerm d_73 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm o_97 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm y_73 (ATerm), ATerm t);
static ATerm t_5 (ATerm h_45, ATerm i_45, ATerm t);
ATerm if_verbose4_1_0 (ATerm n_97 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm p_97 (ATerm), ATerm t);
static ATerm k_5 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm q_20, ATerm p_20, ATerm t);
static ATerm l_5 (ATerm z_77 (ATerm), ATerm m_20, ATerm l_20, ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_5 (ATerm n_44, ATerm o_44, ATerm p_44, ATerm t);
ATerm map_1_0 (ATerm o_73 (ATerm), ATerm t);
static ATerm n_5 (ATerm q_92 (ATerm), ATerm x_44, ATerm w_44, ATerm t);
static ATerm s_5 (ATerm g_29, ATerm h_29, ATerm t);
static ATerm q_33 (ATerm j_33, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_5 (ATerm k_14, ATerm t);
static ATerm p_5 (ATerm g_28, ATerm h_28, ATerm t);
static ATerm q_5 (ATerm p_29, ATerm q_29, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_35 (ATerm a_34, ATerm t);
static ATerm c_35 (ATerm e_34, ATerm f_34, ATerm g_34, ATerm t);
static ATerm d_35 (ATerm o_34, ATerm p_34, ATerm q_34, ATerm t);
static ATerm r_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_81 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm o_38 (ATerm w_37, ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
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
  t = term_h_9;
  x_0 = t;
  t = term_l_9;
  y_0 = t;
  t = term_r_9;
  t = t_5(x_0, y_0, t);
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
  t = w_4(l_0, v_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  {
    ATerm s_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL;
        t = term_h_9;
        i_1 = t;
        t = term_z_9;
        j_1 = t;
        t = term_b_10;
        t = t_5(i_1, j_1, t);
        h_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_1, term_h_10);
        t = geq_0_0(t);
        t = f_1;
        t = m_97(t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = s_9;
        t = f_1;
      }
  }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm y_1 = NULL,d_2 = NULL;
  t = term_l_10;
  y_1 = t;
  t = term_p_10;
  d_2 = t;
  t = term_r_10;
  t = t_5(y_1, d_2, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm s_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_10;
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
  t = term_u_10;
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm q_1 = NULL,s_1 = NULL,u_1 = NULL,w_1 = NULL;
  static ATerm f_0 (ATerm t)
  {
    ATerm g_2 = NULL;
    g_2 = t;
    {
      ATerm z_10 = t;
      int a_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 = NULL,i_2 = NULL;
          t = if_verbose3_1_0(r_0, t);
          t = term_l_10;
          h_2 = t;
          t = (ATerm) ATmakeAppl(sym_Tool_1, g_2);
          i_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_10, (ATerm) ATmakeAppl(sym_Tool_1, g_2));
          t = t_5(h_2, i_2, t);
          if(((q_1 != NULL) && (q_1 != t)))
            _fail(t);
          else
            q_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, g_2), q_1);
          {
            ATerm d_11 = t;
            int h_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = version_query_0_0(t);
                LocalPopChoice(h_11);
              }
            else
              {
                t = d_11;
                if(match_cons(t, sym__2))
                  {
                    ATerm i_11 = ATgetArgument(t, 0);
                    ATerm n_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, g_2), q_1);
                t = w_4(g_2, q_1, t);
              }
          }
          LocalPopChoice(a_11);
        }
      else
        {
          t = z_10;
          {
            ATerm p_2 = NULL,q_2 = NULL;
            t = term_o_11;
            p_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_11), term_q_11), g_2);
            q_2 = t;
            t = SSL_print(p_2, q_2);
            t = (ATerm) ATmakeAppl(sym__2, term_o_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_11), term_q_11), g_2));
          }
        }
    }
    return(t);
  }
  t = term_h_9;
  u_1 = t;
  t = term_s_11;
  w_1 = t;
  t = term_t_11;
  t = t_5(u_1, w_1, t);
  s_1 = t;
  t = repeat_2_0(b_0, _id, t);
  t = s_1;
  t = map_1_0(f_0, t);
  return(t);
}
static ATerm w_4 (ATerm y_51, ATerm a_654, ATerm t)
{
  static ATerm g_1 (ATerm t)
  {
    ATerm s_2 = NULL,t_2 = NULL;
    if(match_cons(t, sym__2))
      {
        s_2 = ATgetArgument(t, 0);
        t_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm u_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_2 = NULL,w_2 = NULL,a_3 = NULL,b_3 = NULL;
          t = term_h_9;
          a_3 = t;
          t = term_x_11;
          b_3 = t;
          t = term_a_12;
          t = t_5(a_3, b_3, t);
          t = term_o_11;
          u_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_r_11), t_2);
          w_2 = t;
          t = SSL_print(u_2, w_2);
          t = (ATerm) ATmakeAppl(sym__2, term_o_11, (ATerm) ATinsert(ATinsert(ATempty, term_r_11), t_2));
          LocalPopChoice(v_11);
        }
      else
        {
          t = u_11;
          {
            ATerm e_3 = NULL,f_3 = NULL;
            t = term_o_11;
            e_3 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_11), t_2), term_d_12), s_2), term_b_12), y_51);
            f_3 = t;
            t = SSL_print(e_3, f_3);
            t = (ATerm) ATmakeAppl(sym__2, term_o_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_11), t_2), term_d_12), s_2), term_b_12), y_51));
          }
        }
    }
    return(t);
  }
  t = a_654;
  t = map_1_0(g_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  t = term_l_10;
  r_3 = t;
  t = term_p_10;
  s_3 = t;
  t = term_r_10;
  t = t_5(r_3, s_3, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm e_12 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_12;
      }
  }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm i_5 = NULL,u_5 = NULL,v_5 = NULL;
  v_5 = t;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 = NULL,j_0 = NULL,q_0 = NULL,w_0 = NULL,z_0 = NULL,e_1 = NULL,b_4 = NULL,a_4 = NULL;
            t = SSLgetAnnotations(v_5);
            q_0 = t;
            t = i_5;
            if(match_cons(t, sym_Tool_1))
              {
                z_0 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_5);
            w_0 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, z_0);
            a_4 = t;
            t = SSLsetAnnotations(a_4, w_0);
            e_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_1, u_5);
            b_4 = t;
            t = SSLsetAnnotations(b_4, q_0);
            if(match_cons(t, sym__2))
              {
                ATerm h_12 = ATgetArgument(t, 0);
                if(match_cons(h_12, sym_Tool_1))
                  {
                    h_0 = ATgetArgument(h_12, 0);
                  }
                else
                  _fail(t);
                j_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_4(h_0, j_0, t);
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = v_5;
          }
      }
    }
  else
    {
      t = v_5;
    }
  return(t);
}
ATerm all_query_0_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  t = term_h_9;
  p_3 = t;
  t = term_i_12;
  q_3 = t;
  t = term_j_12;
  t = t_5(p_3, q_3, t);
  t = repeat_2_0(k_1, _id, t);
  t = term_l_10;
  t = table_getlist_0_0(t);
  t = map_1_0(l_1, t);
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm b_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,l_6 = NULL;
  t = term_h_9;
  i_6 = t;
  t = term_k_12;
  l_6 = t;
  t = term_l_12;
  t = t_5(i_6, l_6, t);
  t = xtc_location_0_0(t);
  b_6 = t;
  t = term_o_11;
  g_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_11), b_6), term_m_12);
  h_6 = t;
  t = SSL_print(g_6, h_6);
  t = (ATerm) ATmakeAppl(sym__2, term_o_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_11), b_6), term_m_12));
  return(t);
}
static ATerm x_4 (ATerm e_14, ATerm f_14, ATerm t)
{
  ATerm m_6 = NULL;
  t = SSL_write_term_to_stream_baf(e_14, f_14);
  m_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_6);
  return(t);
}
static ATerm y_4 (ATerm f_73 (ATerm), ATerm l_147, ATerm o_14, ATerm t)
{
  ATerm v_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_147, term_n_12);
  t = r_5(t);
  v_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_6, o_14);
  t = f_73(t);
  t = fclose_0_0(t);
  t = o_14;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  t = term_o_12;
  c_7 = t;
  t = (ATerm) ATinsert(ATempty, term_p_12);
  d_7 = t;
  t = SSL_printnl(c_7, d_7);
  t = b_7;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_12 = ATgetArgument(t, 0);
      if(match_cons(q_12, sym_Stream_1))
        {
          p_7 = ATgetArgument(q_12, 0);
        }
      else
        _fail(t);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(p_7, q_7, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL;
  t = if_verbose1_1_0(m_1, t);
  t = term_h_9;
  x_6 = t;
  t = term_s_12;
  y_6 = t;
  t = term_t_12;
  t = t_5(x_6, y_6, t);
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 = NULL,f_7 = NULL;
            e_7 = t;
            t = (ATerm) ATinsert(ATempty, term_y_12);
            f_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_7, (ATerm) ATinsert(ATempty, term_y_12));
            t = s_5(e_7, f_7, t);
            LocalPopChoice(x_12);
            {
              ATerm i_7 = NULL,j_7 = NULL;
              i_7 = t;
              t = (ATerm) ATinsert(ATempty, term_z_12);
              j_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_7, (ATerm) ATinsert(ATempty, term_z_12));
              t = s_5(i_7, j_7, t);
            }
          }
        else
          {
            t = w_12;
          }
        LocalPopChoice(v_12);
        {
          ATerm n_7 = NULL,o_7 = NULL;
          o_7 = t;
          t = term_l_10;
          t = table_getlist_0_0(t);
          n_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_7, n_7);
          t = y_4(n_1, o_7, n_7, t);
        }
      }
    else
      {
        t = u_12;
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
  t = term_a_13;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,a_8 = NULL,h_8 = NULL;
  t = term_h_9;
  a_8 = t;
  t = term_c_13;
  h_8 = t;
  t = term_d_13;
  t = t_5(a_8, h_8, t);
  t = if_verbose2_1_0(p_1, t);
  t = term_h_9;
  w_7 = t;
  t = term_c_13;
  x_7 = t;
  t = term_d_13;
  t = t_5(w_7, x_7, t);
  t_7 = t;
  t = if_verbose5_1_0(t_1, t);
  t = term_l_10;
  u_7 = t;
  t = term_p_10;
  v_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_10, term_p_10, t_7);
  t = z_4(u_7, v_7, t_7, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      v_8 = ATgetArgument(t, 0);
      if((v_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm i_44, ATerm j_44, ATerm h_44, ATerm t)
{
  ATerm l_8 = NULL,o_8 = NULL,p_8 = NULL;
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_44, j_44);
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_13 = ATgetArgument(t, 0);
            ATerm h_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_44, j_44);
        t = t_5(i_44, j_44, t);
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = (ATerm) ATempty;
      }
  }
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_44, p_8);
  t = l_5(z_1, h_44, p_8, t);
  o_8 = t;
  t = SSL_table_put(i_44, j_44, o_8);
  t = l_8;
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_97 (ATerm), ATerm t)
{
  ATerm c_9 = NULL;
  c_9 = t;
  {
    ATerm k_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
        t = term_h_9;
        f_9 = t;
        t = term_z_9;
        g_9 = t;
        t = term_b_10;
        t = t_5(f_9, g_9, t);
        e_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_9, term_o_13);
        t = geq_0_0(t);
        t = c_9;
        t = k_97(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = k_13;
        t = c_9;
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,a_10 = NULL;
  w_9 = t;
  t = term_o_12;
  x_9 = t;
  t = (ATerm) ATinsert(ATempty, term_p_13);
  a_10 = t;
  t = SSL_printnl(x_9, a_10);
  t = w_9;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm i_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  static ATerm m_2 (ATerm t)
  {
    ATerm c_10 = NULL,e_10 = NULL,g_10 = NULL,i_10 = NULL,j_10 = NULL,m_10 = NULL;
    e_10 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_10), term_t_13), not_null(n_9));
    m_10 = t;
    t = SSL_concat_strings(m_10);
    c_10 = t;
    t = term_l_10;
    g_10 = t;
    t = (ATerm) ATmakeAppl(sym_Tool_1, e_10);
    i_10 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(m_9), c_10));
    j_10 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_l_10, (ATerm)ATmakeAppl(sym_Tool_1, e_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(m_9), c_10)));
    t = z_4(g_10, i_10, j_10, t);
    return(t);
  }
  t = term_h_9;
  u_9 = t;
  t = term_s_11;
  v_9 = t;
  t = term_t_11;
  t = t_5(u_9, v_9, t);
  i_9 = t;
  t = if_verbose1_1_0(b_2, t);
  t = if_verbose2_1_0(c_2, t);
  t = term_h_9;
  q_9 = t;
  t = term_l_9;
  t_9 = t;
  t = term_r_9;
  t = t_5(q_9, t_9, t);
  if(((m_9 != NULL) && (m_9 != t)))
    _fail(t);
  else
    m_9 = t;
  t = if_verbose2_1_0(f_2, t);
  t = term_h_9;
  o_9 = t;
  t = term_x_11;
  p_9 = t;
  t = term_a_12;
  t = t_5(o_9, p_9, t);
  if(((n_9 != NULL) && (n_9 != t)))
    _fail(t);
  else
    n_9 = t;
  t = if_verbose2_1_0(k_2, t);
  t = i_9;
  t = map_1_0(m_2, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm q_10 = NULL;
  q_10 = t;
  {
    ATerm u_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
        t = term_h_9;
        x_10 = t;
        t = term_z_9;
        y_10 = t;
        t = term_b_10;
        t = t_5(x_10, y_10, t);
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_10, term_x_13);
        t = geq_0_0(t);
        t = q_10;
        t = l_97(t);
        LocalPopChoice(w_13);
      }
    else
      {
        t = u_13;
        t = q_10;
      }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,k_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_11 = NULL,m_11 = NULL,p_11 = NULL;
      t = term_y_13;
      t = p_0(t);
      l_11 = t;
      t = term_a_14;
      m_11 = t;
      t = term_b_14;
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_14, term_b_14, l_11);
      t = b_5(m_11, p_11, l_11, t);
      _fail(t);
    }
  else
    {
      ATerm w_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_11 = ATgetFirst((ATermList) t);
          f_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_11 = ATgetFirst((ATermList) t);
          k_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_11;
      t = n_0(t);
      t = g_11;
      t = o_0(t);
      w_11 = t;
      t = (ATerm) ATinsert(CheckATermList(k_11), w_11);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  static ATerm n_13 (ATerm t)
  {
    ATerm i_13 = NULL,j_13 = NULL,l_13 = NULL;
    l_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_13 = ATgetFirst((ATermList) t);
        j_13 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_1 = NULL,a_2 = NULL,e_4 = NULL;
          t = SSLgetAnnotations(l_13);
          v_1 = t;
          t = j_13;
          t = n_13(t);
          a_2 = t;
          t = (ATerm) ATinsert(CheckATermList(a_2), i_13);
          e_4 = t;
          t = SSLsetAnnotations(e_4, v_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_13;
        t = f_74(t);
      }
    return(t);
  }
  t = n_13(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,c_12 = NULL;
  y_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_11;
    }
  else
    {
      static ATerm n_2 (ATerm t)
      {
        t = not_null(c_12);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_11 = ATgetFirst((ATermList) t);
          if(((c_12 != NULL) && (c_12 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_11;
      t = at_end_1_0(n_2, t);
    }
  return(t);
}
static ATerm b_15 (ATerm v_13, ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_explode_term(v_13);
  if(match_cons(t, sym__2))
    {
      ATerm c_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_13;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_14 = NULL,h_14 = NULL,j_14 = NULL;
  j_14 = t;
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
      {
        ATerm g_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_2 (ATerm t)
            {
              t = h_14;
              return(t);
            }
            t = d_14;
            t = at_end_1_0(o_2, t);
            LocalPopChoice(i_14);
          }
        else
          {
            t = g_14;
            t = b_15(j_14, t);
          }
      }
    }
  else
    {
      t = b_15(j_14, t);
    }
  return(t);
}
static ATerm a_5 (ATerm u_49, ATerm t_49, ATerm t)
{
  ATerm c_15 = NULL,i_15 = NULL,m_15 = NULL;
  t = u_49;
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_15 = NULL;
        t = term_h_9;
        n_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_9, u_49);
        t = t_5(n_15, u_49, t);
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = (ATerm) ATempty;
      }
  }
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_49, i_15);
  t = conc_0_0(t);
  c_15 = t;
  t = term_h_9;
  m_15 = t;
  t = SSL_table_put(m_15, u_49, c_15);
  t = (ATerm) ATmakeAppl(sym__3, term_h_9, u_49, c_15);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm k_16 = NULL;
  k_16 = t;
  if(match_string(t, "-r"))
    {
      t = k_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = k_16;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  l_16 = t;
  t = term_s_12;
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, l_16);
  t = d_5(m_16, l_16, t);
  t = l_16;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_n_14;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm o_16 = NULL;
  o_16 = t;
  if(match_string(t, "i"))
    {
      t = o_16;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = o_16;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = o_16;
        }
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  t = term_c_13;
  q_16 = t;
  t = (ATerm) ATinsert(ATempty, p_16);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATinsert(ATempty, p_16));
  t = a_5(q_16, r_16, t);
  t = p_16;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_p_14;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm t_16 = NULL;
  t_16 = t;
  if(match_string(t, "r"))
    {
      t = t_16;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = t_16;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = t_16;
        }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm u_16 = NULL,x_16 = NULL;
  u_16 = t;
  t = term_q_14;
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_14, u_16);
  t = d_5(x_16, u_16, t);
  t = u_16;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_r_14;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  if(match_string(t, "-t"))
    {
      t = y_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = y_16;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm c_17 = NULL,f_17 = NULL,g_17 = NULL;
  c_17 = t;
  t = term_s_11;
  f_17 = t;
  t = (ATerm) ATinsert(ATempty, c_17);
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_11, (ATerm) ATinsert(ATempty, c_17));
  t = a_5(f_17, g_17, t);
  t = c_17;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_s_14;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm h_17 = NULL;
  h_17 = t;
  if(match_string(t, "-l"))
    {
      t = h_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = h_17;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  j_17 = t;
  t = term_x_11;
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, j_17);
  t = d_5(k_17, j_17, t);
  t = j_17;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_t_14;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm l_17 = NULL;
  l_17 = t;
  if(match_string(t, "-V"))
    {
      t = l_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = l_17;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL;
  m_17 = t;
  t = term_l_9;
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, m_17);
  t = d_5(n_17, m_17, t);
  t = m_17;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_u_14;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm o_17 = NULL;
  o_17 = t;
  if(match_string(t, "q"))
    {
      t = o_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = o_17;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm p_17 = NULL,s_17 = NULL;
  p_17 = t;
  t = term_v_14;
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_14, p_17);
  t = d_5(s_17, p_17, t);
  t = p_17;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_w_14;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm v_17 = NULL;
  v_17 = t;
  if(match_string(t, "-a"))
    {
      t = v_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = v_17;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
  w_17 = t;
  t = term_i_12;
  x_17 = t;
  t = term_y_13;
  y_17 = t;
  t = term_x_14;
  t = d_5(x_17, y_17, t);
  t = w_17;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_y_14;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  if(match_string(t, "-L"))
    {
      t = c_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = c_18;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm f_18 = NULL,i_18 = NULL,j_18 = NULL;
  f_18 = t;
  t = term_x_11;
  i_18 = t;
  t = term_y_13;
  j_18 = t;
  t = term_z_14;
  t = d_5(i_18, j_18, t);
  t = f_18;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_a_15;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm o_18 = NULL;
  o_18 = t;
  if(match_string(t, "-R"))
    {
      t = o_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = o_18;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm p_18 = NULL,v_18 = NULL,w_18 = NULL;
  p_18 = t;
  t = term_k_12;
  v_18 = t;
  t = term_y_13;
  w_18 = t;
  t = term_d_15;
  t = d_5(v_18, w_18, t);
  t = p_18;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_e_15;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  t = SSL_string_to_int(z_18);
  a_19 = t;
  t = term_z_9;
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, a_19);
  t = d_5(b_19, a_19, t);
  t = z_18;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_f_15;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(r_2, z_2, c_3, t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_3, j_3, k_3, t);
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            {
              ATerm l_15 = t;
              int o_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_3, m_3, o_3, t);
                  LocalPopChoice(o_15);
                }
              else
                {
                  t = l_15;
                  {
                    ATerm p_15 = t;
                    int q_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(t_3, u_3, w_3, t);
                        LocalPopChoice(q_15);
                      }
                    else
                      {
                        t = p_15;
                        {
                          ATerm r_15 = t;
                          int s_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(x_3, y_3, z_3, t);
                              LocalPopChoice(s_15);
                            }
                          else
                            {
                              t = r_15;
                              {
                                ATerm t_15 = t;
                                int u_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(c_4, d_4, f_4, t);
                                    LocalPopChoice(u_15);
                                  }
                                else
                                  {
                                    t = t_15;
                                    {
                                      ATerm v_15 = t;
                                      int w_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(g_4, h_4, i_4, t);
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
                                                t = Option_3_0(j_4, m_4, n_4, t);
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
                                                      t = Option_3_0(p_4, q_4, r_4, t);
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
                                                            t = Option_3_0(t_4, u_4, v_4, t);
                                                            LocalPopChoice(c_16);
                                                          }
                                                        else
                                                          {
                                                            t = b_16;
                                                            t = ArgOption_3_0(e_5, h_5, j_5, t);
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
  ATerm f_19 = NULL,i_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_19 = ATgetFirst((ATermList) t);
      i_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_19 = NULL,v_19 = NULL;
        static ATerm w_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_19)), not_null(v_19));
          return(t);
        }
        t = i_19;
        t = k_0(t);
        if(((u_19 != NULL) && (u_19 != t)))
          _fail(t);
        else
          u_19 = t;
        t = f_19;
        t = i_0(t);
        if(((v_19 != NULL) && (v_19 != t)))
          _fail(t);
        else
          v_19 = t;
        t = i_19;
        t = reverse_acc_2_0(i_0, w_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_13;
      t = k_0(t);
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm e_20 = NULL,h_20 = NULL,i_20 = NULL,l_4 = NULL;
  i_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_20);
  e_20 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_20);
  l_4 = t;
  t = SSLsetAnnotations(l_4, e_20);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm u_20 = NULL;
  u_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_20), term_d_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_20 = NULL,d_20 = NULL;
      t = term_h_9;
      c_20 = t;
      t = term_g_16;
      d_20 = t;
      t = term_h_16;
      t = t_5(c_20, d_20, t);
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
      t = fetch_1_0(x_5, t);
    }
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_16), term_s_16), term_n_16);
        t = echo_0_0(t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
      }
  }
  t = term_w_16;
  t = echo_0_0(t);
  t = term_a_14;
  a_20 = t;
  t = term_b_14;
  b_20 = t;
  t = term_z_16;
  t = t_5(a_20, b_20, t);
  t = reverse_acc_2_0(_id, y_5, t);
  t = map_1_0(z_5, t);
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_17), term_d_17), term_r_11);
        t = echo_0_0(t);
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  {
    ATerm i_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_17 = ATgetFirst((ATermList) t);
                ATerm t_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_20;
          }
        LocalPopChoice(q_17);
      }
    else
      {
        t = i_17;
        t = (ATerm) ATinsert(ATempty, y_20);
      }
  }
  z_20 = t;
  t = term_o_11;
  a_21 = t;
  t = SSL_printnl(a_21, z_20);
  t = y_20;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  t = term_h_9;
  l_21 = t;
  t = term_g_16;
  m_21 = t;
  t = term_h_16;
  t = t_5(l_21, m_21, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm o_21 = NULL,t_21 = NULL;
  t = term_u_17;
  o_21 = t;
  t = term_y_13;
  t_21 = t;
  t = term_z_17;
  t = d_5(o_21, t_21, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_a_18;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  t = term_u_17;
  x_21 = t;
  t = term_y_13;
  y_21 = t;
  t = term_z_17;
  t = d_5(x_21, y_21, t);
  t = term_b_18;
  v_21 = t;
  t = term_y_13;
  w_21 = t;
  t = term_d_18;
  t = d_5(v_21, w_21, t);
  t = term_e_18;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_g_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_6, c_6, d_6, t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = h_18;
      t = Option_3_0(e_6, f_6, j_6, t);
    }
  return(t);
}
static ATerm d_5 (ATerm o_49, ATerm p_49, ATerm t)
{
  ATerm z_21 = NULL;
  t = term_h_9;
  z_21 = t;
  t = SSL_table_put(z_21, o_49, p_49);
  t = (ATerm) ATmakeAppl(sym__3, term_h_9, o_49, p_49);
  return(t);
}
static ATerm b_5 (ATerm q_43, ATerm r_43, ATerm p_43, ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_18 = ATgetArgument(t, 0);
            ATerm q_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
        t = t_5(q_43, r_43, t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        t = (ATerm) ATempty;
      }
  }
  i_22 = t;
  t = (ATerm) ATinsert(CheckATermList(i_22), p_43);
  j_22 = t;
  t = SSL_table_put(q_43, r_43, j_22);
  t = h_22;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
      t = term_y_13;
      t = e_0(t);
      r_22 = t;
      t = term_a_14;
      s_22 = t;
      t = term_b_14;
      t_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_14, term_b_14, r_22);
      t = b_5(s_22, t_22, r_22, t);
      _fail(t);
    }
  else
    {
      ATerm w_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_22 = ATgetFirst((ATermList) t);
          q_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_22;
      t = c_0(t);
      t = term_y_13;
      t = d_0(t);
      w_22 = t;
      t = (ATerm) ATinsert(CheckATermList(q_22), w_22);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_52 (ATerm), ATerm r_52 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,s_4 = NULL;
  c_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_22 = ATgetFirst((ATermList) t);
      z_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_23);
  x_22 = t;
  t = y_22;
  t = q_52(t);
  a_23 = t;
  t = z_22;
  t = r_52(t);
  b_23 = t;
  t = (ATerm) ATinsert(CheckATermList(b_23), a_23);
  s_4 = t;
  t = SSLsetAnnotations(s_4, x_22);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm j_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,q_23 = NULL,t_23 = NULL,c_5 = NULL;
  j_23 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_18;
        t = n_92(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
      }
  }
  t = j_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_23 = ATgetFirst((ATermList) t);
      o_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_23);
  m_23 = t;
  t = term_g_16;
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, n_23);
  t = d_5(t_23, n_23, t);
  t = o_23;
  {
    static ATerm h_24 (ATerm t)
    {
      ATerm u_18 = t;
      int x_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_18 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_23 = NULL;
              w_23 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_23;
              LocalPopChoice(c_19);
            }
          else
            {
              t = y_18;
              t = n_92(t);
              t = Cons_2_0(_id, h_24, t);
            }
          LocalPopChoice(x_18);
        }
      else
        {
          t = u_18;
          {
            ATerm b_24 = NULL,c_24 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_24 = ATgetFirst((ATermList) t);
                c_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_24), (ATerm) ATmakeAppl(sym_Undefined_1, b_24));
          }
        }
      return(t);
    }
    t = h_24(t);
  }
  q_23 = t;
  t = (ATerm) ATinsert(CheckATermList(q_23), (ATerm) ATmakeAppl(sym_Program_1, n_23));
  c_5 = t;
  t = SSLsetAnnotations(c_5, m_23);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  if(match_string(t, "--help"))
    {
      t = v_24;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_24;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_24;
        }
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL;
  t = term_d_19;
  w_24 = t;
  t = term_y_13;
  x_24 = t;
  t = term_e_19;
  t = d_5(w_24, x_24, t);
  t = term_g_19;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_h_19;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_92 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  q_24 = t;
  t = term_a_14;
  s_24 = t;
  t = term_b_14;
  t_24 = t;
  t = (ATerm) ATempty;
  u_24 = t;
  t = SSL_table_put(s_24, t_24, u_24);
  t = q_24;
  {
    static ATerm k_6 (ATerm t)
    {
      ATerm j_19 = t;
      int k_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_92(t);
          LocalPopChoice(k_19);
        }
      else
        {
          t = j_19;
          {
            ATerm l_19 = t;
            int m_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_6, p_6, q_6, t);
                LocalPopChoice(m_19);
              }
            else
              {
                t = l_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_6, t);
  }
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_25 = NULL;
        j_25 = t;
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_2 = NULL;
              t = j_25;
              {
                ATerm r_19 = t;
                int s_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_2 = NULL,y_2 = NULL;
                    t = term_h_9;
                    x_2 = t;
                    t = term_d_19;
                    y_2 = t;
                    t = term_t_19;
                    t = t_5(x_2, y_2, t);
                    LocalPopChoice(s_19);
                  }
                else
                  {
                    t = r_19;
                    t = fetch_1_0(s_6, t);
                  }
              }
              t = j_25;
              t = default_system_usage_0_0(t);
              t = term_w_19;
              v_2 = t;
              t = SSL_exit(v_2);
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
              {
                ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
                t = term_h_9;
                h_3 = t;
                t = term_u_17;
                i_3 = t;
                t = term_x_19;
                t = t_5(h_3, i_3, t);
                t = j_25;
                t = default_system_about_0_0(t);
                t = term_w_19;
                g_3 = t;
                t = SSL_exit(g_3);
              }
            }
        }
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        {
          ATerm y_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
              static ATerm t_6 (ATerm t)
              {
                ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,k_10 = NULL;
                p_25 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_25);
                n_25 = t;
                t = o_25;
                if(((m_24 != NULL) && (m_24 != t)))
                  _fail(t);
                else
                  m_24 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_25);
                k_10 = t;
                t = SSLsetAnnotations(k_10, n_25);
                return(t);
              }
              t = fetch_1_0(t_6, t);
              t = term_o_12;
              l_25 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_24)), term_f_20);
              m_25 = t;
              t = SSL_printnl(l_25, m_25);
              t = (ATerm) ATmakeAppl(sym__2, term_o_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_24)), term_f_20));
              t = default_system_usage_0_0(t);
              t = term_o_13;
              k_25 = t;
              t = SSL_exit(k_25);
              LocalPopChoice(z_19);
            }
          else
            {
              t = y_19;
            }
        }
      }
  }
  n_24 = t;
  t = term_a_14;
  r_24 = t;
  t = SSL_table_destroy(r_24);
  t = n_24;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = debug_1_0(w_6, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_g_20;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm k_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_25 = NULL;
      t = parse_options_1_0(xtc_options_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(u_6, t);
      t = xtc_read_0_0(t);
      {
        ATerm o_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_20 = t;
            int t_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_26 = NULL,b_26 = NULL;
                t = term_h_9;
                a_26 = t;
                t = term_q_14;
                b_26 = t;
                t = term_v_20;
                t = t_5(a_26, b_26, t);
                t = xtc_register_0_0(t);
                LocalPopChoice(t_20);
              }
            else
              {
                t = s_20;
                {
                  ATerm f_26 = NULL,i_26 = NULL;
                  t = term_h_9;
                  f_26 = t;
                  t = term_c_13;
                  i_26 = t;
                  t = term_d_13;
                  t = t_5(f_26, i_26, t);
                  t = register_import_0_0(t);
                }
              }
            t = xtc_store_0_0(t);
            LocalPopChoice(r_20);
          }
        else
          {
            t = o_20;
            {
              ATerm j_26 = NULL,k_26 = NULL;
              t = term_h_9;
              j_26 = t;
              t = term_v_14;
              k_26 = t;
              t = term_w_20;
              t = t_5(j_26, k_26, t);
              {
                ATerm x_20 = t;
                int b_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = repository_query_0_0(t);
                    LocalPopChoice(b_21);
                  }
                else
                  {
                    t = x_20;
                    {
                      ATerm c_21 = t;
                      int d_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = all_query_0_0(t);
                          LocalPopChoice(d_21);
                        }
                      else
                        {
                          t = c_21;
                          t = tool_query_0_0(t);
                        }
                    }
                  }
              }
            }
          }
      }
      t = term_w_19;
      z_25 = t;
      t = SSL_exit(z_25);
      LocalPopChoice(n_20);
    }
  else
    {
      t = k_20;
      t = debug_1_0(z_6, t);
    }
  return(t);
}
static ATerm f_5 (ATerm o_52, ATerm p_52, ATerm t)
{
  ATerm m_26 = NULL,o_26 = NULL,q_26 = NULL,x_26 = NULL,z_26 = NULL;
  t = p_52;
  t = map_1_0(xtc_find_0_0, t);
  m_26 = t;
  t = term_o_11;
  z_26 = t;
  t = SSL_print(z_26, m_26);
  t = term_o_11;
  q_26 = t;
  t = (ATerm) ATinsert(ATempty, term_r_11);
  x_26 = t;
  t = SSL_print(q_26, x_26);
  t = term_w_19;
  o_26 = t;
  t = SSL_exit(o_26);
  return(t);
}
static ATerm g_5 (ATerm s_39, ATerm t_39, ATerm t)
{
  t = SSL_execvp(s_39, t_39);
  return(t);
}
ATerm debug_1_0 (ATerm d_73 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  a_27 = t;
  t = d_73(t);
  b_27 = t;
  t = term_o_12;
  c_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_27), b_27);
  d_27 = t;
  t = SSL_printnl(c_27, d_27);
  t = a_27;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_27 = NULL;
  static ATerm a_7 (ATerm t)
  {
    ATerm h_27 = NULL,i_27 = NULL;
    h_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_27), h_27);
    t = t_5(not_null(e_27), h_27, t);
    i_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_27, i_27);
    return(t);
  }
  if(((e_27 != NULL) && (e_27 != t)))
    _fail(t);
  else
    e_27 = t;
  t = SSL_table_keys(e_27);
  t = map_1_0(a_7, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm o_97 (ATerm), ATerm t)
{
  ATerm l_27 = NULL;
  l_27 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
        t = term_h_9;
        s_27 = t;
        t = term_z_9;
        t_27 = t;
        t = term_b_10;
        t = t_5(s_27, t_27, t);
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_27, term_g_21);
        t = geq_0_0(t);
        t = l_27;
        t = o_97(t);
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = l_27;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  static ATerm n_29 (ATerm t)
  {
    ATerm y_28 = NULL,z_28 = NULL,i_29 = NULL;
    y_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_28 = ATgetFirst((ATermList) t);
        i_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_21 = t;
      int i_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_3 = NULL,v_3 = NULL,n_10 = NULL;
          t = SSLgetAnnotations(y_28);
          n_3 = t;
          t = z_28;
          t = y_73(t);
          v_3 = t;
          t = (ATerm) ATinsert(CheckATermList(i_29), v_3);
          n_10 = t;
          t = SSLsetAnnotations(n_10, n_3);
          LocalPopChoice(i_21);
        }
      else
        {
          t = h_21;
          {
            ATerm k_4 = NULL,o_4 = NULL,o_10 = NULL;
            t = SSLgetAnnotations(y_28);
            k_4 = t;
            t = i_29;
            t = n_29(t);
            o_4 = t;
            t = (ATerm) ATinsert(CheckATermList(o_4), z_28);
            o_10 = t;
            t = SSLsetAnnotations(o_10, k_4);
          }
        }
    }
    return(t);
  }
  t = n_29(t);
  return(t);
}
static ATerm t_5 (ATerm h_45, ATerm i_45, ATerm t)
{
  t = SSL_table_get(h_45, i_45);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_30 = NULL,f_30 = NULL,g_30 = NULL;
        t = term_h_9;
        f_30 = t;
        t = term_z_9;
        g_30 = t;
        t = term_b_10;
        t = t_5(f_30, g_30, t);
        c_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_30, term_n_21);
        t = geq_0_0(t);
        t = w_29;
        t = n_97(t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = w_29;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  s_30 = t;
  if(match_cons(t, sym__2))
    {
      t_30 = ATgetArgument(t, 0);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_30;
        if((t_30 != t))
          {
            _fail(t);
          }
        t = s_30;
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = (ATerm) ATmakeAppl(sym__2, t_30, u_30);
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_30, u_30);
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
              t = SSL_gtr(t_30, u_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_30, u_30);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  {
    ATerm u_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
        t = term_h_9;
        b_31 = t;
        t = term_z_9;
        c_31 = t;
        t = term_b_10;
        t = t_5(b_31, c_31, t);
        a_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_31, term_b_22);
        t = geq_0_0(t);
        t = y_30;
        t = p_97(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = u_21;
        t = y_30;
      }
  }
  return(t);
}
static ATerm k_5 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm q_20, ATerm p_20, ATerm t)
{
  t = d_78(t);
  {
    static ATerm g_7 (ATerm t)
    {
      ATerm e_31 = NULL;
      e_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_20, e_31);
      t = c_78(t);
      return(t);
    }
    t = fetch_1_0(g_7, t);
  }
  t = p_20;
  return(t);
}
static ATerm l_5 (ATerm z_77 (ATerm), ATerm m_20, ATerm l_20, ATerm t)
{
  static ATerm y_31 (ATerm t)
  {
    ATerm p_31 = NULL,t_31 = NULL,u_31 = NULL;
    p_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_20;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_31 = ATgetFirst((ATermList) t);
            u_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_22 = t;
          int d_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_31;
              {
                static ATerm k_7 (ATerm t)
                {
                  t = l_20;
                  return(t);
                }
                t = k_5(z_77, k_7, t_31, u_31, t);
              }
              t = y_31(t);
              LocalPopChoice(d_22);
            }
          else
            {
              t = c_22;
              {
                ATerm o_6 = NULL,r_6 = NULL,t_10 = NULL;
                t = SSLgetAnnotations(p_31);
                o_6 = t;
                t = u_31;
                t = y_31(t);
                r_6 = t;
                t = (ATerm) ATinsert(CheckATermList(r_6), t_31);
                t_10 = t;
                t = SSLsetAnnotations(t_10, o_6);
              }
            }
        }
      }
    return(t);
  }
  t = m_20;
  t = y_31(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm j_32 = NULL;
  if(match_cons(t, sym__2))
    {
      j_32 = ATgetArgument(t, 0);
      if((j_32 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm n_44, ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,e_32 = NULL;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_44, o_44);
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_22 = ATgetArgument(t, 0);
            ATerm k_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_44, o_44);
        t = t_5(n_44, o_44, t);
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        t = (ATerm) ATempty;
      }
  }
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_32, p_44);
  t = l_5(l_7, e_32, p_44, t);
  c_32 = t;
  t = SSL_table_put(n_44, o_44, c_32);
  t = b_32;
  return(t);
}
ATerm map_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  static ATerm y_32 (ATerm t)
  {
    ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
    v_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_32;
      }
    else
      {
        ATerm h_7 = NULL,r_7 = NULL,s_7 = NULL,v_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_32 = ATgetFirst((ATermList) t);
            x_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_32);
        h_7 = t;
        t = w_32;
        t = o_73(t);
        r_7 = t;
        t = x_32;
        t = y_32(t);
        s_7 = t;
        t = (ATerm) ATinsert(CheckATermList(s_7), r_7);
        v_10 = t;
        t = SSLsetAnnotations(v_10, h_7);
      }
    return(t);
  }
  t = y_32(t);
  return(t);
}
static ATerm n_5 (ATerm q_92 (ATerm), ATerm x_44, ATerm w_44, ATerm t)
{
  static ATerm m_7 (ATerm t)
  {
    ATerm a_33 = NULL,b_33 = NULL;
    if(match_cons(t, sym__2))
      {
        a_33 = ATgetArgument(t, 0);
        b_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_44, a_33, b_33);
    t = q_92(t);
    return(t);
  }
  t = w_44;
  t = map_1_0(m_7, t);
  return(t);
}
static ATerm s_5 (ATerm g_29, ATerm h_29, ATerm t)
{
  t = SSL_access(g_29, h_29);
  return(t);
}
static ATerm q_33 (ATerm j_33, ATerm t)
{
  t = SSL_fclose(j_33);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  n_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_33 = ATgetArgument(t, 0);
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_33);
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            t = q_33(n_33, t);
          }
      }
    }
  else
    {
      t = q_33(n_33, t);
    }
  return(t);
}
static ATerm o_5 (ATerm k_14, ATerm t)
{
  t = SSL_read_term_from_stream(k_14);
  return(t);
}
static ATerm p_5 (ATerm g_28, ATerm h_28, ATerm t)
{
  t = SSL_strcat(g_28, h_28);
  return(t);
}
static ATerm q_5 (ATerm p_29, ATerm q_29, ATerm t)
{
  ATerm r_33 = NULL;
  t = SSL_fopen(p_29, q_29);
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_33);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_33 = NULL;
  t = SSL_stdin_stream();
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_33);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_33 = NULL;
  t = SSL_stdout_stream();
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_33);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_33 = NULL;
  t = SSL_stderr_stream();
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_33);
  return(t);
}
static ATerm b_35 (ATerm a_34, ATerm t)
{
  ATerm b_34 = NULL;
  t = SSL_explode_term(a_34);
  if(match_cons(t, sym__2))
    {
      ATerm n_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_22 = ATgetArgument(t, 1);
        if(((ATgetType(o_22) == AT_LIST) && !(ATisEmpty(o_22))))
          {
            b_34 = ATgetFirst((ATermList) o_22);
            {
              ATerm u_22 = (ATerm) ATgetNext((ATermList) o_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_34;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_34;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_34;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_34;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_35 (ATerm e_34, ATerm f_34, ATerm g_34, ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,m_34 = NULL,b_11 = NULL;
  t = SSLgetAnnotations(g_34);
  j_34 = t;
  t = e_34;
  if(match_cons(t, sym_Path_1))
    {
      m_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_34, f_34);
  b_11 = t;
  t = SSLsetAnnotations(b_11, j_34);
  if(match_cons(t, sym__2))
    {
      h_34 = ATgetArgument(t, 0);
      i_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(h_34, i_34, t);
  return(t);
}
static ATerm d_35 (ATerm o_34, ATerm p_34, ATerm q_34, ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,w_34 = NULL,c_11 = NULL;
  t = SSLgetAnnotations(q_34);
  t_34 = t;
  t = SSL_is_string(o_34);
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_34, p_34);
  c_11 = t;
  t = SSLsetAnnotations(c_11, t_34);
  if(match_cons(t, sym__2))
    {
      r_34 = ATgetArgument(t, 0);
      s_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(r_34, s_34, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  if(match_cons(t, sym__2))
    {
      z_34 = ATgetArgument(t, 0);
      a_35 = ATgetArgument(t, 1);
      {
        ATerm v_22 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_35(y_34, t);
            LocalPopChoice(d_23);
          }
        else
          {
            t = v_22;
            {
              ATerm e_23 = t;
              int f_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_35(z_34, a_35, y_34, t);
                  LocalPopChoice(f_23);
                }
              else
                {
                  t = e_23;
                  t = d_35(z_34, a_35, y_34, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_35(y_34, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL,m_35 = NULL;
  m_35 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_35, term_i_23);
        t = r_5(t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        {
          ATerm n_8 = NULL,q_8 = NULL;
          t = term_k_23;
          q_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_23, m_35);
          t = p_5(q_8, m_35, t);
          n_8 = t;
          t = SSL_perror(n_8);
          _fail(t);
        }
      }
  }
  g_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_5(h_35, t);
  f_35 = t;
  t = g_35;
  t = fclose_0_0(t);
  t = f_35;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_l_23;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_p_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_35 = NULL,q_35 = NULL;
      p_35 = t;
      t = (ATerm) ATinsert(ATempty, term_u_23);
      q_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_35, (ATerm) ATinsert(ATempty, term_u_23));
      t = s_5(p_35, q_35, t);
      LocalPopChoice(s_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = r_23;
      {
        ATerm v_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_23 = t;
            if((PushChoice() == 0))
              {
                ATerm r_35 = NULL,s_35 = NULL;
                r_35 = t;
                t = (ATerm) ATinsert(ATempty, term_y_12);
                s_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_35, (ATerm) ATinsert(ATempty, term_y_12));
                t = s_5(r_35, s_35, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_23;
              }
            t = debug_1_0(y_7, t);
            LocalPopChoice(x_23);
          }
        else
          {
            t = v_23;
            t = debug_1_0(z_7, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = debug_1_0(c_8, t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_z_23;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = debug_1_0(e_8, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_a_24;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  t = term_o_12;
  g_36 = t;
  t = (ATerm) ATinsert(ATempty, term_d_24);
  h_36 = t;
  t = SSL_printnl(g_36, h_36);
  t = f_36;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
  if(match_cons(t, sym__3))
    {
      i_36 = ATgetArgument(t, 0);
      j_36 = ATgetArgument(t, 1);
      k_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_5(i_36, j_36, k_36, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
  l_36 = t;
  t = term_o_12;
  m_36 = t;
  t = (ATerm) ATinsert(ATempty, term_e_24);
  n_36 = t;
  t = SSL_printnl(m_36, n_36);
  t = l_36;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
  o_36 = t;
  t = term_o_12;
  p_36 = t;
  t = (ATerm) ATinsert(ATempty, term_d_24);
  q_36 = t;
  t = SSL_printnl(p_36, q_36);
  t = o_36;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  t_35 = t;
  t = if_verbose5_1_0(b_8, t);
  {
    ATerm f_24 = t;
    if((PushChoice() == 0))
      {
        ATerm d_36 = NULL,e_36 = NULL;
        t = term_l_10;
        d_36 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, t_35);
        e_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_10, (ATerm) ATmakeAppl(sym_Imported_1, t_35));
        t = t_5(d_36, e_36, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_24;
      }
  }
  v_35 = t;
  t = term_l_10;
  a_36 = t;
  t = term_g_24;
  b_36 = t;
  t = (ATerm) ATinsert(ATempty, t_35);
  c_36 = t;
  t = SSL_table_put(a_36, b_36, c_36);
  t = v_35;
  t = if_verbose4_1_0(d_8, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(f_8, t);
  u_35 = t;
  t = term_l_10;
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, u_35);
  t = n_5(g_8, z_35, u_35, t);
  t = if_verbose6_1_0(i_8, t);
  t = term_l_10;
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, t_35);
  x_35 = t;
  t = (ATerm) ATempty;
  y_35 = t;
  t = SSL_table_put(w_35, x_35, y_35);
  t = (ATerm) ATmakeAppl(sym__3, term_l_10, (ATerm)ATmakeAppl(sym_Imported_1, t_35), (ATerm) ATempty);
  t = if_verbose4_1_0(j_8, t);
  return(t);
}
ATerm filter_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_37;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_37 = ATgetFirst((ATermList) t);
          e_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_8 = NULL,j_9 = NULL,k_9 = NULL,j_11 = NULL;
            t = SSLgetAnnotations(c_37);
            z_8 = t;
            t = d_37;
            t = j_81(t);
            j_9 = t;
            t = e_37;
            t = filter_1_0(j_81, t);
            k_9 = t;
            t = (ATerm) ATinsert(CheckATermList(k_9), j_9);
            j_11 = t;
            t = SSLsetAnnotations(j_11, z_8);
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            t = e_37;
            t = filter_1_0(j_81, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm t)
{
  static ATerm h_37 (ATerm t)
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_66(t);
        t = h_37(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        t = d_66(t);
      }
    return(t);
  }
  t = h_37(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_37 = NULL,j_37 = NULL;
      t = term_h_9;
      i_37 = t;
      t = term_s_12;
      j_37 = t;
      t = term_t_12;
      t = t_5(i_37, j_37, t);
      LocalPopChoice(p_24);
    }
  else
    {
      t = o_24;
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_37 = NULL;
            t = term_a_25;
            k_37 = t;
            t = SSL_getenv(k_37);
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = debug_1_0(m_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_b_25;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL;
  t = term_l_10;
  q_37 = t;
  t = term_p_10;
  r_37 = t;
  t = term_r_10;
  t = t_5(q_37, r_37, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_25;
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
  t = term_d_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_37 = NULL;
  t = if_verbose5_1_0(k_8, t);
  m_37 = t;
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_37 = NULL,o_37 = NULL;
        t = term_l_10;
        n_37 = t;
        t = term_g_24;
        o_37 = t;
        t = term_g_25;
        t = t_5(n_37, o_37, t);
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        {
          ATerm p_37 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          p_37 = t;
          t = repeat_2_0(r_8, _id, t);
          t = p_37;
        }
      }
  }
  t = m_37;
  t = if_verbose5_1_0(s_8, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = debug_1_0(w_8, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_h_25;
  return(t);
}
static ATerm o_38 (ATerm w_37, ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  t = term_l_10;
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, w_37);
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, (ATerm) ATmakeAppl(sym_Tool_1, w_37));
  t = t_5(z_37, a_38, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_25 = ATgetFirst((ATermList) t);
      if(match_cons(i_25, sym__2))
        {
          ATerm r_25 = ATgetArgument(i_25, 0);
          y_37 = ATgetArgument(i_25, 1);
        }
      else
        _fail(t);
      {
        ATerm q_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_37;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = debug_1_0(a_9, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_h_25;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_l_10;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_9, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_s_25;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL;
      t = if_verbose5_1_0(u_8, t);
      t = xtc_load_0_0(t);
      d_38 = t;
      if(match_cons(t, sym__2))
        {
          b_38 = ATgetArgument(t, 0);
          c_38 = ATgetArgument(t, 1);
          {
            ATerm v_25 = t;
            int w_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
                t = term_l_10;
                h_38 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, b_38);
                i_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_10, (ATerm) ATmakeAppl(sym_Tool_1, b_38));
                t = t_5(h_38, i_38, t);
                {
                  static ATerm x_8 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_38 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((g_38 != NULL) && (g_38 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_38 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(x_8, t);
                }
                t = not_null(g_38);
                LocalPopChoice(w_25);
              }
            else
              {
                t = v_25;
                t = o_38(d_38, t);
              }
          }
        }
      else
        {
          t = o_38(d_38, t);
        }
      t = if_verbose5_1_0(y_8, t);
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm n_38 = NULL,d_10 = NULL,f_10 = NULL;
        n_38 = t;
        t = term_o_12;
        d_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_25), n_38), term_x_25);
        f_10 = t;
        t = SSL_printnl(d_10, f_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_25), n_38), term_x_25);
        t = if_verbose5_1_0(b_9, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
      w_38 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_38 = ATgetFirst((ATermList) t);
          y_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_38 = ATgetFirst((ATermList) t);
          a_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_38;
      if(match_string(t, "call"))
        {
          ATerm e_39 = NULL;
          t = a_39;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_38 = ATgetFirst((ATermList) t);
              v_38 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_38;
          t = xtc_find_0_0(t);
          e_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_39, v_38);
          t = g_5(e_39, v_38, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = w_38;
          t = f_5(x_38, a_39, t);
        }
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = xtc_main_0_0(t);
    }
  return(t);
}
