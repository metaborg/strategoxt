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
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_d_17;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_t_11;
ATerm term_k_11;
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
ATerm term_i_9;
ATerm term_e_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_q_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_f_7;
ATerm term_a_7;
ATerm term_u_6;
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
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_XTC_0);
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
  term_z_9 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_y_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_k_9);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_k_11);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_n_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_u_13, term_h_12);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_d_14);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_d_16, term_h_12);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_h_12);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_h_12);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_h_12);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("boxenv.sty", 0, ATtrue));
}
ATerm y_4 (ATerm g_43, ATerm h_43, ATerm);
ATerm b_0 (ATerm);
ATerm f_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm t_4 (ATerm q_43, ATerm r_43, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm debug_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm w_97 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm x_97 (ATerm), ATerm);
ATerm m_4 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm k_31, ATerm j_31, ATerm);
ATerm n_4 (ATerm a_80 (ATerm), ATerm g_31, ATerm f_31, ATerm);
ATerm p_0 (ATerm);
ATerm o_4 (ATerm m_37, ATerm n_37, ATerm o_37, ATerm);
ATerm p_4 (ATerm c_84 (ATerm), ATerm w_37, ATerm v_37, ATerm);
ATerm s_4 (ATerm a_24, ATerm b_24, ATerm);
ATerm v_8 (ATerm m_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_4 (ATerm r_47, ATerm);
ATerm r_4 (ATerm i_24, ATerm j_24, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm u_11 (ATerm u_9, ATerm);
ATerm v_11 (ATerm a_10, ATerm c_10, ATerm i_10, ATerm);
ATerm w_11 (ATerm s_10, ATerm w_10, ATerm y_10, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm d_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm n_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_16 (ATerm t_15, ATerm);
ATerm r_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm u_4 (ATerm u_36, ATerm v_36, ATerm);
ATerm end_scope_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm h_2 (ATerm);
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
ATerm c_5 (ATerm d_54, ATerm e_54, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm a_5 (ATerm p_36, ATerm q_36, ATerm o_36, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_4 (ATerm t_34, ATerm u_34, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm h_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm need_help_1_0 (ATerm m_70 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm z_4 (ATerm g_38, ATerm h_38, ATerm);
ATerm n_3 (ATerm);
ATerm q_3 (ATerm);
ATerm y_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm h_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm p_90 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm d_5 (ATerm);
ATerm parse_options_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm k_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm y_4 (ATerm g_43, ATerm h_43, ATerm t)
{
  t = SSL_strcat(g_43, h_43);
  return(t);
}
ATerm b_0 (ATerm t)
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
ATerm f_0 (ATerm t)
{
  t = term_x_5;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 = NULL;
      x_0 = t;
      t = SSL_is_string(x_0);
      ;
      LocalPopChoice(a_6);
    }
  else
    {
      t = y_5;
      {
        ATerm b_6 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_0, t);
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
                            t = debug_1_0(f_0, t);
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
ATerm t_4 (ATerm q_43, ATerm r_43, ATerm t)
{
  t = SSL_copy(q_43, r_43);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
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
    int j_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_1 = NULL;
        t = k_3;
        t = k_0(t);
        d_1 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = d_1;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = d_1;
          }
        t = (ATerm) ATmakeAppl(sym__2, l_3, d_1);
        t = t_4(l_3, d_1, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_3);
        ;
        LocalPopChoice(j_6);
      }
    else
      {
        t = i_6;
        {
          ATerm l_6 = t;
          int m_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_1 = NULL;
              t = k_3;
              t = k_0(t);
              l_1 = t;
              {
                ATerm n_6 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_1 = NULL;
                    m_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = m_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = m_1;
                          }
                        else
                          {
                            t = m_1;
                            if((l_3 != t))
                              {
                                _fail(t);
                              }
                            t = m_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_6;
                  }
                t = (ATerm) ATmakeAppl(sym__2, l_3, l_1);
                t = t_4(l_3, l_1, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_3);
              }
              ;
              LocalPopChoice(m_6);
            }
          else
            {
              t = l_6;
              t = k_3;
              t = k_0(t);
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
ATerm debug_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  r_3 = t;
  t = g_88(t);
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
  ATerm l_0 (ATerm t)
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
  t = SSL_table_keys(not_null(w_3));
  t = map_1_0(l_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm w_97 (ATerm), ATerm t)
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
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_u_6);
        t = geq_0_0(t);
        t = i_4;
        t = w_97(t);
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
ATerm if_verbose4_1_0 (ATerm v_97 (ATerm), ATerm t)
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
        t = v_97(t);
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
ATerm if_verbose6_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_5 = NULL;
        t = term_s_6;
        t = get_config_0_0(t);
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, term_f_7);
        t = geq_0_0(t);
        t = l_5;
        t = x_97(t);
        ;
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        t = l_5;
      }
  }
  return(t);
}
ATerm m_4 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm k_31, ATerm j_31, ATerm t)
{
  t = e_80(t);
  {
    ATerm m_0 (ATerm t)
    {
      ATerm w_5 = NULL;
      w_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_31), w_5);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(m_0, t);
    t = not_null(j_31);
  }
  return(t);
}
ATerm n_4 (ATerm a_80 (ATerm), ATerm g_31, ATerm f_31, ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    ATerm p_6 = NULL,t_6 = NULL,w_6 = NULL;
    p_6 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(f_31);
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
                ATerm o_0 (ATerm t)
                {
                  t = not_null(f_31);
                  return(t);
                }
                t = m_4(a_80, o_0, not_null(t_6), not_null(w_6), t);
                t = z_6(t);
              }
              ;
              LocalPopChoice(i_7);
            }
          else
            {
              t = h_7;
              {
                ATerm v_1 = NULL,a_2 = NULL,n_0 = NULL;
                t = SSLgetAnnotations(p_6);
                v_1 = t;
                t = w_6;
                t = z_6(t);
                a_2 = t;
                t = (ATerm) ATinsert(CheckATermList(a_2), t_6);
                n_0 = t;
                t = SSLsetAnnotations(n_0, v_1);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(g_31);
  t = z_6(t);
  return(t);
}
ATerm p_0 (ATerm t)
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
ATerm o_4 (ATerm m_37, ATerm n_37, ATerm o_37, ATerm t)
{
  ATerm g_7 = NULL,p_7 = NULL,q_7 = NULL;
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_37, n_37);
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_7 = ATgetArgument(t, 0);
            ATerm m_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_37, n_37);
        t = z_4(m_37, n_37, t);
        ;
        LocalPopChoice(k_7);
      }
    else
      {
        t = j_7;
        t = (ATerm) ATempty;
      }
    q_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_7, o_37);
    t = n_4(p_0, q_7, o_37, t);
    p_7 = t;
    t = SSL_table_put(m_37, n_37, p_7);
    t = g_7;
  }
  return(t);
}
ATerm p_4 (ATerm c_84 (ATerm), ATerm w_37, ATerm v_37, ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm a_8 = NULL,b_8 = NULL;
    if(match_cons(t, sym__2))
      {
        a_8 = ATgetArgument(t, 0);
        b_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(w_37), a_8, b_8);
    t = c_84(t);
    return(t);
  }
  t = not_null(v_37);
  t = map_1_0(q_0, t);
  return(t);
}
ATerm s_4 (ATerm a_24, ATerm b_24, ATerm t)
{
  t = SSL_access(a_24, b_24);
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
ATerm q_4 (ATerm r_47, ATerm t)
{
  t = SSL_read_term_from_stream(r_47);
  return(t);
}
ATerm r_4 (ATerm i_24, ATerm j_24, ATerm t)
{
  ATerm b_9 = NULL;
  t = SSL_fopen(i_24, j_24);
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
ATerm u_11 (ATerm u_9, ATerm t)
{
  ATerm v_9 = NULL;
  t = SSL_explode_term(u_9);
  if(match_cons(t, sym__2))
    {
      ATerm s_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_7) != ATmakeSymbol("", 0, ATtrue)))
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
ATerm v_11 (ATerm a_10, ATerm c_10, ATerm i_10, ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,q_10 = NULL,w_0 = NULL;
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
  w_0 = t;
  t = SSLsetAnnotations(w_0, l_10);
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
ATerm w_11 (ATerm s_10, ATerm w_10, ATerm y_10, ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,g_11 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(y_10);
  b_11 = t;
  t = SSL_is_string(s_10);
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_11, w_10);
  a_1 = t;
  t = SSLsetAnnotations(a_1, b_11);
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
  ATerm i_11 = NULL,r_11 = NULL,s_11 = NULL;
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
      r_11 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
      {
        ATerm y_7 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_11(i_11, t);
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
                  t = v_11(r_11, s_11, i_11, t);
                  ;
                  LocalPopChoice(e_8);
                }
              else
                {
                  t = d_8;
                  t = w_11(r_11, s_11, i_11, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_11(i_11, t);
    }
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_12 = NULL,c_12 = NULL,f_12 = NULL;
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_12 = NULL;
      g_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_12, term_i_8);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      t = debug_1_0(r_0, t);
      _fail(t);
    }
  c_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(f_12, t);
  a_12 = t;
  t = c_12;
  t = fclose_0_0(t);
  t = a_12;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_j_8;
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
      ATerm i_12 = NULL,j_12 = NULL;
      i_12 = t;
      t = (ATerm) ATinsert(ATempty, term_q_8);
      j_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_12, (ATerm) ATinsert(ATempty, term_q_8));
      t = s_4(i_12, j_12, t);
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
                ATerm m_12 = NULL,n_12 = NULL;
                m_12 = t;
                t = (ATerm) ATinsert(ATempty, term_x_8);
                n_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_12, (ATerm) ATinsert(ATempty, term_x_8));
                t = s_4(m_12, n_12, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_8;
              }
            t = debug_1_0(s_0, t);
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
  t = debug_1_0(v_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
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
ATerm b_1 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  t = term_o_6;
  b_13 = t;
  t = (ATerm) ATinsert(ATempty, term_a_9);
  c_13 = t;
  t = SSL_printnl(b_13, c_13);
  t = a_13;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm e_13 = NULL,g_13 = NULL,h_13 = NULL;
  if(match_cons(t, sym__3))
    {
      e_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
      h_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_4(e_13, g_13, h_13, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  i_13 = t;
  t = term_o_6;
  j_13 = t;
  t = (ATerm) ATinsert(ATempty, term_e_9);
  k_13 = t;
  t = SSL_printnl(j_13, k_13);
  t = i_13;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm m_13 = NULL,p_13 = NULL,s_13 = NULL;
  m_13 = t;
  t = term_o_6;
  p_13 = t;
  t = (ATerm) ATinsert(ATempty, term_a_9);
  s_13 = t;
  t = SSL_printnl(p_13, s_13);
  t = m_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  o_12 = t;
  t = if_verbose5_1_0(u_0, t);
  {
    ATerm g_9 = t;
    if((PushChoice() == 0))
      {
        ATerm y_12 = NULL,z_12 = NULL;
        t = term_i_9;
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_12);
        z_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_9, (ATerm) ATmakeAppl(sym_Imported_1, o_12));
        t = z_4(y_12, z_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_9;
      }
    q_12 = t;
    t = term_i_9;
    v_12 = t;
    t = term_k_9;
    w_12 = t;
    t = (ATerm) ATinsert(ATempty, o_12);
    x_12 = t;
    t = SSL_table_put(v_12, w_12, x_12);
    t = q_12;
    t = if_verbose4_1_0(y_0, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(b_1, t);
    p_12 = t;
    t = term_i_9;
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_9, p_12);
    t = p_4(c_1, u_12, p_12, t);
    t = if_verbose6_1_0(e_1, t);
    t = term_i_9;
    r_12 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, o_12);
    s_12 = t;
    t = (ATerm) ATempty;
    t_12 = t;
    t = SSL_table_put(r_12, s_12, t_12);
    t = (ATerm) ATmakeAppl(sym__3, term_i_9, (ATerm)ATmakeAppl(sym_Imported_1, o_12), (ATerm) ATempty);
    t = if_verbose4_1_0(f_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_14;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_14 = ATgetFirst((ATermList) t);
          r_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 = NULL,p_3 = NULL,v_3 = NULL,f_2 = NULL;
            t = SSLgetAnnotations(p_14);
            z_2 = t;
            t = q_14;
            t = d_84(t);
            p_3 = t;
            t = r_14;
            t = filter_1_0(d_84, t);
            v_3 = t;
            t = (ATerm) ATinsert(CheckATermList(v_3), p_3);
            f_2 = t;
            t = SSLsetAnnotations(f_2, z_2);
            ;
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            t = r_14;
            t = filter_1_0(d_84, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm a_15 (ATerm t)
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_85(t);
        t = a_15(t);
        ;
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
      }
    return(t);
  }
  t = a_15(t);
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
            ATerm d_15 = NULL;
            t = term_w_9;
            d_15 = t;
            t = SSL_getenv(d_15);
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
  ATerm m_15 = NULL,n_15 = NULL;
  t = term_i_9;
  m_15 = t;
  t = term_y_9;
  n_15 = t;
  t = term_z_9;
  t = z_4(m_15, n_15, t);
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
ATerm k_1 (ATerm t)
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
  ATerm e_15 = NULL;
  t = if_verbose5_1_0(g_1, t);
  e_15 = t;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_15 = NULL,k_15 = NULL;
        t = term_i_9;
        f_15 = t;
        t = term_k_9;
        k_15 = t;
        t = term_g_10;
        t = z_4(f_15, k_15, t);
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        {
          ATerm l_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_15 = t;
          t = repeat_1_0(i_1, t);
          t = l_15;
        }
      }
    t = e_15;
    t = if_verbose5_1_0(k_1, t);
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
ATerm q_16 (ATerm t_15, ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,z_15 = NULL;
  t = term_i_9;
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, t_15);
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_9, (ATerm) ATmakeAppl(sym_Tool_1, t_15));
  t = z_4(w_15, z_15, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_10 = ATgetFirst((ATermList) t);
      if(match_cons(m_10, sym__2))
        {
          ATerm o_10 = ATgetArgument(m_10, 0);
          v_15 = ATgetArgument(m_10, 1);
        }
      else
        _fail(t);
      {
        ATerm n_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_15;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_h_10;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_i_9;
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
      ATerm a_16 = NULL,b_16 = NULL,e_16 = NULL;
      t = if_verbose5_1_0(o_1, t);
      t = xtc_load_0_0(t);
      if(((e_16 != NULL) && (e_16 != t)))
        _fail(t);
      else
        e_16 = t;
      if(match_cons(t, sym__2))
        {
          a_16 = ATgetArgument(t, 0);
          b_16 = ATgetArgument(t, 1);
          {
            ATerm u_10 = t;
            int v_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
                t = term_i_9;
                if(((j_16 != NULL) && (j_16 != t)))
                  _fail(t);
                else
                  j_16 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_16));
                if(((k_16 != NULL) && (k_16 != t)))
                  _fail(t);
                else
                  k_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_9, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_16)));
                t = z_4(not_null(j_16), not_null(k_16), t);
                {
                  ATerm q_1 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((b_16 != NULL) && (b_16 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          b_16 = ATgetArgument(t, 0);
                        if(((i_16 != NULL) && (i_16 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          i_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(q_1, t);
                  t = not_null(i_16);
                }
                ;
                LocalPopChoice(v_10);
              }
            else
              {
                t = u_10;
                t = q_16(not_null(e_16), t);
              }
          }
        }
      else
        {
          t = q_16(not_null(e_16), t);
        }
      t = if_verbose5_1_0(r_1, t);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = r_10;
      {
        ATerm p_16 = NULL,f_4 = NULL,g_4 = NULL;
        p_16 = t;
        t = term_o_6;
        f_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_11), p_16), term_x_10);
        g_4 = t;
        t = SSL_printnl(f_4, g_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_11), p_16), term_x_10);
        t = if_verbose5_1_0(w_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm u_4 (ATerm u_36, ATerm v_36, ATerm t)
{
  ATerm s_16 = NULL,v_16 = NULL;
  v_16 = t;
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
        t = z_4(u_36, v_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_11 = ATgetFirst((ATermList) t);
            s_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_11);
        t = SSL_table_put(u_36, v_36, s_16);
        t = (ATerm) ATmakeAppl(sym__3, u_36, v_36, s_16);
      }
    else
      {
        t = d_11;
        t = SSL_table_remove(u_36, v_36);
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
      }
    t = v_16;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  if(((z_16 != NULL) && (z_16 != t)))
    _fail(t);
  else
    z_16 = t;
  t = w_83(t);
  if(((y_16 != NULL) && (y_16 != t)))
    _fail(t);
  else
    y_16 = t;
  {
    ATerm h_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_17 = NULL;
        t = term_k_11;
        b_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_16), term_k_11);
        t = z_4(not_null(y_16), b_17, t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = h_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_16 != NULL) && (x_16 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_16 = ATgetFirst((ATermList) t);
        if(((w_16 != NULL) && (w_16 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          w_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_11;
    if(((a_17 != NULL) && (a_17 != t)))
      _fail(t);
    else
      a_17 = t;
    t = SSL_table_put(not_null(y_16), not_null(a_17), not_null(w_16));
    t = not_null(x_16);
    {
      ATerm y_1 (ATerm t)
      {
        ATerm c_17 = NULL;
        c_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_16), c_17);
        t = u_4(not_null(y_16), c_17, t);
        return(t);
      }
      t = map_1_0(y_1, t);
      t = not_null(z_16);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_74(t);
      t = u_74(t);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      t = u_74(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  f_17 = t;
  t = v_83(t);
  e_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_17, term_k_11);
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_17 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_11 = ATgetArgument(t, 0);
            ATerm q_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_11;
        n_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_17, term_k_11);
        t = z_4(e_17, n_17, t);
        ;
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = (ATerm) ATempty;
      }
    g_17 = t;
    t = term_k_11;
    h_17 = t;
    t = (ATerm) ATinsert(CheckATermList(g_17), (ATerm) ATempty);
    i_17 = t;
    t = SSL_table_put(e_17, h_17, i_17);
    t = f_17;
  }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm y_17 = NULL;
  y_17 = t;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(y_17);
        ;
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = y_17;
      }
  }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm q_17 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm r_17 = NULL;
    r_17 = t;
    {
      ATerm z_11 = t;
      int b_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_17 = NULL,v_17 = NULL;
          t = term_t_11;
          s_17 = t;
          t = term_k_11;
          v_17 = t;
          t = term_d_12;
          t = z_4(s_17, v_17, t);
          ;
          LocalPopChoice(b_12);
        }
      else
        {
          t = z_11;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((q_17 != NULL) && (q_17 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            q_17 = ATgetFirst((ATermList) t);
          {
            ATerm e_12 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(q_17);
      t = map_1_0(d_2, t);
      t = r_17;
      t = end_scope_1_0(g_2, t);
    }
    return(t);
  }
  t = begin_scope_1_0(z_1, t);
  t = restore_always_2_0(u_98, b_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,f_18 = NULL,g_18 = NULL,i_18 = NULL;
  c_18 = t;
  t = term_h_12;
  t = whoami_0_0(t);
  d_18 = t;
  t = term_o_6;
  g_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_12), d_18), term_k_12);
  i_18 = t;
  t = SSL_printnl(g_18, i_18);
  t = term_d_13;
  f_18 = t;
  t = SSL_exit(f_18);
  t = c_18;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  if(match_string(t, "-k"))
    {
      t = l_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_18;
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,u_18 = NULL;
  m_18 = t;
  t = SSL_string_to_int(m_18);
  n_18 = t;
  t = term_f_13;
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_13, n_18);
  t = c_5(u_18, n_18, t);
  t = m_18;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_l_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_2, i_2, m_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  if(match_string(t, "-S"))
    {
      t = w_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_18;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm x_18 = NULL,z_18 = NULL;
  t = term_s_6;
  x_18 = t;
  t = term_n_13;
  z_18 = t;
  t = term_o_13;
  t = c_5(x_18, z_18, t);
  t = term_q_13;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_r_13;
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
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  t = SSL_string_to_int(a_19);
  b_19 = t;
  t = term_s_6;
  c_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_6, b_19);
  t = c_5(c_19, b_19, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_19);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_t_13;
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
  ATerm e_19 = NULL,f_19 = NULL;
  t = term_u_13;
  e_19 = t;
  t = term_h_12;
  f_19 = t;
  t = term_v_13;
  t = c_5(e_19, f_19, t);
  t = term_w_13;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_2, p_2, q_2, t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_2, s_2, t_2, t);
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            t = Option_3_0(u_2, v_2, w_2, t);
          }
      }
    }
  return(t);
}
ATerm c_5 (ATerm d_54, ATerm e_54, ATerm t)
{
  ATerm i_19 = NULL;
  t = term_f_6;
  i_19 = t;
  t = SSL_table_put(i_19, d_54, e_54);
  t = (ATerm) ATmakeAppl(sym__3, term_f_6, d_54, e_54);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_19 = NULL,o_19 = NULL,q_19 = NULL;
      t = term_h_12;
      t = d_0(t);
      n_19 = t;
      t = term_c_14;
      o_19 = t;
      t = term_d_14;
      q_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_14, term_d_14, n_19);
      t = a_5(o_19, q_19, n_19, t);
      _fail(t);
    }
  else
    {
      ATerm t_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_19 = ATgetFirst((ATermList) t);
          m_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_19;
      t = a_0(t);
      t = term_h_12;
      t = c_0(t);
      t_19 = t;
      t = (ATerm) ATinsert(CheckATermList(m_19), t_19);
    }
  return(t);
}
ATerm a_5 (ATerm p_36, ATerm q_36, ATerm o_36, ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_14 = ATgetArgument(t, 0);
            ATerm h_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
        t = z_4(p_36, q_36, t);
        ;
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = (ATerm) ATempty;
      }
    w_19 = t;
    t = (ATerm) ATinsert(CheckATermList(w_19), o_36);
    x_19 = t;
    t = SSL_table_put(p_36, q_36, x_19);
    t = v_19;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,n_20 = NULL,q_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_20 = NULL,w_20 = NULL,x_20 = NULL;
      t = term_h_12;
      t = j_0(t);
      t_20 = t;
      t = term_c_14;
      w_20 = t;
      t = term_d_14;
      x_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_14, term_d_14, t_20);
      t = a_5(w_20, x_20, t_20, t);
      _fail(t);
    }
  else
    {
      ATerm d_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_20 = ATgetFirst((ATermList) t);
          j_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_20 = ATgetFirst((ATermList) t);
          q_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_20;
      t = h_0(t);
      t = n_20;
      t = i_0(t);
      d_21 = t;
      t = (ATerm) ATinsert(CheckATermList(q_20), d_21);
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  if(match_string(t, "-o"))
    {
      t = i_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_21;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL;
  m_21 = t;
  t = term_i_14;
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_14, m_21);
  t = c_5(n_21, m_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_21);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_j_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, a_3, c_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_12;
  t = whoami_0_0(t);
  o_21 = t;
  t = term_o_6;
  q_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_14), o_21);
  r_21 = t;
  t = SSL_printnl(q_21, r_21);
  t = term_d_13;
  p_21 = t;
  t = SSL_exit(p_21);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_4 (ATerm t_34, ATerm u_34, ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_34, u_34);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = SSL_addr(t_34, u_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_21;
      t = o_82(t);
    }
  else
    {
      ATerm y_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_21 = ATgetFirst((ATermList) t);
          v_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_21;
      t = foldr_2_0(o_82, p_82, t);
      y_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_21, y_21);
      t = p_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm m_5 = NULL,q_5 = NULL;
  if(match_cons(t, sym__2))
    {
      m_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(m_5, q_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_22 = NULL,h_5 = NULL,i_5 = NULL;
  t = times_0_0(t);
  i_5 = t;
  t = SSL_explode_term(i_5);
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5;
  t = foldr_2_0(e_3, h_3, t);
  e_22 = t;
  t = SSL_TicksToSeconds(e_22);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  if(match_cons(t, sym__2))
    {
      q_22 = ATgetArgument(t, 0);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_22;
        if((q_22 != t))
          {
            _fail(t);
          }
        t = p_22;
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = (ATerm) ATmakeAppl(sym__2, q_22, r_22);
        {
          ATerm u_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_22, r_22);
              ;
              LocalPopChoice(v_14);
            }
          else
            {
              t = u_14;
              t = SSL_gtr(q_22, r_22);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_22, r_22);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm v_22 = NULL;
  v_22 = t;
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_22 = NULL;
        t = term_s_6;
        t = get_config_0_0(t);
        x_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_22, term_d_13);
        t = geq_0_0(t);
        t = v_22;
        t = s_97(t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = v_22;
      }
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,c_23 = NULL,d_23 = NULL;
  t = run_time_0_0(t);
  z_22 = t;
  t = term_h_12;
  t = whoami_0_0(t);
  a_23 = t;
  t = term_o_6;
  c_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_14), z_22), term_y_14), a_23);
  d_23 = t;
  t = SSL_printnl(c_23, d_23);
  t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_14), z_22), term_y_14), a_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_13;
  e_23 = t;
  t = SSL_exit(e_23);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  n_23 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_23;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_23 = ATgetArgument(t, 0);
          {
            ATerm k_6 = NULL,y_2 = NULL;
            t = SSLgetAnnotations(n_23);
            k_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_23);
            y_2 = t;
            t = SSLsetAnnotations(y_2, k_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_23;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      t = fetch_1_0(j_3, t);
    }
  t = m_70(t);
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm f_24 (ATerm t)
  {
    ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
    c_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_24;
      }
    else
      {
        ATerm v_6 = NULL,d_7 = NULL,e_7 = NULL,b_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_24 = ATgetFirst((ATermList) t);
            e_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_24);
        v_6 = t;
        t = d_24;
        t = w_75(t);
        d_7 = t;
        t = e_24;
        t = f_24(t);
        e_7 = t;
        t = (ATerm) ATinsert(CheckATermList(e_7), d_7);
        b_3 = t;
        t = SSLsetAnnotations(b_3, v_6);
      }
    return(t);
  }
  t = f_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_24 = ATgetFirst((ATermList) t);
      n_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_24 = NULL,s_24 = NULL;
        ATerm m_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_24)), not_null(s_24));
          return(t);
        }
        t = not_null(n_24);
        t = g_0(t);
        if(((r_24 != NULL) && (r_24 != t)))
          _fail(t);
        else
          r_24 = t;
        t = not_null(m_24);
        t = e_0(t);
        if(((s_24 != NULL) && (s_24 != t)))
          _fail(t);
        else
          s_24 = t;
        t = not_null(n_24);
        t = reverse_acc_2_0(e_0, m_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_12;
      t = g_0(t);
    }
  return(t);
}
ATerm z_4 (ATerm g_38, ATerm h_38, ATerm t)
{
  t = SSL_table_get(g_38, h_38);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,d_3 = NULL;
  y_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_24);
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_24);
  d_3 = t;
  t = SSLsetAnnotations(d_3, w_24);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_25), term_h_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      t = fetch_1_0(n_3, t);
    }
  t = term_o_15;
  t = echo_0_0(t);
  t = term_c_14;
  u_24 = t;
  t = term_d_14;
  v_24 = t;
  t = term_p_15;
  t = z_4(u_24, v_24, t);
  t = reverse_acc_2_0(_id, q_3, t);
  t = map_1_0(y_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm x_25 (ATerm t)
  {
    ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
    u_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_25 = ATgetFirst((ATermList) t);
        w_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_7 = NULL,t_7 = NULL,f_3 = NULL;
          t = SSLgetAnnotations(u_25);
          n_7 = t;
          t = v_25;
          t = g_76(t);
          t_7 = t;
          t = (ATerm) ATinsert(CheckATermList(w_25), t_7);
          f_3 = t;
          t = SSLsetAnnotations(f_3, n_7);
          ;
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          {
            ATerm k_8 = NULL,r_8 = NULL,g_3 = NULL;
            t = SSLgetAnnotations(u_25);
            k_8 = t;
            t = w_25;
            t = x_25(t);
            r_8 = t;
            t = (ATerm) ATinsert(CheckATermList(r_8), v_25);
            g_3 = t;
            t = SSLsetAnnotations(g_3, k_8);
          }
        }
    }
    return(t);
  }
  t = x_25(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
  b_26 = t;
  {
    ATerm s_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_15 = ATgetFirst((ATermList) t);
                ATerm y_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_26;
          }
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = s_15;
        t = (ATerm) ATinsert(ATempty, b_26);
      }
    c_26 = t;
    t = term_c_16;
    d_26 = t;
    t = SSL_printnl(d_26, c_26);
    t = b_26;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_14;
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
  ATerm h_26 = NULL,i_26 = NULL;
  t = term_d_16;
  h_26 = t;
  t = term_h_12;
  i_26 = t;
  t = term_f_16;
  t = c_5(h_26, i_26, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  t = term_d_16;
  l_26 = t;
  t = term_h_12;
  m_26 = t;
  t = term_f_16;
  t = c_5(l_26, m_26, t);
  t = term_h_16;
  j_26 = t;
  t = term_h_12;
  k_26 = t;
  t = term_l_16;
  t = c_5(j_26, k_26, t);
  t = term_m_16;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, b_4, c_4, t);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = o_16;
      t = Option_3_0(d_4, e_4, h_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,u_26 = NULL,o_3 = NULL;
  u_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_26 = ATgetFirst((ATermList) t);
      p_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_26);
  n_26 = t;
  t = o_26;
  t = o_63(t);
  q_26 = t;
  t = p_26;
  t = p_63(t);
  r_26 = t;
  t = (ATerm) ATinsert(CheckATermList(r_26), q_26);
  o_3 = t;
  t = SSLsetAnnotations(o_3, n_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,e_27 = NULL,f_27 = NULL,j_5 = NULL;
  if(((z_26 != NULL) && (z_26 != t)))
    _fail(t);
  else
    z_26 = t;
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_17;
        t = p_90(t);
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
      }
    t = not_null(z_26);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_27 != NULL) && (b_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_27 = ATgetFirst((ATermList) t);
        if(((c_27 != NULL) && (c_27 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          c_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(z_26));
    if(((a_27 != NULL) && (a_27 != t)))
      _fail(t);
    else
      a_27 = t;
    t = term_l_14;
    if(((f_27 != NULL) && (f_27 != t)))
      _fail(t);
    else
      f_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_14, not_null(b_27));
    t = c_5(not_null(f_27), not_null(b_27), t);
    t = not_null(c_27);
    {
      ATerm p_27 (ATerm t)
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_17 = t;
            int m_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_27 = NULL;
                i_27 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_27;
                ;
                LocalPopChoice(m_17);
              }
            else
              {
                t = l_17;
                t = p_90(t);
                t = Cons_2_0(_id, p_27, t);
              }
            ;
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            {
              ATerm l_27 = NULL,m_27 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_27 = ATgetFirst((ATermList) t);
                  m_27 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_27), (ATerm) ATmakeAppl(sym_Undefined_1, l_27));
            }
          }
        return(t);
      }
      t = p_27(t);
      if(((e_27 != NULL) && (e_27 != t)))
        _fail(t);
      else
        e_27 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(e_27)), (ATerm) ATmakeAppl(sym_Program_1, not_null(b_27)));
      if(((j_5 != NULL) && (j_5 != t)))
        _fail(t);
      else
        j_5 = t;
      t = SSLsetAnnotations(not_null(j_5), not_null(a_27));
    }
  }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  if(match_string(t, "--help"))
    {
      t = b_28;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_28;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_28;
        }
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL;
  t = term_g_15;
  c_28 = t;
  t = term_h_12;
  d_28 = t;
  t = term_o_17;
  t = c_5(c_28, d_28, t);
  t = term_p_17;
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
ATerm parse_options_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  if(((w_27 != NULL) && (w_27 != t)))
    _fail(t);
  else
    w_27 = t;
  t = term_c_14;
  if(((y_27 != NULL) && (y_27 != t)))
    _fail(t);
  else
    y_27 = t;
  t = term_d_14;
  if(((z_27 != NULL) && (z_27 != t)))
    _fail(t);
  else
    z_27 = t;
  t = (ATerm) ATempty;
  if(((a_28 != NULL) && (a_28 != t)))
    _fail(t);
  else
    a_28 = t;
  t = SSL_table_put(not_null(y_27), not_null(z_27), not_null(a_28));
  t = not_null(w_27);
  {
    ATerm j_4 (ATerm t)
    {
      ATerm u_17 = t;
      int w_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_90(t);
          ;
          LocalPopChoice(w_17);
        }
      else
        {
          t = u_17;
          {
            ATerm x_17 = t;
            int z_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_4, w_4, x_4, t);
                ;
                LocalPopChoice(z_17);
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
      ATerm a_18 = t;
      int b_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_28 = NULL;
          k_28 = t;
          {
            ATerm e_18 = t;
            int h_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_9 = NULL;
                t = k_28;
                {
                  ATerm j_18 = t;
                  int k_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_g_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_18);
                    }
                  else
                    {
                      t = j_18;
                      t = fetch_1_0(d_5, t);
                    }
                  t = k_28;
                  t = default_system_usage_0_0(t);
                  t = term_n_13;
                  c_9 = t;
                  t = SSL_exit(c_9);
                }
                ;
                LocalPopChoice(h_18);
              }
            else
              {
                t = e_18;
                {
                  ATerm j_9 = NULL;
                  t = term_d_16;
                  t = get_config_0_0(t);
                  t = k_28;
                  t = default_system_about_0_0(t);
                  t = term_n_13;
                  j_9 = t;
                  t = SSL_exit(j_9);
                }
              }
          }
          ;
          LocalPopChoice(b_18);
        }
      else
        {
          t = a_18;
          {
            ATerm o_18 = t;
            int p_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
                ATerm f_5 (ATerm t)
                {
                  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,z_5 = NULL;
                  q_28 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      p_28 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_28);
                  o_28 = t;
                  t = p_28;
                  if(((u_27 != NULL) && (u_27 != t)))
                    _fail(t);
                  else
                    u_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, p_28);
                  z_5 = t;
                  t = SSLsetAnnotations(z_5, o_28);
                  return(t);
                }
                t = fetch_1_0(f_5, t);
                t = term_o_6;
                if(((m_28 != NULL) && (m_28 != t)))
                  _fail(t);
                else
                  m_28 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_27)), term_q_18);
                if(((n_28 != NULL) && (n_28 != t)))
                  _fail(t);
                else
                  n_28 = t;
                t = SSL_printnl(not_null(m_28), not_null(n_28));
                t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_27)), term_q_18));
                t = default_system_usage_0_0(t);
                t = term_d_13;
                if(((l_28 != NULL) && (l_28 != t)))
                  _fail(t);
                else
                  l_28 = t;
                t = SSL_exit(not_null(l_28));
                ;
                LocalPopChoice(p_18);
              }
            else
              {
                t = o_18;
              }
          }
        }
      if(((v_27 != NULL) && (v_27 != t)))
        _fail(t);
      else
        v_27 = t;
      t = term_c_14;
      if(((x_27 != NULL) && (x_27 != t)))
        _fail(t);
      else
        x_27 = t;
      t = SSL_table_destroy(not_null(x_27));
      t = not_null(v_27);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  t = parse_options_1_0(o_70, t);
  v_28 = t;
  t = term_r_18;
  y_28 = t;
  t = SSL_table_create(y_28);
  t = term_r_18;
  w_28 = t;
  t = term_s_18;
  x_28 = t;
  t = SSL_table_put(w_28, x_28, v_28);
  t = v_28;
  t = q_70(t);
  {
    ATerm t_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_70, t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = t_18;
        {
          ATerm y_18 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_70(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_19);
            }
          else
            {
              t = y_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(n_5, p_5, r_5, t);
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm p_19 = t;
              int r_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(r_19);
                }
              else
                {
                  t = p_19;
                  t = keep_option_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = xtc_temp_files_1_0(s_5, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL;
  t = term_s_19;
  a_29 = t;
  t = term_h_12;
  b_29 = t;
  t = term_u_19;
  t = c_5(a_29, b_29, t);
  t = term_y_19;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm d_29 = NULL;
  t = term_a_20;
  t = xtc_find_0_0(t);
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_29);
  t = copy_to_1_0(t_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      t = term_c_16;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_5, default_usage_0_0, _id, k_5, t);
  return(t);
}
