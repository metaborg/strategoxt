#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Undefined_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_F__OK_0;
static Symbol sym_R__OK_0;
static Symbol sym_W__OK_0;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Path_1;
static Symbol sym_Version_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Tool_1;
static Symbol sym_Repository_0;
static Symbol sym_Import_0;
static Symbol sym_Imported_1;
static Symbol sym_XTC_0;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
static ATerm term_z_26;
static ATerm term_y_26;
static ATerm term_t_26;
static ATerm term_p_26;
static ATerm term_f_26;
static ATerm term_a_26;
static ATerm term_y_25;
static ATerm term_w_25;
static ATerm term_k_25;
static ATerm term_d_25;
static ATerm term_c_25;
static ATerm term_a_25;
static ATerm term_z_24;
static ATerm term_q_24;
static ATerm term_l_24;
static ATerm term_k_24;
static ATerm term_e_24;
static ATerm term_d_24;
static ATerm term_b_23;
static ATerm term_p_22;
static ATerm term_o_22;
static ATerm term_k_22;
static ATerm term_v_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_n_20;
static ATerm term_j_20;
static ATerm term_i_20;
static ATerm term_c_20;
static ATerm term_b_20;
static ATerm term_y_19;
static ATerm term_j_19;
static ATerm term_i_19;
static ATerm term_h_19;
static ATerm term_g_19;
static ATerm term_f_19;
static ATerm term_a_19;
static ATerm term_l_18;
static ATerm term_k_18;
static ATerm term_j_18;
static ATerm term_f_18;
static ATerm term_e_18;
static ATerm term_d_18;
static ATerm term_c_18;
static ATerm term_b_17;
static ATerm term_a_17;
static ATerm term_z_16;
static ATerm term_y_16;
static ATerm term_x_16;
static ATerm term_w_16;
static ATerm term_v_16;
static ATerm term_u_16;
static ATerm term_t_16;
static ATerm term_s_16;
static ATerm term_r_16;
static ATerm term_q_16;
static ATerm term_p_16;
static ATerm term_o_16;
static ATerm term_n_16;
static ATerm term_m_16;
static ATerm term_e_16;
static ATerm term_d_16;
static ATerm term_c_16;
static ATerm term_y_15;
static ATerm term_w_15;
static ATerm term_t_15;
static ATerm term_s_15;
static ATerm term_r_15;
static ATerm term_o_15;
static ATerm term_i_15;
static ATerm term_h_15;
static ATerm term_z_14;
static ATerm term_x_14;
static ATerm term_w_14;
static ATerm term_t_14;
static ATerm term_s_14;
static ATerm term_r_14;
static ATerm term_q_14;
static ATerm term_p_14;
static ATerm term_g_14;
static ATerm term_v_13;
static ATerm term_u_13;
static ATerm term_s_13;
static ATerm term_r_13;
static ATerm term_p_13;
static ATerm term_o_13;
static ATerm term_e_13;
static ATerm term_d_13;
static ATerm term_c_13;
static ATerm term_y_12;
static ATerm term_x_12;
static ATerm term_w_12;
static ATerm term_v_12;
static ATerm term_u_12;
static ATerm term_r_12;
static ATerm term_q_12;
static ATerm term_p_12;
static ATerm term_k_12;
static ATerm term_j_12;
static ATerm term_i_12;
static ATerm term_h_12;
static ATerm term_a_12;
static ATerm term_x_11;
static ATerm term_s_11;
static ATerm term_p_11;
static ATerm term_n_11;
static ATerm term_l_10;
static ATerm term_h_10;
static ATerm term_e_10;
static ATerm term_d_10;
static ATerm term_c_10;
static ATerm term_b_10;
static ATerm term_v_9;
static ATerm term_r_9;
static ATerm term_q_9;
static ATerm term_o_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_q_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_v_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_e_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_x_11);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_r_12);
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
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_d_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_u_13);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
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
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_x_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_s_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
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
  term_v_16 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_h_15);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_h_15);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_h_15);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_h_15);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_h_15);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_h_15);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__3, term_r_15, term_s_15, (ATerm) ATempty);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_f_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_c_18);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_o_16);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_t_16);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_k_25);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm version_query_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm n_121 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
ATerm tool_query_0_0 (ATerm t);
static ATerm l_5 (ATerm v_78, ATerm p_921, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm all_query_0_0 (ATerm t);
ATerm repository_query_0_0 (ATerm t);
static ATerm m_5 (ATerm h_31, ATerm i_31, ATerm t);
static ATerm n_5 (ATerm w_103 (ATerm), ATerm o_280, ATerm r_31, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm xtc_store_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm register_import_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm o_5 (ATerm m_53, ATerm n_53, ATerm l_53, ATerm t);
ATerm xtc_register_0_3 (ATerm q_78, ATerm r_78, ATerm s_78, ATerm t);
ATerm if_verbose1_1_0 (ATerm l_121 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm m_121 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm t_104 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_18 (ATerm y_17, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_5 (ATerm u_67, ATerm t_67, ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm xtc_options_0_0 (ATerm t);
static ATerm q_5 (ATerm o_57, ATerm p_57, ATerm t);
static ATerm r_5 (ATerm t_57, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm u_5 (ATerm o_67, ATerm p_67, ATerm t);
static ATerm s_5 (ATerm u_52, ATerm v_52, ATerm t_52, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_126 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm parse_options_3_0 (ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm xtc_main_0_0 (ATerm t);
static ATerm w_5 (ATerm l_79, ATerm m_79, ATerm t);
static ATerm x_5 (ATerm l_68, ATerm m_68, ATerm t);
ATerm debug_1_0 (ATerm u_103 (ATerm), ATerm t);
static ATerm y_5 (ATerm q_57, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_121 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm m_104 (ATerm), ATerm t);
static ATerm n_6 (ATerm n_54, ATerm o_54, ATerm t);
ATerm if_verbose4_1_0 (ATerm o_121 (ATerm), ATerm t);
static ATerm m_6 (ATerm j_57, ATerm k_57, ATerm l_57, ATerm t);
static ATerm l_6 (ATerm m_57, ATerm n_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_57, ATerm s_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm g_54, ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm q_121 (ATerm), ATerm t);
static ATerm c_6 (ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm s_37, ATerm r_37, ATerm t);
static ATerm d_6 (ATerm n_108 (ATerm), ATerm o_37, ATerm n_37, ATerm t);
static ATerm t_7 (ATerm t);
static ATerm e_6 (ATerm r_53, ATerm s_53, ATerm t_53, ATerm t);
ATerm map_1_0 (ATerm e_104 (ATerm), ATerm t);
static ATerm f_6 (ATerm y_117 (ATerm), ATerm b_54, ATerm a_54, ATerm t);
static ATerm k_6 (ATerm y_46, ATerm z_46, ATerm t);
static ATerm y_36 (ATerm s_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_6 (ATerm n_31, ATerm t);
static ATerm h_6 (ATerm o_45, ATerm p_45, ATerm t);
static ATerm i_6 (ATerm k_47, ATerm l_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_38 (ATerm i_37, ATerm t);
static ATerm p_38 (ATerm m_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm q_38 (ATerm b_38, ATerm c_38, ATerm d_38, ATerm t);
static ATerm j_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm f_112 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_42 (ATerm n_41, ATerm t);
static ATerm h_9 (ATerm t);
static ATerm l_9 (ATerm t);
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
  ATerm i_0 = NULL,q_0 = NULL,s_0 = NULL,v_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,n_0 = NULL;
  v_0 = t;
  t = term_o_9;
  z_0 = t;
  t = term_q_9;
  a_1 = t;
  t = term_r_9;
  t = n_6(z_0, a_1, t);
  q_0 = t;
  t = v_0;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_0);
  c_1 = t;
  t = d_1;
  if(match_cons(t, sym_Tool_1))
    {
      i_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_1;
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((q_0 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((s_0 != NULL) && (s_0 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            s_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(a_0, t);
  }
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_1, f_1);
  n_0 = t;
  t = SSLsetAnnotations(n_0, c_1);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_0, not_null(s_0)));
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, i_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_0, not_null(s_0))));
  t = l_5(i_0, x_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm n_121 (ATerm), ATerm t)
{
  ATerm h_1 = NULL;
  h_1 = t;
  {
    ATerm s_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL;
        t = term_o_9;
        k_1 = t;
        t = term_v_9;
        l_1 = t;
        t = term_b_10;
        t = n_6(k_1, l_1, t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_1, term_c_10);
        t = geq_0_0(t);
        t = h_1;
        t = n_121(t);
        LocalPopChoice(u_9);
      }
    else
      {
        t = s_9;
        t = h_1;
      }
  }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm a_2 = NULL,f_2 = NULL;
  t = term_d_10;
  a_2 = t;
  t = term_e_10;
  f_2 = t;
  t = term_h_10;
  t = n_6(a_2, f_2, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm j_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_10;
      }
  }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = debug_1_0(o_0, t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = term_l_10;
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm s_1 = NULL,u_1 = NULL,w_1 = NULL,y_1 = NULL;
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    ATerm i_2 = NULL;
    i_2 = t;
    {
      ATerm p_10 = t;
      int t_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_2 = NULL,l_2 = NULL;
          t = if_verbose3_1_0(m_0, t);
          t = term_d_10;
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym_Tool_1, i_2);
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATmakeAppl(sym_Tool_1, i_2));
          t = n_6(k_2, l_2, t);
          if(((s_1 != NULL) && (s_1 != t)))
            _fail(t);
          else
            s_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, i_2), s_1);
          {
            ATerm x_10 = t;
            int b_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = version_query_0_0(t);
                LocalPopChoice(b_11);
              }
            else
              {
                t = x_10;
                if(match_cons(t, sym__2))
                  {
                    ATerm i_11 = ATgetArgument(t, 0);
                    ATerm j_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, i_2), s_1);
                t = l_5(i_2, s_1, t);
              }
          }
          LocalPopChoice(t_10);
        }
      else
        {
          t = p_10;
          {
            ATerm v_2 = NULL,w_2 = NULL;
            t = term_n_11;
            v_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_11), term_p_11), i_2);
            w_2 = t;
            t = SSL_print(v_2, w_2);
            t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_11), term_p_11), i_2));
          }
        }
    }
    return(t);
  }
  t = term_o_9;
  w_1 = t;
  t = term_x_11;
  y_1 = t;
  t = term_a_12;
  t = n_6(w_1, y_1, t);
  u_1 = t;
  t = repeat_2_0(b_0, _id, t);
  t = u_1;
  t = map_1_0(c_0, t);
  return(t);
}
static ATerm l_5 (ATerm v_78, ATerm p_921, ATerm t)
{
  static ATerm b_1 (ATerm t);
  static ATerm b_1 (ATerm t)
  {
    ATerm x_2 = NULL,z_2 = NULL;
    if(match_cons(t, sym__2))
      {
        x_2 = ATgetArgument(t, 0);
        z_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm d_12 = t;
      int g_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_3 = NULL,b_3 = NULL,d_3 = NULL,h_3 = NULL;
          t = term_o_9;
          d_3 = t;
          t = term_h_12;
          h_3 = t;
          t = term_i_12;
          t = n_6(d_3, h_3, t);
          t = term_n_11;
          a_3 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_s_11), z_2);
          b_3 = t;
          t = SSL_print(a_3, b_3);
          t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATempty, term_s_11), z_2));
          LocalPopChoice(g_12);
        }
      else
        {
          t = d_12;
          {
            ATerm i_3 = NULL,l_3 = NULL;
            t = term_n_11;
            i_3 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), z_2), term_k_12), x_2), term_j_12), v_78);
            l_3 = t;
            t = SSL_print(i_3, l_3);
            t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), z_2), term_k_12), x_2), term_j_12), v_78));
          }
        }
    }
    return(t);
  }
  t = p_921;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  t = term_d_10;
  x_3 = t;
  t = term_e_10;
  y_3 = t;
  t = term_h_10;
  t = n_6(x_3, y_3, t);
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
static ATerm i_1 (ATerm t)
{
  ATerm z_4 = NULL,c_5 = NULL,d_5 = NULL;
  d_5 = t;
  if(match_cons(t, sym__2))
    {
      z_4 = ATgetArgument(t, 0);
      c_5 = ATgetArgument(t, 1);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 = NULL,h_0 = NULL,k_0 = NULL,p_0 = NULL,w_0 = NULL,y_0 = NULL,c_4 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(d_5);
            k_0 = t;
            t = z_4;
            if(match_cons(t, sym_Tool_1))
              {
                w_0 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_4);
            p_0 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, w_0);
            b_4 = t;
            t = SSLsetAnnotations(b_4, p_0);
            y_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_0, c_5);
            c_4 = t;
            t = SSLsetAnnotations(c_4, k_0);
            if(match_cons(t, sym__2))
              {
                ATerm o_12 = ATgetArgument(t, 0);
                if(match_cons(o_12, sym_Tool_1))
                  {
                    e_0 = ATgetArgument(o_12, 0);
                  }
                else
                  _fail(t);
                h_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_5(e_0, h_0, t);
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
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
  ATerm u_3 = NULL,w_3 = NULL;
  t = term_o_9;
  u_3 = t;
  t = term_p_12;
  w_3 = t;
  t = term_q_12;
  t = n_6(u_3, w_3, t);
  t = repeat_2_0(g_1, _id, t);
  t = term_d_10;
  t = table_getlist_0_0(t);
  t = map_1_0(i_1, t);
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm z_5 = NULL,b_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
  t = term_o_9;
  p_6 = t;
  t = term_r_12;
  q_6 = t;
  t = term_u_12;
  t = n_6(p_6, q_6, t);
  t = xtc_location_0_0(t);
  z_5 = t;
  t = term_n_11;
  b_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_11), z_5), term_v_12);
  o_6 = t;
  t = SSL_print(b_6, o_6);
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_11), z_5), term_v_12));
  return(t);
}
static ATerm m_5 (ATerm h_31, ATerm i_31, ATerm t)
{
  ATerm t_6 = NULL;
  t = SSL_write_term_to_stream_baf(h_31, i_31);
  t_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_6);
  return(t);
}
static ATerm n_5 (ATerm w_103 (ATerm), ATerm o_280, ATerm r_31, ATerm t)
{
  ATerm v_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_280, term_w_12);
  t = j_6(t);
  v_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_6, r_31);
  t = w_103(t);
  t = fclose_0_0(t);
  t = r_31;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,p_7 = NULL;
  f_7 = t;
  t = term_x_12;
  g_7 = t;
  t = (ATerm) ATinsert(ATempty, term_y_12);
  p_7 = t;
  t = SSL_printnl(g_7, p_7);
  t = f_7;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm z_7 = NULL,c_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_12 = ATgetArgument(t, 0);
      if(match_cons(z_12, sym_Stream_1))
        {
          z_7 = ATgetArgument(z_12, 0);
        }
      else
        _fail(t);
      c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(z_7, c_8, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  t = if_verbose1_1_0(m_1, t);
  t = term_o_9;
  b_7 = t;
  t = term_d_13;
  c_7 = t;
  t = term_e_13;
  t = n_6(b_7, c_7, t);
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 = NULL,r_7 = NULL;
            q_7 = t;
            t = (ATerm) ATinsert(ATempty, term_o_13);
            r_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_7, (ATerm) ATinsert(ATempty, term_o_13));
            t = k_6(q_7, r_7, t);
            LocalPopChoice(l_13);
            {
              ATerm s_7 = NULL,v_7 = NULL;
              s_7 = t;
              t = (ATerm) ATinsert(ATempty, term_p_13);
              v_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_7, (ATerm) ATinsert(ATempty, term_p_13));
              t = k_6(s_7, v_7, t);
            }
          }
        else
          {
            t = k_13;
          }
        LocalPopChoice(g_13);
        {
          ATerm x_7 = NULL,y_7 = NULL;
          y_7 = t;
          t = term_d_10;
          t = table_getlist_0_0(t);
          x_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_7, x_7);
          t = n_5(n_1, y_7, x_7, t);
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
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm d_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,n_8 = NULL;
  t = term_o_9;
  k_8 = t;
  t = term_u_13;
  n_8 = t;
  t = term_v_13;
  t = n_6(k_8, n_8, t);
  t = if_verbose2_1_0(p_1, t);
  t = term_o_9;
  i_8 = t;
  t = term_u_13;
  j_8 = t;
  t = term_v_13;
  t = n_6(i_8, j_8, t);
  d_8 = t;
  t = if_verbose5_1_0(r_1, t);
  t = term_d_10;
  g_8 = t;
  t = term_e_10;
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, term_e_10, d_8);
  t = o_5(g_8, h_8, d_8, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm f_9 = NULL;
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      if((f_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm m_53, ATerm n_53, ATerm l_53, ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,u_8 = NULL;
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_13 = ATgetArgument(t, 0);
            ATerm z_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
        t = n_6(m_53, n_53, t);
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        t = (ATerm) ATempty;
      }
  }
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_53, r_8);
  t = d_6(x_1, l_53, r_8, t);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_53, n_53, q_8);
  t = lookup_table_0_1(m_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(n_53, q_8, u_8, t);
  t = p_8;
  return(t);
}
ATerm xtc_register_0_3 (ATerm q_78, ATerm r_78, ATerm s_78, ATerm t)
{
  ATerm j_9 = NULL;
  j_9 = t;
  t = xtc_load_0_0(t);
  t = q_78;
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_78;
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
            t = q_78;
          }
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = (ATerm) ATinsert(ATempty, q_78);
      }
  }
  {
    static ATerm b_2 (ATerm t);
    static ATerm b_2 (ATerm t)
    {
      ATerm p_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,f_10 = NULL,g_10 = NULL;
      w_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_9), term_g_14), s_78);
      g_10 = t;
      t = SSL_concat_strings(g_10);
      p_9 = t;
      t = term_d_10;
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym_Tool_1, w_9);
      y_9 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_78, p_9));
      f_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_10, (ATerm)ATmakeAppl(sym_Tool_1, w_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_78, p_9)));
      t = o_5(x_9, y_9, f_10, t);
      return(t);
    }
    t = map_1_0(b_2, t);
  }
  t = j_9;
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_121 (ATerm), ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  {
    ATerm i_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_10 = NULL,n_10 = NULL,o_10 = NULL;
        t = term_o_9;
        n_10 = t;
        t = term_v_9;
        o_10 = t;
        t = term_b_10;
        t = n_6(n_10, o_10, t);
        k_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_10, term_p_14);
        t = geq_0_0(t);
        t = i_10;
        t = l_121(t);
        LocalPopChoice(k_14);
      }
    else
      {
        t = i_14;
        t = i_10;
      }
  }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm h_11 = NULL,k_11 = NULL,l_11 = NULL;
  h_11 = t;
  t = term_x_12;
  k_11 = t;
  t = (ATerm) ATinsert(ATempty, term_q_14);
  l_11 = t;
  t = SSL_printnl(k_11, l_11);
  t = h_11;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_r_14;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_s_14;
  return(t);
}
static ATerm j_2 (ATerm t)
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
  ATerm q_10 = NULL,r_10 = NULL,u_10 = NULL,w_10 = NULL,y_10 = NULL,a_11 = NULL,c_11 = NULL,d_11 = NULL,g_11 = NULL;
  t = term_o_9;
  d_11 = t;
  t = term_x_11;
  g_11 = t;
  t = term_a_12;
  t = n_6(d_11, g_11, t);
  q_10 = t;
  t = if_verbose1_1_0(c_2, t);
  t = if_verbose2_1_0(d_2, t);
  t = term_o_9;
  a_11 = t;
  t = term_q_9;
  c_11 = t;
  t = term_r_9;
  t = n_6(a_11, c_11, t);
  r_10 = t;
  t = if_verbose2_1_0(g_2, t);
  t = term_o_9;
  w_10 = t;
  t = term_h_12;
  y_10 = t;
  t = term_i_12;
  t = n_6(w_10, y_10, t);
  u_10 = t;
  t = if_verbose2_1_0(j_2, t);
  t = q_10;
  t = xtc_register_0_3(q_10, r_10, u_10, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_121 (ATerm), ATerm t)
{
  ATerm r_11 = NULL;
  r_11 = t;
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
        t = term_o_9;
        u_11 = t;
        t = term_v_9;
        v_11 = t;
        t = term_b_10;
        t = n_6(u_11, v_11, t);
        t_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_11, term_w_14);
        t = geq_0_0(t);
        t = r_11;
        t = m_121(t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        t = r_11;
      }
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  t = term_o_9;
  y_11 = t;
  t = term_x_14;
  z_11 = t;
  t = term_z_14;
  t = n_6(y_11, z_11, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,f_12 = NULL;
  b_12 = t;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_15 = ATgetFirst((ATermList) t);
                ATerm f_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_12;
          }
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = (ATerm) ATinsert(ATempty, b_12);
      }
  }
  c_12 = t;
  t = term_n_11;
  f_12 = t;
  t = SSL_printnl(f_12, c_12);
  t = b_12;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_12 = ATgetFirst((ATermList) t);
      t_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_13 = NULL,b_13 = NULL;
        static ATerm n_2 (ATerm t);
        static ATerm n_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_13)), not_null(b_13));
          return(t);
        }
        t = t_12;
        t = l_0(t);
        if(((a_13 != NULL) && (a_13 != t)))
          _fail(t);
        else
          a_13 = t;
        t = s_12;
        t = j_0(t);
        if(((b_13 != NULL) && (b_13 != t)))
          _fail(t);
        else
          b_13 = t;
        t = t_12;
        t = reverse_acc_2_0(j_0, n_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_15;
      t = l_0(t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm n_13 = NULL,q_13 = NULL,t_13 = NULL,h_4 = NULL;
  t_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_13);
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_13);
  h_4 = t;
  t = SSLsetAnnotations(h_4, n_13);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_14), term_i_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_13 = NULL,m_13 = NULL;
      t = term_o_9;
      j_13 = t;
      t = term_x_14;
      m_13 = t;
      t = term_z_14;
      t = n_6(j_13, m_13, t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      t = fetch_1_0(o_2, t);
    }
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_126(t);
        t = echo_0_0(t);
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
      }
  }
  t = term_o_15;
  t = echo_0_0(t);
  t = term_r_15;
  h_13 = t;
  t = term_s_15;
  i_13 = t;
  t = term_t_15;
  t = n_6(h_13, i_13, t);
  t = reverse_acc_2_0(_id, q_2, t);
  t = map_1_0(t_2, t);
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_14 = NULL;
        t = p_126(t);
        d_14 = t;
        t = (ATerm) ATinsert(CheckATermList(d_14), term_s_11);
        t = echo_0_0(t);
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
      }
  }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,j_4 = NULL;
  o_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_14);
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_14);
  j_4 = t;
  t = SSLsetAnnotations(j_4, m_14);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_16), term_y_15), term_w_15);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_16), term_d_16);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_14 = NULL;
  h_14 = t;
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_14 = NULL,l_14 = NULL;
        t = term_o_9;
        j_14 = t;
        t = term_x_14;
        l_14 = t;
        t = term_z_14;
        t = n_6(j_14, l_14, t);
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        t = fetch_1_0(u_2, t);
      }
  }
  t = h_14;
  t = default_system_usage_2_0(y_2, g_3, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,c_15 = NULL,e_15 = NULL,g_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_15 = NULL,p_15 = NULL,q_15 = NULL;
      t = term_h_15;
      t = u_0(t);
      n_15 = t;
      t = term_r_15;
      p_15 = t;
      t = term_s_15;
      q_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_15, term_s_15, n_15);
      t = s_5(p_15, q_15, n_15, t);
      _fail(t);
    }
  else
    {
      ATerm x_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_14 = ATgetFirst((ATermList) t);
          c_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_15 = ATgetFirst((ATermList) t);
          g_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_14;
      t = r_0(t);
      t = e_15;
      t = t_0(t);
      x_15 = t;
      t = (ATerm) ATinsert(CheckATermList(g_15), x_15);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  static ATerm l_17 (ATerm t);
  static ATerm l_17 (ATerm t)
  {
    ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
    k_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_17 = ATgetFirst((ATermList) t);
        j_17 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_1 = NULL,z_1 = NULL,l_4 = NULL;
          t = SSLgetAnnotations(k_17);
          t_1 = t;
          t = j_17;
          t = l_17(t);
          z_1 = t;
          t = (ATerm) ATinsert(CheckATermList(z_1), i_17);
          l_4 = t;
          t = SSLsetAnnotations(l_4, t_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_17;
        t = t_104(t);
      }
    return(t);
  }
  t = l_17(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  z_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_15;
    }
  else
    {
      static ATerm j_3 (ATerm t);
      static ATerm j_3 (ATerm t)
      {
        t = not_null(b_16);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_16 = ATgetFirst((ATermList) t);
          if(((b_16 != NULL) && (b_16 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_16;
      t = at_end_1_0(j_3, t);
    }
  return(t);
}
static ATerm n_18 (ATerm y_17, ATerm t)
{
  ATerm z_17 = NULL;
  t = SSL_explode_term(y_17);
  if(match_cons(t, sym__2))
    {
      ATerm h_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_17;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  i_18 = t;
  if(match_cons(t, sym__2))
    {
      g_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_3 (ATerm t);
            static ATerm k_3 (ATerm t)
            {
              t = h_18;
              return(t);
            }
            t = g_18;
            t = at_end_1_0(k_3, t);
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
            t = n_18(i_18, t);
          }
      }
    }
  else
    {
      t = n_18(i_18, t);
    }
  return(t);
}
static ATerm p_5 (ATerm u_67, ATerm t_67, ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  t = u_67;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_18 = NULL;
        t = term_o_9;
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_9, u_67);
        t = n_6(u_18, u_67, t);
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = (ATerm) ATempty;
      }
  }
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_67, q_18);
  t = conc_0_0(t);
  p_18 = t;
  t = term_o_9;
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, u_67, p_18);
  t = lookup_table_0_1(r_18, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(u_67, p_18, s_18, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, u_67, p_18);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm q_19 = NULL;
  q_19 = t;
  if(match_string(t, "-r"))
    {
      t = q_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = q_19;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL;
  t_19 = t;
  t = term_d_13;
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, t_19);
  t = u_5(u_19, t_19, t);
  t = t_19;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_m_16;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  if(match_string(t, "i"))
    {
      t = x_19;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = x_19;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = x_19;
        }
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,e_20 = NULL;
  z_19 = t;
  t = term_u_13;
  a_20 = t;
  t = (ATerm) ATinsert(ATempty, z_19);
  e_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_13, (ATerm) ATinsert(ATempty, z_19));
  t = p_5(a_20, e_20, t);
  t = z_19;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm g_20 = NULL;
  g_20 = t;
  if(match_string(t, "r"))
    {
      t = g_20;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = g_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = g_20;
        }
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm h_20 = NULL,k_20 = NULL;
  h_20 = t;
  t = term_o_16;
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, h_20);
  t = u_5(k_20, h_20, t);
  t = h_20;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm l_20 = NULL;
  l_20 = t;
  if(match_string(t, "-t"))
    {
      t = l_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = l_20;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm m_20 = NULL,p_20 = NULL,q_20 = NULL;
  m_20 = t;
  t = term_x_11;
  p_20 = t;
  t = (ATerm) ATinsert(ATempty, m_20);
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATempty, m_20));
  t = p_5(p_20, q_20, t);
  t = m_20;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_q_16;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm t_20 = NULL;
  t_20 = t;
  if(match_string(t, "-l"))
    {
      t = t_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = t_20;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm u_20 = NULL,x_20 = NULL;
  u_20 = t;
  t = term_h_12;
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, u_20);
  t = u_5(x_20, u_20, t);
  t = u_20;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_r_16;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  if(match_string(t, "-V"))
    {
      t = y_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = y_20;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm d_21 = NULL,g_21 = NULL;
  d_21 = t;
  t = term_q_9;
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, d_21);
  t = u_5(g_21, d_21, t);
  t = d_21;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_s_16;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm h_21 = NULL;
  h_21 = t;
  if(match_string(t, "q"))
    {
      t = h_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = h_21;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm i_21 = NULL,k_21 = NULL;
  i_21 = t;
  t = term_t_16;
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, i_21);
  t = u_5(k_21, i_21, t);
  t = i_21;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_u_16;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  if(match_string(t, "-a"))
    {
      t = l_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = l_21;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  t = term_p_12;
  n_21 = t;
  t = term_h_15;
  o_21 = t;
  t = term_v_16;
  t = u_5(n_21, o_21, t);
  t = m_21;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_w_16;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  if(match_string(t, "-L"))
    {
      t = p_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = p_21;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  t = term_h_12;
  t_21 = t;
  t = term_h_15;
  u_21 = t;
  t = term_x_16;
  t = u_5(t_21, u_21, t);
  t = s_21;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_y_16;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm w_21 = NULL;
  w_21 = t;
  if(match_string(t, "-R"))
    {
      t = w_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = w_21;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm x_21 = NULL,a_22 = NULL,b_22 = NULL;
  x_21 = t;
  t = term_r_12;
  a_22 = t;
  t = term_h_15;
  b_22 = t;
  t = term_z_16;
  t = u_5(a_22, b_22, t);
  t = x_21;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_a_17;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  t = SSL_string_to_int(c_22);
  d_22 = t;
  t = term_v_9;
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, d_22);
  t = u_5(e_22, d_22, t);
  t = c_22;
  return(t);
}
static ATerm t_5 (ATerm t)
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
            t = ArgOption_3_0(r_3, s_3, t_3, t);
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            {
              ATerm g_17 = t;
              int h_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(v_3, z_3, a_4, t);
                  LocalPopChoice(h_17);
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
                              t = ArgOption_3_0(g_4, i_4, k_4, t);
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
                                    t = ArgOption_3_0(m_4, o_4, p_4, t);
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
                                          t = Option_3_0(r_4, s_4, t_4, t);
                                          LocalPopChoice(t_17);
                                        }
                                      else
                                        {
                                          t = s_17;
                                          {
                                            ATerm u_17 = t;
                                            int v_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(u_4, v_4, x_4, t);
                                                LocalPopChoice(v_17);
                                              }
                                            else
                                              {
                                                t = u_17;
                                                {
                                                  ATerm w_17 = t;
                                                  int x_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(a_5, b_5, e_5, t);
                                                      LocalPopChoice(x_17);
                                                    }
                                                  else
                                                    {
                                                      t = w_17;
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
                                                            t = ArgOption_3_0(j_5, k_5, t_5, t);
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
static ATerm q_5 (ATerm o_57, ATerm p_57, ATerm t)
{
  ATerm g_22 = NULL;
  t = SSL_hashtable_remove(p_57, o_57);
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_22);
  return(t);
}
static ATerm r_5 (ATerm t_57, ATerm t)
{
  ATerm h_22 = NULL;
  t = SSL_hashtable_destroy(t_57);
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_22);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  i_22 = t;
  t = table_hashtable_0_0(t);
  l_22 = t;
  t = lookup_table_0_1(i_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5(n_22, t);
  t = l_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(i_22, m_22, t);
  t = i_22;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  t = term_c_18;
  w_22 = t;
  t = term_h_15;
  x_22 = t;
  t = term_d_18;
  t = u_5(w_22, x_22, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_e_18;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm y_22 = NULL,c_23 = NULL,d_23 = NULL,f_23 = NULL;
  t = term_c_18;
  d_23 = t;
  t = term_h_15;
  f_23 = t;
  t = term_d_18;
  t = u_5(d_23, f_23, t);
  t = term_f_18;
  y_22 = t;
  t = term_h_15;
  c_23 = t;
  t = term_j_18;
  t = u_5(y_22, c_23, t);
  t = term_k_18;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_5, a_6, r_6, t);
      LocalPopChoice(o_18);
    }
  else
    {
      t = m_18;
      t = Option_3_0(s_6, u_6, w_6, t);
    }
  return(t);
}
static ATerm u_5 (ATerm o_67, ATerm p_67, ATerm t)
{
  ATerm k_23 = NULL,m_23 = NULL;
  t = term_o_9;
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, o_67, p_67);
  t = lookup_table_0_1(k_23, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(o_67, p_67, m_23, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, o_67, p_67);
  return(t);
}
static ATerm s_5 (ATerm u_52, ATerm v_52, ATerm t_52, ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
  {
    ATerm t_18 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
        t = n_6(u_52, v_52, t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = t_18;
        t = (ATerm) ATempty;
      }
  }
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_52, v_52, (ATerm) ATinsert(CheckATermList(q_23), t_52));
  t = lookup_table_0_1(u_52, t);
  z_23 = t;
  t = (ATerm) ATinsert(CheckATermList(q_23), t_52);
  x_23 = t;
  t = z_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(v_52, x_23, y_23, t);
  t = p_23;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
      t = term_h_15;
      t = g_0(t);
      h_24 = t;
      t = term_r_15;
      i_24 = t;
      t = term_s_15;
      j_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_15, term_s_15, h_24);
      t = s_5(i_24, j_24, h_24, t);
      _fail(t);
    }
  else
    {
      ATerm o_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_24 = ATgetFirst((ATermList) t);
          g_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_24;
      t = d_0(t);
      t = term_h_15;
      t = f_0(t);
      o_24 = t;
      t = (ATerm) ATinsert(CheckATermList(g_24), o_24);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,w_4 = NULL;
  w_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_24 = ATgetFirst((ATermList) t);
      t_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_24);
  p_24 = t;
  t = s_24;
  t = y_83(t);
  u_24 = t;
  t = t_24;
  t = z_83(t);
  v_24 = t;
  t = (ATerm) ATinsert(CheckATermList(v_24), u_24);
  w_4 = t;
  t = SSLsetAnnotations(w_4, p_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_126 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,i_25 = NULL,j_25 = NULL,v_10 = NULL;
  b_25 = t;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_19;
        t = j_126(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
      }
  }
  t = b_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_25 = ATgetFirst((ATermList) t);
      g_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_25);
  e_25 = t;
  t = term_x_14;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, f_25);
  t = u_5(j_25, f_25, t);
  t = g_25;
  {
    static ATerm x_25 (ATerm t);
    static ATerm x_25 (ATerm t)
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_25 = NULL;
              o_25 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_25;
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              t = j_126(t);
              t = Cons_2_0(_id, x_25, t);
            }
          LocalPopChoice(c_19);
        }
      else
        {
          t = b_19;
          {
            ATerm t_25 = NULL,u_25 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_25 = ATgetFirst((ATermList) t);
                u_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_25), (ATerm) ATmakeAppl(sym_Undefined_1, t_25));
          }
        }
      return(t);
    }
    t = x_25(t);
  }
  i_25 = t;
  t = (ATerm) ATinsert(CheckATermList(i_25), (ATerm) ATmakeAppl(sym_Program_1, f_25));
  v_10 = t;
  t = SSLsetAnnotations(v_10, e_25);
  return(t);
}
static ATerm y_6 (ATerm t)
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
static ATerm z_6 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  t = term_f_19;
  n_26 = t;
  t = term_h_15;
  o_26 = t;
  t = term_g_19;
  t = u_5(n_26, o_26, t);
  t = term_h_19;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_i_19;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
  g_26 = t;
  t = term_r_15;
  h_26 = t;
  t = term_j_19;
  t = lookup_table_0_1(h_26, t);
  l_26 = t;
  t = term_s_15;
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
  t = m_6(i_26, j_26, k_26, t);
  t = g_26;
  {
    static ATerm x_6 (ATerm t);
    static ATerm x_6 (ATerm t)
    {
      ATerm k_19 = t;
      int l_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_126(t);
          LocalPopChoice(l_19);
        }
      else
        {
          t = k_19;
          {
            ATerm m_19 = t;
            int n_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_6, z_6, a_7, t);
                LocalPopChoice(n_19);
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
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL;
        a_27 = t;
        {
          ATerm r_19 = t;
          int s_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_2 = NULL;
              t = a_27;
              {
                ATerm v_19 = t;
                int w_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_2 = NULL,s_2 = NULL;
                    t = term_o_9;
                    r_2 = t;
                    t = term_f_19;
                    s_2 = t;
                    t = term_y_19;
                    t = n_6(r_2, s_2, t);
                    LocalPopChoice(w_19);
                  }
                else
                  {
                    t = v_19;
                    t = fetch_1_0(d_7, t);
                  }
              }
              t = a_27;
              t = h_126(t);
              t = term_b_20;
              p_2 = t;
              t = SSL_exit(p_2);
              LocalPopChoice(s_19);
            }
          else
            {
              t = r_19;
              {
                ATerm c_3 = NULL,e_3 = NULL,f_3 = NULL;
                t = term_o_9;
                e_3 = t;
                t = term_c_18;
                f_3 = t;
                t = term_c_20;
                t = n_6(e_3, f_3, t);
                t = a_27;
                t = i_126(t);
                t = term_b_20;
                c_3 = t;
                t = SSL_exit(c_3);
              }
            }
        }
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        {
          ATerm d_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
              static ATerm h_7 (ATerm t);
              static ATerm h_7 (ATerm t)
              {
                ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,z_10 = NULL;
                i_27 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_27);
                g_27 = t;
                t = h_27;
                if(((c_26 != NULL) && (c_26 != t)))
                  _fail(t);
                else
                  c_26 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_27);
                z_10 = t;
                t = SSLsetAnnotations(z_10, g_27);
                return(t);
              }
              t = fetch_1_0(h_7, t);
              t = term_x_12;
              e_27 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_26)), term_i_20);
              f_27 = t;
              t = SSL_printnl(e_27, f_27);
              t = (ATerm) ATmakeAppl(sym__2, term_x_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_26)), term_i_20));
              t = h_126(t);
              t = term_p_14;
              d_27 = t;
              t = SSL_exit(d_27);
              LocalPopChoice(f_20);
            }
          else
            {
              t = d_20;
            }
        }
      }
  }
  d_26 = t;
  t = term_r_15;
  t = table_destroy_0_0(t);
  t = d_26;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = debug_1_0(k_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_j_20;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm o_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_27 = NULL;
      t = parse_options_3_0(xtc_options_0_0, default_system_usage_0_0, default_system_about_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(i_7, t);
      t = xtc_read_0_0(t);
      {
        ATerm s_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_27 = NULL,u_27 = NULL;
                t = term_o_9;
                q_27 = t;
                t = term_o_16;
                u_27 = t;
                t = term_a_21;
                t = n_6(q_27, u_27, t);
                t = xtc_register_0_0(t);
                LocalPopChoice(z_20);
              }
            else
              {
                t = w_20;
                {
                  ATerm v_27 = NULL,w_27 = NULL;
                  t = term_o_9;
                  v_27 = t;
                  t = term_u_13;
                  w_27 = t;
                  t = term_v_13;
                  t = n_6(v_27, w_27, t);
                  t = register_import_0_0(t);
                }
              }
            t = xtc_store_0_0(t);
            LocalPopChoice(v_20);
          }
        else
          {
            t = s_20;
            {
              ATerm a_28 = NULL,d_28 = NULL;
              t = term_o_9;
              a_28 = t;
              t = term_t_16;
              d_28 = t;
              t = term_b_21;
              t = n_6(a_28, d_28, t);
              {
                ATerm c_21 = t;
                int e_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = repository_query_0_0(t);
                    LocalPopChoice(e_21);
                  }
                else
                  {
                    t = c_21;
                    {
                      ATerm f_21 = t;
                      int j_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = all_query_0_0(t);
                          LocalPopChoice(j_21);
                        }
                      else
                        {
                          t = f_21;
                          t = tool_query_0_0(t);
                        }
                    }
                  }
              }
            }
          }
      }
      t = term_b_20;
      p_27 = t;
      t = SSL_exit(p_27);
      LocalPopChoice(r_20);
    }
  else
    {
      t = o_20;
      t = debug_1_0(l_7, t);
    }
  return(t);
}
static ATerm w_5 (ATerm l_79, ATerm m_79, ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,h_28 = NULL,j_28 = NULL,l_28 = NULL;
  t = m_79;
  t = map_1_0(xtc_find_0_0, t);
  e_28 = t;
  t = term_n_11;
  l_28 = t;
  t = SSL_print(l_28, e_28);
  t = term_n_11;
  h_28 = t;
  t = (ATerm) ATinsert(ATempty, term_s_11);
  j_28 = t;
  t = SSL_print(h_28, j_28);
  t = term_b_20;
  f_28 = t;
  t = SSL_exit(f_28);
  return(t);
}
static ATerm x_5 (ATerm l_68, ATerm m_68, ATerm t)
{
  t = SSL_execvp(l_68, m_68);
  return(t);
}
ATerm debug_1_0 (ATerm u_103 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,x_28 = NULL;
  q_28 = t;
  t = u_103(t);
  r_28 = t;
  t = term_x_12;
  s_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_28), r_28);
  x_28 = t;
  t = SSL_printnl(s_28, x_28);
  t = q_28;
  return(t);
}
static ATerm y_5 (ATerm q_57, ATerm t)
{
  t = SSL_hashtable_keys(q_57);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL;
  static ATerm m_7 (ATerm t);
  static ATerm m_7 (ATerm t)
  {
    ATerm b_29 = NULL,c_29 = NULL;
    b_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), b_29);
    t = n_6(not_null(z_28), b_29, t);
    c_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_29, c_29);
    return(t);
  }
  if(((z_28 != NULL) && (z_28 != t)))
    _fail(t);
  else
    z_28 = t;
  t = lookup_table_0_1(z_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(a_29, t);
  t = map_1_0(m_7, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_121 (ATerm), ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_29 = NULL,j_29 = NULL,l_29 = NULL;
        t = term_o_9;
        j_29 = t;
        t = term_v_9;
        l_29 = t;
        t = term_b_10;
        t = n_6(j_29, l_29, t);
        i_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_29, term_v_21);
        t = geq_0_0(t);
        t = e_29;
        t = p_121(t);
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = e_29;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  static ATerm z_30 (ATerm t);
  static ATerm z_30 (ATerm t)
  {
    ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
    w_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_30 = ATgetFirst((ATermList) t);
        y_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_21 = t;
      int z_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_3 = NULL,q_3 = NULL,e_11 = NULL;
          t = SSLgetAnnotations(w_30);
          n_3 = t;
          t = x_30;
          t = m_104(t);
          q_3 = t;
          t = (ATerm) ATinsert(CheckATermList(y_30), q_3);
          e_11 = t;
          t = SSLsetAnnotations(e_11, n_3);
          LocalPopChoice(z_21);
        }
      else
        {
          t = y_21;
          {
            ATerm n_4 = NULL,q_4 = NULL,f_11 = NULL;
            t = SSLgetAnnotations(w_30);
            n_4 = t;
            t = y_30;
            t = z_30(t);
            q_4 = t;
            t = (ATerm) ATinsert(CheckATermList(q_4), x_30);
            f_11 = t;
            t = SSLsetAnnotations(f_11, n_4);
          }
        }
    }
    return(t);
  }
  t = z_30(t);
  return(t);
}
static ATerm n_6 (ATerm n_54, ATerm o_54, ATerm t)
{
  ATerm r_29 = NULL;
  t = lookup_table_0_1(n_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(o_54, r_29, t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_121 (ATerm), ATerm t)
{
  ATerm e_31 = NULL;
  e_31 = t;
  {
    ATerm f_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_31 = NULL,o_31 = NULL,p_31 = NULL;
        t = term_o_9;
        o_31 = t;
        t = term_v_9;
        p_31 = t;
        t = term_b_10;
        t = n_6(o_31, p_31, t);
        g_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_31, term_k_22);
        t = geq_0_0(t);
        t = e_31;
        t = o_121(t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = f_22;
        t = e_31;
      }
  }
  return(t);
}
static ATerm m_6 (ATerm j_57, ATerm k_57, ATerm l_57, ATerm t)
{
  ATerm t_31 = NULL;
  t = SSL_hashtable_put(l_57, j_57, k_57);
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_31);
  return(t);
}
static ATerm l_6 (ATerm m_57, ATerm n_57, ATerm t)
{
  t = SSL_hashtable_get(n_57, m_57);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_57, ATerm s_57, ATerm t)
{
  ATerm w_31 = NULL;
  t = SSL_hashtable_create(r_57, s_57);
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_31);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm c_32 = NULL,f_32 = NULL,h_32 = NULL,o_32 = NULL,v_32 = NULL;
  c_32 = t;
  t = term_o_22;
  o_32 = t;
  t = term_p_22;
  v_32 = t;
  t = c_32;
  t = new_hashtable_0_2(o_32, v_32, t);
  f_32 = t;
  t = c_32;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(c_32, f_32, h_32, t);
  t = c_32;
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
ATerm lookup_table_0_1 (ATerm g_54, ATerm t)
{
  ATerm m_33 = NULL;
  t = table_hashtable_0_0(t);
  m_33 = t;
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_4 = NULL;
        t = m_33;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_6(g_54, y_4, t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          ATerm i_5 = NULL;
          t = g_54;
          t = table_create_0_0(t);
          t = m_33;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_6(g_54, i_5, t);
        }
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
  z_33 = t;
  if(match_cons(t, sym__2))
    {
      a_34 = ATgetArgument(t, 0);
      b_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_34;
        if((a_34 != t))
          {
            _fail(t);
          }
        t = z_33;
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = (ATerm) ATmakeAppl(sym__2, a_34, b_34);
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_34, b_34);
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              t = SSL_gtr(a_34, b_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_34, b_34);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_121 (ATerm), ATerm t)
{
  ATerm f_34 = NULL;
  f_34 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
        t = term_o_9;
        i_34 = t;
        t = term_v_9;
        j_34 = t;
        t = term_b_10;
        t = n_6(i_34, j_34, t);
        h_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_34, term_b_23);
        t = geq_0_0(t);
        t = f_34;
        t = q_121(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = f_34;
      }
  }
  return(t);
}
static ATerm c_6 (ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm s_37, ATerm r_37, ATerm t)
{
  t = r_108(t);
  {
    static ATerm n_7 (ATerm t);
    static ATerm n_7 (ATerm t)
    {
      ATerm l_34 = NULL;
      l_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_37, l_34);
      t = q_108(t);
      return(t);
    }
    t = fetch_1_0(n_7, t);
  }
  t = r_37;
  return(t);
}
static ATerm d_6 (ATerm n_108 (ATerm), ATerm o_37, ATerm n_37, ATerm t)
{
  static ATerm f_35 (ATerm t);
  static ATerm f_35 (ATerm t)
  {
    ATerm z_34 = NULL,a_35 = NULL,c_35 = NULL;
    z_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_37;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_35 = ATgetFirst((ATermList) t);
            c_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_34;
              {
                static ATerm o_7 (ATerm t);
                static ATerm o_7 (ATerm t)
                {
                  t = n_37;
                  return(t);
                }
                t = c_6(n_108, o_7, a_35, c_35, t);
              }
              t = f_35(t);
              LocalPopChoice(g_23);
            }
          else
            {
              t = e_23;
              {
                ATerm e_7 = NULL,j_7 = NULL,m_11 = NULL;
                t = SSLgetAnnotations(z_34);
                e_7 = t;
                t = c_35;
                t = f_35(t);
                j_7 = t;
                t = (ATerm) ATinsert(CheckATermList(j_7), a_35);
                m_11 = t;
                t = SSLsetAnnotations(m_11, e_7);
              }
            }
        }
      }
    return(t);
  }
  t = o_37;
  t = f_35(t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm s_35 = NULL;
  if(match_cons(t, sym__2))
    {
      s_35 = ATgetArgument(t, 0);
      if((s_35 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm r_53, ATerm s_53, ATerm t_53, ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_53, s_53);
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_23 = ATgetArgument(t, 0);
            ATerm l_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_53, s_53);
        t = n_6(r_53, s_53, t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        t = (ATerm) ATempty;
      }
  }
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_35, t_53);
  t = d_6(t_7, m_35, t_53, t);
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_53, s_53, l_35);
  t = lookup_table_0_1(r_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(s_53, l_35, n_35, t);
  t = k_35;
  return(t);
}
ATerm map_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  static ATerm h_36 (ATerm t);
  static ATerm h_36 (ATerm t)
  {
    ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
    e_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_36;
      }
    else
      {
        ATerm a_8 = NULL,f_8 = NULL,l_8 = NULL,o_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_36 = ATgetFirst((ATermList) t);
            g_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_36);
        a_8 = t;
        t = f_36;
        t = e_104(t);
        f_8 = t;
        t = g_36;
        t = h_36(t);
        l_8 = t;
        t = (ATerm) ATinsert(CheckATermList(l_8), f_8);
        o_11 = t;
        t = SSLsetAnnotations(o_11, a_8);
      }
    return(t);
  }
  t = h_36(t);
  return(t);
}
static ATerm f_6 (ATerm y_117 (ATerm), ATerm b_54, ATerm a_54, ATerm t)
{
  static ATerm u_7 (ATerm t);
  static ATerm u_7 (ATerm t)
  {
    ATerm j_36 = NULL,k_36 = NULL;
    if(match_cons(t, sym__2))
      {
        j_36 = ATgetArgument(t, 0);
        k_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, b_54, j_36, k_36);
    t = y_117(t);
    return(t);
  }
  t = a_54;
  t = map_1_0(u_7, t);
  return(t);
}
static ATerm k_6 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_access(y_46, z_46);
  return(t);
}
static ATerm y_36 (ATerm s_36, ATerm t)
{
  t = SSL_fclose(s_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  w_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_36 = ATgetArgument(t, 0);
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_36);
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
            t = y_36(w_36, t);
          }
      }
    }
  else
    {
      t = y_36(w_36, t);
    }
  return(t);
}
static ATerm g_6 (ATerm n_31, ATerm t)
{
  t = SSL_read_term_from_stream(n_31);
  return(t);
}
static ATerm h_6 (ATerm o_45, ATerm p_45, ATerm t)
{
  t = SSL_strcat(o_45, p_45);
  return(t);
}
static ATerm i_6 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm z_36 = NULL;
  t = SSL_fopen(k_47, l_47);
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_37 = NULL;
  t = SSL_stdin_stream();
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_37);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_37 = NULL;
  t = SSL_stdout_stream();
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_37);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_37 = NULL;
  t = SSL_stderr_stream();
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_37);
  return(t);
}
static ATerm o_38 (ATerm i_37, ATerm t)
{
  ATerm j_37 = NULL;
  t = SSL_explode_term(i_37);
  if(match_cons(t, sym__2))
    {
      ATerm r_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_23 = ATgetArgument(t, 1);
        if(((ATgetType(s_23) == AT_LIST) && !(ATisEmpty(s_23))))
          {
            j_37 = ATgetFirst((ATermList) s_23);
            {
              ATerm t_23 = (ATerm) ATgetNext((ATermList) s_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_38 (ATerm m_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,z_37 = NULL,q_11 = NULL;
  t = SSLgetAnnotations(q_37);
  w_37 = t;
  t = m_37;
  if(match_cons(t, sym_Path_1))
    {
      z_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_37, p_37);
  q_11 = t;
  t = SSLsetAnnotations(q_11, w_37);
  if(match_cons(t, sym__2))
    {
      u_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(u_37, v_37, t);
  return(t);
}
static ATerm q_38 (ATerm b_38, ATerm c_38, ATerm d_38, ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,j_38 = NULL,w_11 = NULL;
  t = SSLgetAnnotations(d_38);
  g_38 = t;
  t = SSL_is_string(b_38);
  j_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_38, c_38);
  w_11 = t;
  t = SSLsetAnnotations(w_11, g_38);
  if(match_cons(t, sym__2))
    {
      e_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(e_38, f_38, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
  l_38 = t;
  if(match_cons(t, sym__2))
    {
      m_38 = ATgetArgument(t, 0);
      n_38 = ATgetArgument(t, 1);
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_38(l_38, t);
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            {
              ATerm w_23 = t;
              int a_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_38(m_38, n_38, l_38, t);
                  LocalPopChoice(a_24);
                }
              else
                {
                  t = w_23;
                  t = q_38(m_38, n_38, l_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_38(l_38, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,z_38 = NULL;
  z_38 = t;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_38, term_d_24);
        t = j_6(t);
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        {
          ATerm i_9 = NULL,k_9 = NULL;
          t = term_e_24;
          k_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_24, z_38);
          t = h_6(k_9, z_38, t);
          i_9 = t;
          t = SSL_perror(i_9);
          _fail(t);
        }
      }
  }
  t_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(u_38, t);
  s_38 = t;
  t = t_38;
  t = fclose_0_0(t);
  t = s_38;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_k_24;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_39 = NULL,d_39 = NULL;
      c_39 = t;
      t = (ATerm) ATinsert(ATempty, term_q_24);
      d_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_39, (ATerm) ATinsert(ATempty, term_q_24));
      t = k_6(c_39, d_39, t);
      LocalPopChoice(n_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_24;
      {
        ATerm r_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_24 = t;
            if((PushChoice() == 0))
              {
                ATerm e_39 = NULL,f_39 = NULL;
                e_39 = t;
                t = (ATerm) ATinsert(ATempty, term_o_13);
                f_39 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_39, (ATerm) ATinsert(ATempty, term_o_13));
                t = k_6(e_39, f_39, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_24;
              }
            t = debug_1_0(w_7, t);
            LocalPopChoice(x_24);
          }
        else
          {
            t = r_24;
            t = debug_1_0(b_8, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = debug_1_0(m_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_z_24;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = debug_1_0(s_8, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_a_25;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  t = term_x_12;
  x_39 = t;
  t = (ATerm) ATinsert(ATempty, term_c_25);
  y_39 = t;
  t = SSL_printnl(x_39, y_39);
  t = w_39;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  if(match_cons(t, sym__3))
    {
      z_39 = ATgetArgument(t, 0);
      a_40 = ATgetArgument(t, 1);
      b_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_6(z_39, a_40, b_40, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
  c_40 = t;
  t = term_x_12;
  d_40 = t;
  t = (ATerm) ATinsert(ATempty, term_d_25);
  e_40 = t;
  t = SSL_printnl(d_40, e_40);
  t = c_40;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  t = term_x_12;
  g_40 = t;
  t = (ATerm) ATinsert(ATempty, term_c_25);
  h_40 = t;
  t = SSL_printnl(g_40, h_40);
  t = f_40;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
  g_39 = t;
  t = if_verbose5_1_0(e_8, t);
  {
    ATerm h_25 = t;
    if((PushChoice() == 0))
      {
        ATerm u_39 = NULL,v_39 = NULL;
        t = term_d_10;
        u_39 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, g_39);
        v_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATmakeAppl(sym_Imported_1, g_39));
        t = n_6(u_39, v_39, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_25;
      }
  }
  i_39 = t;
  t = term_d_10;
  p_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, term_k_25, (ATerm) ATinsert(ATempty, g_39));
  t = lookup_table_0_1(p_39, t);
  t_39 = t;
  t = term_k_25;
  q_39 = t;
  t = (ATerm) ATinsert(ATempty, g_39);
  r_39 = t;
  t = t_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(q_39, r_39, s_39, t);
  t = i_39;
  t = if_verbose4_1_0(o_8, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_8, t);
  h_39 = t;
  t = term_d_10;
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, h_39);
  t = f_6(v_8, o_39, h_39, t);
  t = if_verbose6_1_0(w_8, t);
  t = term_d_10;
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, (ATerm)ATmakeAppl(sym_Imported_1, g_39), (ATerm) ATempty);
  t = lookup_table_0_1(j_39, t);
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, g_39);
  k_39 = t;
  t = (ATerm) ATempty;
  l_39 = t;
  t = n_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(k_39, l_39, m_39, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, (ATerm)ATmakeAppl(sym_Imported_1, g_39), (ATerm) ATempty);
  t = if_verbose4_1_0(x_8, t);
  return(t);
}
ATerm filter_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_40;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_40 = ATgetFirst((ATermList) t);
          v_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_9 = NULL,z_9 = NULL,a_10 = NULL,e_12 = NULL;
            t = SSLgetAnnotations(t_40);
            t_9 = t;
            t = u_40;
            t = f_112(t);
            z_9 = t;
            t = v_40;
            t = filter_1_0(f_112, t);
            a_10 = t;
            t = (ATerm) ATinsert(CheckATermList(a_10), z_9);
            e_12 = t;
            t = SSLsetAnnotations(e_12, t_9);
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            t = v_40;
            t = filter_1_0(f_112, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm t)
{
  static ATerm y_40 (ATerm t);
  static ATerm y_40 (ATerm t)
  {
    ATerm n_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_96(t);
        t = y_40(t);
        LocalPopChoice(p_25);
      }
    else
      {
        t = n_25;
        t = u_96(t);
      }
    return(t);
  }
  t = y_40(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_40 = NULL,a_41 = NULL;
      t = term_o_9;
      z_40 = t;
      t = term_d_13;
      a_41 = t;
      t = term_e_13;
      t = n_6(z_40, a_41, t);
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm s_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_41 = NULL;
            t = term_w_25;
            b_41 = t;
            t = SSL_getenv(b_41);
            LocalPopChoice(v_25);
          }
        else
          {
            t = s_25;
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
  t = term_y_25;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  t = term_d_10;
  h_41 = t;
  t = term_e_10;
  i_41 = t;
  t = term_h_10;
  t = n_6(h_41, i_41, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm z_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_25;
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
  t = term_a_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_41 = NULL;
  t = if_verbose5_1_0(y_8, t);
  d_41 = t;
  {
    ATerm b_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_41 = NULL,f_41 = NULL;
        t = term_d_10;
        e_41 = t;
        t = term_k_25;
        f_41 = t;
        t = term_f_26;
        t = n_6(e_41, f_41, t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = b_26;
        {
          ATerm g_41 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          g_41 = t;
          t = repeat_2_0(a_9, _id, t);
          t = g_41;
        }
      }
  }
  t = d_41;
  t = if_verbose5_1_0(b_9, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = debug_1_0(e_9, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_p_26;
  return(t);
}
static ATerm f_42 (ATerm n_41, ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  t = term_d_10;
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, n_41);
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATmakeAppl(sym_Tool_1, n_41));
  t = n_6(q_41, r_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_26 = ATgetFirst((ATermList) t);
      if(match_cons(q_26, sym__2))
        {
          ATerm s_26 = ATgetArgument(q_26, 0);
          p_41 = ATgetArgument(q_26, 1);
        }
      else
        _fail(t);
      {
        ATerm r_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_41;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = debug_1_0(l_9, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_p_26;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_d_10;
  t = table_getlist_0_0(t);
  t = debug_1_0(n_9, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
      t = if_verbose5_1_0(d_9, t);
      t = xtc_load_0_0(t);
      u_41 = t;
      if(match_cons(t, sym__2))
        {
          s_41 = ATgetArgument(t, 0);
          t_41 = ATgetArgument(t, 1);
          {
            ATerm w_26 = t;
            int x_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
                t = term_d_10;
                y_41 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, s_41);
                z_41 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATmakeAppl(sym_Tool_1, s_41));
                t = n_6(y_41, z_41, t);
                {
                  static ATerm g_9 (ATerm t);
                  static ATerm g_9 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((t_41 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((x_41 != NULL) && (x_41 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_41 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_9, t);
                }
                t = not_null(x_41);
                LocalPopChoice(x_26);
              }
            else
              {
                t = w_26;
                t = f_42(u_41, t);
              }
          }
        }
      else
        {
          t = f_42(u_41, t);
        }
      t = if_verbose5_1_0(h_9, t);
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm e_42 = NULL,m_10 = NULL,s_10 = NULL;
        e_42 = t;
        t = term_x_12;
        m_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_26), e_42), term_y_26);
        s_10 = t;
        t = SSL_printnl(m_10, s_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_26), e_42), term_y_26);
        t = if_verbose5_1_0(m_9, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
      n_42 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_42 = ATgetFirst((ATermList) t);
          p_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_42 = ATgetFirst((ATermList) t);
          r_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_42;
      if(match_string(t, "call"))
        {
          ATerm v_42 = NULL;
          t = r_42;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_42 = ATgetFirst((ATermList) t);
              m_42 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_42;
          t = xtc_find_0_0(t);
          v_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_42, m_42);
          t = x_5(v_42, m_42, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = n_42;
          t = w_5(o_42, r_42, t);
        }
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      t = xtc_main_0_0(t);
    }
  return(t);
}
