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
static ATerm term_d_27;
static ATerm term_c_27;
static ATerm term_x_26;
static ATerm term_t_26;
static ATerm term_i_26;
static ATerm term_e_26;
static ATerm term_c_26;
static ATerm term_a_26;
static ATerm term_n_25;
static ATerm term_g_25;
static ATerm term_f_25;
static ATerm term_e_25;
static ATerm term_d_25;
static ATerm term_t_24;
static ATerm term_p_24;
static ATerm term_o_24;
static ATerm term_i_24;
static ATerm term_h_24;
static ATerm term_d_23;
static ATerm term_r_22;
static ATerm term_n_22;
static ATerm term_m_22;
static ATerm term_y_21;
static ATerm term_d_21;
static ATerm term_c_21;
static ATerm term_m_20;
static ATerm term_l_20;
static ATerm term_i_20;
static ATerm term_f_20;
static ATerm term_e_20;
static ATerm term_b_20;
static ATerm term_n_19;
static ATerm term_m_19;
static ATerm term_l_19;
static ATerm term_k_19;
static ATerm term_j_19;
static ATerm term_e_19;
static ATerm term_p_18;
static ATerm term_o_18;
static ATerm term_k_18;
static ATerm term_i_18;
static ATerm term_h_18;
static ATerm term_g_18;
static ATerm term_e_18;
static ATerm term_f_17;
static ATerm term_e_17;
static ATerm term_d_17;
static ATerm term_c_17;
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
static ATerm term_h_16;
static ATerm term_f_16;
static ATerm term_e_16;
static ATerm term_c_16;
static ATerm term_a_16;
static ATerm term_t_15;
static ATerm term_p_15;
static ATerm term_n_15;
static ATerm term_m_15;
static ATerm term_l_15;
static ATerm term_f_15;
static ATerm term_e_15;
static ATerm term_z_14;
static ATerm term_y_14;
static ATerm term_x_14;
static ATerm term_s_14;
static ATerm term_r_14;
static ATerm term_m_14;
static ATerm term_l_14;
static ATerm term_k_14;
static ATerm term_g_14;
static ATerm term_v_13;
static ATerm term_t_13;
static ATerm term_s_13;
static ATerm term_q_13;
static ATerm term_p_13;
static ATerm term_m_13;
static ATerm term_e_13;
static ATerm term_d_13;
static ATerm term_c_13;
static ATerm term_y_12;
static ATerm term_x_12;
static ATerm term_w_12;
static ATerm term_v_12;
static ATerm term_u_12;
static ATerm term_s_12;
static ATerm term_r_12;
static ATerm term_p_12;
static ATerm term_k_12;
static ATerm term_j_12;
static ATerm term_i_12;
static ATerm term_h_12;
static ATerm term_a_12;
static ATerm term_w_11;
static ATerm term_s_11;
static ATerm term_p_11;
static ATerm term_n_11;
static ATerm term_m_10;
static ATerm term_h_10;
static ATerm term_f_10;
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
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_f_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_w_11);
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
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_p_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_s_12);
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
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_t_13);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_y_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_n_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_e_15);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_e_15);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_e_15);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_e_18, term_e_15);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_e_15);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__2, term_j_19, term_e_15);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym__3, term_m_15, term_n_15, (ATerm) ATempty);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_j_19);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_e_18);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_s_16);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_x_16);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_n_25);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm version_query_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm e_122 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
ATerm tool_query_0_0 (ATerm t);
static ATerm m_5 (ATerm l_79, ATerm t_945, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm all_query_0_0 (ATerm t);
ATerm repository_query_0_0 (ATerm t);
static ATerm n_5 (ATerm h_31, ATerm i_31, ATerm t);
static ATerm o_5 (ATerm m_104 (ATerm), ATerm j_281, ATerm r_31, ATerm t);
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
static ATerm p_5 (ATerm l_53, ATerm m_53, ATerm k_53, ATerm t);
ATerm xtc_register_0_3 (ATerm g_79, ATerm h_79, ATerm i_79, ATerm t);
ATerm if_verbose1_1_0 (ATerm c_122 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm d_122 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm f_127 (ATerm), ATerm g_127 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm j_105 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm s_18 (ATerm f_18, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_5 (ATerm u_67, ATerm t_67, ATerm t);
static ATerm l_3 (ATerm t);
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
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm xtc_options_0_0 (ATerm t);
static ATerm r_5 (ATerm n_57, ATerm o_57, ATerm t);
static ATerm s_5 (ATerm s_57, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm v_5 (ATerm o_67, ATerm p_67, ATerm t);
static ATerm t_5 (ATerm t_52, ATerm u_52, ATerm s_52, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm a_127 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm parse_options_3_0 (ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm xtc_main_0_0 (ATerm t);
static ATerm x_5 (ATerm b_80, ATerm c_80, ATerm t);
static ATerm y_5 (ATerm q_68, ATerm r_68, ATerm t);
ATerm debug_1_0 (ATerm k_104 (ATerm), ATerm t);
static ATerm z_5 (ATerm p_57, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm g_122 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm c_105 (ATerm), ATerm t);
static ATerm o_6 (ATerm m_54, ATerm n_54, ATerm t);
ATerm if_verbose4_1_0 (ATerm f_122 (ATerm), ATerm t);
static ATerm n_6 (ATerm i_57, ATerm j_57, ATerm k_57, ATerm t);
static ATerm m_6 (ATerm l_57, ATerm m_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_57, ATerm r_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm f_54, ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm h_122 (ATerm), ATerm t);
static ATerm d_6 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm s_37, ATerm r_37, ATerm t);
static ATerm e_6 (ATerm d_109 (ATerm), ATerm o_37, ATerm n_37, ATerm t);
static ATerm u_7 (ATerm t);
static ATerm f_6 (ATerm q_53, ATerm r_53, ATerm s_53, ATerm t);
ATerm map_1_0 (ATerm u_104 (ATerm), ATerm t);
static ATerm g_6 (ATerm o_118 (ATerm), ATerm a_54, ATerm z_53, ATerm t);
static ATerm l_6 (ATerm x_46, ATerm y_46, ATerm t);
static ATerm c_37 (ATerm w_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_6 (ATerm n_31, ATerm t);
static ATerm i_6 (ATerm n_45, ATerm o_45, ATerm t);
static ATerm j_6 (ATerm j_47, ATerm k_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_38 (ATerm m_37, ATerm t);
static ATerm t_38 (ATerm v_37, ATerm w_37, ATerm x_37, ATerm t);
static ATerm u_38 (ATerm f_38, ATerm g_38, ATerm h_38, ATerm t);
static ATerm k_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm v_112 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm t);
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
static ATerm j_42 (ATerm r_41, ATerm t);
static ATerm h_9 (ATerm t);
static ATerm k_9 (ATerm t);
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
  t = o_6(z_0, a_1, t);
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
  t = m_5(i_0, x_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm e_122 (ATerm), ATerm t)
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
        t = o_6(k_1, l_1, t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_1, term_c_10);
        t = geq_0_0(t);
        t = h_1;
        t = e_122(t);
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
  t = term_f_10;
  f_2 = t;
  t = term_h_10;
  t = o_6(a_2, f_2, t);
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
  t = term_m_10;
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
      int u_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_2 = NULL,l_2 = NULL;
          t = if_verbose3_1_0(m_0, t);
          t = term_d_10;
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym_Tool_1, i_2);
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATmakeAppl(sym_Tool_1, i_2));
          t = o_6(k_2, l_2, t);
          if(((s_1 != NULL) && (s_1 != t)))
            _fail(t);
          else
            s_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, i_2), s_1);
          {
            ATerm y_10 = t;
            int c_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = version_query_0_0(t);
                LocalPopChoice(c_11);
              }
            else
              {
                t = y_10;
                if(match_cons(t, sym__2))
                  {
                    ATerm j_11 = ATgetArgument(t, 0);
                    ATerm k_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, i_2), s_1);
                t = m_5(i_2, s_1, t);
              }
          }
          LocalPopChoice(u_10);
        }
      else
        {
          t = p_10;
          {
            ATerm r_2 = NULL,w_2 = NULL;
            t = term_n_11;
            r_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_11), term_p_11), i_2);
            w_2 = t;
            t = SSL_print(r_2, w_2);
            t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_11), term_p_11), i_2));
          }
        }
    }
    return(t);
  }
  t = term_o_9;
  w_1 = t;
  t = term_w_11;
  y_1 = t;
  t = term_a_12;
  t = o_6(w_1, y_1, t);
  u_1 = t;
  t = repeat_2_0(b_0, _id, t);
  t = u_1;
  t = map_1_0(c_0, t);
  return(t);
}
static ATerm m_5 (ATerm l_79, ATerm t_945, ATerm t)
{
  static ATerm b_1 (ATerm t);
  static ATerm b_1 (ATerm t)
  {
    ATerm x_2 = NULL,y_2 = NULL;
    if(match_cons(t, sym__2))
      {
        x_2 = ATgetArgument(t, 0);
        y_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm e_12 = t;
      int g_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,g_3 = NULL;
          t = term_o_9;
          c_3 = t;
          t = term_h_12;
          g_3 = t;
          t = term_i_12;
          t = o_6(c_3, g_3, t);
          t = term_n_11;
          a_3 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_s_11), y_2);
          b_3 = t;
          t = SSL_print(a_3, b_3);
          t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATempty, term_s_11), y_2));
          LocalPopChoice(g_12);
        }
      else
        {
          t = e_12;
          {
            ATerm i_3 = NULL,m_3 = NULL;
            t = term_n_11;
            i_3 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), y_2), term_k_12), x_2), term_j_12), l_79);
            m_3 = t;
            t = SSL_print(i_3, m_3);
            t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), y_2), term_k_12), x_2), term_j_12), l_79));
          }
        }
    }
    return(t);
  }
  t = t_945;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  t = term_d_10;
  x_3 = t;
  t = term_f_10;
  y_3 = t;
  t = term_h_10;
  t = o_6(x_3, y_3, t);
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
  ATerm x_4 = NULL,a_5 = NULL,d_5 = NULL;
  d_5 = t;
  if(match_cons(t, sym__2))
    {
      x_4 = ATgetArgument(t, 0);
      a_5 = ATgetArgument(t, 1);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 = NULL,h_0 = NULL,k_0 = NULL,p_0 = NULL,w_0 = NULL,y_0 = NULL,c_4 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(d_5);
            k_0 = t;
            t = x_4;
            if(match_cons(t, sym_Tool_1))
              {
                w_0 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_4);
            p_0 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, w_0);
            b_4 = t;
            t = SSLsetAnnotations(b_4, p_0);
            y_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_0, a_5);
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
            t = m_5(e_0, h_0, t);
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
  t = term_r_12;
  t = o_6(u_3, w_3, t);
  t = repeat_2_0(g_1, _id, t);
  t = term_d_10;
  t = table_getlist_0_0(t);
  t = map_1_0(i_1, t);
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm w_5 = NULL,b_6 = NULL,c_6 = NULL,p_6 = NULL,q_6 = NULL;
  t = term_o_9;
  p_6 = t;
  t = term_s_12;
  q_6 = t;
  t = term_u_12;
  t = o_6(p_6, q_6, t);
  t = xtc_location_0_0(t);
  w_5 = t;
  t = term_n_11;
  b_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_11), w_5), term_v_12);
  c_6 = t;
  t = SSL_print(b_6, c_6);
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_11), w_5), term_v_12));
  return(t);
}
static ATerm n_5 (ATerm h_31, ATerm i_31, ATerm t)
{
  ATerm r_6 = NULL;
  t = SSL_write_term_to_stream_baf(h_31, i_31);
  r_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_6);
  return(t);
}
static ATerm o_5 (ATerm m_104 (ATerm), ATerm j_281, ATerm r_31, ATerm t)
{
  ATerm w_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_281, term_w_12);
  t = k_6(t);
  w_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_6, r_31);
  t = m_104(t);
  t = fclose_0_0(t);
  t = r_31;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,l_7 = NULL;
  g_7 = t;
  t = term_x_12;
  h_7 = t;
  t = (ATerm) ATinsert(ATempty, term_y_12);
  l_7 = t;
  t = SSL_printnl(h_7, l_7);
  t = g_7;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_12 = ATgetArgument(t, 0);
      if(match_cons(z_12, sym_Stream_1))
        {
          z_7 = ATgetArgument(z_12, 0);
        }
      else
        _fail(t);
      a_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(z_7, a_8, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  t = if_verbose1_1_0(m_1, t);
  t = term_o_9;
  c_7 = t;
  t = term_d_13;
  d_7 = t;
  t = term_e_13;
  t = o_6(c_7, d_7, t);
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 = NULL,r_7 = NULL;
            q_7 = t;
            t = (ATerm) ATinsert(ATempty, term_m_13);
            r_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_7, (ATerm) ATinsert(ATempty, term_m_13));
            t = l_6(q_7, r_7, t);
            LocalPopChoice(l_13);
            {
              ATerm s_7 = NULL,t_7 = NULL;
              s_7 = t;
              t = (ATerm) ATinsert(ATempty, term_p_13);
              t_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_7, (ATerm) ATinsert(ATempty, term_p_13));
              t = l_6(s_7, t_7, t);
            }
          }
        else
          {
            t = h_13;
          }
        LocalPopChoice(g_13);
        {
          ATerm x_7 = NULL,y_7 = NULL;
          y_7 = t;
          t = term_d_10;
          t = table_getlist_0_0(t);
          x_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_7, x_7);
          t = o_5(n_1, y_7, x_7, t);
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
  t = term_q_13;
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
  ATerm d_8 = NULL,e_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
  t = term_o_9;
  k_8 = t;
  t = term_t_13;
  l_8 = t;
  t = term_v_13;
  t = o_6(k_8, l_8, t);
  t = if_verbose2_1_0(p_1, t);
  t = term_o_9;
  i_8 = t;
  t = term_t_13;
  j_8 = t;
  t = term_v_13;
  t = o_6(i_8, j_8, t);
  d_8 = t;
  t = if_verbose5_1_0(r_1, t);
  t = term_d_10;
  e_8 = t;
  t = term_f_10;
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, term_f_10, d_8);
  t = p_5(e_8, h_8, d_8, t);
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
static ATerm p_5 (ATerm l_53, ATerm m_53, ATerm k_53, ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_53, m_53);
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
        t = (ATerm) ATmakeAppl(sym__2, l_53, m_53);
        t = o_6(l_53, m_53, t);
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        t = (ATerm) ATempty;
      }
  }
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_53, r_8);
  t = e_6(x_1, k_53, r_8, t);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_53, m_53, q_8);
  t = lookup_table_0_1(l_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(m_53, q_8, s_8, t);
  t = p_8;
  return(t);
}
ATerm xtc_register_0_3 (ATerm g_79, ATerm h_79, ATerm i_79, ATerm t)
{
  ATerm j_9 = NULL;
  j_9 = t;
  t = xtc_load_0_0(t);
  t = g_79;
  {
    ATerm a_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_79;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_14 = ATgetFirst((ATermList) t);
                ATerm f_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_79;
          }
        LocalPopChoice(c_14);
      }
    else
      {
        t = a_14;
        t = (ATerm) ATinsert(ATempty, g_79);
      }
  }
  {
    static ATerm b_2 (ATerm t);
    static ATerm b_2 (ATerm t)
    {
      ATerm p_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,e_10 = NULL,g_10 = NULL;
      w_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_9), term_g_14), i_79);
      g_10 = t;
      t = SSL_concat_strings(g_10);
      p_9 = t;
      t = term_d_10;
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym_Tool_1, w_9);
      y_9 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_79, p_9));
      e_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_10, (ATerm)ATmakeAppl(sym_Tool_1, w_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_79, p_9)));
      t = p_5(x_9, y_9, e_10, t);
      return(t);
    }
    t = map_1_0(b_2, t);
  }
  t = j_9;
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_122 (ATerm), ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_10 = NULL,l_10 = NULL,o_10 = NULL;
        t = term_o_9;
        l_10 = t;
        t = term_v_9;
        o_10 = t;
        t = term_b_10;
        t = o_6(l_10, o_10, t);
        k_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_10, term_k_14);
        t = geq_0_0(t);
        t = i_10;
        t = c_122(t);
        LocalPopChoice(j_14);
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
  ATerm h_11 = NULL,i_11 = NULL,l_11 = NULL;
  h_11 = t;
  t = term_x_12;
  i_11 = t;
  t = (ATerm) ATinsert(ATempty, term_l_14);
  l_11 = t;
  t = SSL_printnl(i_11, l_11);
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
  t = term_m_14;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_r_14;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,v_10 = NULL,x_10 = NULL,z_10 = NULL,b_11 = NULL,d_11 = NULL,e_11 = NULL;
  t = term_o_9;
  d_11 = t;
  t = term_w_11;
  e_11 = t;
  t = term_a_12;
  t = o_6(d_11, e_11, t);
  q_10 = t;
  t = if_verbose1_1_0(c_2, t);
  t = if_verbose2_1_0(d_2, t);
  t = term_o_9;
  z_10 = t;
  t = term_q_9;
  b_11 = t;
  t = term_r_9;
  t = o_6(z_10, b_11, t);
  r_10 = t;
  t = if_verbose2_1_0(g_2, t);
  t = term_o_9;
  v_10 = t;
  t = term_h_12;
  x_10 = t;
  t = term_i_12;
  t = o_6(v_10, x_10, t);
  s_10 = t;
  t = if_verbose2_1_0(j_2, t);
  t = q_10;
  t = xtc_register_0_3(q_10, r_10, s_10, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_122 (ATerm), ATerm t)
{
  ATerm r_11 = NULL;
  r_11 = t;
  {
    ATerm u_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
        t = term_o_9;
        u_11 = t;
        t = term_v_9;
        v_11 = t;
        t = term_b_10;
        t = o_6(u_11, v_11, t);
        t_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_11, term_x_14);
        t = geq_0_0(t);
        t = r_11;
        t = d_122(t);
        LocalPopChoice(w_14);
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
  t = term_y_14;
  z_11 = t;
  t = term_z_14;
  t = o_6(y_11, z_11, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
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
                ATerm c_15 = ATgetFirst((ATermList) t);
                ATerm d_15 = (ATerm) ATgetNext((ATermList) t);
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
  d_12 = t;
  t = SSL_printnl(d_12, c_12);
  t = b_12;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,t_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_12 = ATgetFirst((ATermList) t);
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
        t = q_12;
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
      t = term_e_15;
      t = l_0(t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm o_13 = NULL,r_13 = NULL,u_13 = NULL,i_4 = NULL;
  u_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_13);
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_13);
  i_4 = t;
  t = SSLsetAnnotations(i_4, o_13);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm b_14 = NULL;
  b_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_14), term_f_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm f_127 (ATerm), ATerm g_127 (ATerm), ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  ATerm g_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_13 = NULL,n_13 = NULL;
      t = term_o_9;
      k_13 = t;
      t = term_y_14;
      n_13 = t;
      t = term_z_14;
      t = o_6(k_13, n_13, t);
      LocalPopChoice(i_15);
    }
  else
    {
      t = g_15;
      t = fetch_1_0(o_2, t);
    }
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_127(t);
        t = echo_0_0(t);
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
      }
  }
  t = term_l_15;
  t = echo_0_0(t);
  t = term_m_15;
  i_13 = t;
  t = term_n_15;
  j_13 = t;
  t = term_p_15;
  t = o_6(i_13, j_13, t);
  t = reverse_acc_2_0(_id, q_2, t);
  t = map_1_0(u_2, t);
  t = term_t_15;
  t = echo_0_0(t);
  {
    ATerm u_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_127(t);
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_14 = NULL;
              e_14 = t;
              t = SSL_is_string(e_14);
              t = e_14;
              LocalPopChoice(z_15);
              {
                ATerm h_14 = NULL;
                h_14 = t;
                t = (ATerm) ATinsert(ATempty, h_14);
              }
            }
          else
            {
              t = y_15;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(x_15);
      }
    else
      {
        t = u_15;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm q_14 = NULL,t_14 = NULL,v_14 = NULL,k_4 = NULL;
  v_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_14);
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_14);
  k_4 = t;
  t = SSLsetAnnotations(k_4, q_14);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_16), term_c_16), term_a_16);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_16), term_f_16);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_14 = NULL,p_14 = NULL;
        t = term_o_9;
        o_14 = t;
        t = term_y_14;
        p_14 = t;
        t = term_z_14;
        t = o_6(o_14, p_14, t);
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        t = fetch_1_0(v_2, t);
      }
  }
  t = n_14;
  t = default_system_usage_2_0(z_2, h_3, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm h_15 = NULL,o_15 = NULL,q_15 = NULL,r_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_15 = NULL,v_15 = NULL,w_15 = NULL;
      t = term_e_15;
      t = u_0(t);
      s_15 = t;
      t = term_m_15;
      v_15 = t;
      t = term_n_15;
      w_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_15, term_n_15, s_15);
      t = t_5(v_15, w_15, s_15, t);
      _fail(t);
    }
  else
    {
      ATerm b_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_15 = ATgetFirst((ATermList) t);
          o_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_15 = ATgetFirst((ATermList) t);
          r_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_15;
      t = r_0(t);
      t = q_15;
      t = t_0(t);
      b_16 = t;
      t = (ATerm) ATinsert(CheckATermList(r_15), b_16);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_105 (ATerm), ATerm t)
{
  static ATerm u_17 (ATerm t);
  static ATerm u_17 (ATerm t)
  {
    ATerm n_17 = NULL,o_17 = NULL,s_17 = NULL;
    s_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_17 = ATgetFirst((ATermList) t);
        o_17 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_1 = NULL,z_1 = NULL,m_4 = NULL;
          t = SSLgetAnnotations(s_17);
          t_1 = t;
          t = o_17;
          t = u_17(t);
          z_1 = t;
          t = (ATerm) ATinsert(CheckATermList(z_1), n_17);
          m_4 = t;
          t = SSLsetAnnotations(m_4, t_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_17;
        t = j_105(t);
      }
    return(t);
  }
  t = u_17(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_16 = NULL,g_16 = NULL,i_16 = NULL;
  d_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_16;
    }
  else
    {
      static ATerm j_3 (ATerm t);
      static ATerm j_3 (ATerm t)
      {
        t = not_null(i_16);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_16 = ATgetFirst((ATermList) t);
          if(((i_16 != NULL) && (i_16 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_16;
      t = at_end_1_0(j_3, t);
    }
  return(t);
}
static ATerm s_18 (ATerm f_18, ATerm t)
{
  ATerm j_18 = NULL;
  t = SSL_explode_term(f_18);
  if(match_cons(t, sym__2))
    {
      ATerm l_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_18;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  n_18 = t;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_3 (ATerm t);
            static ATerm k_3 (ATerm t)
            {
              t = m_18;
              return(t);
            }
            t = l_18;
            t = at_end_1_0(k_3, t);
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            t = s_18(n_18, t);
          }
      }
    }
  else
    {
      t = s_18(n_18, t);
    }
  return(t);
}
static ATerm q_5 (ATerm u_67, ATerm t_67, ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL;
  t = u_67;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL;
        t = term_o_9;
        y_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_9, u_67);
        t = o_6(y_18, u_67, t);
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        t = (ATerm) ATempty;
      }
  }
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_67, u_18);
  t = conc_0_0(t);
  t_18 = t;
  t = term_o_9;
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, u_67, t_18);
  t = lookup_table_0_1(v_18, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(u_67, t_18, w_18, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, u_67, t_18);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  if(match_string(t, "-r"))
    {
      t = w_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = w_19;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm x_19 = NULL,a_20 = NULL;
  x_19 = t;
  t = term_d_13;
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, x_19);
  t = v_5(a_20, x_19, t);
  t = x_19;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_q_16;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  if(match_string(t, "i"))
    {
      t = c_20;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = c_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = c_20;
        }
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm d_20 = NULL,j_20 = NULL,k_20 = NULL;
  d_20 = t;
  t = term_t_13;
  j_20 = t;
  t = (ATerm) ATinsert(ATempty, d_20);
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, (ATerm) ATinsert(ATempty, d_20));
  t = q_5(j_20, k_20, t);
  t = d_20;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_r_16;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  if(match_string(t, "r"))
    {
      t = n_20;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = n_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = n_20;
        }
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  t = term_s_16;
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_16, o_20);
  t = v_5(p_20, o_20, t);
  t = o_20;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_t_16;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  if(match_string(t, "-t"))
    {
      t = s_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = s_20;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm t_20 = NULL,w_20 = NULL,x_20 = NULL;
  t_20 = t;
  t = term_w_11;
  w_20 = t;
  t = (ATerm) ATinsert(ATempty, t_20);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATempty, t_20));
  t = q_5(w_20, x_20, t);
  t = t_20;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_u_16;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm a_21 = NULL;
  a_21 = t;
  if(match_string(t, "-l"))
    {
      t = a_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = a_21;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm b_21 = NULL,f_21 = NULL;
  b_21 = t;
  t = term_h_12;
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, b_21);
  t = v_5(f_21, b_21, t);
  t = b_21;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  if(match_string(t, "-V"))
    {
      t = i_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = i_21;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  j_21 = t;
  t = term_q_9;
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, j_21);
  t = v_5(k_21, j_21, t);
  t = j_21;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_w_16;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  if(match_string(t, "q"))
    {
      t = l_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = l_21;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  n_21 = t;
  t = term_x_16;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_16, n_21);
  t = v_5(o_21, n_21, t);
  t = n_21;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_y_16;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  if(match_string(t, "-a"))
    {
      t = p_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = p_21;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  q_21 = t;
  t = term_p_12;
  r_21 = t;
  t = term_e_15;
  s_21 = t;
  t = term_z_16;
  t = v_5(r_21, s_21, t);
  t = q_21;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_a_17;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  if(match_string(t, "-L"))
    {
      t = v_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = v_21;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,z_21 = NULL;
  w_21 = t;
  t = term_h_12;
  x_21 = t;
  t = term_e_15;
  z_21 = t;
  t = term_b_17;
  t = v_5(x_21, z_21, t);
  t = w_21;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_c_17;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  if(match_string(t, "-R"))
    {
      t = a_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = a_22;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  d_22 = t;
  t = term_s_12;
  e_22 = t;
  t = term_e_15;
  f_22 = t;
  t = term_d_17;
  t = v_5(e_22, f_22, t);
  t = d_22;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_e_17;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,j_22 = NULL;
  g_22 = t;
  t = SSL_string_to_int(g_22);
  h_22 = t;
  t = term_v_9;
  j_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, h_22);
  t = v_5(j_22, h_22, t);
  t = g_22;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(l_3, o_3, p_3, t);
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_3, s_3, t_3, t);
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            {
              ATerm k_17 = t;
              int l_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(v_3, z_3, a_4, t);
                  LocalPopChoice(l_17);
                }
              else
                {
                  t = k_17;
                  {
                    ATerm m_17 = t;
                    int p_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(d_4, e_4, f_4, t);
                        LocalPopChoice(p_17);
                      }
                    else
                      {
                        t = m_17;
                        {
                          ATerm q_17 = t;
                          int r_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(g_4, h_4, j_4, t);
                              LocalPopChoice(r_17);
                            }
                          else
                            {
                              t = q_17;
                              {
                                ATerm t_17 = t;
                                int v_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(l_4, o_4, p_4, t);
                                    LocalPopChoice(v_17);
                                  }
                                else
                                  {
                                    t = t_17;
                                    {
                                      ATerm w_17 = t;
                                      int x_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(q_4, s_4, u_4, t);
                                          LocalPopChoice(x_17);
                                        }
                                      else
                                        {
                                          t = w_17;
                                          {
                                            ATerm y_17 = t;
                                            int z_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(v_4, w_4, y_4, t);
                                                LocalPopChoice(z_17);
                                              }
                                            else
                                              {
                                                t = y_17;
                                                {
                                                  ATerm a_18 = t;
                                                  int b_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(b_5, c_5, e_5, t);
                                                      LocalPopChoice(b_18);
                                                    }
                                                  else
                                                    {
                                                      t = a_18;
                                                      {
                                                        ATerm c_18 = t;
                                                        int d_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(f_5, g_5, h_5, t);
                                                            LocalPopChoice(d_18);
                                                          }
                                                        else
                                                          {
                                                            t = c_18;
                                                            t = ArgOption_3_0(i_5, k_5, l_5, t);
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
static ATerm r_5 (ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm k_22 = NULL;
  t = SSL_hashtable_remove(o_57, n_57);
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_22);
  return(t);
}
static ATerm s_5 (ATerm s_57, ATerm t)
{
  ATerm o_22 = NULL;
  t = SSL_hashtable_destroy(s_57);
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_22);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,y_22 = NULL,z_22 = NULL;
  p_22 = t;
  t = table_hashtable_0_0(t);
  q_22 = t;
  t = lookup_table_0_1(p_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(z_22, t);
  t = q_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5(p_22, y_22, t);
  t = p_22;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm a_23 = NULL,e_23 = NULL;
  t = term_e_18;
  a_23 = t;
  t = term_e_15;
  e_23 = t;
  t = term_g_18;
  t = v_5(a_23, e_23, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_h_18;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm f_23 = NULL,h_23 = NULL,m_23 = NULL,o_23 = NULL;
  t = term_e_18;
  m_23 = t;
  t = term_e_15;
  o_23 = t;
  t = term_g_18;
  t = v_5(m_23, o_23, t);
  t = term_i_18;
  f_23 = t;
  t = term_e_15;
  h_23 = t;
  t = term_k_18;
  t = v_5(f_23, h_23, t);
  t = term_o_18;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_p_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, a_6, s_6, t);
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      t = Option_3_0(t_6, u_6, v_6, t);
    }
  return(t);
}
static ATerm v_5 (ATerm o_67, ATerm p_67, ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL;
  t = term_o_9;
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, o_67, p_67);
  t = lookup_table_0_1(p_23, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(o_67, p_67, q_23, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, o_67, p_67);
  return(t);
}
static ATerm t_5 (ATerm t_52, ATerm u_52, ATerm s_52, ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
  {
    ATerm x_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_19 = ATgetArgument(t, 0);
            ATerm b_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
        t = o_6(t_52, u_52, t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = x_18;
        t = (ATerm) ATempty;
      }
  }
  a_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_52, u_52, (ATerm) ATinsert(CheckATermList(a_24), s_52));
  t = lookup_table_0_1(t_52, t);
  d_24 = t;
  t = (ATerm) ATinsert(CheckATermList(a_24), s_52);
  b_24 = t;
  t = d_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(u_52, b_24, c_24, t);
  t = z_23;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
      t = term_e_15;
      t = g_0(t);
      l_24 = t;
      t = term_m_15;
      m_24 = t;
      t = term_n_15;
      n_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_15, term_n_15, l_24);
      t = t_5(m_24, n_24, l_24, t);
      _fail(t);
    }
  else
    {
      ATerm s_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_24 = ATgetFirst((ATermList) t);
          k_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_24;
      t = d_0(t);
      t = term_e_15;
      t = f_0(t);
      s_24 = t;
      t = (ATerm) ATinsert(CheckATermList(k_24), s_24);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,t_4 = NULL;
  a_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_24 = ATgetFirst((ATermList) t);
      x_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_25);
  v_24 = t;
  t = w_24;
  t = o_84(t);
  y_24 = t;
  t = x_24;
  t = p_84(t);
  z_24 = t;
  t = (ATerm) ATinsert(CheckATermList(z_24), y_24);
  t_4 = t;
  t = SSLsetAnnotations(t_4, v_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_127 (ATerm), ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,m_25 = NULL,p_25 = NULL,w_10 = NULL;
  h_25 = t;
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_19;
        t = a_127(t);
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
      }
  }
  t = h_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_25 = ATgetFirst((ATermList) t);
      k_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_25);
  i_25 = t;
  t = term_y_14;
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, j_25);
  t = v_5(p_25, j_25, t);
  t = k_25;
  {
    static ATerm b_26 (ATerm t);
    static ATerm b_26 (ATerm t)
    {
      ATerm f_19 = t;
      int g_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_25 = NULL;
              u_25 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_25;
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              t = a_127(t);
              t = Cons_2_0(_id, b_26, t);
            }
          LocalPopChoice(g_19);
        }
      else
        {
          t = f_19;
          {
            ATerm x_25 = NULL,y_25 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_25 = ATgetFirst((ATermList) t);
                y_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_25), (ATerm) ATmakeAppl(sym_Undefined_1, x_25));
          }
        }
      return(t);
    }
    t = b_26(t);
  }
  m_25 = t;
  t = (ATerm) ATinsert(CheckATermList(m_25), (ATerm) ATmakeAppl(sym_Program_1, j_25));
  w_10 = t;
  t = SSLsetAnnotations(w_10, i_25);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  if(match_string(t, "--help"))
    {
      t = q_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_26;
        }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  t = term_j_19;
  r_26 = t;
  t = term_e_15;
  s_26 = t;
  t = term_k_19;
  t = v_5(r_26, s_26, t);
  t = term_l_19;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_m_19;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  k_26 = t;
  t = term_m_15;
  l_26 = t;
  t = term_n_19;
  t = lookup_table_0_1(l_26, t);
  p_26 = t;
  t = term_n_15;
  m_26 = t;
  t = (ATerm) ATempty;
  n_26 = t;
  t = p_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(m_26, n_26, o_26, t);
  t = k_26;
  {
    static ATerm x_6 (ATerm t);
    static ATerm x_6 (ATerm t)
    {
      ATerm o_19 = t;
      int p_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_126(t);
          LocalPopChoice(p_19);
        }
      else
        {
          t = o_19;
          {
            ATerm q_19 = t;
            int r_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_6, z_6, a_7, t);
                LocalPopChoice(r_19);
              }
            else
              {
                t = q_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_6, t);
  }
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_27 = NULL;
        g_27 = t;
        {
          ATerm u_19 = t;
          int v_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_2 = NULL;
              t = g_27;
              {
                ATerm y_19 = t;
                int z_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_2 = NULL,t_2 = NULL;
                    t = term_o_9;
                    s_2 = t;
                    t = term_j_19;
                    t_2 = t;
                    t = term_b_20;
                    t = o_6(s_2, t_2, t);
                    LocalPopChoice(z_19);
                  }
                else
                  {
                    t = y_19;
                    t = fetch_1_0(b_7, t);
                  }
              }
              t = g_27;
              t = y_126(t);
              t = term_e_20;
              p_2 = t;
              t = SSL_exit(p_2);
              LocalPopChoice(v_19);
            }
          else
            {
              t = u_19;
              {
                ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
                t = term_o_9;
                e_3 = t;
                t = term_e_18;
                f_3 = t;
                t = term_f_20;
                t = o_6(e_3, f_3, t);
                t = g_27;
                t = z_126(t);
                t = term_e_20;
                d_3 = t;
                t = SSL_exit(d_3);
              }
            }
        }
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
              static ATerm f_7 (ATerm t);
              static ATerm f_7 (ATerm t)
              {
                ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,a_11 = NULL;
                m_27 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_27);
                k_27 = t;
                t = l_27;
                if(((g_26 != NULL) && (g_26 != t)))
                  _fail(t);
                else
                  g_26 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_27);
                a_11 = t;
                t = SSLsetAnnotations(a_11, k_27);
                return(t);
              }
              t = fetch_1_0(f_7, t);
              t = term_x_12;
              i_27 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_26)), term_i_20);
              j_27 = t;
              t = SSL_printnl(i_27, j_27);
              t = (ATerm) ATmakeAppl(sym__2, term_x_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_26)), term_i_20));
              t = y_126(t);
              t = term_k_14;
              h_27 = t;
              t = SSL_exit(h_27);
              LocalPopChoice(h_20);
            }
          else
            {
              t = g_20;
            }
        }
      }
  }
  j_26 = t;
  t = term_m_15;
  t = table_destroy_0_0(t);
  t = j_26;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = debug_1_0(k_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_27 = NULL;
      t = parse_options_3_0(xtc_options_0_0, default_system_usage_0_0, default_system_about_0_0, t);
      t = xtc_location_0_0(t);
      t = if_verbose2_1_0(i_7, t);
      t = xtc_read_0_0(t);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_27 = NULL,y_27 = NULL;
                t = term_o_9;
                x_27 = t;
                t = term_s_16;
                y_27 = t;
                t = term_c_21;
                t = o_6(x_27, y_27, t);
                t = xtc_register_0_0(t);
                LocalPopChoice(z_20);
              }
            else
              {
                t = y_20;
                {
                  ATerm z_27 = NULL,d_28 = NULL;
                  t = term_o_9;
                  z_27 = t;
                  t = term_t_13;
                  d_28 = t;
                  t = term_v_13;
                  t = o_6(z_27, d_28, t);
                  t = register_import_0_0(t);
                }
              }
            t = xtc_store_0_0(t);
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            {
              ATerm g_28 = NULL,h_28 = NULL;
              t = term_o_9;
              g_28 = t;
              t = term_x_16;
              h_28 = t;
              t = term_d_21;
              t = o_6(g_28, h_28, t);
              {
                ATerm e_21 = t;
                int g_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = repository_query_0_0(t);
                    LocalPopChoice(g_21);
                  }
                else
                  {
                    t = e_21;
                    {
                      ATerm h_21 = t;
                      int m_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = all_query_0_0(t);
                          LocalPopChoice(m_21);
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
          }
      }
      t = term_e_20;
      t_27 = t;
      t = SSL_exit(t_27);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      t = debug_1_0(m_7, t);
    }
  return(t);
}
static ATerm x_5 (ATerm b_80, ATerm c_80, ATerm t)
{
  ATerm i_28 = NULL,k_28 = NULL,m_28 = NULL,o_28 = NULL,t_28 = NULL;
  t = c_80;
  t = map_1_0(xtc_find_0_0, t);
  i_28 = t;
  t = term_n_11;
  t_28 = t;
  t = SSL_print(t_28, i_28);
  t = term_n_11;
  m_28 = t;
  t = (ATerm) ATinsert(ATempty, term_s_11);
  o_28 = t;
  t = SSL_print(m_28, o_28);
  t = term_e_20;
  k_28 = t;
  t = SSL_exit(k_28);
  return(t);
}
static ATerm y_5 (ATerm q_68, ATerm r_68, ATerm t)
{
  t = SSL_execvp(q_68, r_68);
  return(t);
}
ATerm debug_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,a_29 = NULL,c_29 = NULL;
  u_28 = t;
  t = k_104(t);
  v_28 = t;
  t = term_x_12;
  a_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_28), v_28);
  c_29 = t;
  t = SSL_printnl(a_29, c_29);
  t = u_28;
  return(t);
}
static ATerm z_5 (ATerm p_57, ATerm t)
{
  t = SSL_hashtable_keys(p_57);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL;
  static ATerm n_7 (ATerm t);
  static ATerm n_7 (ATerm t)
  {
    ATerm f_29 = NULL,g_29 = NULL;
    f_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_29), f_29);
    t = o_6(not_null(d_29), f_29, t);
    g_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_29, g_29);
    return(t);
  }
  if(((d_29 != NULL) && (d_29 != t)))
    _fail(t);
  else
    d_29 = t;
  t = lookup_table_0_1(d_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(e_29, t);
  t = map_1_0(n_7, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_29 = NULL,o_29 = NULL,p_29 = NULL;
        t = term_o_9;
        o_29 = t;
        t = term_v_9;
        p_29 = t;
        t = term_b_10;
        t = o_6(o_29, p_29, t);
        m_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_29, term_y_21);
        t = geq_0_0(t);
        t = k_29;
        t = g_122(t);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = k_29;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  static ATerm d_31 (ATerm t);
  static ATerm d_31 (ATerm t)
  {
    ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
    a_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_31 = ATgetFirst((ATermList) t);
        c_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_22 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_3 = NULL,q_3 = NULL,f_11 = NULL;
          t = SSLgetAnnotations(a_31);
          n_3 = t;
          t = b_31;
          t = c_105(t);
          q_3 = t;
          t = (ATerm) ATinsert(CheckATermList(c_31), q_3);
          f_11 = t;
          t = SSLsetAnnotations(f_11, n_3);
          LocalPopChoice(c_22);
        }
      else
        {
          t = b_22;
          {
            ATerm n_4 = NULL,r_4 = NULL,g_11 = NULL;
            t = SSLgetAnnotations(a_31);
            n_4 = t;
            t = c_31;
            t = d_31(t);
            r_4 = t;
            t = (ATerm) ATinsert(CheckATermList(r_4), b_31);
            g_11 = t;
            t = SSLsetAnnotations(g_11, n_4);
          }
        }
    }
    return(t);
  }
  t = d_31(t);
  return(t);
}
static ATerm o_6 (ATerm m_54, ATerm n_54, ATerm t)
{
  ATerm v_29 = NULL;
  t = lookup_table_0_1(m_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(n_54, v_29, t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_122 (ATerm), ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  {
    ATerm i_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
        t = term_o_9;
        u_31 = t;
        t = term_v_9;
        v_31 = t;
        t = term_b_10;
        t = o_6(u_31, v_31, t);
        t_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_31, term_m_22);
        t = geq_0_0(t);
        t = j_31;
        t = f_122(t);
        LocalPopChoice(l_22);
      }
    else
      {
        t = i_22;
        t = j_31;
      }
  }
  return(t);
}
static ATerm n_6 (ATerm i_57, ATerm j_57, ATerm k_57, ATerm t)
{
  ATerm e_32 = NULL;
  t = SSL_hashtable_put(k_57, i_57, j_57);
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_32);
  return(t);
}
static ATerm m_6 (ATerm l_57, ATerm m_57, ATerm t)
{
  t = SSL_hashtable_get(m_57, l_57);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_57, ATerm r_57, ATerm t)
{
  ATerm f_32 = NULL;
  t = SSL_hashtable_create(q_57, r_57);
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_32);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_32 = NULL,k_32 = NULL,l_32 = NULL,v_32 = NULL,z_32 = NULL;
  i_32 = t;
  t = term_n_22;
  v_32 = t;
  t = term_r_22;
  z_32 = t;
  t = i_32;
  t = new_hashtable_0_2(v_32, z_32, t);
  k_32 = t;
  t = i_32;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(i_32, k_32, l_32, t);
  t = i_32;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm a_33 = NULL;
  t = SSL_table_hashtable();
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_33);
  return(t);
}
ATerm lookup_table_0_1 (ATerm f_54, ATerm t)
{
  ATerm q_33 = NULL;
  t = table_hashtable_0_0(t);
  q_33 = t;
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 = NULL;
        t = q_33;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_6(f_54, z_4, t);
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        {
          ATerm j_5 = NULL;
          t = f_54;
          t = table_create_0_0(t);
          t = q_33;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_6(f_54, j_5, t);
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
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_34;
        if((e_34 != t))
          {
            _fail(t);
          }
        t = d_34;
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
        {
          ATerm w_22 = t;
          int x_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_34, f_34);
              LocalPopChoice(x_22);
            }
          else
            {
              t = w_22;
              t = SSL_gtr(e_34, f_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm j_34 = NULL;
  j_34 = t;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
        t = term_o_9;
        m_34 = t;
        t = term_v_9;
        n_34 = t;
        t = term_b_10;
        t = o_6(m_34, n_34, t);
        l_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_34, term_d_23);
        t = geq_0_0(t);
        t = j_34;
        t = h_122(t);
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = j_34;
      }
  }
  return(t);
}
static ATerm d_6 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm s_37, ATerm r_37, ATerm t)
{
  t = h_109(t);
  {
    static ATerm o_7 (ATerm t);
    static ATerm o_7 (ATerm t)
    {
      ATerm p_34 = NULL;
      p_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_37, p_34);
      t = g_109(t);
      return(t);
    }
    t = fetch_1_0(o_7, t);
  }
  t = r_37;
  return(t);
}
static ATerm e_6 (ATerm d_109 (ATerm), ATerm o_37, ATerm n_37, ATerm t)
{
  static ATerm j_35 (ATerm t);
  static ATerm j_35 (ATerm t)
  {
    ATerm d_35 = NULL,f_35 = NULL,g_35 = NULL;
    d_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_37;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_35 = ATgetFirst((ATermList) t);
            g_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_23 = t;
          int i_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_35;
              {
                static ATerm p_7 (ATerm t);
                static ATerm p_7 (ATerm t)
                {
                  t = n_37;
                  return(t);
                }
                t = d_6(d_109, p_7, f_35, g_35, t);
              }
              t = j_35(t);
              LocalPopChoice(i_23);
            }
          else
            {
              t = g_23;
              {
                ATerm e_7 = NULL,j_7 = NULL,m_11 = NULL;
                t = SSLgetAnnotations(d_35);
                e_7 = t;
                t = g_35;
                t = j_35(t);
                j_7 = t;
                t = (ATerm) ATinsert(CheckATermList(j_7), f_35);
                m_11 = t;
                t = SSLsetAnnotations(m_11, e_7);
              }
            }
        }
      }
    return(t);
  }
  t = o_37;
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
static ATerm f_6 (ATerm q_53, ATerm r_53, ATerm s_53, ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_53, r_53);
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_23 = ATgetArgument(t, 0);
            ATerm n_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_53, r_53);
        t = o_6(q_53, r_53, t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATempty;
      }
  }
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_35, s_53);
  t = e_6(u_7, q_35, s_53, t);
  p_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_53, r_53, p_35);
  t = lookup_table_0_1(q_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(r_53, p_35, r_35, t);
  t = o_35;
  return(t);
}
ATerm map_1_0 (ATerm u_104 (ATerm), ATerm t)
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
        ATerm b_8 = NULL,g_8 = NULL,m_8 = NULL,o_11 = NULL;
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
        t = u_104(t);
        g_8 = t;
        t = k_36;
        t = l_36(t);
        m_8 = t;
        t = (ATerm) ATinsert(CheckATermList(m_8), g_8);
        o_11 = t;
        t = SSLsetAnnotations(o_11, b_8);
      }
    return(t);
  }
  t = l_36(t);
  return(t);
}
static ATerm g_6 (ATerm o_118 (ATerm), ATerm a_54, ATerm z_53, ATerm t)
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
    t = (ATerm) ATmakeAppl(sym__3, a_54, n_36, o_36);
    t = o_118(t);
    return(t);
  }
  t = z_53;
  t = map_1_0(v_7, t);
  return(t);
}
static ATerm l_6 (ATerm x_46, ATerm y_46, ATerm t)
{
  t = SSL_access(x_46, y_46);
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
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_36);
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
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
static ATerm h_6 (ATerm n_31, ATerm t)
{
  t = SSL_read_term_from_stream(n_31);
  return(t);
}
static ATerm i_6 (ATerm n_45, ATerm o_45, ATerm t)
{
  t = SSL_strcat(n_45, o_45);
  return(t);
}
static ATerm j_6 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm d_37 = NULL;
  t = SSL_fopen(j_47, k_47);
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
static ATerm s_38 (ATerm m_37, ATerm t)
{
  ATerm p_37 = NULL;
  t = SSL_explode_term(m_37);
  if(match_cons(t, sym__2))
    {
      ATerm t_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_23 = ATgetArgument(t, 1);
        if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
          {
            p_37 = ATgetFirst((ATermList) u_23);
            {
              ATerm v_23 = (ATerm) ATgetNext((ATermList) u_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_38 (ATerm v_37, ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,d_38 = NULL,q_11 = NULL;
  t = SSLgetAnnotations(x_37);
  a_38 = t;
  t = v_37;
  if(match_cons(t, sym_Path_1))
    {
      d_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_38, w_37);
  q_11 = t;
  t = SSLsetAnnotations(q_11, a_38);
  if(match_cons(t, sym__2))
    {
      y_37 = ATgetArgument(t, 0);
      z_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(y_37, z_37, t);
  return(t);
}
static ATerm u_38 (ATerm f_38, ATerm g_38, ATerm h_38, ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,n_38 = NULL,x_11 = NULL;
  t = SSLgetAnnotations(h_38);
  k_38 = t;
  t = SSL_is_string(f_38);
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_38, g_38);
  x_11 = t;
  t = SSLsetAnnotations(x_11, k_38);
  if(match_cons(t, sym__2))
    {
      i_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(i_38, j_38, t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
  p_38 = t;
  if(match_cons(t, sym__2))
    {
      q_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_38(p_38, t);
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm y_23 = t;
              int e_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_38(q_38, r_38, p_38, t);
                  LocalPopChoice(e_24);
                }
              else
                {
                  t = y_23;
                  t = u_38(q_38, r_38, p_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_38(p_38, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,d_39 = NULL;
  d_39 = t;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_39, term_h_24);
        t = k_6(t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          ATerm i_9 = NULL,l_9 = NULL;
          t = term_i_24;
          l_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_24, d_39);
          t = i_6(l_9, d_39, t);
          i_9 = t;
          t = SSL_perror(i_9);
          _fail(t);
        }
      }
  }
  x_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(y_38, t);
  w_38 = t;
  t = x_38;
  t = fclose_0_0(t);
  t = w_38;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_o_24;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_39 = NULL,h_39 = NULL;
      g_39 = t;
      t = (ATerm) ATinsert(ATempty, term_t_24);
      h_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_39, (ATerm) ATinsert(ATempty, term_t_24));
      t = l_6(g_39, h_39, t);
      LocalPopChoice(r_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = q_24;
      {
        ATerm u_24 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_25 = t;
            if((PushChoice() == 0))
              {
                ATerm i_39 = NULL,j_39 = NULL;
                i_39 = t;
                t = (ATerm) ATinsert(ATempty, term_m_13);
                j_39 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_39, (ATerm) ATinsert(ATempty, term_m_13));
                t = l_6(i_39, j_39, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_25;
              }
            t = debug_1_0(w_7, t);
            LocalPopChoice(b_25);
          }
        else
          {
            t = u_24;
            t = debug_1_0(c_8, t);
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
  t = term_d_25;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = debug_1_0(t_8, t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_e_25;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  t = term_x_12;
  b_40 = t;
  t = (ATerm) ATinsert(ATempty, term_f_25);
  c_40 = t;
  t = SSL_printnl(b_40, c_40);
  t = a_40;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
  if(match_cons(t, sym__3))
    {
      d_40 = ATgetArgument(t, 0);
      e_40 = ATgetArgument(t, 1);
      f_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_6(d_40, e_40, f_40, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  t = term_x_12;
  h_40 = t;
  t = (ATerm) ATinsert(ATempty, term_g_25);
  i_40 = t;
  t = SSL_printnl(h_40, i_40);
  t = g_40;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  j_40 = t;
  t = term_x_12;
  k_40 = t;
  t = (ATerm) ATinsert(ATempty, term_f_25);
  l_40 = t;
  t = SSL_printnl(k_40, l_40);
  t = j_40;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  k_39 = t;
  t = if_verbose5_1_0(f_8, t);
  {
    ATerm l_25 = t;
    if((PushChoice() == 0))
      {
        ATerm y_39 = NULL,z_39 = NULL;
        t = term_d_10;
        y_39 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, k_39);
        z_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATmakeAppl(sym_Imported_1, k_39));
        t = o_6(y_39, z_39, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_25;
      }
  }
  m_39 = t;
  t = term_d_10;
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, term_n_25, (ATerm) ATinsert(ATempty, k_39));
  t = lookup_table_0_1(t_39, t);
  x_39 = t;
  t = term_n_25;
  u_39 = t;
  t = (ATerm) ATinsert(ATempty, k_39);
  v_39 = t;
  t = x_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(u_39, v_39, w_39, t);
  t = m_39;
  t = if_verbose4_1_0(o_8, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(u_8, t);
  l_39 = t;
  t = term_d_10;
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, l_39);
  t = g_6(v_8, s_39, l_39, t);
  t = if_verbose6_1_0(w_8, t);
  t = term_d_10;
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, (ATerm)ATmakeAppl(sym_Imported_1, k_39), (ATerm) ATempty);
  t = lookup_table_0_1(n_39, t);
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, k_39);
  o_39 = t;
  t = (ATerm) ATempty;
  p_39 = t;
  t = r_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(o_39, p_39, q_39, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, (ATerm)ATmakeAppl(sym_Imported_1, k_39), (ATerm) ATempty);
  t = if_verbose4_1_0(x_8, t);
  return(t);
}
ATerm filter_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
  x_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_40;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_40 = ATgetFirst((ATermList) t);
          z_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_9 = NULL,z_9 = NULL,a_10 = NULL,f_12 = NULL;
            t = SSLgetAnnotations(x_40);
            t_9 = t;
            t = y_40;
            t = v_112(t);
            z_9 = t;
            t = z_40;
            t = filter_1_0(v_112, t);
            a_10 = t;
            t = (ATerm) ATinsert(CheckATermList(a_10), z_9);
            f_12 = t;
            t = SSLsetAnnotations(f_12, t_9);
            LocalPopChoice(q_25);
          }
        else
          {
            t = o_25;
            t = z_40;
            t = filter_1_0(v_112, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm t)
{
  static ATerm c_41 (ATerm t);
  static ATerm c_41 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_97(t);
        t = c_41(t);
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = k_97(t);
      }
    return(t);
  }
  t = c_41(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_41 = NULL,e_41 = NULL;
      t = term_o_9;
      d_41 = t;
      t = term_d_13;
      e_41 = t;
      t = term_e_13;
      t = o_6(d_41, e_41, t);
      LocalPopChoice(v_25);
    }
  else
    {
      t = t_25;
      {
        ATerm w_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_41 = NULL;
            t = term_a_26;
            f_41 = t;
            t = SSL_getenv(f_41);
            LocalPopChoice(z_25);
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
  t = term_c_26;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL;
  t = term_d_10;
  l_41 = t;
  t = term_f_10;
  m_41 = t;
  t = term_h_10;
  t = o_6(l_41, m_41, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_26;
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
  t = term_e_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm h_41 = NULL;
  t = if_verbose5_1_0(y_8, t);
  h_41 = t;
  {
    ATerm f_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_41 = NULL,j_41 = NULL;
        t = term_d_10;
        i_41 = t;
        t = term_n_25;
        j_41 = t;
        t = term_i_26;
        t = o_6(i_41, j_41, t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = f_26;
        {
          ATerm k_41 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          k_41 = t;
          t = repeat_2_0(a_9, _id, t);
          t = k_41;
        }
      }
  }
  t = h_41;
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
  t = term_t_26;
  return(t);
}
static ATerm j_42 (ATerm r_41, ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
  t = term_d_10;
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, r_41);
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATmakeAppl(sym_Tool_1, r_41));
  t = o_6(u_41, v_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_26 = ATgetFirst((ATermList) t);
      if(match_cons(u_26, sym__2))
        {
          ATerm w_26 = ATgetArgument(u_26, 0);
          t_41 = ATgetArgument(u_26, 1);
        }
      else
        _fail(t);
      {
        ATerm v_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_41;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = debug_1_0(k_9, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_t_26;
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
  t = term_x_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
      t = if_verbose5_1_0(d_9, t);
      t = xtc_load_0_0(t);
      y_41 = t;
      if(match_cons(t, sym__2))
        {
          w_41 = ATgetArgument(t, 0);
          x_41 = ATgetArgument(t, 1);
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
                t = term_d_10;
                c_42 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, w_41);
                d_42 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATmakeAppl(sym_Tool_1, w_41));
                t = o_6(c_42, d_42, t);
                {
                  static ATerm g_9 (ATerm t);
                  static ATerm g_9 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((x_41 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((b_42 != NULL) && (b_42 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_42 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_9, t);
                }
                t = not_null(b_42);
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                t = j_42(y_41, t);
              }
          }
        }
      else
        {
          t = j_42(y_41, t);
        }
      t = if_verbose5_1_0(h_9, t);
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm i_42 = NULL,n_10 = NULL,t_10 = NULL;
        i_42 = t;
        t = term_x_12;
        n_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), i_42), term_c_27);
        t_10 = t;
        t = SSL_printnl(n_10, t_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), i_42), term_c_27);
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
      ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
      r_42 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_42 = ATgetFirst((ATermList) t);
          t_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_42 = ATgetFirst((ATermList) t);
          v_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_42;
      if(match_string(t, "call"))
        {
          ATerm z_42 = NULL;
          t = v_42;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_42 = ATgetFirst((ATermList) t);
              q_42 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = p_42;
          t = xtc_find_0_0(t);
          z_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_42, q_42);
          t = y_5(z_42, q_42, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = r_42;
          t = x_5(s_42, v_42, t);
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
