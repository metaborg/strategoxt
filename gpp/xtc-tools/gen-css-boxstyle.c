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
ATerm term_q_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_a_20;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_z_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_t_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_l_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_i_12;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_r_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_f_10;
ATerm term_z_9;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_e_7;
ATerm term_a_7;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_n_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_r_6);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_z_9);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_l_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_g_9);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_r_11);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_r_6, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_b_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_t_14);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_v_15);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_j_14);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__2, term_z_16, term_b_13);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_f_17, term_b_13);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_v_15, term_b_13);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__3, term_i_14, term_j_14, (ATerm) ATempty);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_z_16);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_b_13);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("boxstyle.css", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_q_14);
}
#include <srts/init-stratego-application.h>
static ATerm l_5 (ATerm v_29, ATerm w_29, ATerm t);
static ATerm e_5 (ATerm b_47, ATerm c_47, ATerm t);
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm l_99 (ATerm), ATerm t);
static ATerm t_4 (ATerm b_33, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm y_109 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm x_109 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm z_109 (ATerm), ATerm t);
static ATerm v_4 (ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm x_21, ATerm w_21, ATerm t);
static ATerm w_4 (ATerm n_88 (ATerm), ATerm t_21, ATerm s_21, ATerm t);
static ATerm f_0 (ATerm t);
static ATerm x_4 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t);
static ATerm y_4 (ATerm k_93 (ATerm), ATerm j_29, ATerm i_29, ATerm t);
static ATerm d_5 (ATerm c_14, ATerm d_14, ATerm t);
static ATerm z_7 (ATerm o_7, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_4 (ATerm g_51, ATerm t);
static ATerm a_5 (ATerm r_46, ATerm s_46, ATerm t);
static ATerm b_5 (ATerm l_14, ATerm m_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_10 (ATerm e_9, ATerm t);
static ATerm w_10 (ATerm i_9, ATerm j_9, ATerm k_9, ATerm t);
static ATerm x_10 (ATerm t_9, ATerm u_9, ATerm v_9, ATerm t);
static ATerm c_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm w_16 (ATerm w_15, ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm f_5 (ATerm h_28, ATerm i_28, ATerm t);
ATerm end_scope_1_0 (ATerm z_92 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm y_92 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm i_111 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_5 (ATerm w_58, ATerm x_58, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm c_28, ATerm d_28, ATerm b_28, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_5 (ATerm k_25, ATerm l_25, ATerm t);
ATerm foldr_2_0 (ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_109 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm need_help_1_0 (ATerm l_77 (ATerm), ATerm t);
static ATerm p_5 (ATerm u_32, ATerm v_32, ATerm w_32, ATerm t);
static ATerm q_5 (ATerm x_32, ATerm y_32, ATerm t);
ATerm lookup_table_0_1 (ATerm o_29, ATerm t);
ATerm new_hashtable_0_2 (ATerm c_33, ATerm d_33, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm i_5 (ATerm z_32, ATerm a_33, ATerm t);
static ATerm j_5 (ATerm e_33, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm c_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_101 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm parse_options_1_0 (ATerm t_101 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm l_5 (ATerm v_29, ATerm w_29, ATerm t)
{
  ATerm a_0 = NULL;
  t = lookup_table_0_1(v_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(w_29, a_0, t);
  return(t);
}
static ATerm e_5 (ATerm b_47, ATerm c_47, ATerm t)
{
  t = SSL_copy(b_47, c_47);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,b_2 = NULL;
  y_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_6 = t;
    int f_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_0 = NULL;
        t = y_1;
        t = q_0(t);
        i_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = i_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = i_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, b_2, i_0);
        t = e_5(b_2, i_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_2);
        LocalPopChoice(f_6);
      }
    else
      {
        t = e_6;
        {
          ATerm k_6 = t;
          int l_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = y_1;
              t = q_0(t);
              v_0 = t;
              {
                ATerm m_6 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_0 = NULL;
                    w_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = w_0;
                          }
                        else
                          {
                            t = w_0;
                            if((b_2 != t))
                              {
                                _fail(t);
                              }
                            t = w_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_6;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, b_2, v_0);
              t = e_5(b_2, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_2);
              LocalPopChoice(l_6);
            }
          else
            {
              t = k_6;
              t = y_1;
              t = q_0(t);
              if((b_2 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_2);
            }
        }
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
  j_2 = t;
  t = l_99(t);
  l_2 = t;
  t = term_n_6;
  m_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_2), l_2);
  n_2 = t;
  t = SSL_printnl(m_2, n_2);
  t = j_2;
  return(t);
}
static ATerm t_4 (ATerm b_33, ATerm t)
{
  t = SSL_hashtable_keys(b_33);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm r_2 = NULL,t_2 = NULL;
    r_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_2), r_2);
    t = l_5(not_null(o_2), r_2, t);
    t_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_2, t_2);
    return(t);
  }
  if(((o_2 != NULL) && (o_2 != t)))
    _fail(t);
  else
    o_2 = t;
  t = lookup_table_0_1(o_2, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(p_2, t);
  t = map_1_0(b_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm y_109 (ATerm), ATerm t)
{
  ATerm w_2 = NULL;
  w_2 = t;
  {
    ATerm o_6 = t;
    int p_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
        t = term_q_6;
        z_2 = t;
        t = term_r_6;
        a_3 = t;
        t = term_t_6;
        t = l_5(z_2, a_3, t);
        y_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_2, term_u_6);
        t = geq_0_0(t);
        t = w_2;
        t = y_109(t);
        LocalPopChoice(p_6);
      }
    else
      {
        t = o_6;
        t = w_2;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  ATerm f_3 = NULL;
  f_3 = t;
  {
    ATerm v_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
        t = term_q_6;
        l_3 = t;
        t = term_r_6;
        m_3 = t;
        t = term_t_6;
        t = l_5(l_3, m_3, t);
        k_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_3, term_a_7);
        t = geq_0_0(t);
        t = f_3;
        t = x_109(t);
        LocalPopChoice(z_6);
      }
    else
      {
        t = v_6;
        t = f_3;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm z_109 (ATerm), ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_3 = NULL,t_3 = NULL,v_3 = NULL;
        t = term_q_6;
        t_3 = t;
        t = term_r_6;
        v_3 = t;
        t = term_t_6;
        t = l_5(t_3, v_3, t);
        s_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_3, term_e_7);
        t = geq_0_0(t);
        t = q_3;
        t = z_109(t);
        LocalPopChoice(d_7);
      }
    else
      {
        t = c_7;
        t = q_3;
      }
  }
  return(t);
}
static ATerm v_4 (ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm x_21, ATerm w_21, ATerm t)
{
  t = r_88(t);
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm x_3 = NULL;
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_21, x_3);
      t = q_88(t);
      return(t);
    }
    t = fetch_1_0(c_0, t);
  }
  t = w_21;
  return(t);
}
static ATerm w_4 (ATerm n_88 (ATerm), ATerm t_21, ATerm s_21, ATerm t)
{
  static ATerm z_5 (ATerm t);
  static ATerm z_5 (ATerm t)
  {
    ATerm r_5 = NULL,s_5 = NULL,v_5 = NULL;
    r_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_5 = ATgetFirst((ATermList) t);
            v_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_7 = t;
          int g_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_5;
              {
                static ATerm e_0 (ATerm t);
                static ATerm e_0 (ATerm t)
                {
                  t = s_21;
                  return(t);
                }
                t = v_4(n_88, e_0, s_5, v_5, t);
              }
              t = z_5(t);
              LocalPopChoice(g_7);
            }
          else
            {
              t = f_7;
              {
                ATerm j_1 = NULL,n_1 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(r_5);
                j_1 = t;
                t = v_5;
                t = z_5(t);
                n_1 = t;
                t = (ATerm) ATinsert(CheckATermList(n_1), s_5);
                z_0 = t;
                t = SSLsetAnnotations(z_0, j_1);
              }
            }
        }
      }
    return(t);
  }
  t = t_21;
  t = z_5(t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm w_6 = NULL;
  if(match_cons(t, sym__2))
    {
      w_6 = ATgetArgument(t, 0);
      if((w_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t)
{
  ATerm d_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
  {
    ATerm h_7 = t;
    int i_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_7 = ATgetArgument(t, 0);
            ATerm l_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
        t = l_5(z_28, a_29, t);
        LocalPopChoice(i_7);
      }
    else
      {
        t = h_7;
        t = (ATerm) ATempty;
      }
  }
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_6, b_29);
  t = w_4(f_0, h_6, b_29, t);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_28, a_29, g_6);
  t = lookup_table_0_1(z_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(a_29, g_6, i_6, t);
  t = d_6;
  return(t);
}
static ATerm y_4 (ATerm k_93 (ATerm), ATerm j_29, ATerm i_29, ATerm t)
{
  static ATerm k_0 (ATerm t);
  static ATerm k_0 (ATerm t)
  {
    ATerm x_6 = NULL,y_6 = NULL;
    if(match_cons(t, sym__2))
      {
        x_6 = ATgetArgument(t, 0);
        y_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, j_29, x_6, y_6);
    t = k_93(t);
    return(t);
  }
  t = i_29;
  t = map_1_0(k_0, t);
  return(t);
}
static ATerm d_5 (ATerm c_14, ATerm d_14, ATerm t)
{
  t = SSL_access(c_14, d_14);
  return(t);
}
static ATerm z_7 (ATerm o_7, ATerm t)
{
  t = SSL_fclose(o_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL;
  x_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_7 = ATgetArgument(t, 0);
      {
        ATerm m_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_7);
            LocalPopChoice(q_7);
          }
        else
          {
            t = m_7;
            t = z_7(x_7, t);
          }
      }
    }
  else
    {
      t = z_7(x_7, t);
    }
  return(t);
}
static ATerm z_4 (ATerm g_51, ATerm t)
{
  t = SSL_read_term_from_stream(g_51);
  return(t);
}
static ATerm a_5 (ATerm r_46, ATerm s_46, ATerm t)
{
  t = SSL_strcat(r_46, s_46);
  return(t);
}
static ATerm b_5 (ATerm l_14, ATerm m_14, ATerm t)
{
  ATerm d_8 = NULL;
  t = SSL_fopen(l_14, m_14);
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_8 = NULL;
  t = SSL_stdin_stream();
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_8 = NULL;
  t = SSL_stdout_stream();
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  t = SSL_stderr_stream();
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
  return(t);
}
static ATerm t_10 (ATerm e_9, ATerm t)
{
  ATerm f_9 = NULL;
  t = SSL_explode_term(e_9);
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_7 = ATgetArgument(t, 1);
        if(((ATgetType(s_7) == AT_LIST) && !(ATisEmpty(s_7))))
          {
            f_9 = ATgetFirst((ATermList) s_7);
            {
              ATerm t_7 = (ATerm) ATgetNext((ATermList) s_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_10 (ATerm i_9, ATerm j_9, ATerm k_9, ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,r_9 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(k_9);
  n_9 = t;
  t = i_9;
  if(match_cons(t, sym_Path_1))
    {
      r_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_9, j_9);
  b_1 = t;
  t = SSLsetAnnotations(b_1, n_9);
  if(match_cons(t, sym__2))
    {
      l_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(l_9, m_9, t);
  return(t);
}
static ATerm x_10 (ATerm t_9, ATerm u_9, ATerm v_9, ATerm t)
{
  ATerm y_9 = NULL,b_10 = NULL,d_10 = NULL,i_10 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(v_9);
  d_10 = t;
  t = SSL_is_string(t_9);
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_10, u_9);
  c_1 = t;
  t = SSLsetAnnotations(c_1, d_10);
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(y_9, b_10, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym__2))
    {
      o_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_10(n_10, t);
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            {
              ATerm y_7 = t;
              int a_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_10(o_10, p_10, n_10, t);
                  LocalPopChoice(a_8);
                }
              else
                {
                  t = y_7;
                  t = x_10(o_10, p_10, n_10, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_10(n_10, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_11 = NULL,c_11 = NULL,e_11 = NULL,s_11 = NULL;
  s_11 = t;
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_11, term_h_8);
        t = c_5(t);
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        {
          ATerm f_2 = NULL,h_2 = NULL;
          t = term_i_8;
          h_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_8, s_11);
          t = a_5(h_2, s_11, t);
          f_2 = t;
          t = SSL_perror(f_2);
          _fail(t);
        }
      }
  }
  c_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_4(e_11, t);
  a_11 = t;
  t = c_11;
  t = fclose_0_0(t);
  t = a_11;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_k_8;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_m_8;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_11 = NULL,w_11 = NULL;
      v_11 = t;
      t = (ATerm) ATinsert(ATempty, term_p_8);
      w_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_11, (ATerm) ATinsert(ATempty, term_p_8));
      t = d_5(v_11, w_11, t);
      LocalPopChoice(o_8);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_8;
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_8 = t;
            if((PushChoice() == 0))
              {
                ATerm x_11 = NULL,a_12 = NULL;
                x_11 = t;
                t = (ATerm) ATinsert(ATempty, term_u_8);
                a_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_11, (ATerm) ATinsert(ATempty, term_u_8));
                t = d_5(x_11, a_12, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_8;
              }
            t = debug_1_0(n_0, t);
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            t = debug_1_0(r_0, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = debug_1_0(t_0, t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_w_8;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = debug_1_0(x_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_x_8;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm d_13 = NULL,f_13 = NULL,g_13 = NULL;
  d_13 = t;
  t = term_n_6;
  f_13 = t;
  t = (ATerm) ATinsert(ATempty, term_y_8);
  g_13 = t;
  t = SSL_printnl(f_13, g_13);
  t = d_13;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  if(match_cons(t, sym__3))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
      j_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_4(h_13, i_13, j_13, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,o_13 = NULL;
  k_13 = t;
  t = term_n_6;
  l_13 = t;
  t = (ATerm) ATinsert(ATempty, term_z_8);
  o_13 = t;
  t = SSL_printnl(l_13, o_13);
  t = k_13;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_13 = t;
  t = term_n_6;
  q_13 = t;
  t = (ATerm) ATinsert(ATempty, term_y_8);
  r_13 = t;
  t = SSL_printnl(q_13, r_13);
  t = p_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,e_12 = NULL,f_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,w_12 = NULL;
  b_12 = t;
  t = if_verbose5_1_0(s_0, t);
  {
    ATerm a_9 = t;
    if((PushChoice() == 0))
      {
        ATerm x_12 = NULL,y_12 = NULL;
        t = term_b_9;
        x_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, b_12);
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATmakeAppl(sym_Imported_1, b_12));
        t = l_5(x_12, y_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_9;
      }
  }
  e_12 = t;
  t = term_b_9;
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_9, term_g_9, (ATerm) ATinsert(ATempty, b_12));
  t = lookup_table_0_1(p_12, t);
  w_12 = t;
  t = term_g_9;
  s_12 = t;
  t = (ATerm) ATinsert(ATempty, b_12);
  t_12 = t;
  t = w_12;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(s_12, t_12, u_12, t);
  t = e_12;
  t = if_verbose4_1_0(u_0, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(y_0, t);
  c_12 = t;
  t = term_b_9;
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, c_12);
  t = y_4(a_1, o_12, c_12, t);
  t = if_verbose6_1_0(d_1, t);
  t = term_b_9;
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_9, (ATerm)ATmakeAppl(sym_Imported_1, b_12), (ATerm) ATempty);
  t = lookup_table_0_1(f_12, t);
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, b_12);
  k_12 = t;
  t = (ATerm) ATempty;
  l_12 = t;
  t = n_12;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(k_12, l_12, m_12, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_9, (ATerm)ATmakeAppl(sym_Imported_1, b_12), (ATerm) ATempty);
  t = if_verbose4_1_0(e_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_15 = ATgetFirst((ATermList) t);
          c_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 = NULL,e_3 = NULL,g_3 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(a_15);
            v_2 = t;
            t = b_15;
            t = a_96(t);
            e_3 = t;
            t = c_15;
            t = filter_1_0(a_96, t);
            g_3 = t;
            t = (ATerm) ATinsert(CheckATermList(g_3), e_3);
            f_1 = t;
            t = SSLsetAnnotations(f_1, v_2);
            LocalPopChoice(o_9);
          }
        else
          {
            t = h_9;
            t = c_15;
            t = filter_1_0(a_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm t)
{
  static ATerm h_15 (ATerm t);
  static ATerm h_15 (ATerm t)
  {
    ATerm q_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_82(t);
        t = h_15(t);
        LocalPopChoice(s_9);
      }
    else
      {
        t = q_9;
        t = h_82(t);
      }
    return(t);
  }
  t = h_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_15 = NULL,j_15 = NULL;
      t = term_q_6;
      i_15 = t;
      t = term_z_9;
      j_15 = t;
      t = term_f_10;
      t = l_5(i_15, j_15, t);
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_15 = NULL;
            t = term_j_10;
            k_15 = t;
            t = SSL_getenv(k_15);
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_k_10;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  t = term_b_9;
  q_15 = t;
  t = term_l_10;
  r_15 = t;
  t = term_m_10;
  t = l_5(q_15, r_15, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_10;
      }
  }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_r_10;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_15 = NULL;
  t = if_verbose5_1_0(g_1, t);
  m_15 = t;
  {
    ATerm s_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_15 = NULL,o_15 = NULL;
        t = term_b_9;
        n_15 = t;
        t = term_g_9;
        o_15 = t;
        t = term_v_10;
        t = l_5(n_15, o_15, t);
        LocalPopChoice(u_10);
      }
    else
      {
        t = s_10;
        {
          ATerm p_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          p_15 = t;
          t = repeat_2_0(i_1, _id, t);
          t = p_15;
        }
      }
  }
  t = m_15;
  t = if_verbose5_1_0(k_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_y_10;
  return(t);
}
static ATerm w_16 (ATerm w_15, ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,c_16 = NULL;
  t = term_b_9;
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, w_15);
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATmakeAppl(sym_Tool_1, w_15));
  t = l_5(z_15, c_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_10 = ATgetFirst((ATermList) t);
      if(match_cons(z_10, sym__2))
        {
          ATerm d_11 = ATgetArgument(z_10, 0);
          y_15 = ATgetArgument(z_10, 1);
        }
      else
        _fail(t);
      {
        ATerm b_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_15;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_y_10;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_b_9;
  t = table_getlist_0_0(t);
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
      t = if_verbose5_1_0(m_1, t);
      t = xtc_load_0_0(t);
      f_16 = t;
      if(match_cons(t, sym__2))
        {
          d_16 = ATgetArgument(t, 0);
          e_16 = ATgetArgument(t, 1);
          {
            ATerm i_11 = t;
            int j_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
                t = term_b_9;
                m_16 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, d_16);
                n_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATmakeAppl(sym_Tool_1, d_16));
                t = l_5(m_16, n_16, t);
                {
                  static ATerm p_1 (ATerm t);
                  static ATerm p_1 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((e_16 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((l_16 != NULL) && (l_16 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(p_1, t);
                }
                t = not_null(l_16);
                LocalPopChoice(j_11);
              }
            else
              {
                t = i_11;
                t = w_16(f_16, t);
              }
          }
        }
      else
        {
          t = w_16(f_16, t);
        }
      t = if_verbose5_1_0(q_1, t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm v_16 = NULL,z_3 = NULL,a_4 = NULL;
        v_16 = t;
        t = term_n_6;
        z_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_11), v_16), term_k_11);
        a_4 = t;
        t = SSL_printnl(z_3, a_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_11), v_16), term_k_11);
        t = if_verbose5_1_0(s_1, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm f_5 (ATerm h_28, ATerm i_28, ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  c_17 = t;
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
        t = l_5(h_28, i_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_11 = ATgetFirst((ATermList) t);
            b_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_11);
        {
          ATerm d_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, h_28, i_28, b_17);
          t = lookup_table_0_1(h_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_5(i_28, b_17, d_17, t);
          t = (ATerm) ATmakeAppl(sym__3, h_28, i_28, b_17);
        }
      }
    else
      {
        t = m_11;
        {
          ATerm j_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
          t = lookup_table_0_1(h_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_5(i_28, j_17, t);
          t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
        }
      }
  }
  t = c_17;
  return(t);
}
ATerm end_scope_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,u_17 = NULL,x_17 = NULL;
  r_17 = t;
  t = z_92(t);
  q_17 = t;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_17 = NULL;
        t = term_r_11;
        z_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_17, term_r_11);
        t = l_5(q_17, z_17, t);
        {
          ATerm t_11 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_11;
            }
        }
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_17 = ATgetFirst((ATermList) t);
      o_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_17, term_r_11, o_17);
  t = lookup_table_0_1(q_17, t);
  x_17 = t;
  t = term_r_11;
  s_17 = t;
  t = x_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(s_17, o_17, u_17, t);
  t = p_17;
  {
    static ATerm u_1 (ATerm t);
    static ATerm u_1 (ATerm t)
    {
      ATerm d_18 = NULL;
      d_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_17, d_18);
      t = f_5(q_17, d_18, t);
      return(t);
    }
    t = map_1_0(u_1, t);
  }
  t = r_17;
  return(t);
}
ATerm restore_always_2_0 (ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm t)
{
  ATerm u_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_82(t);
      t = c_82(t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = u_11;
      t = c_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_92 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  j_18 = t;
  t = y_92(t);
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_18, term_r_11);
  {
    ATerm z_11 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_12 = ATgetArgument(t, 0);
            ATerm h_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_11;
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_18, term_r_11);
        t = l_5(h_18, u_18, t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = z_11;
        t = (ATerm) ATempty;
      }
  }
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_18, term_r_11, (ATerm) ATinsert(CheckATermList(k_18), (ATerm) ATempty));
  t = lookup_table_0_1(h_18, t);
  o_18 = t;
  t = term_r_11;
  l_18 = t;
  t = (ATerm) ATinsert(CheckATermList(k_18), (ATerm) ATempty);
  m_18 = t;
  t = o_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(l_18, m_18, n_18, t);
  t = j_18;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_i_12;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  {
    ATerm j_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(m_19);
        LocalPopChoice(q_12);
      }
    else
      {
        t = j_12;
        t = m_19;
      }
  }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_i_12;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  ATerm y_18 = NULL;
  static ATerm x_1 (ATerm t);
  static ATerm x_1 (ATerm t)
  {
    ATerm b_19 = NULL;
    b_19 = t;
    {
      ATerm r_12 = t;
      int v_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_19 = NULL,d_19 = NULL;
          t = term_i_12;
          c_19 = t;
          t = term_r_11;
          d_19 = t;
          t = term_z_12;
          t = l_5(c_19, d_19, t);
          LocalPopChoice(v_12);
        }
      else
        {
          t = r_12;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_18 != NULL) && (y_18 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_18 = ATgetFirst((ATermList) t);
        {
          ATerm a_13 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = y_18;
    t = map_1_0(z_1, t);
    t = b_19;
    t = end_scope_1_0(a_2, t);
    return(t);
  }
  t = begin_scope_1_0(v_1, t);
  t = restore_always_2_0(i_111, x_1, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
  p_19 = t;
  t = term_b_13;
  t = whoami_0_0(t);
  q_19 = t;
  t = term_n_6;
  u_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_13), q_19), term_c_13);
  v_19 = t;
  t = SSL_printnl(u_19, v_19);
  t = term_m_13;
  t_19 = t;
  t = SSL_exit(t_19);
  t = p_19;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  if(match_string(t, "-k"))
    {
      t = x_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_19;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm y_19 = NULL,b_20 = NULL,c_20 = NULL;
  y_19 = t;
  t = SSL_string_to_int(y_19);
  b_20 = t;
  t = term_n_13;
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_13, b_20);
  t = o_5(c_20, b_20, t);
  t = y_19;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_2, d_2, e_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm g_20 = NULL;
  g_20 = t;
  if(match_string(t, "-S"))
    {
      t = g_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_20;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm h_20 = NULL,k_20 = NULL;
  t = term_r_6;
  h_20 = t;
  t = term_t_13;
  k_20 = t;
  t = term_u_13;
  t = o_5(h_20, k_20, t);
  t = term_v_13;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_w_13;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,o_20 = NULL;
  l_20 = t;
  t = SSL_string_to_int(l_20);
  m_20 = t;
  t = term_r_6;
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, m_20);
  t = o_5(o_20, m_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_20);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm p_20 = NULL,s_20 = NULL;
  t = term_y_13;
  p_20 = t;
  t = term_b_13;
  s_20 = t;
  t = term_z_13;
  t = o_5(p_20, s_20, t);
  t = term_a_14;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_2, k_2, q_2, t);
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm g_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_2, u_2, x_2, t);
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
            t = Option_3_0(b_3, c_3, d_3, t);
          }
      }
    }
  return(t);
}
static ATerm o_5 (ATerm w_58, ATerm x_58, ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  t = term_q_6;
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_6, w_58, x_58);
  t = lookup_table_0_1(t_20, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(w_58, x_58, u_20, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_6, w_58, x_58);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
      t = term_b_13;
      t = h_0(t);
      a_21 = t;
      t = term_i_14;
      b_21 = t;
      t = term_j_14;
      c_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_14, term_j_14, a_21);
      t = m_5(b_21, c_21, a_21, t);
      _fail(t);
    }
  else
    {
      ATerm h_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_20 = ATgetFirst((ATermList) t);
          z_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_20;
      t = d_0(t);
      t = term_b_13;
      t = g_0(t);
      h_21 = t;
      t = (ATerm) ATinsert(CheckATermList(z_20), h_21);
    }
  return(t);
}
static ATerm m_5 (ATerm c_28, ATerm d_28, ATerm b_28, ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
  {
    ATerm k_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_14 = ATgetArgument(t, 0);
            ATerm p_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        t = l_5(c_28, d_28, t);
        LocalPopChoice(n_14);
      }
    else
      {
        t = k_14;
        t = (ATerm) ATempty;
      }
  }
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, (ATerm) ATinsert(CheckATermList(k_21), b_28));
  t = lookup_table_0_1(c_28, t);
  p_21 = t;
  t = (ATerm) ATinsert(CheckATermList(k_21), b_28);
  n_21 = t;
  t = p_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(d_28, n_21, o_21, t);
  t = j_21;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
      t = term_b_13;
      t = p_0(t);
      i_22 = t;
      t = term_i_14;
      j_22 = t;
      t = term_j_14;
      k_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_14, term_j_14, i_22);
      t = m_5(j_22, k_22, i_22, t);
      _fail(t);
    }
  else
    {
      ATerm p_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_22 = ATgetFirst((ATermList) t);
          f_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_22 = ATgetFirst((ATermList) t);
          h_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_22;
      t = m_0(t);
      t = g_22;
      t = o_0(t);
      p_22 = t;
      t = (ATerm) ATinsert(CheckATermList(h_22), p_22);
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  if(match_string(t, "-o"))
    {
      t = r_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_22;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  s_22 = t;
  t = term_q_14;
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_14, s_22);
  t = o_5(t_22, s_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_22);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_r_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_3, i_3, j_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_22 = NULL,x_22 = NULL,y_22 = NULL,h_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_13;
  t = whoami_0_0(t);
  u_22 = t;
  t = term_n_6;
  y_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_14), u_22);
  h_23 = t;
  t = SSL_printnl(y_22, h_23);
  t = term_m_13;
  x_22 = t;
  t = SSL_exit(x_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  t = term_q_6;
  k_23 = t;
  t = term_t_14;
  l_23 = t;
  t = term_u_14;
  t = l_5(k_23, l_23, t);
  return(t);
}
static ATerm g_5 (ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_25, l_25);
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      t = SSL_addr(k_25, l_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_23;
      t = q_91(t);
    }
  else
    {
      ATerm v_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_23 = ATgetFirst((ATermList) t);
          p_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_23;
      t = foldr_2_0(q_91, r_91, t);
      v_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_23, v_23);
      t = r_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm j_4 = NULL,m_4 = NULL;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(j_4, m_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_23 = NULL,f_4 = NULL,g_4 = NULL;
  t = times_0_0(t);
  g_4 = t;
  t = SSL_explode_term(g_4);
  if(match_cons(t, sym__2))
    {
      ATerm x_14 = ATgetArgument(t, 0);
      f_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4;
  t = foldr_2_0(n_3, o_3, t);
  z_23 = t;
  t = SSL_TicksToSeconds(z_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
  n_24 = t;
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_24;
        if((o_24 != t))
          {
            _fail(t);
          }
        t = n_24;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = (ATerm) ATmakeAppl(sym__2, o_24, p_24);
        {
          ATerm d_15 = t;
          int e_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_24, p_24);
              LocalPopChoice(e_15);
            }
          else
            {
              t = d_15;
              t = SSL_gtr(o_24, p_24);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_24, p_24);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_109 (ATerm), ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
        t = term_q_6;
        y_24 = t;
        t = term_r_6;
        z_24 = t;
        t = term_t_6;
        t = l_5(y_24, z_24, t);
        x_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_24, term_m_13);
        t = geq_0_0(t);
        t = v_24;
        t = u_109(t);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        t = v_24;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm d_25 = NULL,f_25 = NULL,i_25 = NULL,j_25 = NULL;
  t = run_time_0_0(t);
  d_25 = t;
  t = term_b_13;
  t = whoami_0_0(t);
  f_25 = t;
  t = term_n_6;
  i_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_15), d_25), term_l_15), f_25);
  j_25 = t;
  t = SSL_printnl(i_25, j_25);
  t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_15), d_25), term_l_15), f_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_13;
  m_25 = t;
  t = SSL_exit(m_25);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL;
  e_26 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_26;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_26 = ATgetArgument(t, 0);
          {
            ATerm j_6 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(e_26);
            j_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_26);
            w_1 = t;
            t = SSLsetAnnotations(w_1, j_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_26;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_25 = NULL,s_25 = NULL;
      t = term_q_6;
      r_25 = t;
      t = term_v_15;
      s_25 = t;
      t = term_x_15;
      t = l_5(r_25, s_25, t);
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
      t = fetch_1_0(r_3, t);
    }
  t = l_77(t);
  return(t);
}
static ATerm p_5 (ATerm u_32, ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm g_26 = NULL;
  t = SSL_hashtable_put(w_32, u_32, v_32);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_26);
  return(t);
}
static ATerm q_5 (ATerm x_32, ATerm y_32, ATerm t)
{
  t = SSL_hashtable_get(y_32, x_32);
  return(t);
}
ATerm lookup_table_0_1 (ATerm o_29, ATerm t)
{
  ATerm e_27 = NULL;
  t = table_hashtable_0_0(t);
  e_27 = t;
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_6 = NULL;
        t = e_27;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_5(o_29, s_6, t);
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        {
          ATerm b_7 = NULL;
          t = o_29;
          t = table_create_0_0(t);
          t = e_27;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_5(o_29, b_7, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm k_27 = NULL;
  t = SSL_hashtable_create(c_33, d_33);
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_27);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,u_27 = NULL,v_27 = NULL;
  o_27 = t;
  t = term_g_16;
  u_27 = t;
  t = term_h_16;
  v_27 = t;
  t = o_27;
  t = new_hashtable_0_2(u_27, v_27, t);
  p_27 = t;
  t = o_27;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(o_27, p_27, q_27, t);
  t = o_27;
  return(t);
}
static ATerm i_5 (ATerm z_32, ATerm a_33, ATerm t)
{
  ATerm w_27 = NULL;
  t = SSL_hashtable_remove(a_33, z_32);
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_27);
  return(t);
}
static ATerm j_5 (ATerm e_33, ATerm t)
{
  ATerm z_27 = NULL;
  t = SSL_hashtable_destroy(e_33);
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_27);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_28 = NULL;
  t = SSL_table_hashtable();
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_28);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_28 = NULL,j_28 = NULL,l_28 = NULL,o_28 = NULL;
  f_28 = t;
  t = table_hashtable_0_0(t);
  j_28 = t;
  t = lookup_table_0_1(f_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_5(o_28, t);
  t = j_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5(f_28, l_28, t);
  t = f_28;
  return(t);
}
ATerm map_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  static ATerm m_29 (ATerm t);
  static ATerm m_29 (ATerm t)
  {
    ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
    f_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_29;
      }
    else
      {
        ATerm j_7 = NULL,n_7 = NULL,p_7 = NULL,g_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_29 = ATgetFirst((ATermList) t);
            h_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_29);
        j_7 = t;
        t = g_29;
        t = c_84(t);
        n_7 = t;
        t = h_29;
        t = m_29(t);
        p_7 = t;
        t = (ATerm) ATinsert(CheckATermList(p_7), n_7);
        g_2 = t;
        t = SSLsetAnnotations(g_2, j_7);
      }
    return(t);
  }
  t = m_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,x_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_29 = ATgetFirst((ATermList) t);
      x_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_30 = NULL,e_30 = NULL;
        static ATerm u_3 (ATerm t);
        static ATerm u_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_30)), not_null(e_30));
          return(t);
        }
        t = x_29;
        t = l_0(t);
        if(((d_30 != NULL) && (d_30 != t)))
          _fail(t);
        else
          d_30 = t;
        t = u_29;
        t = j_0(t);
        if(((e_30 != NULL) && (e_30 != t)))
          _fail(t);
        else
          e_30 = t;
        t = x_29;
        t = reverse_acc_2_0(j_0, u_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_13;
      t = l_0(t);
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,h_4 = NULL;
  o_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_30);
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_30);
  h_4 = t;
  t = SSLsetAnnotations(h_4, m_30);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_30), term_i_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_30 = NULL,l_30 = NULL;
      t = term_q_6;
      k_30 = t;
      t = term_t_14;
      l_30 = t;
      t = term_u_14;
      t = l_5(k_30, l_30, t);
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      t = fetch_1_0(w_3, t);
    }
  t = term_o_16;
  t = echo_0_0(t);
  t = term_i_14;
  i_30 = t;
  t = term_j_14;
  j_30 = t;
  t = term_p_16;
  t = l_5(i_30, j_30, t);
  t = reverse_acc_2_0(_id, y_3, t);
  t = map_1_0(b_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  static ATerm n_31 (ATerm t);
  static ATerm n_31 (ATerm t)
  {
    ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
    k_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_31 = ATgetFirst((ATermList) t);
        m_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_16 = t;
      int r_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_8 = NULL,j_8 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(k_31);
          g_8 = t;
          t = l_31;
          t = m_84(t);
          j_8 = t;
          t = (ATerm) ATinsert(CheckATermList(m_31), j_8);
          k_4 = t;
          t = SSLsetAnnotations(k_4, g_8);
          LocalPopChoice(r_16);
        }
      else
        {
          t = q_16;
          {
            ATerm s_8 = NULL,v_8 = NULL,l_4 = NULL;
            t = SSLgetAnnotations(k_31);
            s_8 = t;
            t = m_31;
            t = n_31(t);
            v_8 = t;
            t = (ATerm) ATinsert(CheckATermList(v_8), l_31);
            l_4 = t;
            t = SSLsetAnnotations(l_4, s_8);
          }
        }
    }
    return(t);
  }
  t = n_31(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_16 = ATgetFirst((ATermList) t);
                ATerm x_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_31;
          }
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = (ATerm) ATinsert(ATempty, r_31);
      }
  }
  s_31 = t;
  t = term_y_16;
  t_31 = t;
  t = SSL_printnl(t_31, s_31);
  t = r_31;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  t = term_q_6;
  x_31 = t;
  t = term_t_14;
  y_31 = t;
  t = term_u_14;
  t = l_5(x_31, y_31, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  t = term_z_16;
  z_31 = t;
  t = term_b_13;
  a_32 = t;
  t = term_a_17;
  t = o_5(z_31, a_32, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_e_17;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  t = term_z_16;
  d_32 = t;
  t = term_b_13;
  e_32 = t;
  t = term_a_17;
  t = o_5(d_32, e_32, t);
  t = term_f_17;
  b_32 = t;
  t = term_b_13;
  c_32 = t;
  t = term_g_17;
  t = o_5(b_32, c_32, t);
  t = term_h_17;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, d_4, e_4, t);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      t = Option_3_0(i_4, n_4, o_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,r_4 = NULL;
  k_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_32 = ATgetFirst((ATermList) t);
      h_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_32);
  f_32 = t;
  t = g_32;
  t = q_70(t);
  i_32 = t;
  t = h_32;
  t = r_70(t);
  j_32 = t;
  t = (ATerm) ATinsert(CheckATermList(j_32), i_32);
  r_4 = t;
  t = SSLsetAnnotations(r_4, f_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_101 (ATerm), ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,f_33 = NULL,g_33 = NULL,h_5 = NULL;
  p_32 = t;
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_17;
        t = u_101(t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
      }
  }
  t = p_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_32 = ATgetFirst((ATermList) t);
      s_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_32);
  q_32 = t;
  t = term_t_14;
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_14, r_32);
  t = o_5(g_33, r_32, t);
  t = s_32;
  {
    static ATerm q_33 (ATerm t);
    static ATerm q_33 (ATerm t)
    {
      ATerm v_17 = t;
      int w_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_33 = NULL;
              j_33 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_33;
              LocalPopChoice(a_18);
            }
          else
            {
              t = y_17;
              t = u_101(t);
              t = Cons_2_0(_id, q_33, t);
            }
          LocalPopChoice(w_17);
        }
      else
        {
          t = v_17;
          {
            ATerm m_33 = NULL,n_33 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_33 = ATgetFirst((ATermList) t);
                n_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_33), (ATerm) ATmakeAppl(sym_Undefined_1, m_33));
          }
        }
      return(t);
    }
    t = q_33(t);
  }
  f_33 = t;
  t = (ATerm) ATinsert(CheckATermList(f_33), (ATerm) ATmakeAppl(sym_Program_1, r_32));
  h_5 = t;
  t = SSLsetAnnotations(h_5, q_32);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  if(match_string(t, "--help"))
    {
      t = d_34;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_34;
        }
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL;
  t = term_v_15;
  e_34 = t;
  t = term_b_13;
  f_34 = t;
  t = term_b_18;
  t = o_5(e_34, f_34, t);
  t = term_c_18;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_e_18;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_101 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  x_33 = t;
  t = term_i_14;
  y_33 = t;
  t = term_f_18;
  t = lookup_table_0_1(y_33, t);
  c_34 = t;
  t = term_j_14;
  z_33 = t;
  t = (ATerm) ATempty;
  a_34 = t;
  t = c_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(z_33, a_34, b_34, t);
  t = x_33;
  {
    static ATerm p_4 (ATerm t);
    static ATerm p_4 (ATerm t)
    {
      ATerm g_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_101(t);
          LocalPopChoice(i_18);
        }
      else
        {
          t = g_18;
          {
            ATerm p_18 = t;
            int q_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_4, s_4, u_4, t);
                LocalPopChoice(q_18);
              }
            else
              {
                t = p_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_4, t);
  }
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_34 = NULL;
        q_34 = t;
        {
          ATerm t_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_9 = NULL;
              t = q_34;
              {
                ATerm w_18 = t;
                int x_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_9 = NULL,p_9 = NULL;
                    t = term_q_6;
                    d_9 = t;
                    t = term_v_15;
                    p_9 = t;
                    t = term_x_15;
                    t = l_5(d_9, p_9, t);
                    LocalPopChoice(x_18);
                  }
                else
                  {
                    t = w_18;
                    t = fetch_1_0(k_5, t);
                  }
              }
              t = q_34;
              t = default_system_usage_0_0(t);
              t = term_t_13;
              c_9 = t;
              t = SSL_exit(c_9);
              LocalPopChoice(v_18);
            }
          else
            {
              t = t_18;
              {
                ATerm a_10 = NULL,c_10 = NULL,e_10 = NULL;
                t = term_q_6;
                c_10 = t;
                t = term_z_16;
                e_10 = t;
                t = term_z_18;
                t = l_5(c_10, e_10, t);
                t = q_34;
                t = default_system_about_0_0(t);
                t = term_t_13;
                a_10 = t;
                t = SSL_exit(a_10);
              }
            }
        }
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm a_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
              static ATerm n_5 (ATerm t);
              static ATerm n_5 (ATerm t)
              {
                ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,b_6 = NULL;
                w_34 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_34 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_34);
                u_34 = t;
                t = v_34;
                if(((v_33 != NULL) && (v_33 != t)))
                  _fail(t);
                else
                  v_33 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_34);
                b_6 = t;
                t = SSLsetAnnotations(b_6, u_34);
                return(t);
              }
              t = fetch_1_0(n_5, t);
              t = term_n_6;
              s_34 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_33)), term_f_19);
              t_34 = t;
              t = SSL_printnl(s_34, t_34);
              t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_33)), term_f_19));
              t = default_system_usage_0_0(t);
              t = term_m_13;
              r_34 = t;
              t = SSL_exit(r_34);
              LocalPopChoice(e_19);
            }
          else
            {
              t = a_19;
            }
        }
      }
  }
  w_33 = t;
  t = term_i_14;
  t = table_destroy_0_0(t);
  t = w_33;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  t = parse_options_1_0(n_77, t);
  b_35 = t;
  t = term_g_19;
  t = table_create_0_0(t);
  t = term_g_19;
  c_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_19, term_h_19, b_35);
  t = lookup_table_0_1(c_35, t);
  f_35 = t;
  t = term_h_19;
  d_35 = t;
  t = f_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(d_35, b_35, e_35, t);
  t = b_35;
  t = p_77(t);
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_77, t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        {
          ATerm k_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_77(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_19);
            }
          else
            {
              t = k_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(w_5, x_5, y_5, t);
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            {
              ATerm w_19 = t;
              int z_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(z_19);
                }
              else
                {
                  t = w_19;
                  t = keep_option_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = xtc_temp_files_1_0(a_6, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL;
  t = term_a_20;
  h_35 = t;
  t = term_b_13;
  i_35 = t;
  t = term_d_20;
  t = o_5(h_35, i_35, t);
  t = term_e_20;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm k_35 = NULL;
  t = term_i_20;
  t = xtc_find_0_0(t);
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_35);
  t = copy_to_1_0(c_6, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm j_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_35 = NULL,m_35 = NULL;
      t = term_q_6;
      l_35 = t;
      t = term_q_14;
      m_35 = t;
      t = term_q_20;
      t = l_5(l_35, m_35, t);
      LocalPopChoice(n_20);
    }
  else
    {
      t = j_20;
      t = term_y_16;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(t_5, default_usage_0_0, _id, u_5, t);
  return(t);
}
