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
ATerm term_a_27;
ATerm term_v_26;
ATerm term_m_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_j_25;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_v_21;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_i_14;
ATerm term_p_13;
ATerm term_z_12;
ATerm term_d_12;
ATerm term_x_11;
ATerm term_k_10;
ATerm term_e_9;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_o_6;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_h_5;
ATerm term_w_4;
ATerm term_p_4;
ATerm term_o_4;
ATerm term_m_4;
ATerm term_l_4;
ATerm term_e_4;
ATerm term_d_4;
ATerm term_c_4;
ATerm term_b_4;
void init_constant_terms (void)
{
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym__2, term_e_4, term_l_4);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_e_4, term_h_8);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_a_22, term_v_21);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_b_4, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_q_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_b_23, term_q_22);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_n_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_q_22);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym__2, term_u_25, term_q_22);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__2, term_f_24, term_q_22);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__3, term_m_24, term_n_24, (ATerm) ATempty);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("boxstyle.css", 0, ATtrue));
}
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm u_97 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm s_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm t_97 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm);
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm a_84 (ATerm), ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm r_8 (ATerm i_8, ATerm j_8, ATerm);
ATerm s_8 (ATerm m_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm u_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm v_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_file_0_0 (ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm u_83 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm s_98 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm xtc_output_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm output_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm);
ATerm crush_2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_97 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm need_help_1_0 (ATerm l_70 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm k_90 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_68 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm k_89 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm);
ATerm is_string_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm b_19 (ATerm k_18, ATerm l_18, ATerm);
ATerm h_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm d_74 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm p_90 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_90 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm i_21 (ATerm d_21, ATerm);
ATerm parse_options_1_0 (ATerm m_90 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm io_gen_css_boxstyle_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm v_5 = NULL;
  if(((v_5 != NULL) && (v_5 != t)))
    _fail(t);
  else
    v_5 = t;
  t = SSL_table_keys(not_null(v_5));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_5 = NULL;
  if(((w_5 != NULL) && (w_5 != t)))
    _fail(t);
  else
    w_5 = t;
  t = table_keys_0_0(t);
  {
    ATerm c_0 (ATerm t)
    {
      ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
      if(((x_5 != NULL) && (x_5 != t)))
        _fail(t);
      else
        x_5 = t;
      if(((y_5 != NULL) && (y_5 != t)))
        _fail(t);
      else
        y_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_5), not_null(x_5));
      t = table_get_0_0(t);
      if(((z_5 != NULL) && (z_5 != t)))
        _fail(t);
      else
        z_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_5), not_null(z_5));
      return(t);
    }
    t = map_1_0(c_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm u_97 (ATerm), ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
    if(((a_6 != NULL) && (a_6 != t)))
      _fail(t);
    else
      a_6 = t;
    if(((b_6 != NULL) && (b_6 != t)))
      _fail(t);
    else
      b_6 = t;
    t = term_b_4;
    t = get_config_0_0(t);
    if(((c_6 != NULL) && (c_6 != t)))
      _fail(t);
    else
      c_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), term_c_4);
    t = geq_0_0(t);
    t = not_null(a_6);
    t = u_97(t);
    return(t);
  }
  t = try_1_0(e_0, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  if(((d_6 != NULL) && (d_6 != t)))
    _fail(t);
  else
    d_6 = t;
  if(((e_6 != NULL) && (e_6 != t)))
    _fail(t);
  else
    e_6 = t;
  if(((f_6 != NULL) && (f_6 != t)))
    _fail(t);
  else
    f_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_4, not_null(f_6));
  t = printnl_0_0(t);
  t = not_null(d_6);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
  if(((g_6 != NULL) && (g_6 != t)))
    _fail(t);
  else
    g_6 = t;
  if(((h_6 != NULL) && (h_6 != t)))
    _fail(t);
  else
    h_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_4, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_6)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_4 = ATgetFirst((ATermList) t);
      if(match_cons(f_4, sym__2))
        {
          if(((i_6 != NULL) && (i_6 != ATgetArgument(f_4, 0))))
            _fail(ATgetArgument(f_4, 0));
          else
            i_6 = ATgetArgument(f_4, 0);
          if(((j_6 != NULL) && (j_6 != ATgetArgument(f_4, 1))))
            _fail(ATgetArgument(f_4, 1));
          else
            j_6 = ATgetArgument(f_4, 1);
        }
      else
        _fail(t);
      {
        ATerm g_4 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(j_6);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_6 != NULL) && (k_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_6 = ATgetArgument(t, 0);
      if(((l_6 != NULL) && (l_6 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_6 != NULL) && (m_6 != t)))
    _fail(t);
  else
    m_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_4, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_6)));
  t = table_get_0_0(t);
  {
    ATerm l_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((l_6 != NULL) && (l_6 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_6 = ATgetArgument(t, 0);
          if(((n_6 != NULL) && (n_6 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(l_0, t);
    t = not_null(n_6);
  }
  return(t);
}
ATerm filter_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm h_4 = t;
  int i_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(i_4);
    }
  else
    {
      t = h_4;
      {
        ATerm j_4 = t;
        int k_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_0 (ATerm t)
            {
              t = filter_1_0(b_84, t);
              return(t);
            }
            t = Cons_2_0(b_84, m_0, t);
            ;
            LocalPopChoice(k_4);
          }
        else
          {
            t = j_4;
            {
              ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
              if(((p_6 != NULL) && (p_6 != t)))
                _fail(t);
              else
                p_6 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((q_6 != NULL) && (q_6 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    q_6 = ATgetFirst((ATermList) t);
                  if(((r_6 != NULL) && (r_6 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    r_6 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(r_6);
              if(((s_6 != NULL) && (s_6 != t)))
                _fail(t);
              else
                s_6 = t;
              t = filter_1_0(b_84, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm n_0 (ATerm t)
    {
      t = v_85(t);
      t = t_6(t);
      return(t);
    }
    t = try_1_0(n_0, t);
    return(t);
  }
  t = t_6(t);
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = term_m_4;
  t = table_get_0_0(t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_4 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_4;
      }
  }
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm u_6 = NULL;
  if(((u_6 != NULL) && (u_6 != t)))
    _fail(t);
  else
    u_6 = t;
  t = repeat_1_0(o_0, t);
  t = not_null(u_6);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  if(((v_6 != NULL) && (v_6 != t)))
    _fail(t);
  else
    v_6 = t;
  if(((w_6 != NULL) && (w_6 != t)))
    _fail(t);
  else
    w_6 = t;
  if(((x_6 != NULL) && (x_6 != t)))
    _fail(t);
  else
    x_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATempty, not_null(x_6)));
  t = printnl_0_0(t);
  t = not_null(v_6);
  return(t);
}
ATerm say_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm y_6 = NULL;
  if(((y_6 != NULL) && (y_6 != t)))
    _fail(t);
  else
    y_6 = t;
  t = s_87(t);
  t = debug_0_0(t);
  t = not_null(y_6);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
    if(((z_6 != NULL) && (z_6 != t)))
      _fail(t);
    else
      z_6 = t;
    if(((a_7 != NULL) && (a_7 != t)))
      _fail(t);
    else
      a_7 = t;
    t = term_b_4;
    t = get_config_0_0(t);
    if(((b_7 != NULL) && (b_7 != t)))
      _fail(t);
    else
      b_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_7), term_o_4);
    t = geq_0_0(t);
    t = not_null(z_6);
    t = t_97(t);
    return(t);
  }
  t = try_1_0(p_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
    if(((c_7 != NULL) && (c_7 != t)))
      _fail(t);
    else
      c_7 = t;
    if(((d_7 != NULL) && (d_7 != t)))
      _fail(t);
    else
      d_7 = t;
    t = term_b_4;
    t = get_config_0_0(t);
    if(((e_7 != NULL) && (e_7 != t)))
      _fail(t);
    else
      e_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), term_p_4);
    t = geq_0_0(t);
    t = not_null(c_7);
    t = v_97(t);
    return(t);
  }
  t = try_1_0(q_0, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_7 != NULL) && (f_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_7 = ATgetArgument(t, 0);
      if(((f_7 != NULL) && (f_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((g_7 != NULL) && (g_7 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        g_7 = ATgetFirst((ATermList) t);
      if(((h_7 != NULL) && (h_7 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        h_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((i_7 != NULL) && (i_7 != t)))
    _fail(t);
  else
    i_7 = t;
  t = e_80(t);
  {
    ATerm r_0 (ATerm t)
    {
      ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
      if(((j_7 != NULL) && (j_7 != t)))
        _fail(t);
      else
        j_7 = t;
      if(((k_7 != NULL) && (k_7 != t)))
        _fail(t);
      else
        k_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), not_null(j_7));
      t = d_80(t);
      if(((l_7 != NULL) && (l_7 != t)))
        _fail(t);
      else
        l_7 = t;
      return(t);
    }
    t = fetch_1_0(r_0, t);
    t = not_null(h_7);
  }
  return(t);
}
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_7 != NULL) && (m_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_7 = ATgetArgument(t, 0);
      if(((n_7 != NULL) && (n_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_7 != NULL) && (o_7 != t)))
    _fail(t);
  else
    o_7 = t;
  t = not_null(m_7);
  {
    ATerm q_7 (ATerm t)
    {
      ATerm q_4 = t;
      int r_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(n_7);
          ;
          LocalPopChoice(r_4);
        }
      else
        {
          t = q_4;
          {
            ATerm s_4 = t;
            int t_4 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_0 (ATerm t)
                {
                  t = not_null(n_7);
                  return(t);
                }
                t = HdMember_p__2_0(a_80, s_0, t);
                t = q_7(t);
                ;
                LocalPopChoice(t_4);
              }
            else
              {
                t = s_4;
                t = Cons_2_0(_id, q_7, t);
              }
          }
        }
      return(t);
    }
    t = q_7(t);
    if(((p_7 != NULL) && (p_7 != t)))
      _fail(t);
    else
      p_7 = t;
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm get_0_0 (ATerm t)
{
  t = table_get_0_0(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((r_7 != NULL) && (r_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_7 = ATgetArgument(t, 0);
      if(((s_7 != NULL) && (s_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_7 = ATgetArgument(t, 1);
      if(((t_7 != NULL) && (t_7 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        t_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((u_7 != NULL) && (u_7 != t)))
    _fail(t);
  else
    u_7 = t;
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  if(((w_7 != NULL) && (w_7 != t)))
    _fail(t);
  else
    w_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), not_null(s_7));
  {
    ATerm u_4 = t;
    int v_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(v_4);
      }
    else
      {
        t = u_4;
        t = (ATerm) ATempty;
      }
    if(((x_7 != NULL) && (x_7 != t)))
      _fail(t);
    else
      x_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_7), not_null(t_7));
    t = union_0_0(t);
    if(((y_7 != NULL) && (y_7 != t)))
      _fail(t);
    else
      y_7 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(r_7), not_null(s_7), not_null(y_7));
    t = set_0_0(t);
    t = not_null(u_7);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_8 != NULL) && (a_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_8 = ATgetArgument(t, 0);
      if(((z_7 != NULL) && (z_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(z_7);
  {
    ATerm t_0 (ATerm t)
    {
      ATerm b_8 = NULL,c_8 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((b_8 != NULL) && (b_8 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            b_8 = ATgetArgument(t, 0);
          if(((c_8 != NULL) && (c_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(a_8), not_null(b_8), not_null(c_8));
      t = a_84(t);
      return(t);
    }
    t = map_1_0(t_0, t);
  }
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL;
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  if(((e_8 != NULL) && (e_8 != t)))
    _fail(t);
  else
    e_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_8), (ATerm) ATinsert(ATempty, term_w_4));
  t = access_0_0(t);
  return(t);
}
ATerm r_8 (ATerm i_8, ATerm j_8, ATerm t)
{
  ATerm k_8 = NULL;
  t = not_null(i_8);
  if(((k_8 != NULL) && (k_8 != t)))
    _fail(t);
  else
    k_8 = t;
  t = SSL_fclose(not_null(k_8));
  return(t);
}
ATerm s_8 (ATerm m_8, ATerm t)
{
  ATerm o_8 = NULL;
  t = not_null(m_8);
  if(((o_8 != NULL) && (o_8 != t)))
    _fail(t);
  else
    o_8 = t;
  t = SSL_fclose(not_null(o_8));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL;
  if(((q_8 != NULL) && (q_8 != t)))
    _fail(t);
  else
    q_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_8 = ATgetArgument(t, 0);
      {
        ATerm x_4 = t;
        int y_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_8(not_null(p_8), not_null(q_8), t);
            ;
            LocalPopChoice(y_4);
          }
        else
          {
            t = x_4;
            t = s_8(not_null(q_8), t);
          }
      }
    }
  else
    {
      t = s_8(not_null(q_8), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm t_8 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((t_8 != NULL) && (t_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(t_8));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_8 != NULL) && (u_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_8 = ATgetArgument(t, 0);
      if(((v_8 != NULL) && (v_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(u_8), not_null(v_8));
  if(((w_8 != NULL) && (w_8 != t)))
    _fail(t);
  else
    w_8 = t;
  if(((x_8 != NULL) && (x_8 != t)))
    _fail(t);
  else
    x_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_8));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  t = SSL_stdin_stream();
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  if(((z_8 != NULL) && (z_8 != t)))
    _fail(t);
  else
    z_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_8));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  t = SSL_stdout_stream();
  if(((a_9 != NULL) && (a_9 != t)))
    _fail(t);
  else
    a_9 = t;
  if(((b_9 != NULL) && (b_9 != t)))
    _fail(t);
  else
    b_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_9));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  t = SSL_stderr_stream();
  if(((c_9 != NULL) && (c_9 != t)))
    _fail(t);
  else
    c_9 = t;
  if(((d_9 != NULL) && (d_9 != t)))
    _fail(t);
  else
    d_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_9));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm f_9 = NULL;
  if(((f_9 != NULL) && (f_9 != t)))
    _fail(t);
  else
    f_9 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(f_9);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(f_9);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(f_9);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  if(((g_9 != NULL) && (g_9 != t)))
    _fail(t);
  else
    g_9 = t;
  if(((h_9 != NULL) && (h_9 != t)))
    _fail(t);
  else
    h_9 = t;
  t = not_null(g_9);
  if(((i_9 != NULL) && (i_9 != t)))
    _fail(t);
  else
    i_9 = t;
  t = SSL_explode_term(not_null(i_9));
  if(match_cons(t, sym__2))
    {
      ATerm z_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_5 = ATgetArgument(t, 1);
        if(((ATgetType(a_5) == AT_LIST) && !(ATisEmpty(a_5))))
          {
            if(((k_9 != NULL) && (k_9 != ATgetFirst((ATermList) a_5))))
              _fail(ATgetFirst((ATermList) a_5));
            else
              k_9 = ATgetFirst((ATermList) a_5);
            if(((j_9 != NULL) && (j_9 != (ATerm) ATgetNext((ATermList) a_5))))
              _fail((ATerm) ATgetNext((ATermList) a_5));
            else
              j_9 = (ATerm) ATgetNext((ATermList) a_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(k_9);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm l_9 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((l_9 != NULL) && (l_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(l_9);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_5 = ATgetArgument(t, 0);
      ATerm c_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_5 = t;
    int e_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(e_5);
      }
    else
      {
        t = d_5;
        {
          ATerm f_5 = t;
          int g_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(u_0, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(g_5);
            }
          else
            {
              t = f_5;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_h_5;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  ATerm i_5 = t;
  int j_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
      if(((m_9 != NULL) && (m_9 != t)))
        _fail(t);
      else
        m_9 = t;
      if(((n_9 != NULL) && (n_9 != t)))
        _fail(t);
      else
        n_9 = t;
      t = not_null(m_9);
      if(((o_9 != NULL) && (o_9 != t)))
        _fail(t);
      else
        o_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_9), term_k_5);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_5);
    }
  else
    {
      t = i_5;
      t = debug_1_0(v_0, t);
      _fail(t);
    }
  if(((p_9 != NULL) && (p_9 != t)))
    _fail(t);
  else
    p_9 = t;
  t = read_from_stream_0_0(t);
  if(((q_9 != NULL) && (q_9 != t)))
    _fail(t);
  else
    q_9 = t;
  t = not_null(p_9);
  t = fclose_0_0(t);
  t = not_null(q_9);
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_9 != NULL) && (r_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_9 = ATgetArgument(t, 0);
      if(((s_9 != NULL) && (s_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(r_9), not_null(s_9));
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(((t_9 != NULL) && (t_9 != t)))
    _fail(t);
  else
    t_9 = t;
  if(((u_9 != NULL) && (u_9 != t)))
    _fail(t);
  else
    u_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), (ATerm) ATinsert(ATempty, term_l_5));
  t = access_0_0(t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_m_5;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_n_5;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm o_5 = t;
  int p_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(p_5);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = o_5;
      {
        ATerm q_5 = t;
        int r_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_5;
              }
            t = debug_1_0(w_0, t);
            ;
            LocalPopChoice(r_5);
          }
        else
          {
            t = q_5;
            t = debug_1_0(x_0, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = debug_1_0(z_0, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_t_5;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = debug_1_0(b_1, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_u_5;
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = say_1_0(d_1, t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_o_6;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = say_1_0(f_1, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = say_1_0(h_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_o_6;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
  if(((v_9 != NULL) && (v_9 != t)))
    _fail(t);
  else
    v_9 = t;
  t = if_verbose5_1_0(y_0, t);
  {
    ATerm g_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_4, (ATerm) ATmakeAppl(sym_Imported_1, not_null(v_9)));
        t = table_get_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_8;
      }
    if(((w_9 != NULL) && (w_9 != t)))
      _fail(t);
    else
      w_9 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_e_4, term_h_8, (ATerm) ATinsert(ATempty, not_null(v_9)));
    t = table_put_0_0(t);
    t = not_null(w_9);
    t = if_verbose4_1_0(a_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(c_1, t);
    if(((x_9 != NULL) && (x_9 != t)))
      _fail(t);
    else
      x_9 = t;
    if(((y_9 != NULL) && (y_9 != t)))
      _fail(t);
    else
      y_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_4, not_null(y_9));
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(e_1, t);
    t = (ATerm) ATmakeAppl(sym__3, term_e_4, (ATerm)ATmakeAppl(sym_Imported_1, not_null(v_9)), (ATerm) ATempty);
    t = table_put_0_0(t);
    t = if_verbose4_1_0(g_1, t);
  }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm z_9 = NULL;
  if(((z_9 != NULL) && (z_9 != t)))
    _fail(t);
  else
    z_9 = t;
  t = SSL_getenv(not_null(z_9));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm l_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_8);
    }
  else
    {
      t = l_8;
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_10;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_d_12;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  t = if_verbose5_1_0(i_1, t);
  if(((a_10 != NULL) && (a_10 != t)))
    _fail(t);
  else
    a_10 = t;
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_12;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(a_10);
    t = if_verbose5_1_0(k_1, t);
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
  t = term_p_13;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_e_4;
  t = table_getlist_0_0(t);
  t = debug_1_0(r_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_i_14;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_14 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(m_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm x_16 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(f_17);
          }
        else
          {
            t = x_16;
            t = xtc_find_loc_0_0(t);
          }
        t = if_verbose5_1_0(o_1, t);
      }
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = z_14;
      {
        ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
        if(((b_10 != NULL) && (b_10 != t)))
          _fail(t);
        else
          b_10 = t;
        if(((c_10 != NULL) && (c_10 != t)))
          _fail(t);
        else
          c_10 = t;
        t = not_null(b_10);
        if(((d_10 != NULL) && (d_10 != t)))
          _fail(t);
        else
          d_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_18), not_null(d_10)), term_i_18);
        t = error_0_0(t);
        t = if_verbose5_1_0(q_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_find_file_0_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  if(((e_10 != NULL) && (e_10 != t)))
    _fail(t);
  else
    e_10 = t;
  t = xtc_find_0_0(t);
  if(((f_10 != NULL) && (f_10 != t)))
    _fail(t);
  else
    f_10 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_10));
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_10 != NULL) && (g_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_10 = ATgetArgument(t, 0);
      if(((h_10 != NULL) && (h_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(g_10), not_null(h_10));
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stderr_0)))
    _fail(t);
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdout_0)))
    _fail(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm a_11 (ATerm l_10, ATerm m_10, ATerm t)
  {
    ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
    t = not_null(l_10);
    if(((n_10 != NULL) && (n_10 != t)))
      _fail(t);
    else
      n_10 = t;
    t = not_null(m_10);
    if(((o_10 != NULL) && (o_10 != t)))
      _fail(t);
    else
      o_10 = t;
    t = k_0(t);
    if(((p_10 != NULL) && (p_10 != t)))
      _fail(t);
    else
      p_10 = t;
    {
      ATerm r_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(a_20);
        }
      else
        {
          t = r_19;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), not_null(p_10));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_10));
    }
    return(t);
  }
  ATerm b_11 (ATerm q_10, ATerm r_10, ATerm t)
  {
    ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
    t = not_null(q_10);
    if(((s_10 != NULL) && (s_10 != t)))
      _fail(t);
    else
      s_10 = t;
    t = not_null(r_10);
    if(((t_10 != NULL) && (t_10 != t)))
      _fail(t);
    else
      t_10 = t;
    t = k_0(t);
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    {
      ATerm v_20 = t;
      if((PushChoice() == 0))
        {
          ATerm a_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(j_21);
            }
          else
            {
              t = a_21;
              {
                ATerm k_21 = t;
                int l_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(l_21);
                  }
                else
                  {
                    t = k_21;
                    {
                      ATerm v_10 = NULL;
                      if(((v_10 != NULL) && (v_10 != t)))
                        _fail(t);
                      else
                        v_10 = t;
                      if(((s_10 != NULL) && (s_10 != t)))
                        _fail(t);
                      else
                        s_10 = t;
                      t = not_null(v_10);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_20;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), not_null(u_10));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_10));
    }
    return(t);
  }
  ATerm w_10 = NULL,x_10 = NULL;
  if(((w_10 != NULL) && (w_10 != t)))
    _fail(t);
  else
    w_10 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((x_10 != NULL) && (x_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_11(not_null(x_10), not_null(w_10), t);
        ;
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_11(not_null(x_10), not_null(w_10), t);
              ;
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              {
                ATerm y_10 = NULL,z_10 = NULL;
                t = not_null(x_10);
                if(((y_10 != NULL) && (y_10 != t)))
                  _fail(t);
                else
                  y_10 = t;
                t = not_null(w_10);
                if(((z_10 != NULL) && (z_10 != t)))
                  _fail(t);
                else
                  z_10 = t;
                t = k_0(t);
                if(((y_10 != NULL) && (y_10 != t)))
                  _fail(t);
                else
                  y_10 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_10));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm c_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_21 = ATgetFirst((ATermList) t);
      if(((c_11 != NULL) && (c_11 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        c_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(c_11);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_11 != NULL) && (d_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_11 = ATgetArgument(t, 0);
      if(((e_11 != NULL) && (e_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_11 != NULL) && (f_11 != t)))
    _fail(t);
  else
    f_11 = t;
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), not_null(e_11));
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        t = (ATerm) ATempty;
      }
    if(((h_11 != NULL) && (h_11 != t)))
      _fail(t);
    else
      h_11 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(d_11), not_null(e_11), not_null(h_11));
    t = table_put_0_0(t);
    t = not_null(f_11);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  if(((i_11 != NULL) && (i_11 != t)))
    _fail(t);
  else
    i_11 = t;
  t = u_83(t);
  if(((j_11 != NULL) && (j_11 != t)))
    _fail(t);
  else
    j_11 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_11), term_v_21);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_11 != NULL) && (l_11 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_11 = ATgetFirst((ATermList) t);
        if(((k_11 != NULL) && (k_11 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          k_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(j_11), term_v_21, not_null(k_11));
    t = table_put_0_0(t);
    t = not_null(l_11);
    {
      ATerm s_1 (ATerm t)
      {
        ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
        if(((m_11 != NULL) && (m_11 != t)))
          _fail(t);
        else
          m_11 = t;
        if(((n_11 != NULL) && (n_11 != t)))
          _fail(t);
        else
          n_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_11), not_null(m_11));
        t = table_pop_0_0(t);
        if(((o_11 != NULL) && (o_11 != t)))
          _fail(t);
        else
          o_11 = t;
        return(t);
      }
      t = map_1_0(s_1, t);
      t = not_null(i_11);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm p_11 = NULL;
  if(((p_11 != NULL) && (p_11 != t)))
    _fail(t);
  else
    p_11 = t;
  t = SSL_remove(not_null(p_11));
  return(t);
}
ATerm restore_always_2_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_74(t);
      t = t_74(t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      t = t_74(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
  if(((q_11 != NULL) && (q_11 != t)))
    _fail(t);
  else
    q_11 = t;
  t = t_83(t);
  if(((r_11 != NULL) && (r_11 != t)))
    _fail(t);
  else
    r_11 = t;
  if(((s_11 != NULL) && (s_11 != t)))
    _fail(t);
  else
    s_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), term_v_21);
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = (ATerm) ATempty;
      }
    if(((t_11 != NULL) && (t_11 != t)))
      _fail(t);
    else
      t_11 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(r_11), term_v_21, (ATerm) ATinsert(CheckATermList(not_null(t_11)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(q_11);
  }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  t = begin_scope_1_0(t_1, t);
  {
    ATerm u_1 (ATerm t)
    {
      ATerm w_11 = NULL;
      if(((w_11 != NULL) && (w_11 != t)))
        _fail(t);
      else
        w_11 = t;
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_22;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((v_11 != NULL) && (v_11 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              v_11 = ATgetFirst((ATermList) t);
            if(((u_11 != NULL) && (u_11 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              u_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(v_11);
        t = map_1_0(v_1, t);
        t = not_null(w_11);
        t = end_scope_1_0(w_1, t);
      }
      return(t);
    }
    t = restore_always_2_0(s_98, u_1, t);
  }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      t = term_h_22;
    }
  return(t);
}
ATerm xtc_output_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    t = u_98(t);
    t = copy_to_1_0(y_1, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm y_11 = NULL;
  if(((y_11 != NULL) && (y_11 != t)))
    _fail(t);
  else
    y_11 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(y_11);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(y_11);
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  if(((z_11 != NULL) && (z_11 != t)))
    _fail(t);
  else
    z_11 = t;
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = string_to_int_0_0(t);
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_22, not_null(b_12));
  t = set_config_0_0(t);
  t = not_null(z_11);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_1, a_2, b_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm c_12 = NULL;
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = SSL_string_to_int(not_null(c_12));
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm e_12 = NULL;
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(e_12);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(e_12);
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm f_12 = NULL;
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  t = term_l_22;
  t = set_config_0_0(t);
  t = term_m_22;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm f_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = string_to_int_0_0(t);
  if(((i_12 != NULL) && (i_12 != t)))
    _fail(t);
  else
    i_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_4, not_null(i_12));
  t = set_config_0_0(t);
  t = not_null(g_12);
  if(((j_12 != NULL) && (j_12 != t)))
    _fail(t);
  else
    j_12 = t;
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_12));
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm i_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm l_12 = NULL;
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  t = term_r_22;
  t = set_config_0_0(t);
  t = term_s_22;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_2, d_2, e_2, t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_2, g_2, h_2, t);
            ;
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            t = Option_3_0(i_2, j_2, k_2, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
  if(((o_12 != NULL) && (o_12 != t)))
    _fail(t);
  else
    o_12 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(o_12);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((p_12 != NULL) && (p_12 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            p_12 = ATgetFirst((ATermList) t);
          if(((q_12 != NULL) && (q_12 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(q_12);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_12 != NULL) && (r_12 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_12 = ATgetFirst((ATermList) t);
          if(((s_12 != NULL) && (s_12 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(p_12);
      if(((t_12 != NULL) && (t_12 != t)))
        _fail(t);
      else
        t_12 = t;
      t = not_null(r_12);
      if(((u_12 != NULL) && (u_12 != t)))
        _fail(t);
      else
        u_12 = t;
      t = not_null(s_12);
      if(((v_12 != NULL) && (v_12 != t)))
        _fail(t);
      else
        v_12 = t;
      t = not_null(o_12);
      if(((w_12 != NULL) && (w_12 != t)))
        _fail(t);
      else
        w_12 = t;
      t = not_null(t_12);
      t = h_0(t);
      t = not_null(w_12);
      if(((x_12 != NULL) && (x_12 != t)))
        _fail(t);
      else
        x_12 = t;
      t = not_null(u_12);
      t = i_0(t);
      if(((y_12 != NULL) && (y_12 != t)))
        _fail(t);
      else
        y_12 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(v_12)), not_null(y_12));
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm a_13 = NULL;
  if(((a_13 != NULL) && (a_13 != t)))
    _fail(t);
  else
    a_13 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(a_13);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(a_13);
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  if(((b_13 != NULL) && (b_13 != t)))
    _fail(t);
  else
    b_13 = t;
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  if(((d_13 != NULL) && (d_13 != t)))
    _fail(t);
  else
    d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_22, not_null(d_13));
  t = set_config_0_0(t);
  t = not_null(b_13);
  if(((e_13 != NULL) && (e_13 != t)))
    _fail(t);
  else
    e_13 = t;
  if(((f_13 != NULL) && (f_13 != t)))
    _fail(t);
  else
    f_13 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_13));
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_2, m_2, n_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm g_13 = NULL;
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  t = term_c_23;
  t = set_config_0_0(t);
  t = term_d_23;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_e_23;
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      t = Option_3_0(o_2, p_2, q_2, t);
    }
  return(t);
}
ATerm output_options_0_0 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = aterm_output_option_0_0(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      t = general_options_0_0(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  if(((h_13 != NULL) && (h_13 != t)))
    _fail(t);
  else
    h_13 = t;
  if(((i_13 != NULL) && (i_13 != t)))
    _fail(t);
  else
    i_13 = t;
  t = term_q_22;
  t = whoami_0_0(t);
  if(((j_13 != NULL) && (j_13 != t)))
    _fail(t);
  else
    j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_23), not_null(j_13)), term_j_23));
  t = printnl_0_0(t);
  t = term_l_23;
  t = exit_0_0(t);
  t = not_null(h_13);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  t = report_run_time_0_0(t);
  if(((k_13 != NULL) && (k_13 != t)))
    _fail(t);
  else
    k_13 = t;
  t = term_q_22;
  t = whoami_0_0(t);
  if(((l_13 != NULL) && (l_13 != t)))
    _fail(t);
  else
    l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATempty, term_m_23), not_null(l_13)));
  t = printnl_0_0(t);
  t = term_l_23;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_23;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm m_13 = NULL;
  if(((m_13 != NULL) && (m_13 != t)))
    _fail(t);
  else
    m_13 = t;
  t = SSL_TicksToSeconds(not_null(m_13));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_13 != NULL) && (n_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_13 = ATgetArgument(t, 0);
      if(((o_13 != NULL) && (o_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(n_13), not_null(o_13));
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = SSL_addr(not_null(n_13), not_null(o_13));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = m_82(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
        if(((q_13 != NULL) && (q_13 != t)))
          _fail(t);
        else
          q_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_13 != NULL) && (r_13 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_13 = ATgetFirst((ATermList) t);
            if(((s_13 != NULL) && (s_13 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              s_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(r_13);
        if(((t_13 != NULL) && (t_13 != t)))
          _fail(t);
        else
          t_13 = t;
        t = not_null(s_13);
        if(((u_13 != NULL) && (u_13 != t)))
          _fail(t);
        else
          u_13 = t;
        t = not_null(q_13);
        if(((v_13 != NULL) && (v_13 != t)))
          _fail(t);
        else
          v_13 = t;
        if(((w_13 != NULL) && (w_13 != t)))
          _fail(t);
        else
          w_13 = t;
        t = not_null(u_13);
        t = foldr_2_0(m_82, n_82, t);
        if(((x_13 != NULL) && (x_13 != t)))
          _fail(t);
        else
          x_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_13), not_null(x_13));
        t = n_82(t);
        if(((y_13 != NULL) && (y_13 != t)))
          _fail(t);
        else
          y_13 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  if(((z_13 != NULL) && (z_13 != t)))
    _fail(t);
  else
    z_13 = t;
  if(((a_14 != NULL) && (a_14 != t)))
    _fail(t);
  else
    a_14 = t;
  t = not_null(z_13);
  if(((b_14 != NULL) && (b_14 != t)))
    _fail(t);
  else
    b_14 = t;
  t = SSL_explode_term(not_null(b_14));
  if(match_cons(t, sym__2))
    {
      ATerm s_23 = ATgetArgument(t, 0);
      if(((c_14 != NULL) && (c_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(a_14);
  if(((d_14 != NULL) && (d_14 != t)))
    _fail(t);
  else
    d_14 = t;
  t = not_null(c_14);
  t = foldr_2_0(k_80, l_80, t);
  if(((e_14 != NULL) && (e_14 != t)))
    _fail(t);
  else
    e_14 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(r_2, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_14 != NULL) && (f_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_14 = ATgetArgument(t, 0);
      if(((g_14 != NULL) && (g_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((h_14 != NULL) && (h_14 != t)))
    _fail(t);
  else
    h_14 = t;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(f_14), not_null(g_14));
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = SSL_gtr(not_null(f_14), not_null(g_14));
      }
    t = not_null(h_14);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_14 = NULL;
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
      if(((k_14 != NULL) && (k_14 != t)))
        _fail(t);
      else
        k_14 = t;
      if(match_cons(t, sym__2))
        {
          if(((l_14 != NULL) && (l_14 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_14 = ATgetArgument(t, 0);
          if(((m_14 != NULL) && (m_14 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(l_14);
      if(((j_14 != NULL) && (j_14 != t)))
        _fail(t);
      else
        j_14 = t;
      t = not_null(m_14);
      if(((j_14 != NULL) && (j_14 != t)))
        _fail(t);
      else
        j_14 = t;
      t = not_null(k_14);
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
    if(((n_14 != NULL) && (n_14 != t)))
      _fail(t);
    else
      n_14 = t;
    if(((o_14 != NULL) && (o_14 != t)))
      _fail(t);
    else
      o_14 = t;
    t = term_b_4;
    t = get_config_0_0(t);
    if(((p_14 != NULL) && (p_14 != t)))
      _fail(t);
    else
      p_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_14), term_l_23);
    t = geq_0_0(t);
    t = not_null(n_14);
    t = q_97(t);
    return(t);
  }
  t = try_1_0(s_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  if(((q_14 != NULL) && (q_14 != t)))
    _fail(t);
  else
    q_14 = t;
  t = run_time_0_0(t);
  if(((r_14 != NULL) && (r_14 != t)))
    _fail(t);
  else
    r_14 = t;
  t = not_null(q_14);
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  t = term_q_22;
  t = whoami_0_0(t);
  if(((t_14 != NULL) && (t_14 != t)))
    _fail(t);
  else
    t_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_23), not_null(r_14)), term_x_23), not_null(t_14)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_k_22;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Help_0_0(t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm b_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(c_24);
          }
        else
          {
            t = b_24;
            t = Version_0_0(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_70 (ATerm), ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      t = option_defined_1_0(u_2, t);
    }
  t = l_70(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_14 = NULL;
  if(((u_14 != NULL) && (u_14 != t)))
    _fail(t);
  else
    u_14 = t;
  t = SSL_table_create(not_null(u_14));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL;
  if(((v_14 != NULL) && (v_14 != t)))
    _fail(t);
  else
    v_14 = t;
  if(((w_14 != NULL) && (w_14 != t)))
    _fail(t);
  else
    w_14 = t;
  t = term_g_24;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_24, term_h_24, not_null(v_14));
  t = table_put_0_0(t);
  t = not_null(w_14);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_14 = NULL;
  if(((x_14 != NULL) && (x_14 != t)))
    _fail(t);
  else
    x_14 = t;
  t = SSL_table_destroy(not_null(x_14));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  if(((y_14 != NULL) && (y_14 != t)))
    _fail(t);
  else
    y_14 = t;
  t = SSL_exit(not_null(y_14));
  return(t);
}
ATerm long_description_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  if(((c_15 != NULL) && (c_15 != t)))
    _fail(t);
  else
    c_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_15 = ATgetFirst((ATermList) t);
      b_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
        t = not_null(a_15);
        if(((d_15 != NULL) && (d_15 != t)))
          _fail(t);
        else
          d_15 = t;
        t = not_null(b_15);
        if(((e_15 != NULL) && (e_15 != t)))
          _fail(t);
        else
          e_15 = t;
        t = not_null(c_15);
        if(((f_15 != NULL) && (f_15 != t)))
          _fail(t);
        else
          f_15 = t;
        t = not_null(e_15);
        if(((g_15 != NULL) && (g_15 != t)))
          _fail(t);
        else
          g_15 = t;
        if(((h_15 != NULL) && (h_15 != t)))
          _fail(t);
        else
          h_15 = t;
        t = g_0(t);
        if(((i_15 != NULL) && (i_15 != t)))
          _fail(t);
        else
          i_15 = t;
        t = not_null(h_15);
        if(((j_15 != NULL) && (j_15 != t)))
          _fail(t);
        else
          j_15 = t;
        t = not_null(d_15);
        t = f_0(t);
        if(((k_15 != NULL) && (k_15 != t)))
          _fail(t);
        else
          k_15 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(i_15)), not_null(k_15));
        if(((l_15 != NULL) && (l_15 != t)))
          _fail(t);
        else
          l_15 = t;
        t = not_null(g_15);
        {
          ATerm v_2 (ATerm t)
          {
            t = not_null(l_15);
            return(t);
          }
          t = reverse_acc_2_0(f_0, v_2, t);
          if(((m_15 != NULL) && (m_15 != t)))
            _fail(t);
          else
            m_15 = t;
        }
      }
    }
  else
    {
      ATerm n_15 = NULL,o_15 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(c_15);
      if(((n_15 != NULL) && (n_15 != t)))
        _fail(t);
      else
        n_15 = t;
      t = term_q_22;
      t = g_0(t);
      if(((o_15 != NULL) && (o_15 != t)))
        _fail(t);
      else
        o_15 = t;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(_id, w_2, t);
  return(t);
}
ATerm short_description_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm m_68 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  if(((s_15 != NULL) && (s_15 != t)))
    _fail(t);
  else
    s_15 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((q_15 != NULL) && (q_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((t_15 != NULL) && (t_15 != t)))
    _fail(t);
  else
    t_15 = t;
  t = SSLgetAnnotations(not_null(s_15));
  if(((p_15 != NULL) && (p_15 != t)))
    _fail(t);
  else
    p_15 = t;
  t = not_null(q_15);
  t = m_68(t);
  if(((r_15 != NULL) && (r_15 != t)))
    _fail(t);
  else
    r_15 = t;
  if(((v_15 != NULL) && (v_15 != t)))
    _fail(t);
  else
    v_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_15)), not_null(p_15));
  if(((u_15 != NULL) && (u_15 != t)))
    _fail(t);
  else
    u_15 = t;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  if(((x_15 != NULL) && (x_15 != t)))
    _fail(t);
  else
    x_15 = t;
  if(((y_15 != NULL) && (y_15 != t)))
    _fail(t);
  else
    y_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_15)), term_i_24);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_15 = NULL;
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_23;
      t = get_config_0_0(t);
      if(((w_15 != NULL) && (w_15 != t)))
        _fail(t);
      else
        w_15 = t;
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm x_2 (ATerm t)
        {
          ATerm y_2 (ATerm t)
          {
            if(((w_15 != NULL) && (w_15 != t)))
              _fail(t);
            else
              w_15 = t;
            return(t);
          }
          t = Program_1_0(y_2, t);
          return(t);
        }
        t = option_defined_1_0(x_2, t);
      }
    }
  {
    ATerm z_2 (ATerm t)
    {
      ATerm a_3 (ATerm t)
      {
        t = not_null(w_15);
        return(t);
      }
      t = short_description_1_0(a_3, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(z_2, t);
    t = term_l_24;
    t = echo_0_0(t);
    t = term_o_24;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    t = map_1_0(b_3, t);
    {
      ATerm c_3 (ATerm t)
      {
        ATerm z_15 = NULL,a_16 = NULL;
        if(((z_15 != NULL) && (z_15 != t)))
          _fail(t);
        else
          z_15 = t;
        {
          ATerm d_3 (ATerm t)
          {
            t = not_null(w_15);
            return(t);
          }
          t = long_description_1_0(d_3, t);
          if(((a_16 != NULL) && (a_16 != t)))
            _fail(t);
          else
            a_16 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(a_16)), term_p_24);
          t = echo_0_0(t);
        }
        return(t);
      }
      t = try_1_0(c_3, t);
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_16 != NULL) && (b_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_16 = ATgetArgument(t, 0);
      if(((c_16 != NULL) && (c_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((d_16 != NULL) && (d_16 != t)))
    _fail(t);
  else
    d_16 = t;
  t = SSL_printnl(not_null(b_16), not_null(c_16));
  t = not_null(d_16);
  return(t);
}
ATerm Undefined_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
  if(((h_16 != NULL) && (h_16 != t)))
    _fail(t);
  else
    h_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((f_16 != NULL) && (f_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((i_16 != NULL) && (i_16 != t)))
    _fail(t);
  else
    i_16 = t;
  t = SSLgetAnnotations(not_null(h_16));
  if(((e_16 != NULL) && (e_16 != t)))
    _fail(t);
  else
    e_16 = t;
  t = not_null(f_16);
  t = n_68(t);
  if(((g_16 != NULL) && (g_16 != t)))
    _fail(t);
  else
    g_16 = t;
  if(((k_16 != NULL) && (k_16 != t)))
    _fail(t);
  else
    k_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_16)), not_null(e_16));
  if(((j_16 != NULL) && (j_16 != t)))
    _fail(t);
  else
    j_16 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm l_16 (ATerm t)
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = Cons_2_0(_id, l_16, t);
      }
    return(t);
  }
  t = l_16(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  t = fetch_1_0(k_89, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  if(((n_16 != NULL) && (n_16 != t)))
    _fail(t);
  else
    n_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(n_16);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_16 != NULL) && (o_16 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_16 = ATgetFirst((ATermList) t);
          if(((p_16 != NULL) && (p_16 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(n_16);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,v_16 = NULL;
  if(((q_16 != NULL) && (q_16 != t)))
    _fail(t);
  else
    q_16 = t;
  if(((r_16 != NULL) && (r_16 != t)))
    _fail(t);
  else
    r_16 = t;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
          if(((s_16 != NULL) && (s_16 != t)))
            _fail(t);
          else
            s_16 = t;
          if(((t_16 != NULL) && (t_16 != t)))
            _fail(t);
          else
            t_16 = t;
          t = not_null(s_16);
          if(((u_16 != NULL) && (u_16 != t)))
            _fail(t);
          else
            u_16 = t;
          t = (ATerm) ATinsert(ATempty, not_null(u_16));
        }
      }
    if(((v_16 != NULL) && (v_16 != t)))
      _fail(t);
    else
      v_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_22, not_null(v_16));
    t = printnl_0_0(t);
    t = not_null(q_16);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_23;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm w_16 = NULL;
  if(((w_16 != NULL) && (w_16 != t)))
    _fail(t);
  else
    w_16 = t;
  t = SSL_implode_string(not_null(w_16));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
        if(((y_16 != NULL) && (y_16 != t)))
          _fail(t);
        else
          y_16 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((z_16 != NULL) && (z_16 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              z_16 = ATgetFirst((ATermList) t);
            if(((a_17 != NULL) && (a_17 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              a_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(z_16);
        if(((b_17 != NULL) && (b_17 != t)))
          _fail(t);
        else
          b_17 = t;
        t = not_null(a_17);
        if(((c_17 != NULL) && (c_17 != t)))
          _fail(t);
        else
          c_17 = t;
        t = not_null(y_16);
        if(((d_17 != NULL) && (d_17 != t)))
          _fail(t);
        else
          d_17 = t;
        t = not_null(b_17);
        {
          ATerm e_3 (ATerm t)
          {
            t = not_null(c_17);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_3, t);
          if(((e_17 != NULL) && (e_17 != t)))
            _fail(t);
          else
            e_17 = t;
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  if(((g_17 != NULL) && (g_17 != t)))
    _fail(t);
  else
    g_17 = t;
  if(((h_17 != NULL) && (h_17 != t)))
    _fail(t);
  else
    h_17 = t;
  t = not_null(g_17);
  if(((i_17 != NULL) && (i_17 != t)))
    _fail(t);
  else
    i_17 = t;
  t = SSL_explode_term(not_null(i_17));
  if(match_cons(t, sym__2))
    {
      ATerm a_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((j_17 != NULL) && (j_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(h_17);
  if(((k_17 != NULL) && (k_17 != t)))
    _fail(t);
  else
    k_17 = t;
  t = not_null(j_17);
  t = concat_0_0(t);
  if(((l_17 != NULL) && (l_17 != t)))
    _fail(t);
  else
    l_17 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm m_17 (ATerm t)
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, m_17, t);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = Nil_0_0(t);
        t = m_76(t);
      }
    return(t);
  }
  t = m_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_17 != NULL) && (n_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_17 = ATgetArgument(t, 0);
      if(((o_17 != NULL) && (o_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((p_17 != NULL) && (p_17 != t)))
    _fail(t);
  else
    p_17 = t;
  t = not_null(n_17);
  {
    ATerm f_3 (ATerm t)
    {
      t = not_null(o_17);
      return(t);
    }
    t = at_end_1_0(f_3, t);
    if(((q_17 != NULL) && (q_17 != t)))
      _fail(t);
    else
      q_17 = t;
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm r_17 = NULL;
  if(((r_17 != NULL) && (r_17 != t)))
    _fail(t);
  else
    r_17 = t;
  t = SSL_explode_string(not_null(r_17));
  return(t);
}
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  if(((x_17 != NULL) && (x_17 != t)))
    _fail(t);
  else
    x_17 = t;
  if(match_cons(t, sym__2))
    {
      if(((t_17 != NULL) && (t_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_17 = ATgetArgument(t, 0);
      if(((u_17 != NULL) && (u_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((y_17 != NULL) && (y_17 != t)))
    _fail(t);
  else
    y_17 = t;
  t = SSLgetAnnotations(not_null(x_17));
  if(((s_17 != NULL) && (s_17 != t)))
    _fail(t);
  else
    s_17 = t;
  t = not_null(t_17);
  t = y_58(t);
  if(((v_17 != NULL) && (v_17 != t)))
    _fail(t);
  else
    v_17 = t;
  t = not_null(u_17);
  t = z_58(t);
  if(((w_17 != NULL) && (w_17 != t)))
    _fail(t);
  else
    w_17 = t;
  if(((a_18 != NULL) && (a_18 != t)))
    _fail(t);
  else
    a_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_17), not_null(w_17)), not_null(s_17));
  if(((z_17 != NULL) && (z_17 != t)))
    _fail(t);
  else
    z_17 = t;
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  if(((b_18 != NULL) && (b_18 != t)))
    _fail(t);
  else
    b_18 = t;
  if(((c_18 != NULL) && (c_18 != t)))
    _fail(t);
  else
    c_18 = t;
  t = e_88(t);
  if(((d_18 != NULL) && (d_18 != t)))
    _fail(t);
  else
    d_18 = t;
  t = not_null(c_18);
  if(((e_18 != NULL) && (e_18 != t)))
    _fail(t);
  else
    e_18 = t;
  if(((f_18 != NULL) && (f_18 != t)))
    _fail(t);
  else
    f_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_18)), not_null(d_18)));
  t = printnl_0_0(t);
  t = not_null(b_18);
  return(t);
}
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  ATerm g_18 (ATerm t)
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        t = Cons_2_0(v_75, g_18, t);
      }
    return(t);
  }
  t = g_18(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  if(((h_18 != NULL) && (h_18 != t)))
    _fail(t);
  else
    h_18 = t;
  t = SSL_is_string(not_null(h_18));
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = try_1_0(eval_config_0_0, t);
  return(t);
}
ATerm b_19 (ATerm k_18, ATerm l_18, ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  t = not_null(k_18);
  if(((m_18 != NULL) && (m_18 != t)))
    _fail(t);
  else
    m_18 = t;
  t = not_null(l_18);
  if(((n_18 != NULL) && (n_18 != t)))
    _fail(t);
  else
    n_18 = t;
  t = not_null(m_18);
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = debug_1_0(h_3, t);
        _fail(t);
      }
    if(((o_18 != NULL) && (o_18 != t)))
      _fail(t);
    else
      o_18 = t;
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_j_25;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      {
        ATerm m_25 = t;
        int n_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_3, t);
            ;
            LocalPopChoice(n_25);
          }
        else
          {
            t = m_25;
            {
              ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
              if(((p_18 != NULL) && (p_18 != t)))
                _fail(t);
              else
                p_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_18 = ATgetArgument(t, 0);
                  {
                    ATerm s_18 = NULL;
                    t = not_null(q_18);
                    if(((s_18 != NULL) && (s_18 != t)))
                      _fail(t);
                    else
                      s_18 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_18 = ATgetArgument(t, 0);
                      t = b_19(not_null(q_18), not_null(p_18), t);
                    }
                  else
                    {
                      ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((q_18 != NULL) && (q_18 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            q_18 = ATgetArgument(t, 0);
                          if(((r_18 != NULL) && (r_18 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            r_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(q_18);
                      if(((t_18 != NULL) && (t_18 != t)))
                        _fail(t);
                      else
                        t_18 = t;
                      t = not_null(r_18);
                      if(((u_18 != NULL) && (u_18 != t)))
                        _fail(t);
                      else
                        u_18 = t;
                      t = not_null(p_18);
                      if(((v_18 != NULL) && (v_18 != t)))
                        _fail(t);
                      else
                        v_18 = t;
                      if(((w_18 != NULL) && (w_18 != t)))
                        _fail(t);
                      else
                        w_18 = t;
                      t = not_null(t_18);
                      t = eval_config_0_0(t);
                      if(((x_18 != NULL) && (x_18 != t)))
                        _fail(t);
                      else
                        x_18 = t;
                      t = not_null(w_18);
                      if(((y_18 != NULL) && (y_18 != t)))
                        _fail(t);
                      else
                        y_18 = t;
                      t = not_null(u_18);
                      t = eval_config_0_0(t);
                      if(((z_18 != NULL) && (z_18 != t)))
                        _fail(t);
                      else
                        z_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), not_null(z_18));
                      t = conc_strings_0_0(t);
                      if(((a_19 != NULL) && (a_19 != t)))
                        _fail(t);
                      else
                        a_19 = t;
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
  ATerm c_19 = NULL;
  if(((c_19 != NULL) && (c_19 != t)))
    _fail(t);
  else
    c_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_25, not_null(c_19));
  t = table_get_0_0(t);
  {
    ATerm i_3 (ATerm t)
    {
      ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
      t = eval_config_0_0(t);
      if(((d_19 != NULL) && (d_19 != t)))
        _fail(t);
      else
        d_19 = t;
      if(((e_19 != NULL) && (e_19 != t)))
        _fail(t);
      else
        e_19 = t;
      if(((f_19 != NULL) && (f_19 != t)))
        _fail(t);
      else
        f_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_25, not_null(c_19), not_null(f_19));
      t = table_put_0_0(t);
      t = not_null(d_19);
      return(t);
    }
    t = try_1_0(i_3, t);
  }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm d_74 (ATerm), ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_74(t);
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_s_25;
  t = set_config_0_0(t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm g_19 = NULL;
  if(((g_19 != NULL) && (g_19 != t)))
    _fail(t);
  else
    g_19 = t;
  t = term_s_25;
  t = set_config_0_0(t);
  t = term_v_25;
  t = set_config_0_0(t);
  t = term_w_25;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_3, k_3, l_3, t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      t = Option_3_0(m_3, n_3, o_3, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_19 != NULL) && (h_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_19 = ATgetArgument(t, 0);
      if(((i_19 != NULL) && (i_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(h_19), not_null(i_19));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((j_19 != NULL) && (j_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_19 = ATgetArgument(t, 0);
      if(((k_19 != NULL) && (k_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_19 = ATgetArgument(t, 1);
      if(((l_19 != NULL) && (l_19 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        l_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((m_19 != NULL) && (m_19 != t)))
    _fail(t);
  else
    m_19 = t;
  if(((n_19 != NULL) && (n_19 != t)))
    _fail(t);
  else
    n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), not_null(k_19));
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATempty;
      }
    if(((o_19 != NULL) && (o_19 != t)))
      _fail(t);
    else
      o_19 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(j_19), not_null(k_19), (ATerm) ATinsert(CheckATermList(not_null(o_19)), not_null(l_19)));
    t = table_put_0_0(t);
    t = not_null(m_19);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  if(((p_19 != NULL) && (p_19 != t)))
    _fail(t);
  else
    p_19 = t;
  t = term_q_22;
  t = p_90(t);
  if(((q_19 != NULL) && (q_19 != t)))
    _fail(t);
  else
    q_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_24, term_n_24, not_null(q_19));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  if(((s_19 != NULL) && (s_19 != t)))
    _fail(t);
  else
    s_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(s_19);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((t_19 != NULL) && (t_19 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            t_19 = ATgetFirst((ATermList) t);
          if(((u_19 != NULL) && (u_19 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(t_19);
      if(((v_19 != NULL) && (v_19 != t)))
        _fail(t);
      else
        v_19 = t;
      t = not_null(u_19);
      if(((w_19 != NULL) && (w_19 != t)))
        _fail(t);
      else
        w_19 = t;
      t = not_null(s_19);
      if(((x_19 != NULL) && (x_19 != t)))
        _fail(t);
      else
        x_19 = t;
      t = not_null(v_19);
      t = a_0(t);
      t = not_null(x_19);
      if(((y_19 != NULL) && (y_19 != t)))
        _fail(t);
      else
        y_19 = t;
      t = term_q_22;
      t = b_0(t);
      if(((z_19 != NULL) && (z_19 != t)))
        _fail(t);
      else
        z_19 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(w_19)), not_null(z_19));
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm b_20 = NULL;
  if(((b_20 != NULL) && (b_20 != t)))
    _fail(t);
  else
    b_20 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(b_20);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(b_20);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(b_20);
        }
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_c_26;
  t = set_config_0_0(t);
  t = term_d_26;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(p_3, q_3, r_3, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((c_20 != NULL) && (c_20 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        c_20 = ATgetFirst((ATermList) t);
      if(((d_20 != NULL) && (d_20 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        d_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(d_20)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_20)));
  return(t);
}
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  if(((j_20 != NULL) && (j_20 != t)))
    _fail(t);
  else
    j_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((f_20 != NULL) && (f_20 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        f_20 = ATgetFirst((ATermList) t);
      if(((g_20 != NULL) && (g_20 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        g_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((k_20 != NULL) && (k_20 != t)))
    _fail(t);
  else
    k_20 = t;
  t = SSLgetAnnotations(not_null(j_20));
  if(((e_20 != NULL) && (e_20 != t)))
    _fail(t);
  else
    e_20 = t;
  t = not_null(f_20);
  t = n_63(t);
  if(((h_20 != NULL) && (h_20 != t)))
    _fail(t);
  else
    h_20 = t;
  t = not_null(g_20);
  t = o_63(t);
  if(((i_20 != NULL) && (i_20 != t)))
    _fail(t);
  else
    i_20 = t;
  if(((m_20 != NULL) && (m_20 != t)))
    _fail(t);
  else
    m_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_20)), not_null(h_20)), not_null(e_20));
  if(((l_20 != NULL) && (l_20 != t)))
    _fail(t);
  else
    l_20 = t;
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_20 != NULL) && (n_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_20 = ATgetArgument(t, 0);
      if(((o_20 != NULL) && (o_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_25, not_null(n_20), not_null(o_20));
  t = table_put_0_0(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  if(((q_20 != NULL) && (q_20 != t)))
    _fail(t);
  else
    q_20 = t;
  if(((r_20 != NULL) && (r_20 != t)))
    _fail(t);
  else
    r_20 = t;
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_23, not_null(s_20));
  t = set_config_0_0(t);
  t = not_null(q_20);
  if(((t_20 != NULL) && (t_20 != t)))
    _fail(t);
  else
    t_20 = t;
  if(((u_20 != NULL) && (u_20 != t)))
    _fail(t);
  else
    u_20 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_20));
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm p_20 = NULL;
  if(((p_20 != NULL) && (p_20 != t)))
    _fail(t);
  else
    p_20 = t;
  {
    ATerm s_3 (ATerm t)
    {
      t = term_f_26;
      t = n_90(t);
      return(t);
    }
    t = try_1_0(s_3, t);
    t = not_null(p_20);
    {
      ATerm u_3 (ATerm t)
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_26 = t;
            int j_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(j_26);
              }
            else
              {
                t = i_26;
                t = n_90(t);
                t = Cons_2_0(_id, u_3, t);
              }
            ;
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(t_3, u_3, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  if(((w_20 != NULL) && (w_20 != t)))
    _fail(t);
  else
    w_20 = t;
  if(match_cons(t, sym__3))
    {
      if(((x_20 != NULL) && (x_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_20 = ATgetArgument(t, 0);
      if(((y_20 != NULL) && (y_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_20 = ATgetArgument(t, 1);
      if(((z_20 != NULL) && (z_20 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        z_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(x_20), not_null(y_20), not_null(z_20));
  t = not_null(w_20);
  return(t);
}
ATerm i_21 (ATerm d_21, ATerm t)
{
  ATerm e_21 = NULL;
  t = not_null(d_21);
  if(((e_21 != NULL) && (e_21 != t)))
    _fail(t);
  else
    e_21 = t;
  t = not_null(d_21);
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_24;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = option_defined_1_0(Help_0_0, t);
      }
    t = not_null(e_21);
    t = system_usage_0_0(t);
    t = term_k_22;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm m_90 (ATerm), ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,h_21 = NULL;
  if(((b_21 != NULL) && (b_21 != t)))
    _fail(t);
  else
    b_21 = t;
  t = term_m_26;
  t = table_put_0_0(t);
  t = not_null(b_21);
  {
    ATerm v_3 (ATerm t)
    {
      ATerm n_26 = t;
      int o_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_90(t);
          ;
          LocalPopChoice(o_26);
        }
      else
        {
          t = n_26;
          {
            ATerm p_26 = t;
            int q_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(q_26);
              }
            else
              {
                t = p_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_3, t);
    {
      ATerm w_3 (ATerm t)
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_21 = NULL;
            if(((f_21 != NULL) && (f_21 != t)))
              _fail(t);
            else
              f_21 = t;
            {
              ATerm t_26 = t;
              int u_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_21(not_null(f_21), t);
                  ;
                  LocalPopChoice(u_26);
                }
              else
                {
                  t = t_26;
                  {
                    ATerm g_21 = NULL;
                    t = not_null(f_21);
                    if(((g_21 != NULL) && (g_21 != t)))
                      _fail(t);
                    else
                      g_21 = t;
                    t = term_r_25;
                    t = get_config_0_0(t);
                    t = not_null(g_21);
                    t = system_about_0_0(t);
                    t = term_k_22;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            {
              ATerm x_3 (ATerm t)
              {
                ATerm y_3 (ATerm t)
                {
                  if(((c_21 != NULL) && (c_21 != t)))
                    _fail(t);
                  else
                    c_21 = t;
                  return(t);
                }
                t = Undefined_1_0(y_3, t);
                return(t);
              }
              t = option_defined_1_0(x_3, t);
              t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_21)), term_v_26));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_l_23;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(w_3, t);
      if(((h_21 != NULL) && (h_21 != t)))
        _fail(t);
      else
        h_21 = t;
      t = term_m_24;
      t = table_destroy_0_0(t);
      t = not_null(h_21);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t)
{
  t = parse_options_1_0(n_70, t);
  t = store_options_0_0(t);
  t = p_70(t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_70, t);
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        {
          ATerm y_26 = t;
          int z_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_70(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_26);
            }
          else
            {
              t = y_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t)
{
  t = option_wrap_4_0(r_70, default_usage_0_0, _id, s_70, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = xtc_output_1_0(a_4, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_a_27;
  t = xtc_find_file_0_0(t);
  return(t);
}
ATerm io_gen_css_boxstyle_0_0 (ATerm t)
{
  t = option_wrap_2_0(output_options_0_0, z_3, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_gen_css_boxstyle_0_0(t);
  return(t);
}
