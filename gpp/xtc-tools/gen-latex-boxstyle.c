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
ATerm term_z_19;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_s_18;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_l_17;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_b_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_a_12;
ATerm term_q_11;
ATerm term_i_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_o_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_o_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_e_8;
ATerm term_g_7;
ATerm term_b_7;
ATerm term_w_6;
ATerm term_t_6;
ATerm term_p_6;
ATerm term_g_6;
ATerm term_y_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_g_9, term_w_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_g_9, term_i_9);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_i_11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_t_6, term_h_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_e_12);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, term_d_14, term_e_14);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_e_12);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_k_16, term_e_12);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_e_12);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_e_12);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("boxenv.sty", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm z_4 (ATerm g_34, ATerm h_34, ATerm t);
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm u_4 (ATerm q_34, ATerm r_34, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm l_82 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_94 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_94 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_94 (ATerm), ATerm t);
static ATerm m_4 (ATerm w_74 (ATerm), ATerm x_74 (ATerm), ATerm i_21, ATerm h_21, ATerm t);
static ATerm n_4 (ATerm t_74 (ATerm), ATerm e_21, ATerm d_21, ATerm t);
static ATerm h_0 (ATerm t);
static ATerm o_4 (ATerm k_28, ATerm l_28, ATerm m_28, ATerm t);
static ATerm p_4 (ATerm b_79 (ATerm), ATerm u_28, ATerm t_28, ATerm t);
static ATerm t_4 (ATerm w_13, ATerm x_13, ATerm t);
static ATerm z_8 (ATerm n_8, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_4 (ATerm v_38, ATerm t);
static ATerm r_4 (ATerm f_14, ATerm g_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_11 (ATerm v_9, ATerm t);
static ATerm w_11 (ATerm c_10, ATerm d_10, ATerm j_10, ATerm t);
static ATerm x_11 (ATerm w_10, ATerm y_10, ATerm z_10, ATerm t);
static ATerm s_4 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm c_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm y_16 (ATerm x_15, ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm v_4 (ATerm s_27, ATerm t_27, ATerm t);
ATerm end_scope_1_0 (ATerm q_78 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_78 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_95 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_5 (ATerm t_45, ATerm u_45, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_5 (ATerm n_27, ATerm o_27, ATerm m_27, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_4 (ATerm v_24, ATerm w_24, ATerm t);
ATerm foldr_2_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_93 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm need_help_1_0 (ATerm d_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_70 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm e_29, ATerm f_29, ATerm t);
static ATerm o_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_57 (ATerm), ATerm p_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_84 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm parse_options_1_0 (ATerm t_84 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm i_64 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm z_4 (ATerm g_34, ATerm h_34, ATerm t)
{
  t = SSL_strcat(g_34, h_34);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm v_5 = t;
  int w_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(w_5);
    }
  else
    {
      t = v_5;
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_y_5;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 = NULL;
      x_0 = t;
      t = SSL_is_string(x_0);
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
        ATerm c_6 = t;
        int d_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_0, t);
            LocalPopChoice(d_6);
          }
        else
          {
            t = c_6;
            {
              ATerm j_1 = NULL,s_1 = NULL,t_1 = NULL;
              j_1 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_1 = ATgetArgument(t, 0);
                  t = s_1;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_1 = ATgetArgument(t, 0);
                      t = s_1;
                      {
                        ATerm e_6 = t;
                        int f_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(f_6);
                          }
                        else
                          {
                            t = e_6;
                            t = debug_1_0(b_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_2 = NULL,e_2 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_1 = ATgetArgument(t, 0);
                          t_1 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_1;
                      t = eval_config_0_0(t);
                      c_2 = t;
                      t = t_1;
                      t = eval_config_0_0(t);
                      e_2 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_2, e_2);
                      t = z_4(c_2, e_2, t);
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
  ATerm j_2 = NULL,k_2 = NULL;
  j_2 = t;
  t = term_g_6;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_6, j_2);
  t = a_5(k_2, j_2, t);
  {
    ATerm h_6 = t;
    int i_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_2 = NULL,n_2 = NULL;
        t = eval_config_0_0(t);
        l_2 = t;
        t = term_g_6;
        n_2 = t;
        t = SSL_table_put(n_2, j_2, l_2);
        t = l_2;
        LocalPopChoice(i_6);
      }
    else
      {
        t = h_6;
      }
  }
  return(t);
}
static ATerm u_4 (ATerm q_34, ATerm r_34, ATerm t)
{
  t = SSL_copy(q_34, r_34);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL;
  k_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_6 = t;
    int l_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL;
        t = k_3;
        t = r_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, l_3, v_0);
        t = u_4(l_3, v_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_3);
        LocalPopChoice(l_6);
      }
    else
      {
        t = j_6;
        {
          ATerm m_6 = t;
          int n_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_1 = NULL;
              t = k_3;
              t = r_0(t);
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
                            if((l_3 != t))
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
              t = (ATerm) ATmakeAppl(sym__2, l_3, k_1);
              t = u_4(l_3, k_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_3);
              LocalPopChoice(n_6);
            }
          else
            {
              t = m_6;
              t = k_3;
              t = r_0(t);
              if((l_3 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_3);
            }
        }
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm l_82 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  r_3 = t;
  t = l_82(t);
  s_3 = t;
  t = term_p_6;
  t_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_3), s_3);
  u_3 = t;
  t = SSL_printnl(t_3, u_3);
  t = r_3;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_3 = NULL;
  static ATerm c_0 (ATerm t)
  {
    ATerm x_3 = NULL,a_4 = NULL;
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_3), x_3);
    t = a_5(not_null(w_3), x_3, t);
    a_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_3, a_4);
    return(t);
  }
  if(((w_3 != NULL) && (w_3 != t)))
    _fail(t);
  else
    w_3 = t;
  t = SSL_table_keys(w_3);
  t = map_1_0(c_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm i_4 = NULL;
  i_4 = t;
  {
    ATerm r_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 = NULL;
        t = term_t_6;
        t = get_config_0_0(t);
        l_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_w_6);
        t = geq_0_0(t);
        t = i_4;
        t = b_94(t);
        LocalPopChoice(s_6);
      }
    else
      {
        t = r_6;
        t = i_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm c_5 = NULL;
  c_5 = t;
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_5 = NULL;
        t = term_t_6;
        t = get_config_0_0(t);
        f_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_5, term_b_7);
        t = geq_0_0(t);
        t = c_5;
        t = a_94(t);
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        t = c_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm m_5 = NULL;
  m_5 = t;
  {
    ATerm d_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_5 = NULL;
        t = term_t_6;
        t = get_config_0_0(t);
        p_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_5, term_g_7);
        t = geq_0_0(t);
        t = m_5;
        t = c_94(t);
        LocalPopChoice(f_7);
      }
    else
      {
        t = d_7;
        t = m_5;
      }
  }
  return(t);
}
static ATerm m_4 (ATerm w_74 (ATerm), ATerm x_74 (ATerm), ATerm i_21, ATerm h_21, ATerm t)
{
  t = x_74(t);
  {
    static ATerm e_0 (ATerm t)
    {
      ATerm x_5 = NULL;
      x_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, x_5);
      t = w_74(t);
      return(t);
    }
    t = fetch_1_0(e_0, t);
  }
  t = h_21;
  return(t);
}
static ATerm n_4 (ATerm t_74 (ATerm), ATerm e_21, ATerm d_21, ATerm t)
{
  static ATerm a_7 (ATerm t)
  {
    ATerm q_6 = NULL,u_6 = NULL,x_6 = NULL;
    q_6 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_6 = ATgetFirst((ATermList) t);
            x_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_7 = t;
          int j_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_6;
              {
                static ATerm f_0 (ATerm t)
                {
                  t = d_21;
                  return(t);
                }
                t = m_4(t_74, f_0, u_6, x_6, t);
              }
              t = a_7(t);
              LocalPopChoice(j_7);
            }
          else
            {
              t = i_7;
              {
                ATerm r_1 = NULL,y_1 = NULL,s_0 = NULL;
                t = SSLgetAnnotations(q_6);
                r_1 = t;
                t = x_6;
                t = a_7(t);
                y_1 = t;
                t = (ATerm) ATinsert(CheckATermList(y_1), u_6);
                s_0 = t;
                t = SSLsetAnnotations(s_0, r_1);
              }
            }
        }
      }
    return(t);
  }
  t = e_21;
  t = a_7(t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      if((a_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_4 (ATerm k_28, ATerm l_28, ATerm m_28, ATerm t)
{
  ATerm h_7 = NULL,q_7 = NULL,r_7 = NULL;
  h_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_28, l_28);
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_7 = ATgetArgument(t, 0);
            ATerm o_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_28, l_28);
        t = a_5(k_28, l_28, t);
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        t = (ATerm) ATempty;
      }
  }
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_7, m_28);
  t = n_4(h_0, r_7, m_28, t);
  q_7 = t;
  t = SSL_table_put(k_28, l_28, q_7);
  t = h_7;
  return(t);
}
static ATerm p_4 (ATerm b_79 (ATerm), ATerm u_28, ATerm t_28, ATerm t)
{
  static ATerm j_0 (ATerm t)
  {
    ATerm b_8 = NULL,d_8 = NULL;
    if(match_cons(t, sym__2))
      {
        b_8 = ATgetArgument(t, 0);
        d_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, u_28, b_8, d_8);
    t = b_79(t);
    return(t);
  }
  t = t_28;
  t = map_1_0(j_0, t);
  return(t);
}
static ATerm t_4 (ATerm w_13, ATerm x_13, ATerm t)
{
  t = SSL_access(w_13, x_13);
  return(t);
}
static ATerm z_8 (ATerm n_8, ATerm t)
{
  t = SSL_fclose(n_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL;
  u_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_8 = ATgetArgument(t, 0);
      {
        ATerm p_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_8);
            LocalPopChoice(s_7);
          }
        else
          {
            t = p_7;
            t = z_8(u_8, t);
          }
      }
    }
  else
    {
      t = z_8(u_8, t);
    }
  return(t);
}
static ATerm q_4 (ATerm v_38, ATerm t)
{
  t = SSL_read_term_from_stream(v_38);
  return(t);
}
static ATerm r_4 (ATerm f_14, ATerm g_14, ATerm t)
{
  ATerm b_9 = NULL;
  t = SSL_fopen(f_14, g_14);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_9);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_9 = NULL;
  t = SSL_stdin_stream();
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_9 = NULL;
  t = SSL_stdout_stream();
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_9 = NULL;
  t = SSL_stderr_stream();
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_9);
  return(t);
}
static ATerm v_11 (ATerm v_9, ATerm t)
{
  ATerm y_9 = NULL;
  t = SSL_explode_term(v_9);
  if(match_cons(t, sym__2))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_7 = ATgetArgument(t, 1);
        if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
          {
            y_9 = ATgetFirst((ATermList) v_7);
            {
              ATerm w_7 = (ATerm) ATgetNext((ATermList) v_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_11 (ATerm c_10, ATerm d_10, ATerm j_10, ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,r_10 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(j_10);
  m_10 = t;
  t = c_10;
  if(match_cons(t, sym_Path_1))
    {
      r_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_10, d_10);
  a_1 = t;
  t = SSLsetAnnotations(a_1, m_10);
  if(match_cons(t, sym__2))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(k_10, l_10, t);
  return(t);
}
static ATerm x_11 (ATerm w_10, ATerm y_10, ATerm z_10, ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,h_11 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(z_10);
  c_11 = t;
  t = SSL_is_string(w_10);
  h_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_11, y_10);
  b_1 = t;
  t = SSLsetAnnotations(b_1, c_11);
  if(match_cons(t, sym__2))
    {
      a_11 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(a_11, b_11, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm n_11 = NULL,s_11 = NULL,t_11 = NULL;
  n_11 = t;
  if(match_cons(t, sym__2))
    {
      s_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
      {
        ATerm x_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_11(n_11, t);
            LocalPopChoice(y_7);
          }
        else
          {
            t = x_7;
            {
              ATerm z_7 = t;
              int c_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_11(s_11, t_11, n_11, t);
                  LocalPopChoice(c_8);
                }
              else
                {
                  t = z_7;
                  t = x_11(s_11, t_11, n_11, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_11(n_11, t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_e_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_12 = NULL,d_12 = NULL,g_12 = NULL;
  ATerm f_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_12 = NULL;
      h_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_12, term_i_8);
      t = s_4(t);
      LocalPopChoice(h_8);
    }
  else
    {
      t = f_8;
      t = debug_1_0(m_0, t);
      _fail(t);
    }
  d_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(g_12, t);
  b_12 = t;
  t = d_12;
  t = fclose_0_0(t);
  t = b_12;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm t_0 (ATerm t)
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
      ATerm j_12 = NULL,k_12 = NULL;
      j_12 = t;
      t = (ATerm) ATinsert(ATempty, term_o_8);
      k_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_12, (ATerm) ATinsert(ATempty, term_o_8));
      t = t_4(j_12, k_12, t);
      LocalPopChoice(m_8);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_8;
      {
        ATerm p_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_8 = t;
            if((PushChoice() == 0))
              {
                ATerm n_12 = NULL,o_12 = NULL;
                n_12 = t;
                t = (ATerm) ATinsert(ATempty, term_v_8);
                o_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, n_12, (ATerm) ATinsert(ATempty, term_v_8));
                t = t_4(n_12, o_12, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_8;
              }
            t = debug_1_0(q_0, t);
            LocalPopChoice(r_8);
          }
        else
          {
            t = p_8;
            t = debug_1_0(t_0, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = debug_1_0(w_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_w_8;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = debug_1_0(z_0, t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_x_8;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  t = term_p_6;
  c_13 = t;
  t = (ATerm) ATinsert(ATempty, term_y_8);
  d_13 = t;
  t = SSL_printnl(c_13, d_13);
  t = b_13;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm e_13 = NULL,g_13 = NULL,i_13 = NULL;
  if(match_cons(t, sym__3))
    {
      e_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
      i_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_4(e_13, g_13, i_13, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
  j_13 = t;
  t = term_p_6;
  k_13 = t;
  t = (ATerm) ATinsert(ATempty, term_a_9);
  l_13 = t;
  t = SSL_printnl(k_13, l_13);
  t = j_13;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm m_13 = NULL,o_13 = NULL,r_13 = NULL;
  m_13 = t;
  t = term_p_6;
  o_13 = t;
  t = (ATerm) ATinsert(ATempty, term_y_8);
  r_13 = t;
  t = SSL_printnl(o_13, r_13);
  t = m_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
  p_12 = t;
  t = if_verbose5_1_0(u_0, t);
  {
    ATerm e_9 = t;
    if((PushChoice() == 0))
      {
        ATerm z_12 = NULL,a_13 = NULL;
        t = term_g_9;
        z_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, p_12);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_9, (ATerm) ATmakeAppl(sym_Imported_1, p_12));
        t = a_5(z_12, a_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_9;
      }
  }
  r_12 = t;
  t = term_g_9;
  w_12 = t;
  t = term_i_9;
  x_12 = t;
  t = (ATerm) ATinsert(ATempty, p_12);
  y_12 = t;
  t = SSL_table_put(w_12, x_12, y_12);
  t = r_12;
  t = if_verbose4_1_0(y_0, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(c_1, t);
  q_12 = t;
  t = term_g_9;
  v_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, q_12);
  t = p_4(d_1, v_12, q_12, t);
  t = if_verbose6_1_0(e_1, t);
  t = term_g_9;
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, p_12);
  t_12 = t;
  t = (ATerm) ATempty;
  u_12 = t;
  t = SSL_table_put(s_12, t_12, u_12);
  t = (ATerm) ATmakeAppl(sym__3, term_g_9, (ATerm)ATmakeAppl(sym_Imported_1, p_12), (ATerm) ATempty);
  t = if_verbose4_1_0(f_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_14;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_14 = ATgetFirst((ATermList) t);
          y_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 = NULL,m_3 = NULL,p_3 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(w_14);
            x_2 = t;
            t = x_14;
            t = c_79(t);
            m_3 = t;
            t = y_14;
            t = filter_1_0(c_79, t);
            p_3 = t;
            t = (ATerm) ATinsert(CheckATermList(p_3), m_3);
            h_2 = t;
            t = SSLsetAnnotations(h_2, x_2);
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            t = y_14;
            t = filter_1_0(c_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm t)
{
  static ATerm b_15 (ATerm t)
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_68(t);
        t = b_15(t);
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        t = v_68(t);
      }
    return(t);
  }
  t = b_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_9;
      t = get_config_0_0(t);
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_15 = NULL;
            t = term_t_9;
            c_15 = t;
            t = SSL_getenv(c_15);
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
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
  t = term_u_9;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm l_15 = NULL,o_15 = NULL;
  t = term_g_9;
  l_15 = t;
  t = term_w_9;
  o_15 = t;
  t = term_x_9;
  t = a_5(l_15, o_15, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm z_9 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_9;
      }
  }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = debug_1_0(n_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_15 = NULL;
  t = if_verbose5_1_0(g_1, t);
  g_15 = t;
  {
    ATerm b_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_15 = NULL,i_15 = NULL;
        t = term_g_9;
        h_15 = t;
        t = term_i_9;
        i_15 = t;
        t = term_f_10;
        t = a_5(h_15, i_15, t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = b_10;
        {
          ATerm k_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          k_15 = t;
          t = repeat_2_0(i_1, _id, t);
          t = k_15;
        }
      }
  }
  t = g_15;
  t = if_verbose5_1_0(m_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_g_10;
  return(t);
}
static ATerm y_16 (ATerm x_15, ATerm t)
{
  ATerm z_15 = NULL,c_16 = NULL,d_16 = NULL;
  t = term_g_9;
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_15);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, (ATerm) ATmakeAppl(sym_Tool_1, x_15));
  t = a_5(c_16, d_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_10 = ATgetFirst((ATermList) t);
      if(match_cons(h_10, sym__2))
        {
          ATerm n_10 = ATgetArgument(h_10, 0);
          z_15 = ATgetArgument(h_10, 1);
        }
      else
        _fail(t);
      {
        ATerm i_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_15;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_g_10;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_g_9;
  t = table_getlist_0_0(t);
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
      t = if_verbose5_1_0(o_1, t);
      t = xtc_load_0_0(t);
      g_16 = t;
      if(match_cons(t, sym__2))
        {
          e_16 = ATgetArgument(t, 0);
          f_16 = ATgetArgument(t, 1);
          {
            ATerm s_10 = t;
            int t_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_16 = NULL,m_16 = NULL,p_16 = NULL;
                t = term_g_9;
                m_16 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, e_16);
                p_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_9, (ATerm) ATmakeAppl(sym_Tool_1, e_16));
                t = a_5(m_16, p_16, t);
                {
                  static ATerm q_1 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((f_16 != ATgetArgument(t, 0)))
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
                  t = fetch_1_0(q_1, t);
                }
                t = not_null(l_16);
                LocalPopChoice(t_10);
              }
            else
              {
                t = s_10;
                t = y_16(g_16, t);
              }
          }
        }
      else
        {
          t = y_16(g_16, t);
        }
      t = if_verbose5_1_0(u_1, t);
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm x_16 = NULL,e_4 = NULL,f_4 = NULL;
        x_16 = t;
        t = term_p_6;
        e_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_10), x_16), term_u_10);
        f_4 = t;
        t = SSL_printnl(e_4, f_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_10), x_16), term_u_10);
        t = if_verbose5_1_0(w_1, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm v_4 (ATerm s_27, ATerm t_27, ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  b_17 = t;
  {
    ATerm x_10 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
        t = a_5(s_27, t_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_11 = ATgetFirst((ATermList) t);
            a_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_11);
        t = SSL_table_put(s_27, t_27, a_17);
        t = (ATerm) ATmakeAppl(sym__3, s_27, t_27, a_17);
      }
    else
      {
        t = x_10;
        t = SSL_table_remove(s_27, t_27);
        t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
      }
  }
  t = b_17;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  f_17 = t;
  t = q_78(t);
  e_17 = t;
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_17 = NULL;
        t = term_i_11;
        j_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_17, term_i_11);
        t = a_5(e_17, j_17, t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_17 = ATgetFirst((ATermList) t);
      c_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_11;
  g_17 = t;
  t = SSL_table_put(e_17, g_17, c_17);
  t = d_17;
  {
    static ATerm z_1 (ATerm t)
    {
      ATerm k_17 = NULL;
      k_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_17, k_17);
      t = v_4(e_17, k_17, t);
      return(t);
    }
    t = map_1_0(z_1, t);
  }
  t = f_17;
  return(t);
}
ATerm restore_always_2_0 (ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_68(t);
      t = q_68(t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      t = q_68(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_78 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  n_17 = t;
  t = p_78(t);
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_17, term_i_11);
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_17 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_11 = ATgetArgument(t, 0);
            ATerm p_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_11;
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_17, term_i_11);
        t = a_5(m_17, u_17, t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATempty;
      }
  }
  o_17 = t;
  t = term_i_11;
  p_17 = t;
  t = (ATerm) ATinsert(CheckATermList(o_17), (ATerm) ATempty);
  q_17 = t;
  t = SSL_table_put(m_17, p_17, q_17);
  t = n_17;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_q_11;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm e_18 = NULL;
  e_18 = t;
  {
    ATerm r_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_18);
        LocalPopChoice(u_11);
      }
    else
      {
        t = r_11;
        t = e_18;
      }
  }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm x_17 = NULL;
  static ATerm b_2 (ATerm t)
  {
    ATerm z_17 = NULL;
    z_17 = t;
    {
      ATerm y_11 = t;
      int z_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_18 = NULL,b_18 = NULL;
          t = term_q_11;
          a_18 = t;
          t = term_i_11;
          b_18 = t;
          t = term_a_12;
          t = a_5(a_18, b_18, t);
          LocalPopChoice(z_11);
        }
      else
        {
          t = y_11;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_17 != NULL) && (x_17 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_17 = ATgetFirst((ATermList) t);
        {
          ATerm c_12 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = x_17;
    t = map_1_0(d_2, t);
    t = z_17;
    t = end_scope_1_0(f_2, t);
    return(t);
  }
  t = begin_scope_1_0(a_2, t);
  t = restore_always_2_0(l_95, b_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  j_18 = t;
  t = term_e_12;
  t = whoami_0_0(t);
  k_18 = t;
  t = term_p_6;
  m_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_12), k_18), term_f_12);
  n_18 = t;
  t = SSL_printnl(m_18, n_18);
  t = term_l_12;
  l_18 = t;
  t = SSL_exit(l_18);
  t = j_18;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm q_18 = NULL;
  q_18 = t;
  if(match_string(t, "-k"))
    {
      t = q_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_18;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm r_18 = NULL,t_18 = NULL,u_18 = NULL;
  r_18 = t;
  t = SSL_string_to_int(r_18);
  t_18 = t;
  t = term_m_12;
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, t_18);
  t = d_5(u_18, t_18, t);
  t = r_18;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_2, i_2, m_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  if(match_string(t, "-S"))
    {
      t = x_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_18;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL;
  t = term_t_6;
  z_18 = t;
  t = term_h_13;
  a_19 = t;
  t = term_n_13;
  t = d_5(z_18, a_19, t);
  t = term_p_13;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm b_19 = NULL,i_19 = NULL,j_19 = NULL;
  b_19 = t;
  t = SSL_string_to_int(b_19);
  i_19 = t;
  t = term_t_6;
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, i_19);
  t = d_5(j_19, i_19, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_19);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  t = term_t_13;
  k_19 = t;
  t = term_e_12;
  l_19 = t;
  t = term_u_13;
  t = d_5(k_19, l_19, t);
  t = term_v_13;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_2, p_2, q_2, t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_2, s_2, t_2, t);
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            t = Option_3_0(u_2, v_2, w_2, t);
          }
      }
    }
  return(t);
}
static ATerm d_5 (ATerm t_45, ATerm u_45, ATerm t)
{
  ATerm n_19 = NULL;
  t = term_g_6;
  n_19 = t;
  t = SSL_table_put(n_19, t_45, u_45);
  t = (ATerm) ATmakeAppl(sym__3, term_g_6, t_45, u_45);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,s_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_19 = NULL,w_19 = NULL,x_19 = NULL;
      t = term_e_12;
      t = i_0(t);
      t_19 = t;
      t = term_d_14;
      w_19 = t;
      t = term_e_14;
      x_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_14, term_e_14, t_19);
      t = b_5(w_19, x_19, t_19, t);
      _fail(t);
    }
  else
    {
      ATerm a_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_19 = ATgetFirst((ATermList) t);
          s_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_19;
      t = d_0(t);
      t = term_e_12;
      t = g_0(t);
      a_20 = t;
      t = (ATerm) ATinsert(CheckATermList(s_19), a_20);
    }
  return(t);
}
static ATerm b_5 (ATerm n_27, ATerm o_27, ATerm m_27, ATerm t)
{
  ATerm c_20 = NULL,e_20 = NULL,f_20 = NULL;
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_27, o_27);
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_14 = ATgetArgument(t, 0);
            ATerm k_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_27, o_27);
        t = a_5(n_27, o_27, t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = (ATerm) ATempty;
      }
  }
  e_20 = t;
  t = (ATerm) ATinsert(CheckATermList(e_20), m_27);
  f_20 = t;
  t = SSL_table_put(n_27, o_27, f_20);
  t = c_20;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,r_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
      t = term_e_12;
      t = p_0(t);
      u_20 = t;
      t = term_d_14;
      v_20 = t;
      t = term_e_14;
      w_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_14, term_e_14, u_20);
      t = b_5(v_20, w_20, u_20, t);
      _fail(t);
    }
  else
    {
      ATerm n_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_20 = ATgetFirst((ATermList) t);
          n_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_20 = ATgetFirst((ATermList) t);
          r_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_20;
      t = n_0(t);
      t = o_20;
      t = o_0(t);
      n_21 = t;
      t = (ATerm) ATinsert(CheckATermList(r_20), n_21);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  if(match_string(t, "-o"))
    {
      t = r_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_21;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  s_21 = t;
  t = term_l_14;
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, s_21);
  t = d_5(t_21, s_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_21);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, b_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,c_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_12;
  t = whoami_0_0(t);
  w_21 = t;
  t = term_p_6;
  y_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_14), w_21);
  c_22 = t;
  t = SSL_printnl(y_21, c_22);
  t = term_l_12;
  x_21 = t;
  t = SSL_exit(x_21);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_14;
  t = get_config_0_0(t);
  return(t);
}
static ATerm w_4 (ATerm v_24, ATerm w_24, ATerm t)
{
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_24, w_24);
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      t = SSL_addr(v_24, w_24);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
  h_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_22;
      t = h_77(t);
    }
  else
    {
      ATerm m_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_22 = ATgetFirst((ATermList) t);
          j_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_22;
      t = foldr_2_0(h_77, i_77, t);
      m_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_22, m_22);
      t = i_77(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_h_13;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm l_5 = NULL,n_5 = NULL;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(l_5, n_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_22 = NULL,h_5 = NULL,i_5 = NULL;
  t = times_0_0(t);
  i_5 = t;
  t = SSL_explode_term(i_5);
  if(match_cons(t, sym__2))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5;
  t = foldr_2_0(d_3, f_3, t);
  r_22 = t;
  t = SSL_TicksToSeconds(r_22);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
  f_23 = t;
  if(match_cons(t, sym__2))
    {
      g_23 = ATgetArgument(t, 0);
      h_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_23;
        if((g_23 != t))
          {
            _fail(t);
          }
        t = f_23;
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = (ATerm) ATmakeAppl(sym__2, g_23, h_23);
        {
          ATerm u_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_23, h_23);
              LocalPopChoice(v_14);
            }
          else
            {
              t = u_14;
              t = SSL_gtr(g_23, h_23);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_23, h_23);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL;
        t = term_t_6;
        t = get_config_0_0(t);
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_23, term_l_12);
        t = geq_0_0(t);
        t = l_23;
        t = x_93(t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = l_23;
      }
  }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,s_23 = NULL,t_23 = NULL;
  t = run_time_0_0(t);
  p_23 = t;
  t = term_e_12;
  t = whoami_0_0(t);
  q_23 = t;
  t = term_p_6;
  s_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_15), p_23), term_d_15), q_23);
  t_23 = t;
  t = SSL_printnl(s_23, t_23);
  t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_15), p_23), term_d_15), q_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_13;
  u_23 = t;
  t = SSL_exit(u_23);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  d_24 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_24;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_24 = ATgetArgument(t, 0);
          {
            ATerm k_6 = NULL,a_3 = NULL;
            t = SSLgetAnnotations(d_24);
            k_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_24);
            a_3 = t;
            t = SSLsetAnnotations(a_3, k_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_24;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_64 (ATerm), ATerm t)
{
  ATerm f_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_15;
      t = get_config_0_0(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = f_15;
      t = fetch_1_0(j_3, t);
    }
  t = d_64(t);
  return(t);
}
ATerm map_1_0 (ATerm p_70 (ATerm), ATerm t)
{
  static ATerm t_24 (ATerm t)
  {
    ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
    q_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_24;
      }
    else
      {
        ATerm v_6 = NULL,c_7 = NULL,e_7 = NULL,c_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_24 = ATgetFirst((ATermList) t);
            s_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_24);
        v_6 = t;
        t = r_24;
        t = p_70(t);
        c_7 = t;
        t = s_24;
        t = t_24(t);
        e_7 = t;
        t = (ATerm) ATinsert(CheckATermList(e_7), c_7);
        c_3 = t;
        t = SSLsetAnnotations(c_3, v_6);
      }
    return(t);
  }
  t = t_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_24 = ATgetFirst((ATermList) t);
      z_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_25 = NULL,e_25 = NULL;
        static ATerm n_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_25)), not_null(e_25));
          return(t);
        }
        t = z_24;
        t = l_0(t);
        if(((d_25 != NULL) && (d_25 != t)))
          _fail(t);
        else
          d_25 = t;
        t = y_24;
        t = k_0(t);
        if(((e_25 != NULL) && (e_25 != t)))
          _fail(t);
        else
          e_25 = t;
        t = z_24;
        t = reverse_acc_2_0(k_0, n_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_12;
      t = l_0(t);
    }
  return(t);
}
static ATerm a_5 (ATerm e_29, ATerm f_29, ATerm t)
{
  t = SSL_table_get(e_29, f_29);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,e_3 = NULL;
  k_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_25);
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_25);
  e_3 = t;
  t = SSLsetAnnotations(e_3, i_25);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm m_25 = NULL;
  m_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_25), term_n_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL;
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_14;
      t = get_config_0_0(t);
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      t = fetch_1_0(o_3, t);
    }
  t = term_r_15;
  t = echo_0_0(t);
  t = term_d_14;
  g_25 = t;
  t = term_e_14;
  h_25 = t;
  t = term_s_15;
  t = a_5(g_25, h_25, t);
  t = reverse_acc_2_0(_id, v_3, t);
  t = map_1_0(y_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_70 (ATerm), ATerm t)
{
  static ATerm p_26 (ATerm t)
  {
    ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
    m_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_26 = ATgetFirst((ATermList) t);
        o_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_7 = NULL,t_7 = NULL,g_3 = NULL;
          t = SSLgetAnnotations(m_26);
          n_7 = t;
          t = n_26;
          t = z_70(t);
          t_7 = t;
          t = (ATerm) ATinsert(CheckATermList(o_26), t_7);
          g_3 = t;
          t = SSLsetAnnotations(g_3, n_7);
          LocalPopChoice(u_15);
        }
      else
        {
          t = t_15;
          {
            ATerm g_8 = NULL,q_8 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(m_26);
            g_8 = t;
            t = o_26;
            t = p_26(t);
            q_8 = t;
            t = (ATerm) ATinsert(CheckATermList(q_8), n_26);
            i_3 = t;
            t = SSLsetAnnotations(i_3, g_8);
          }
        }
    }
    return(t);
  }
  t = p_26(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_15 = ATgetFirst((ATermList) t);
                ATerm a_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_26;
          }
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        t = (ATerm) ATinsert(ATempty, t_26);
      }
  }
  u_26 = t;
  t = term_b_16;
  v_26 = t;
  t = SSL_printnl(v_26, u_26);
  t = t_26;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL;
  t = term_h_16;
  z_26 = t;
  t = term_e_12;
  a_27 = t;
  t = term_i_16;
  t = d_5(z_26, a_27, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  t = term_h_16;
  d_27 = t;
  t = term_e_12;
  e_27 = t;
  t = term_i_16;
  t = d_5(d_27, e_27, t);
  t = term_k_16;
  b_27 = t;
  t = term_e_12;
  c_27 = t;
  t = term_n_16;
  t = d_5(b_27, c_27, t);
  t = term_o_16;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_q_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, b_4, c_4, t);
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      t = Option_3_0(d_4, g_4, h_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_57 (ATerm), ATerm p_57 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,q_3 = NULL;
  k_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_27 = ATgetFirst((ATermList) t);
      h_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_27);
  f_27 = t;
  t = g_27;
  t = o_57(t);
  i_27 = t;
  t = h_27;
  t = p_57(t);
  j_27 = t;
  t = (ATerm) ATinsert(CheckATermList(j_27), i_27);
  q_3 = t;
  t = SSLsetAnnotations(q_3, f_27);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,a_28 = NULL,b_28 = NULL,k_5 = NULL;
  v_27 = t;
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_16;
        t = u_84(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
      }
  }
  t = v_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_27 = ATgetFirst((ATermList) t);
      y_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_27);
  w_27 = t;
  t = term_o_14;
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_14, x_27);
  t = d_5(b_28, x_27, t);
  t = y_27;
  {
    static ATerm q_28 (ATerm t)
    {
      ATerm w_16 = t;
      int z_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_17 = t;
          int i_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_28 = NULL;
              e_28 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_28;
              LocalPopChoice(i_17);
            }
          else
            {
              t = h_17;
              t = u_84(t);
              t = Cons_2_0(_id, q_28, t);
            }
          LocalPopChoice(z_16);
        }
      else
        {
          t = w_16;
          {
            ATerm h_28 = NULL,i_28 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_28 = ATgetFirst((ATermList) t);
                i_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_28), (ATerm) ATmakeAppl(sym_Undefined_1, h_28));
          }
        }
      return(t);
    }
    t = q_28(t);
  }
  a_28 = t;
  t = (ATerm) ATinsert(CheckATermList(a_28), (ATerm) ATmakeAppl(sym_Program_1, x_27));
  k_5 = t;
  t = SSLsetAnnotations(k_5, w_27);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  if(match_string(t, "--help"))
    {
      t = i_29;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_29;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_29;
        }
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  t = term_m_15;
  j_29 = t;
  t = term_e_12;
  k_29 = t;
  t = term_l_17;
  t = d_5(j_29, k_29, t);
  t = term_r_17;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,g_29 = NULL,h_29 = NULL;
  b_29 = t;
  t = term_d_14;
  d_29 = t;
  t = term_e_14;
  g_29 = t;
  t = (ATerm) ATempty;
  h_29 = t;
  t = SSL_table_put(d_29, g_29, h_29);
  t = b_29;
  {
    static ATerm j_4 (ATerm t)
    {
      ATerm t_17 = t;
      int v_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_84(t);
          LocalPopChoice(v_17);
        }
      else
        {
          t = t_17;
          {
            ATerm w_17 = t;
            int y_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_4, x_4, y_4, t);
                LocalPopChoice(y_17);
              }
            else
              {
                t = w_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_4, t);
  }
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_29 = NULL;
        r_29 = t;
        {
          ATerm f_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_9 = NULL;
              t = r_29;
              {
                ATerm h_18 = t;
                int i_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_15;
                    t = get_config_0_0(t);
                    LocalPopChoice(i_18);
                  }
                else
                  {
                    t = h_18;
                    t = fetch_1_0(e_5, t);
                  }
              }
              t = r_29;
              t = default_system_usage_0_0(t);
              t = term_h_13;
              c_9 = t;
              t = SSL_exit(c_9);
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
              {
                ATerm j_9 = NULL;
                t = term_h_16;
                t = get_config_0_0(t);
                t = r_29;
                t = default_system_about_0_0(t);
                t = term_h_13;
                j_9 = t;
                t = SSL_exit(j_9);
              }
            }
        }
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        {
          ATerm o_18 = t;
          int p_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
              static ATerm g_5 (ATerm t)
              {
                ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,b_6 = NULL;
                x_29 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_29 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_29);
                v_29 = t;
                t = w_29;
                if(((z_28 != NULL) && (z_28 != t)))
                  _fail(t);
                else
                  z_28 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_29);
                b_6 = t;
                t = SSLsetAnnotations(b_6, v_29);
                return(t);
              }
              t = fetch_1_0(g_5, t);
              t = term_p_6;
              t_29 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_28)), term_s_18);
              u_29 = t;
              t = SSL_printnl(t_29, u_29);
              t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_28)), term_s_18));
              t = default_system_usage_0_0(t);
              t = term_l_12;
              s_29 = t;
              t = SSL_exit(s_29);
              LocalPopChoice(p_18);
            }
          else
            {
              t = o_18;
            }
        }
      }
  }
  a_29 = t;
  t = term_d_14;
  c_29 = t;
  t = SSL_table_destroy(c_29);
  t = a_29;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm i_64 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  t = parse_options_1_0(f_64, t);
  c_30 = t;
  t = term_v_18;
  f_30 = t;
  t = SSL_table_create(f_30);
  t = term_v_18;
  d_30 = t;
  t = term_w_18;
  e_30 = t;
  t = SSL_table_put(d_30, e_30, c_30);
  t = c_30;
  t = h_64(t);
  {
    ATerm y_18 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_64, t);
        LocalPopChoice(c_19);
      }
    else
      {
        t = y_18;
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_64(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm h_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(q_5, r_5, s_5, t);
            LocalPopChoice(m_19);
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
static ATerm o_5 (ATerm t)
{
  t = xtc_temp_files_1_0(t_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  t = term_r_19;
  h_30 = t;
  t = term_e_12;
  i_30 = t;
  t = term_u_19;
  t = d_5(h_30, i_30, t);
  t = term_v_19;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_y_19;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm k_30 = NULL;
  t = term_z_19;
  t = xtc_find_0_0(t);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_30);
  t = copy_to_1_0(u_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm b_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_14;
      t = get_config_0_0(t);
      LocalPopChoice(d_20);
    }
  else
    {
      t = b_20;
      t = term_b_16;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_5, default_usage_0_0, _id, o_5, t);
  return(t);
}
