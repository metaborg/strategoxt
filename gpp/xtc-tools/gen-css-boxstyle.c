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
ATerm term_j_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_n_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_r_12;
ATerm term_g_12;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_d_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_e_10;
ATerm term_x_9;
ATerm term_h_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_e_7;
ATerm term_a_7;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_q_6;
ATerm term_n_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_s_6);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
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
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_x_9);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_l_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_h_9);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_g_12, term_r_11);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_n_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_z_12);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_s_14);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_u_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_k_14);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__2, term_w_16, term_z_12);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__2, term_b_17, term_z_12);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_z_12);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__3, term_j_14, term_k_14, (ATerm) ATempty);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_w_16);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_z_12);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("boxstyle.css", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_p_14);
}
#include <srts/init-stratego-application.h>
static ATerm l_5 (ATerm q_29, ATerm r_29, ATerm t);
static ATerm e_5 (ATerm u_36, ATerm v_36, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm s_85 (ATerm), ATerm t);
static ATerm t_4 (ATerm l_31, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_97 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm o_97 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm q_97 (ATerm), ATerm t);
static ATerm v_4 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm s_21, ATerm r_21, ATerm t);
static ATerm w_4 (ATerm t_77 (ATerm), ATerm o_21, ATerm n_21, ATerm t);
static ATerm j_0 (ATerm t);
static ATerm x_4 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t);
static ATerm y_4 (ATerm i_82 (ATerm), ATerm e_29, ATerm d_29, ATerm t);
static ATerm d_5 (ATerm x_13, ATerm y_13, ATerm t);
static ATerm d_8 (ATerm s_7, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_4 (ATerm z_40, ATerm t);
static ATerm a_5 (ATerm k_36, ATerm l_36, ATerm t);
static ATerm b_5 (ATerm g_14, ATerm h_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_10 (ATerm f_9, ATerm t);
static ATerm x_10 (ATerm j_9, ATerm k_9, ATerm l_9, ATerm t);
static ATerm y_10 (ATerm u_9, ATerm v_9, ATerm y_9, ATerm t);
static ATerm c_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm z_16 (ATerm x_15, ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm f_5 (ATerm c_28, ATerm d_28, ATerm t);
ATerm end_scope_1_0 (ATerm x_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm w_81 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm z_98 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_5 (ATerm p_48, ATerm q_48, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm x_27, ATerm y_27, ATerm w_27, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_5 (ATerm f_25, ATerm g_25, ATerm t);
ATerm foldr_2_0 (ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_97 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm need_help_1_0 (ATerm w_66 (ATerm), ATerm t);
static ATerm p_5 (ATerm e_31, ATerm f_31, ATerm g_31, ATerm t);
static ATerm q_5 (ATerm h_31, ATerm i_31, ATerm t);
ATerm lookup_table_0_1 (ATerm j_29, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_31, ATerm n_31, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm i_5 (ATerm j_31, ATerm k_31, ATerm t);
static ATerm j_5 (ATerm o_31, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_73 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_60 (ATerm), ATerm h_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_88 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm parse_options_1_0 (ATerm a_88 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm b_67 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm l_5 (ATerm q_29, ATerm r_29, ATerm t)
{
  ATerm a_0 = NULL;
  t = lookup_table_0_1(q_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(r_29, a_0, t);
  return(t);
}
static ATerm e_5 (ATerm u_36, ATerm v_36, ATerm t)
{
  t = SSL_copy(u_36, v_36);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm b_2 = NULL,d_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_6 = t;
    int e_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_0 = NULL;
        t = b_2;
        t = o_0(t);
        m_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = m_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = m_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, d_2, m_0);
        t = e_5(d_2, m_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_2);
        LocalPopChoice(e_6);
      }
    else
      {
        t = d_6;
        {
          ATerm j_6 = t;
          int k_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = b_2;
              t = o_0(t);
              v_0 = t;
              {
                ATerm l_6 = t;
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
                            if((d_2 != t))
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
                    t = l_6;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, d_2, v_0);
              t = e_5(d_2, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_2);
              LocalPopChoice(k_6);
            }
          else
            {
              t = j_6;
              t = b_2;
              t = o_0(t);
              if((d_2 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_2);
            }
        }
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL;
  l_2 = t;
  t = s_85(t);
  m_2 = t;
  t = term_n_6;
  n_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_2), m_2);
  o_2 = t;
  t = SSL_printnl(n_2, o_2);
  t = l_2;
  return(t);
}
static ATerm t_4 (ATerm l_31, ATerm t)
{
  t = SSL_hashtable_keys(l_31);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_2 = NULL,r_2 = NULL;
  static ATerm b_0 (ATerm t)
  {
    ATerm t_2 = NULL,v_2 = NULL;
    t_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_2), t_2);
    t = l_5(not_null(p_2), t_2, t);
    v_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_2, v_2);
    return(t);
  }
  if(((p_2 != NULL) && (p_2 != t)))
    _fail(t);
  else
    p_2 = t;
  t = lookup_table_0_1(p_2, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(r_2, t);
  t = map_1_0(b_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm x_2 = NULL;
  x_2 = t;
  {
    ATerm o_6 = t;
    int p_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_2 = NULL,a_3 = NULL,c_3 = NULL;
        t = term_q_6;
        a_3 = t;
        t = term_s_6;
        c_3 = t;
        t = term_t_6;
        t = l_5(a_3, c_3, t);
        z_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_2, term_u_6);
        t = geq_0_0(t);
        t = x_2;
        t = p_97(t);
        LocalPopChoice(p_6);
      }
    else
      {
        t = o_6;
        t = x_2;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_97 (ATerm), ATerm t)
{
  ATerm j_3 = NULL;
  j_3 = t;
  {
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
        t = term_q_6;
        m_3 = t;
        t = term_s_6;
        n_3 = t;
        t = term_t_6;
        t = l_5(m_3, n_3, t);
        l_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_3, term_a_7);
        t = geq_0_0(t);
        t = j_3;
        t = o_97(t);
        LocalPopChoice(w_6);
      }
    else
      {
        t = v_6;
        t = j_3;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm r_3 = NULL;
  r_3 = t;
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 = NULL,v_3 = NULL,w_3 = NULL;
        t = term_q_6;
        v_3 = t;
        t = term_s_6;
        w_3 = t;
        t = term_t_6;
        t = l_5(v_3, w_3, t);
        t_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_3, term_e_7);
        t = geq_0_0(t);
        t = r_3;
        t = q_97(t);
        LocalPopChoice(d_7);
      }
    else
      {
        t = c_7;
        t = r_3;
      }
  }
  return(t);
}
static ATerm v_4 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm s_21, ATerm r_21, ATerm t)
{
  t = x_77(t);
  {
    static ATerm f_0 (ATerm t)
    {
      ATerm a_4 = NULL;
      a_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_21, a_4);
      t = w_77(t);
      return(t);
    }
    t = fetch_1_0(f_0, t);
  }
  t = r_21;
  return(t);
}
static ATerm w_4 (ATerm t_77 (ATerm), ATerm o_21, ATerm n_21, ATerm t)
{
  static ATerm b_6 (ATerm t)
  {
    ATerm s_5 = NULL,v_5 = NULL,w_5 = NULL;
    s_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_5 = ATgetFirst((ATermList) t);
            w_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_7 = t;
          int g_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_5;
              {
                static ATerm h_0 (ATerm t)
                {
                  t = n_21;
                  return(t);
                }
                t = v_4(t_77, h_0, v_5, w_5, t);
              }
              t = b_6(t);
              LocalPopChoice(g_7);
            }
          else
            {
              t = f_7;
              {
                ATerm i_1 = NULL,l_1 = NULL,a_1 = NULL;
                t = SSLgetAnnotations(s_5);
                i_1 = t;
                t = w_5;
                t = b_6(t);
                l_1 = t;
                t = (ATerm) ATinsert(CheckATermList(l_1), v_5);
                a_1 = t;
                t = SSLsetAnnotations(a_1, i_1);
              }
            }
        }
      }
    return(t);
  }
  t = o_21;
  t = b_6(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm x_6 = NULL;
  if(match_cons(t, sym__2))
    {
      x_6 = ATgetArgument(t, 0);
      if((x_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,m_6 = NULL;
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
  {
    ATerm h_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_7 = ATgetArgument(t, 0);
            ATerm m_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
        t = l_5(u_28, v_28, t);
        LocalPopChoice(j_7);
      }
    else
      {
        t = h_7;
        t = (ATerm) ATempty;
      }
  }
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_6, w_28);
  t = w_4(j_0, i_6, w_28, t);
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_28, v_28, h_6);
  t = lookup_table_0_1(u_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(v_28, h_6, m_6, t);
  t = g_6;
  return(t);
}
static ATerm y_4 (ATerm i_82 (ATerm), ATerm e_29, ATerm d_29, ATerm t)
{
  static ATerm p_0 (ATerm t)
  {
    ATerm y_6 = NULL,z_6 = NULL;
    if(match_cons(t, sym__2))
      {
        y_6 = ATgetArgument(t, 0);
        z_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, e_29, y_6, z_6);
    t = i_82(t);
    return(t);
  }
  t = d_29;
  t = map_1_0(p_0, t);
  return(t);
}
static ATerm d_5 (ATerm x_13, ATerm y_13, ATerm t)
{
  t = SSL_access(x_13, y_13);
  return(t);
}
static ATerm d_8 (ATerm s_7, ATerm t)
{
  t = SSL_fclose(s_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL;
  y_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_7 = ATgetArgument(t, 0);
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_7);
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            t = d_8(y_7, t);
          }
      }
    }
  else
    {
      t = d_8(y_7, t);
    }
  return(t);
}
static ATerm z_4 (ATerm z_40, ATerm t)
{
  t = SSL_read_term_from_stream(z_40);
  return(t);
}
static ATerm a_5 (ATerm k_36, ATerm l_36, ATerm t)
{
  t = SSL_strcat(k_36, l_36);
  return(t);
}
static ATerm b_5 (ATerm g_14, ATerm h_14, ATerm t)
{
  ATerm e_8 = NULL;
  t = SSL_fopen(g_14, h_14);
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_8 = NULL;
  t = SSL_stdin_stream();
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  t = SSL_stdout_stream();
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_8 = NULL;
  t = SSL_stderr_stream();
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
  return(t);
}
static ATerm w_10 (ATerm f_9, ATerm t)
{
  ATerm g_9 = NULL;
  t = SSL_explode_term(f_9);
  if(match_cons(t, sym__2))
    {
      ATerm q_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_7 = ATgetArgument(t, 1);
        if(((ATgetType(r_7) == AT_LIST) && !(ATisEmpty(r_7))))
          {
            g_9 = ATgetFirst((ATermList) r_7);
            {
              ATerm t_7 = (ATerm) ATgetNext((ATermList) r_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_10 (ATerm j_9, ATerm k_9, ATerm l_9, ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,s_9 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(l_9);
  o_9 = t;
  t = j_9;
  if(match_cons(t, sym_Path_1))
    {
      s_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_9, k_9);
  c_1 = t;
  t = SSLsetAnnotations(c_1, o_9);
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(m_9, n_9, t);
  return(t);
}
static ATerm y_10 (ATerm u_9, ATerm v_9, ATerm y_9, ATerm t)
{
  ATerm b_10 = NULL,d_10 = NULL,g_10 = NULL,j_10 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(y_9);
  g_10 = t;
  t = SSL_is_string(u_9);
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_10, v_9);
  d_1 = t;
  t = SSLsetAnnotations(d_1, g_10);
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(b_10, d_10, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,t_10 = NULL;
  o_10 = t;
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_10(o_10, t);
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            {
              ATerm w_7 = t;
              int z_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_10(p_10, t_10, o_10, t);
                  LocalPopChoice(z_7);
                }
              else
                {
                  t = w_7;
                  t = y_10(p_10, t_10, o_10, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_10(o_10, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_11 = NULL,e_11 = NULL,j_11 = NULL,t_11 = NULL;
  t_11 = t;
  {
    ATerm a_8 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_11, term_g_8);
        t = c_5(t);
        LocalPopChoice(b_8);
      }
    else
      {
        t = a_8;
        {
          ATerm e_2 = NULL,f_2 = NULL;
          t = term_h_8;
          f_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_8, t_11);
          t = a_5(f_2, t_11, t);
          e_2 = t;
          t = SSL_perror(e_2);
          _fail(t);
        }
      }
  }
  e_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_4(j_11, t);
  c_11 = t;
  t = e_11;
  t = fclose_0_0(t);
  t = c_11;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_k_8;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_11 = NULL,x_11 = NULL;
      w_11 = t;
      t = (ATerm) ATinsert(ATempty, term_p_8);
      x_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_11, (ATerm) ATinsert(ATempty, term_p_8));
      t = d_5(w_11, x_11, t);
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
                ATerm a_12 = NULL,b_12 = NULL;
                a_12 = t;
                t = (ATerm) ATinsert(ATempty, term_u_8);
                b_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_12, (ATerm) ATinsert(ATempty, term_u_8));
                t = d_5(a_12, b_12, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_8;
              }
            t = debug_1_0(q_0, t);
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
  ATerm e_13 = NULL,g_13 = NULL,h_13 = NULL;
  e_13 = t;
  t = term_n_6;
  g_13 = t;
  t = (ATerm) ATinsert(ATempty, term_y_8);
  h_13 = t;
  t = SSL_printnl(g_13, h_13);
  t = e_13;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  if(match_cons(t, sym__3))
    {
      i_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
      k_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_4(i_13, j_13, k_13, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm l_13 = NULL,o_13 = NULL,p_13 = NULL;
  l_13 = t;
  t = term_n_6;
  o_13 = t;
  t = (ATerm) ATinsert(ATempty, term_z_8);
  p_13 = t;
  t = SSL_printnl(o_13, p_13);
  t = l_13;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
  q_13 = t;
  t = term_n_6;
  r_13 = t;
  t = (ATerm) ATinsert(ATempty, term_y_8);
  s_13 = t;
  t = SSL_printnl(r_13, s_13);
  t = q_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_12 = NULL,e_12 = NULL,f_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,w_12 = NULL,x_12 = NULL;
  c_12 = t;
  t = if_verbose5_1_0(s_0, t);
  {
    ATerm a_9 = t;
    if((PushChoice() == 0))
      {
        ATerm y_12 = NULL,a_13 = NULL;
        t = term_b_9;
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_12);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATmakeAppl(sym_Imported_1, c_12));
        t = l_5(y_12, a_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_9;
      }
  }
  f_12 = t;
  t = term_b_9;
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_9, term_h_9, (ATerm) ATinsert(ATempty, c_12));
  t = lookup_table_0_1(s_12, t);
  x_12 = t;
  t = term_h_9;
  t_12 = t;
  t = (ATerm) ATinsert(ATempty, c_12);
  u_12 = t;
  t = x_12;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(t_12, u_12, w_12, t);
  t = f_12;
  t = if_verbose4_1_0(u_0, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(y_0, t);
  e_12 = t;
  t = term_b_9;
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, e_12);
  t = y_4(z_0, p_12, e_12, t);
  t = if_verbose6_1_0(b_1, t);
  t = term_b_9;
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_9, (ATerm)ATmakeAppl(sym_Imported_1, c_12), (ATerm) ATempty);
  t = lookup_table_0_1(k_12, t);
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_12);
  l_12 = t;
  t = (ATerm) ATempty;
  m_12 = t;
  t = o_12;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(l_12, m_12, n_12, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_9, (ATerm)ATmakeAppl(sym_Imported_1, c_12), (ATerm) ATempty);
  t = if_verbose4_1_0(e_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm j_82 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_15 = ATgetFirst((ATermList) t);
          d_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_2 = NULL,d_3 = NULL,f_3 = NULL,m_1 = NULL;
            t = SSLgetAnnotations(b_15);
            u_2 = t;
            t = c_15;
            t = j_82(t);
            d_3 = t;
            t = d_15;
            t = filter_1_0(j_82, t);
            f_3 = t;
            t = (ATerm) ATinsert(CheckATermList(f_3), d_3);
            m_1 = t;
            t = SSLsetAnnotations(m_1, u_2);
            LocalPopChoice(p_9);
          }
        else
          {
            t = i_9;
            t = d_15;
            t = filter_1_0(j_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm t)
{
  static ATerm i_15 (ATerm t)
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_71(t);
        t = i_15(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        t = o_71(t);
      }
    return(t);
  }
  t = i_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_15 = NULL,k_15 = NULL;
      t = term_q_6;
      j_15 = t;
      t = term_x_9;
      k_15 = t;
      t = term_e_10;
      t = l_5(j_15, k_15, t);
      LocalPopChoice(w_9);
    }
  else
    {
      t = t_9;
      {
        ATerm f_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_15 = NULL;
            t = term_i_10;
            l_15 = t;
            t = SSL_getenv(l_15);
            LocalPopChoice(h_10);
          }
        else
          {
            t = f_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = debug_1_0(g_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_k_10;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  t = term_b_9;
  r_15 = t;
  t = term_l_10;
  s_15 = t;
  t = term_m_10;
  t = l_5(r_15, s_15, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_10;
      }
  }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm n_15 = NULL;
  t = if_verbose5_1_0(f_1, t);
  n_15 = t;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_15 = NULL,p_15 = NULL;
        t = term_b_9;
        o_15 = t;
        t = term_h_9;
        p_15 = t;
        t = term_u_10;
        t = l_5(o_15, p_15, t);
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        {
          ATerm q_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          q_15 = t;
          t = repeat_2_0(h_1, _id, t);
          t = q_15;
        }
      }
  }
  t = n_15;
  t = if_verbose5_1_0(j_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_v_10;
  return(t);
}
static ATerm z_16 (ATerm x_15, ATerm t)
{
  ATerm z_15 = NULL,c_16 = NULL,d_16 = NULL;
  t = term_b_9;
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_15);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATmakeAppl(sym_Tool_1, x_15));
  t = l_5(c_16, d_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_10 = ATgetFirst((ATermList) t);
      if(match_cons(z_10, sym__2))
        {
          ATerm b_11 = ATgetArgument(z_10, 0);
          z_15 = ATgetArgument(z_10, 1);
        }
      else
        _fail(t);
      {
        ATerm a_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_15;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_v_10;
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
  t = term_d_11;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
      t = if_verbose5_1_0(n_1, t);
      t = xtc_load_0_0(t);
      g_16 = t;
      if(match_cons(t, sym__2))
        {
          e_16 = ATgetArgument(t, 0);
          f_16 = ATgetArgument(t, 1);
          {
            ATerm h_11 = t;
            int i_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
                t = term_b_9;
                n_16 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, e_16);
                o_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATmakeAppl(sym_Tool_1, e_16));
                t = l_5(n_16, o_16, t);
                {
                  static ATerm p_1 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((f_16 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((m_16 != NULL) && (m_16 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          m_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(p_1, t);
                }
                t = not_null(m_16);
                LocalPopChoice(i_11);
              }
            else
              {
                t = h_11;
                t = z_16(g_16, t);
              }
          }
        }
      else
        {
          t = z_16(g_16, t);
        }
      t = if_verbose5_1_0(q_1, t);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm y_16 = NULL,y_3 = NULL,z_3 = NULL;
        y_16 = t;
        t = term_n_6;
        y_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_11), y_16), term_k_11);
        z_3 = t;
        t = SSL_printnl(y_3, z_3);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_11), y_16), term_k_11);
        t = if_verbose5_1_0(s_1, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm f_5 (ATerm c_28, ATerm d_28, ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  d_17 = t;
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        t = l_5(c_28, d_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_11 = ATgetFirst((ATermList) t);
            c_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_11);
        {
          ATerm e_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, c_17);
          t = lookup_table_0_1(c_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_5(d_28, c_17, e_17, t);
          t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, c_17);
        }
      }
    else
      {
        t = m_11;
        {
          ATerm m_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
          t = lookup_table_0_1(c_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              m_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_5(d_28, m_17, t);
          t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        }
      }
  }
  t = d_17;
  return(t);
}
ATerm end_scope_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,u_17 = NULL,x_17 = NULL,z_17 = NULL;
  s_17 = t;
  t = x_81(t);
  r_17 = t;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_18 = NULL;
        t = term_r_11;
        d_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_17, term_r_11);
        t = l_5(r_17, d_18, t);
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
      q_17 = ATgetFirst((ATermList) t);
      p_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_17, term_r_11, p_17);
  t = lookup_table_0_1(r_17, t);
  z_17 = t;
  t = term_r_11;
  u_17 = t;
  t = z_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(u_17, p_17, x_17, t);
  t = q_17;
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm e_18 = NULL;
      e_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_17, e_18);
      t = f_5(r_17, e_18, t);
      return(t);
    }
    t = map_1_0(u_1, t);
  }
  t = s_17;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm t)
{
  ATerm s_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_71(t);
      t = j_71(t);
      LocalPopChoice(u_11);
    }
  else
    {
      t = s_11;
      t = j_71(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_81 (ATerm), ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  k_18 = t;
  t = w_81(t);
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_18, term_r_11);
  {
    ATerm v_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_11 = ATgetArgument(t, 0);
            ATerm d_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_11;
        v_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_18, term_r_11);
        t = l_5(j_18, v_18, t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = v_11;
        t = (ATerm) ATempty;
      }
  }
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_18, term_r_11, (ATerm) ATinsert(CheckATermList(l_18), (ATerm) ATempty));
  t = lookup_table_0_1(j_18, t);
  p_18 = t;
  t = term_r_11;
  m_18 = t;
  t = (ATerm) ATinsert(CheckATermList(l_18), (ATerm) ATempty);
  n_18 = t;
  t = p_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(m_18, n_18, o_18, t);
  t = k_18;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_g_12;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_19);
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        t = n_19;
      }
  }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm b_19 = NULL;
  static ATerm w_1 (ATerm t)
  {
    ATerm c_19 = NULL;
    c_19 = t;
    {
      ATerm j_12 = t;
      int q_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_19 = NULL,f_19 = NULL;
          t = term_g_12;
          d_19 = t;
          t = term_r_11;
          f_19 = t;
          t = term_r_12;
          t = l_5(d_19, f_19, t);
          LocalPopChoice(q_12);
        }
      else
        {
          t = j_12;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_19 != NULL) && (b_19 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_19 = ATgetFirst((ATermList) t);
        {
          ATerm v_12 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = b_19;
    t = map_1_0(y_1, t);
    t = c_19;
    t = end_scope_1_0(z_1, t);
    return(t);
  }
  t = begin_scope_1_0(v_1, t);
  t = restore_always_2_0(z_98, w_1, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
  q_19 = t;
  t = term_z_12;
  t = whoami_0_0(t);
  t_19 = t;
  t = term_n_6;
  v_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_13), t_19), term_b_13);
  w_19 = t;
  t = SSL_printnl(v_19, w_19);
  t = term_d_13;
  u_19 = t;
  t = SSL_exit(u_19);
  t = q_19;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  if(match_string(t, "-k"))
    {
      t = y_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_19;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  b_20 = t;
  t = SSL_string_to_int(b_20);
  c_20 = t;
  t = term_f_13;
  d_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_13, c_20);
  t = o_5(d_20, c_20, t);
  t = b_20;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_2, c_2, g_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  if(match_string(t, "-S"))
    {
      t = h_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_20;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  t = term_s_6;
  k_20 = t;
  t = term_n_13;
  l_20 = t;
  t = term_t_13;
  t = o_5(k_20, l_20, t);
  t = term_u_13;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm m_20 = NULL,o_20 = NULL,p_20 = NULL;
  m_20 = t;
  t = SSL_string_to_int(m_20);
  o_20 = t;
  t = term_s_6;
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_6, o_20);
  t = o_5(p_20, o_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_20);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_w_13;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL;
  t = term_z_13;
  s_20 = t;
  t = term_z_12;
  t_20 = t;
  t = term_a_14;
  t = o_5(s_20, t_20, t);
  t = term_b_14;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_2, j_2, k_2, t);
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm f_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_2, s_2, w_2, t);
            LocalPopChoice(i_14);
          }
        else
          {
            t = f_14;
            t = Option_3_0(y_2, b_3, e_3, t);
          }
      }
    }
  return(t);
}
static ATerm o_5 (ATerm p_48, ATerm q_48, ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  t = term_q_6;
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_6, p_48, q_48);
  t = lookup_table_0_1(u_20, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(p_48, q_48, v_20, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_6, p_48, q_48);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_21 = NULL,c_21 = NULL,e_21 = NULL;
      t = term_z_12;
      t = e_0(t);
      b_21 = t;
      t = term_j_14;
      c_21 = t;
      t = term_k_14;
      e_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_14, term_k_14, b_21);
      t = m_5(c_21, e_21, b_21, t);
      _fail(t);
    }
  else
    {
      ATerm i_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_20 = ATgetFirst((ATermList) t);
          a_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_20;
      t = c_0(t);
      t = term_z_12;
      t = d_0(t);
      i_21 = t;
      t = (ATerm) ATinsert(CheckATermList(a_21), i_21);
    }
  return(t);
}
static ATerm m_5 (ATerm x_27, ATerm y_27, ATerm w_27, ATerm t)
{
  ATerm k_21 = NULL,p_21 = NULL,q_21 = NULL,u_21 = NULL,w_21 = NULL;
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_14 = ATgetArgument(t, 0);
            ATerm o_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
        t = l_5(x_27, y_27, t);
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = (ATerm) ATempty;
      }
  }
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_27, y_27, (ATerm) ATinsert(CheckATermList(p_21), w_27));
  t = lookup_table_0_1(x_27, t);
  w_21 = t;
  t = (ATerm) ATinsert(CheckATermList(p_21), w_27);
  q_21 = t;
  t = w_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(y_27, q_21, u_21, t);
  t = k_21;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
      t = term_z_12;
      t = n_0(t);
      j_22 = t;
      t = term_j_14;
      k_22 = t;
      t = term_k_14;
      l_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_14, term_k_14, j_22);
      t = m_5(k_22, l_22, j_22, t);
      _fail(t);
    }
  else
    {
      ATerm q_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_22 = ATgetFirst((ATermList) t);
          g_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_22 = ATgetFirst((ATermList) t);
          i_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_22;
      t = k_0(t);
      t = h_22;
      t = l_0(t);
      q_22 = t;
      t = (ATerm) ATinsert(CheckATermList(i_22), q_22);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  if(match_string(t, "-o"))
    {
      t = s_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_22;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  t_22 = t;
  t = term_p_14;
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_14, t_22);
  t = o_5(u_22, t_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_22);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_q_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, h_3, i_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,h_23 = NULL,k_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_12;
  t = whoami_0_0(t);
  z_22 = t;
  t = term_n_6;
  h_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_14), z_22);
  k_23 = t;
  t = SSL_printnl(h_23, k_23);
  t = term_d_13;
  a_23 = t;
  t = SSL_exit(a_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL;
  t = term_q_6;
  l_23 = t;
  t = term_s_14;
  m_23 = t;
  t = term_t_14;
  t = l_5(l_23, m_23, t);
  return(t);
}
static ATerm g_5 (ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_25, g_25);
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      t = SSL_addr(f_25, g_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  o_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_23;
      t = o_80(t);
    }
  else
    {
      ATerm w_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_23 = ATgetFirst((ATermList) t);
          q_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_23;
      t = foldr_2_0(o_80, p_80, t);
      w_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_23, w_23);
      t = p_80(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_n_13;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(j_4, k_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_24 = NULL,f_4 = NULL,g_4 = NULL;
  t = times_0_0(t);
  g_4 = t;
  t = SSL_explode_term(g_4);
  if(match_cons(t, sym__2))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      f_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4;
  t = foldr_2_0(k_3, o_3, t);
  a_24 = t;
  t = SSL_TicksToSeconds(a_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,s_24 = NULL;
  o_24 = t;
  if(match_cons(t, sym__2))
    {
      p_24 = ATgetArgument(t, 0);
      s_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_24;
        if((p_24 != t))
          {
            _fail(t);
          }
        t = o_24;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = (ATerm) ATmakeAppl(sym__2, p_24, s_24);
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_24, s_24);
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              t = SSL_gtr(p_24, s_24);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_24, s_24);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
        t = term_q_6;
        z_24 = t;
        t = term_s_6;
        a_25 = t;
        t = term_t_6;
        t = l_5(z_24, a_25, t);
        y_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_24, term_d_13);
        t = geq_0_0(t);
        t = w_24;
        t = l_97(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        t = w_24;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm e_25 = NULL,j_25 = NULL,l_25 = NULL,m_25 = NULL;
  t = run_time_0_0(t);
  e_25 = t;
  t = term_z_12;
  t = whoami_0_0(t);
  j_25 = t;
  t = term_n_6;
  l_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_15), e_25), term_g_15), j_25);
  m_25 = t;
  t = SSL_printnl(l_25, m_25);
  t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_15), e_25), term_g_15), j_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_13;
  p_25 = t;
  t = SSL_exit(p_25);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  f_26 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_26;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_26 = ATgetArgument(t, 0);
          {
            ATerm f_6 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(f_26);
            f_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_26);
            x_1 = t;
            t = SSLsetAnnotations(x_1, f_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_26;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_66 (ATerm), ATerm t)
{
  ATerm m_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_25 = NULL,v_25 = NULL;
      t = term_q_6;
      s_25 = t;
      t = term_u_15;
      v_25 = t;
      t = term_v_15;
      t = l_5(s_25, v_25, t);
      LocalPopChoice(t_15);
    }
  else
    {
      t = m_15;
      t = fetch_1_0(q_3, t);
    }
  t = w_66(t);
  return(t);
}
static ATerm p_5 (ATerm e_31, ATerm f_31, ATerm g_31, ATerm t)
{
  ATerm h_26 = NULL;
  t = SSL_hashtable_put(g_31, e_31, f_31);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_26);
  return(t);
}
static ATerm q_5 (ATerm h_31, ATerm i_31, ATerm t)
{
  t = SSL_hashtable_get(i_31, h_31);
  return(t);
}
ATerm lookup_table_0_1 (ATerm j_29, ATerm t)
{
  ATerm h_27 = NULL;
  t = table_hashtable_0_0(t);
  h_27 = t;
  {
    ATerm w_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_6 = NULL;
        t = h_27;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_5(j_29, r_6, t);
        LocalPopChoice(y_15);
      }
    else
      {
        t = w_15;
        {
          ATerm b_7 = NULL;
          t = j_29;
          t = table_create_0_0(t);
          t = h_27;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_5(j_29, b_7, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_31, ATerm n_31, ATerm t)
{
  ATerm o_27 = NULL;
  t = SSL_hashtable_create(m_31, n_31);
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_27);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,v_27 = NULL,z_27 = NULL;
  p_27 = t;
  t = term_a_16;
  v_27 = t;
  t = term_b_16;
  z_27 = t;
  t = p_27;
  t = new_hashtable_0_2(v_27, z_27, t);
  q_27 = t;
  t = p_27;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(p_27, q_27, r_27, t);
  t = p_27;
  return(t);
}
static ATerm i_5 (ATerm j_31, ATerm k_31, ATerm t)
{
  ATerm f_28 = NULL;
  t = SSL_hashtable_remove(k_31, j_31);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_28);
  return(t);
}
static ATerm j_5 (ATerm o_31, ATerm t)
{
  ATerm h_28 = NULL;
  t = SSL_hashtable_destroy(o_31);
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_28);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_28 = NULL;
  t = SSL_table_hashtable();
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_28);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_28 = NULL,l_28 = NULL,o_28 = NULL,p_28 = NULL;
  j_28 = t;
  t = table_hashtable_0_0(t);
  l_28 = t;
  t = lookup_table_0_1(j_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_5(p_28, t);
  t = l_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5(j_28, o_28, t);
  t = j_28;
  return(t);
}
ATerm map_1_0 (ATerm i_73 (ATerm), ATerm t)
{
  static ATerm t_29 (ATerm t)
  {
    ATerm o_29 = NULL,p_29 = NULL,s_29 = NULL;
    o_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_29;
      }
    else
      {
        ATerm i_7 = NULL,l_7 = NULL,n_7 = NULL,i_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_29 = ATgetFirst((ATermList) t);
            s_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_29);
        i_7 = t;
        t = p_29;
        t = i_73(t);
        l_7 = t;
        t = s_29;
        t = t_29(t);
        n_7 = t;
        t = (ATerm) ATinsert(CheckATermList(n_7), l_7);
        i_2 = t;
        t = SSLsetAnnotations(i_2, i_7);
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_29 = ATgetFirst((ATermList) t);
      x_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_30 = NULL,f_30 = NULL;
        static ATerm s_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_30)), not_null(f_30));
          return(t);
        }
        t = x_29;
        t = i_0(t);
        if(((e_30 != NULL) && (e_30 != t)))
          _fail(t);
        else
          e_30 = t;
        t = w_29;
        t = g_0(t);
        if(((f_30 != NULL) && (f_30 != t)))
          _fail(t);
        else
          f_30 = t;
        t = x_29;
        t = reverse_acc_2_0(g_0, s_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_12;
      t = i_0(t);
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,h_4 = NULL;
  p_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_30);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_30);
  h_4 = t;
  t = SSLsetAnnotations(h_4, n_30);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_30), term_h_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_30 = NULL,m_30 = NULL;
      t = term_q_6;
      l_30 = t;
      t = term_s_14;
      m_30 = t;
      t = term_t_14;
      t = l_5(l_30, m_30, t);
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      t = fetch_1_0(u_3, t);
    }
  t = term_k_16;
  t = echo_0_0(t);
  t = term_j_14;
  j_30 = t;
  t = term_k_14;
  k_30 = t;
  t = term_l_16;
  t = l_5(j_30, k_30, t);
  t = reverse_acc_2_0(_id, x_3, t);
  t = map_1_0(b_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  static ATerm z_31 (ATerm t)
  {
    ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
    w_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_31 = ATgetFirst((ATermList) t);
        y_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_16 = t;
      int q_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_8 = NULL,i_8 = NULL,l_4 = NULL;
          t = SSLgetAnnotations(w_31);
          c_8 = t;
          t = x_31;
          t = s_73(t);
          i_8 = t;
          t = (ATerm) ATinsert(CheckATermList(y_31), i_8);
          l_4 = t;
          t = SSLsetAnnotations(l_4, c_8);
          LocalPopChoice(q_16);
        }
      else
        {
          t = p_16;
          {
            ATerm s_8 = NULL,v_8 = NULL,o_4 = NULL;
            t = SSLgetAnnotations(w_31);
            s_8 = t;
            t = y_31;
            t = z_31(t);
            v_8 = t;
            t = (ATerm) ATinsert(CheckATermList(v_8), x_31);
            o_4 = t;
            t = SSLsetAnnotations(o_4, s_8);
          }
        }
    }
    return(t);
  }
  t = z_31(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
  d_32 = t;
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_16 = ATgetFirst((ATermList) t);
                ATerm u_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_32;
          }
        LocalPopChoice(s_16);
      }
    else
      {
        t = r_16;
        t = (ATerm) ATinsert(ATempty, d_32);
      }
  }
  e_32 = t;
  t = term_v_16;
  f_32 = t;
  t = SSL_printnl(f_32, e_32);
  t = d_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL;
  t = term_q_6;
  j_32 = t;
  t = term_s_14;
  k_32 = t;
  t = term_t_14;
  t = l_5(j_32, k_32, t);
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
  ATerm l_32 = NULL,m_32 = NULL;
  t = term_w_16;
  l_32 = t;
  t = term_z_12;
  m_32 = t;
  t = term_x_16;
  t = o_5(l_32, m_32, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_a_17;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL;
  t = term_w_16;
  p_32 = t;
  t = term_z_12;
  q_32 = t;
  t = term_x_16;
  t = o_5(p_32, q_32, t);
  t = term_b_17;
  n_32 = t;
  t = term_z_12;
  o_32 = t;
  t = term_f_17;
  t = o_5(n_32, o_32, t);
  t = term_g_17;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_h_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, d_4, e_4, t);
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      t = Option_3_0(i_4, m_4, n_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_60 (ATerm), ATerm h_60 (ATerm), ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,u_4 = NULL;
  w_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_32 = ATgetFirst((ATermList) t);
      t_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_32);
  r_32 = t;
  t = s_32;
  t = g_60(t);
  u_32 = t;
  t = t_32;
  t = h_60(t);
  v_32 = t;
  t = (ATerm) ATinsert(CheckATermList(v_32), u_32);
  u_4 = t;
  t = SSLsetAnnotations(u_4, r_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,g_33 = NULL,h_33 = NULL,k_5 = NULL;
  b_33 = t;
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_17;
        t = b_88(t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
      }
  }
  t = b_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_33 = ATgetFirst((ATermList) t);
      e_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_33);
  c_33 = t;
  t = term_s_14;
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, d_33);
  t = o_5(h_33, d_33, t);
  t = e_33;
  {
    static ATerm r_33 (ATerm t)
    {
      ATerm o_17 = t;
      int t_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_33 = NULL;
              k_33 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_33;
              LocalPopChoice(w_17);
            }
          else
            {
              t = v_17;
              t = b_88(t);
              t = Cons_2_0(_id, r_33, t);
            }
          LocalPopChoice(t_17);
        }
      else
        {
          t = o_17;
          {
            ATerm n_33 = NULL,o_33 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_33 = ATgetFirst((ATermList) t);
                o_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_33), (ATerm) ATmakeAppl(sym_Undefined_1, n_33));
          }
        }
      return(t);
    }
    t = r_33(t);
  }
  g_33 = t;
  t = (ATerm) ATinsert(CheckATermList(g_33), (ATerm) ATmakeAppl(sym_Program_1, d_33));
  k_5 = t;
  t = SSLsetAnnotations(k_5, c_33);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm e_34 = NULL;
  e_34 = t;
  if(match_string(t, "--help"))
    {
      t = e_34;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_34;
        }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL;
  t = term_u_15;
  f_34 = t;
  t = term_z_12;
  g_34 = t;
  t = term_y_17;
  t = o_5(f_34, g_34, t);
  t = term_a_18;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_b_18;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  y_33 = t;
  t = term_j_14;
  z_33 = t;
  t = term_c_18;
  t = lookup_table_0_1(z_33, t);
  d_34 = t;
  t = term_k_14;
  a_34 = t;
  t = (ATerm) ATempty;
  b_34 = t;
  t = d_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(a_34, b_34, c_34, t);
  t = y_33;
  {
    static ATerm p_4 (ATerm t)
    {
      ATerm f_18 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_88(t);
          LocalPopChoice(g_18);
        }
      else
        {
          t = f_18;
          {
            ATerm h_18 = t;
            int i_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_4, r_4, s_4, t);
                LocalPopChoice(i_18);
              }
            else
              {
                t = h_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_4, t);
  }
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_34 = NULL;
        r_34 = t;
        {
          ATerm s_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_9 = NULL;
              t = r_34;
              {
                ATerm u_18 = t;
                int w_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_9 = NULL,e_9 = NULL;
                    t = term_q_6;
                    d_9 = t;
                    t = term_u_15;
                    e_9 = t;
                    t = term_v_15;
                    t = l_5(d_9, e_9, t);
                    LocalPopChoice(w_18);
                  }
                else
                  {
                    t = u_18;
                    t = fetch_1_0(h_5, t);
                  }
              }
              t = r_34;
              t = default_system_usage_0_0(t);
              t = term_n_13;
              c_9 = t;
              t = SSL_exit(c_9);
              LocalPopChoice(t_18);
            }
          else
            {
              t = s_18;
              {
                ATerm z_9 = NULL,a_10 = NULL,c_10 = NULL;
                t = term_q_6;
                a_10 = t;
                t = term_w_16;
                c_10 = t;
                t = term_x_18;
                t = l_5(a_10, c_10, t);
                t = r_34;
                t = default_system_about_0_0(t);
                t = term_n_13;
                z_9 = t;
                t = SSL_exit(z_9);
              }
            }
        }
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
              static ATerm n_5 (ATerm t)
              {
                ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,c_6 = NULL;
                x_34 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_34 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_34);
                v_34 = t;
                t = w_34;
                if(((w_33 != NULL) && (w_33 != t)))
                  _fail(t);
                else
                  w_33 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_34);
                c_6 = t;
                t = SSLsetAnnotations(c_6, v_34);
                return(t);
              }
              t = fetch_1_0(n_5, t);
              t = term_n_6;
              t_34 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_33)), term_a_19);
              u_34 = t;
              t = SSL_printnl(t_34, u_34);
              t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_33)), term_a_19));
              t = default_system_usage_0_0(t);
              t = term_d_13;
              s_34 = t;
              t = SSL_exit(s_34);
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
            }
        }
      }
  }
  x_33 = t;
  t = term_j_14;
  t = table_destroy_0_0(t);
  t = x_33;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm b_67 (ATerm), ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  t = parse_options_1_0(y_66, t);
  c_35 = t;
  t = term_e_19;
  t = table_create_0_0(t);
  t = term_e_19;
  d_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_19, term_g_19, c_35);
  t = lookup_table_0_1(d_35, t);
  g_35 = t;
  t = term_g_19;
  e_35 = t;
  t = g_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(e_35, c_35, f_35, t);
  t = c_35;
  t = a_67(t);
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_66, t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_67(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(u_5, x_5, y_5, t);
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  t = keep_option_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = xtc_temp_files_1_0(z_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  t = term_x_19;
  i_35 = t;
  t = term_z_12;
  j_35 = t;
  t = term_z_19;
  t = o_5(i_35, j_35, t);
  t = term_a_20;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm l_35 = NULL;
  t = term_f_20;
  t = xtc_find_0_0(t);
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_35);
  t = copy_to_1_0(a_6, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm g_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_35 = NULL,n_35 = NULL;
      t = term_q_6;
      m_35 = t;
      t = term_p_14;
      n_35 = t;
      t = term_j_20;
      t = l_5(m_35, n_35, t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = g_20;
      t = term_v_16;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_5, default_usage_0_0, _id, t_5, t);
  return(t);
}
