#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Hashtable_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Path_1;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
static void init_module_constructors (void)
{
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
ATerm term_w_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_t_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_x_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_y_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_h_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_k_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_x_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_j_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_e_8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_l_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_a_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_y_12);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_x_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_g_14, term_q_13);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_e_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_b_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_u_14);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym__2, term_f_17, term_q_13);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__2, term_n_17, term_q_13);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_q_13);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym__3, term_t_14, term_u_14, (ATerm) ATempty);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_f_17);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_q_13);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("boxstyle.css", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_b_15);
}
#include <srts/init-stratego-application.h>
static ATerm y_5 (ATerm k_30, ATerm l_30, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm o_5 (ATerm b_17, ATerm q_200, ATerm t);
ATerm at_suffix_1_0 (ATerm l_88 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm d_88 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm p_100 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm r_5 (ATerm g_50, ATerm f_50, ATerm t);
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm c_103 (ATerm), ATerm t);
static ATerm d_5 (ATerm q_33, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_113 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm o_113 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm q_113 (ATerm), ATerm t);
static ATerm f_5 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm m_22, ATerm l_22, ATerm t);
static ATerm g_5 (ATerm b_92 (ATerm), ATerm i_22, ATerm h_22, ATerm t);
static ATerm t_0 (ATerm t);
static ATerm h_5 (ATerm o_29, ATerm p_29, ATerm q_29, ATerm t);
static ATerm i_5 (ATerm y_96 (ATerm), ATerm y_29, ATerm x_29, ATerm t);
static ATerm q_5 (ATerm n_14, ATerm o_14, ATerm t);
static ATerm c_14 (ATerm t_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_5 (ATerm p_54, ATerm t);
static ATerm p_5 (ATerm s_49, ATerm t_49, ATerm t);
static ATerm k_5 (ATerm z_14, ATerm a_15, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_17 (ATerm h_15, ATerm t);
static ATerm h_17 (ATerm n_15, ATerm o_15, ATerm r_15, ATerm t);
static ATerm j_17 (ATerm h_16, ATerm i_16, ATerm j_16, ATerm t);
static ATerm l_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm p_99 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm f_23 (ATerm y_21, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm s_5 (ATerm w_28, ATerm x_28, ATerm t);
ATerm end_scope_1_0 (ATerm n_96 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_96 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm b_115 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_6 (ATerm f_62, ATerm g_62, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm z_5 (ATerm r_28, ATerm s_28, ATerm q_28, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_5 (ATerm z_25, ATerm a_26, ATerm t);
ATerm foldr_2_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_113 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm need_help_1_0 (ATerm y_80 (ATerm), ATerm t);
static ATerm c_6 (ATerm j_33, ATerm k_33, ATerm l_33, ATerm t);
static ATerm d_6 (ATerm m_33, ATerm n_33, ATerm t);
ATerm lookup_table_0_1 (ATerm d_30, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_33, ATerm s_33, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm v_5 (ATerm o_33, ATerm p_33, ATerm t);
static ATerm w_5 (ATerm t_33, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_88 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_105 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm parse_options_1_0 (ATerm k_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm y_5 (ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm a_0 = NULL;
  t = lookup_table_0_1(k_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(l_30, a_0, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_0 = ATgetFirst((ATermList) t);
      v_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_0;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_0;
    }
  else
    {
      t = v_0;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm o_5 (ATerm b_17, ATerm q_200, ATerm t)
{
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    if((b_17 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = q_200;
  t = fetch_1_0(b_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  static ATerm n_2 (ATerm t);
  static ATerm n_2 (ATerm t)
  {
    ATerm d_1 = t;
    int i_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_88(t);
        LocalPopChoice(i_6);
      }
    else
      {
        t = d_1;
        {
          ATerm h_2 = NULL,i_2 = NULL,l_2 = NULL,k_0 = NULL,r_0 = NULL,u_1 = NULL;
          h_2 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_2 = ATgetFirst((ATermList) t);
              l_2 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_2);
          k_0 = t;
          t = l_2;
          t = n_2(t);
          r_0 = t;
          t = (ATerm) ATinsert(CheckATermList(r_0), i_2);
          u_1 = t;
          t = SSLsetAnnotations(u_1, k_0);
        }
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL;
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,b_3 = NULL,d_3 = NULL,f_3 = NULL,g_3 = NULL,a_2 = NULL,y_1 = NULL;
    g_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_2 = ATgetFirst((ATermList) t);
        b_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_3);
    y_2 = t;
    t = z_2;
    t = d_88(t);
    d_3 = t;
    t = (ATerm) ATinsert(CheckATermList(b_3), d_3);
    y_1 = t;
    t = SSLsetAnnotations(y_1, y_2);
    f_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_2 = ATgetFirst((ATermList) t);
        x_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_3);
    v_2 = t;
    t = x_2;
    if(((s_2 != NULL) && (s_2 != t)))
      _fail(t);
    else
      s_2 = t;
    t = (ATerm) ATinsert(CheckATermList(x_2), w_2);
    a_2 = t;
    t = SSLsetAnnotations(a_2, v_2);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(c_0, t);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_2, not_null(s_2));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,w_3 = NULL;
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(p_100, t);
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      {
        ATerm m_3 = NULL;
        m_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_3, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_6 = ATgetFirst((ATermList) t);
              ATerm p_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_3;
          t = list_tokenize_1_0(p_100, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm q_6 = ATgetFirst((ATermList) t);
          ATerm w_6 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, t_3);
        }
      else
        {
          ATerm f_4 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_7 = ATgetFirst((ATermList) t);
              ATerm f_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_3;
          t = list_tokenize_1_0(p_100, t);
          f_4 = t;
          t = (ATerm) ATinsert(CheckATermList(f_4), t_3);
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm v_4 = NULL;
  v_4 = t;
  t = SSL_implode_string(v_4);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,n_4 = NULL,t_4 = NULL,e_2 = NULL;
  t_4 = t;
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_4);
  j_4 = t;
  t = SSL_explode_string(l_4);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_4, n_4);
  e_2 = t;
  t = SSLsetAnnotations(e_2, j_4);
  if(match_cons(t, sym__2))
    {
      g_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_4;
  {
    static ATerm e_0 (ATerm t);
    static ATerm e_0 (ATerm t)
    {
      ATerm u_4 = NULL;
      u_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_4, g_4);
      t = o_5(u_4, g_4, t);
      return(t);
    }
    t = list_tokenize_1_0(e_0, t);
  }
  t = map_1_0(i_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm o_6 = NULL;
  o_6 = t;
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 = NULL;
        t = SSL_filemode(o_6);
        if(match_cons(t, sym__2))
          {
            f_1 = ATgetArgument(t, 0);
            {
              ATerm i_7 = ATgetArgument(t, 1);
              if(((ATgetType(i_7) != AT_INT) || (ATgetInt((ATermInt) i_7) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_1;
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        {
          ATerm k_1 = NULL,l_1 = NULL;
          t = term_j_7;
          l_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_7, o_6);
          t = p_5(l_1, o_6, t);
          k_1 = t;
          t = SSL_perror(k_1);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm r_5 (ATerm g_50, ATerm f_50, ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL;
  v_6 = t;
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_6 = NULL,z_6 = NULL;
        t = (ATerm) ATinsert(ATempty, term_m_7);
        z_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_50, (ATerm) ATinsert(ATempty, term_m_7));
        t = q_5(f_50, z_6, t);
        t = filemode_0_0(t);
        y_6 = t;
        t = SSL_S_ISDIR(y_6);
        t = v_6;
        LocalPopChoice(l_7);
        {
          ATerm a_7 = NULL,e_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_n_7), g_50);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          a_7 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_7), term_o_7), f_50);
          e_7 = t;
          t = SSL_concat_strings(e_7);
        }
      }
    else
      {
        t = k_7;
        t = f_50;
      }
  }
  u_6 = t;
  t = SSL_copy(g_50, u_6);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL;
  j_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_1 = NULL;
        t = j_8;
        t = p_0(t);
        q_1 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = q_1;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = q_1;
          }
        t = (ATerm) ATmakeAppl(sym__2, k_8, q_1);
        t = r_5(k_8, q_1, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_8);
        LocalPopChoice(t_7);
      }
    else
      {
        t = q_7;
        {
          ATerm u_7 = t;
          int v_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_2 = NULL;
              t = j_8;
              t = p_0(t);
              b_2 = t;
              {
                ATerm w_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_2 = NULL;
                    f_2 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = f_2;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = f_2;
                          }
                        else
                          {
                            t = f_2;
                            if((k_8 != t))
                              {
                                _fail(t);
                              }
                            t = f_2;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_8, b_2);
              t = r_5(k_8, b_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_8);
              LocalPopChoice(v_7);
            }
          else
            {
              t = u_7;
              t = j_8;
              t = p_0(t);
              if((k_8 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_8);
            }
        }
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  s_8 = t;
  t = c_103(t);
  y_8 = t;
  t = term_x_7;
  z_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_8), y_8);
  a_9 = t;
  t = SSL_printnl(z_8, a_9);
  t = s_8;
  return(t);
}
static ATerm d_5 (ATerm q_33, ATerm t)
{
  t = SSL_hashtable_keys(q_33);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  static ATerm n_0 (ATerm t);
  static ATerm n_0 (ATerm t)
  {
    ATerm i_9 = NULL,j_9 = NULL;
    i_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_9), i_9);
    t = y_5(not_null(g_9), i_9, t);
    j_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_9, j_9);
    return(t);
  }
  if(((g_9 != NULL) && (g_9 != t)))
    _fail(t);
  else
    g_9 = t;
  t = lookup_table_0_1(g_9, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(h_9, t);
  t = map_1_0(n_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm l_9 = NULL;
  l_9 = t;
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
        t = term_c_8;
        t_9 = t;
        t = term_e_8;
        u_9 = t;
        t = term_f_8;
        t = y_5(t_9, u_9, t);
        s_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, term_g_8);
        t = geq_0_0(t);
        t = l_9;
        t = p_113(t);
        LocalPopChoice(a_8);
      }
    else
      {
        t = z_7;
        t = l_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_113 (ATerm), ATerm t)
{
  ATerm a_10 = NULL;
  a_10 = t;
  {
    ATerm i_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
        t = term_c_8;
        e_10 = t;
        t = term_e_8;
        f_10 = t;
        t = term_f_8;
        t = y_5(e_10, f_10, t);
        d_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_10, term_m_8);
        t = geq_0_0(t);
        t = a_10;
        t = o_113(t);
        LocalPopChoice(l_8);
      }
    else
      {
        t = i_8;
        t = a_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_113 (ATerm), ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_10 = NULL,p_10 = NULL,q_10 = NULL;
        t = term_c_8;
        p_10 = t;
        t = term_e_8;
        q_10 = t;
        t = term_f_8;
        t = y_5(p_10, q_10, t);
        m_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_10, term_q_8);
        t = geq_0_0(t);
        t = i_10;
        t = q_113(t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = i_10;
      }
  }
  return(t);
}
static ATerm f_5 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = f_92(t);
  {
    static ATerm q_0 (ATerm t);
    static ATerm q_0 (ATerm t)
    {
      ATerm x_10 = NULL;
      x_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, x_10);
      t = e_92(t);
      return(t);
    }
    t = fetch_1_0(q_0, t);
  }
  t = l_22;
  return(t);
}
static ATerm g_5 (ATerm b_92 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  static ATerm j_12 (ATerm t);
  static ATerm j_12 (ATerm t)
  {
    ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
    c_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_12 = ATgetFirst((ATermList) t);
            e_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_8 = t;
          int t_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_12;
              {
                static ATerm s_0 (ATerm t);
                static ATerm s_0 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = f_5(b_92, s_0, d_12, e_12, t);
              }
              t = j_12(t);
              LocalPopChoice(t_8);
            }
          else
            {
              t = r_8;
              {
                ATerm r_2 = NULL,c_3 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(c_12);
                r_2 = t;
                t = e_12;
                t = j_12(t);
                c_3 = t;
                t = (ATerm) ATinsert(CheckATermList(c_3), d_12);
                q_2 = t;
                t = SSLsetAnnotations(q_2, r_2);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = j_12(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm c_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      if((c_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_5 (ATerm o_29, ATerm p_29, ATerm q_29, ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,u_12 = NULL,v_12 = NULL;
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
  {
    ATerm u_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_8 = ATgetArgument(t, 0);
            ATerm d_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
        t = y_5(o_29, p_29, t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = u_8;
        t = (ATerm) ATempty;
      }
  }
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_12, q_29);
  t = g_5(t_0, u_12, q_29, t);
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_29, p_29, o_12);
  t = lookup_table_0_1(o_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(p_29, o_12, v_12, t);
  t = n_12;
  return(t);
}
static ATerm i_5 (ATerm y_96 (ATerm), ATerm y_29, ATerm x_29, ATerm t)
{
  static ATerm w_0 (ATerm t);
  static ATerm w_0 (ATerm t)
  {
    ATerm d_13 = NULL,f_13 = NULL;
    if(match_cons(t, sym__2))
      {
        d_13 = ATgetArgument(t, 0);
        f_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_29, d_13, f_13);
    t = y_96(t);
    return(t);
  }
  t = x_29;
  t = map_1_0(w_0, t);
  return(t);
}
static ATerm q_5 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_access(n_14, o_14);
  return(t);
}
static ATerm c_14 (ATerm t_13, ATerm t)
{
  t = SSL_fclose(t_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_13 = ATgetArgument(t, 0);
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_13);
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            t = c_14(a_14, t);
          }
      }
    }
  else
    {
      t = c_14(a_14, t);
    }
  return(t);
}
static ATerm j_5 (ATerm p_54, ATerm t)
{
  t = SSL_read_term_from_stream(p_54);
  return(t);
}
static ATerm p_5 (ATerm s_49, ATerm t_49, ATerm t)
{
  t = SSL_strcat(s_49, t_49);
  return(t);
}
static ATerm k_5 (ATerm z_14, ATerm a_15, ATerm t)
{
  ATerm d_14 = NULL;
  t = SSL_fopen(z_14, a_15);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_14 = NULL;
  t = SSL_stdin_stream();
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_14 = NULL;
  t = SSL_stdout_stream();
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_14 = NULL;
  t = SSL_stderr_stream();
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_14);
  return(t);
}
static ATerm g_17 (ATerm h_15, ATerm t)
{
  ATerm k_15 = NULL;
  t = SSL_explode_term(h_15);
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_9 = ATgetArgument(t, 1);
        if(((ATgetType(m_9) == AT_LIST) && !(ATisEmpty(m_9))))
          {
            k_15 = ATgetFirst((ATermList) m_9);
            {
              ATerm n_9 = (ATerm) ATgetNext((ATermList) m_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_17 (ATerm n_15, ATerm o_15, ATerm r_15, ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,e_16 = NULL,a_6 = NULL;
  t = SSLgetAnnotations(r_15);
  u_15 = t;
  t = n_15;
  if(match_cons(t, sym_Path_1))
    {
      e_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_16, o_15);
  a_6 = t;
  t = SSLsetAnnotations(a_6, u_15);
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(s_15, t_15, t);
  return(t);
}
static ATerm j_17 (ATerm h_16, ATerm i_16, ATerm j_16, ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,x_16 = NULL,e_6 = NULL;
  t = SSLgetAnnotations(j_16);
  q_16 = t;
  t = SSL_is_string(h_16);
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_16, i_16);
  e_6 = t;
  t = SSLsetAnnotations(e_6, q_16);
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(o_16, p_16, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,c_17 = NULL;
  z_16 = t;
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
      {
        ATerm o_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_17(z_16, t);
            LocalPopChoice(q_9);
          }
        else
          {
            t = o_9;
            {
              ATerm r_9 = t;
              int v_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_17(a_17, c_17, z_16, t);
                  LocalPopChoice(v_9);
                }
              else
                {
                  t = r_9;
                  t = j_17(a_17, c_17, z_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_17(z_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,p_17 = NULL,v_17 = NULL;
  v_17 = t;
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_17, term_z_9);
        t = l_5(t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        {
          ATerm i_4 = NULL,m_4 = NULL;
          t = term_b_10;
          m_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_10, v_17);
          t = p_5(m_4, v_17, t);
          i_4 = t;
          t = SSL_perror(i_4);
          _fail(t);
        }
      }
  }
  m_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_5(p_17, t);
  l_17 = t;
  t = m_17;
  t = fclose_0_0(t);
  t = l_17;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_c_10;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm h_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_17 = NULL,z_17 = NULL;
      y_17 = t;
      t = (ATerm) ATinsert(ATempty, term_k_10);
      z_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_17, (ATerm) ATinsert(ATempty, term_k_10));
      t = q_5(y_17, z_17, t);
      LocalPopChoice(j_10);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = h_10;
      {
        ATerm l_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_10 = t;
            if((PushChoice() == 0))
              {
                ATerm a_18 = NULL,b_18 = NULL;
                a_18 = t;
                t = (ATerm) ATinsert(ATempty, term_m_7);
                b_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_18, (ATerm) ATinsert(ATempty, term_m_7));
                t = q_5(a_18, b_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_10;
              }
            t = debug_1_0(x_0, t);
            LocalPopChoice(n_10);
          }
        else
          {
            t = l_10;
            t = debug_1_0(y_0, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = debug_1_0(a_1, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_s_10;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = debug_1_0(c_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_t_10;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  t = term_x_7;
  c_19 = t;
  t = (ATerm) ATinsert(ATempty, term_v_10);
  d_19 = t;
  t = SSL_printnl(c_19, d_19);
  t = b_19;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm e_19 = NULL,j_19 = NULL,o_19 = NULL;
  if(match_cons(t, sym__3))
    {
      e_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
      o_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_5(e_19, j_19, o_19, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  q_19 = t;
  t = term_x_7;
  r_19 = t;
  t = (ATerm) ATinsert(ATempty, term_w_10);
  s_19 = t;
  t = SSL_printnl(r_19, s_19);
  t = q_19;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm u_19 = NULL,x_19 = NULL,z_19 = NULL;
  u_19 = t;
  t = term_x_7;
  x_19 = t;
  t = (ATerm) ATinsert(ATempty, term_v_10);
  z_19 = t;
  t = SSL_printnl(x_19, z_19);
  t = u_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,m_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,t_18 = NULL,w_18 = NULL,x_18 = NULL;
  c_18 = t;
  t = if_verbose5_1_0(z_0, t);
  {
    ATerm y_10 = t;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL,z_18 = NULL;
        t = term_z_10;
        y_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_18);
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATmakeAppl(sym_Imported_1, c_18));
        t = y_5(y_18, z_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_10;
      }
  }
  g_18 = t;
  t = term_z_10;
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_10, term_a_11, (ATerm) ATinsert(ATempty, c_18));
  t = lookup_table_0_1(q_18, t);
  x_18 = t;
  t = term_a_11;
  r_18 = t;
  t = (ATerm) ATinsert(ATempty, c_18);
  t_18 = t;
  t = x_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(r_18, t_18, w_18, t);
  t = g_18;
  t = if_verbose4_1_0(b_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(e_1, t);
  f_18 = t;
  t = term_z_10;
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_10, f_18);
  t = i_5(g_1, p_18, f_18, t);
  t = if_verbose6_1_0(h_1, t);
  t = term_z_10;
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_10, (ATerm)ATmakeAppl(sym_Imported_1, c_18), (ATerm) ATempty);
  t = lookup_table_0_1(h_18, t);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_18);
  i_18 = t;
  t = (ATerm) ATempty;
  j_18 = t;
  t = o_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(i_18, j_18, m_18, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_10, (ATerm)ATmakeAppl(sym_Imported_1, c_18), (ATerm) ATempty);
  t = if_verbose4_1_0(i_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_20 = ATgetFirst((ATermList) t);
          v_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 = NULL,y_4 = NULL,z_4 = NULL,j_6 = NULL;
            t = SSLgetAnnotations(t_20);
            s_4 = t;
            t = u_20;
            t = p_99(t);
            y_4 = t;
            t = v_20;
            t = filter_1_0(p_99, t);
            z_4 = t;
            t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
            j_6 = t;
            t = SSLsetAnnotations(j_6, s_4);
            LocalPopChoice(f_11);
          }
        else
          {
            t = b_11;
            t = v_20;
            t = filter_1_0(p_99, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t)
{
  static ATerm b_21 (ATerm t);
  static ATerm b_21 (ATerm t)
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_85(t);
        t = b_21(t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = v_85(t);
      }
    return(t);
  }
  t = b_21(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_21 = NULL,d_21 = NULL;
      t = term_c_8;
      c_21 = t;
      t = term_l_11;
      d_21 = t;
      t = term_n_11;
      t = y_5(c_21, d_21, t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_21 = NULL;
            t = term_r_11;
            f_21 = t;
            t = SSL_getenv(f_21);
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_s_11;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm q_21 = NULL,t_21 = NULL;
  t = term_z_10;
  q_21 = t;
  t = term_t_11;
  t_21 = t;
  t = term_u_11;
  t = y_5(q_21, t_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_11 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_11;
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
  t = term_w_11;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_21 = NULL;
  t = if_verbose5_1_0(j_1, t);
  m_21 = t;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL,o_21 = NULL;
        t = term_z_10;
        n_21 = t;
        t = term_a_11;
        o_21 = t;
        t = term_z_11;
        t = y_5(n_21, o_21, t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        {
          ATerm p_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          p_21 = t;
          t = repeat_2_0(n_1, _id, t);
          t = p_21;
        }
      }
  }
  t = m_21;
  t = if_verbose5_1_0(o_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_a_12;
  return(t);
}
static ATerm f_23 (ATerm y_21, ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,g_22 = NULL;
  t = term_z_10;
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_21);
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATmakeAppl(sym_Tool_1, y_21));
  t = y_5(d_22, g_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_12 = ATgetFirst((ATermList) t);
      if(match_cons(b_12, sym__2))
        {
          ATerm g_12 = ATgetArgument(b_12, 0);
          c_22 = ATgetArgument(b_12, 1);
        }
      else
        _fail(t);
      {
        ATerm f_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_22;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_a_12;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_z_10;
  t = table_getlist_0_0(t);
  t = debug_1_0(z_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm i_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_22 = NULL,q_22 = NULL,r_22 = NULL;
      t = if_verbose5_1_0(r_1, t);
      t = xtc_load_0_0(t);
      r_22 = t;
      if(match_cons(t, sym__2))
        {
          j_22 = ATgetArgument(t, 0);
          q_22 = ATgetArgument(t, 1);
          {
            ATerm l_12 = t;
            int m_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_22 = NULL,y_22 = NULL,z_22 = NULL;
                t = term_z_10;
                y_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, j_22);
                z_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATmakeAppl(sym_Tool_1, j_22));
                t = y_5(y_22, z_22, t);
                {
                  static ATerm t_1 (ATerm t);
                  static ATerm t_1 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((q_22 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((v_22 != NULL) && (v_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_1, t);
                }
                t = not_null(v_22);
                LocalPopChoice(m_12);
              }
            else
              {
                t = l_12;
                t = f_23(r_22, t);
              }
          }
        }
      else
        {
          t = f_23(r_22, t);
        }
      t = if_verbose5_1_0(v_1, t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = i_12;
      {
        ATerm e_23 = NULL,x_5 = NULL,g_6 = NULL;
        e_23 = t;
        t = term_x_7;
        x_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_12), e_23), term_p_12);
        g_6 = t;
        t = SSL_printnl(x_5, g_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_12), e_23), term_p_12);
        t = if_verbose5_1_0(x_1, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm s_5 (ATerm w_28, ATerm x_28, ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  i_23 = t;
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
        t = y_5(w_28, x_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_12 = ATgetFirst((ATermList) t);
            h_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_12);
        {
          ATerm k_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_28, x_28, h_23);
          t = lookup_table_0_1(w_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              k_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_6(x_28, h_23, k_23, t);
          t = (ATerm) ATmakeAppl(sym__3, w_28, x_28, h_23);
        }
      }
    else
      {
        t = r_12;
        {
          ATerm n_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
          t = lookup_table_0_1(w_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_5(x_28, n_23, t);
          t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
        }
      }
  }
  t = i_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_96 (ATerm), ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,b_24 = NULL;
  w_23 = t;
  t = n_96(t);
  v_23 = t;
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_24 = NULL;
        t = term_y_12;
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_23, term_y_12);
        t = y_5(v_23, c_24, t);
        {
          ATerm z_12 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_12;
            }
        }
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_23 = ATgetFirst((ATermList) t);
      p_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_23, term_y_12, p_23);
  t = lookup_table_0_1(v_23, t);
  b_24 = t;
  t = term_y_12;
  x_23 = t;
  t = b_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(x_23, p_23, y_23, t);
  t = q_23;
  {
    static ATerm c_2 (ATerm t);
    static ATerm c_2 (ATerm t)
    {
      ATerm d_24 = NULL;
      d_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_23, d_24);
      t = s_5(v_23, d_24, t);
      return(t);
    }
    t = map_1_0(c_2, t);
  }
  t = w_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_85(t);
      t = q_85(t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      t = q_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_96 (ATerm), ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  g_24 = t;
  t = m_96(t);
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_24, term_y_12);
  {
    ATerm e_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_13 = ATgetArgument(t, 0);
            ATerm i_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_12;
        p_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_24, term_y_12);
        t = y_5(f_24, p_24, t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = e_13;
        t = (ATerm) ATempty;
      }
  }
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_24, term_y_12, (ATerm) ATinsert(CheckATermList(h_24), (ATerm) ATempty));
  t = lookup_table_0_1(f_24, t);
  l_24 = t;
  t = term_y_12;
  i_24 = t;
  t = (ATerm) ATinsert(CheckATermList(h_24), (ATerm) ATempty);
  j_24 = t;
  t = l_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(i_24, j_24, k_24, t);
  t = g_24;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_j_13;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(h_25);
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = h_25;
      }
  }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_115 (ATerm), ATerm t)
{
  ATerm t_24 = NULL;
  static ATerm g_2 (ATerm t);
  static ATerm g_2 (ATerm t)
  {
    ATerm u_24 = NULL;
    u_24 = t;
    {
      ATerm m_13 = t;
      int n_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_24 = NULL,w_24 = NULL;
          t = term_j_13;
          v_24 = t;
          t = term_y_12;
          w_24 = t;
          t = term_o_13;
          t = y_5(v_24, w_24, t);
          LocalPopChoice(n_13);
        }
      else
        {
          t = m_13;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_24 != NULL) && (t_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_24 = ATgetFirst((ATermList) t);
        {
          ATerm p_13 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = t_24;
    t = map_1_0(j_2, t);
    t = u_24;
    t = end_scope_1_0(k_2, t);
    return(t);
  }
  t = begin_scope_1_0(d_2, t);
  t = restore_always_2_0(b_115, g_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  m_25 = t;
  t = term_q_13;
  t = whoami_0_0(t);
  n_25 = t;
  t = term_x_7;
  p_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_13), n_25), term_r_13);
  q_25 = t;
  t = SSL_printnl(p_25, q_25);
  t = term_u_13;
  o_25 = t;
  t = SSL_exit(o_25);
  t = m_25;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  if(match_string(t, "-k"))
    {
      t = v_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_25;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  t = SSL_string_to_int(w_25);
  x_25 = t;
  t = term_v_13;
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_13, x_25);
  t = b_6(y_25, x_25, t);
  t = w_25;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_w_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_2, o_2, p_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm d_26 = NULL;
  d_26 = t;
  if(match_string(t, "-S"))
    {
      t = d_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_26;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  t = term_e_8;
  g_26 = t;
  t = term_x_13;
  h_26 = t;
  t = term_y_13;
  t = b_6(g_26, h_26, t);
  t = term_b_14;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_e_14;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
  i_26 = t;
  t = SSL_string_to_int(i_26);
  j_26 = t;
  t = term_e_8;
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, j_26);
  t = b_6(k_26, j_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_26);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_f_14;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL;
  t = term_g_14;
  l_26 = t;
  t = term_q_13;
  m_26 = t;
  t = term_h_14;
  t = b_6(l_26, m_26, t);
  t = term_i_14;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_j_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_2, a_3, e_3, t);
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_3, i_3, j_3, t);
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            t = Option_3_0(k_3, l_3, n_3, t);
          }
      }
    }
  return(t);
}
static ATerm b_6 (ATerm f_62, ATerm g_62, ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL;
  t = term_c_8;
  o_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_8, f_62, g_62);
  t = lookup_table_0_1(o_26, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(f_62, g_62, p_26, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_8, f_62, g_62);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
      t = term_q_13;
      t = g_0(t);
      x_26 = t;
      t = term_t_14;
      y_26 = t;
      t = term_u_14;
      z_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_14, term_u_14, x_26);
      t = z_5(y_26, z_26, x_26, t);
      _fail(t);
    }
  else
    {
      ATerm c_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_26 = ATgetFirst((ATermList) t);
          w_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_26;
      t = d_0(t);
      t = term_q_13;
      t = f_0(t);
      c_27 = t;
      t = (ATerm) ATinsert(CheckATermList(w_26), c_27);
    }
  return(t);
}
static ATerm z_5 (ATerm r_28, ATerm s_28, ATerm q_28, ATerm t)
{
  ATerm e_27 = NULL,l_27 = NULL,o_27 = NULL,r_27 = NULL,s_27 = NULL;
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_28, s_28);
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_14 = ATgetArgument(t, 0);
            ATerm y_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_28, s_28);
        t = y_5(r_28, s_28, t);
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        t = (ATerm) ATempty;
      }
  }
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_28, s_28, (ATerm) ATinsert(CheckATermList(l_27), q_28));
  t = lookup_table_0_1(r_28, t);
  s_27 = t;
  t = (ATerm) ATinsert(CheckATermList(l_27), q_28);
  o_27 = t;
  t = s_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(s_28, o_27, r_27, t);
  t = e_27;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,h_28 = NULL,j_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
      t = term_q_13;
      t = o_0(t);
      k_28 = t;
      t = term_t_14;
      l_28 = t;
      t = term_u_14;
      m_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_14, term_u_14, k_28);
      t = z_5(l_28, m_28, k_28, t);
      _fail(t);
    }
  else
    {
      ATerm u_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_28 = ATgetFirst((ATermList) t);
          e_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_28 = ATgetFirst((ATermList) t);
          j_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_28;
      t = l_0(t);
      t = h_28;
      t = m_0(t);
      u_28 = t;
      t = (ATerm) ATinsert(CheckATermList(j_28), u_28);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm d_29 = NULL;
  d_29 = t;
  if(match_string(t, "-o"))
    {
      t = d_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_29;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm g_29 = NULL,j_29 = NULL;
  g_29 = t;
  t = term_b_15;
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_15, g_29);
  t = b_6(j_29, g_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_29);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_3, p_3, q_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_29 = NULL,n_29 = NULL,u_29 = NULL,v_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_13;
  t = whoami_0_0(t);
  k_29 = t;
  t = term_x_7;
  u_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_15), k_29);
  v_29 = t;
  t = SSL_printnl(u_29, v_29);
  t = term_u_13;
  n_29 = t;
  t = SSL_exit(n_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  t = term_c_8;
  h_30 = t;
  t = term_e_15;
  i_30 = t;
  t = term_f_15;
  t = y_5(h_30, i_30, t);
  return(t);
}
static ATerm t_5 (ATerm z_25, ATerm a_26, ATerm t)
{
  ATerm g_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_25, a_26);
      LocalPopChoice(i_15);
    }
  else
    {
      t = g_15;
      t = SSL_addr(z_25, a_26);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_30;
      t = e_95(t);
    }
  else
    {
      ATerm r_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_30 = ATgetFirst((ATermList) t);
          o_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_30;
      t = foldr_2_0(e_95, f_95, t);
      r_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_30, r_30);
      t = f_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(b_7, c_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_30 = NULL,r_6 = NULL,s_6 = NULL;
  t = times_0_0(t);
  s_6 = t;
  t = SSL_explode_term(s_6);
  if(match_cons(t, sym__2))
    {
      ATerm j_15 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6;
  t = foldr_2_0(r_3, s_3, t);
  w_30 = t;
  t = SSL_TicksToSeconds(w_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  n_31 = t;
  if(match_cons(t, sym__2))
    {
      o_31 = ATgetArgument(t, 0);
      p_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_31;
        if((o_31 != t))
          {
            _fail(t);
          }
        t = n_31;
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        t = (ATerm) ATmakeAppl(sym__2, o_31, p_31);
        {
          ATerm p_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_31, p_31);
              LocalPopChoice(q_15);
            }
          else
            {
              t = p_15;
              t = SSL_gtr(o_31, p_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_31, p_31);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_113 (ATerm), ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
        t = term_c_8;
        w_31 = t;
        t = term_e_8;
        x_31 = t;
        t = term_f_8;
        t = y_5(w_31, x_31, t);
        v_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_31, term_u_13);
        t = geq_0_0(t);
        t = t_31;
        t = l_113(t);
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        t = t_31;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm b_32 = NULL,d_32 = NULL,f_32 = NULL,i_32 = NULL;
  t = run_time_0_0(t);
  b_32 = t;
  t = term_q_13;
  t = whoami_0_0(t);
  d_32 = t;
  t = term_x_7;
  f_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_15), b_32), term_x_15), d_32);
  i_32 = t;
  t = SSL_printnl(f_32, i_32);
  t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_15), b_32), term_x_15), d_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_13;
  j_32 = t;
  t = SSL_exit(j_32);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL;
  u_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_32 = ATgetArgument(t, 0);
          {
            ATerm p_7 = NULL,m_6 = NULL;
            t = SSLgetAnnotations(u_32);
            p_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_32);
            m_6 = t;
            t = SSLsetAnnotations(m_6, p_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_32 = NULL,n_32 = NULL;
      t = term_c_8;
      m_32 = t;
      t = term_b_16;
      n_32 = t;
      t = term_c_16;
      t = y_5(m_32, n_32, t);
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      t = fetch_1_0(v_3, t);
    }
  t = y_80(t);
  return(t);
}
static ATerm c_6 (ATerm j_33, ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm w_32 = NULL;
  t = SSL_hashtable_put(l_33, j_33, k_33);
  w_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_32);
  return(t);
}
static ATerm d_6 (ATerm m_33, ATerm n_33, ATerm t)
{
  t = SSL_hashtable_get(n_33, m_33);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_30, ATerm t)
{
  ATerm f_33 = NULL;
  t = table_hashtable_0_0(t);
  f_33 = t;
  {
    ATerm d_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        t = f_33;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_6(d_30, y_7, t);
        LocalPopChoice(f_16);
      }
    else
      {
        t = d_16;
        {
          ATerm n_8 = NULL;
          t = d_30;
          t = table_create_0_0(t);
          t = f_33;
          if(match_cons(t, sym_Hashtable_1))
            {
              n_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_6(d_30, n_8, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_33, ATerm s_33, ATerm t)
{
  ATerm i_33 = NULL;
  t = SSL_hashtable_create(r_33, s_33);
  i_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_33);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,y_33 = NULL,z_33 = NULL;
  u_33 = t;
  t = term_g_16;
  y_33 = t;
  t = term_k_16;
  z_33 = t;
  t = u_33;
  t = new_hashtable_0_2(y_33, z_33, t);
  v_33 = t;
  t = u_33;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(u_33, v_33, w_33, t);
  t = u_33;
  return(t);
}
static ATerm v_5 (ATerm o_33, ATerm p_33, ATerm t)
{
  ATerm a_34 = NULL;
  t = SSL_hashtable_remove(p_33, o_33);
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_34);
  return(t);
}
static ATerm w_5 (ATerm t_33, ATerm t)
{
  ATerm b_34 = NULL;
  t = SSL_hashtable_destroy(t_33);
  b_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_34);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm c_34 = NULL;
  t = SSL_table_hashtable();
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_34);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
  d_34 = t;
  t = table_hashtable_0_0(t);
  e_34 = t;
  t = lookup_table_0_1(d_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(g_34, t);
  t = e_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_5(d_34, f_34, t);
  t = d_34;
  return(t);
}
ATerm map_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  static ATerm v_34 (ATerm t);
  static ATerm v_34 (ATerm t)
  {
    ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
    s_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_34;
      }
    else
      {
        ATerm v_8 = NULL,b_9 = NULL,c_9 = NULL,t_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_34 = ATgetFirst((ATermList) t);
            u_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_34);
        v_8 = t;
        t = t_34;
        t = q_87(t);
        b_9 = t;
        t = u_34;
        t = v_34(t);
        c_9 = t;
        t = (ATerm) ATinsert(CheckATermList(c_9), b_9);
        t_6 = t;
        t = SSLsetAnnotations(t_6, v_8);
      }
    return(t);
  }
  t = v_34(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_34 = ATgetFirst((ATermList) t);
      z_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_35 = NULL,e_35 = NULL;
        static ATerm x_3 (ATerm t);
        static ATerm x_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_35)), not_null(e_35));
          return(t);
        }
        t = z_34;
        t = j_0(t);
        if(((d_35 != NULL) && (d_35 != t)))
          _fail(t);
        else
          d_35 = t;
        t = y_34;
        t = h_0(t);
        if(((e_35 != NULL) && (e_35 != t)))
          _fail(t);
        else
          e_35 = t;
        t = z_34;
        t = reverse_acc_2_0(h_0, x_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_13;
      t = j_0(t);
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,x_6 = NULL;
  m_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_35);
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_35);
  x_6 = t;
  t = SSLsetAnnotations(x_6, k_35);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_35), term_l_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL;
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_35 = NULL,j_35 = NULL;
      t = term_c_8;
      i_35 = t;
      t = term_e_15;
      j_35 = t;
      t = term_f_15;
      t = y_5(i_35, j_35, t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      t = fetch_1_0(y_3, t);
    }
  t = term_r_16;
  t = echo_0_0(t);
  t = term_t_14;
  g_35 = t;
  t = term_u_14;
  h_35 = t;
  t = term_s_16;
  t = y_5(g_35, h_35, t);
  t = reverse_acc_2_0(_id, z_3, t);
  t = map_1_0(a_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  static ATerm l_36 (ATerm t);
  static ATerm l_36 (ATerm t)
  {
    ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
    i_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_36 = ATgetFirst((ATermList) t);
        k_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_16 = t;
      int u_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_9 = NULL,w_9 = NULL,r_7 = NULL;
          t = SSLgetAnnotations(i_36);
          p_9 = t;
          t = j_36;
          t = a_88(t);
          w_9 = t;
          t = (ATerm) ATinsert(CheckATermList(k_36), w_9);
          r_7 = t;
          t = SSLsetAnnotations(r_7, p_9);
          LocalPopChoice(u_16);
        }
      else
        {
          t = t_16;
          {
            ATerm o_10 = NULL,u_10 = NULL,s_7 = NULL;
            t = SSLgetAnnotations(i_36);
            o_10 = t;
            t = k_36;
            t = l_36(t);
            u_10 = t;
            t = (ATerm) ATinsert(CheckATermList(u_10), j_36);
            s_7 = t;
            t = SSLsetAnnotations(s_7, o_10);
          }
        }
    }
    return(t);
  }
  t = l_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_16 = ATgetFirst((ATermList) t);
                ATerm d_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_36;
          }
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        t = (ATerm) ATinsert(ATempty, p_36);
      }
  }
  q_36 = t;
  t = term_e_17;
  r_36 = t;
  t = SSL_printnl(r_36, q_36);
  t = p_36;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  t = term_c_8;
  v_36 = t;
  t = term_e_15;
  w_36 = t;
  t = term_f_15;
  t = y_5(v_36, w_36, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  t = term_f_17;
  x_36 = t;
  t = term_q_13;
  y_36 = t;
  t = term_i_17;
  t = b_6(x_36, y_36, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_k_17;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  t = term_f_17;
  b_37 = t;
  t = term_q_13;
  c_37 = t;
  t = term_i_17;
  t = b_6(b_37, c_37, t);
  t = term_n_17;
  z_36 = t;
  t = term_q_13;
  a_37 = t;
  t = term_o_17;
  t = b_6(z_36, a_37, t);
  t = term_q_17;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_r_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_4, c_4, d_4, t);
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      t = Option_3_0(e_4, o_4, p_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,b_8 = NULL;
  i_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_37 = ATgetFirst((ATermList) t);
      f_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_37);
  d_37 = t;
  t = e_37;
  t = b_74(t);
  g_37 = t;
  t = f_37;
  t = c_74(t);
  h_37 = t;
  t = (ATerm) ATinsert(CheckATermList(h_37), g_37);
  b_8 = t;
  t = SSLsetAnnotations(b_8, d_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,s_37 = NULL,t_37 = NULL,d_8 = NULL;
  n_37 = t;
  {
    ATerm u_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_17;
        t = l_105(t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = u_17;
      }
  }
  t = n_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_37 = ATgetFirst((ATermList) t);
      q_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_37);
  o_37 = t;
  t = term_e_15;
  t_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_15, p_37);
  t = b_6(t_37, p_37, t);
  t = q_37;
  {
    static ATerm d_38 (ATerm t);
    static ATerm d_38 (ATerm t)
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_37 = NULL;
              w_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_37;
              LocalPopChoice(l_18);
            }
          else
            {
              t = k_18;
              t = l_105(t);
              t = Cons_2_0(_id, d_38, t);
            }
          LocalPopChoice(e_18);
        }
      else
        {
          t = d_18;
          {
            ATerm z_37 = NULL,a_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_37 = ATgetFirst((ATermList) t);
                a_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_38), (ATerm) ATmakeAppl(sym_Undefined_1, z_37));
          }
        }
      return(t);
    }
    t = d_38(t);
  }
  s_37 = t;
  t = (ATerm) ATinsert(CheckATermList(s_37), (ATerm) ATmakeAppl(sym_Program_1, p_37));
  d_8 = t;
  t = SSLsetAnnotations(d_8, o_37);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm q_38 = NULL;
  q_38 = t;
  if(match_string(t, "--help"))
    {
      t = q_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_38;
        }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  t = term_b_16;
  r_38 = t;
  t = term_q_13;
  s_38 = t;
  t = term_n_18;
  t = b_6(r_38, s_38, t);
  t = term_s_18;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  k_38 = t;
  t = term_t_14;
  l_38 = t;
  t = term_v_18;
  t = lookup_table_0_1(l_38, t);
  p_38 = t;
  t = term_u_14;
  m_38 = t;
  t = (ATerm) ATempty;
  n_38 = t;
  t = p_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(m_38, n_38, o_38, t);
  t = k_38;
  {
    static ATerm q_4 (ATerm t);
    static ATerm q_4 (ATerm t)
    {
      ATerm a_19 = t;
      int f_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_105(t);
          LocalPopChoice(f_19);
        }
      else
        {
          t = a_19;
          {
            ATerm g_19 = t;
            int h_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_4, w_4, x_4, t);
                LocalPopChoice(h_19);
              }
            else
              {
                t = g_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_4, t);
  }
  {
    ATerm i_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_39 = NULL;
        d_39 = t;
        {
          ATerm l_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_11 = NULL;
              t = d_39;
              {
                ATerm n_19 = t;
                int p_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_11 = NULL,e_11 = NULL;
                    t = term_c_8;
                    d_11 = t;
                    t = term_b_16;
                    e_11 = t;
                    t = term_c_16;
                    t = y_5(d_11, e_11, t);
                    LocalPopChoice(p_19);
                  }
                else
                  {
                    t = n_19;
                    t = fetch_1_0(a_5, t);
                  }
              }
              t = d_39;
              t = default_system_usage_0_0(t);
              t = term_x_13;
              c_11 = t;
              t = SSL_exit(c_11);
              LocalPopChoice(m_19);
            }
          else
            {
              t = l_19;
              {
                ATerm k_11 = NULL,m_11 = NULL,o_11 = NULL;
                t = term_c_8;
                m_11 = t;
                t = term_f_17;
                o_11 = t;
                t = term_t_19;
                t = y_5(m_11, o_11, t);
                t = d_39;
                t = default_system_about_0_0(t);
                t = term_x_13;
                k_11 = t;
                t = SSL_exit(k_11);
              }
            }
        }
        LocalPopChoice(k_19);
      }
    else
      {
        t = i_19;
        {
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
              static ATerm b_5 (ATerm t);
              static ATerm b_5 (ATerm t)
              {
                ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,h_8 = NULL;
                j_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_39);
                h_39 = t;
                t = i_39;
                if(((i_38 != NULL) && (i_38 != t)))
                  _fail(t);
                else
                  i_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_39);
                h_8 = t;
                t = SSLsetAnnotations(h_8, h_39);
                return(t);
              }
              t = fetch_1_0(b_5, t);
              t = term_x_7;
              f_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_38)), term_y_19);
              g_39 = t;
              t = SSL_printnl(f_39, g_39);
              t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_38)), term_y_19));
              t = default_system_usage_0_0(t);
              t = term_u_13;
              e_39 = t;
              t = SSL_exit(e_39);
              LocalPopChoice(w_19);
            }
          else
            {
              t = v_19;
            }
        }
      }
  }
  j_38 = t;
  t = term_t_14;
  t = table_destroy_0_0(t);
  t = j_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  t = parse_options_1_0(a_81, t);
  o_39 = t;
  t = term_a_20;
  t = table_create_0_0(t);
  t = term_a_20;
  p_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_20, term_b_20, o_39);
  t = lookup_table_0_1(p_39, t);
  s_39 = t;
  t = term_b_20;
  q_39 = t;
  t = s_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(q_39, o_39, r_39, t);
  t = o_39;
  t = c_81(t);
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_81, t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        {
          ATerm e_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_81(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_20);
            }
          else
            {
              t = e_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(m_5, n_5, u_5, t);
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            {
              ATerm k_20 = t;
              int l_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(l_20);
                }
              else
                {
                  t = k_20;
                  t = keep_option_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = xtc_temp_files_1_0(f_6, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  t = term_m_20;
  u_39 = t;
  t = term_q_13;
  v_39 = t;
  t = term_n_20;
  t = b_6(u_39, v_39, t);
  t = term_o_20;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_p_20;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm x_39 = NULL;
  t = term_q_20;
  t = xtc_find_0_0(t);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_39);
  t = copy_to_1_0(h_6, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_39 = NULL,z_39 = NULL;
      t = term_c_8;
      y_39 = t;
      t = term_b_15;
      z_39 = t;
      t = term_w_20;
      t = y_5(y_39, z_39, t);
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      t = term_e_17;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(c_5, default_usage_0_0, _id, e_5, t);
  return(t);
}
