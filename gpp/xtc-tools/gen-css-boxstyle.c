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
ATerm term_a_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_e_21;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_v_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_t_14;
ATerm term_c_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_m_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_e_12;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_l_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_a_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_n_10;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_d_7;
ATerm term_l_6;
void init_constant_terms (void)
{
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_p_11, term_x_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_p_11, term_q_11);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_c_14);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym__2, term_o_8, term_t_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__2, term_c_16, term_i_15);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_s_16);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_i_15);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_i_15);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_g_18, term_i_15);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_i_15);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("boxstyle.css", 0, ATtrue));
}
ATerm y_4 (ATerm g_43, ATerm h_43, ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
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
ATerm x_0 (ATerm);
ATerm o_4 (ATerm m_37, ATerm n_37, ATerm o_37, ATerm);
ATerm p_4 (ATerm c_84 (ATerm), ATerm w_37, ATerm v_37, ATerm);
ATerm s_4 (ATerm a_24, ATerm b_24, ATerm);
ATerm m_6 (ATerm g_6, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_4 (ATerm r_47, ATerm);
ATerm r_4 (ATerm i_24, ATerm j_24, ATerm);
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm d_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm h_12 (ATerm y_10, ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm u_4 (ATerm u_36, ATerm v_36, ATerm);
ATerm end_scope_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm r_2 (ATerm);
ATerm u_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm c_5 (ATerm d_54, ATerm e_54, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm a_5 (ATerm p_36, ATerm q_36, ATerm o_36, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm n_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_4 (ATerm t_34, ATerm u_34, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm need_help_1_0 (ATerm m_70 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm z_4 (ATerm g_38, ATerm h_38, ATerm);
ATerm Program_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm w_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_90 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm t_5 (ATerm);
ATerm parse_options_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
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
ATerm r_0 (ATerm t)
{
  ATerm h_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_l_6;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 = NULL;
      c_1 = t;
      t = SSL_is_string(c_1);
      ;
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      {
        ATerm y_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_0, t);
            ;
            LocalPopChoice(a_7);
          }
        else
          {
            t = y_6;
            {
              ATerm t_1 = NULL,u_1 = NULL,y_1 = NULL;
              t_1 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_1 = ATgetArgument(t, 0);
                  t = u_1;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_1 = ATgetArgument(t, 0);
                      t = u_1;
                      {
                        ATerm b_7 = t;
                        int c_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_7);
                          }
                        else
                          {
                            t = b_7;
                            t = debug_1_0(s_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_2 = NULL,h_2 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_1 = ATgetArgument(t, 0);
                          y_1 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_1;
                      t = eval_config_0_0(t);
                      g_2 = t;
                      t = y_1;
                      t = eval_config_0_0(t);
                      h_2 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_2, h_2);
                      t = y_4(g_2, h_2, t);
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
  ATerm k_2 = NULL,m_2 = NULL;
  k_2 = t;
  t = term_d_7;
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_7, k_2);
  t = z_4(m_2, k_2, t);
  {
    ATerm e_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 = NULL,q_2 = NULL;
        t = eval_config_0_0(t);
        n_2 = t;
        t = term_d_7;
        q_2 = t;
        t = SSL_table_put(q_2, k_2, n_2);
        t = n_2;
        ;
        LocalPopChoice(f_7);
      }
    else
      {
        t = e_7;
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
  ATerm l_3 = NULL,m_3 = NULL;
  l_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL;
        t = l_3;
        t = k_0(t);
        v_0 = t;
        {
          ATerm i_7 = t;
          int j_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(j_7);
            }
          else
            {
              t = i_7;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_3, v_0);
          t = t_4(m_3, v_0, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_3);
        }
        ;
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        {
          ATerm k_7 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_1 = NULL;
              t = l_3;
              t = k_0(t);
              f_1 = t;
              {
                ATerm x_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm y_7 = t;
                    int f_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(f_8);
                      }
                    else
                      {
                        t = y_7;
                        {
                          ATerm j_8 = t;
                          int k_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(k_8);
                            }
                          else
                            {
                              t = j_8;
                              {
                                ATerm g_1 = NULL;
                                g_1 = t;
                                if((m_3 != t))
                                  {
                                    _fail(t);
                                  }
                                t = g_1;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_7;
                  }
                t = (ATerm) ATmakeAppl(sym__2, m_3, f_1);
                t = t_4(m_3, f_1, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_3);
              }
              ;
              LocalPopChoice(s_7);
            }
          else
            {
              t = k_7;
              t = l_3;
              t = k_0(t);
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
ATerm debug_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,w_3 = NULL;
  r_3 = t;
  t = g_88(t);
  s_3 = t;
  t = term_l_8;
  t_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_3), s_3);
  w_3 = t;
  t = SSL_printnl(t_3, w_3);
  t = r_3;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_3 = NULL;
  y_3 = t;
  t = SSL_table_keys(y_3);
  {
    ATerm t_0 (ATerm t)
    {
      ATerm a_4 = NULL,b_4 = NULL;
      a_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_3, a_4);
      t = z_4(y_3, a_4, t);
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_4, b_4);
      return(t);
    }
    t = map_1_0(t_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_4 = NULL,j_4 = NULL;
      e_4 = t;
      t = term_o_8;
      t = get_config_0_0(t);
      j_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_4, term_p_8);
      t = geq_0_0(t);
      t = e_4;
      t = w_97(t);
      ;
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm s_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_4 = NULL,x_4 = NULL;
      l_4 = t;
      t = term_o_8;
      t = get_config_0_0(t);
      x_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_4, term_w_8);
      t = geq_0_0(t);
      t = l_4;
      t = v_97(t);
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = s_8;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_5 = NULL,e_5 = NULL;
      b_5 = t;
      t = term_o_8;
      t = get_config_0_0(t);
      e_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_5, term_b_9);
      t = geq_0_0(t);
      t = b_5;
      t = x_97(t);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
    }
  return(t);
}
ATerm m_4 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm k_31, ATerm j_31, ATerm t)
{
  t = e_80(t);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm f_5 = NULL;
      f_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_31, f_5);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(u_0, t);
    t = j_31;
  }
  return(t);
}
ATerm n_4 (ATerm a_80 (ATerm), ATerm g_31, ATerm f_31, ATerm t)
{
  t = g_31;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm d_9 = t;
      int e_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_31;
          ;
          LocalPopChoice(e_9);
        }
      else
        {
          t = d_9;
          {
            ATerm f_9 = t;
            int g_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_5 = NULL,k_5 = NULL,l_5 = NULL;
                i_5 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    k_5 = ATgetFirst((ATermList) t);
                    l_5 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_5;
                {
                  ATerm w_0 (ATerm t)
                  {
                    t = f_31;
                    return(t);
                  }
                  t = m_4(a_80, w_0, k_5, l_5, t);
                  t = o_5(t);
                }
                ;
                LocalPopChoice(g_9);
              }
            else
              {
                t = f_9;
                t = Cons_2_0(_id, o_5, t);
              }
          }
        }
      return(t);
    }
    t = o_5(t);
  }
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      w_5 = ATgetArgument(t, 0);
      if((w_5 != ATgetArgument(t, 1)))
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
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  q_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_37, n_37);
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_9 = ATgetArgument(t, 0);
            ATerm v_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_37, n_37);
        t = z_4(m_37, n_37, t);
        ;
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        t = (ATerm) ATempty;
      }
    r_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_5, o_37);
    t = n_4(x_0, r_5, o_37, t);
    s_5 = t;
    t = SSL_table_put(m_37, n_37, s_5);
    t = q_5;
  }
  return(t);
}
ATerm p_4 (ATerm c_84 (ATerm), ATerm w_37, ATerm v_37, ATerm t)
{
  t = v_37;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm x_5 = NULL,y_5 = NULL;
      if(match_cons(t, sym__2))
        {
          x_5 = ATgetArgument(t, 0);
          y_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, w_37, x_5, y_5);
      t = c_84(t);
      return(t);
    }
    t = map_1_0(y_0, t);
  }
  return(t);
}
ATerm s_4 (ATerm a_24, ATerm b_24, ATerm t)
{
  t = SSL_access(a_24, b_24);
  return(t);
}
ATerm m_6 (ATerm g_6, ATerm t)
{
  t = SSL_fclose(g_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL;
  k_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_6 = ATgetArgument(t, 0);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_6);
            ;
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            t = m_6(k_6, t);
          }
      }
    }
  else
    {
      t = m_6(k_6, t);
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
  ATerm n_6 = NULL;
  t = SSL_fopen(i_24, j_24);
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_6);
  return(t);
}
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,b_0 = NULL,f_0 = NULL;
  t_6 = t;
  if(match_cons(t, sym__2))
    {
      p_6 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_6);
  o_6 = t;
  t = p_6;
  t = z_58(t);
  r_6 = t;
  t = q_6;
  t = a_59(t);
  s_6 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_6, s_6);
  b_0 = t;
  t = SSLsetAnnotations(b_0, o_6);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_6 = NULL;
  t = SSL_stdin_stream();
  w_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_6 = NULL;
  t = SSL_stdout_stream();
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_6 = NULL;
  t = SSL_stderr_stream();
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_6);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm o_7 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      o_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7;
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm r_7 = NULL;
  r_7 = t;
  t = SSL_is_string(r_7);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      ATerm a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_7 = NULL,v_1 = NULL;
        l_7 = t;
        t = SSL_explode_term(l_7);
        if(match_cons(t, sym__2))
          {
            ATerm e_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_10) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_10 = ATgetArgument(t, 1);
              if(((ATgetType(f_10) == AT_LIST) && !(ATisEmpty(f_10))))
                {
                  v_1 = ATgetFirst((ATermList) f_10);
                  {
                    ATerm g_10 = (ATerm) ATgetNext((ATermList) f_10);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = v_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = v_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = v_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        {
          ATerm l_10 = t;
          int m_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_7 = NULL,n_7 = NULL;
              t = _2_0(z_0, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_7 = ATgetArgument(t, 0);
                  n_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_4(m_7, n_7, t);
              ;
              LocalPopChoice(m_10);
            }
          else
            {
              t = l_10;
              {
                ATerm p_7 = NULL,q_7 = NULL;
                t = _2_0(a_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_7 = ATgetArgument(t, 0);
                    q_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_4(p_7, q_7, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  ATerm o_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_7 = NULL;
      w_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_7, term_u_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = o_10;
      t = debug_1_0(b_1, t);
      _fail(t);
    }
  t_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(v_7, t);
  u_7 = t;
  t = t_7;
  t = fclose_0_0(t);
  t = u_7;
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm x_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_7 = NULL,a_8 = NULL;
      z_7 = t;
      t = (ATerm) ATinsert(ATempty, term_a_11);
      a_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_7, (ATerm) ATinsert(ATempty, term_a_11));
      t = s_4(z_7, a_8, t);
      LocalPopChoice(z_10);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_10;
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_11 = t;
            if((PushChoice() == 0))
              {
                ATerm b_8 = NULL,c_8 = NULL;
                b_8 = t;
                t = (ATerm) ATinsert(ATempty, term_e_11);
                c_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_8, (ATerm) ATinsert(ATempty, term_e_11));
                t = s_4(b_8, c_8, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_11;
              }
            t = debug_1_0(d_1, t);
            ;
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            t = debug_1_0(e_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = debug_1_0(i_1, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  h_9 = t;
  t = term_l_8;
  i_9 = t;
  t = (ATerm) ATinsert(ATempty, term_h_11);
  j_9 = t;
  t = SSL_printnl(i_9, j_9);
  t = h_9;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  if(match_cons(t, sym__3))
    {
      k_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
      m_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_4(k_9, l_9, m_9, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
  p_9 = t;
  t = term_l_8;
  q_9 = t;
  t = (ATerm) ATinsert(ATempty, term_l_11);
  r_9 = t;
  t = SSL_printnl(q_9, r_9);
  t = p_9;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,z_9 = NULL;
  t_9 = t;
  t = term_l_8;
  u_9 = t;
  t = (ATerm) ATinsert(ATempty, term_h_11);
  z_9 = t;
  t = SSL_printnl(u_9, z_9);
  t = t_9;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,q_8 = NULL,r_8 = NULL,t_8 = NULL,u_8 = NULL,x_8 = NULL;
  d_8 = t;
  t = if_verbose5_1_0(h_1, t);
  {
    ATerm o_11 = t;
    if((PushChoice() == 0))
      {
        ATerm y_8 = NULL,c_9 = NULL;
        t = term_p_11;
        y_8 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_8);
        c_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_11, (ATerm) ATmakeAppl(sym_Imported_1, d_8));
        t = z_4(y_8, c_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_11;
      }
    e_8 = t;
    t = term_p_11;
    h_8 = t;
    t = term_q_11;
    i_8 = t;
    t = (ATerm) ATinsert(ATempty, d_8);
    q_8 = t;
    t = SSL_table_put(h_8, i_8, q_8);
    t = e_8;
    t = if_verbose4_1_0(j_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(l_1, t);
    g_8 = t;
    t = term_p_11;
    r_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_11, g_8);
    t = p_4(m_1, r_8, g_8, t);
    t = if_verbose6_1_0(n_1, t);
    t = term_p_11;
    t_8 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, d_8);
    u_8 = t;
    t = (ATerm) ATempty;
    x_8 = t;
    t = SSL_table_put(t_8, u_8, x_8);
    t = (ATerm) ATmakeAppl(sym__3, term_p_11, (ATerm)ATmakeAppl(sym_Imported_1, d_8), (ATerm) ATempty);
    t = if_verbose4_1_0(o_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              t = filter_1_0(d_84, t);
              return(t);
            }
            t = Cons_2_0(d_84, p_1, t);
            ;
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            {
              ATerm d_10 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_11 = ATgetFirst((ATermList) t);
                  d_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = d_10;
              t = filter_1_0(d_84, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm h_10 (ATerm t)
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_85(t);
        t = h_10(t);
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
      }
    return(t);
  }
  t = h_10(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm f_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_10 = NULL;
            t = term_s_12;
            i_10 = t;
            t = SSL_getenv(i_10);
            ;
            LocalPopChoice(i_12);
          }
        else
          {
            t = f_12;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_u_12;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  t = term_p_11;
  r_10 = t;
  t = term_x_12;
  s_10 = t;
  t = term_a_13;
  t = z_4(r_10, s_10, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm b_13 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_13;
      }
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm j_10 = NULL;
  t = if_verbose5_1_0(q_1, t);
  j_10 = t;
  {
    ATerm d_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_10 = NULL,p_10 = NULL;
        t = term_p_11;
        k_10 = t;
        t = term_q_11;
        p_10 = t;
        t = term_g_13;
        t = z_4(k_10, p_10, t);
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = d_13;
        {
          ATerm q_10 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          q_10 = t;
          t = repeat_1_0(s_1, t);
          t = q_10;
        }
      }
    t = j_10;
    t = if_verbose5_1_0(w_1, t);
  }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm h_12 (ATerm y_10, ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  t = term_p_11;
  j_11 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_10);
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, (ATerm) ATmakeAppl(sym_Tool_1, y_10));
  t = z_4(j_11, k_11, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_13 = ATgetFirst((ATermList) t);
      if(match_cons(i_13, sym__2))
        {
          ATerm k_13 = ATgetArgument(i_13, 0);
          i_11 = ATgetArgument(i_13, 1);
        }
      else
        _fail(t);
      {
        ATerm j_13 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_11;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_p_11;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(z_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm m_11 = NULL,n_11 = NULL,r_11 = NULL;
        r_11 = t;
        if(match_cons(t, sym__2))
          {
            m_11 = ATgetArgument(t, 0);
            n_11 = ATgetArgument(t, 1);
            {
              ATerm r_13 = t;
              int t_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
                  t = term_p_11;
                  y_11 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, m_11);
                  z_11 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_p_11, (ATerm) ATmakeAppl(sym_Tool_1, m_11));
                  t = z_4(y_11, z_11, t);
                  {
                    ATerm b_2 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((n_11 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((x_11 != NULL) && (x_11 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            x_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(b_2, t);
                    t = not_null(x_11);
                  }
                  ;
                  LocalPopChoice(t_13);
                }
              else
                {
                  t = r_13;
                  t = h_12(r_11, t);
                }
            }
          }
        else
          {
            t = h_12(r_11, t);
          }
        t = if_verbose5_1_0(d_2, t);
      }
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm g_12 = NULL,c_2 = NULL,f_2 = NULL;
        g_12 = t;
        t = term_l_8;
        c_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_13), g_12), term_u_13);
        f_2 = t;
        t = SSL_printnl(c_2, f_2);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_13), g_12), term_u_13);
        t = if_verbose5_1_0(i_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm u_4 (ATerm u_36, ATerm v_36, ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  j_12 = t;
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
        t = z_4(u_36, v_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_13 = ATgetFirst((ATermList) t);
            k_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_13);
        t = SSL_table_put(u_36, v_36, k_12);
        t = (ATerm) ATmakeAppl(sym__3, u_36, v_36, k_12);
      }
    else
      {
        t = w_13;
        t = SSL_table_remove(u_36, v_36);
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
      }
    t = j_12;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  l_12 = t;
  t = w_83(t);
  m_12 = t;
  {
    ATerm z_13 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_12 = NULL;
        t = term_c_14;
        q_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_12, term_c_14);
        t = z_4(m_12, q_12, t);
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = z_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_12 = ATgetFirst((ATermList) t);
        n_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_14;
    p_12 = t;
    t = SSL_table_put(m_12, p_12, n_12);
    t = o_12;
    {
      ATerm l_2 (ATerm t)
      {
        ATerm r_12 = NULL;
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_12, r_12);
        t = u_4(m_12, r_12, t);
        return(t);
      }
      t = map_1_0(l_2, t);
      t = l_12;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm t)
{
  ATerm i_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_74(t);
      t = u_74(t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = i_14;
      t = u_74(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,v_12 = NULL,w_12 = NULL,y_12 = NULL,z_12 = NULL;
  t_12 = t;
  t = v_83(t);
  v_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_12, term_c_14);
  {
    ATerm l_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_13 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_14 = ATgetArgument(t, 0);
            ATerm s_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_14;
        e_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_12, term_c_14);
        t = z_4(v_12, e_13, t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = l_14;
        t = (ATerm) ATempty;
      }
    w_12 = t;
    t = term_c_14;
    y_12 = t;
    t = (ATerm) ATinsert(CheckATermList(w_12), (ATerm) ATempty);
    z_12 = t;
    t = SSL_table_put(v_12, y_12, z_12);
    t = t_12;
  }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_14 = NULL;
      a_14 = t;
      t = SSL_remove(a_14);
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm l_13 = NULL;
  t = begin_scope_1_0(o_2, t);
  {
    ATerm p_2 (ATerm t)
    {
      ATerm n_13 = NULL;
      n_13 = t;
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_13 = NULL,s_13 = NULL;
            t = term_t_14;
            q_13 = t;
            t = term_c_14;
            s_13 = t;
            t = term_g_15;
            t = z_4(q_13, s_13, t);
            ;
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((l_13 != NULL) && (l_13 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              l_13 = ATgetFirst((ATermList) t);
            {
              ATerm h_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(l_13);
        t = map_1_0(r_2, t);
        t = n_13;
        t = end_scope_1_0(u_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(u_98, p_2, t);
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  d_14 = t;
  t = term_i_15;
  t = whoami_0_0(t);
  e_14 = t;
  t = term_l_8;
  f_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_15), e_14), term_j_15);
  g_14 = t;
  t = SSL_printnl(f_14, g_14);
  t = term_q_15;
  h_14 = t;
  t = SSL_exit(h_14);
  t = d_14;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  if(match_string(t, "-k"))
    {
      t = j_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_14;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  t = SSL_string_to_int(m_14);
  n_14 = t;
  t = term_r_15;
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_15, n_14);
  t = c_5(o_14, n_14, t);
  t = m_14;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, w_2, x_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  if(match_string(t, "-S"))
    {
      t = r_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_14;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  t = term_o_8;
  u_14 = t;
  t = term_t_15;
  v_14 = t;
  t = term_u_15;
  t = c_5(u_14, v_14, t);
  t = term_w_15;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_y_15;
  return(t);
}
ATerm d_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm w_14 = NULL,b_15 = NULL,c_15 = NULL;
  w_14 = t;
  t = SSL_string_to_int(w_14);
  b_15 = t;
  t = term_o_8;
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, b_15);
  t = c_5(c_15, b_15, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_14);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_b_16;
  return(t);
}
ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  t = term_c_16;
  d_15 = t;
  t = term_i_15;
  e_15 = t;
  t = term_d_16;
  t = c_5(d_15, e_15, t);
  t = term_e_16;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_2, a_3, c_3, t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = g_16;
      {
        ATerm j_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_3, e_3, f_3, t);
            ;
            LocalPopChoice(q_16);
          }
        else
          {
            t = j_16;
            t = Option_3_0(g_3, h_3, i_3, t);
          }
      }
    }
  return(t);
}
ATerm c_5 (ATerm d_54, ATerm e_54, ATerm t)
{
  ATerm f_15 = NULL;
  t = term_d_7;
  f_15 = t;
  t = SSL_table_put(f_15, d_54, e_54);
  t = (ATerm) ATmakeAppl(sym__3, term_d_7, d_54, e_54);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_15 = NULL,n_15 = NULL,p_15 = NULL;
      t = term_i_15;
      t = d_0(t);
      m_15 = t;
      t = term_r_16;
      n_15 = t;
      t = term_s_16;
      p_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_16, term_s_16, m_15);
      t = a_5(n_15, p_15, m_15, t);
      _fail(t);
    }
  else
    {
      ATerm v_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_15 = ATgetFirst((ATermList) t);
          l_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_15;
      t = a_0(t);
      t = term_i_15;
      t = c_0(t);
      v_15 = t;
      t = (ATerm) ATinsert(CheckATermList(l_15), v_15);
    }
  return(t);
}
ATerm a_5 (ATerm p_36, ATerm q_36, ATerm o_36, ATerm t)
{
  ATerm x_15 = NULL,z_15 = NULL,a_16 = NULL;
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_17 = ATgetArgument(t, 0);
            ATerm e_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
        t = z_4(p_36, q_36, t);
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        t = (ATerm) ATempty;
      }
    z_15 = t;
    t = (ATerm) ATinsert(CheckATermList(z_15), o_36);
    a_16 = t;
    t = SSL_table_put(p_36, q_36, a_16);
    t = x_15;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
      t = term_i_15;
      t = j_0(t);
      n_16 = t;
      t = term_r_16;
      o_16 = t;
      t = term_s_16;
      p_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_16, term_s_16, n_16);
      t = a_5(o_16, p_16, n_16, t);
      _fail(t);
    }
  else
    {
      ATerm t_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_16 = ATgetFirst((ATermList) t);
          k_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_16 = ATgetFirst((ATermList) t);
          m_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_16;
      t = h_0(t);
      t = l_16;
      t = i_0(t);
      t_16 = t;
      t = (ATerm) ATinsert(CheckATermList(m_16), t_16);
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  if(match_string(t, "-o"))
    {
      t = w_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_16;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  x_16 = t;
  t = term_f_17;
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_17, x_16);
  t = c_5(y_16, x_16, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_16);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_3, k_3, n_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_15;
  t = whoami_0_0(t);
  z_16 = t;
  t = term_l_8;
  a_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_17), z_16);
  b_17 = t;
  t = SSL_printnl(a_17, b_17);
  t = term_q_15;
  c_17 = t;
  t = SSL_exit(c_17);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_4 (ATerm t_34, ATerm u_34, ATerm t)
{
  ATerm l_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_34, u_34);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = l_17;
      t = SSL_addr(t_34, u_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_82(t);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      {
        ATerm h_17 = NULL,i_17 = NULL,m_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_17 = ATgetFirst((ATermList) t);
            i_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_17;
        t = foldr_2_0(o_82, p_82, t);
        m_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_17, m_17);
        t = p_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_t_15;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm z_2 = NULL,b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(z_2, b_3, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_17 = NULL,s_2 = NULL,t_2 = NULL;
  t = times_0_0(t);
  s_2 = t;
  t = SSL_explode_term(s_2);
  if(match_cons(t, sym__2))
    {
      ATerm q_17 = ATgetArgument(t, 0);
      t_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_2;
  t = foldr_2_0(o_3, p_3, t);
  r_17 = t;
  t = SSL_TicksToSeconds(r_17);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_18;
        if((l_18 != t))
          {
            _fail(t);
          }
        t = k_18;
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
        t = (ATerm) ATmakeAppl(sym__2, l_18, m_18);
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_18, m_18);
              ;
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
              t = SSL_gtr(l_18, m_18);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_18, m_18);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_18 = NULL,u_18 = NULL;
      s_18 = t;
      t = term_o_8;
      t = get_config_0_0(t);
      u_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_18, term_q_15);
      t = geq_0_0(t);
      t = s_18;
      t = s_97(t);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,a_19 = NULL;
  t = run_time_0_0(t);
  w_18 = t;
  t = term_i_15;
  t = whoami_0_0(t);
  x_18 = t;
  t = term_l_8;
  y_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_17), w_18), term_y_17), x_18);
  a_19 = t;
  t = SSL_printnl(y_18, a_19);
  t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_17), w_18), term_y_17), x_18));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_15;
  b_19 = t;
  t = SSL_exit(b_19);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
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
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      t = fetch_1_0(u_3, t);
    }
  t = m_70(t);
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm c_19 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = Cons_2_0(w_75, c_19, t);
      }
    return(t);
  }
  t = c_19(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_19 = ATgetFirst((ATermList) t);
      i_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_19 = NULL,u_19 = NULL;
        t = i_19;
        t = g_0(t);
        r_19 = t;
        t = h_19;
        t = e_0(t);
        u_19 = t;
        t = i_19;
        {
          ATerm v_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(r_19), u_19);
            return(t);
          }
          t = reverse_acc_2_0(e_0, v_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_15;
      t = g_0(t);
    }
  return(t);
}
ATerm z_4 (ATerm g_38, ATerm h_38, ATerm t)
{
  t = SSL_table_get(g_38, h_38);
  return(t);
}
ATerm Program_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,c_20 = NULL,l_0 = NULL,m_0 = NULL;
  c_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_20);
  x_19 = t;
  t = y_19;
  t = n_68(t);
  z_19 = t;
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_19);
  l_0 = t;
  t = SSLsetAnnotations(l_0, x_19);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_20), term_j_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_20 = NULL,k_20 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      t = fetch_1_0(x_3, t);
    }
  t = term_p_18;
  t = echo_0_0(t);
  t = term_r_16;
  i_20 = t;
  t = term_s_16;
  k_20 = t;
  t = term_q_18;
  t = z_4(i_20, k_20, t);
  t = reverse_acc_2_0(_id, z_3, t);
  t = map_1_0(c_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_68 (ATerm), ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,n_0 = NULL,o_0 = NULL;
  r_20 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      p_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_20);
  o_20 = t;
  t = p_20;
  t = o_68(t);
  q_20 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_20);
  n_0 = t;
  t = SSLsetAnnotations(n_0, o_20);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm u_20 (ATerm t)
  {
    ATerm r_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = r_18;
        t = Cons_2_0(_id, u_20, t);
      }
    return(t);
  }
  t = u_20(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  {
    ATerm v_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_19 = ATgetFirst((ATermList) t);
                ATerm e_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_20;
          }
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = v_18;
        t = (ATerm) ATinsert(ATempty, w_20);
      }
    x_20 = t;
    t = term_f_19;
    y_20 = t;
    t = SSL_printnl(y_20, x_20);
    t = w_20;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL;
  t = term_g_19;
  f_21 = t;
  t = term_i_15;
  g_21 = t;
  t = term_j_19;
  t = c_5(f_21, g_21, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_k_19;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  t = term_g_19;
  h_21 = t;
  t = term_i_15;
  i_21 = t;
  t = term_j_19;
  t = c_5(h_21, i_21, t);
  t = term_l_19;
  j_21 = t;
  t = term_i_15;
  k_21 = t;
  t = term_m_19;
  t = c_5(j_21, k_21, t);
  t = term_n_19;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_4, f_4, h_4, t);
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      t = Option_3_0(i_4, k_4, w_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,p_0 = NULL,q_0 = NULL;
  q_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_21 = ATgetFirst((ATermList) t);
      n_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_21);
  l_21 = t;
  t = m_21;
  t = o_63(t);
  o_21 = t;
  t = n_21;
  t = p_63(t);
  p_21 = t;
  q_0 = t;
  t = (ATerm) ATinsert(CheckATermList(p_21), o_21);
  p_0 = t;
  t = SSLsetAnnotations(p_0, l_21);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  v_21 = t;
  t = term_k_17;
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_17, v_21);
  t = c_5(w_21, v_21, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, v_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_19;
        t = p_90(t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
      }
    t = u_21;
    {
      ATerm h_5 (ATerm t)
      {
        ATerm w_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_20 = t;
            int d_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_20);
              }
            else
              {
                t = b_20;
                t = p_90(t);
                t = Cons_2_0(_id, h_5, t);
              }
            ;
            LocalPopChoice(a_20);
          }
        else
          {
            t = w_19;
            {
              ATerm y_21 = NULL,z_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_21 = ATgetFirst((ATermList) t);
                  z_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_21), (ATerm) ATmakeAppl(sym_Undefined_1, y_21));
            }
          }
        return(t);
      }
      t = Cons_2_0(d_5, h_5, t);
    }
  }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  if(match_string(t, "--help"))
    {
      t = n_22;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_22;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_22;
        }
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  t = term_g_18;
  o_22 = t;
  t = term_i_15;
  p_22 = t;
  t = term_e_20;
  t = c_5(o_22, p_22, t);
  t = term_f_20;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  g_22 = t;
  t = term_r_16;
  j_22 = t;
  t = term_s_16;
  k_22 = t;
  t = (ATerm) ATempty;
  l_22 = t;
  t = SSL_table_put(j_22, k_22, l_22);
  t = g_22;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm h_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_90(t);
          ;
          LocalPopChoice(j_20);
        }
      else
        {
          t = h_20;
          {
            ATerm l_20 = t;
            int m_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_5, n_5, p_5, t);
                ;
                LocalPopChoice(m_20);
              }
            else
              {
                t = l_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_5, t);
    {
      ATerm s_20 = t;
      int t_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_22 = NULL;
          w_22 = t;
          {
            ATerm v_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_4 = NULL;
                t = w_22;
                {
                  ATerm a_21 = t;
                  int b_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_g_18;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_21);
                    }
                  else
                    {
                      t = a_21;
                      t = fetch_1_0(t_5, t);
                    }
                  t = w_22;
                  t = default_system_usage_0_0(t);
                  t = term_t_15;
                  g_4 = t;
                  t = SSL_exit(g_4);
                }
                ;
                LocalPopChoice(z_20);
              }
            else
              {
                t = v_20;
                {
                  ATerm g_5 = NULL;
                  t = term_g_19;
                  t = get_config_0_0(t);
                  t = w_22;
                  t = default_system_about_0_0(t);
                  t = term_t_15;
                  g_5 = t;
                  t = SSL_exit(g_5);
                }
              }
          }
          ;
          LocalPopChoice(t_20);
        }
      else
        {
          t = s_20;
          {
            ATerm c_21 = t;
            int d_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
                ATerm u_5 (ATerm t)
                {
                  ATerm v_5 (ATerm t)
                  {
                    if(((h_22 != NULL) && (h_22 != t)))
                      _fail(t);
                    else
                      h_22 = t;
                    return(t);
                  }
                  t = Undefined_1_0(v_5, t);
                  return(t);
                }
                t = fetch_1_0(u_5, t);
                t = term_l_8;
                x_22 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_22)), term_e_21);
                y_22 = t;
                t = SSL_printnl(x_22, y_22);
                t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_22)), term_e_21));
                t = default_system_usage_0_0(t);
                t = term_q_15;
                z_22 = t;
                t = SSL_exit(z_22);
                ;
                LocalPopChoice(d_21);
              }
            else
              {
                t = c_21;
              }
          }
        }
      i_22 = t;
      t = term_r_16;
      m_22 = t;
      t = SSL_table_destroy(m_22);
      t = i_22;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  t = parse_options_1_0(o_70, t);
  c_23 = t;
  t = term_r_21;
  d_23 = t;
  t = SSL_table_create(d_23);
  t = term_r_21;
  e_23 = t;
  t = term_s_21;
  f_23 = t;
  t = SSL_table_put(e_23, f_23, c_23);
  t = c_23;
  t = q_70(t);
  {
    ATerm t_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_70, t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = t_21;
        {
          ATerm a_22 = t;
          int b_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_70(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_22);
            }
          else
            {
              t = a_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(b_6, c_6, d_6, t);
            ;
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            {
              ATerm q_22 = t;
              int r_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(r_22);
                }
              else
                {
                  t = q_22;
                  t = keep_option_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = xtc_temp_files_1_0(e_6, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL;
  t = term_s_22;
  g_23 = t;
  t = term_i_15;
  h_23 = t;
  t = term_t_22;
  t = c_5(g_23, h_23, t);
  t = term_u_22;
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm i_23 = NULL;
  t = term_a_23;
  t = xtc_find_0_0(t);
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_23);
  t = copy_to_1_0(f_6, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm b_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = b_23;
      t = term_f_19;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_5, default_usage_0_0, _id, a_6, t);
  return(t);
}
