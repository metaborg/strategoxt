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
ATerm term_b_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_c_18;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_a_17;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_f_12;
ATerm term_j_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_o_10;
ATerm term_j_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_n_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_p_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_z_7;
ATerm term_y_6;
ATerm term_r_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_i_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_m_6);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_u_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__2, term_d_9, term_c_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym__2, term_d_9, term_n_9);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_j_11);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_m_6, term_y_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_n_12);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_l_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_l_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_s_13);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_n_12);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__2, term_l_16, term_n_12);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__2, term_l_15, term_n_12);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_g_16);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_n_12);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("boxenv.sty", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_f_14);
}
#include <srts/init-stratego-application.h>
static ATerm w_4 (ATerm o_29, ATerm p_29, ATerm t);
static ATerm r_4 (ATerm l_35, ATerm m_35, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm j_84 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm g_96 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm f_96 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm h_96 (ATerm), ATerm t);
static ATerm i_4 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm s_21, ATerm r_21, ATerm t);
static ATerm j_4 (ATerm k_76 (ATerm), ATerm o_21, ATerm n_21, ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_4 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t);
static ATerm l_4 (ATerm z_80 (ATerm), ATerm e_29, ATerm d_29, ATerm t);
static ATerm q_4 (ATerm x_13, ATerm y_13, ATerm t);
static ATerm k_7 (ATerm w_6, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_4 (ATerm q_39, ATerm t);
static ATerm n_4 (ATerm b_35, ATerm c_35, ATerm t);
static ATerm o_4 (ATerm g_14, ATerm h_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_10 (ATerm i_8, ATerm t);
static ATerm m_10 (ATerm q_8, ATerm s_8, ATerm t_8, ATerm t);
static ATerm n_10 (ATerm e_9, ATerm f_9, ATerm g_9, ATerm t);
static ATerm p_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_81 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm f_16 (ATerm d_15, ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm s_4 (ATerm c_28, ATerm d_28, ATerm t);
ATerm end_scope_1_0 (ATerm o_80 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_80 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm q_97 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_4 (ATerm g_47, ATerm h_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm x_27, ATerm y_27, ATerm w_27, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_4 (ATerm f_25, ATerm g_25, ATerm t);
ATerm foldr_2_0 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_96 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm need_help_1_0 (ATerm n_65 (ATerm), ATerm t);
ATerm map_1_0 (ATerm z_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_86 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm parse_options_1_0 (ATerm r_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm s_65 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm w_4 (ATerm o_29, ATerm p_29, ATerm t)
{
  t = SSL_table_get(o_29, p_29);
  return(t);
}
static ATerm r_4 (ATerm l_35, ATerm m_35, ATerm t)
{
  t = SSL_copy(l_35, m_35);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL;
  x_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_5 = t;
    int a_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = x_1;
        t = o_0(t);
        h_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = h_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = h_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, y_1, h_0);
        t = r_4(y_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_1);
        LocalPopChoice(a_6);
      }
    else
      {
        t = z_5;
        {
          ATerm b_6 = t;
          int c_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_0 = NULL;
              t = x_1;
              t = o_0(t);
              t_0 = t;
              {
                ATerm e_6 = t;
                if((PushChoice() == 0))
                  {
                    ATerm u_0 = NULL;
                    u_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = u_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = u_0;
                          }
                        else
                          {
                            t = u_0;
                            if((y_1 != t))
                              {
                                _fail(t);
                              }
                            t = u_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_6;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, y_1, t_0);
              t = r_4(y_1, t_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_1);
              LocalPopChoice(c_6);
            }
          else
            {
              t = b_6;
              t = x_1;
              t = o_0(t);
              if((y_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_1);
            }
        }
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL,m_2 = NULL;
  i_2 = t;
  t = j_84(t);
  j_2 = t;
  t = term_i_6;
  l_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_2), j_2);
  m_2 = t;
  t = SSL_printnl(l_2, m_2);
  t = i_2;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_2 = NULL;
  static ATerm a_0 (ATerm t)
  {
    ATerm o_2 = NULL,p_2 = NULL;
    o_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_2), o_2);
    t = w_4(not_null(n_2), o_2, t);
    p_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_2, p_2);
    return(t);
  }
  if(((n_2 != NULL) && (n_2 != t)))
    _fail(t);
  else
    n_2 = t;
  t = SSL_table_keys(n_2);
  t = map_1_0(a_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm g_96 (ATerm), ATerm t)
{
  ATerm t_2 = NULL;
  t_2 = t;
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
        t = term_l_6;
        x_2 = t;
        t = term_m_6;
        y_2 = t;
        t = term_n_6;
        t = w_4(x_2, y_2, t);
        w_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_2, term_o_6);
        t = geq_0_0(t);
        t = t_2;
        t = g_96(t);
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        t = t_2;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_96 (ATerm), ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  {
    ATerm p_6 = t;
    int q_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
        t = term_l_6;
        g_3 = t;
        t = term_m_6;
        h_3 = t;
        t = term_n_6;
        t = w_4(g_3, h_3, t);
        f_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_3, term_r_6);
        t = geq_0_0(t);
        t = c_3;
        t = f_96(t);
        LocalPopChoice(q_6);
      }
    else
      {
        t = p_6;
        t = c_3;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  ATerm k_3 = NULL;
  k_3 = t;
  {
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
        t = term_l_6;
        o_3 = t;
        t = term_m_6;
        p_3 = t;
        t = term_n_6;
        t = w_4(o_3, p_3, t);
        n_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_3, term_y_6);
        t = geq_0_0(t);
        t = k_3;
        t = h_96(t);
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
        t = k_3;
      }
  }
  return(t);
}
static ATerm i_4 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm s_21, ATerm r_21, ATerm t)
{
  t = o_76(t);
  {
    static ATerm b_0 (ATerm t)
    {
      ATerm s_3 = NULL;
      s_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_21, s_3);
      t = n_76(t);
      return(t);
    }
    t = fetch_1_0(b_0, t);
  }
  t = r_21;
  return(t);
}
static ATerm j_4 (ATerm k_76 (ATerm), ATerm o_21, ATerm n_21, ATerm t)
{
  static ATerm j_5 (ATerm t)
  {
    ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
    e_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_5 = ATgetFirst((ATermList) t);
            g_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_6 = t;
          int a_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_5;
              {
                static ATerm f_0 (ATerm t)
                {
                  t = n_21;
                  return(t);
                }
                t = i_4(k_76, f_0, f_5, g_5, t);
              }
              t = j_5(t);
              LocalPopChoice(a_7);
            }
          else
            {
              t = z_6;
              {
                ATerm i_1 = NULL,l_1 = NULL,v_0 = NULL;
                t = SSLgetAnnotations(e_5);
                i_1 = t;
                t = g_5;
                t = j_5(t);
                l_1 = t;
                t = (ATerm) ATinsert(CheckATermList(l_1), f_5);
                v_0 = t;
                t = SSLsetAnnotations(v_0, i_1);
              }
            }
        }
      }
    return(t);
  }
  t = o_21;
  t = j_5(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm f_6 = NULL;
  if(match_cons(t, sym__2))
    {
      f_6 = ATgetArgument(t, 0);
      if((f_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,u_5 = NULL;
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_7 = ATgetArgument(t, 0);
            ATerm e_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
        t = w_4(u_28, v_28, t);
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        t = (ATerm) ATempty;
      }
  }
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_5, w_28);
  t = j_4(j_0, u_5, w_28, t);
  p_5 = t;
  t = SSL_table_put(u_28, v_28, p_5);
  t = o_5;
  return(t);
}
static ATerm l_4 (ATerm z_80 (ATerm), ATerm e_29, ATerm d_29, ATerm t)
{
  static ATerm m_0 (ATerm t)
  {
    ATerm g_6 = NULL,h_6 = NULL;
    if(match_cons(t, sym__2))
      {
        g_6 = ATgetArgument(t, 0);
        h_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, e_29, g_6, h_6);
    t = z_80(t);
    return(t);
  }
  t = d_29;
  t = map_1_0(m_0, t);
  return(t);
}
static ATerm q_4 (ATerm x_13, ATerm y_13, ATerm t)
{
  t = SSL_access(x_13, y_13);
  return(t);
}
static ATerm k_7 (ATerm w_6, ATerm t)
{
  t = SSL_fclose(w_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL;
  g_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_7 = ATgetArgument(t, 0);
      {
        ATerm h_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_7);
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            t = k_7(g_7, t);
          }
      }
    }
  else
    {
      t = k_7(g_7, t);
    }
  return(t);
}
static ATerm m_4 (ATerm q_39, ATerm t)
{
  t = SSL_read_term_from_stream(q_39);
  return(t);
}
static ATerm n_4 (ATerm b_35, ATerm c_35, ATerm t)
{
  t = SSL_strcat(b_35, c_35);
  return(t);
}
static ATerm o_4 (ATerm g_14, ATerm h_14, ATerm t)
{
  ATerm l_7 = NULL;
  t = SSL_fopen(g_14, h_14);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_7);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_7 = NULL;
  t = SSL_stdin_stream();
  m_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_7 = NULL;
  t = SSL_stdout_stream();
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_7 = NULL;
  t = SSL_stderr_stream();
  s_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_7);
  return(t);
}
static ATerm l_10 (ATerm i_8, ATerm t)
{
  ATerm n_8 = NULL;
  t = SSL_explode_term(i_8);
  if(match_cons(t, sym__2))
    {
      ATerm j_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_7 = ATgetArgument(t, 1);
        if(((ATgetType(o_7) == AT_LIST) && !(ATisEmpty(o_7))))
          {
            n_8 = ATgetFirst((ATermList) o_7);
            {
              ATerm q_7 = (ATerm) ATgetNext((ATermList) o_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_8;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_10 (ATerm q_8, ATerm s_8, ATerm t_8, ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,x_8 = NULL,a_9 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(t_8);
  x_8 = t;
  t = q_8;
  if(match_cons(t, sym_Path_1))
    {
      a_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_9, s_8);
  a_1 = t;
  t = SSLsetAnnotations(a_1, x_8);
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4(u_8, v_8, t);
  return(t);
}
static ATerm n_10 (ATerm e_9, ATerm f_9, ATerm g_9, ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,x_9 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(g_9);
  m_9 = t;
  t = SSL_is_string(e_9);
  x_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_9, f_9);
  b_1 = t;
  t = SSLsetAnnotations(b_1, m_9);
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4(k_9, l_9, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm b_10 = NULL,i_10 = NULL,k_10 = NULL;
  b_10 = t;
  if(match_cons(t, sym__2))
    {
      i_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_10(b_10, t);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            {
              ATerm v_7 = t;
              int w_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_10(i_10, k_10, b_10, t);
                  LocalPopChoice(w_7);
                }
              else
                {
                  t = v_7;
                  t = n_10(i_10, k_10, b_10, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_10(b_10, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_10 = NULL,s_10 = NULL,t_10 = NULL,e_11 = NULL;
  e_11 = t;
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_11, term_z_7);
        t = p_4(t);
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        {
          ATerm e_2 = NULL,f_2 = NULL;
          t = term_b_8;
          f_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_8, e_11);
          t = n_4(f_2, e_11, t);
          e_2 = t;
          t = SSL_perror(e_2);
          _fail(t);
        }
      }
  }
  s_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_4(t_10, t);
  p_10 = t;
  t = s_10;
  t = fclose_0_0(t);
  t = p_10;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_c_8;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_e_8;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_11 = NULL,k_11 = NULL;
      h_11 = t;
      t = (ATerm) ATinsert(ATempty, term_h_8);
      k_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_11, (ATerm) ATinsert(ATempty, term_h_8));
      t = q_4(h_11, k_11, t);
      LocalPopChoice(g_8);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = f_8;
      {
        ATerm j_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_8 = t;
            if((PushChoice() == 0))
              {
                ATerm l_11 = NULL,m_11 = NULL;
                l_11 = t;
                t = (ATerm) ATinsert(ATempty, term_p_8);
                m_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_11, (ATerm) ATinsert(ATempty, term_p_8));
                t = q_4(l_11, m_11, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_8;
              }
            t = debug_1_0(p_0, t);
            LocalPopChoice(k_8);
          }
        else
          {
            t = j_8;
            t = debug_1_0(q_0, t);
          }
      }
      t = (ATerm) ATempty;
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
  t = term_w_8;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = debug_1_0(x_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_y_8;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm l_12 = NULL,q_12 = NULL,r_12 = NULL;
  l_12 = t;
  t = term_i_6;
  q_12 = t;
  t = (ATerm) ATinsert(ATempty, term_z_8);
  r_12 = t;
  t = SSL_printnl(q_12, r_12);
  t = l_12;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  if(match_cons(t, sym__3))
    {
      t_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
      v_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_4(t_12, u_12, v_12, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,c_13 = NULL;
  z_12 = t;
  t = term_i_6;
  a_13 = t;
  t = (ATerm) ATinsert(ATempty, term_b_9);
  c_13 = t;
  t = SSL_printnl(a_13, c_13);
  t = z_12;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  f_13 = t;
  t = term_i_6;
  g_13 = t;
  t = (ATerm) ATinsert(ATempty, term_z_8);
  h_13 = t;
  t = SSL_printnl(g_13, h_13);
  t = f_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm q_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
  q_11 = t;
  t = if_verbose5_1_0(r_0, t);
  {
    ATerm c_9 = t;
    if((PushChoice() == 0))
      {
        ATerm d_12 = NULL,e_12 = NULL;
        t = term_d_9;
        d_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, q_11);
        e_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATmakeAppl(sym_Imported_1, q_11));
        t = w_4(d_12, e_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_9;
      }
  }
  t_11 = t;
  t = term_d_9;
  a_12 = t;
  t = term_n_9;
  b_12 = t;
  t = (ATerm) ATinsert(ATempty, q_11);
  c_12 = t;
  t = SSL_table_put(a_12, b_12, c_12);
  t = t_11;
  t = if_verbose4_1_0(w_0, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(y_0, t);
  s_11 = t;
  t = term_d_9;
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_9, s_11);
  t = l_4(z_0, x_11, s_11, t);
  t = if_verbose6_1_0(c_1, t);
  t = term_d_9;
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, q_11);
  v_11 = t;
  t = (ATerm) ATempty;
  w_11 = t;
  t = SSL_table_put(u_11, v_11, w_11);
  t = (ATerm) ATmakeAppl(sym__3, term_d_9, (ATerm)ATmakeAppl(sym_Imported_1, q_11), (ATerm) ATempty);
  t = if_verbose4_1_0(d_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,z_13 = NULL;
  v_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_13;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_13 = ATgetFirst((ATermList) t);
          z_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 = NULL,b_3 = NULL,d_3 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(v_13);
            s_2 = t;
            t = w_13;
            t = a_81(t);
            b_3 = t;
            t = z_13;
            t = filter_1_0(a_81, t);
            d_3 = t;
            t = (ATerm) ATinsert(CheckATermList(d_3), b_3);
            e_1 = t;
            t = SSLsetAnnotations(e_1, s_2);
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            t = z_13;
            t = filter_1_0(a_81, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm t)
{
  static ATerm c_14 (ATerm t)
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_70(t);
        t = c_14(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        t = f_70(t);
      }
    return(t);
  }
  t = c_14(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_14 = NULL,e_14 = NULL;
      t = term_l_6;
      d_14 = t;
      t = term_u_9;
      e_14 = t;
      t = term_v_9;
      t = w_4(d_14, e_14, t);
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      {
        ATerm w_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_14 = NULL;
            t = term_z_9;
            k_14 = t;
            t = SSL_getenv(k_14);
            LocalPopChoice(y_9);
          }
        else
          {
            t = w_9;
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
  t = term_a_10;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm r_14 = NULL,t_14 = NULL;
  t = term_d_9;
  r_14 = t;
  t = term_c_10;
  t_14 = t;
  t = term_d_10;
  t = w_4(r_14, t_14, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm e_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_10;
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
  t = term_f_10;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm n_14 = NULL;
  t = if_verbose5_1_0(f_1, t);
  n_14 = t;
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_14 = NULL,p_14 = NULL;
        t = term_d_9;
        o_14 = t;
        t = term_n_9;
        p_14 = t;
        t = term_j_10;
        t = w_4(o_14, p_14, t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        {
          ATerm q_14 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          q_14 = t;
          t = repeat_2_0(h_1, _id, t);
          t = q_14;
        }
      }
  }
  t = n_14;
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
  t = term_o_10;
  return(t);
}
static ATerm f_16 (ATerm d_15, ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  t = term_d_9;
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_15);
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATmakeAppl(sym_Tool_1, d_15));
  t = w_4(g_15, h_15, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_10 = ATgetFirst((ATermList) t);
      if(match_cons(q_10, sym__2))
        {
          ATerm u_10 = ATgetArgument(q_10, 0);
          f_15 = ATgetArgument(q_10, 1);
        }
      else
        _fail(t);
      {
        ATerm r_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_15;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_o_10;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_d_9;
  t = table_getlist_0_0(t);
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_15 = NULL,m_15 = NULL,o_15 = NULL;
      t = if_verbose5_1_0(n_1, t);
      t = xtc_load_0_0(t);
      o_15 = t;
      if(match_cons(t, sym__2))
        {
          j_15 = ATgetArgument(t, 0);
          m_15 = ATgetArgument(t, 1);
          {
            ATerm y_10 = t;
            int z_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_15 = NULL,y_15 = NULL,z_15 = NULL;
                t = term_d_9;
                y_15 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, j_15);
                z_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATmakeAppl(sym_Tool_1, j_15));
                t = w_4(y_15, z_15, t);
                {
                  static ATerm p_1 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_15 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((w_15 != NULL) && (w_15 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(p_1, t);
                }
                t = not_null(w_15);
                LocalPopChoice(z_10);
              }
            else
              {
                t = y_10;
                t = f_16(o_15, t);
              }
          }
        }
      else
        {
          t = f_16(o_15, t);
        }
      t = if_verbose5_1_0(q_1, t);
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm e_16 = NULL,w_3 = NULL,y_3 = NULL;
        e_16 = t;
        t = term_i_6;
        w_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_11), e_16), term_a_11);
        y_3 = t;
        t = SSL_printnl(w_3, y_3);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_11), e_16), term_a_11);
        t = if_verbose5_1_0(s_1, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm s_4 (ATerm c_28, ATerm d_28, ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  k_16 = t;
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        t = w_4(c_28, d_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_11 = ATgetFirst((ATermList) t);
            j_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_11);
        t = SSL_table_put(c_28, d_28, j_16);
        t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, j_16);
      }
    else
      {
        t = c_11;
        t = SSL_table_remove(c_28, d_28);
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
      }
  }
  t = k_16;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
  r_16 = t;
  t = o_80(t);
  q_16 = t;
  {
    ATerm g_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_16 = NULL;
        t = term_j_11;
        v_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_16, term_j_11);
        t = w_4(q_16, v_16, t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = g_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_16 = ATgetFirst((ATermList) t);
      m_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_11;
  s_16 = t;
  t = SSL_table_put(q_16, s_16, m_16);
  t = n_16;
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm x_16 = NULL;
      x_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_16, x_16);
      t = s_4(q_16, x_16, t);
      return(t);
    }
    t = map_1_0(u_1, t);
  }
  t = r_16;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_69(t);
      t = a_70(t);
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = a_70(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  f_17 = t;
  t = n_80(t);
  e_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_17, term_j_11);
  {
    ATerm p_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_17 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_11 = ATgetArgument(t, 0);
            ATerm z_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_11;
        o_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_17, term_j_11);
        t = w_4(e_17, o_17, t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = p_11;
        t = (ATerm) ATempty;
      }
  }
  g_17 = t;
  t = term_j_11;
  h_17 = t;
  t = (ATerm) ATinsert(CheckATermList(g_17), (ATerm) ATempty);
  i_17 = t;
  t = SSL_table_put(e_17, h_17, i_17);
  t = f_17;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_f_12;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm d_18 = NULL;
  d_18 = t;
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(d_18);
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = d_18;
      }
  }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_f_12;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm t_17 = NULL;
  static ATerm w_1 (ATerm t)
  {
    ATerm u_17 = NULL;
    u_17 = t;
    {
      ATerm i_12 = t;
      int j_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_17 = NULL,y_17 = NULL;
          t = term_f_12;
          v_17 = t;
          t = term_j_11;
          y_17 = t;
          t = term_k_12;
          t = w_4(v_17, y_17, t);
          LocalPopChoice(j_12);
        }
      else
        {
          t = i_12;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_17 != NULL) && (t_17 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_17 = ATgetFirst((ATermList) t);
        {
          ATerm m_12 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = t_17;
    t = map_1_0(z_1, t);
    t = u_17;
    t = end_scope_1_0(a_2, t);
    return(t);
  }
  t = begin_scope_1_0(v_1, t);
  t = restore_always_2_0(q_97, w_1, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  h_18 = t;
  t = term_n_12;
  t = whoami_0_0(t);
  k_18 = t;
  t = term_i_6;
  m_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_12), k_18), term_o_12);
  n_18 = t;
  t = SSL_printnl(m_18, n_18);
  t = term_s_12;
  l_18 = t;
  t = SSL_exit(l_18);
  t = h_18;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  if(match_string(t, "-k"))
    {
      t = p_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_18;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  t = SSL_string_to_int(q_18);
  r_18 = t;
  t = term_w_12;
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, r_18);
  t = z_4(s_18, r_18, t);
  t = q_18;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_2, c_2, g_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm u_18 = NULL;
  u_18 = t;
  if(match_string(t, "-S"))
    {
      t = u_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_18;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL;
  t = term_m_6;
  x_18 = t;
  t = term_y_12;
  y_18 = t;
  t = term_b_13;
  t = z_4(x_18, y_18, t);
  t = term_d_13;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_e_13;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,d_19 = NULL;
  z_18 = t;
  t = SSL_string_to_int(z_18);
  a_19 = t;
  t = term_m_6;
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_6, a_19);
  t = z_4(d_19, a_19, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_18);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_i_13;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  t = term_j_13;
  e_19 = t;
  t = term_n_12;
  f_19 = t;
  t = term_k_13;
  t = z_4(e_19, f_19, t);
  t = term_l_13;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_2, k_2, q_2, t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_2, u_2, v_2, t);
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            t = Option_3_0(z_2, a_3, e_3, t);
          }
      }
    }
  return(t);
}
static ATerm z_4 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm g_19 = NULL;
  t = term_l_6;
  g_19 = t;
  t = SSL_table_put(g_19, g_47, h_47);
  t = (ATerm) ATmakeAppl(sym__3, term_l_6, g_47, h_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
      t = term_n_12;
      t = e_0(t);
      l_19 = t;
      t = term_r_13;
      m_19 = t;
      t = term_s_13;
      n_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_13, term_s_13, l_19);
      t = x_4(m_19, n_19, l_19, t);
      _fail(t);
    }
  else
    {
      ATerm q_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_19 = ATgetFirst((ATermList) t);
          k_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_19;
      t = c_0(t);
      t = term_n_12;
      t = d_0(t);
      q_19 = t;
      t = (ATerm) ATinsert(CheckATermList(k_19), q_19);
    }
  return(t);
}
static ATerm x_4 (ATerm x_27, ATerm y_27, ATerm w_27, ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_14 = ATgetArgument(t, 0);
            ATerm b_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
        t = w_4(x_27, y_27, t);
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        t = (ATerm) ATempty;
      }
  }
  u_19 = t;
  t = (ATerm) ATinsert(CheckATermList(u_19), w_27);
  v_19 = t;
  t = SSL_table_put(x_27, y_27, v_19);
  t = t_19;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,o_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
      t = term_n_12;
      t = n_0(t);
      p_20 = t;
      t = term_r_13;
      q_20 = t;
      t = term_s_13;
      r_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_13, term_s_13, p_20);
      t = x_4(q_20, r_20, p_20, t);
      _fail(t);
    }
  else
    {
      ATerm y_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_20 = ATgetFirst((ATermList) t);
          l_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_20 = ATgetFirst((ATermList) t);
          o_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_20;
      t = k_0(t);
      t = m_20;
      t = l_0(t);
      y_20 = t;
      t = (ATerm) ATinsert(CheckATermList(o_20), y_20);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm a_21 = NULL;
  a_21 = t;
  if(match_string(t, "-o"))
    {
      t = a_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_21;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  b_21 = t;
  t = term_f_14;
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, b_21);
  t = z_4(c_21, b_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_21);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_i_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_3, j_3, l_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_12;
  t = whoami_0_0(t);
  d_21 = t;
  t = term_i_6;
  g_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_14), d_21);
  h_21 = t;
  t = SSL_printnl(g_21, h_21);
  t = term_s_12;
  f_21 = t;
  t = SSL_exit(f_21);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL;
  t = term_l_6;
  i_21 = t;
  t = term_l_14;
  j_21 = t;
  t = term_m_14;
  t = w_4(i_21, j_21, t);
  return(t);
}
static ATerm t_4 (ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm s_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_25, g_25);
      LocalPopChoice(u_14);
    }
  else
    {
      t = s_14;
      t = SSL_addr(f_25, g_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,p_21 = NULL;
  l_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_21;
      t = f_79(t);
    }
  else
    {
      ATerm y_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_21 = ATgetFirst((ATermList) t);
          p_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_21;
      t = foldr_2_0(f_79, g_79, t);
      y_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_21, y_21);
      t = g_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_y_12;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm d_5 = NULL,l_5 = NULL;
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(d_5, l_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_22 = NULL,d_4 = NULL,e_4 = NULL;
  t = times_0_0(t);
  e_4 = t;
  t = SSL_explode_term(e_4);
  if(match_cons(t, sym__2))
    {
      ATerm v_14 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4;
  t = foldr_2_0(m_3, q_3, t);
  d_22 = t;
  t = SSL_TicksToSeconds(d_22);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,h_23 = NULL;
  d_23 = t;
  if(match_cons(t, sym__2))
    {
      e_23 = ATgetArgument(t, 0);
      h_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_23;
        if((e_23 != t))
          {
            _fail(t);
          }
        t = d_23;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = (ATerm) ATmakeAppl(sym__2, e_23, h_23);
        {
          ATerm y_14 = t;
          int z_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_23, h_23);
              LocalPopChoice(z_14);
            }
          else
            {
              t = y_14;
              t = SSL_gtr(e_23, h_23);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_23, h_23);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
        t = term_l_6;
        u_23 = t;
        t = term_m_6;
        v_23 = t;
        t = term_n_6;
        t = w_4(u_23, v_23, t);
        t_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_23, term_s_12);
        t = geq_0_0(t);
        t = r_23;
        t = c_96(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = r_23;
      }
  }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,a_24 = NULL,b_24 = NULL;
  t = run_time_0_0(t);
  x_23 = t;
  t = term_n_12;
  t = whoami_0_0(t);
  y_23 = t;
  t = term_i_6;
  a_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_15), x_23), term_c_15), y_23);
  b_24 = t;
  t = SSL_printnl(a_24, b_24);
  t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_15), x_23), term_c_15), y_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_12;
  c_24 = t;
  t = SSL_exit(c_24);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  s_24 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_24;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_24 = ATgetArgument(t, 0);
          {
            ATerm d_6 = NULL,m_1 = NULL;
            t = SSLgetAnnotations(s_24);
            d_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_24);
            m_1 = t;
            t = SSLsetAnnotations(m_1, d_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_24;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_65 (ATerm), ATerm t)
{
  ATerm i_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_24 = NULL,g_24 = NULL;
      t = term_l_6;
      f_24 = t;
      t = term_l_15;
      g_24 = t;
      t = term_n_15;
      t = w_4(f_24, g_24, t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = i_15;
      t = fetch_1_0(t_3, t);
    }
  t = n_65(t);
  return(t);
}
ATerm map_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  static ATerm k_25 (ATerm t)
  {
    ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
    h_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_25;
      }
    else
      {
        ATerm s_6 = NULL,v_6 = NULL,x_6 = NULL,d_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_25 = ATgetFirst((ATermList) t);
            j_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_25);
        s_6 = t;
        t = i_25;
        t = z_71(t);
        v_6 = t;
        t = j_25;
        t = k_25(t);
        x_6 = t;
        t = (ATerm) ATinsert(CheckATermList(x_6), v_6);
        d_2 = t;
        t = SSLsetAnnotations(d_2, s_6);
      }
    return(t);
  }
  t = k_25(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_25 = ATgetFirst((ATermList) t);
      o_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_25 = NULL,t_25 = NULL;
        static ATerm u_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_25)), not_null(t_25));
          return(t);
        }
        t = o_25;
        t = i_0(t);
        if(((s_25 != NULL) && (s_25 != t)))
          _fail(t);
        else
          s_25 = t;
        t = n_25;
        t = g_0(t);
        if(((t_25 != NULL) && (t_25 != t)))
          _fail(t);
        else
          t_25 = t;
        t = o_25;
        t = reverse_acc_2_0(g_0, u_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_12;
      t = i_0(t);
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,x_3 = NULL;
  b_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_26);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_26);
  x_3 = t;
  t = SSLsetAnnotations(x_3, z_25);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm d_26 = NULL;
  d_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_26), term_p_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_25 = NULL,y_25 = NULL;
      t = term_l_6;
      x_25 = t;
      t = term_l_14;
      y_25 = t;
      t = term_m_14;
      t = w_4(x_25, y_25, t);
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      t = fetch_1_0(v_3, t);
    }
  t = term_s_15;
  t = echo_0_0(t);
  t = term_r_13;
  v_25 = t;
  t = term_s_13;
  w_25 = t;
  t = term_t_15;
  t = w_4(v_25, w_25, t);
  t = reverse_acc_2_0(_id, z_3, t);
  t = map_1_0(a_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_72 (ATerm), ATerm t)
{
  static ATerm g_27 (ATerm t)
  {
    ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
    d_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_27 = ATgetFirst((ATermList) t);
        f_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_15 = t;
      int v_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_7 = NULL,r_7 = NULL,g_4 = NULL;
          t = SSLgetAnnotations(d_27);
          n_7 = t;
          t = e_27;
          t = j_72(t);
          r_7 = t;
          t = (ATerm) ATinsert(CheckATermList(f_27), r_7);
          g_4 = t;
          t = SSLsetAnnotations(g_4, n_7);
          LocalPopChoice(v_15);
        }
      else
        {
          t = u_15;
          {
            ATerm a_8 = NULL,d_8 = NULL,h_4 = NULL;
            t = SSLgetAnnotations(d_27);
            a_8 = t;
            t = f_27;
            t = g_27(t);
            d_8 = t;
            t = (ATerm) ATinsert(CheckATermList(d_8), e_27);
            h_4 = t;
            t = SSLsetAnnotations(h_4, a_8);
          }
        }
    }
    return(t);
  }
  t = g_27(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  k_27 = t;
  {
    ATerm x_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_16 = ATgetFirst((ATermList) t);
                ATerm c_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_27;
          }
        LocalPopChoice(a_16);
      }
    else
      {
        t = x_15;
        t = (ATerm) ATinsert(ATempty, k_27);
      }
  }
  l_27 = t;
  t = term_d_16;
  m_27 = t;
  t = SSL_printnl(m_27, l_27);
  t = k_27;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  t = term_l_6;
  q_27 = t;
  t = term_l_14;
  r_27 = t;
  t = term_m_14;
  t = w_4(q_27, r_27, t);
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
  ATerm s_27 = NULL,t_27 = NULL;
  t = term_g_16;
  s_27 = t;
  t = term_n_12;
  t_27 = t;
  t = term_h_16;
  t = z_4(s_27, t_27, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_i_16;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,z_27 = NULL,a_28 = NULL;
  t = term_g_16;
  z_27 = t;
  t = term_n_12;
  a_28 = t;
  t = term_h_16;
  t = z_4(z_27, a_28, t);
  t = term_l_16;
  u_27 = t;
  t = term_n_12;
  v_27 = t;
  t = term_o_16;
  t = z_4(u_27, v_27, t);
  t = term_p_16;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_t_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_4, c_4, f_4, t);
      LocalPopChoice(w_16);
    }
  else
    {
      t = u_16;
      t = Option_3_0(u_4, v_4, a_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,y_4 = NULL;
  j_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_28 = ATgetFirst((ATermList) t);
      g_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_28);
  e_28 = t;
  t = f_28;
  t = x_58(t);
  h_28 = t;
  t = g_28;
  t = y_58(t);
  i_28 = t;
  t = (ATerm) ATinsert(CheckATermList(i_28), h_28);
  y_4 = t;
  t = SSLsetAnnotations(y_4, e_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,t_28 = NULL,z_28 = NULL,b_5 = NULL;
  o_28 = t;
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_17;
        t = s_86(t);
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
      }
  }
  t = o_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_28 = ATgetFirst((ATermList) t);
      r_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_28);
  p_28 = t;
  t = term_l_14;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, q_28);
  t = z_4(z_28, q_28, t);
  t = r_28;
  {
    static ATerm n_29 (ATerm t)
    {
      ATerm b_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_29 = NULL;
              c_29 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_29;
              LocalPopChoice(j_17);
            }
          else
            {
              t = d_17;
              t = s_86(t);
              t = Cons_2_0(_id, n_29, t);
            }
          LocalPopChoice(c_17);
        }
      else
        {
          t = b_17;
          {
            ATerm j_29 = NULL,k_29 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_29 = ATgetFirst((ATermList) t);
                k_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_29), (ATerm) ATmakeAppl(sym_Undefined_1, j_29));
          }
        }
      return(t);
    }
    t = n_29(t);
  }
  t_28 = t;
  t = (ATerm) ATinsert(CheckATermList(t_28), (ATerm) ATmakeAppl(sym_Program_1, q_28));
  b_5 = t;
  t = SSLsetAnnotations(b_5, p_28);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  if(match_string(t, "--help"))
    {
      t = b_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_30;
        }
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL;
  t = term_l_15;
  c_30 = t;
  t = term_n_12;
  d_30 = t;
  t = term_k_17;
  t = z_4(c_30, d_30, t);
  t = term_l_17;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_m_17;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
  w_29 = t;
  t = term_r_13;
  y_29 = t;
  t = term_s_13;
  z_29 = t;
  t = (ATerm) ATempty;
  a_30 = t;
  t = SSL_table_put(y_29, z_29, a_30);
  t = w_29;
  {
    static ATerm c_5 (ATerm t)
    {
      ATerm n_17 = t;
      int p_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_86(t);
          LocalPopChoice(p_17);
        }
      else
        {
          t = n_17;
          {
            ATerm q_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_5, i_5, m_5, t);
                LocalPopChoice(r_17);
              }
            else
              {
                t = q_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_5, t);
  }
  {
    ATerm s_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_30 = NULL;
        o_30 = t;
        {
          ATerm x_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_8 = NULL;
              t = o_30;
              {
                ATerm a_18 = t;
                int b_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_8 = NULL,r_8 = NULL;
                    t = term_l_6;
                    m_8 = t;
                    t = term_l_15;
                    r_8 = t;
                    t = term_n_15;
                    t = w_4(m_8, r_8, t);
                    LocalPopChoice(b_18);
                  }
                else
                  {
                    t = a_18;
                    t = fetch_1_0(n_5, t);
                  }
              }
              t = o_30;
              t = default_system_usage_0_0(t);
              t = term_y_12;
              l_8 = t;
              t = SSL_exit(l_8);
              LocalPopChoice(z_17);
            }
          else
            {
              t = x_17;
              {
                ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
                t = term_l_6;
                i_9 = t;
                t = term_g_16;
                j_9 = t;
                t = term_c_18;
                t = w_4(i_9, j_9, t);
                t = o_30;
                t = default_system_about_0_0(t);
                t = term_y_12;
                h_9 = t;
                t = SSL_exit(h_9);
              }
            }
        }
        LocalPopChoice(w_17);
      }
    else
      {
        t = s_17;
        {
          ATerm e_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
              static ATerm q_5 (ATerm t)
              {
                ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,k_5 = NULL;
                u_30 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_30);
                s_30 = t;
                t = t_30;
                if(((u_29 != NULL) && (u_29 != t)))
                  _fail(t);
                else
                  u_29 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_30);
                k_5 = t;
                t = SSLsetAnnotations(k_5, s_30);
                return(t);
              }
              t = fetch_1_0(q_5, t);
              t = term_i_6;
              q_30 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_29)), term_g_18);
              r_30 = t;
              t = SSL_printnl(q_30, r_30);
              t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_29)), term_g_18));
              t = default_system_usage_0_0(t);
              t = term_s_12;
              p_30 = t;
              t = SSL_exit(p_30);
              LocalPopChoice(f_18);
            }
          else
            {
              t = e_18;
            }
        }
      }
  }
  v_29 = t;
  t = term_r_13;
  x_29 = t;
  t = SSL_table_destroy(x_29);
  t = v_29;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm s_65 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  t = parse_options_1_0(p_65, t);
  z_30 = t;
  t = term_i_18;
  c_31 = t;
  t = SSL_table_create(c_31);
  t = term_i_18;
  a_31 = t;
  t = term_j_18;
  b_31 = t;
  t = SSL_table_put(a_31, b_31, z_30);
  t = z_30;
  t = r_65(t);
  {
    ATerm o_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_65, t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = o_18;
        {
          ATerm v_18 = t;
          int w_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_65(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_18);
            }
          else
            {
              t = v_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(t_5, v_5, w_5, t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm o_19 = t;
              int p_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(p_19);
                }
              else
                {
                  t = o_19;
                  t = keep_option_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = xtc_temp_files_1_0(x_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  t = term_r_19;
  e_31 = t;
  t = term_n_12;
  f_31 = t;
  t = term_s_19;
  t = z_4(e_31, f_31, t);
  t = term_w_19;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_x_19;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm h_31 = NULL;
  t = term_y_19;
  t = xtc_find_0_0(t);
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_31);
  t = copy_to_1_0(y_5, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_31 = NULL,j_31 = NULL;
      t = term_l_6;
      i_31 = t;
      t = term_f_14;
      j_31 = t;
      t = term_b_20;
      t = w_4(i_31, j_31, t);
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      t = term_d_16;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_5, default_usage_0_0, _id, s_5, t);
  return(t);
}
