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
Symbol sym_S_1;
Symbol sym_C_2;
Symbol sym_FBOX_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_ALT_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_SOpt_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_F__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Scopes_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Undefined_0;
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
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_r_41;
ATerm term_g_41;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_e_40;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_f_39;
ATerm term_e_37;
ATerm term_o_36;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_q_35;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_e_33;
ATerm term_x_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_a_27;
ATerm term_v_21;
ATerm term_g_21;
ATerm term_o_20;
ATerm term_f_18;
ATerm term_s_17;
ATerm term_i_17;
ATerm term_b_17;
ATerm term_k_16;
ATerm term_y_15;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_m_14;
void init_constant_terms (void)
{
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_16);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__3, term_f_39, term_i_39, term_q_14);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
ATerm topdown_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm assert_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm u_1 (ATerm j_1, ATerm);
ATerm v_1 (ATerm m_1, ATerm n_1, ATerm o_1, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm l_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm topdown_print_to_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm s_84 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm p_107 (ATerm), ATerm);
ATerm q_0 (ATerm);
ATerm y_0 (ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm rel_string_length_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm get_width_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm vertical_sep_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm format_vbox_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm hv_in_new_vbox_2_0 (ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm);
ATerm hv_add_to_hbox_1_0 (ATerm u_77 (ATerm), ATerm);
ATerm foldl_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm z_77 (ATerm), ATerm);
ATerm q_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm string_length_0_0 (ATerm);
ATerm copy_char_0_0 (ATerm);
ATerm Cons_T_2_0 (ATerm o_0 (ATerm), ATerm t_0 (ATerm), ATerm);
ATerm thread_map_1_0 (ATerm w_90 (ATerm), ATerm);
ATerm H_2_0 (ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm is_real_hbox_0_0 (ATerm);
ATerm filter_1_0 (ATerm j_91 (ATerm), ATerm);
ATerm do_vbox_children_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm is_real_vbox_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm v_3 (ATerm);
ATerm matrix_transpose_0_0 (ATerm);
ATerm align_right_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm align_center_0_0 (ATerm);
ATerm align_helper_0_0 (ATerm);
ATerm align_left_0_0 (ATerm);
ATerm j_12 (ATerm s_11, ATerm t_11, ATerm u_11, ATerm);
ATerm align_column_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm flatten_list_0_0 (ATerm);
ATerm z_4 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm do_A_column_0_0 (ATerm);
ATerm genzip_4_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm);
ATerm map_with_index_1_0 (ATerm w_106 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm);
ATerm for_3_0 (ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm s_5 (ATerm);
ATerm x_5 (ATerm);
ATerm FitToMax_1_0 (ATerm y_77 (ATerm), ATerm);
ATerm R_2_0 (ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm i_6 (ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm j_31 (ATerm g_23, ATerm l_23, ATerm m_23, ATerm n_23, ATerm o_23, ATerm);
ATerm k_31 (ATerm p_24, ATerm q_24, ATerm r_24, ATerm s_24, ATerm);
ATerm l_31 (ATerm a_25, ATerm b_25, ATerm c_25, ATerm d_25, ATerm);
ATerm m_31 (ATerm r_25, ATerm s_25, ATerm t_25, ATerm e_26, ATerm);
ATerm m_6 (ATerm);
ATerm v_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm n_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm v_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm l_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm g_32 (ATerm a_32, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm w_8 (ATerm);
ATerm y_8 (ATerm);
ATerm a_9 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm xtc_io_1_0 (ATerm j_78 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm e_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm q_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm g_10 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm f_11 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_92 (ATerm), ATerm);
ATerm q_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_11 (ATerm);
ATerm need_help_1_0 (ATerm q_97 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm u_72 (ATerm), ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_72 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm i_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm o_84 (ATerm), ATerm);
ATerm _2_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm);
ATerm e_12 (ATerm);
ATerm g_12 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm x_83 (ATerm), ATerm);
ATerm i_12 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm k_12 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm r_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm);
ATerm u_12 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_99 (ATerm), ATerm);
ATerm c_13 (ATerm);
ATerm p_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm parse_options_1_0 (ATerm n_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm);
ATerm d_14 (ATerm);
ATerm f_14 (ATerm);
ATerm io_Abox_2_text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  t = n_79(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = topdown_1_0(n_79, t);
      return(t);
    }
    t = SRTS_all(c_0, t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm e_0 = NULL,s_0 = NULL,w_0 = NULL,x_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_0 = ATgetArgument(t, 0);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_93(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_0, e_0, s_0);
  t = table_push_0_0(t);
  {
    ATerm f_2 = t;
    int z_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_0, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_3);
      }
    else
      {
        t = f_2;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_0 = ATgetFirst((ATermList) t);
        a_1 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_0, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(a_1), (ATerm) ATinsert(CheckATermList(x_0), e_0)));
    t = (ATerm) ATmakeAppl(sym__2, e_0, s_0);
  }
  return(t);
}
ATerm u_1 (ATerm j_1, ATerm t)
{
  t = j_1;
  {
    ATerm g_14 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_14 = ATgetArgument(t, 0);
            ATerm l_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_14;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, j_1, term_m_14);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm v_1 (ATerm m_1, ATerm n_1, ATerm o_1, ATerm t)
{
  t = SSL_open_file(m_1, n_1);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL;
  r_1 = t;
  if(match_cons(t, sym__2))
    {
      s_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
      {
        ATerm n_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_1(r_1, t);
            ;
            LocalPopChoice(p_14);
          }
        else
          {
            t = n_14;
            t = v_1(s_1, t_1, r_1, t);
          }
      }
    }
  else
    {
      t = u_1(r_1, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm y_1 = NULL;
  t = term_q_14;
  t = new_0_0(t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_1, term_r_14);
  t = conc_strings_0_0(t);
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_2 = NULL;
        e_2 = t;
        t = SSL_access(e_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
      }
  }
  return(t);
}
ATerm l_0 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_2 = NULL;
  t = new_file_0_0(t);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_2, term_m_14);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, l_2, term_q_14);
  t = assert_1_0(l_0, t);
  t = l_2;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm n_2 = NULL,q_2 = NULL;
  n_2 = t;
  t = xtc_new_file_0_0(t);
  q_2 = t;
  t = n_2;
  {
    ATerm m_0 (ATerm t)
    {
      ATerm v_14 = t;
      int w_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_2 = NULL,v_0 = NULL;
          x_2 = t;
          t = SSL_is_string(x_2);
          v_0 = t;
          t = SSL_print(q_2, (ATerm) ATinsert(ATempty, v_0));
          t = v_0;
          ;
          LocalPopChoice(w_14);
        }
      else
        {
          t = v_14;
        }
      return(t);
    }
    t = topdown_1_0(m_0, t);
    t = SSL_close_file(q_2);
    t = (ATerm) ATmakeAppl(sym_FILE_1, q_2);
  }
  return(t);
}
ATerm at_suffix_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  ATerm x_18 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_84(t);
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = Cons_2_0(_id, x_18, t);
      }
    return(t);
  }
  t = x_18(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = Cons_2_0(l_84, _id, t);
    {
      ATerm p_0 (ATerm t)
      {
        if(((y_18 != NULL) && (y_18 != t)))
          _fail(t);
        else
          y_18 = t;
        return(t);
      }
      t = Cons_2_0(_id, p_0, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(n_0, t);
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_18, not_null(y_18));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,l_19 = NULL;
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(p_107, t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        ATerm e_19 = NULL;
        e_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_19, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_19;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm g_15 = ATgetFirst((ATermList) t);
              ATerm j_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_19;
          t = list_tokenize_1_0(p_107, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm k_15 = ATgetFirst((ATermList) t);
          ATerm v_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_19;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, h_19);
        }
      else
        {
          ATerm t_19 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_15 = ATgetFirst((ATermList) t);
              ATerm x_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_19;
          t = list_tokenize_1_0(p_107, t);
          t_19 = t;
          t = (ATerm) ATinsert(CheckATermList(t_19), h_19);
        }
    }
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  t = SSL_explode_string(w_19);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm z_19 = NULL;
  z_19 = t;
  t = SSL_implode_string(z_19);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL;
  t = _2_0(_id, q_0, t);
  if(match_cons(t, sym__2))
    {
      u_19 = ATgetArgument(t, 0);
      v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_19;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm x_19 = NULL;
      ATerm u_0 (ATerm t)
      {
        ATerm z_5 = NULL;
        z_5 = t;
        if(((x_19 != NULL) && (x_19 != t)))
          _fail(t);
        else
          x_19 = t;
        t = z_5;
        return(t);
      }
      if(((x_19 != NULL) && (x_19 != t)))
        _fail(t);
      else
        x_19 = t;
      t = u_19;
      t = SRTS_one(u_0, t);
      return(t);
    }
    t = list_tokenize_1_0(r_0, t);
    t = map_1_0(y_0, t);
  }
  return(t);
}
ATerm rel_string_length_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_y_15), c_20);
  t = string_tokenize_0_0(t);
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_20 = NULL,h_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_k_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_20 = ATgetFirst((ATermList) t);
                h_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_20;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_20;
            t = string_length_0_0(t);
          }
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        {
          ATerm k_20 = NULL;
          t = last_0_0(t);
          t = string_length_0_0(t);
          k_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_20, d_20);
          {
            ATerm m_16 = t;
            int n_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_subti(k_20, d_20);
                ;
                LocalPopChoice(n_16);
              }
            else
              {
                t = m_16;
                t = SSL_subtr(k_20, d_20);
              }
          }
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm o_16 = t;
  if((PushChoice() == 0))
    {
      ATerm l_20 = NULL,m_20 = NULL;
      if(match_cons(t, sym__2))
        {
          l_20 = ATgetArgument(t, 0);
          m_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(l_20, m_20);
            ;
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            t = SSL_gtr(l_20, m_20);
          }
        t = (ATerm) ATmakeAppl(sym__2, l_20, m_20);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_16;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm r_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)));
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_6 = NULL;
            t = eval_config_0_0(t);
            q_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), q_6);
            t = q_6;
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
          }
      }
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = r_16;
      t = term_b_17;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_18 = ATgetFirst((ATermList) t);
      n_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_18;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm c_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_18;
          ;
          LocalPopChoice(d_17);
        }
      else
        {
          t = c_17;
          t = n_18;
          t = last_0_0(t);
        }
    }
  else
    {
      t = n_18;
      t = last_0_0(t);
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm vertical_sep_0_0 (ATerm t)
{
  ATerm c_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_3;
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(z_0, t);
        ;
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        t = term_k_16;
      }
    i_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_3, term_i_17);
    {
      ATerm n_17 = t;
      int o_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(i_3, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(o_17);
        }
      else
        {
          t = n_17;
          t = SSL_addr(i_3, (ATerm) ATmakeInt(1));
        }
      k_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_3, term_y_15);
      t = copy_char_0_0(t);
      h_3 = t;
      t = c_3;
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SOpt_value_1_0(b_1, t);
            ;
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
            t = term_k_16;
          }
        m_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_3, term_s_17);
        t = copy_char_0_0(t);
        l_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_3, term_s_17);
        t = copy_char_0_0(t);
        n_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_3), l_3), h_3);
        t = concat_strings_0_0(t);
      }
    }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  d_1 = t;
  t = SSL_explode_term(d_1);
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_17 = ATgetArgument(t, 1);
        if(((ATgetType(u_17) == AT_LIST) && !(ATisEmpty(u_17))))
          {
            e_1 = ATgetFirst((ATermList) u_17);
            {
              ATerm v_17 = (ATerm) ATgetNext((ATermList) u_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_1;
  return(t);
}
ATerm format_vbox_0_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__3))
    {
      o_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
      q_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_3, q_3);
  t = vertical_sep_0_0(t);
  r_3 = t;
  t = p_3;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3;
  t = map_1_0(c_1, t);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_3, t_3);
  t = separate_by_0_0(t);
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, s_3);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3;
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm k_1 (ATerm t)
          {
            ATerm b_18 = t;
            int c_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(c_18);
              }
            else
              {
                t = b_18;
                {
                  ATerm y_3 = NULL;
                  t = Cons_2_0(_id, k_1, t);
                  y_3 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_3), w_3);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, k_1, t);
        }
      }
  }
  return(t);
}
ATerm hv_in_new_vbox_2_0 (ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,e_4 = NULL,f_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
  if(match_cons(t, sym__2))
    {
      b_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_q_14;
  t = w_77(t);
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, f_4);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_4, f_4)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
        t = SSL_exit((ATerm) ATmakeInt(1));
        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_4, f_4)), term_f_18);
      }
    if(match_cons(t, sym__2))
      {
        h_4 = ATgetArgument(t, 0);
        i_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = term_q_14;
    t = v_77(t);
    j_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_4, j_4);
    {
      ATerm g_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(i_4, j_4);
          ;
          LocalPopChoice(i_18);
        }
      else
        {
          t = g_18;
          t = SSL_addr(i_4, j_4);
        }
      k_4 = t;
      t = (ATerm) ATinsert(CheckATermList(e_4), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, h_4), k_4));
    }
  }
  return(t);
}
ATerm hv_add_to_hbox_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      {
        ATerm k_18 = ATgetArgument(t, 1);
        if(((ATgetType(k_18) == AT_LIST) && !(ATisEmpty(k_18))))
          {
            ATerm l_18 = ATgetFirst((ATermList) k_18);
            if(match_cons(l_18, sym__2))
              {
                m_4 = ATgetArgument(l_18, 0);
                n_4 = ATgetArgument(l_18, 1);
              }
            else
              _fail(t);
            o_4 = (ATerm) ATgetNext((ATermList) k_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_4, n_4);
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_4, n_4)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
        t = SSL_exit((ATerm) ATmakeInt(1));
        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_4, n_4)), term_f_18);
      }
    if(match_cons(t, sym__2))
      {
        p_4 = ATgetArgument(t, 0);
        q_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = term_q_14;
    t = get_width_0_0(t);
    r_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_4, r_4);
    t = leq_0_0(t);
    t = term_q_14;
    t = u_77(t);
    s_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_4, s_4);
    {
      ATerm q_18 = t;
      int r_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(q_4, s_4);
          ;
          LocalPopChoice(r_18);
        }
      else
        {
          t = q_18;
          t = SSL_addr(q_4, s_4);
        }
      t_4 = t;
      t = (ATerm) ATinsert(CheckATermList(o_4), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_4), p_4), t_4));
    }
  }
  return(t);
}
ATerm foldl_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL,r_5 = NULL;
        if(match_cons(t, sym__2))
          {
            q_5 = ATgetArgument(t, 0);
            r_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_5;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_5;
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        {
          ATerm f_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm u_18 = ATgetArgument(t, 0);
              if(((ATgetType(u_18) == AT_LIST) && !(ATisEmpty(u_18))))
                {
                  f_1 = ATgetFirst((ATermList) u_18);
                  g_1 = (ATerm) ATgetNext((ATermList) u_18);
                }
              else
                _fail(t);
              h_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, f_1, h_1);
          t = l_90(t);
          i_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_1, i_1);
          t = t_5(t);
        }
      }
    return(t);
  }
  t = t_5(t);
  return(t);
}
ATerm SOpt_2_0 (ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,y_5 = NULL,a_6 = NULL,c_6 = NULL;
  c_6 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      v_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_6);
  u_5 = t;
  t = v_5;
  t = s_71(t);
  y_5 = t;
  t = w_5;
  t = t_71(t);
  a_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, y_5, a_6), u_5);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm z_77 (ATerm), ATerm t)
{
  ATerm g_6 = NULL;
  ATerm l_1 (ATerm t)
  {
    ATerm p_1 (ATerm t)
    {
      if(((g_6 != NULL) && (g_6 != t)))
        _fail(t);
      else
        g_6 = t;
      return(t);
    }
    t = SOpt_2_0(z_77, p_1, t);
    return(t);
  }
  t = fetch_1_0(l_1, t);
  t = SSL_string_to_int(not_null(g_6));
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_k_16;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL;
  if(match_cons(t, sym__2))
    {
      j_6 = ATgetArgument(t, 0);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_6, k_6);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = SSL_addr(j_6, k_6);
      }
  }
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  ATerm h_6 = NULL;
  h_6 = t;
  t = SSL_explode_string(h_6);
  t = foldr_3_0(q_1, w_1, x_1, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm l_6 = NULL;
  t = copy_0_0(t);
  l_6 = t;
  t = SSL_implode_string(l_6);
  return(t);
}
ATerm Cons_T_2_0 (ATerm o_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,r_6 = NULL,s_6 = NULL,u_6 = NULL,w_6 = NULL,x_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_19 = ATgetArgument(t, 0);
      if(((ATgetType(a_19) == AT_LIST) && !(ATisEmpty(a_19))))
        {
          n_6 = ATgetFirst((ATermList) a_19);
          o_6 = (ATerm) ATgetNext((ATermList) a_19);
        }
      else
        _fail(t);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_6, r_6);
  t = o_0(t);
  if(match_cons(t, sym__2))
    {
      s_6 = ATgetArgument(t, 0);
      u_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_6, u_6);
  t = t_0(t);
  if(match_cons(t, sym__2))
    {
      x_6 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_6), s_6), w_6);
  return(t);
}
ATerm thread_map_1_0 (ATerm w_90 (ATerm), ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm b_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(w_90, h_7, t);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = b_19;
        {
          ATerm a_7 = NULL,b_7 = NULL;
          a_7 = t;
          if(match_cons(t, sym__2))
            {
              b_7 = ATgetArgument(t, 0);
              {
                ATerm g_19 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = b_7;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_7;
        }
      }
    return(t);
  }
  t = h_7(t);
  return(t);
}
ATerm H_2_0 (ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,r_7 = NULL;
  r_7 = t;
  if(match_cons(t, sym_H_2))
    {
      j_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_7);
  i_7 = t;
  t = j_7;
  t = m_71(t);
  l_7 = t;
  t = k_7;
  t = n_71(t);
  m_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, l_7, m_7), i_7);
  return(t);
}
ATerm c_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm i_19 = t;
  if((PushChoice() == 0))
    {
      ATerm j_19 = t;
      int k_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(k_19);
        }
      else
        {
          t = j_19;
          t = H_2_0(c_2, d_2, t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_19;
    }
  return(t);
}
ATerm filter_1_0 (ATerm j_91 (ATerm), ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_2 (ATerm t)
            {
              t = filter_1_0(j_91, t);
              return(t);
            }
            t = Cons_2_0(j_91, g_2, t);
            ;
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            {
              ATerm z_7 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_19 = ATgetFirst((ATermList) t);
                  z_7 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_7;
              t = filter_1_0(j_91, t);
            }
          }
      }
    }
  return(t);
}
ATerm do_vbox_children_0_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  if(match_cons(t, sym__3))
    {
      b_8 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
      d_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_8;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm g_8 = NULL;
      g_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_8, b_8);
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_8, b_8)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
            t = SSL_exit((ATerm) ATmakeInt(1));
            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_8, b_8)), term_f_18);
          }
      }
      return(t);
    }
    ATerm m_2 (ATerm t)
    {
      ATerm r_2 (ATerm t)
      {
        ATerm h_8 = NULL;
        h_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_8, c_8);
        {
          ATerm y_19 = t;
          int a_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = abox2text_0_0(t);
              ;
              LocalPopChoice(a_20);
            }
          else
            {
              t = y_19;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_8, c_8)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
              t = SSL_exit((ATerm) ATmakeInt(1));
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_8, c_8)), term_f_18);
            }
        }
        return(t);
      }
      t = map_1_0(r_2, t);
      return(t);
    }
    t = Cons_2_0(k_2, m_2, t);
  }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = Cons_2_0(t_2, u_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm e_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = e_20;
      t = Cons_2_0(w_2, y_2, t);
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm i_20 = t;
  if((PushChoice() == 0))
    {
      ATerm j_20 = t;
      int n_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(n_20);
        }
      else
        {
          t = j_20;
          {
            ATerm z_8 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
            z_8 = t;
            t = SSL_explode_term(z_8);
            if(match_cons(t, sym__2))
              {
                z_1 = ATgetArgument(t, 0);
                a_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_2;
            t = Cons_2_0(_id, s_2, t);
            b_2 = t;
            t = SSL_mkterm(z_1, b_2);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_20;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_9 = ATgetFirst((ATermList) t);
      h_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_9, h_9);
  return(t);
}
ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_20;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_9 = ATgetFirst((ATermList) t);
      j_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_9, j_9);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm p_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      if(match_cons(p_20, sym__2))
        {
          p_9 = ATgetArgument(p_20, 0);
          s_9 = ATgetArgument(p_20, 1);
        }
      else
        _fail(t);
      {
        ATerm q_20 = ATgetArgument(t, 1);
        if(match_cons(q_20, sym__2))
          {
            r_9 = ATgetArgument(q_20, 0);
            t_9 = ATgetArgument(q_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_9), p_9), (ATerm) ATinsert(CheckATermList(t_9), s_9));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(z_2, t);
      t = (ATerm) ATempty;
      ;
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      {
        ATerm b_9 = NULL,f_9 = NULL;
        t = map_1_0(b_3, t);
        t = genzip_4_0(d_3, e_3, v_3, _id, t);
        t = _2_0(_id, matrix_transpose_0_0, t);
        if(match_cons(t, sym__2))
          {
            b_9 = ATgetArgument(t, 0);
            f_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(f_9), b_9);
      }
    }
  return(t);
}
ATerm align_right_0_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,d_10 = NULL,e_10 = NULL;
  if(match_cons(t, sym__3))
    {
      w_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
      d_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_9, x_9, d_10);
  t = align_helper_0_0(t);
  e_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_10, x_9);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm w_10 = NULL;
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_10, term_i_17);
  {
    ATerm u_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_10, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(w_20);
      }
    else
      {
        t = u_20;
        t = SSL_addr(w_10, (ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm align_center_0_0 (ATerm t)
{
  ATerm f_10 = NULL,h_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__3))
    {
      f_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      k_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_10;
  t = string_length_0_0(t);
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_10, l_10);
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(k_10, l_10);
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = SSL_subtr(k_10, l_10);
      }
    m_10 = t;
    {
      ATerm c_21 = t;
      int d_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_mod(m_10, (ATerm) ATmakeInt(2));
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
            _fail(t);
          t = m_10;
          LocalPopChoice(d_21);
          {
            ATerm t_10 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, m_10, term_g_21);
            {
              ATerm h_21 = t;
              int i_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_divi(m_10, (ATerm) ATmakeInt(2));
                  ;
                  LocalPopChoice(i_21);
                }
              else
                {
                  t = h_21;
                  t = SSL_divr(m_10, (ATerm) ATmakeInt(2));
                }
              t_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_10, t_10);
            }
          }
        }
      else
        {
          t = c_21;
          {
            ATerm u_10 = NULL,v_10 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, m_10, term_i_17);
            {
              ATerm j_21 = t;
              int k_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_subti(m_10, (ATerm) ATmakeInt(1));
                  ;
                  LocalPopChoice(k_21);
                }
              else
                {
                  t = j_21;
                  t = SSL_subtr(m_10, (ATerm) ATmakeInt(1));
                }
              u_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_10, term_g_21);
              {
                ATerm l_21 = t;
                int m_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_divi(u_10, (ATerm) ATmakeInt(2));
                    ;
                    LocalPopChoice(m_21);
                  }
                else
                  {
                    t = l_21;
                    t = SSL_divr(u_10, (ATerm) ATmakeInt(2));
                  }
                v_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_10, v_10);
                t = _2_0(a_4, _id, t);
              }
            }
          }
        }
      if(match_cons(t, sym__2))
        {
          n_10 = ATgetArgument(t, 0);
          o_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, l_10, n_10);
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(l_10, n_10);
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
            t = SSL_addr(l_10, n_10);
          }
        p_10 = t;
        t = (ATerm) ATmakeAppl(sym__3, f_10, h_10, p_10);
        t = align_helper_0_0(t);
        q_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_10, o_10);
        {
          ATerm p_21 = t;
          int q_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(l_10, o_10);
              ;
              LocalPopChoice(q_21);
            }
          else
            {
              t = p_21;
              t = SSL_addr(l_10, o_10);
            }
          r_10 = t;
          t = (ATerm) ATmakeAppl(sym__3, f_10, h_10, r_10);
          t = align_helper_0_0(t);
          s_10 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_10), h_10), q_10);
          t = concat_strings_0_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm align_helper_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym__3))
    {
      x_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
      z_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_10;
  t = string_length_0_0(t);
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_10, a_11);
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(z_10, a_11);
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        t = SSL_subtr(z_10, a_11);
      }
    {
      ATerm t_21 = t;
      int u_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_11 = NULL;
          b_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_11, term_k_16);
          t = geq_0_0(t);
          t = b_11;
          LocalPopChoice(u_21);
          {
            ATerm c_11 = NULL;
            c_11 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_11, x_10);
            t = copy_char_0_0(t);
          }
        }
      else
        {
          t = t_21;
          t = term_v_21;
        }
    }
  }
  return(t);
}
ATerm align_left_0_0 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,g_11 = NULL,h_11 = NULL;
  if(match_cons(t, sym__3))
    {
      d_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
      g_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_11, e_11, g_11);
  t = align_helper_0_0(t);
  h_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_11, h_11);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm j_12 (ATerm s_11, ATerm t_11, ATerm u_11, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, s_11, term_i_17);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(s_11, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = SSL_gtr(s_11, (ATerm) ATmakeInt(1));
      }
    t = t_11;
    t = align_left_0_0(t);
  }
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm z_11 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,f_12 = NULL;
  b_12 = t;
  if(match_cons(t, sym__3))
    {
      c_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
      f_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_12;
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm a_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_21);
        t = f_12;
        {
          ATerm b_22 = t;
          int c_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm d_22 = ATgetArgument(t, 0);
                  z_11 = ATgetArgument(t, 1);
                  {
                    ATerm e_22 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(c_22);
              t = c_12;
              if(match_int(t, 1))
                {
                  ATerm f_22 = t;
                  int g_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = j_12(c_12, f_12, b_12, t);
                      ;
                      LocalPopChoice(g_22);
                    }
                  else
                    {
                      t = f_22;
                      t = z_11;
                    }
                }
              else
                {
                  t = j_12(c_12, f_12, b_12, t);
                }
            }
          else
            {
              t = b_22;
              t = c_12;
              t = j_12(c_12, f_12, b_12, t);
            }
        }
      }
    else
      {
        t = y_21;
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm j_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(i_22);
              t = f_12;
              t = align_center_0_0(t);
            }
          else
            {
              t = h_22;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm k_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = f_12;
              t = align_right_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm q_12 = NULL;
  q_12 = t;
  t = SSL_explode_string(q_12);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm p_12 = NULL;
  t = map_1_0(c_4, t);
  t = concat_0_0(t);
  p_12 = t;
  t = SSL_implode_string(p_12);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(v_4, _id, t);
      LocalPopChoice(m_22);
      {
        ATerm w_12 = NULL,x_12 = NULL;
        ATerm w_4 (ATerm t)
        {
          t = not_null(x_12);
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            if(((w_12 != NULL) && (w_12 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              w_12 = ATgetArgument(t, 0);
            if(((x_12 != NULL) && (x_12 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              x_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(w_12);
        t = at_end_1_0(w_4, t);
      }
    }
  else
    {
      t = l_22;
      {
        ATerm y_12 = NULL,z_12 = NULL;
        if(match_cons(t, sym__2))
          {
            y_12 = ATgetArgument(t, 0);
            z_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_12), y_12);
      }
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_13 = NULL;
      a_13 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = a_13;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm p_22 = ATgetFirst((ATermList) t);
              ATerm q_22 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_13;
        }
      LocalPopChoice(o_22);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = n_22;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_12;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm r_22 = ATgetFirst((ATermList) t);
          ATerm s_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_12;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(d_4, g_4, u_4, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_20;
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_13 = ATgetFirst((ATermList) t);
      v_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_13, v_13);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_22 = ATgetArgument(t, 0);
      if(match_cons(t_22, sym__2))
        {
          w_13 = ATgetArgument(t_22, 0);
          y_13 = ATgetArgument(t_22, 1);
        }
      else
        _fail(t);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(match_cons(u_22, sym__2))
          {
            x_13 = ATgetArgument(u_22, 0);
            z_13 = ATgetArgument(u_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_13), w_13), (ATerm) ATinsert(CheckATermList(z_13), y_13));
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = map_1_0(g_5, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL;
  h_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_22 = ATgetFirst((ATermList) t);
      i_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_2 = ATgetFirst((ATermList) t);
      {
        ATerm w_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_2, j_2);
  t = foldl_1_0(h_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = flatten_list_0_0(t);
      t = concat_strings_0_0(t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 = NULL,p_2 = NULL;
      if(match_cons(t, sym__2))
        {
          o_2 = ATgetArgument(t, 0);
          p_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(o_2, p_2);
            ;
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            t = SSL_gtr(o_2, p_2);
          }
        t = (ATerm) ATmakeAppl(sym__2, o_2, p_2);
      }
      LocalPopChoice(a_23);
      {
        ATerm v_2 = NULL,a_3 = NULL;
        v_2 = t;
        t = SSL_explode_term(v_2);
        if(match_cons(t, sym__2))
          {
            ATerm d_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_23 = ATgetArgument(t, 1);
              if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
                {
                  a_3 = ATgetFirst((ATermList) e_23);
                  {
                    ATerm f_23 = (ATerm) ATgetNext((ATermList) e_23);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_3;
      }
    }
  else
    {
      t = z_22;
      {
        ATerm f_3 = NULL,j_3 = NULL;
        f_3 = t;
        t = SSL_explode_term(f_3);
        if(match_cons(t, sym__2))
          {
            ATerm h_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_23 = ATgetArgument(t, 1);
              if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
                {
                  ATerm k_23 = ATgetFirst((ATermList) j_23);
                  ATerm p_23 = (ATerm) ATgetNext((ATermList) j_23);
                  if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
                    {
                      j_3 = ATgetFirst((ATermList) p_23);
                      {
                        ATerm r_23 = (ATerm) ATgetNext((ATermList) p_23);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_3;
      }
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm do_A_column_0_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,q_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_23 = ATgetArgument(t, 0);
      if(match_cons(s_23, sym__2))
        {
          e_13 = ATgetArgument(s_23, 0);
          {
            ATerm u_23 = ATgetArgument(s_23, 1);
            if(match_cons(u_23, sym__2))
              {
                f_13 = ATgetArgument(u_23, 0);
                g_13 = ATgetArgument(u_23, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm t_23 = ATgetArgument(t, 1);
        if(match_cons(t_23, sym__2))
          {
            h_13 = ATgetArgument(t_23, 0);
            i_13 = ATgetArgument(t_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_13;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm r_13 = NULL;
      r_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_13, h_13);
      {
        ATerm z_23 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = z_23;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_13, h_13)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
            t = SSL_exit((ATerm) ATmakeInt(1));
            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_13, h_13)), term_f_18);
          }
      }
      return(t);
    }
    t = map_1_0(x_4, t);
    t = genzip_4_0(z_4, c_5, d_5, _id, t);
    t = _2_0(e_5, f_5, t);
    if(match_cons(t, sym__2))
      {
        j_13 = ATgetArgument(t, 0);
        k_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, k_13, h_13);
    {
      ATerm g_24 = t;
      int h_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(k_13, h_13);
          ;
          LocalPopChoice(h_24);
        }
      else
        {
          t = g_24;
          t = SSL_subtr(k_13, h_13);
        }
      l_13 = t;
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, f_13, term_i_17);
            {
              ATerm v_24 = t;
              int e_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_gti(f_13, (ATerm) ATmakeInt(1));
                  ;
                  LocalPopChoice(e_25);
                }
              else
                {
                  t = v_24;
                  t = SSL_gtr(f_13, (ATerm) ATmakeInt(1));
                }
              t = (ATerm) ATmakeAppl(sym__2, f_13, term_i_17);
            }
            LocalPopChoice(u_24);
            {
              ATerm c_14 = NULL,e_14 = NULL;
              t = e_13;
              if(match_cons(t, sym_AC_1))
                {
                  e_14 = ATgetArgument(t, 0);
                  t = e_14;
                }
              else
                {
                  if(match_cons(t, sym_AR_1))
                    {
                      e_14 = ATgetArgument(t, 0);
                      t = e_14;
                    }
                  else
                    {
                      if(match_cons(t, sym_AL_1))
                        {
                          e_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = e_14;
                    }
                }
              {
                ATerm f_25 = t;
                int g_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SOpt_value_1_0(i_5, t);
                    ;
                    LocalPopChoice(g_25);
                  }
                else
                  {
                    t = f_25;
                    t = term_i_17;
                  }
                c_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_14, term_s_17);
                t = copy_char_0_0(t);
              }
            }
          }
        else
          {
            t = t_24;
            t = term_v_21;
          }
        m_13 = t;
        t = j_13;
        {
          ATerm l_5 (ATerm t)
          {
            ATerm i_14 = NULL,j_14 = NULL;
            i_14 = t;
            t = (ATerm) ATmakeAppl(sym__3, f_13, e_13, (ATerm) ATmakeAppl(sym__3, term_s_17, i_14, l_13));
            t = align_column_0_0(t);
            j_14 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_14, m_13);
            t = conc_strings_0_0(t);
            return(t);
          }
          t = map_1_0(l_5, t);
          n_13 = t;
          t = m_13;
          t = string_length_0_0(t);
          o_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_13, k_13);
          {
            ATerm l_25 = t;
            int m_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(o_13, k_13);
                ;
                LocalPopChoice(m_25);
              }
            else
              {
                t = l_25;
                t = SSL_addr(o_13, k_13);
              }
            q_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_13, (ATerm) ATinsert(CheckATermList(i_13), n_13));
          }
        }
      }
    }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm t)
{
  ATerm k_14 (ATerm t)
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_85(t);
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = u_85(t);
        t = _2_0(w_85, k_14, t);
        t = v_85(t);
      }
    return(t);
  }
  t = k_14(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm o_14 = NULL;
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_17, o_14);
  {
    ATerm d_15 (ATerm t)
    {
      ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
      if(match_cons(t, sym__2))
        {
          z_14 = ATgetArgument(t, 0);
          a_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_15;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm y_4 = NULL,a_5 = NULL,b_5 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_15 = ATgetFirst((ATermList) t);
              c_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, z_14, b_15);
          t = w_106(t);
          y_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_14, term_i_17);
          {
            ATerm w_25 = t;
            int y_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(z_14, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(y_25);
              }
            else
              {
                t = w_25;
                t = SSL_addr(z_14, (ATerm) ATmakeInt(1));
              }
            a_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_5, c_15);
            t = d_15(t);
            b_5 = t;
            t = (ATerm) ATinsert(CheckATermList(b_5), y_4);
          }
        }
      return(t);
    }
    t = d_15(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm t)
{
  ATerm z_25 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_90(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = z_25;
      {
        ATerm h_15 = NULL,i_15 = NULL,l_15 = NULL,m_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_15 = ATgetFirst((ATermList) t);
            i_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_15;
        t = k_90(t);
        l_15 = t;
        t = i_15;
        t = foldr_3_0(i_90, j_90, k_90, t);
        m_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_15, m_15);
        t = j_90(t);
      }
    }
  return(t);
}
ATerm while_not_2_0 (ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm t)
{
  ATerm n_15 (ATerm t)
  {
    ATerm d_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_100(t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = d_26;
        t = k_100(t);
        t = n_15(t);
      }
    return(t);
  }
  t = n_15(t);
  return(t);
}
ATerm for_3_0 (ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t)
{
  t = m_100(t);
  t = while_not_2_0(n_100, o_100, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_15, p_15, (ATerm) ATempty);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm q_15 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      if(((ATgetType(g_26) != AT_INT) || (ATgetInt((ATermInt) g_26) != 0)))
        _fail(t);
      {
        ATerm h_26 = ATgetArgument(t, 1);
      }
      q_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_15;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__3))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
      t_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_15, term_i_17);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, r_15, term_i_17);
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(r_15, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = SSL_subtr(r_15, (ATerm) ATmakeInt(1));
      }
    u_15 = t;
    t = (ATerm) ATmakeAppl(sym__3, u_15, s_15, (ATerm) ATinsert(CheckATermList(t_15), s_15));
  }
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(m_5, n_5, o_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_k_16;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm g_16 = NULL,l_16 = NULL;
  if(match_cons(t, sym__2))
    {
      g_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(g_16, l_16);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = SSL_addr(g_16, l_16);
      }
  }
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm FitToMax_1_0 (ATerm y_77 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  z_15 = t;
  t = foldr_3_0(p_5, s_5, x_5, t);
  a_16 = t;
  t = term_q_14;
  t = y_77(t);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_16, a_16);
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(d_16, a_16);
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        t = SSL_subtr(d_16, a_16);
      }
    e_16 = t;
    {
      ATerm o_26 = t;
      int p_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, e_16, term_k_16);
          {
            ATerm q_26 = t;
            int r_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_gti(e_16, (ATerm) ATmakeInt(0));
                ;
                LocalPopChoice(r_26);
              }
            else
              {
                t = q_26;
                t = SSL_gtr(e_16, (ATerm) ATmakeInt(0));
              }
            t = (ATerm) ATmakeAppl(sym__2, e_16, (ATerm) ATempty);
            t = copy_0_0(t);
            f_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_15, f_16);
            {
              ATerm s_26 = t;
              int t_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm u_26 = ATgetArgument(t, 0);
                      ATerm v_26 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = z_15;
                  {
                    ATerm b_6 (ATerm t)
                    {
                      t = f_16;
                      return(t);
                    }
                    t = at_end_1_0(b_6, t);
                  }
                  ;
                  LocalPopChoice(t_26);
                }
              else
                {
                  t = s_26;
                  {
                    ATerm j_5 = NULL;
                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, z_15, f_16));
                    if(match_cons(t, sym__2))
                      {
                        ATerm x_26 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) x_26) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        j_5 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = j_5;
                    t = concat_0_0(t);
                  }
                }
            }
          }
          ;
          LocalPopChoice(p_26);
        }
      else
        {
          t = o_26;
          {
            ATerm y_26 = t;
            int z_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                  _fail(t);
                t = z_15;
                ;
                LocalPopChoice(z_26);
              }
            else
              {
                t = y_26;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_15), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue))));
                t = SSL_exit((ATerm) ATmakeInt(1));
                t = (ATerm) ATinsert(ATinsert(ATempty, z_15), term_a_27);
              }
          }
        }
    }
  }
  return(t);
}
ATerm R_2_0 (ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  x_16 = t;
  if(match_cons(t, sym_R_2))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_16);
  s_16 = t;
  t = t_16;
  t = e_71(t);
  v_16 = t;
  t = u_16;
  t = f_71(t);
  w_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, v_16, w_16), s_16);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm b_27 = t;
  if((PushChoice() == 0))
    {
      t = R_2_0(_id, i_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_27;
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm k_5 = NULL;
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_5, (ATerm) ATempty);
  {
    ATerm h_18 (ATerm t)
    {
      ATerm g_17 = NULL,h_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
      if(match_cons(t, sym__2))
        {
          j_17 = ATgetArgument(t, 0);
          m_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_17;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm r_17 = NULL;
          t = m_17;
          t = reverse_acc_2_0(_id, d_6, t);
          r_17 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, r_17));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_17 = ATgetFirst((ATermList) t);
              l_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_17;
          if(match_cons(t, sym_R_2))
            {
              g_17 = ATgetArgument(t, 0);
              h_17 = ATgetArgument(t, 1);
              {
                ATerm c_27 = t;
                int d_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_17 = NULL,x_17 = NULL;
                    t = m_17;
                    t = reverse_acc_2_0(_id, e_6, t);
                    w_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_17, (ATerm) ATempty);
                    t = h_18(t);
                    x_17 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(x_17), (ATerm) ATmakeAppl(sym_R_2, g_17, h_17)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, w_17));
                    ;
                    LocalPopChoice(d_27);
                  }
                else
                  {
                    t = c_27;
                    t = (ATerm) ATmakeAppl(sym__2, l_17, (ATerm) ATinsert(CheckATermList(m_17), k_17));
                    t = h_18(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, l_17, (ATerm) ATinsert(CheckATermList(m_17), k_17));
              t = h_18(t);
            }
        }
      return(t);
    }
    t = h_18(t);
    t = filter_1_0(f_6, t);
  }
  return(t);
}
ATerm j_31 (ATerm g_23, ATerm l_23, ATerm m_23, ATerm n_23, ATerm o_23, ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,a_24 = NULL;
  t = m_23;
  t = construct_rows_0_0(t);
  t = map_1_0(m_6, t);
  {
    ATerm p_6 (ATerm t)
    {
      ATerm t_6 (ATerm t)
      {
        t = g_23;
        t = foldr_3_0(v_6, y_6, z_6, t);
        return(t);
      }
      t = FitToMax_1_0(t_6, t);
      return(t);
    }
    t = map_1_0(p_6, t);
    t = matrix_transpose_0_0(t);
    t = reverse_acc_2_0(_id, c_7, t);
    t = map_with_index_1_0(_id, t);
    t = reverse_acc_2_0(_id, d_7, t);
    v_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_23, v_23);
    t = genzip_4_0(e_7, f_7, g_7, _id, t);
    w_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_23, (ATerm) ATmakeAppl(sym__2, n_23, (ATerm) ATempty));
    t = foldl_1_0(do_A_column_0_0, t);
    if(match_cons(t, sym__2))
      {
        x_23 = ATgetArgument(t, 0);
        y_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = y_23;
    t = reverse_acc_2_0(_id, n_7, t);
    t = matrix_transpose_0_0(t);
    {
      ATerm o_7 (ATerm t)
      {
        ATerm o_24 = NULL;
        o_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_24, x_23);
        return(t);
      }
      t = map_1_0(o_7, t);
      a_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, l_23, a_24, n_23);
      t = format_vbox_0_0(t);
    }
  }
  return(t);
}
ATerm k_31 (ATerm p_24, ATerm q_24, ATerm r_24, ATerm s_24, ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  t = p_24;
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(p_7, t);
        ;
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = term_k_16;
      }
    w_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_24, w_24);
    {
      ATerm g_27 = t;
      int h_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(r_24, w_24);
          ;
          LocalPopChoice(h_27);
        }
      else
        {
          t = g_27;
          t = SSL_addr(r_24, w_24);
        }
      x_24 = t;
      t = q_24;
      t = filter_1_0(is_real_vbox_0_0, t);
      y_24 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_24);
        }
      else
        {
          ATerm z_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, r_24, x_24, y_24);
          t = do_vbox_children_0_0(t);
          z_24 = t;
          t = (ATerm) ATmakeAppl(sym__3, p_24, z_24, r_24);
          t = format_vbox_0_0(t);
        }
    }
  }
  return(t);
}
ATerm l_31 (ATerm a_25, ATerm b_25, ATerm c_25, ATerm d_25, ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  t = a_25;
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(q_7, t);
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = term_i_17;
      }
    i_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_25, term_s_17);
    t = copy_char_0_0(t);
    h_25 = t;
    t = string_length_0_0(t);
    j_25 = t;
    t = b_25;
    t = filter_1_0(is_real_hbox_0_0, t);
    k_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_25, c_25);
    {
      ATerm s_7 (ATerm t)
      {
        ATerm t_7 (ATerm t)
        {
          ATerm o_25 = NULL;
          o_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_25, o_25);
          {
            ATerm k_27 = t;
            int l_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(j_25, o_25);
                ;
                LocalPopChoice(l_27);
              }
            else
              {
                t = k_27;
                t = SSL_addr(j_25, o_25);
              }
          }
          return(t);
        }
        ATerm o_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(r_27);
          }
        else
          {
            t = o_27;
            {
              ATerm n_25 = NULL;
              n_25 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_25), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
              t = SSL_exit((ATerm) ATmakeInt(1));
              t = (ATerm) ATinsert(ATinsert(ATempty, n_25), term_f_18);
            }
          }
        t = _2_0(_id, t_7, t);
        return(t);
      }
      t = thread_map_1_0(s_7, t);
      {
        ATerm u_7 (ATerm t)
        {
          ATerm p_25 = NULL;
          p_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_25, p_25);
          t = separate_by_0_0(t);
          return(t);
        }
        t = _2_0(u_7, _id, t);
        {
          ATerm s_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_7 (ATerm t)
              {
                ATerm q_25 = NULL;
                q_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_25, j_25);
                {
                  ATerm v_27 = t;
                  int w_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_subti(q_25, j_25);
                      ;
                      LocalPopChoice(w_27);
                    }
                  else
                    {
                      t = v_27;
                      t = SSL_subtr(q_25, j_25);
                    }
                }
                return(t);
              }
              t = _2_0(v_7, w_7, t);
              ;
              LocalPopChoice(t_27);
            }
          else
            {
              t = s_27;
            }
        }
      }
    }
  }
  return(t);
}
ATerm m_31 (ATerm r_25, ATerm s_25, ATerm t_25, ATerm e_26, ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,p_27 = NULL,q_27 = NULL,b_28 = NULL,v_28 = NULL,m_29 = NULL,s_29 = NULL;
  t = r_25;
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(x_7, t);
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = term_i_17;
      }
    n_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_27, term_s_17);
    t = copy_char_0_0(t);
    m_27 = t;
    t = r_25;
    {
      ATerm z_27 = t;
      int a_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(y_7, t);
          ;
          LocalPopChoice(a_28);
        }
      else
        {
          t = z_27;
          t = term_k_16;
        }
      p_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_27, term_i_17);
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(p_27, (ATerm) ATmakeInt(1));
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            t = SSL_addr(p_27, (ATerm) ATmakeInt(1));
          }
        q_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_27, term_y_15);
        t = copy_char_0_0(t);
        t = m_27;
        t = string_length_0_0(t);
        b_28 = t;
        t = r_25;
        {
          ATerm h_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SOpt_value_1_0(a_8, t);
              ;
              LocalPopChoice(i_28);
            }
          else
            {
              t = h_28;
              t = term_k_16;
            }
          v_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_25, v_28);
          {
            ATerm j_28 = t;
            int k_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(t_25, v_28);
                ;
                LocalPopChoice(k_28);
              }
            else
              {
                t = j_28;
                t = SSL_addr(t_25, v_28);
              }
            m_29 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_25)));
            {
              ATerm e_8 (ATerm t)
              {
                ATerm l_28 = t;
                int m_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_8 (ATerm t)
                    {
                      t = b_28;
                      return(t);
                    }
                    t = hv_add_to_hbox_1_0(f_8, t);
                    ;
                    LocalPopChoice(m_28);
                  }
                else
                  {
                    t = l_28;
                    {
                      ATerm i_8 (ATerm t)
                      {
                        t = b_28;
                        return(t);
                      }
                      ATerm k_8 (ATerm t)
                      {
                        t = m_29;
                        return(t);
                      }
                      t = hv_in_new_vbox_2_0(i_8, k_8, t);
                    }
                  }
                return(t);
              }
              t = foldl_1_0(e_8, t);
              t = reverse_acc_2_0(_id, l_8, t);
              t = map_1_0(o_8, t);
              {
                ATerm r_8 (ATerm t)
                {
                  ATerm s_8 (ATerm t)
                  {
                    ATerm t_29 = NULL;
                    t_29 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_27, t_29);
                    t = separate_by_0_0(t);
                    return(t);
                  }
                  t = _2_0(s_8, _id, t);
                  return(t);
                }
                t = map_1_0(r_8, t);
                s_29 = t;
                t = (ATerm) ATmakeAppl(sym__3, r_25, s_29, t_25);
                t = format_vbox_0_0(t);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm b_24 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_24;
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_k_16;
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  if(match_cons(t, sym__2))
    {
      c_24 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(c_24, d_24);
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = SSL_addr(c_24, d_24);
      }
  }
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_28 = ATgetArgument(t, 0);
      if(((ATgetType(q_28) != AT_LIST) || !(ATisEmpty(q_28))))
        _fail(t);
      {
        ATerm r_28 = ATgetArgument(t, 1);
        if(((ATgetType(r_28) != AT_LIST) || !(ATisEmpty(r_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm e_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_28 = ATgetArgument(t, 0);
      if(((ATgetType(s_28) == AT_LIST) && !(ATisEmpty(s_28))))
        {
          e_24 = ATgetFirst((ATermList) s_28);
          j_24 = (ATerm) ATgetNext((ATermList) s_28);
        }
      else
        _fail(t);
      {
        ATerm t_28 = ATgetArgument(t, 1);
        if(((ATgetType(t_28) == AT_LIST) && !(ATisEmpty(t_28))))
          {
            i_24 = ATgetFirst((ATermList) t_28);
            k_24 = (ATerm) ATgetNext((ATermList) t_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_24, i_24), (ATerm) ATmakeAppl(sym__2, j_24, k_24));
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      m_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_24), m_24);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_7 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm u_28 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_28;
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = _2_0(p_8, _id, t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = reverse_acc_2_0(_id, q_8, t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm u_29 = NULL,b_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  j_30 = t;
  if(match_cons(t, sym__2))
    {
      k_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_30;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_21, n_30);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_30 = ATgetFirst((ATermList) t);
          m_30 = (ATerm) ATgetNext((ATermList) t);
          t = m_30;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, l_30, n_30);
          {
            ATerm w_28 = t;
            int x_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = abox2text_0_0(t);
                ;
                LocalPopChoice(x_28);
              }
            else
              {
                t = w_28;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_30, n_30)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
                t = SSL_exit((ATerm) ATmakeInt(1));
                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_30, n_30)), term_f_18);
              }
          }
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              l_30 = ATgetArgument(t, 0);
              m_30 = ATgetArgument(t, 1);
              {
                ATerm j_8 = NULL,m_8 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, l_30, n_30);
                {
                  ATerm y_28 = t;
                  int z_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = abox2text_0_0(t);
                      ;
                      LocalPopChoice(z_28);
                    }
                  else
                    {
                      t = y_28;
                      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_30, n_30)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
                      t = SSL_exit((ATerm) ATmakeInt(1));
                      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_30, n_30)), term_f_18);
                    }
                  j_8 = t;
                  if(match_cons(t, sym__2))
                    {
                      ATerm a_29 = ATgetArgument(t, 0);
                      m_8 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, l_30, m_30), n_30);
                  {
                    ATerm b_29 = t;
                    int c_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_8 = NULL;
                        t = get_width_0_0(t);
                        n_8 = t;
                        t = (ATerm) ATmakeAppl(sym__2, m_8, n_8);
                        t = leq_0_0(t);
                        LocalPopChoice(c_29);
                        t = j_8;
                      }
                    else
                      {
                        t = b_29;
                        t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
                        {
                          ATerm d_29 = t;
                          int e_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              ;
                              LocalPopChoice(e_29);
                            }
                          else
                            {
                              t = d_29;
                              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_30, n_30)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
                              t = SSL_exit((ATerm) ATmakeInt(1));
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_30, n_30)), term_f_18);
                            }
                        }
                      }
                  }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  l_30 = ATgetArgument(t, 0);
                  m_30 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, l_30, m_30), n_30);
                  {
                    ATerm f_29 = t;
                    int g_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = abox2text_0_0(t);
                        ;
                        LocalPopChoice(g_29);
                      }
                    else
                      {
                        t = f_29;
                        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, l_30, m_30), n_30)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
                        t = SSL_exit((ATerm) ATmakeInt(1));
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, l_30, m_30), n_30)), term_f_18);
                      }
                  }
                }
              else
                {
                  ATerm h_29 = t;
                  int i_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm j_29 = ATgetArgument(t, 0);
                          m_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(i_29);
                      t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
                      {
                        ATerm k_29 = t;
                        int l_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            ;
                            LocalPopChoice(l_29);
                          }
                        else
                          {
                            t = k_29;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_30, n_30)), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
                            t = SSL_exit((ATerm) ATmakeInt(1));
                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_30, n_30)), term_f_18);
                          }
                      }
                    }
                  else
                    {
                      t = h_29;
                      {
                        ATerm n_29 = t;
                        int o_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm p_29 = ATgetArgument(t, 0);
                                m_30 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(o_29);
                            t = m_30;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                u_29 = ATgetFirst((ATermList) t);
                                e_30 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = u_29;
                            if(match_cons(t, sym_S_1))
                              {
                                b_30 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = e_30;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, b_30, n_30);
                          }
                        else
                          {
                            t = n_29;
                            if(match_cons(t, sym_S_1))
                              {
                                l_30 = ATgetArgument(t, 0);
                                {
                                  ATerm s_12 = NULL,d_13 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, l_30, n_30);
                                  t = rel_string_length_0_0(t);
                                  s_12 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, n_30, s_12);
                                  {
                                    ATerm q_29 = t;
                                    int r_29 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = SSL_addi(n_30, s_12);
                                        ;
                                        LocalPopChoice(r_29);
                                      }
                                    else
                                      {
                                        t = q_29;
                                        t = SSL_addr(n_30, s_12);
                                      }
                                    d_13 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, l_30, d_13);
                                  }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    l_30 = ATgetArgument(t, 0);
                                    m_30 = ATgetArgument(t, 1);
                                    i_30 = ATgetArgument(t, 2);
                                    t = l_30;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        h_30 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = i_30;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        f_30 = ATgetFirst((ATermList) t);
                                        g_30 = (ATerm) ATgetNext((ATermList) t);
                                        t = g_30;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = f_30;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm v_29 = t;
                                                int w_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = j_31(h_30, m_30, i_30, n_30, j_30, t);
                                                    ;
                                                    LocalPopChoice(w_29);
                                                  }
                                                else
                                                  {
                                                    t = v_29;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_30);
                                                  }
                                              }
                                            else
                                              {
                                                t = j_31(h_30, m_30, i_30, n_30, j_30, t);
                                              }
                                          }
                                        else
                                          {
                                            t = f_30;
                                            t = j_31(h_30, m_30, i_30, n_30, j_30, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm x_29 = t;
                                            int y_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = j_31(h_30, m_30, i_30, n_30, j_30, t);
                                                ;
                                                LocalPopChoice(y_29);
                                              }
                                            else
                                              {
                                                t = x_29;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_30);
                                              }
                                          }
                                        else
                                          {
                                            t = j_31(h_30, m_30, i_30, n_30, j_30, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        l_30 = ATgetArgument(t, 0);
                                        m_30 = ATgetArgument(t, 1);
                                        t = k_31(l_30, m_30, n_30, j_30, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            l_30 = ATgetArgument(t, 0);
                                            m_30 = ATgetArgument(t, 1);
                                            t = l_31(l_30, m_30, n_30, j_30, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                l_30 = ATgetArgument(t, 0);
                                                m_30 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = m_31(l_30, m_30, n_30, j_30, t);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm g_32 (ATerm a_32, ATerm t)
{
  t = SSL_fclose(a_32);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL;
  e_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_32 = ATgetArgument(t, 0);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_32);
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            t = g_32(e_32, t);
          }
      }
    }
  else
    {
      t = g_32(e_32, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_32 = NULL;
  t = SSL_stdin_stream();
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_32 = NULL;
  t = SSL_stdout_stream();
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_32 = NULL;
  t = SSL_stderr_stream();
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_32);
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm p_32 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      p_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_32;
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm t_32 = NULL;
  t_32 = t;
  t = SSL_is_string(t_32);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_30 = ATgetArgument(t, 0);
      ATerm d_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_16 = NULL,c_16 = NULL;
        b_16 = t;
        t = SSL_explode_term(b_16);
        if(match_cons(t, sym__2))
          {
            ATerm q_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_30) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_30 = ATgetArgument(t, 1);
              if(((ATgetType(r_30) == AT_LIST) && !(ATisEmpty(r_30))))
                {
                  c_16 = ATgetFirst((ATermList) r_30);
                  {
                    ATerm s_30 = (ATerm) ATgetNext((ATermList) r_30);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_16;
        if(match_cons(t, sym_stderr_0))
          {
            t = c_16;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = c_16;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_16;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        {
          ATerm t_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
              t = _2_0(t_8, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_32 = ATgetArgument(t, 0);
                  n_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(m_32, n_32);
              o_32 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, o_32);
              ;
              LocalPopChoice(u_30);
            }
          else
            {
              t = t_30;
              {
                ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
                t = _2_0(u_8, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_32 = ATgetArgument(t, 0);
                    r_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(q_32, r_32);
                s_32 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, s_32);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,x_32 = NULL;
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_32 = NULL;
      z_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_32, term_x_30);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      {
        ATerm h_16 = NULL;
        h_16 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_16), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = h_16;
        _fail(t);
      }
    }
  u_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(x_32);
  v_32 = t;
  t = u_32;
  t = fclose_0_0(t);
  t = v_32;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  g_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_30;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          h_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(h_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL;
  a_34 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_18 = NULL;
        t = a_34;
        t = k_0(t);
        j_18 = t;
        {
          ATerm b_31 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(c_31);
            }
          else
            {
              t = b_31;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(b_34, j_18);
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_34);
        }
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        {
          ATerm d_31 = t;
          int e_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_19 = NULL;
              t = a_34;
              t = k_0(t);
              c_19 = t;
              {
                ATerm f_31 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_31 = t;
                    int h_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(h_31);
                      }
                    else
                      {
                        t = g_31;
                        {
                          ATerm i_31 = t;
                          int n_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(n_31);
                            }
                          else
                            {
                              t = i_31;
                              {
                                ATerm d_19 = NULL;
                                d_19 = t;
                                if((b_34 != t))
                                  {
                                    _fail(t);
                                  }
                                t = d_19;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_31;
                  }
                t = SSL_copy(b_34, c_19);
                t = (ATerm) ATmakeAppl(sym_FILE_1, b_34);
              }
              ;
              LocalPopChoice(e_31);
            }
          else
            {
              t = d_31;
              t = a_34;
              t = k_0(t);
              if((b_34 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_34);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  if(match_cons(t, sym__2))
    {
      j_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_34, k_34);
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_20 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_31 = ATgetArgument(t, 0);
            ATerm r_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_34, k_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_31 = ATgetFirst((ATermList) t);
            b_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_20;
        ;
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        t = (ATerm) ATempty;
      }
    l_34 = t;
    t = SSL_table_put(j_34, k_34, l_34);
    t = (ATerm) ATmakeAppl(sym__2, j_34, k_34);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL;
  r_34 = t;
  t = u_93(t);
  s_34 = t;
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_34, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_34 = ATgetFirst((ATermList) t);
        t_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_34, (ATerm)ATmakeAppl(sym_Scopes_0), t_34);
    t = u_34;
    {
      ATerm v_8 (ATerm t)
      {
        ATerm x_34 = NULL;
        x_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_34, x_34);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(v_8, t);
      t = r_34;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_82(t);
      t = v_82(t);
      ;
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      t = v_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm a_35 = NULL,e_35 = NULL,f_35 = NULL;
  a_35 = t;
  t = t_93(t);
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_35, term_x_31);
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_32 = ATgetArgument(t, 0);
            ATerm c_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_35, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = (ATerm) ATempty;
      }
    f_35 = t;
    t = SSL_table_put(e_35, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(f_35), (ATerm) ATempty));
    t = a_35;
  }
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm f_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_35 = NULL;
      r_35 = t;
      t = SSL_remove(r_35);
      ;
      LocalPopChoice(k_32);
    }
  else
    {
      t = f_32;
    }
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm n_35 = NULL;
  t = begin_scope_1_0(w_8, t);
  {
    ATerm x_8 (ATerm t)
    {
      ATerm o_35 = NULL;
      o_35 = t;
      {
        ATerm l_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(w_32);
          }
        else
          {
            t = l_32;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((n_35 != NULL) && (n_35 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              n_35 = ATgetFirst((ATermList) t);
            {
              ATerm y_32 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(n_35);
        t = map_1_0(y_8, t);
        t = o_35;
        t = end_scope_1_0(a_9, t);
      }
      return(t);
    }
    t = restore_always_2_0(i_78, x_8, t);
  }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm c_33 = t;
        int d_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_20 = NULL;
            t = eval_config_0_0(t);
            v_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_20);
            t = v_20;
            ;
            LocalPopChoice(d_33);
          }
        else
          {
            t = c_33;
          }
      }
      ;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      t = term_e_33;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm f_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_35 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm j_33 = t;
          int k_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_20 = NULL;
              t = eval_config_0_0(t);
              r_20 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), r_20);
              t = r_20;
              ;
              LocalPopChoice(k_33);
            }
          else
            {
              t = j_33;
            }
          v_35 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, v_35);
        }
        ;
        LocalPopChoice(i_33);
      }
    else
      {
        t = f_33;
        t = term_y_30;
      }
    t = j_78(t);
    t = copy_to_1_0(d_9, t);
    return(t);
  }
  t = xtc_temp_files_1_0(c_9, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  w_35 = t;
  t = term_q_14;
  t = whoami_0_0(t);
  x_35 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), x_35), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = w_35;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_36 = NULL;
      t = term_q_14;
      t = j_0(t);
      f_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_33, term_m_33, f_36);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm j_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_36 = ATgetFirst((ATermList) t);
          c_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_36 = ATgetFirst((ATermList) t);
          e_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_36;
      t = h_0(t);
      t = d_36;
      t = i_0(t);
      j_36 = t;
      t = (ATerm) ATinsert(CheckATermList(e_36), j_36);
    }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  if(match_string(t, "-k"))
    {
      t = l_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_36;
    }
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  m_36 = t;
  t = SSL_string_to_int(m_36);
  n_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_36);
  t = m_36;
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_9, k_9, l_9, t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  if(match_string(t, "-S"))
    {
      t = p_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_36;
    }
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_o_33;
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm q_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL;
  q_36 = t;
  t = SSL_string_to_int(q_36);
  r_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_36);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_36);
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm y_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_33;
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_s_33;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_9, n_9, o_9, t);
      ;
      LocalPopChoice(u_33);
    }
  else
    {
      t = t_33;
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_9, u_9, v_9, t);
            ;
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            t = Option_3_0(y_9, z_9, a_10, t);
          }
      }
    }
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  if(match_string(t, "-o"))
    {
      t = t_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_36;
    }
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_36);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_36);
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_x_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_10, c_10, g_10, t);
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  if(match_string(t, "-i"))
    {
      t = w_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_36;
    }
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), x_36);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_36);
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = term_y_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_10, j_10, f_11, t);
  return(t);
}
ATerm i_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_33;
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_c_34;
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  if(match_string(t, "-w"))
    {
      t = z_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = z_36;
    }
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  a_37 = t;
  t = SSL_string_to_int(a_37);
  b_37 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), b_37);
  t = a_37;
  return(t);
}
ATerm n_11 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm g_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(h_34);
          }
        else
          {
            t = g_34;
            {
              ATerm i_34 = t;
              int m_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_11, j_11, k_11, t);
                  ;
                  LocalPopChoice(m_34);
                }
              else
                {
                  t = i_34;
                  {
                    ATerm n_34 = t;
                    int o_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(o_34);
                      }
                    else
                      {
                        t = n_34;
                        {
                          ATerm p_34 = t;
                          int q_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              ;
                              LocalPopChoice(q_34);
                            }
                          else
                            {
                              t = p_34;
                              t = ArgOption_3_0(l_11, m_11, n_11, t);
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_14;
  t = whoami_0_0(t);
  c_37 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), c_37));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL;
        t = eval_config_0_0(t);
        z_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_20);
        t = z_20;
        ;
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm t)
{
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_90(t);
      ;
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
      {
        ATerm f_37 = NULL,g_37 = NULL,j_37 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_37 = ATgetFirst((ATermList) t);
            g_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_37;
        t = foldr_2_0(g_90, h_90, t);
        j_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_37, j_37);
        t = h_90(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_11 (ATerm t)
{
  t = term_k_16;
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL;
  if(match_cons(t, sym__2))
    {
      e_21 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(e_21, f_21);
        ;
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        t = SSL_addr(e_21, f_21);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_37 = NULL,a_21 = NULL,b_21 = NULL;
  t = times_0_0(t);
  a_21 = t;
  t = SSL_explode_term(a_21);
  if(match_cons(t, sym__2))
    {
      ATerm d_35 = ATgetArgument(t, 0);
      b_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_21;
  t = foldr_2_0(o_11, p_11, t);
  m_37 = t;
  t = SSL_TicksToSeconds(m_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
  x_37 = t;
  if(match_cons(t, sym__2))
    {
      y_37 = ATgetArgument(t, 0);
      z_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_37;
        if((y_37 != t))
          {
            _fail(t);
          }
        t = x_37;
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        t = x_37;
        {
          ATerm i_35 = t;
          int j_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_37, z_37);
              ;
              LocalPopChoice(j_35);
            }
          else
            {
              t = i_35;
              t = SSL_gtr(y_37, z_37);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_37, z_37);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_92 (ATerm), ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_38 = NULL,e_38 = NULL;
      c_38 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_23 = NULL;
            t = eval_config_0_0(t);
            i_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), i_23);
            t = i_23;
            ;
            LocalPopChoice(p_35);
          }
        else
          {
            t = m_35;
          }
        e_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_38, term_i_17);
        t = geq_0_0(t);
        t = c_38;
        t = w_92(t);
      }
      ;
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
    }
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL;
  t = run_time_0_0(t);
  g_38 = t;
  t = term_q_14;
  t = whoami_0_0(t);
  h_38 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), g_38), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), h_38));
  t = (ATerm) ATmakeAppl(sym__2, term_q_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_35), g_38), term_s_35), h_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm u_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(y_35);
    }
  else
    {
      t = u_35;
      {
        ATerm z_35 = t;
        int a_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(a_36);
          }
        else
          {
            t = z_35;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm i_36 = t;
        int k_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_23 = NULL;
            t = eval_config_0_0(t);
            q_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), q_23);
            t = q_23;
            ;
            LocalPopChoice(k_36);
          }
        else
          {
            t = i_36;
          }
      }
      ;
      LocalPopChoice(h_36);
    }
  else
    {
      t = g_36;
      t = fetch_1_0(r_11, t);
    }
  t = q_97(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_38 = ATgetFirst((ATermList) t);
      k_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_38 = NULL,p_38 = NULL;
        t = k_38;
        t = g_0(t);
        o_38 = t;
        t = j_38;
        t = f_0(t);
        p_38 = t;
        t = k_38;
        {
          ATerm v_11 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_38), p_38);
            return(t);
          }
          t = reverse_acc_2_0(f_0, v_11, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_14;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm u_72 (ATerm), ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  t_38 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_38);
  q_38 = t;
  t = r_38;
  t = u_72(t);
  s_38 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, s_38), q_38);
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm x_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm w_38 = NULL;
  w_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_38), term_o_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm y_36 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_24 = NULL;
            t = eval_config_0_0(t);
            l_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_24);
            t = l_24;
            ;
            LocalPopChoice(d_37);
          }
        else
          {
            t = y_36;
          }
      }
      ;
      LocalPopChoice(v_36);
    }
  else
    {
      t = s_36;
      t = fetch_1_0(w_11, t);
    }
  t = term_e_37;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, x_11, t);
  t = map_1_0(y_11, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_72 (ATerm), ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,a_39 = NULL,b_39 = NULL;
  b_39 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_39);
  x_38 = t;
  t = y_38;
  t = v_72(t);
  a_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, a_39), x_38);
  return(t);
}
ATerm fetch_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm e_39 (ATerm t)
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_84, _id, t);
        ;
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        t = Cons_2_0(_id, e_39, t);
      }
    return(t);
  }
  t = e_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL;
  g_39 = t;
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_37 = ATgetFirst((ATermList) t);
                ATerm o_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_39;
          }
        ;
        LocalPopChoice(l_37);
      }
    else
      {
        t = k_37;
        t = (ATerm) ATinsert(ATempty, g_39);
      }
    h_39 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_39);
    t = g_39;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_25 = NULL;
        t = eval_config_0_0(t);
        x_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_25);
        t = x_25;
        ;
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_37);
    }
  else
    {
      t = r_37;
      {
        ATerm n_39 = NULL,o_39 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_39 = ATgetFirst((ATermList) t);
            o_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_39;
        {
          ATerm a_12 (ATerm t)
          {
            t = o_39;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_12, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm u_39 (ATerm t)
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_39, t);
        ;
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_84(t);
      }
    return(t);
  }
  t = u_39(t);
  return(t);
}
ATerm _2_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
  a_40 = t;
  if(match_cons(t, sym__2))
    {
      w_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_40);
  v_39 = t;
  t = w_39;
  t = p_65(t);
  y_39 = t;
  t = x_39;
  t = q_65(t);
  z_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, y_39, z_39), v_39);
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm q_40 = NULL;
  q_40 = t;
  t = SSL_explode_string(q_40);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm r_40 = NULL;
  r_40 = t;
  t = SSL_explode_string(r_40);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm p_40 = NULL;
  t = _2_0(e_12, g_12, t);
  {
    ATerm v_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_40 = NULL,w_40 = NULL;
        if(match_cons(t, sym__2))
          {
            t_40 = ATgetArgument(t, 0);
            w_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_40;
        {
          ATerm h_12 (ATerm t)
          {
            t = w_40;
            return(t);
          }
          t = at_end_1_0(h_12, t);
        }
        ;
        LocalPopChoice(w_37);
      }
    else
      {
        t = v_37;
        {
          ATerm a_26 = NULL,b_26 = NULL;
          a_26 = t;
          t = SSL_explode_term(a_26);
          if(match_cons(t, sym__2))
            {
              ATerm a_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_38) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_26;
          t = concat_0_0(t);
        }
      }
    p_40 = t;
    t = SSL_implode_string(p_40);
  }
  return(t);
}
ATerm map_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm i_41 (ATerm t)
  {
    ATerm b_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = b_38;
        t = Cons_2_0(x_83, i_41, t);
      }
    return(t);
  }
  t = i_41(t);
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm f_38 = t;
  int i_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_38);
    }
  else
    {
      t = f_38;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_41 = NULL;
      t_41 = t;
      t = SSL_is_string(t_41);
      ;
      LocalPopChoice(m_38);
    }
  else
    {
      t = l_38;
      {
        ATerm n_38 = t;
        int u_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_12, t);
            ;
            LocalPopChoice(u_38);
          }
        else
          {
            t = n_38;
            {
              ATerm y_41 = NULL,z_41 = NULL,b_42 = NULL;
              y_41 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_41 = ATgetArgument(t, 0);
                  t = z_41;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_41 = ATgetArgument(t, 0);
                      t = z_41;
                      {
                        ATerm v_38 = t;
                        int z_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_41);
                            {
                              ATerm c_39 = t;
                              int d_39 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm w_26 = NULL;
                                  t = eval_config_0_0(t);
                                  w_26 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_41, w_26);
                                  t = w_26;
                                  ;
                                  LocalPopChoice(d_39);
                                }
                              else
                                {
                                  t = c_39;
                                }
                            }
                            ;
                            LocalPopChoice(z_38);
                          }
                        else
                          {
                            t = v_38;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_41), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = z_41;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_42 = NULL,g_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_41 = ATgetArgument(t, 0);
                          b_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_41;
                      t = eval_config_0_0(t);
                      f_42 = t;
                      t = b_42;
                      t = eval_config_0_0(t);
                      g_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_42, g_42);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm k_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_12 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_j_39;
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = term_k_39;
  return(t);
}
ATerm n_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_12 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_39;
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_12, l_12, m_12, t);
      ;
      LocalPopChoice(q_39);
    }
  else
    {
      t = p_39;
      t = Option_3_0(n_12, o_12, r_12, t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
  if(match_cons(t, sym__3))
    {
      n_42 = ATgetArgument(t, 0);
      o_42 = ATgetArgument(t, 1);
      p_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_42, o_42);
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_39 = ATgetArgument(t, 0);
            ATerm b_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_42, o_42);
        ;
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        t = (ATerm) ATempty;
      }
    q_42 = t;
    t = SSL_table_put(n_42, o_42, (ATerm) ATinsert(CheckATermList(q_42), p_42));
    t = (ATerm) ATmakeAppl(sym__3, n_42, o_42, p_42);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_43 = NULL;
      t = term_q_14;
      t = d_0(t);
      b_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_33, term_m_33, b_43);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_42 = ATgetFirst((ATermList) t);
          a_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_42;
      t = a_0(t);
      t = term_q_14;
      t = b_0(t);
      e_43 = t;
      t = (ATerm) ATinsert(CheckATermList(a_43), e_43);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL;
  a_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_43 = ATgetFirst((ATermList) t);
      x_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_44);
  v_43 = t;
  t = w_43;
  t = e_70(t);
  y_43 = t;
  t = x_43;
  t = f_70(t);
  z_43 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(z_43), y_43), v_43);
  return(t);
}
ATerm u_12 (ATerm t)
{
  ATerm g_44 = NULL;
  g_44 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_44);
  t = (ATerm) ATmakeAppl(sym_Program_1, g_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_99 (ATerm), ATerm t)
{
  ATerm f_44 = NULL;
  f_44 = t;
  {
    ATerm c_40 = t;
    int d_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_40;
        t = o_99(t);
        ;
        LocalPopChoice(d_40);
      }
    else
      {
        t = c_40;
      }
    t = f_44;
    {
      ATerm v_12 (ATerm t)
      {
        ATerm f_40 = t;
        int g_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_40 = t;
            int i_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_40);
              }
            else
              {
                t = h_40;
                t = o_99(t);
                t = Cons_2_0(_id, v_12, t);
              }
            ;
            LocalPopChoice(g_40);
          }
        else
          {
            t = f_40;
            {
              ATerm j_44 = NULL,l_44 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_44 = ATgetFirst((ATermList) t);
                  l_44 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_44), (ATerm) ATmakeAppl(sym_Undefined_1, j_44));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_12, v_12, t);
    }
  }
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm v_44 = NULL;
  v_44 = t;
  if(match_string(t, "--help"))
    {
      t = v_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_44;
        }
    }
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_j_40;
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = term_k_40;
  return(t);
}
ATerm t_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_99 (ATerm), ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_44;
  {
    ATerm b_13 (ATerm t)
    {
      ATerm l_40 = t;
      int m_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_99(t);
          ;
          LocalPopChoice(m_40);
        }
      else
        {
          t = l_40;
          {
            ATerm n_40 = t;
            int o_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_13, p_13, s_13, t);
                ;
                LocalPopChoice(o_40);
              }
            else
              {
                t = n_40;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_13, t);
    {
      ATerm s_40 = t;
      int u_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_45 = NULL;
          a_45 = t;
          {
            ATerm v_40 = t;
            int x_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_45;
                {
                  ATerm y_40 = t;
                  int z_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm a_41 = t;
                        int b_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm u_27 = NULL;
                            t = eval_config_0_0(t);
                            u_27 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), u_27);
                            t = u_27;
                            ;
                            LocalPopChoice(b_41);
                          }
                        else
                          {
                            t = a_41;
                          }
                      }
                      ;
                      LocalPopChoice(z_40);
                    }
                  else
                    {
                      t = y_40;
                      t = fetch_1_0(t_13, t);
                    }
                  t = a_45;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(x_40);
              }
            else
              {
                t = v_40;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm c_41 = t;
                  int d_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_28 = NULL;
                      t = eval_config_0_0(t);
                      c_28 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), c_28);
                      t = c_28;
                      ;
                      LocalPopChoice(d_41);
                    }
                  else
                    {
                      t = c_41;
                    }
                  t = a_45;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(u_40);
        }
      else
        {
          t = s_40;
          {
            ATerm e_41 = t;
            int f_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_14 (ATerm t)
                {
                  ATerm b_14 (ATerm t)
                  {
                    if(((t_44 != NULL) && (t_44 != t)))
                      _fail(t);
                    else
                      t_44 = t;
                    return(t);
                  }
                  t = Undefined_1_0(b_14, t);
                  return(t);
                }
                t = fetch_1_0(a_14, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_44)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_q_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_44)), term_g_41));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(f_41);
              }
            else
              {
                t = e_41;
              }
          }
        }
      u_44 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = u_44;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm t)
{
  ATerm d_45 = NULL;
  t = parse_options_1_0(s_97, t);
  d_45 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), d_45);
  t = d_45;
  t = u_97(t);
  {
    ATerm h_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_97, t);
        ;
        LocalPopChoice(j_41);
      }
    else
      {
        t = h_41;
        {
          ATerm k_41 = t;
          int l_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_41);
            }
          else
            {
              t = k_41;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_14 (ATerm t)
{
  t = xtc_io_1_0(f_14, t);
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm e_45 = NULL,f_28 = NULL,g_28 = NULL;
  t = read_from_0_0(t);
  e_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_45, term_k_16);
  {
    ATerm m_41 = t;
    int n_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(n_41);
      }
    else
      {
        t = m_41;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_45, (ATerm) ATmakeInt(0))), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue))));
        t = SSL_exit((ATerm) ATmakeInt(1));
        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_45, term_k_16)), term_f_18);
      }
    f_28 = t;
    t = SSL_explode_term(f_28);
    if(match_cons(t, sym__2))
      {
        ATerm o_41 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) o_41) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm p_41 = ATgetArgument(t, 1);
          if(((ATgetType(p_41) == AT_LIST) && !(ATisEmpty(p_41))))
            {
              g_28 = ATgetFirst((ATermList) p_41);
              {
                ATerm q_41 = (ATerm) ATgetNext((ATermList) p_41);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, g_28, term_r_41);
    t = topdown_print_to_0_0(t);
  }
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, d_14, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
