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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_s_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_s_11;
ATerm term_i_11;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_e_7;
ATerm term_a_7;
ATerm term_w_6;
ATerm term_u_6;
ATerm term_p_6;
ATerm term_h_6;
ATerm term_z_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_w_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_g_9);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_i_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_u_6, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_d_12);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_b_14);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_y_15, term_d_12);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_e_16, term_d_12);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_d_12);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_d_12);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("boxstyle.css", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm v_4 (ATerm s_34, ATerm t_34, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm j_83 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm g_95 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm f_95 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm h_95 (ATerm), ATerm t);
static ATerm n_4 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm k_21, ATerm j_21, ATerm t);
static ATerm o_4 (ATerm o_75 (ATerm), ATerm g_21, ATerm f_21, ATerm t);
static ATerm m_0 (ATerm t);
static ATerm p_4 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t);
static ATerm q_4 (ATerm z_79 (ATerm), ATerm w_28, ATerm v_28, ATerm t);
static ATerm u_4 (ATerm w_13, ATerm x_13, ATerm t);
static ATerm a_9 (ATerm o_8, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_4 (ATerm x_38, ATerm t);
static ATerm a_5 (ATerm i_34, ATerm j_34, ATerm t);
static ATerm s_4 (ATerm f_14, ATerm g_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_11 (ATerm y_9, ATerm t);
static ATerm z_11 (ATerm e_10, ATerm g_10, ATerm h_10, ATerm t);
static ATerm a_12 (ATerm w_10, ATerm a_11, ATerm c_11, ATerm t);
static ATerm t_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm h_17 (ATerm i_16, ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm w_4 (ATerm u_27, ATerm v_27, ATerm t);
ATerm end_scope_1_0 (ATerm o_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_79 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm q_96 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_5 (ATerm n_46, ATerm o_46, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm p_27, ATerm q_27, ATerm o_27, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_4 (ATerm x_24, ATerm y_24, ATerm t);
ATerm foldr_2_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_95 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm need_help_1_0 (ATerm x_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm j_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_5 (ATerm g_29, ATerm h_29, ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_85 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm parse_options_1_0 (ATerm r_85 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_64 (ATerm), ATerm a_65 (ATerm), ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm w_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(x_5);
    }
  else
    {
      t = w_5;
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_z_5;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 = NULL;
      x_0 = t;
      t = SSL_is_string(x_0);
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      {
        ATerm d_6 = t;
        int e_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_0, t);
            LocalPopChoice(e_6);
          }
        else
          {
            t = d_6;
            {
              ATerm j_1 = NULL,t_1 = NULL,u_1 = NULL;
              j_1 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_1 = ATgetArgument(t, 0);
                  t = t_1;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_1 = ATgetArgument(t, 0);
                      t = t_1;
                      {
                        ATerm f_6 = t;
                        int g_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(g_6);
                          }
                        else
                          {
                            t = f_6;
                            t = debug_1_0(b_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_2 = NULL,f_2 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_1 = ATgetArgument(t, 0);
                          u_1 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_1;
                      t = eval_config_0_0(t);
                      d_2 = t;
                      t = u_1;
                      t = eval_config_0_0(t);
                      f_2 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_2, f_2);
                      t = a_5(d_2, f_2, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  k_2 = t;
  t = term_h_6;
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_6, k_2);
  t = b_5(l_2, k_2, t);
  {
    ATerm i_6 = t;
    int j_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_2 = NULL,o_2 = NULL;
        t = eval_config_0_0(t);
        m_2 = t;
        t = term_h_6;
        o_2 = t;
        t = SSL_table_put(o_2, k_2, m_2);
        t = m_2;
        LocalPopChoice(j_6);
      }
    else
      {
        t = i_6;
      }
  }
  return(t);
}
static ATerm v_4 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_copy(s_34, t_34);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL;
  l_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_6 = t;
    int l_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL;
        t = l_3;
        t = o_0(t);
        v_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = v_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = v_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, m_3, v_0);
        t = v_4(m_3, v_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_3);
        LocalPopChoice(l_6);
      }
    else
      {
        t = k_6;
        {
          ATerm m_6 = t;
          int n_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_1 = NULL;
              t = l_3;
              t = o_0(t);
              k_1 = t;
              {
                ATerm o_6 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_1 = NULL;
                    l_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = l_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = l_1;
                          }
                        else
                          {
                            t = l_1;
                            if((m_3 != t))
                              {
                                _fail(t);
                              }
                            t = l_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_6;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_3, k_1);
              t = v_4(m_3, k_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_3);
              LocalPopChoice(n_6);
            }
          else
            {
              t = m_6;
              t = l_3;
              t = o_0(t);
              if((m_3 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_3);
            }
        }
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
  s_3 = t;
  t = j_83(t);
  t_3 = t;
  t = term_p_6;
  u_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_3), t_3);
  v_3 = t;
  t = SSL_printnl(u_3, v_3);
  t = s_3;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm x_3 = NULL;
  static ATerm f_0 (ATerm t)
  {
    ATerm y_3 = NULL,b_4 = NULL;
    y_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), y_3);
    t = b_5(not_null(x_3), y_3, t);
    b_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_3, b_4);
    return(t);
  }
  if(((x_3 != NULL) && (x_3 != t)))
    _fail(t);
  else
    x_3 = t;
  t = SSL_table_keys(x_3);
  t = map_1_0(f_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm j_4 = NULL;
  j_4 = t;
  {
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_4 = NULL;
        t = term_u_6;
        t = get_config_0_0(t);
        m_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_4, term_w_6);
        t = geq_0_0(t);
        t = j_4;
        t = g_95(t);
        LocalPopChoice(t_6);
      }
    else
      {
        t = s_6;
        t = j_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_95 (ATerm), ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  {
    ATerm x_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_5 = NULL;
        t = term_u_6;
        t = get_config_0_0(t);
        g_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_5, term_a_7);
        t = geq_0_0(t);
        t = d_5;
        t = f_95(t);
        LocalPopChoice(z_6);
      }
    else
      {
        t = x_6;
        t = d_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm h_95 (ATerm), ATerm t)
{
  ATerm n_5 = NULL;
  n_5 = t;
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL;
        t = term_u_6;
        t = get_config_0_0(t);
        q_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_5, term_e_7);
        t = geq_0_0(t);
        t = n_5;
        t = h_95(t);
        LocalPopChoice(d_7);
      }
    else
      {
        t = c_7;
        t = n_5;
      }
  }
  return(t);
}
static ATerm n_4 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm k_21, ATerm j_21, ATerm t)
{
  t = s_75(t);
  {
    static ATerm h_0 (ATerm t)
    {
      ATerm y_5 = NULL;
      y_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_21, y_5);
      t = r_75(t);
      return(t);
    }
    t = fetch_1_0(h_0, t);
  }
  t = j_21;
  return(t);
}
static ATerm o_4 (ATerm o_75 (ATerm), ATerm g_21, ATerm f_21, ATerm t)
{
  static ATerm b_7 (ATerm t)
  {
    ATerm r_6 = NULL,v_6 = NULL,y_6 = NULL;
    r_6 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_6 = ATgetFirst((ATermList) t);
            y_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_6;
              {
                static ATerm j_0 (ATerm t)
                {
                  t = f_21;
                  return(t);
                }
                t = n_4(o_75, j_0, v_6, y_6, t);
              }
              t = b_7(t);
              LocalPopChoice(h_7);
            }
          else
            {
              t = g_7;
              {
                ATerm r_1 = NULL,x_1 = NULL,s_0 = NULL;
                t = SSLgetAnnotations(r_6);
                r_1 = t;
                t = y_6;
                t = b_7(t);
                x_1 = t;
                t = (ATerm) ATinsert(CheckATermList(x_1), v_6);
                s_0 = t;
                t = SSLsetAnnotations(s_0, r_1);
              }
            }
        }
      }
    return(t);
  }
  t = g_21;
  t = b_7(t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm b_8 = NULL;
  if(match_cons(t, sym__2))
    {
      b_8 = ATgetArgument(t, 0);
      if((b_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t)
{
  ATerm i_7 = NULL,r_7 = NULL,s_7 = NULL;
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_28, n_28);
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_7 = ATgetArgument(t, 0);
            ATerm o_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_28, n_28);
        t = b_5(m_28, n_28, t);
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        t = (ATerm) ATempty;
      }
  }
  s_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_7, o_28);
  t = o_4(m_0, s_7, o_28, t);
  r_7 = t;
  t = SSL_table_put(m_28, n_28, r_7);
  t = i_7;
  return(t);
}
static ATerm q_4 (ATerm z_79 (ATerm), ATerm w_28, ATerm v_28, ATerm t)
{
  static ATerm p_0 (ATerm t)
  {
    ATerm c_8 = NULL,e_8 = NULL;
    if(match_cons(t, sym__2))
      {
        c_8 = ATgetArgument(t, 0);
        e_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, w_28, c_8, e_8);
    t = z_79(t);
    return(t);
  }
  t = v_28;
  t = map_1_0(p_0, t);
  return(t);
}
static ATerm u_4 (ATerm w_13, ATerm x_13, ATerm t)
{
  t = SSL_access(w_13, x_13);
  return(t);
}
static ATerm a_9 (ATerm o_8, ATerm t)
{
  t = SSL_fclose(o_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  v_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_8 = ATgetArgument(t, 0);
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_8);
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            t = a_9(v_8, t);
          }
      }
    }
  else
    {
      t = a_9(v_8, t);
    }
  return(t);
}
static ATerm r_4 (ATerm x_38, ATerm t)
{
  t = SSL_read_term_from_stream(x_38);
  return(t);
}
static ATerm a_5 (ATerm i_34, ATerm j_34, ATerm t)
{
  t = SSL_strcat(i_34, j_34);
  return(t);
}
static ATerm s_4 (ATerm f_14, ATerm g_14, ATerm t)
{
  ATerm d_9 = NULL;
  t = SSL_fopen(f_14, g_14);
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_9);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_9 = NULL;
  t = SSL_stdin_stream();
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_9 = NULL;
  t = SSL_stdout_stream();
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_9 = NULL;
  t = SSL_stderr_stream();
  j_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_9);
  return(t);
}
static ATerm x_11 (ATerm y_9, ATerm t)
{
  ATerm z_9 = NULL;
  t = SSL_explode_term(y_9);
  if(match_cons(t, sym__2))
    {
      ATerm t_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_7 = ATgetArgument(t, 1);
        if(((ATgetType(u_7) == AT_LIST) && !(ATisEmpty(u_7))))
          {
            z_9 = ATgetFirst((ATermList) u_7);
            {
              ATerm w_7 = (ATerm) ATgetNext((ATermList) u_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_11 (ATerm e_10, ATerm g_10, ATerm h_10, ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL,u_10 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(h_10);
  p_10 = t;
  t = e_10;
  if(match_cons(t, sym_Path_1))
    {
      u_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_10, g_10);
  a_1 = t;
  t = SSLsetAnnotations(a_1, p_10);
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(n_10, o_10, t);
  return(t);
}
static ATerm a_12 (ATerm w_10, ATerm a_11, ATerm c_11, ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,k_11 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(c_11);
  f_11 = t;
  t = SSL_is_string(w_10);
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_11, a_11);
  b_1 = t;
  t = SSLsetAnnotations(b_1, f_11);
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(d_11, e_11, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm m_11 = NULL,r_11 = NULL,w_11 = NULL;
  m_11 = t;
  if(match_cons(t, sym__2))
    {
      r_11 = ATgetArgument(t, 0);
      w_11 = ATgetArgument(t, 1);
      {
        ATerm x_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_11(m_11, t);
            LocalPopChoice(z_7);
          }
        else
          {
            t = x_7;
            {
              ATerm a_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_11(r_11, w_11, m_11, t);
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = a_8;
                  t = a_12(r_11, w_11, m_11, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_11(m_11, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_12 = NULL,h_12 = NULL,k_12 = NULL,r_12 = NULL;
  r_12 = t;
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_12, term_h_8);
        t = t_4(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm w_2 = NULL,x_2 = NULL;
          t = term_i_8;
          x_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_8, r_12);
          t = a_5(x_2, r_12, t);
          w_2 = t;
          t = SSL_perror(w_2);
          _fail(t);
        }
      }
  }
  h_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(k_12, t);
  f_12 = t;
  t = h_12;
  t = fclose_0_0(t);
  t = f_12;
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
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_12 = NULL,v_12 = NULL;
      u_12 = t;
      t = (ATerm) ATinsert(ATempty, term_n_8);
      v_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_12, (ATerm) ATinsert(ATempty, term_n_8));
      t = u_4(u_12, v_12, t);
      LocalPopChoice(m_8);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_8;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_8 = t;
            if((PushChoice() == 0))
              {
                ATerm w_12 = NULL,x_12 = NULL;
                w_12 = t;
                t = (ATerm) ATinsert(ATempty, term_t_8);
                x_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_12, (ATerm) ATinsert(ATempty, term_t_8));
                t = u_4(w_12, x_12, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_8;
              }
            t = debug_1_0(q_0, t);
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            t = debug_1_0(r_0, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = debug_1_0(u_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_w_8;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = debug_1_0(y_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_x_8;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  t = term_p_6;
  n_13 = t;
  t = (ATerm) ATinsert(ATempty, term_z_8);
  o_13 = t;
  t = SSL_printnl(n_13, o_13);
  t = m_13;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,s_13 = NULL;
  if(match_cons(t, sym__3))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
      s_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_4(p_13, q_13, s_13, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm v_13 = NULL,a_14 = NULL,c_14 = NULL;
  v_13 = t;
  t = term_p_6;
  a_14 = t;
  t = (ATerm) ATinsert(ATempty, term_b_9);
  c_14 = t;
  t = SSL_printnl(a_14, c_14);
  t = v_13;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm e_14 = NULL,l_14 = NULL,n_14 = NULL;
  e_14 = t;
  t = term_p_6;
  l_14 = t;
  t = (ATerm) ATinsert(ATempty, term_z_8);
  n_14 = t;
  t = SSL_printnl(l_14, n_14);
  t = e_14;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
  y_12 = t;
  t = if_verbose5_1_0(t_0, t);
  {
    ATerm c_9 = t;
    if((PushChoice() == 0))
      {
        ATerm i_13 = NULL,k_13 = NULL;
        t = term_e_9;
        i_13 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_12);
        k_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATmakeAppl(sym_Imported_1, y_12));
        t = b_5(i_13, k_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_9;
      }
  }
  a_13 = t;
  t = term_e_9;
  f_13 = t;
  t = term_g_9;
  g_13 = t;
  t = (ATerm) ATinsert(ATempty, y_12);
  h_13 = t;
  t = SSL_table_put(f_13, g_13, h_13);
  t = a_13;
  t = if_verbose4_1_0(w_0, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(z_0, t);
  z_12 = t;
  t = term_e_9;
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, z_12);
  t = q_4(c_1, e_13, z_12, t);
  t = if_verbose6_1_0(d_1, t);
  t = term_e_9;
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, y_12);
  c_13 = t;
  t = (ATerm) ATempty;
  d_13 = t;
  t = SSL_table_put(b_13, c_13, d_13);
  t = (ATerm) ATmakeAppl(sym__3, term_e_9, (ATerm)ATmakeAppl(sym_Imported_1, y_12), (ATerm) ATempty);
  t = if_verbose4_1_0(e_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_15 = ATgetFirst((ATermList) t);
          h_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 = NULL,a_4 = NULL,c_4 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(f_15);
            q_3 = t;
            t = g_15;
            t = a_80(t);
            a_4 = t;
            t = h_15;
            t = filter_1_0(a_80, t);
            c_4 = t;
            t = (ATerm) ATinsert(CheckATermList(c_4), a_4);
            i_2 = t;
            t = SSLsetAnnotations(i_2, q_3);
            LocalPopChoice(l_9);
          }
        else
          {
            t = i_9;
            t = h_15;
            t = filter_1_0(a_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  static ATerm m_15 (ATerm t)
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_69(t);
        t = m_15(t);
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        t = p_69(t);
      }
    return(t);
  }
  t = m_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_9;
      t = get_config_0_0(t);
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_15 = NULL;
            t = term_u_9;
            o_15 = t;
            t = SSL_getenv(o_15);
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
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
  t = term_v_9;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  t = term_e_9;
  a_16 = t;
  t = term_w_9;
  b_16 = t;
  t = term_x_9;
  t = b_5(a_16, b_16, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm a_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_10;
      }
  }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_15 = NULL;
  t = if_verbose5_1_0(f_1, t);
  s_15 = t;
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_15 = NULL,u_15 = NULL;
        t = term_e_9;
        t_15 = t;
        t = term_g_9;
        u_15 = t;
        t = term_f_10;
        t = b_5(t_15, u_15, t);
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        {
          ATerm z_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          z_15 = t;
          t = repeat_2_0(h_1, _id, t);
          t = z_15;
        }
      }
  }
  t = s_15;
  t = if_verbose5_1_0(i_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_i_10;
  return(t);
}
static ATerm h_17 (ATerm i_16, ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,o_16 = NULL;
  t = term_e_9;
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_16);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATmakeAppl(sym_Tool_1, i_16));
  t = b_5(l_16, o_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_10 = ATgetFirst((ATermList) t);
      if(match_cons(j_10, sym__2))
        {
          ATerm l_10 = ATgetArgument(j_10, 0);
          k_16 = ATgetArgument(j_10, 1);
        }
      else
        _fail(t);
      {
        ATerm k_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_16;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_i_10;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_e_9;
  t = table_getlist_0_0(t);
  t = debug_1_0(w_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_16 = NULL,q_16 = NULL,u_16 = NULL;
      t = if_verbose5_1_0(n_1, t);
      t = xtc_load_0_0(t);
      u_16 = t;
      if(match_cons(t, sym__2))
        {
          p_16 = ATgetArgument(t, 0);
          q_16 = ATgetArgument(t, 1);
          {
            ATerm s_10 = t;
            int t_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_16 = NULL,a_17 = NULL,b_17 = NULL;
                t = term_e_9;
                a_17 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, p_16);
                b_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATmakeAppl(sym_Tool_1, p_16));
                t = b_5(a_17, b_17, t);
                {
                  static ATerm p_1 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((q_16 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((y_16 != NULL) && (y_16 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(p_1, t);
                }
                t = not_null(y_16);
                LocalPopChoice(t_10);
              }
            else
              {
                t = s_10;
                t = h_17(u_16, t);
              }
          }
        }
      else
        {
          t = h_17(u_16, t);
        }
      t = if_verbose5_1_0(q_1, t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm g_17 = NULL,l_4 = NULL,z_4 = NULL;
        g_17 = t;
        t = term_p_6;
        l_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_10), g_17), term_v_10);
        z_4 = t;
        t = SSL_printnl(l_4, z_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_10), g_17), term_v_10);
        t = if_verbose5_1_0(v_1, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm w_4 (ATerm u_27, ATerm v_27, ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  k_17 = t;
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_27, v_27);
        t = b_5(u_27, v_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_11 = ATgetFirst((ATermList) t);
            j_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_10);
        t = SSL_table_put(u_27, v_27, j_17);
        t = (ATerm) ATmakeAppl(sym__3, u_27, v_27, j_17);
      }
    else
      {
        t = y_10;
        t = SSL_table_remove(u_27, v_27);
        t = (ATerm) ATmakeAppl(sym__2, u_27, v_27);
      }
  }
  t = k_17;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  q_17 = t;
  t = o_79(t);
  p_17 = t;
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_17 = NULL;
        t = term_i_11;
        s_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_17, term_i_11);
        t = b_5(p_17, s_17, t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_17 = ATgetFirst((ATermList) t);
      n_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_11;
  r_17 = t;
  t = SSL_table_put(p_17, r_17, n_17);
  t = o_17;
  {
    static ATerm y_1 (ATerm t)
    {
      ATerm t_17 = NULL;
      t_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_17, t_17);
      t = w_4(p_17, t_17, t);
      return(t);
    }
    t = map_1_0(y_1, t);
  }
  t = q_17;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm t)
{
  ATerm j_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_69(t);
      t = k_69(t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = j_11;
      t = k_69(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
  w_17 = t;
  t = n_79(t);
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_17, term_i_11);
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_11 = ATgetArgument(t, 0);
            ATerm q_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_11;
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_17, term_i_11);
        t = b_5(v_17, e_18, t);
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = (ATerm) ATempty;
      }
  }
  x_17 = t;
  t = term_i_11;
  y_17 = t;
  t = (ATerm) ATinsert(CheckATermList(x_17), (ATerm) ATempty);
  z_17 = t;
  t = SSL_table_put(v_17, y_17, z_17);
  t = w_17;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_s_11;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(p_18);
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = p_18;
      }
  }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  ATerm h_18 = NULL;
  static ATerm a_2 (ATerm t)
  {
    ATerm i_18 = NULL;
    i_18 = t;
    {
      ATerm v_11 = t;
      int y_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_18 = NULL,k_18 = NULL;
          t = term_s_11;
          j_18 = t;
          t = term_i_11;
          k_18 = t;
          t = term_b_12;
          t = b_5(j_18, k_18, t);
          LocalPopChoice(y_11);
        }
      else
        {
          t = v_11;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_18 != NULL) && (h_18 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_18 = ATgetFirst((ATermList) t);
        {
          ATerm c_12 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_18;
    t = map_1_0(b_2, t);
    t = i_18;
    t = end_scope_1_0(c_2, t);
    return(t);
  }
  t = begin_scope_1_0(z_1, t);
  t = restore_always_2_0(q_96, a_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,x_18 = NULL,y_18 = NULL;
  t_18 = t;
  t = term_d_12;
  t = whoami_0_0(t);
  u_18 = t;
  t = term_p_6;
  x_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_12), u_18), term_e_12);
  y_18 = t;
  t = SSL_printnl(x_18, y_18);
  t = term_i_12;
  v_18 = t;
  t = SSL_exit(v_18);
  t = t_18;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  if(match_string(t, "-k"))
    {
      t = b_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_19;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  t = SSL_string_to_int(d_19);
  e_19 = t;
  t = term_j_12;
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, e_19);
  t = e_5(f_19, e_19, t);
  t = d_19;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_2, g_2, h_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  if(match_string(t, "-S"))
    {
      t = n_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_19;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL;
  t = term_u_6;
  o_19 = t;
  t = term_m_12;
  p_19 = t;
  t = term_n_12;
  t = e_5(o_19, p_19, t);
  t = term_o_12;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_p_12;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  t = SSL_string_to_int(r_19);
  s_19 = t;
  t = term_u_6;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_6, s_19);
  t = e_5(t_19, s_19, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_19);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_q_12;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm u_19 = NULL,w_19 = NULL;
  t = term_s_12;
  u_19 = t;
  t = term_d_12;
  w_19 = t;
  t = term_t_12;
  t = e_5(u_19, w_19, t);
  t = term_j_13;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_l_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_2, n_2, p_2, t);
      LocalPopChoice(t_13);
    }
  else
    {
      t = r_13;
      {
        ATerm u_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_2, r_2, s_2, t);
            LocalPopChoice(y_13);
          }
        else
          {
            t = u_13;
            t = Option_3_0(t_2, u_2, v_2, t);
          }
      }
    }
  return(t);
}
static ATerm e_5 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm x_19 = NULL;
  t = term_h_6;
  x_19 = t;
  t = SSL_table_put(x_19, n_46, o_46);
  t = (ATerm) ATmakeAppl(sym__3, term_h_6, n_46, o_46);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
      t = term_d_12;
      t = e_0(t);
      e_20 = t;
      t = term_z_13;
      f_20 = t;
      t = term_b_14;
      g_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_13, term_b_14, e_20);
      t = c_5(f_20, g_20, e_20, t);
      _fail(t);
    }
  else
    {
      ATerm k_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_20 = ATgetFirst((ATermList) t);
          d_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_20;
      t = c_0(t);
      t = term_d_12;
      t = d_0(t);
      k_20 = t;
      t = (ATerm) ATinsert(CheckATermList(d_20), k_20);
    }
  return(t);
}
static ATerm c_5 (ATerm p_27, ATerm q_27, ATerm o_27, ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_27, q_27);
  {
    ATerm d_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_14 = ATgetArgument(t, 0);
            ATerm j_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_27, q_27);
        t = b_5(p_27, q_27, t);
        LocalPopChoice(h_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATempty;
      }
  }
  n_20 = t;
  t = (ATerm) ATinsert(CheckATermList(n_20), o_27);
  o_20 = t;
  t = SSL_table_put(p_27, q_27, o_20);
  t = m_20;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,h_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_21 = NULL,r_21 = NULL,u_21 = NULL;
      t = term_d_12;
      t = n_0(t);
      o_21 = t;
      t = term_z_13;
      r_21 = t;
      t = term_b_14;
      u_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_13, term_b_14, o_21);
      t = c_5(r_21, u_21, o_21, t);
      _fail(t);
    }
  else
    {
      ATerm a_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_20 = ATgetFirst((ATermList) t);
          a_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_21 = ATgetFirst((ATermList) t);
          h_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_20;
      t = k_0(t);
      t = b_21;
      t = l_0(t);
      a_22 = t;
      t = (ATerm) ATinsert(CheckATermList(h_21), a_22);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  if(match_string(t, "-o"))
    {
      t = c_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_22;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm g_22 = NULL,k_22 = NULL;
  g_22 = t;
  t = term_k_14;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_14, g_22);
  t = e_5(k_22, g_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_22);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_12;
  t = whoami_0_0(t);
  l_22 = t;
  t = term_p_6;
  n_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_14), l_22);
  o_22 = t;
  t = SSL_printnl(n_22, o_22);
  t = term_i_12;
  m_22 = t;
  t = SSL_exit(m_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_14;
  t = get_config_0_0(t);
  return(t);
}
static ATerm x_4 (ATerm x_24, ATerm y_24, ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_24, y_24);
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      t = SSL_addr(x_24, y_24);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_22;
      t = f_78(t);
    }
  else
    {
      ATerm x_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_22 = ATgetFirst((ATermList) t);
          u_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_22;
      t = foldr_2_0(f_78, g_78, t);
      x_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_22, x_22);
      t = g_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_m_12;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(u_5, v_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_23 = NULL,m_5 = NULL,o_5 = NULL;
  t = times_0_0(t);
  o_5 = t;
  t = SSL_explode_term(o_5);
  if(match_cons(t, sym__2))
    {
      ATerm s_14 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5;
  t = foldr_2_0(c_3, e_3, t);
  d_23 = t;
  t = SSL_TicksToSeconds(d_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  o_23 = t;
  if(match_cons(t, sym__2))
    {
      p_23 = ATgetArgument(t, 0);
      q_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_23;
        if((p_23 != t))
          {
            _fail(t);
          }
        t = o_23;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = (ATerm) ATmakeAppl(sym__2, p_23, q_23);
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_23, q_23);
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              t = SSL_gtr(p_23, q_23);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_23, q_23);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm u_23 = NULL;
  u_23 = t;
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL;
        t = term_u_6;
        t = get_config_0_0(t);
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_23, term_i_12);
        t = geq_0_0(t);
        t = u_23;
        t = c_95(t);
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = u_23;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,b_24 = NULL,c_24 = NULL;
  t = run_time_0_0(t);
  y_23 = t;
  t = term_d_12;
  t = whoami_0_0(t);
  z_23 = t;
  t = term_p_6;
  b_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_15), y_23), term_z_14), z_23);
  c_24 = t;
  t = SSL_printnl(b_24, c_24);
  t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_15), y_23), term_z_14), z_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_12;
  d_24 = t;
  t = SSL_exit(d_24);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  m_24 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_24;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_24 = ATgetArgument(t, 0);
          {
            ATerm q_6 = NULL,b_3 = NULL;
            t = SSLgetAnnotations(m_24);
            q_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_24);
            b_3 = t;
            t = SSLsetAnnotations(b_3, q_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_24;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_64 (ATerm), ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_15;
      t = get_config_0_0(t);
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      t = fetch_1_0(i_3, t);
    }
  t = x_64(t);
  return(t);
}
ATerm map_1_0 (ATerm j_71 (ATerm), ATerm t)
{
  static ATerm e_25 (ATerm t)
  {
    ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
    b_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_25;
      }
    else
      {
        ATerm f_7 = NULL,j_7 = NULL,k_7 = NULL,d_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_25 = ATgetFirst((ATermList) t);
            d_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_25);
        f_7 = t;
        t = c_25;
        t = j_71(t);
        j_7 = t;
        t = d_25;
        t = e_25(t);
        k_7 = t;
        t = (ATerm) ATinsert(CheckATermList(k_7), j_7);
        d_3 = t;
        t = SSLsetAnnotations(d_3, f_7);
      }
    return(t);
  }
  t = e_25(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_25 = ATgetFirst((ATermList) t);
      i_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_25 = NULL,n_25 = NULL;
        static ATerm k_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_25)), not_null(n_25));
          return(t);
        }
        t = i_25;
        t = i_0(t);
        if(((m_25 != NULL) && (m_25 != t)))
          _fail(t);
        else
          m_25 = t;
        t = h_25;
        t = g_0(t);
        if(((n_25 != NULL) && (n_25 != t)))
          _fail(t);
        else
          n_25 = t;
        t = i_25;
        t = reverse_acc_2_0(g_0, k_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_12;
      t = i_0(t);
    }
  return(t);
}
static ATerm b_5 (ATerm g_29, ATerm h_29, ATerm t)
{
  t = SSL_table_get(g_29, h_29);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,f_3 = NULL;
  t_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_25);
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_25);
  f_3 = t;
  t = SSLsetAnnotations(f_3, r_25);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_25), term_e_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL;
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_14;
      t = get_config_0_0(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      t = fetch_1_0(n_3, t);
    }
  t = term_k_15;
  t = echo_0_0(t);
  t = term_z_13;
  p_25 = t;
  t = term_b_14;
  q_25 = t;
  t = term_l_15;
  t = b_5(p_25, q_25, t);
  t = reverse_acc_2_0(_id, o_3, t);
  t = map_1_0(p_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_71 (ATerm), ATerm t)
{
  static ATerm y_26 (ATerm t)
  {
    ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
    v_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_26 = ATgetFirst((ATermList) t);
        x_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_15 = t;
      int p_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_7 = NULL,y_7 = NULL,h_3 = NULL;
          t = SSLgetAnnotations(v_26);
          v_7 = t;
          t = w_26;
          t = t_71(t);
          y_7 = t;
          t = (ATerm) ATinsert(CheckATermList(x_26), y_7);
          h_3 = t;
          t = SSLsetAnnotations(h_3, v_7);
          LocalPopChoice(p_15);
        }
      else
        {
          t = n_15;
          {
            ATerm s_8 = NULL,y_8 = NULL,j_3 = NULL;
            t = SSLgetAnnotations(v_26);
            s_8 = t;
            t = x_26;
            t = y_26(t);
            y_8 = t;
            t = (ATerm) ATinsert(CheckATermList(y_8), w_26);
            j_3 = t;
            t = SSLsetAnnotations(j_3, s_8);
          }
        }
    }
    return(t);
  }
  t = y_26(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_15 = ATgetFirst((ATermList) t);
                ATerm w_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_27;
          }
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        t = (ATerm) ATinsert(ATempty, c_27);
      }
  }
  d_27 = t;
  t = term_x_15;
  e_27 = t;
  t = SSL_printnl(e_27, d_27);
  t = c_27;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  t = term_y_15;
  i_27 = t;
  t = term_d_12;
  j_27 = t;
  t = term_c_16;
  t = e_5(i_27, j_27, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_d_16;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  t = term_y_15;
  m_27 = t;
  t = term_d_12;
  n_27 = t;
  t = term_c_16;
  t = e_5(m_27, n_27, t);
  t = term_e_16;
  k_27 = t;
  t = term_d_12;
  l_27 = t;
  t = term_f_16;
  t = e_5(k_27, l_27, t);
  t = term_g_16;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, z_3, d_4, t);
      LocalPopChoice(m_16);
    }
  else
    {
      t = j_16;
      t = Option_3_0(e_4, f_4, g_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,r_3 = NULL;
  z_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_27 = ATgetFirst((ATermList) t);
      w_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_27);
  r_27 = t;
  t = s_27;
  t = i_58(t);
  x_27 = t;
  t = w_27;
  t = j_58(t);
  y_27 = t;
  t = (ATerm) ATinsert(CheckATermList(y_27), x_27);
  r_3 = t;
  t = SSLsetAnnotations(r_3, r_27);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,j_28 = NULL,k_28 = NULL,t_5 = NULL;
  e_28 = t;
  {
    ATerm n_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_16;
        t = s_85(t);
        LocalPopChoice(r_16);
      }
    else
      {
        t = n_16;
      }
  }
  t = e_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_28 = ATgetFirst((ATermList) t);
      h_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  f_28 = t;
  t = term_p_14;
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_14, g_28);
  t = e_5(k_28, g_28, t);
  t = h_28;
  {
    static ATerm d_29 (ATerm t)
    {
      ATerm t_16 = t;
      int v_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_28 = NULL;
              s_28 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_28;
              LocalPopChoice(x_16);
            }
          else
            {
              t = w_16;
              t = s_85(t);
              t = Cons_2_0(_id, d_29, t);
            }
          LocalPopChoice(v_16);
        }
      else
        {
          t = t_16;
          {
            ATerm z_28 = NULL,a_29 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_28 = ATgetFirst((ATermList) t);
                a_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_29), (ATerm) ATmakeAppl(sym_Undefined_1, z_28));
          }
        }
      return(t);
    }
    t = d_29(t);
  }
  j_28 = t;
  t = (ATerm) ATinsert(CheckATermList(j_28), (ATerm) ATmakeAppl(sym_Program_1, g_28));
  t_5 = t;
  t = SSLsetAnnotations(t_5, f_28);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  if(match_string(t, "--help"))
    {
      t = r_29;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_29;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_29;
        }
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  t = term_d_15;
  s_29 = t;
  t = term_d_12;
  t_29 = t;
  t = term_z_16;
  t = e_5(s_29, t_29, t);
  t = term_c_17;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_d_17;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  m_29 = t;
  t = term_z_13;
  o_29 = t;
  t = term_b_14;
  p_29 = t;
  t = (ATerm) ATempty;
  q_29 = t;
  t = SSL_table_put(o_29, p_29, q_29);
  t = m_29;
  {
    static ATerm h_4 (ATerm t)
    {
      ATerm e_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_85(t);
          LocalPopChoice(f_17);
        }
      else
        {
          t = e_17;
          {
            ATerm i_17 = t;
            int l_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_4, k_4, y_4, t);
                LocalPopChoice(l_17);
              }
            else
              {
                t = i_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_4, t);
  }
  {
    ATerm m_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_30 = NULL;
        a_30 = t;
        {
          ATerm a_18 = t;
          int b_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_9 = NULL;
              t = a_30;
              {
                ATerm c_18 = t;
                int d_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_d_15;
                    t = get_config_0_0(t);
                    LocalPopChoice(d_18);
                  }
                else
                  {
                    t = c_18;
                    t = fetch_1_0(f_5, t);
                  }
              }
              t = a_30;
              t = default_system_usage_0_0(t);
              t = term_m_12;
              k_9 = t;
              t = SSL_exit(k_9);
              LocalPopChoice(b_18);
            }
          else
            {
              t = a_18;
              {
                ATerm o_9 = NULL;
                t = term_y_15;
                t = get_config_0_0(t);
                t = a_30;
                t = default_system_about_0_0(t);
                t = term_m_12;
                o_9 = t;
                t = SSL_exit(o_9);
              }
            }
        }
        LocalPopChoice(u_17);
      }
    else
      {
        t = m_17;
        {
          ATerm f_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
              static ATerm h_5 (ATerm t)
              {
                ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,c_6 = NULL;
                g_30 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_30);
                e_30 = t;
                t = f_30;
                if(((k_29 != NULL) && (k_29 != t)))
                  _fail(t);
                else
                  k_29 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_30);
                c_6 = t;
                t = SSLsetAnnotations(c_6, e_30);
                return(t);
              }
              t = fetch_1_0(h_5, t);
              t = term_p_6;
              c_30 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_29)), term_l_18);
              d_30 = t;
              t = SSL_printnl(c_30, d_30);
              t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_29)), term_l_18));
              t = default_system_usage_0_0(t);
              t = term_i_12;
              b_30 = t;
              t = SSL_exit(b_30);
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
            }
        }
      }
  }
  l_29 = t;
  t = term_z_13;
  n_29 = t;
  t = SSL_table_destroy(n_29);
  t = l_29;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_64 (ATerm), ATerm a_65 (ATerm), ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  t = parse_options_1_0(z_64, t);
  l_30 = t;
  t = term_m_18;
  o_30 = t;
  t = SSL_table_create(o_30);
  t = term_m_18;
  m_30 = t;
  t = term_n_18;
  n_30 = t;
  t = SSL_table_put(m_30, n_30, l_30);
  t = l_30;
  t = b_65(t);
  {
    ATerm o_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_65, t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = o_18;
        {
          ATerm r_18 = t;
          int s_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_65(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_18);
            }
          else
            {
              t = r_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm w_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      LocalPopChoice(z_18);
    }
  else
    {
      t = w_18;
      {
        ATerm a_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(k_5, l_5, p_5, t);
            LocalPopChoice(c_19);
          }
        else
          {
            t = a_19;
            {
              ATerm g_19 = t;
              int h_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(h_19);
                }
              else
                {
                  t = g_19;
                  t = keep_option_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = xtc_temp_files_1_0(r_5, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  t = term_i_19;
  q_30 = t;
  t = term_d_12;
  r_30 = t;
  t = term_j_19;
  t = e_5(q_30, r_30, t);
  t = term_k_19;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_l_19;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm t_30 = NULL;
  t = term_m_19;
  t = xtc_find_0_0(t);
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_30);
  t = copy_to_1_0(s_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm q_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_14;
      t = get_config_0_0(t);
      LocalPopChoice(v_19);
    }
  else
    {
      t = q_19;
      t = term_x_15;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(i_5, default_usage_0_0, _id, j_5, t);
  return(t);
}
