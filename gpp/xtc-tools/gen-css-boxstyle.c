#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_z_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_w_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_w_11;
ATerm term_l_11;
ATerm term_c_11;
ATerm term_x_10;
ATerm term_p_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_r_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_r_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_f_7;
ATerm term_a_7;
ATerm term_v_6;
ATerm term_s_6;
ATerm term_o_6;
ATerm term_f_6;
ATerm term_x_5;
void init_constant_terms (void)
{
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_y_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_k_9);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_l_11);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_p_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_l_12);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_g_14, term_h_14);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_d_16, term_l_12);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__2, term_l_16, term_l_12);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_h_15, term_l_12);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_l_12);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("boxstyle.css", 0, ATtrue));
}
ATerm y_4 (ATerm a_31, ATerm b_31, ATerm);
ATerm a_0 (ATerm);
ATerm b_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm t_4 (ATerm k_31, ATerm l_31, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm debug_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm m_4 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm c_19, ATerm b_19, ATerm);
ATerm n_4 (ATerm u_67 (ATerm), ATerm y_18, ATerm x_18, ATerm);
ATerm o_0 (ATerm);
ATerm o_4 (ATerm e_25, ATerm f_25, ATerm g_25, ATerm);
ATerm p_4 (ATerm x_71 (ATerm), ATerm o_25, ATerm n_25, ATerm);
ATerm s_4 (ATerm s_11, ATerm t_11, ATerm);
ATerm v_8 (ATerm m_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_4 (ATerm l_35, ATerm);
ATerm r_4 (ATerm a_12, ATerm b_12, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_11 (ATerm u_9, ATerm);
ATerm x_11 (ATerm a_10, ATerm c_10, ATerm i_10, ATerm);
ATerm y_11 (ATerm s_10, ATerm w_10, ATerm y_10, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm q_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm r_0 (ATerm);
ATerm t_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm x_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm y_16 (ATerm z_15, ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm u_4 (ATerm m_24, ATerm n_24, ATerm);
ATerm end_scope_1_0 (ATerm r_71 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_62 (ATerm), ATerm o_62 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_71 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm m_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm c_5 (ATerm x_41, ATerm y_41, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm a_5 (ATerm h_24, ATerm i_24, ATerm g_24, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_4 (ATerm l_22, ATerm m_22, ATerm);
ATerm foldr_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm need_help_1_0 (ATerm g_58 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_63 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm z_4 (ATerm y_25, ATerm z_25, ATerm);
ATerm o_3 (ATerm);
ATerm v_3 (ATerm);
ATerm y_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm a_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm p_78 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm d_5 (ATerm);
ATerm parse_options_1_0 (ATerm o_78 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm y_4 (ATerm a_31, ATerm b_31, ATerm t)
{
  t = SSL_strcat(a_31, b_31);
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm u_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_5);
    }
  else
    {
      t = u_5;
    }
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_x_5;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_5 = t;
  int z_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 = NULL;
      x_0 = t;
      t = SSL_is_string(x_0);
      ;
      LocalPopChoice(z_5);
    }
  else
    {
      t = y_5;
      {
        ATerm b_6 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_0, t);
            ;
            LocalPopChoice(c_6);
          }
        else
          {
            t = b_6;
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
                        ATerm d_6 = t;
                        int e_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(e_6);
                          }
                        else
                          {
                            t = d_6;
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
                      t = y_4(c_2, e_2, t);
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
  t = term_f_6;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_6, j_2);
  t = z_4(k_2, j_2, t);
  {
    ATerm g_6 = t;
    int h_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_2 = NULL,n_2 = NULL;
        t = eval_config_0_0(t);
        l_2 = t;
        t = term_f_6;
        n_2 = t;
        t = SSL_table_put(n_2, j_2, l_2);
        t = l_2;
        ;
        LocalPopChoice(h_6);
      }
    else
      {
        t = g_6;
      }
  }
  return(t);
}
ATerm t_4 (ATerm k_31, ATerm l_31, ATerm t)
{
  t = SSL_copy(k_31, l_31);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
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
    ATerm i_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL;
        t = k_3;
        t = n_0(t);
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
        t = t_4(l_3, v_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_3);
        ;
        LocalPopChoice(k_6);
      }
    else
      {
        t = i_6;
        {
          ATerm l_6 = t;
          int m_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_1 = NULL;
              t = k_3;
              t = n_0(t);
              k_1 = t;
              {
                ATerm n_6 = t;
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
                    t = n_6;
                  }
                t = (ATerm) ATmakeAppl(sym__2, l_3, k_1);
                t = t_4(l_3, k_1, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_3);
              }
              ;
              LocalPopChoice(m_6);
            }
          else
            {
              t = l_6;
              t = k_3;
              t = n_0(t);
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
ATerm debug_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  r_3 = t;
  t = g_76(t);
  s_3 = t;
  t = term_o_6;
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
  ATerm c_0 (ATerm t)
  {
    ATerm x_3 = NULL,a_4 = NULL;
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_3), x_3);
    t = z_4(not_null(w_3), x_3, t);
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
ATerm if_verbose5_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm i_4 = NULL;
  i_4 = t;
  {
    ATerm q_6 = t;
    int r_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 = NULL;
        t = term_s_6;
        t = get_config_0_0(t);
        l_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_v_6);
        t = geq_0_0(t);
        t = i_4;
        t = w_85(t);
        ;
        LocalPopChoice(r_6);
      }
    else
      {
        t = q_6;
        t = i_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm b_5 = NULL;
  b_5 = t;
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL;
        t = term_s_6;
        t = get_config_0_0(t);
        e_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_5, term_a_7);
        t = geq_0_0(t);
        t = b_5;
        t = v_85(t);
        ;
        LocalPopChoice(y_6);
      }
    else
      {
        t = x_6;
        t = b_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  {
    ATerm c_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_5 = NULL;
        t = term_s_6;
        t = get_config_0_0(t);
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, term_f_7);
        t = geq_0_0(t);
        t = l_5;
        t = x_85(t);
        ;
        LocalPopChoice(e_7);
      }
    else
      {
        t = c_7;
        t = l_5;
      }
  }
  return(t);
}
ATerm m_4 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm c_19, ATerm b_19, ATerm t)
{
  t = y_67(t);
  {
    ATerm e_0 (ATerm t)
    {
      ATerm w_5 = NULL;
      w_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_19, w_5);
      t = x_67(t);
      return(t);
    }
    t = fetch_1_0(e_0, t);
    t = b_19;
  }
  return(t);
}
ATerm n_4 (ATerm u_67 (ATerm), ATerm y_18, ATerm x_18, ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    ATerm p_6 = NULL,t_6 = NULL,w_6 = NULL;
    p_6 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_18;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_6 = ATgetFirst((ATermList) t);
            w_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_7 = t;
          int i_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_6;
              {
                ATerm f_0 (ATerm t)
                {
                  t = x_18;
                  return(t);
                }
                t = m_4(u_67, f_0, t_6, w_6, t);
                t = z_6(t);
              }
              ;
              LocalPopChoice(i_7);
            }
          else
            {
              t = h_7;
              {
                ATerm r_1 = NULL,y_1 = NULL,s_0 = NULL;
                t = SSLgetAnnotations(p_6);
                r_1 = t;
                t = w_6;
                t = z_6(t);
                y_1 = t;
                t = (ATerm) ATinsert(CheckATermList(y_1), t_6);
                s_0 = t;
                t = SSLsetAnnotations(s_0, r_1);
              }
            }
        }
      }
    return(t);
  }
  t = y_18;
  t = z_6(t);
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm z_7 = NULL;
  if(match_cons(t, sym__2))
    {
      z_7 = ATgetArgument(t, 0);
      if((z_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm e_25, ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm g_7 = NULL,p_7 = NULL,q_7 = NULL;
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_25, f_25);
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_7 = ATgetArgument(t, 0);
            ATerm n_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_25, f_25);
        t = z_4(e_25, f_25, t);
        ;
        LocalPopChoice(k_7);
      }
    else
      {
        t = j_7;
        t = (ATerm) ATempty;
      }
    q_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_7, g_25);
    t = n_4(o_0, q_7, g_25, t);
    p_7 = t;
    t = SSL_table_put(e_25, f_25, p_7);
    t = g_7;
  }
  return(t);
}
ATerm p_4 (ATerm x_71 (ATerm), ATerm o_25, ATerm n_25, ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm a_8 = NULL,b_8 = NULL;
    if(match_cons(t, sym__2))
      {
        a_8 = ATgetArgument(t, 0);
        b_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, o_25, a_8, b_8);
    t = x_71(t);
    return(t);
  }
  t = n_25;
  t = map_1_0(p_0, t);
  return(t);
}
ATerm s_4 (ATerm s_11, ATerm t_11, ATerm t)
{
  t = SSL_access(s_11, t_11);
  return(t);
}
ATerm v_8 (ATerm m_8, ATerm t)
{
  t = SSL_fclose(m_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_8 = NULL,t_8 = NULL;
  t_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_8 = ATgetArgument(t, 0);
      {
        ATerm o_7 = t;
        int r_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_8);
            ;
            LocalPopChoice(r_7);
          }
        else
          {
            t = o_7;
            t = v_8(t_8, t);
          }
      }
    }
  else
    {
      t = v_8(t_8, t);
    }
  return(t);
}
ATerm q_4 (ATerm l_35, ATerm t)
{
  t = SSL_read_term_from_stream(l_35);
  return(t);
}
ATerm r_4 (ATerm a_12, ATerm b_12, ATerm t)
{
  ATerm b_9 = NULL;
  t = SSL_fopen(a_12, b_12);
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
ATerm v_11 (ATerm u_9, ATerm t)
{
  ATerm v_9 = NULL;
  t = SSL_explode_term(u_9);
  if(match_cons(t, sym__2))
    {
      ATerm t_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_7 = ATgetArgument(t, 1);
        if(((ATgetType(u_7) == AT_LIST) && !(ATisEmpty(u_7))))
          {
            v_9 = ATgetFirst((ATermList) u_7);
            {
              ATerm v_7 = (ATerm) ATgetNext((ATermList) u_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm x_11 (ATerm a_10, ATerm c_10, ATerm i_10, ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,q_10 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(i_10);
  l_10 = t;
  t = a_10;
  if(match_cons(t, sym_Path_1))
    {
      q_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_10, c_10);
  a_1 = t;
  t = SSLsetAnnotations(a_1, l_10);
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(j_10, k_10, t);
  return(t);
}
ATerm y_11 (ATerm s_10, ATerm w_10, ATerm y_10, ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,e_11 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(y_10);
  b_11 = t;
  t = SSL_is_string(s_10);
  e_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_11, w_10);
  b_1 = t;
  t = SSLsetAnnotations(b_1, b_11);
  if(match_cons(t, sym__2))
    {
      z_10 = ATgetArgument(t, 0);
      a_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(z_10, a_11, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_7 = ATgetArgument(t, 0);
      ATerm x_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  i_11 = t;
  if(match_cons(t, sym__2))
    {
      j_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
      {
        ATerm y_7 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_11(i_11, t);
            ;
            LocalPopChoice(c_8);
          }
        else
          {
            t = y_7;
            {
              ATerm d_8 = t;
              int e_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_11(j_11, u_11, i_11, t);
                  ;
                  LocalPopChoice(e_8);
                }
              else
                {
                  t = d_8;
                  t = y_11(j_11, u_11, i_11, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_11(i_11, t);
    }
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_g_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_11 = NULL,h_12 = NULL,i_12 = NULL;
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_12 = NULL;
      k_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_12, term_j_8);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      t = debug_1_0(q_0, t);
      _fail(t);
    }
  h_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(i_12, t);
  z_11 = t;
  t = h_12;
  t = fclose_0_0(t);
  t = z_11;
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_k_8;
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_l_8;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_12 = NULL,p_12 = NULL;
      o_12 = t;
      t = (ATerm) ATinsert(ATempty, term_r_8);
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_12, (ATerm) ATinsert(ATempty, term_r_8));
      t = s_4(o_12, p_12, t);
      LocalPopChoice(o_8);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_8;
      {
        ATerm s_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_8 = t;
            if((PushChoice() == 0))
              {
                ATerm q_12 = NULL,r_12 = NULL;
                q_12 = t;
                t = (ATerm) ATinsert(ATempty, term_x_8);
                r_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_12, (ATerm) ATinsert(ATempty, term_x_8));
                t = s_4(q_12, r_12, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_8;
              }
            t = debug_1_0(r_0, t);
            ;
            LocalPopChoice(u_8);
          }
        else
          {
            t = s_8;
            t = debug_1_0(t_0, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = debug_1_0(w_0, t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_y_8;
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = debug_1_0(z_0, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  t = term_o_6;
  h_13 = t;
  t = (ATerm) ATinsert(ATempty, term_c_9);
  i_13 = t;
  t = SSL_printnl(h_13, i_13);
  t = g_13;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym__3))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
      l_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_4(j_13, k_13, l_13, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm m_13 = NULL,o_13 = NULL,q_13 = NULL;
  m_13 = t;
  t = term_o_6;
  o_13 = t;
  t = (ATerm) ATinsert(ATempty, term_e_9);
  q_13 = t;
  t = SSL_printnl(o_13, q_13);
  t = m_13;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
  r_13 = t;
  t = term_o_6;
  s_13 = t;
  t = (ATerm) ATinsert(ATempty, term_c_9);
  t_13 = t;
  t = SSL_printnl(s_13, t_13);
  t = r_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  u_12 = t;
  t = if_verbose5_1_0(u_0, t);
  {
    ATerm g_9 = t;
    if((PushChoice() == 0))
      {
        ATerm e_13 = NULL,f_13 = NULL;
        t = term_j_9;
        e_13 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_12);
        f_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATmakeAppl(sym_Imported_1, u_12));
        t = z_4(e_13, f_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_9;
      }
    w_12 = t;
    t = term_j_9;
    b_13 = t;
    t = term_k_9;
    c_13 = t;
    t = (ATerm) ATinsert(ATempty, u_12);
    d_13 = t;
    t = SSL_table_put(b_13, c_13, d_13);
    t = w_12;
    t = if_verbose4_1_0(y_0, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(c_1, t);
    v_12 = t;
    t = term_j_9;
    a_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_9, v_12);
    t = p_4(d_1, a_13, v_12, t);
    t = if_verbose6_1_0(e_1, t);
    t = term_j_9;
    x_12 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, u_12);
    y_12 = t;
    t = (ATerm) ATempty;
    z_12 = t;
    t = SSL_table_put(x_12, y_12, z_12);
    t = (ATerm) ATmakeAppl(sym__3, term_j_9, (ATerm)ATmakeAppl(sym_Imported_1, u_12), (ATerm) ATempty);
    t = if_verbose4_1_0(f_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  ATerm w_14 = NULL,y_14 = NULL,z_14 = NULL;
  w_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_14;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_14 = ATgetFirst((ATermList) t);
          z_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 = NULL,m_3 = NULL,p_3 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(w_14);
            x_2 = t;
            t = y_14;
            t = y_71(t);
            m_3 = t;
            t = z_14;
            t = filter_1_0(y_71, t);
            p_3 = t;
            t = (ATerm) ATinsert(CheckATermList(p_3), m_3);
            h_2 = t;
            t = SSLsetAnnotations(h_2, x_2);
            ;
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            t = z_14;
            t = filter_1_0(y_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_73 (ATerm), ATerm t)
{
  ATerm f_15 (ATerm t)
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_73(t);
        t = f_15(t);
        ;
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
      }
    return(t);
  }
  t = f_15(t);
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
      ;
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
            ATerm i_15 = NULL;
            t = term_w_9;
            i_15 = t;
            t = SSL_getenv(i_15);
            ;
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
ATerm g_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  t = term_j_9;
  q_15 = t;
  t = term_y_9;
  r_15 = t;
  t = term_z_9;
  t = z_4(q_15, r_15, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm b_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_10;
      }
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = debug_1_0(n_1, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_d_10;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm j_15 = NULL;
  t = if_verbose5_1_0(g_1, t);
  j_15 = t;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_15 = NULL,m_15 = NULL;
        t = term_j_9;
        k_15 = t;
        t = term_k_9;
        m_15 = t;
        t = term_g_10;
        t = z_4(k_15, m_15, t);
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        {
          ATerm n_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_15 = t;
          t = repeat_1_0(i_1, t);
          t = n_15;
        }
      }
    t = j_15;
    t = if_verbose5_1_0(m_1, t);
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_h_10;
  return(t);
}
ATerm y_16 (ATerm z_15, ATerm t)
{
  ATerm b_16 = NULL,e_16 = NULL,f_16 = NULL;
  t = term_j_9;
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, z_15);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATmakeAppl(sym_Tool_1, z_15));
  t = z_4(e_16, f_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_10 = ATgetFirst((ATermList) t);
      if(match_cons(m_10, sym__2))
        {
          ATerm o_10 = ATgetArgument(m_10, 0);
          b_16 = ATgetArgument(m_10, 1);
        }
      else
        _fail(t);
      {
        ATerm n_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_16;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_h_10;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_j_9;
  t = table_getlist_0_0(t);
  t = debug_1_0(x_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_p_10;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm r_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
      t = if_verbose5_1_0(o_1, t);
      t = xtc_load_0_0(t);
      i_16 = t;
      if(match_cons(t, sym__2))
        {
          g_16 = ATgetArgument(t, 0);
          h_16 = ATgetArgument(t, 1);
          {
            ATerm u_10 = t;
            int v_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_16 = NULL,o_16 = NULL,r_16 = NULL;
                t = term_j_9;
                o_16 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, g_16);
                r_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATmakeAppl(sym_Tool_1, g_16));
                t = z_4(o_16, r_16, t);
                {
                  ATerm q_1 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((h_16 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((n_16 != NULL) && (n_16 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(q_1, t);
                  t = not_null(n_16);
                }
                ;
                LocalPopChoice(v_10);
              }
            else
              {
                t = u_10;
                t = y_16(i_16, t);
              }
          }
        }
      else
        {
          t = y_16(i_16, t);
        }
      t = if_verbose5_1_0(u_1, t);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = r_10;
      {
        ATerm x_16 = NULL,e_4 = NULL,f_4 = NULL;
        x_16 = t;
        t = term_o_6;
        e_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_11), x_16), term_x_10);
        f_4 = t;
        t = SSL_printnl(e_4, f_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_11), x_16), term_x_10);
        t = if_verbose5_1_0(w_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm u_4 (ATerm m_24, ATerm n_24, ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  b_17 = t;
  {
    ATerm d_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_24, n_24);
        t = z_4(m_24, n_24, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_11 = ATgetFirst((ATermList) t);
            a_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_11);
        t = SSL_table_put(m_24, n_24, a_17);
        t = (ATerm) ATmakeAppl(sym__3, m_24, n_24, a_17);
      }
    else
      {
        t = d_11;
        t = SSL_table_remove(m_24, n_24);
        t = (ATerm) ATmakeAppl(sym__2, m_24, n_24);
      }
    t = b_17;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_71 (ATerm), ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,i_17 = NULL;
  f_17 = t;
  t = r_71(t);
  e_17 = t;
  {
    ATerm h_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_17 = NULL;
        t = term_l_11;
        j_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_17, term_l_11);
        t = z_4(e_17, j_17, t);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = h_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_17 = ATgetFirst((ATermList) t);
        c_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_11;
    i_17 = t;
    t = SSL_table_put(e_17, i_17, c_17);
    t = d_17;
    {
      ATerm z_1 (ATerm t)
      {
        ATerm k_17 = NULL;
        k_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_17, k_17);
        t = u_4(e_17, k_17, t);
        return(t);
      }
      t = map_1_0(z_1, t);
      t = f_17;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_62 (ATerm), ATerm o_62 (ATerm), ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_62(t);
      t = o_62(t);
      ;
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      t = o_62(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_71 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  n_17 = t;
  t = q_71(t);
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_17, term_l_11);
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_17 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_11 = ATgetArgument(t, 0);
            ATerm r_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_11;
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_17, term_l_11);
        t = z_4(m_17, u_17, t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = (ATerm) ATempty;
      }
    o_17 = t;
    t = term_l_11;
    p_17 = t;
    t = (ATerm) ATinsert(CheckATermList(o_17), (ATerm) ATempty);
    q_17 = t;
    t = SSL_table_put(m_17, p_17, q_17);
    t = n_17;
  }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm e_18 = NULL;
  e_18 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_18);
        ;
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = e_18;
      }
  }
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm y_17 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm z_17 = NULL;
    z_17 = t;
    {
      ATerm e_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_18 = NULL,b_18 = NULL;
          t = term_w_11;
          a_18 = t;
          t = term_l_11;
          b_18 = t;
          t = term_g_12;
          t = z_4(a_18, b_18, t);
          ;
          LocalPopChoice(f_12);
        }
      else
        {
          t = e_12;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_17 != NULL) && (y_17 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_17 = ATgetFirst((ATermList) t);
          {
            ATerm j_12 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = y_17;
      t = map_1_0(d_2, t);
      t = z_17;
      t = end_scope_1_0(f_2, t);
    }
    return(t);
  }
  t = begin_scope_1_0(a_2, t);
  t = restore_always_2_0(u_86, b_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,o_18 = NULL;
  j_18 = t;
  t = term_l_12;
  t = whoami_0_0(t);
  k_18 = t;
  t = term_o_6;
  m_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_12), k_18), term_m_12);
  o_18 = t;
  t = SSL_printnl(m_18, o_18);
  t = term_s_12;
  l_18 = t;
  t = SSL_exit(l_18);
  t = j_18;
  return(t);
}
ATerm g_2 (ATerm t)
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
ATerm i_2 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,v_18 = NULL;
  s_18 = t;
  t = SSL_string_to_int(s_18);
  t_18 = t;
  t = term_t_12;
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_12, t_18);
  t = c_5(v_18, t_18, t);
  t = s_18;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_2, i_2, m_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm a_19 = NULL;
  a_19 = t;
  if(match_string(t, "-S"))
    {
      t = a_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_19;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm e_19 = NULL,g_19 = NULL;
  t = term_s_6;
  e_19 = t;
  t = term_p_13;
  g_19 = t;
  t = term_u_13;
  t = c_5(e_19, g_19, t);
  t = term_v_13;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_w_13;
  return(t);
}
ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
  n_19 = t;
  t = SSL_string_to_int(n_19);
  o_19 = t;
  t = term_s_6;
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_6, o_19);
  t = c_5(p_19, o_19, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_19);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm q_19 = NULL,s_19 = NULL;
  t = term_y_13;
  q_19 = t;
  t = term_l_12;
  s_19 = t;
  t = term_z_13;
  t = c_5(q_19, s_19, t);
  t = term_a_14;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_2, p_2, q_2, t);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_2, s_2, t_2, t);
            ;
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            t = Option_3_0(u_2, v_2, w_2, t);
          }
      }
    }
  return(t);
}
ATerm c_5 (ATerm x_41, ATerm y_41, ATerm t)
{
  ATerm t_19 = NULL;
  t = term_f_6;
  t_19 = t;
  t = SSL_table_put(t_19, x_41, y_41);
  t = (ATerm) ATmakeAppl(sym__3, term_f_6, x_41, y_41);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
      t = term_l_12;
      t = h_0(t);
      b_20 = t;
      t = term_g_14;
      c_20 = t;
      t = term_h_14;
      d_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_14, term_h_14, b_20);
      t = a_5(c_20, d_20, b_20, t);
      _fail(t);
    }
  else
    {
      ATerm g_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_19 = ATgetFirst((ATermList) t);
          y_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_19;
      t = d_0(t);
      t = term_l_12;
      t = g_0(t);
      g_20 = t;
      t = (ATerm) ATinsert(CheckATermList(y_19), g_20);
    }
  return(t);
}
ATerm a_5 (ATerm h_24, ATerm i_24, ATerm g_24, ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_24, i_24);
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_14 = ATgetArgument(t, 0);
            ATerm l_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_24, i_24);
        t = z_4(h_24, i_24, t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        t = (ATerm) ATempty;
      }
    m_20 = t;
    t = (ATerm) ATinsert(CheckATermList(m_20), g_24);
    n_20 = t;
    t = SSL_table_put(h_24, i_24, n_20);
    t = l_20;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,y_20 = NULL,b_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
      t = term_l_12;
      t = m_0(t);
      c_21 = t;
      t = term_g_14;
      d_21 = t;
      t = term_h_14;
      e_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_14, term_h_14, c_21);
      t = a_5(d_21, e_21, c_21, t);
      _fail(t);
    }
  else
    {
      ATerm r_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_20 = ATgetFirst((ATermList) t);
          v_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_20 = ATgetFirst((ATermList) t);
          b_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_20;
      t = k_0(t);
      t = y_20;
      t = l_0(t);
      r_21 = t;
      t = (ATerm) ATinsert(CheckATermList(b_21), r_21);
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm t_21 = NULL;
  t_21 = t;
  if(match_string(t, "-o"))
    {
      t = t_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_21;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm u_21 = NULL,x_21 = NULL;
  u_21 = t;
  t = term_m_14;
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_14, u_21);
  t = c_5(x_21, u_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_21);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, b_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,d_22 = NULL,g_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_12;
  t = whoami_0_0(t);
  y_21 = t;
  t = term_o_6;
  d_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_14), y_21);
  g_22 = t;
  t = SSL_printnl(d_22, g_22);
  t = term_s_12;
  z_21 = t;
  t = SSL_exit(z_21);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_4 (ATerm l_22, ATerm m_22, ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_22, m_22);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      t = SSL_addr(l_22, m_22);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,n_22 = NULL;
  j_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_22;
      t = i_70(t);
    }
  else
    {
      ATerm q_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_22 = ATgetFirst((ATermList) t);
          n_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_22;
      t = foldr_2_0(i_70, j_70, t);
      q_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_22, q_22);
      t = j_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm k_5 = NULL,m_5 = NULL;
  if(match_cons(t, sym__2))
    {
      k_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(k_5, m_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_22 = NULL,g_5 = NULL,h_5 = NULL;
  t = times_0_0(t);
  h_5 = t;
  t = SSL_explode_term(h_5);
  if(match_cons(t, sym__2))
    {
      ATerm s_14 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5;
  t = foldr_2_0(d_3, f_3, t);
  t_22 = t;
  t = SSL_TicksToSeconds(t_22);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  h_23 = t;
  if(match_cons(t, sym__2))
    {
      i_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_23;
        if((i_23 != t))
          {
            _fail(t);
          }
        t = h_23;
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = (ATerm) ATmakeAppl(sym__2, i_23, j_23);
        {
          ATerm v_14 = t;
          int x_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_23, j_23);
              ;
              LocalPopChoice(x_14);
            }
          else
            {
              t = v_14;
              t = SSL_gtr(i_23, j_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_23, j_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_23 = NULL;
        t = term_s_6;
        t = get_config_0_0(t);
        p_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_23, term_s_12);
        t = geq_0_0(t);
        t = n_23;
        t = s_85(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = n_23;
      }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,a_24 = NULL,b_24 = NULL;
  t = run_time_0_0(t);
  x_23 = t;
  t = term_l_12;
  t = whoami_0_0(t);
  y_23 = t;
  t = term_o_6;
  a_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_15), x_23), term_c_15), y_23);
  b_24 = t;
  t = SSL_printnl(a_24, b_24);
  t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_15), x_23), term_c_15), y_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_13;
  c_24 = t;
  t = SSL_exit(c_24);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  r_24 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_24;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_24 = ATgetArgument(t, 0);
          {
            ATerm j_6 = NULL,a_3 = NULL;
            t = SSLgetAnnotations(r_24);
            j_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_24);
            a_3 = t;
            t = SSLsetAnnotations(a_3, j_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_24;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_58 (ATerm), ATerm t)
{
  ATerm e_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = e_15;
      t = fetch_1_0(j_3, t);
    }
  t = g_58(t);
  return(t);
}
ATerm map_1_0 (ATerm q_63 (ATerm), ATerm t)
{
  ATerm m_25 (ATerm t)
  {
    ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
    j_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_25;
      }
    else
      {
        ATerm u_6 = NULL,b_7 = NULL,d_7 = NULL,c_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_25 = ATgetFirst((ATermList) t);
            l_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_25);
        u_6 = t;
        t = k_25;
        t = q_63(t);
        b_7 = t;
        t = l_25;
        t = m_25(t);
        d_7 = t;
        t = (ATerm) ATinsert(CheckATermList(d_7), b_7);
        c_3 = t;
        t = SSLsetAnnotations(c_3, u_6);
      }
    return(t);
  }
  t = m_25(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_25 = ATgetFirst((ATermList) t);
      u_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_26 = NULL,b_26 = NULL;
        ATerm n_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_26)), not_null(b_26));
          return(t);
        }
        t = u_25;
        t = j_0(t);
        if(((a_26 != NULL) && (a_26 != t)))
          _fail(t);
        else
          a_26 = t;
        t = t_25;
        t = i_0(t);
        if(((b_26 != NULL) && (b_26 != t)))
          _fail(t);
        else
          b_26 = t;
        t = u_25;
        t = reverse_acc_2_0(i_0, n_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_12;
      t = j_0(t);
    }
  return(t);
}
ATerm z_4 (ATerm y_25, ATerm z_25, ATerm t)
{
  t = SSL_table_get(y_25, z_25);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,e_3 = NULL;
  h_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_26);
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_26);
  e_3 = t;
  t = SSLsetAnnotations(e_3, f_26);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_26), term_l_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL;
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      t = fetch_1_0(o_3, t);
    }
  t = term_s_15;
  t = echo_0_0(t);
  t = term_g_14;
  d_26 = t;
  t = term_h_14;
  e_26 = t;
  t = term_t_15;
  t = z_4(d_26, e_26, t);
  t = reverse_acc_2_0(_id, v_3, t);
  t = map_1_0(y_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_64 (ATerm), ATerm t)
{
  ATerm g_27 (ATerm t)
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
          ATerm m_7 = NULL,s_7 = NULL,g_3 = NULL;
          t = SSLgetAnnotations(d_27);
          m_7 = t;
          t = e_27;
          t = a_64(t);
          s_7 = t;
          t = (ATerm) ATinsert(CheckATermList(f_27), s_7);
          g_3 = t;
          t = SSLsetAnnotations(g_3, m_7);
          ;
          LocalPopChoice(v_15);
        }
      else
        {
          t = u_15;
          {
            ATerm f_8 = NULL,q_8 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(d_27);
            f_8 = t;
            t = f_27;
            t = g_27(t);
            q_8 = t;
            t = (ATerm) ATinsert(CheckATermList(q_8), e_27);
            i_3 = t;
            t = SSLsetAnnotations(i_3, f_8);
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
    ATerm w_15 = t;
    int x_15 = stack_ptr;
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
                ATerm y_15 = ATgetFirst((ATermList) t);
                ATerm a_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_27;
          }
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        t = (ATerm) ATinsert(ATempty, k_27);
      }
    l_27 = t;
    t = term_c_16;
    m_27 = t;
    t = SSL_printnl(m_27, l_27);
    t = k_27;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  t = term_d_16;
  q_27 = t;
  t = term_l_12;
  r_27 = t;
  t = term_j_16;
  t = c_5(q_27, r_27, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_k_16;
  return(t);
}
ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t = term_d_16;
  u_27 = t;
  t = term_l_12;
  v_27 = t;
  t = term_j_16;
  t = c_5(u_27, v_27, t);
  t = term_l_16;
  s_27 = t;
  t = term_l_12;
  t_27 = t;
  t = term_m_16;
  t = c_5(s_27, t_27, t);
  t = term_p_16;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_q_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, b_4, c_4, t);
      ;
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      t = Option_3_0(d_4, g_4, h_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,q_3 = NULL;
  b_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_27 = ATgetFirst((ATermList) t);
      y_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_28);
  w_27 = t;
  t = x_27;
  t = i_51(t);
  z_27 = t;
  t = y_27;
  t = j_51(t);
  a_28 = t;
  t = (ATerm) ATinsert(CheckATermList(a_28), z_27);
  q_3 = t;
  t = SSLsetAnnotations(q_3, w_27);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_78 (ATerm), ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,l_28 = NULL,m_28 = NULL,j_5 = NULL;
  g_28 = t;
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_16;
        t = p_78(t);
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
      }
    t = g_28;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_28 = ATgetFirst((ATermList) t);
        j_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_28);
    h_28 = t;
    t = term_p_14;
    m_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_14, i_28);
    t = c_5(m_28, i_28, t);
    t = j_28;
    {
      ATerm w_28 (ATerm t)
      {
        ATerm z_16 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_17 = t;
            int l_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_28 = NULL;
                p_28 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_28;
                ;
                LocalPopChoice(l_17);
              }
            else
              {
                t = h_17;
                t = p_78(t);
                t = Cons_2_0(_id, w_28, t);
              }
            ;
            LocalPopChoice(g_17);
          }
        else
          {
            t = z_16;
            {
              ATerm s_28 = NULL,t_28 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_28 = ATgetFirst((ATermList) t);
                  t_28 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_28), (ATerm) ATmakeAppl(sym_Undefined_1, s_28));
            }
          }
        return(t);
      }
      t = w_28(t);
      if(((l_28 != NULL) && (l_28 != t)))
        _fail(t);
      else
        l_28 = t;
      t = (ATerm) ATinsert(CheckATermList(l_28), (ATerm) ATmakeAppl(sym_Program_1, i_28));
      if(((j_5 != NULL) && (j_5 != t)))
        _fail(t);
      else
        j_5 = t;
      t = SSLsetAnnotations(j_5, h_28);
    }
  }
  return(t);
}
ATerm k_4 (ATerm t)
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
ATerm w_4 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  t = term_h_15;
  j_29 = t;
  t = term_l_12;
  k_29 = t;
  t = term_r_17;
  t = c_5(j_29, k_29, t);
  t = term_s_17;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_78 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  d_29 = t;
  t = term_g_14;
  f_29 = t;
  t = term_h_14;
  g_29 = t;
  t = (ATerm) ATempty;
  h_29 = t;
  t = SSL_table_put(f_29, g_29, h_29);
  t = d_29;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm v_17 = t;
      int w_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_78(t);
          ;
          LocalPopChoice(w_17);
        }
      else
        {
          t = v_17;
          {
            ATerm x_17 = t;
            int c_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_4, w_4, x_4, t);
                ;
                LocalPopChoice(c_18);
              }
            else
              {
                t = x_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_4, t);
    {
      ATerm d_18 = t;
      int f_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_29 = NULL;
          r_29 = t;
          {
            ATerm g_18 = t;
            int h_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_9 = NULL;
                t = r_29;
                {
                  ATerm i_18 = t;
                  int n_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_h_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_18);
                    }
                  else
                    {
                      t = i_18;
                      t = fetch_1_0(d_5, t);
                    }
                  t = r_29;
                  t = default_system_usage_0_0(t);
                  t = term_p_13;
                  a_9 = t;
                  t = SSL_exit(a_9);
                }
                ;
                LocalPopChoice(h_18);
              }
            else
              {
                t = g_18;
                {
                  ATerm i_9 = NULL;
                  t = term_d_16;
                  t = get_config_0_0(t);
                  t = r_29;
                  t = default_system_about_0_0(t);
                  t = term_p_13;
                  i_9 = t;
                  t = SSL_exit(i_9);
                }
              }
          }
          ;
          LocalPopChoice(f_18);
        }
      else
        {
          t = d_18;
          {
            ATerm p_18 = t;
            int r_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
                ATerm f_5 (ATerm t)
                {
                  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,a_6 = NULL;
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
                  if(((b_29 != NULL) && (b_29 != t)))
                    _fail(t);
                  else
                    b_29 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_29);
                  a_6 = t;
                  t = SSLsetAnnotations(a_6, v_29);
                  return(t);
                }
                t = fetch_1_0(f_5, t);
                t = term_o_6;
                if(((t_29 != NULL) && (t_29 != t)))
                  _fail(t);
                else
                  t_29 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_29)), term_u_18);
                if(((u_29 != NULL) && (u_29 != t)))
                  _fail(t);
                else
                  u_29 = t;
                t = SSL_printnl(t_29, u_29);
                t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_29)), term_u_18));
                t = default_system_usage_0_0(t);
                t = term_s_12;
                if(((s_29 != NULL) && (s_29 != t)))
                  _fail(t);
                else
                  s_29 = t;
                t = SSL_exit(s_29);
                ;
                LocalPopChoice(r_18);
              }
            else
              {
                t = p_18;
              }
          }
        }
      if(((c_29 != NULL) && (c_29 != t)))
        _fail(t);
      else
        c_29 = t;
      t = term_g_14;
      if(((e_29 != NULL) && (e_29 != t)))
        _fail(t);
      else
        e_29 = t;
      t = SSL_table_destroy(e_29);
      t = c_29;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  t = parse_options_1_0(i_58, t);
  c_30 = t;
  t = term_w_18;
  f_30 = t;
  t = SSL_table_create(f_30);
  t = term_w_18;
  d_30 = t;
  t = term_z_18;
  e_30 = t;
  t = SSL_table_put(d_30, e_30, c_30);
  t = c_30;
  t = k_58(t);
  {
    ATerm d_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_58, t);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = d_19;
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_58(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
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
            t = Option_3_0(p_5, q_5, r_5, t);
            ;
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm r_19 = t;
              int u_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(u_19);
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
ATerm n_5 (ATerm t)
{
  t = xtc_temp_files_1_0(s_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  t = term_v_19;
  h_30 = t;
  t = term_l_12;
  i_30 = t;
  t = term_w_19;
  t = c_5(h_30, i_30, t);
  t = term_z_19;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm k_30 = NULL;
  t = term_e_20;
  t = xtc_find_0_0(t);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_30);
  t = copy_to_1_0(t_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm f_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = f_20;
      t = term_c_16;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(i_5, default_usage_0_0, _id, n_5, t);
  return(t);
}
