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
ATerm term_k_35;
ATerm term_o_34;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_l_32;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_f_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_x_28;
ATerm term_p_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_v_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_k_26;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_a_25;
ATerm term_t_23;
ATerm term_f_22;
ATerm term_r_19;
ATerm term_t_18;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_i_14;
ATerm term_c_14;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_u_11;
void init_constant_terms (void)
{
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_14);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__3, term_u_32, term_v_32, term_g_12);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
ATerm topdown_1_0 (ATerm v_72 (ATerm), ATerm);
ATerm assert_1_0 (ATerm e_87 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm p_88 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm topdown_print_to_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm Cons_T_2_0 (ATerm o_0 (ATerm), ATerm t_0 (ATerm), ATerm);
ATerm thread_map_1_0 (ATerm d_84 (ATerm), ATerm);
ATerm H_2_0 (ATerm u_64 (ATerm), ATerm v_64 (ATerm), ATerm);
ATerm is_real_hbox_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_84 (ATerm), ATerm);
ATerm string_length_0_0 (ATerm);
ATerm hs_length_0_0 (ATerm);
ATerm hs_text_0_0 (ATerm);
ATerm elem_1_0 (ATerm o_77 (ATerm), ATerm);
ATerm elem_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm z_77 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm s_77 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm t_100 (ATerm), ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm rel_string_length_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm get_width_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm is_text_0_0 (ATerm);
ATerm vertical_sep_0_0 (ATerm);
ATerm format_vbox_0_0 (ATerm);
ATerm hv_in_new_vbox_2_0 (ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm);
ATerm hv_add_to_hbox_1_0 (ATerm c_71 (ATerm), ATerm);
ATerm FoldL_1_0 (ATerm n_84 (ATerm), ATerm);
ATerm foldl_1_0 (ATerm s_83 (ATerm), ATerm);
ATerm is_length_0_0 (ATerm);
ATerm SOpt_2_0 (ATerm a_65 (ATerm), ATerm b_65 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm h_71 (ATerm), ATerm);
ATerm vs_length_0_0 (ATerm);
ATerm vs_text_0_0 (ATerm);
ATerm do_vbox_children_0_0 (ATerm);
ATerm is_real_vbox_0_0 (ATerm);
ATerm matrix_transpose_0_0 (ATerm);
ATerm align_right_0_0 (ATerm);
ATerm align_center_0_0 (ATerm);
ATerm copy_char_0_0 (ATerm);
ATerm pos_0_0 (ATerm);
ATerm align_helper_0_0 (ATerm);
ATerm align_left_0_0 (ATerm);
ATerm align_column_0_0 (ATerm);
ATerm max_0_0 (ATerm);
ATerm list_accum_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm list_max_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm flatten_list_0_0 (ATerm);
ATerm unzip_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm unzip_0_0 (ATerm);
ATerm do_A_column_0_0 (ATerm);
ATerm genzip_4_0 (ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm);
ATerm zip_1_0 (ATerm f_79 (ATerm), ATerm);
ATerm zip_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm a_100 (ATerm), ATerm);
ATerm add_indices_0_0 (ATerm);
ATerm foldr_3_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm while_not_2_0 (ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm);
ATerm for_3_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm);
ATerm copy_0_0 (ATerm);
ATerm FitToMax_1_0 (ATerm g_71 (ATerm), ATerm);
ATerm to_matrix_1_0 (ATerm f_71 (ATerm), ATerm);
ATerm R_2_0 (ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm);
ATerm split_2_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm try_abox2text_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm b_87 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm a_87 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_71 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm r_71 (ATerm), ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm);
ATerm crush_2_0 (ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_90 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm c_66 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm d_66 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm d_62 (ATerm), ATerm e_62 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_77 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm n_75 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm x_92 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_63 (ATerm), ATerm n_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_92 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm u_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm);
ATerm io_Abox_2_text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm v_72 (ATerm), ATerm t)
{
  t = v_72(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = topdown_1_0(v_72, t);
      return(t);
    }
    t = SRTS_all(c_0, t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL;
  if(match_cons(t, sym__2))
    {
      m_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_87(t);
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_1, m_1, n_1);
  t = table_push_0_0(t);
  {
    ATerm s_2 = t;
    int c_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(o_1, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_4);
      }
    else
      {
        t = s_2;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_1 = ATgetFirst((ATermList) t);
        q_1 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(o_1, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(q_1), (ATerm) ATinsert(CheckATermList(p_1), m_1)));
    t = (ATerm) ATmakeAppl(sym__2, m_1, n_1);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm p_88 (ATerm), ATerm t)
{
  ATerm r_1 = NULL;
  r_1 = t;
  t = p_88(t);
  {
    ATerm l_0 (ATerm t)
    {
      t = term_u_11;
      return(t);
    }
    t = debug_1_0(l_0, t);
    t = r_1;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm o_2 (ATerm v_1, ATerm t)
  {
    t = v_1;
    {
      ATerm w_11 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm y_11 = ATgetArgument(t, 0);
              ATerm a_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_11;
        }
      {
        ATerm m_0 (ATerm t)
        {
          t = term_b_12;
          return(t);
        }
        t = obsolete_1_0(m_0, t);
        t = (ATerm) ATmakeAppl(sym__2, v_1, term_c_12);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm p_2 (ATerm z_1, ATerm a_2, ATerm f_2, ATerm t)
  {
    t = SSL_open_file(z_1, a_2);
    return(t);
  }
  ATerm i_2 = NULL,k_2 = NULL,l_2 = NULL;
  i_2 = t;
  if(match_cons(t, sym__2))
    {
      k_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_2(i_2, t);
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = p_2(k_2, l_2, i_2, t);
          }
      }
    }
  else
    {
      t = o_2(i_2, t);
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
  ATerm q_2 = NULL;
  t = term_g_12;
  t = new_0_0(t);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_2, term_i_12);
  t = conc_strings_0_0(t);
  {
    ATerm n_0 (ATerm t)
    {
      ATerm e_0 = NULL;
      e_0 = t;
      t = SSL_access(e_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(n_0, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_2 = NULL;
  t = new_file_0_0(t);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_2, term_c_12);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, t_2, term_g_12);
  {
    ATerm p_0 (ATerm t)
    {
      t = term_j_12;
      return(t);
    }
    t = assert_1_0(p_0, t);
    t = t_2;
  }
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL;
  x_2 = t;
  t = xtc_new_file_0_0(t);
  y_2 = t;
  t = x_2;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm u_0 (ATerm t)
      {
        ATerm b_3 = NULL,c_3 = NULL;
        c_3 = t;
        t = SSL_is_string(c_3);
        b_3 = t;
        t = SSL_print(y_2, (ATerm) ATinsert(ATempty, b_3));
        t = b_3;
        return(t);
      }
      t = try_1_0(u_0, t);
      return(t);
    }
    t = topdown_1_0(q_0, t);
    t = SSL_close_file(y_2);
    t = (ATerm) ATmakeAppl(sym_FILE_1, y_2);
  }
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm g_3 = NULL;
  g_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), g_3);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = g_3;
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
          ATerm w_0 (ATerm t)
          {
            ATerm m_12 = t;
            int n_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(n_12);
              }
            else
              {
                t = m_12;
                {
                  ATerm b_4 = NULL;
                  t = Cons_2_0(_id, w_0, t);
                  b_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(b_4), z_3);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, w_0, t);
        }
      }
  }
  return(t);
}
ATerm Cons_T_2_0 (ATerm o_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm t_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_12 = ATgetArgument(t, 0);
      if(((ATgetType(o_12) == AT_LIST) && !(ATisEmpty(o_12))))
        {
          t_6 = ATgetFirst((ATermList) o_12);
          w_6 = (ATerm) ATgetNext((ATermList) o_12);
        }
      else
        _fail(t);
      x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_6, x_6);
  t = o_0(t);
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_6, a_7);
  t = t_0(t);
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_7), y_6), b_7);
  return(t);
}
ATerm thread_map_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(d_84, j_7, t);
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          ATerm g_7 = NULL,h_7 = NULL;
          g_7 = t;
          if(match_cons(t, sym__2))
            {
              h_7 = ATgetArgument(t, 0);
              {
                ATerm r_12 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = h_7;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_7;
        }
      }
    return(t);
  }
  t = j_7(t);
  return(t);
}
ATerm H_2_0 (ATerm u_64 (ATerm), ATerm v_64 (ATerm), ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,o_7 = NULL,p_7 = NULL,z_7 = NULL,a_8 = NULL;
  a_8 = t;
  if(match_cons(t, sym_H_2))
    {
      l_7 = ATgetArgument(t, 0);
      o_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_8);
  k_7 = t;
  t = l_7;
  t = u_64(t);
  p_7 = t;
  t = o_7;
  t = v_64(t);
  z_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, p_7, z_7), k_7);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm s_12 = t;
  if((PushChoice() == 0))
    {
      ATerm t_12 = t;
      int x_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(x_12);
        }
      else
        {
          t = t_12;
          {
            ATerm x_0 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            ATerm b_1 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = H_2_0(x_0, b_1, t);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_12;
    }
  return(t);
}
ATerm filter_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              t = filter_1_0(q_84, t);
              return(t);
            }
            t = Cons_2_0(q_84, d_1, t);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            {
              ATerm q_8 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm d_13 = ATgetFirst((ATermList) t);
                  q_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = q_8;
              t = filter_1_0(q_84, t);
            }
          }
      }
    }
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  ATerm a_6 = NULL;
  a_6 = t;
  t = SSL_explode_string(a_6);
  t = length_0_0(t);
  return(t);
}
ATerm hs_length_0_0 (ATerm t)
{
  ATerm e_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        if(!(match_cons(t, sym_HS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(f_1, t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = e_13;
      t = term_k_13;
    }
  return(t);
}
ATerm hs_text_0_0 (ATerm t)
{
  ATerm r_6 = NULL;
  t = hs_length_0_0(t);
  r_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_6, term_l_13);
  t = copy_char_0_0(t);
  return(t);
}
ATerm elem_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL;
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_20;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm h_20 = NULL;
      h_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_20, h_20);
      t = o_77(t);
      t = h_20;
      return(t);
    }
    t = SRTS_one(h_1, t);
  }
  return(t);
}
ATerm elem_0_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm k_20 = NULL;
    if(match_cons(t, sym__2))
      {
        k_20 = ATgetArgument(t, 0);
        if((k_20 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = elem_1_0(j_1, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm z_77 (ATerm), ATerm t)
{
  ATerm l_20 (ATerm t)
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_77(t);
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = Cons_2_0(_id, l_20, t);
      }
    return(t);
  }
  t = l_20(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm s_77 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  ATerm l_1 (ATerm t)
  {
    t = Cons_2_0(s_77, _id, t);
    {
      ATerm s_1 (ATerm t)
      {
        m_20 = t;
        return(t);
      }
      t = Cons_2_0(_id, s_1, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(l_1, t);
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_20, not_null(m_20));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm v_20 = NULL,y_20 = NULL;
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(t_100, t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm s_20 = NULL;
        s_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_20, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      v_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_20;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_13 = ATgetFirst((ATermList) t);
              ATerm s_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_20;
          t = list_tokenize_1_0(t_100, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm t_13 = ATgetFirst((ATermList) t);
          ATerm u_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_20;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, v_20);
        }
      else
        {
          ATerm f_21 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm v_13 = ATgetFirst((ATermList) t);
              ATerm b_14 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_20;
          t = list_tokenize_1_0(t_100, t);
          f_21 = t;
          t = (ATerm) ATinsert(CheckATermList(f_21), v_20);
        }
    }
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL;
  ATerm w_1 (ATerm t)
  {
    ATerm i_21 = NULL;
    i_21 = t;
    t = SSL_explode_string(i_21);
    return(t);
  }
  t = _2_0(_id, w_1, t);
  if(match_cons(t, sym__2))
    {
      g_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_21;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm j_21 = NULL;
      j_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_21, g_21);
      t = elem_0_0(t);
      return(t);
    }
    t = list_tokenize_1_0(x_1, t);
    {
      ATerm y_1 (ATerm t)
      {
        ATerm k_21 = NULL;
        k_21 = t;
        t = SSL_implode_string(k_21);
        return(t);
      }
      t = map_1_0(y_1, t);
    }
  }
  return(t);
}
ATerm rel_string_length_0_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  if(match_cons(t, sym__2))
    {
      n_21 = ATgetArgument(t, 0);
      o_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_14, n_21);
  t = string_tokenize_0_0(t);
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_21 = NULL,t_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_i_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_21 = ATgetFirst((ATermList) t);
                t_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_21;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_21;
            t = string_length_0_0(t);
          }
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        {
          ATerm w_21 = NULL;
          t = last_0_0(t);
          t = string_length_0_0(t);
          w_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_21, o_21);
          {
            ATerm j_14 = t;
            int n_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_subti(w_21, o_21);
                ;
                LocalPopChoice(n_14);
              }
            else
              {
                t = j_14;
                t = SSL_subtr(w_21, o_21);
              }
          }
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm o_14 = t;
  if((PushChoice() == 0))
    {
      ATerm x_21 = NULL,y_21 = NULL;
      if(match_cons(t, sym__2))
        {
          x_21 = ATgetArgument(t, 0);
          y_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(x_21, y_21);
            ;
            LocalPopChoice(u_14);
          }
        else
          {
            t = s_14;
            t = SSL_gtr(x_21, y_21);
          }
        t = (ATerm) ATmakeAppl(sym__2, x_21, y_21);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_14;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm w_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = w_14;
      t = term_a_15;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_19 = ATgetFirst((ATermList) t);
      x_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm i_15 = t;
      int j_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_19;
          ;
          LocalPopChoice(j_15);
        }
      else
        {
          t = i_15;
          t = x_19;
          t = last_0_0(t);
        }
    }
  else
    {
      t = x_19;
      t = last_0_0(t);
    }
  return(t);
}
ATerm is_text_0_0 (ATerm t)
{
  ATerm h_3 = NULL;
  t = is_length_0_0(t);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, term_l_13);
  t = copy_char_0_0(t);
  return(t);
}
ATerm vertical_sep_0_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      i_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_3;
  t = vs_text_0_0(t);
  k_3 = t;
  t = i_3;
  t = is_text_0_0(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_3, term_l_13);
  t = copy_char_0_0(t);
  n_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_3), m_3), k_3);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm format_vbox_0_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,r_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__3))
    {
      o_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
      r_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_3, r_3);
  t = vertical_sep_0_0(t);
  u_3 = t;
  t = p_3;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm q_15 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm r_0 = NULL,s_0 = NULL;
      r_0 = t;
      t = SSL_explode_term(r_0);
      if(match_cons(t, sym__2))
        {
          ATerm s_15 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) s_15) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm t_15 = ATgetArgument(t, 1);
            if(((ATgetType(t_15) == AT_LIST) && !(ATisEmpty(t_15))))
              {
                s_0 = ATgetFirst((ATermList) t_15);
                {
                  ATerm u_15 = (ATerm) ATgetNext((ATermList) t_15);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = s_0;
      return(t);
    }
    t = map_1_0(d_2, t);
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_3, x_3);
    t = separate_by_0_0(t);
    y_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_3, w_3);
  }
  return(t);
}
ATerm hv_in_new_vbox_2_0 (ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,j_4 = NULL,k_4 = NULL,o_4 = NULL;
  if(match_cons(t, sym__2))
    {
      d_4 = ATgetArgument(t, 0);
      f_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_g_12;
  t = e_71(t);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_4, g_4);
  t = try_abox2text_0_0(t);
  if(match_cons(t, sym__2))
    {
      h_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_g_12;
  t = d_71(t);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_4, k_4);
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_4, k_4);
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = SSL_addr(j_4, k_4);
      }
    o_4 = t;
    t = (ATerm) ATinsert(CheckATermList(f_4), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, h_4), o_4));
  }
  return(t);
}
ATerm hv_add_to_hbox_1_0 (ATerm c_71 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      {
        ATerm g_16 = ATgetArgument(t, 1);
        if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
          {
            ATerm i_16 = ATgetFirst((ATermList) g_16);
            if(match_cons(i_16, sym__2))
              {
                a_5 = ATgetArgument(i_16, 0);
                b_5 = ATgetArgument(i_16, 1);
              }
            else
              _fail(t);
            c_5 = (ATerm) ATgetNext((ATermList) g_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_4, b_5);
  t = try_abox2text_0_0(t);
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_g_12;
  t = get_width_0_0(t);
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_5, f_5);
  t = leq_0_0(t);
  t = term_g_12;
  t = c_71(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_5, g_5);
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(e_5, g_5);
        ;
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        t = SSL_addr(e_5, g_5);
      }
    j_5 = t;
    t = (ATerm) ATinsert(CheckATermList(c_5), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_5), d_5), j_5));
  }
  return(t);
}
ATerm FoldL_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_16 = ATgetArgument(t, 0);
      if(((ATgetType(l_16) == AT_LIST) && !(ATisEmpty(l_16))))
        {
          l_5 = ATgetFirst((ATermList) l_16);
          m_5 = (ATerm) ATgetNext((ATermList) l_16);
        }
      else
        _fail(t);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_5, n_5);
  t = n_84(t);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_5, p_5);
  return(t);
}
ATerm foldl_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm o_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_5 = NULL,w_5 = NULL;
        if(match_cons(t, sym__2))
          {
            u_5 = ATgetArgument(t, 0);
            w_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_5;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_5;
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = o_16;
        t = FoldL_1_0(s_83, t);
        t = y_5(t);
      }
    return(t);
  }
  t = y_5(t);
  return(t);
}
ATerm is_length_0_0 (ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        if(!(match_cons(t, sym_IS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(e_2, t);
      ;
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      t = term_i_14;
    }
  return(t);
}
ATerm SOpt_2_0 (ATerm a_65 (ATerm), ATerm b_65 (ATerm), ATerm t)
{
  ATerm d_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,l_6 = NULL;
  l_6 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      f_6 = ATgetArgument(t, 0);
      g_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_6);
  d_6 = t;
  t = f_6;
  t = a_65(t);
  h_6 = t;
  t = g_6;
  t = b_65(t);
  i_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, h_6, i_6), d_6);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm h_71 (ATerm), ATerm t)
{
  ATerm q_6 = NULL;
  ATerm g_2 (ATerm t)
  {
    ATerm h_2 (ATerm t)
    {
      q_6 = t;
      return(t);
    }
    t = SOpt_2_0(h_71, h_2, t);
    return(t);
  }
  t = fetch_1_0(g_2, t);
  t = SSL_string_to_int(not_null(q_6));
  return(t);
}
ATerm vs_length_0_0 (ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        if(!(match_cons(t, sym_VS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(j_2, t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      t = term_i_14;
    }
  return(t);
}
ATerm vs_text_0_0 (ATerm t)
{
  ATerm b_6 = NULL,v_0 = NULL;
  t = vs_length_0_0(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, term_k_13);
  {
    ATerm w_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_0, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = w_16;
        t = SSL_addr(v_0, (ATerm) ATmakeInt(1));
      }
    b_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_6, term_c_14);
    t = copy_char_0_0(t);
  }
  return(t);
}
ATerm do_vbox_children_0_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__3))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
      y_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_8;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm a_9 = NULL;
      a_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_9, w_8);
      t = try_abox2text_0_0(t);
      return(t);
    }
    ATerm n_2 (ATerm t)
    {
      ATerm r_2 (ATerm t)
      {
        ATerm d_9 = NULL;
        d_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_9, x_8);
        t = try_abox2text_0_0(t);
        return(t);
      }
      t = map_1_0(r_2, t);
      return(t);
    }
    t = Cons_2_0(m_2, n_2, t);
  }
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm c_17 = t;
  if((PushChoice() == 0))
    {
      ATerm d_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(g_17);
        }
      else
        {
          t = d_17;
          {
            ATerm a_10 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
            a_10 = t;
            t = SSL_explode_term(a_10);
            if(match_cons(t, sym__2))
              {
                y_0 = ATgetArgument(t, 0);
                z_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_0;
            {
              ATerm u_2 (ATerm t)
              {
                ATerm v_2 (ATerm t)
                {
                  ATerm h_17 = t;
                  int q_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      ;
                      LocalPopChoice(q_17);
                    }
                  else
                    {
                      t = h_17;
                      {
                        ATerm d_3 (ATerm t)
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          return(t);
                        }
                        ATerm e_3 (ATerm t)
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          return(t);
                        }
                        t = Cons_2_0(d_3, e_3, t);
                      }
                    }
                  return(t);
                }
                ATerm w_2 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(v_2, w_2, t);
                return(t);
              }
              t = Cons_2_0(_id, u_2, t);
              a_1 = t;
              t = SSL_mkterm(y_0, a_1);
            }
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_17;
    }
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm v_17 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = map_1_0(f_3, t);
      t = (ATerm) ATempty;
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = v_17;
      {
        ATerm e_10 = NULL,h_10 = NULL;
        ATerm q_3 (ATerm t)
        {
          ATerm i_10 = NULL,l_10 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_10 = ATgetFirst((ATermList) t);
              l_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, i_10, l_10);
          return(t);
        }
        t = map_1_0(q_3, t);
        t = unzip_0_0(t);
        t = _2_0(_id, matrix_transpose_0_0, t);
        if(match_cons(t, sym__2))
          {
            e_10 = ATgetArgument(t, 0);
            h_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_10), e_10);
      }
    }
  return(t);
}
ATerm align_right_0_0 (ATerm t)
{
  ATerm t_10 = NULL,w_10 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm i_18 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
      {
        ATerm j_18 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = align_helper_0_0(t);
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_10, t_10);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm align_center_0_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym__3))
    {
      b_11 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
      d_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_11;
  t = string_length_0_0(t);
  e_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_11, e_11);
  {
    ATerm k_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(d_11, e_11);
        ;
        LocalPopChoice(o_18);
      }
    else
      {
        t = k_18;
        t = SSL_subtr(d_11, e_11);
      }
    {
      ATerm p_18 = t;
      int q_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 = NULL;
          c_1 = t;
          t = SSL_mod(c_1, (ATerm) ATmakeInt(2));
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
            _fail(t);
          t = c_1;
          LocalPopChoice(q_18);
          {
            ATerm l_11 = NULL,e_1 = NULL;
            e_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_1, term_t_18);
            {
              ATerm y_18 = t;
              int z_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_divi(e_1, (ATerm) ATmakeInt(2));
                  ;
                  LocalPopChoice(z_18);
                }
              else
                {
                  t = y_18;
                  t = SSL_divr(e_1, (ATerm) ATmakeInt(2));
                }
              l_11 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_11, l_11);
            }
          }
        }
      else
        {
          t = p_18;
          {
            ATerm m_11 = NULL,g_1 = NULL,i_1 = NULL;
            g_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_1, term_k_13);
            {
              ATerm a_19 = t;
              int b_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_subti(g_1, (ATerm) ATmakeInt(1));
                  ;
                  LocalPopChoice(b_19);
                }
              else
                {
                  t = a_19;
                  t = SSL_subtr(g_1, (ATerm) ATmakeInt(1));
                }
              i_1 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_1, term_t_18);
              {
                ATerm c_19 = t;
                int e_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_divi(i_1, (ATerm) ATmakeInt(2));
                    ;
                    LocalPopChoice(e_19);
                  }
                else
                  {
                    t = c_19;
                    t = SSL_divr(i_1, (ATerm) ATmakeInt(2));
                  }
                m_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_11, m_11);
                {
                  ATerm s_3 (ATerm t)
                  {
                    ATerm k_1 = NULL;
                    k_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_1, term_k_13);
                    {
                      ATerm f_19 = t;
                      int g_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = SSL_addi(k_1, (ATerm) ATmakeInt(1));
                          ;
                          LocalPopChoice(g_19);
                        }
                      else
                        {
                          t = f_19;
                          t = SSL_addr(k_1, (ATerm) ATmakeInt(1));
                        }
                    }
                    return(t);
                  }
                  t = _2_0(s_3, _id, t);
                }
              }
            }
          }
        }
      if(match_cons(t, sym__2))
        {
          f_11 = ATgetArgument(t, 0);
          g_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, e_11, f_11);
      {
        ATerm h_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(e_11, f_11);
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = h_19;
            t = SSL_addr(e_11, f_11);
          }
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__3, b_11, c_11, h_11);
        t = align_helper_0_0(t);
        i_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, g_11);
        {
          ATerm l_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(e_11, g_11);
              ;
              LocalPopChoice(m_19);
            }
          else
            {
              t = l_19;
              t = SSL_addr(e_11, g_11);
            }
          j_11 = t;
          t = (ATerm) ATmakeAppl(sym__3, b_11, c_11, j_11);
          t = align_helper_0_0(t);
          k_11 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_11), c_11), i_11);
          t = concat_strings_0_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  t = copy_0_0(t);
  n_11 = t;
  t = SSL_implode_string(n_11);
  return(t);
}
ATerm pos_0_0 (ATerm t)
{
  ATerm q_11 = NULL;
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_11, term_i_14);
  t = geq_0_0(t);
  t = q_11;
  return(t);
}
ATerm align_helper_0_0 (ATerm t)
{
  ATerm r_11 = NULL,t_11 = NULL,v_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__3))
    {
      r_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
      v_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_11;
  t = string_length_0_0(t);
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_11, x_11);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(v_11, x_11);
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = SSL_subtr(v_11, x_11);
      }
    {
      ATerm p_19 = t;
      int q_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = pos_0_0(t);
          LocalPopChoice(q_19);
          {
            ATerm z_11 = NULL;
            z_11 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_11, r_11);
            t = copy_char_0_0(t);
          }
        }
      else
        {
          t = p_19;
          t = term_r_19;
        }
    }
  }
  return(t);
}
ATerm align_left_0_0 (ATerm t)
{
  ATerm d_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm t_19 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
      {
        ATerm u_19 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = align_helper_0_0(t);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_12, h_12);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm r_13 (ATerm u_12, ATerm v_12, ATerm w_12, ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, u_12, term_k_13);
    {
      ATerm v_19 = t;
      int y_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_gti(u_12, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(y_19);
        }
      else
        {
          t = v_19;
          t = SSL_gtr(u_12, (ATerm) ATmakeInt(1));
        }
      t = v_12;
      t = align_left_0_0(t);
    }
    return(t);
  }
  ATerm a_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,j_13 = NULL;
  f_13 = t;
  if(match_cons(t, sym__3))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
      j_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_13;
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm b_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_20);
        t = j_13;
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm e_20 = ATgetArgument(t, 0);
                  a_13 = ATgetArgument(t, 1);
                  {
                    ATerm i_20 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(d_20);
              t = g_13;
              if(match_int(t, 1))
                {
                  ATerm j_20 = t;
                  int o_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = r_13(g_13, j_13, f_13, t);
                      ;
                      LocalPopChoice(o_20);
                    }
                  else
                    {
                      t = j_20;
                      t = a_13;
                    }
                }
              else
                {
                  t = r_13(g_13, j_13, f_13, t);
                }
            }
          else
            {
              t = c_20;
              t = g_13;
              t = r_13(g_13, j_13, f_13, t);
            }
        }
      }
    else
      {
        t = z_19;
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm r_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(q_20);
              t = j_13;
              t = align_center_0_0(t);
            }
          else
            {
              t = p_20;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm t_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = j_13;
              t = align_right_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm max_0_0 (ATerm t)
{
  ATerm u_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_13 = NULL,x_13 = NULL;
      if(match_cons(t, sym__2))
        {
          w_13 = ATgetArgument(t, 0);
          x_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm x_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(w_13, x_13);
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = x_20;
            t = SSL_gtr(w_13, x_13);
          }
        t = (ATerm) ATmakeAppl(sym__2, w_13, x_13);
      }
      LocalPopChoice(w_20);
      {
        ATerm t_1 = NULL,u_1 = NULL;
        t_1 = t;
        t = SSL_explode_term(t_1);
        if(match_cons(t, sym__2))
          {
            ATerm a_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_21 = ATgetArgument(t, 1);
              if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
                {
                  u_1 = ATgetFirst((ATermList) b_21);
                  {
                    ATerm c_21 = (ATerm) ATgetNext((ATermList) b_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_1;
      }
    }
  else
    {
      t = u_20;
      {
        ATerm b_2 = NULL,c_2 = NULL;
        b_2 = t;
        t = SSL_explode_term(b_2);
        if(match_cons(t, sym__2))
          {
            ATerm d_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_21 = ATgetArgument(t, 1);
              if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
                {
                  ATerm l_21 = ATgetFirst((ATermList) e_21);
                  ATerm m_21 = (ATerm) ATgetNext((ATermList) e_21);
                  if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
                    {
                      c_2 = ATgetFirst((ATermList) m_21);
                      {
                        ATerm p_21 = (ATerm) ATgetNext((ATermList) m_21);
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
        t = c_2;
      }
    }
  return(t);
}
ATerm list_accum_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_21 = ATgetFirst((ATermList) t);
      z_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_14 = ATgetFirst((ATermList) t);
      {
        ATerm s_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_13, a_14);
  t = foldl_1_0(x_96, t);
  return(t);
}
ATerm list_max_0_0 (ATerm t)
{
  t = list_accum_1_0(max_0_0, t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm d_14 = NULL;
  ATerm t_3 (ATerm t)
  {
    ATerm e_14 = NULL;
    e_14 = t;
    t = SSL_explode_string(e_14);
    return(t);
  }
  t = map_1_0(t_3, t);
  t = concat_0_0(t);
  d_14 = t;
  t = SSL_implode_string(d_14);
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_4 (ATerm t)
        {
          ATerm h_14 = NULL;
          h_14 = t;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = h_14;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_21 = ATgetFirst((ATermList) t);
                  ATerm a_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_14;
            }
          return(t);
        }
        t = _2_0(n_4, _id, t);
        LocalPopChoice(v_21);
        t = conc_two_lists_0_0(t);
      }
    else
      {
        t = u_21;
        {
          ATerm k_14 = NULL,l_14 = NULL;
          if(match_cons(t, sym__2))
            {
              k_14 = ATgetArgument(t, 0);
              l_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(l_14), k_14);
        }
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_14 = NULL;
        m_14 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_22 = ATgetFirst((ATermList) t);
                ATerm e_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_14;
          }
        LocalPopChoice(c_22);
        t = flatten_list_0_0(t);
      }
    else
      {
        t = b_22;
      }
    return(t);
  }
  t = foldr_3_0(v_3, e_4, m_4, t);
  return(t);
}
ATerm unzip_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_f_22;
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    ATerm p_14 = NULL,q_14 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_14 = ATgetFirst((ATermList) t);
        q_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_14, q_14);
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm r_14 = NULL,t_14 = NULL,v_14 = NULL,x_14 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm g_22 = ATgetArgument(t, 0);
        if(match_cons(g_22, sym__2))
          {
            r_14 = ATgetArgument(g_22, 0);
            v_14 = ATgetArgument(g_22, 1);
          }
        else
          _fail(t);
        {
          ATerm h_22 = ATgetArgument(t, 1);
          if(match_cons(h_22, sym__2))
            {
              t_14 = ATgetArgument(h_22, 0);
              x_14 = ATgetArgument(h_22, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_14), r_14), (ATerm) ATinsert(CheckATermList(x_14), v_14));
    return(t);
  }
  t = genzip_4_0(q_4, r_4, s_4, k_79, t);
  return(t);
}
ATerm unzip_0_0 (ATerm t)
{
  t = unzip_1_0(_id, t);
  return(t);
}
ATerm do_A_column_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_22 = ATgetArgument(t, 0);
      if(match_cons(i_22, sym__2))
        {
          b_15 = ATgetArgument(i_22, 0);
          {
            ATerm k_22 = ATgetArgument(i_22, 1);
            if(match_cons(k_22, sym__2))
              {
                c_15 = ATgetArgument(k_22, 0);
                d_15 = ATgetArgument(k_22, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm j_22 = ATgetArgument(t, 1);
        if(match_cons(j_22, sym__2))
          {
            e_15 = ATgetArgument(j_22, 0);
            f_15 = ATgetArgument(j_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_15;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm p_15 = NULL;
      p_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_15, e_15);
      t = try_abox2text_0_0(t);
      return(t);
    }
    t = map_1_0(t_4, t);
    t = unzip_0_0(t);
    {
      ATerm w_4 (ATerm t)
      {
        ATerm x_4 (ATerm t)
        {
          ATerm y_4 (ATerm t)
          {
            t = flatten_list_0_0(t);
            t = concat_strings_0_0(t);
            return(t);
          }
          t = try_1_0(y_4, t);
          return(t);
        }
        t = map_1_0(x_4, t);
        return(t);
      }
      t = _2_0(w_4, list_max_0_0, t);
      if(match_cons(t, sym__2))
        {
          g_15 = ATgetArgument(t, 0);
          h_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, h_15, e_15);
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(h_15, e_15);
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            t = SSL_subtr(h_15, e_15);
          }
        k_15 = t;
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, c_15, term_k_13);
              {
                ATerm p_22 = t;
                int q_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_gti(c_15, (ATerm) ATmakeInt(1));
                    ;
                    LocalPopChoice(q_22);
                  }
                else
                  {
                    t = p_22;
                    t = SSL_gtr(c_15, (ATerm) ATmakeInt(1));
                  }
                t = (ATerm) ATmakeAppl(sym__2, c_15, term_k_13);
              }
              LocalPopChoice(o_22);
              {
                ATerm r_15 = NULL;
                t = b_15;
                if(match_cons(t, sym_AC_1))
                  {
                    r_15 = ATgetArgument(t, 0);
                    t = r_15;
                  }
                else
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        r_15 = ATgetArgument(t, 0);
                        t = r_15;
                      }
                    else
                      {
                        if(match_cons(t, sym_AL_1))
                          {
                            r_15 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = r_15;
                      }
                  }
                t = hs_text_0_0(t);
              }
            }
          else
            {
              t = n_22;
              t = term_r_19;
            }
          l_15 = t;
          t = g_15;
          {
            ATerm z_4 (ATerm t)
            {
              ATerm v_15 = NULL,w_15 = NULL;
              v_15 = t;
              t = (ATerm) ATmakeAppl(sym__3, c_15, b_15, (ATerm) ATmakeAppl(sym__3, term_l_13, v_15, k_15));
              t = align_column_0_0(t);
              w_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, w_15, l_15);
              t = conc_strings_0_0(t);
              return(t);
            }
            t = map_1_0(z_4, t);
            m_15 = t;
            t = l_15;
            t = string_length_0_0(t);
            n_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_15, h_15);
            {
              ATerm r_22 = t;
              int s_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(n_15, h_15);
                  ;
                  LocalPopChoice(s_22);
                }
              else
                {
                  t = r_22;
                  t = SSL_addr(n_15, h_15);
                }
              o_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_15, (ATerm) ATinsert(CheckATermList(f_15), m_15));
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t)
{
  ATerm x_15 (ATerm t)
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_79(t);
        ;
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = b_79(t);
        t = _2_0(d_79, x_15, t);
        t = c_79(t);
      }
    return(t);
  }
  t = x_15(t);
  return(t);
}
ATerm zip_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm v_22 = ATgetArgument(t, 0);
        if(((ATgetType(v_22) != AT_LIST) || !(ATisEmpty(v_22))))
          _fail(t);
        {
          ATerm w_22 = ATgetArgument(t, 1);
          if(((ATgetType(w_22) != AT_LIST) || !(ATisEmpty(w_22))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm x_22 = ATgetArgument(t, 0);
        if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
          {
            y_15 = ATgetFirst((ATermList) x_22);
            a_16 = (ATerm) ATgetNext((ATermList) x_22);
          }
        else
          _fail(t);
        {
          ATerm y_22 = ATgetArgument(t, 1);
          if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
            {
              z_15 = ATgetFirst((ATermList) y_22);
              b_16 = (ATerm) ATgetNext((ATermList) y_22);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_15, z_15), (ATerm) ATmakeAppl(sym__2, a_16, b_16));
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    ATerm c_16 = NULL,d_16 = NULL;
    if(match_cons(t, sym__2))
      {
        c_16 = ATgetArgument(t, 0);
        d_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(d_16), c_16);
    return(t);
  }
  t = genzip_4_0(h_5, k_5, o_5, f_79, t);
  return(t);
}
ATerm zip_0_0 (ATerm t)
{
  t = zip_1_0(_id, t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_13, h_16);
  {
    ATerm b_17 (ATerm t)
    {
      ATerm m_16 = NULL,n_16 = NULL,p_16 = NULL,q_16 = NULL;
      if(match_cons(t, sym__2))
        {
          m_16 = ATgetArgument(t, 0);
          n_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_16;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm x_16 = NULL,z_16 = NULL,a_17 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_16 = ATgetFirst((ATermList) t);
              q_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, m_16, p_16);
          t = a_100(t);
          x_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_16, term_k_13);
          {
            ATerm z_22 = t;
            int a_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(m_16, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(a_23);
              }
            else
              {
                t = z_22;
                t = SSL_addr(m_16, (ATerm) ATmakeInt(1));
              }
            z_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_16, q_16);
            t = b_17(t);
            a_17 = t;
            t = (ATerm) ATinsert(CheckATermList(a_17), x_16);
          }
        }
      return(t);
    }
    t = b_17(t);
  }
  return(t);
}
ATerm add_indices_0_0 (ATerm t)
{
  t = map_with_index_1_0(_id, t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_83(t);
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm e_17 = NULL,f_17 = NULL,i_17 = NULL,j_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_17 = ATgetFirst((ATermList) t);
            f_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_17;
        t = r_83(t);
        i_17 = t;
        t = f_17;
        t = foldr_3_0(p_83, q_83, r_83, t);
        j_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_17, j_17);
        t = q_83(t);
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    t = term_i_14;
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm k_17 = NULL,l_17 = NULL;
    if(match_cons(t, sym__2))
      {
        k_17 = ATgetArgument(t, 0);
        l_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm d_23 = t;
      int e_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(k_17, l_17);
          ;
          LocalPopChoice(e_23);
        }
      else
        {
          t = d_23;
          t = SSL_addr(k_17, l_17);
        }
    }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_k_13;
    return(t);
  }
  t = foldr_3_0(q_5, t_5, v_5, t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm t)
{
  ATerm m_17 (ATerm t)
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_93(t);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = r_93(t);
        t = m_17(t);
      }
    return(t);
  }
  t = m_17(t);
  return(t);
}
ATerm for_3_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm t)
{
  t = t_93(t);
  t = while_not_2_0(u_93, v_93, t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm n_17 = NULL,o_17 = NULL;
    if(match_cons(t, sym__2))
      {
        n_17 = ATgetArgument(t, 0);
        o_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, n_17, o_17, (ATerm) ATempty);
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    ATerm p_17 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm h_23 = ATgetArgument(t, 0);
        if(((ATgetType(h_23) != AT_INT) || (ATgetInt((ATermInt) h_23) != 0)))
          _fail(t);
        {
          ATerm i_23 = ATgetArgument(t, 1);
        }
        p_17 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = p_17;
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
    if(match_cons(t, sym__3))
      {
        r_17 = ATgetArgument(t, 0);
        s_17 = ATgetArgument(t, 1);
        t_17 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, r_17, term_k_13);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, r_17, term_k_13);
    {
      ATerm j_23 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(r_17, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(k_23);
        }
      else
        {
          t = j_23;
          t = SSL_subtr(r_17, (ATerm) ATmakeInt(1));
        }
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_17, s_17, (ATerm) ATinsert(CheckATermList(t_17), s_17));
    }
    return(t);
  }
  t = for_3_0(x_5, c_6, e_6, t);
  return(t);
}
ATerm FitToMax_1_0 (ATerm g_71 (ATerm), ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  w_17 = t;
  t = length_0_0(t);
  x_17 = t;
  t = term_g_12;
  t = g_71(t);
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_17, x_17);
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(y_17, x_17);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = SSL_subtr(y_17, x_17);
      }
    z_17 = t;
    {
      ATerm n_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, z_17, term_i_14);
          {
            ATerm p_23 = t;
            int q_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_gti(z_17, (ATerm) ATmakeInt(0));
                ;
                LocalPopChoice(q_23);
              }
            else
              {
                t = p_23;
                t = SSL_gtr(z_17, (ATerm) ATmakeInt(0));
              }
            t = (ATerm) ATmakeAppl(sym__2, z_17, (ATerm) ATempty);
            t = copy_0_0(t);
            a_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_17, a_18);
            t = conc_0_0(t);
          }
          ;
          LocalPopChoice(o_23);
        }
      else
        {
          t = n_23;
          {
            ATerm r_23 = t;
            int s_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                  _fail(t);
                t = w_17;
                ;
                LocalPopChoice(s_23);
              }
            else
              {
                t = r_23;
                t = (ATerm) ATinsert(ATinsert(ATempty, w_17), term_t_23);
                t = fatal_error_0_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm to_matrix_1_0 (ATerm f_71 (ATerm), ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    t = FitToMax_1_0(f_71, t);
    return(t);
  }
  t = map_1_0(j_6, t);
  return(t);
}
ATerm R_2_0 (ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  h_18 = t;
  if(match_cons(t, sym_R_2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_18);
  c_18 = t;
  t = d_18;
  t = m_64(t);
  f_18 = t;
  t = e_18;
  t = n_64(t);
  g_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, f_18, g_18), c_18);
  return(t);
}
ATerm split_2_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  t = h_76(t);
  m_18 = t;
  t = l_18;
  t = i_76(t);
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_18, n_18);
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2_0(_id, k_6, t);
  {
    ATerm s_19 (ATerm t)
    {
      ATerm r_18 = NULL,s_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
      if(match_cons(t, sym__2))
        {
          u_18 = ATgetArgument(t, 0);
          x_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_18;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm d_19 = NULL;
          t = x_18;
          t = reverse_0_0(t);
          d_19 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, d_19));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_18 = ATgetFirst((ATermList) t);
              w_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_18;
          if(match_cons(t, sym_R_2))
            {
              r_18 = ATgetArgument(t, 0);
              s_18 = ATgetArgument(t, 1);
              {
                ATerm u_23 = t;
                int v_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_19 = NULL,j_19 = NULL;
                    t = x_18;
                    t = reverse_0_0(t);
                    i_19 = t;
                    t = (ATerm) ATmakeAppl(sym__2, w_18, (ATerm) ATempty);
                    t = s_19(t);
                    j_19 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(j_19), (ATerm) ATmakeAppl(sym_R_2, r_18, s_18)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, i_19));
                    ;
                    LocalPopChoice(v_23);
                  }
                else
                  {
                    t = u_23;
                    t = (ATerm) ATmakeAppl(sym__2, w_18, (ATerm) ATinsert(CheckATermList(x_18), v_18));
                    t = s_19(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, w_18, (ATerm) ATinsert(CheckATermList(x_18), v_18));
              t = s_19(t);
            }
        }
      return(t);
    }
    t = s_19(t);
    {
      ATerm m_6 (ATerm t)
      {
        ATerm w_23 = t;
        if((PushChoice() == 0))
          {
            ATerm n_6 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = R_2_0(_id, n_6, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_23;
          }
        return(t);
      }
      t = filter_1_0(m_6, t);
    }
  }
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm s_30 (ATerm c_27, ATerm d_27, ATerm e_27, ATerm f_27, ATerm g_27, ATerm t)
  {
    ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,x_27 = NULL;
    t = e_27;
    t = construct_rows_0_0(t);
    {
      ATerm o_6 (ATerm t)
      {
        ATerm z_27 = NULL;
        if(match_cons(t, sym_R_2))
          {
            ATerm x_23 = ATgetArgument(t, 0);
            z_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_27;
        return(t);
      }
      t = map_1_0(o_6, t);
      {
        ATerm p_6 (ATerm t)
        {
          t = c_27;
          t = length_0_0(t);
          return(t);
        }
        t = to_matrix_1_0(p_6, t);
        t = matrix_transpose_0_0(t);
        t = reverse_0_0(t);
        t = add_indices_0_0(t);
        t = reverse_0_0(t);
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_27, r_27);
        t = zip_0_0(t);
        s_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_27, (ATerm) ATmakeAppl(sym__2, f_27, (ATerm) ATempty));
        t = foldl_1_0(do_A_column_0_0, t);
        if(match_cons(t, sym__2))
          {
            t_27 = ATgetArgument(t, 0);
            u_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_27;
        t = reverse_0_0(t);
        t = matrix_transpose_0_0(t);
        {
          ATerm s_6 (ATerm t)
          {
            ATerm a_28 = NULL;
            a_28 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_28, t_27);
            return(t);
          }
          t = map_1_0(s_6, t);
          x_27 = t;
          t = (ATerm) ATmakeAppl(sym__3, d_27, x_27, f_27);
          t = format_vbox_0_0(t);
        }
      }
    }
    return(t);
  }
  ATerm t_30 (ATerm b_28, ATerm c_28, ATerm d_28, ATerm e_28, ATerm t)
  {
    ATerm k_28 = NULL,q_28 = NULL,r_28 = NULL;
    t = b_28;
    t = is_length_0_0(t);
    k_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_28, k_28);
    {
      ATerm y_23 = t;
      int z_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(d_28, k_28);
          ;
          LocalPopChoice(z_23);
        }
      else
        {
          t = y_23;
          t = SSL_addr(d_28, k_28);
        }
      q_28 = t;
      t = c_28;
      t = filter_1_0(is_real_vbox_0_0, t);
      r_28 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_28);
        }
      else
        {
          ATerm s_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, d_28, q_28, r_28);
          t = do_vbox_children_0_0(t);
          s_28 = t;
          t = (ATerm) ATmakeAppl(sym__3, b_28, s_28, d_28);
          t = format_vbox_0_0(t);
        }
    }
    return(t);
  }
  ATerm u_30 (ATerm t_28, ATerm u_28, ATerm v_28, ATerm w_28, ATerm t)
  {
    ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
    t = t_28;
    t = hs_text_0_0(t);
    a_29 = t;
    t = t_28;
    t = vs_text_0_0(t);
    t = a_29;
    t = string_length_0_0(t);
    b_29 = t;
    t = t_28;
    t = is_length_0_0(t);
    c_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_28, c_29);
    {
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(v_28, c_29);
          ;
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          t = SSL_addr(v_28, c_29);
        }
      d_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_28)));
      {
        ATerm u_6 (ATerm t)
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_6 (ATerm t)
              {
                t = b_29;
                return(t);
              }
              t = hv_add_to_hbox_1_0(v_6, t);
              ;
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              {
                ATerm z_6 (ATerm t)
                {
                  t = b_29;
                  return(t);
                }
                ATerm d_7 (ATerm t)
                {
                  t = d_29;
                  return(t);
                }
                t = hv_in_new_vbox_2_0(z_6, d_7, t);
              }
            }
          return(t);
        }
        t = foldl_1_0(u_6, t);
        t = reverse_0_0(t);
        {
          ATerm e_7 (ATerm t)
          {
            t = _2_0(reverse_0_0, _id, t);
            return(t);
          }
          t = map_1_0(e_7, t);
          {
            ATerm f_7 (ATerm t)
            {
              ATerm i_7 (ATerm t)
              {
                ATerm f_29 = NULL;
                f_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_29, f_29);
                t = separate_by_0_0(t);
                return(t);
              }
              t = _2_0(i_7, _id, t);
              return(t);
            }
            t = map_1_0(f_7, t);
            e_29 = t;
            t = (ATerm) ATmakeAppl(sym__3, t_28, e_29, v_28);
            t = format_vbox_0_0(t);
          }
        }
      }
    }
    return(t);
  }
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  n_29 = t;
  if(match_cons(t, sym__2))
    {
      o_29 = ATgetArgument(t, 0);
      r_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_29;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_19, r_29);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_29 = ATgetFirst((ATermList) t);
          q_29 = (ATerm) ATgetNext((ATermList) t);
          t = q_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, p_29, r_29);
          t = try_abox2text_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              p_29 = ATgetArgument(t, 0);
              q_29 = ATgetArgument(t, 1);
              {
                ATerm z_2 = NULL,a_3 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, p_29, r_29);
                t = try_abox2text_0_0(t);
                z_2 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm e_24 = ATgetArgument(t, 0);
                    a_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, p_29, q_29), r_29);
                {
                  ATerm f_24 = t;
                  int g_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_3 = NULL;
                      t = get_width_0_0(t);
                      l_3 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_3, l_3);
                      t = leq_0_0(t);
                      LocalPopChoice(g_24);
                      t = z_2;
                    }
                  else
                    {
                      t = f_24;
                      t = (ATerm) ATmakeAppl(sym__2, q_29, r_29);
                      t = try_abox2text_0_0(t);
                    }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  p_29 = ATgetArgument(t, 0);
                  q_29 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, p_29, q_29), r_29);
                  t = try_abox2text_0_0(t);
                }
              else
                {
                  ATerm h_24 = t;
                  int i_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm j_24 = ATgetArgument(t, 0);
                          q_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(i_24);
                      t = (ATerm) ATmakeAppl(sym__2, q_29, r_29);
                      t = try_abox2text_0_0(t);
                    }
                  else
                    {
                      t = h_24;
                      {
                        ATerm k_24 = t;
                        int l_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm m_24 = ATgetArgument(t, 0);
                                q_29 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(l_24);
                            t = q_29;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                g_29 = ATgetFirst((ATermList) t);
                                i_29 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = g_29;
                            if(match_cons(t, sym_S_1))
                              {
                                h_29 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = i_29;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, h_29, r_29);
                          }
                        else
                          {
                            t = k_24;
                            if(match_cons(t, sym_S_1))
                              {
                                p_29 = ATgetArgument(t, 0);
                                {
                                  ATerm i_4 = NULL,l_4 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, p_29, r_29);
                                  t = rel_string_length_0_0(t);
                                  i_4 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, r_29, i_4);
                                  {
                                    ATerm n_24 = t;
                                    int o_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = SSL_addi(r_29, i_4);
                                        ;
                                        LocalPopChoice(o_24);
                                      }
                                    else
                                      {
                                        t = n_24;
                                        t = SSL_addr(r_29, i_4);
                                      }
                                    l_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, p_29, l_4);
                                  }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    p_29 = ATgetArgument(t, 0);
                                    q_29 = ATgetArgument(t, 1);
                                    m_29 = ATgetArgument(t, 2);
                                    t = p_29;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        l_29 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = m_29;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        j_29 = ATgetFirst((ATermList) t);
                                        k_29 = (ATerm) ATgetNext((ATermList) t);
                                        t = k_29;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = j_29;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm p_24 = t;
                                                int q_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = s_30(l_29, q_29, m_29, r_29, n_29, t);
                                                    ;
                                                    LocalPopChoice(q_24);
                                                  }
                                                else
                                                  {
                                                    t = p_24;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_29);
                                                  }
                                              }
                                            else
                                              {
                                                t = s_30(l_29, q_29, m_29, r_29, n_29, t);
                                              }
                                          }
                                        else
                                          {
                                            t = j_29;
                                            t = s_30(l_29, q_29, m_29, r_29, n_29, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm r_24 = t;
                                            int s_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = s_30(l_29, q_29, m_29, r_29, n_29, t);
                                                ;
                                                LocalPopChoice(s_24);
                                              }
                                            else
                                              {
                                                t = r_24;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_29);
                                              }
                                          }
                                        else
                                          {
                                            t = s_30(l_29, q_29, m_29, r_29, n_29, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        p_29 = ATgetArgument(t, 0);
                                        q_29 = ATgetArgument(t, 1);
                                        t = t_30(p_29, q_29, r_29, n_29, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            p_29 = ATgetArgument(t, 0);
                                            q_29 = ATgetArgument(t, 1);
                                            {
                                              ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
                                              t = p_29;
                                              t = hs_text_0_0(t);
                                              k_30 = t;
                                              t = string_length_0_0(t);
                                              l_30 = t;
                                              t = q_29;
                                              t = filter_1_0(is_real_hbox_0_0, t);
                                              m_30 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, m_30, r_29);
                                              {
                                                ATerm m_7 (ATerm t)
                                                {
                                                  t = try_abox2text_0_0(t);
                                                  {
                                                    ATerm n_7 (ATerm t)
                                                    {
                                                      ATerm n_30 = NULL;
                                                      n_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, l_30, n_30);
                                                      {
                                                        ATerm t_24 = t;
                                                        int u_24 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = SSL_addi(l_30, n_30);
                                                            ;
                                                            LocalPopChoice(u_24);
                                                          }
                                                        else
                                                          {
                                                            t = t_24;
                                                            t = SSL_addr(l_30, n_30);
                                                          }
                                                      }
                                                      return(t);
                                                    }
                                                    t = _2_0(_id, n_7, t);
                                                  }
                                                  return(t);
                                                }
                                                t = thread_map_1_0(m_7, t);
                                                {
                                                  ATerm q_7 (ATerm t)
                                                  {
                                                    ATerm o_30 = NULL;
                                                    o_30 = t;
                                                    t = (ATerm) ATmakeAppl(sym__2, k_30, o_30);
                                                    t = separate_by_0_0(t);
                                                    return(t);
                                                  }
                                                  t = _2_0(q_7, _id, t);
                                                  {
                                                    ATerm r_7 (ATerm t)
                                                    {
                                                      ATerm s_7 (ATerm t)
                                                      {
                                                        ATerm v_24 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                              _fail(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = v_24;
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm t_7 (ATerm t)
                                                      {
                                                        ATerm p_30 = NULL;
                                                        p_30 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, p_30, l_30);
                                                        {
                                                          ATerm w_24 = t;
                                                          int x_24 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = SSL_subti(p_30, l_30);
                                                              ;
                                                              LocalPopChoice(x_24);
                                                            }
                                                          else
                                                            {
                                                              t = w_24;
                                                              t = SSL_subtr(p_30, l_30);
                                                            }
                                                        }
                                                        return(t);
                                                      }
                                                      t = _2_0(s_7, t_7, t);
                                                      return(t);
                                                    }
                                                    t = try_1_0(r_7, t);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                p_29 = ATgetArgument(t, 0);
                                                q_29 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = u_30(p_29, q_29, r_29, n_29, t);
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
ATerm try_abox2text_0_0 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_0_0(t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm v_30 = NULL;
        v_30 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, v_30), term_a_25);
        t = fatal_error_0_0(t);
      }
    }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_31 (ATerm g_31, ATerm t)
  {
    t = SSL_fclose(g_31);
    return(t);
  }
  ATerm j_31 = NULL,k_31 = NULL;
  k_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_31 = ATgetArgument(t, 0);
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_31);
            ;
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            t = m_31(k_31, t);
          }
      }
    }
  else
    {
      t = m_31(k_31, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_31 = NULL;
  t = SSL_stdin_stream();
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_31 = NULL;
  t = SSL_stdout_stream();
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_31 = NULL;
  t = SSL_stderr_stream();
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_31);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm y_31 = NULL;
  y_31 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_31;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_31;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_31;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_25 = ATgetArgument(t, 0);
      ATerm e_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL,v_4 = NULL;
        u_4 = t;
        t = SSL_explode_term(u_4);
        if(match_cons(t, sym__2))
          {
            ATerm h_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_25 = ATgetArgument(t, 1);
              if(((ATgetType(i_25) == AT_LIST) && !(ATisEmpty(i_25))))
                {
                  v_4 = ATgetFirst((ATermList) i_25);
                  {
                    ATerm j_25 = (ATerm) ATgetNext((ATermList) i_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_4;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
              ATerm u_7 (ATerm t)
              {
                ATerm d_32 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    d_32 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_32;
                return(t);
              }
              t = _2_0(u_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  z_31 = ATgetArgument(t, 0);
                  a_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(z_31, a_32);
              b_32 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, b_32);
              ;
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              {
                ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
                ATerm v_7 (ATerm t)
                {
                  ATerm i_32 = NULL;
                  i_32 = t;
                  t = SSL_is_string(i_32);
                  return(t);
                }
                t = _2_0(v_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_32 = ATgetArgument(t, 0);
                    g_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_32, g_32);
                h_32 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_32);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,n_32 = NULL;
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_32 = NULL;
      o_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_32, term_o_25);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
      {
        ATerm w_7 (ATerm t)
        {
          t = term_p_25;
          return(t);
        }
        t = debug_1_0(w_7, t);
        _fail(t);
      }
    }
  j_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(n_32);
  k_32 = t;
  t = j_32;
  t = fclose_0_0(t);
  t = k_32;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL;
  s_32 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = s_32;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          t_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(t_32, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL;
  h_33 = t;
  if(match_cons(t, sym_FILE_1))
    {
      i_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL;
        t = h_33;
        t = k_0(t);
        i_5 = t;
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(i_33, i_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, i_33);
        }
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_5 = NULL;
              t = h_33;
              t = k_0(t);
              r_5 = t;
              {
                ATerm w_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_25 = t;
                    int y_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(y_25);
                      }
                    else
                      {
                        t = x_25;
                        {
                          ATerm z_25 = t;
                          int a_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(a_26);
                            }
                          else
                            {
                              t = z_25;
                              {
                                ATerm s_5 = NULL;
                                s_5 = t;
                                if((i_33 != t))
                                  {
                                    _fail(t);
                                  }
                                t = s_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_25;
                  }
                t = SSL_copy(i_33, r_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, i_33);
              }
              ;
              LocalPopChoice(v_25);
            }
          else
            {
              t = u_25;
              t = h_33;
              t = k_0(t);
              if((i_33 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_33);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  if(match_cons(t, sym__2))
    {
      o_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_26 = ATgetArgument(t, 0);
            ATerm e_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_33, p_33);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_26 = ATgetFirst((ATermList) t);
            z_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_5;
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATempty;
      }
    q_33 = t;
    t = SSL_table_put(o_33, p_33, q_33);
    t = (ATerm) ATmakeAppl(sym__2, o_33, p_33);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
  w_33 = t;
  t = b_87(t);
  x_33 = t;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(x_33, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_33 = ATgetFirst((ATermList) t);
        y_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(x_33, (ATerm)ATmakeAppl(sym_Scopes_0), y_33);
    t = z_33;
    {
      ATerm x_7 (ATerm t)
      {
        ATerm a_34 = NULL;
        a_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_33, a_34);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(x_7, t);
      t = w_33;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_76(t);
      t = d_76(t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      t = d_76(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
  d_34 = t;
  t = a_87(t);
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_34, term_k_26);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_26 = ATgetArgument(t, 0);
            ATerm o_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_34, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = (ATerm) ATempty;
      }
    f_34 = t;
    t = SSL_table_put(e_34, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(f_34), (ATerm) ATempty));
    t = d_34;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_71 (ATerm), ATerm t)
{
  ATerm k_34 = NULL;
  ATerm y_7 (ATerm t)
  {
    t = term_j_12;
    return(t);
  }
  t = begin_scope_1_0(y_7, t);
  {
    ATerm b_8 (ATerm t)
    {
      ATerm l_34 = NULL;
      l_34 = t;
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_34 = ATgetFirst((ATermList) t);
            {
              ATerm r_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = k_34;
        {
          ATerm c_8 (ATerm t)
          {
            ATerm d_8 (ATerm t)
            {
              ATerm m_34 = NULL;
              m_34 = t;
              t = SSL_remove(m_34);
              return(t);
            }
            t = try_1_0(d_8, t);
            return(t);
          }
          t = map_1_0(c_8, t);
          t = l_34;
          {
            ATerm e_8 (ATerm t)
            {
              t = term_j_12;
              return(t);
            }
            t = end_scope_1_0(e_8, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(q_71, b_8, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_71 (ATerm), ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_34 = NULL;
        t = term_u_26;
        t = get_config_0_0(t);
        n_34 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_34);
        ;
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = term_v_26;
      }
    t = r_71(t);
    {
      ATerm g_8 (ATerm t)
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_26;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            t = term_z_26;
          }
        return(t);
      }
      t = copy_to_1_0(g_8, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(f_8, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL;
  q_34 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = q_34;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm y_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_34 = ATgetFirst((ATermList) t);
          s_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_34 = ATgetFirst((ATermList) t);
          u_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_34;
      t = h_0(t);
      t = t_34;
      t = i_0(t);
      y_34 = t;
      t = (ATerm) ATinsert(CheckATermList(u_34), y_34);
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    ATerm a_35 = NULL;
    a_35 = t;
    if(match_string(t, "-k"))
      {
        t = a_35;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = a_35;
      }
    return(t);
  }
  ATerm i_8 (ATerm t)
  {
    ATerm b_35 = NULL,c_35 = NULL;
    b_35 = t;
    t = SSL_string_to_int(b_35);
    c_35 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), c_35);
    t = b_35;
    return(t);
  }
  ATerm j_8 (ATerm t)
  {
    t = term_a_27;
    return(t);
  }
  t = ArgOption_3_0(h_8, i_8, j_8, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_8 (ATerm t)
      {
        ATerm e_35 = NULL;
        e_35 = t;
        if(match_string(t, "-S"))
          {
            t = e_35;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = e_35;
          }
        return(t);
      }
      ATerm l_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_i_27;
        return(t);
      }
      ATerm m_8 (ATerm t)
      {
        t = term_j_27;
        return(t);
      }
      t = Option_3_0(k_8, l_8, m_8, t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = b_27;
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_8 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm o_8 (ATerm t)
            {
              ATerm f_35 = NULL,g_35 = NULL;
              f_35 = t;
              t = SSL_string_to_int(f_35);
              g_35 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_35);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, f_35);
              return(t);
            }
            ATerm p_8 (ATerm t)
            {
              t = term_m_27;
              return(t);
            }
            t = ArgOption_3_0(n_8, o_8, p_8, t);
            ;
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            {
              ATerm r_8 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm s_8 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_n_27;
                return(t);
              }
              ATerm t_8 (ATerm t)
              {
                t = term_o_27;
                return(t);
              }
              t = Option_3_0(r_8, s_8, t_8, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm u_8 (ATerm t)
  {
    ATerm i_35 = NULL;
    i_35 = t;
    if(match_string(t, "-o"))
      {
        t = i_35;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = i_35;
      }
    return(t);
  }
  ATerm v_8 (ATerm t)
  {
    ATerm j_35 = NULL;
    j_35 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), j_35);
    t = (ATerm) ATmakeAppl(sym_Output_1, j_35);
    return(t);
  }
  ATerm z_8 (ATerm t)
  {
    t = term_v_27;
    return(t);
  }
  t = ArgOption_3_0(u_8, v_8, z_8, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm w_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = w_27;
      {
        ATerm b_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm c_9 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_f_28;
          return(t);
        }
        ATerm e_9 (ATerm t)
        {
          t = term_g_28;
          return(t);
        }
        t = Option_3_0(b_9, c_9, e_9, t);
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm f_9 (ATerm t)
  {
    ATerm l_35 = NULL;
    l_35 = t;
    if(match_string(t, "-i"))
      {
        t = l_35;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = l_35;
      }
    return(t);
  }
  ATerm g_9 (ATerm t)
  {
    ATerm m_35 = NULL;
    m_35 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), m_35);
    t = (ATerm) ATmakeAppl(sym_Input_1, m_35);
    return(t);
  }
  ATerm h_9 (ATerm t)
  {
    t = term_h_28;
    return(t);
  }
  t = ArgOption_3_0(f_9, g_9, h_9, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0_0(t);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      {
        ATerm i_9 (ATerm t)
        {
          ATerm o_35 = NULL;
          o_35 = t;
          if(match_string(t, "-w"))
            {
              t = o_35;
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
                _fail(t);
              t = o_35;
            }
          return(t);
        }
        ATerm j_9 (ATerm t)
        {
          ATerm p_35 = NULL,q_35 = NULL;
          p_35 = t;
          t = SSL_string_to_int(p_35);
          q_35 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), q_35);
          t = p_35;
          return(t);
        }
        ATerm k_9 (ATerm t)
        {
          t = term_p_28;
          return(t);
        }
        t = ArgOption_3_0(i_9, j_9, k_9, t);
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm r_35 = NULL,t_35 = NULL;
  r_35 = t;
  t = term_g_12;
  t = whoami_0_0(t);
  t_35 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), t_35), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = r_35;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_12;
  t = whoami_0_0(t);
  u_35 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), u_35));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_83(t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm x_35 = NULL,y_35 = NULL,b_36 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_35 = ATgetFirst((ATermList) t);
            y_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_35;
        t = foldr_2_0(n_83, o_83, t);
        b_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_35, b_36);
        t = o_83(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  c_36 = t;
  t = SSL_explode_term(c_36);
  if(match_cons(t, sym__2))
    {
      ATerm s_29 = ATgetArgument(t, 0);
      d_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_36;
  t = foldr_2_0(l_81, m_81, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_36 = NULL;
  t = times_0_0(t);
  {
    ATerm l_9 (ATerm t)
    {
      t = term_i_14;
      return(t);
    }
    ATerm m_9 (ATerm t)
    {
      ATerm f_36 = NULL,g_36 = NULL;
      if(match_cons(t, sym__2))
        {
          f_36 = ATgetArgument(t, 0);
          g_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm t_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(f_36, g_36);
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
            t = SSL_addr(f_36, g_36);
          }
      }
      return(t);
    }
    t = crush_2_0(l_9, m_9, t);
    e_36 = t;
    t = SSL_TicksToSeconds(e_36);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  if(match_cons(t, sym__2))
    {
      q_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_36;
        if((q_36 != t))
          {
            _fail(t);
          }
        t = p_36;
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = p_36;
        {
          ATerm x_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_36, r_36);
              ;
              LocalPopChoice(y_29);
            }
          else
            {
              t = x_29;
              t = SSL_gtr(q_36, r_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_36, r_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm n_9 (ATerm t)
  {
    ATerm z_36 = NULL,a_37 = NULL;
    z_36 = t;
    t = term_z_29;
    t = get_config_0_0(t);
    a_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_37, term_k_13);
    t = geq_0_0(t);
    t = z_36;
    t = w_85(t);
    return(t);
  }
  t = try_1_0(n_9, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm o_9 (ATerm t)
  {
    ATerm i_37 = NULL,j_37 = NULL;
    t = run_time_0_0(t);
    i_37 = t;
    t = term_g_12;
    t = whoami_0_0(t);
    j_37 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), i_37), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), j_37));
    t = (ATerm) ATmakeAppl(sym__2, term_a_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_30), i_37), term_b_30), j_37));
    return(t);
  }
  t = if_verbose1_1_0(o_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm x_90 (ATerm), ATerm t)
{
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      {
        ATerm p_9 (ATerm t)
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              {
                ATerm i_30 = t;
                int j_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(j_30);
                  }
                else
                  {
                    t = i_30;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(p_9, t);
      }
    }
  t = x_90(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_37 = ATgetFirst((ATermList) t);
      n_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_37 = NULL,s_37 = NULL;
        t = n_37;
        t = g_0(t);
        r_37 = t;
        t = m_37;
        t = f_0(t);
        s_37 = t;
        t = n_37;
        {
          ATerm q_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(r_37), s_37);
            return(t);
          }
          t = reverse_acc_2_0(f_0, q_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_12;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm r_9 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, r_9, t);
  return(t);
}
ATerm Program_1_0 (ATerm c_66 (ATerm), ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,z_37 = NULL;
  z_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_37);
  t_37 = t;
  t = u_37;
  t = c_66(t);
  v_37 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, v_37), t_37);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      {
        ATerm s_9 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(s_9, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_w_30;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm t_9 (ATerm t)
    {
      ATerm d_38 = NULL;
      d_38 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, d_38), term_x_30);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(t_9, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm d_66 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  h_38 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      f_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_38);
  e_38 = t;
  t = f_38;
  t = d_66(t);
  g_38 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, g_38), e_38);
  return(t);
}
ATerm fetch_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm o_38 (ATerm t)
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_77, _id, t);
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        t = Cons_2_0(_id, o_38, t);
      }
    return(t);
  }
  t = o_38(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  t = fetch_1_0(s_91, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  q_38 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_31 = ATgetFirst((ATermList) t);
                ATerm d_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_38;
          }
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = (ATerm) ATinsert(ATempty, q_38);
      }
    r_38 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), r_38);
    t = q_38;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
      {
        ATerm x_38 = NULL,y_38 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_38 = ATgetFirst((ATermList) t);
            y_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_38;
        {
          ATerm u_9 (ATerm t)
          {
            t = y_38;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_9, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL;
  c_39 = t;
  t = SSL_explode_term(c_39);
  if(match_cons(t, sym__2))
    {
      ATerm h_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_39;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm e_39 (ATerm t)
  {
    ATerm i_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, e_39, t);
        ;
        LocalPopChoice(l_31);
      }
    else
      {
        t = i_31;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_77(t);
      }
    return(t);
  }
  t = e_39(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  if(match_cons(t, sym__2))
    {
      g_39 = ATgetArgument(t, 0);
      f_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_39;
  {
    ATerm v_9 (ATerm t)
    {
      t = f_39;
      return(t);
    }
    t = at_end_1_0(v_9, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm d_62 (ATerm), ATerm e_62 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,n_39 = NULL,o_39 = NULL;
  o_39 = t;
  if(match_cons(t, sym__2))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_39);
  h_39 = t;
  t = i_39;
  t = d_62(t);
  k_39 = t;
  t = j_39;
  t = e_62(t);
  n_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_39, n_39), h_39);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm u_39 = NULL;
  ATerm w_9 (ATerm t)
  {
    ATerm v_39 = NULL;
    v_39 = t;
    t = SSL_explode_string(v_39);
    return(t);
  }
  ATerm x_9 (ATerm t)
  {
    ATerm w_39 = NULL;
    w_39 = t;
    t = SSL_explode_string(w_39);
    return(t);
  }
  t = _2_0(w_9, x_9, t);
  t = conc_0_0(t);
  u_39 = t;
  t = SSL_implode_string(u_39);
  return(t);
}
ATerm debug_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL;
  x_39 = t;
  t = i_88(t);
  y_39 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_39), y_39));
  t = x_39;
  return(t);
}
ATerm map_1_0 (ATerm f_77 (ATerm), ATerm t)
{
  ATerm z_39 (ATerm t)
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = Cons_2_0(f_77, z_39, t);
      }
    return(t);
  }
  t = z_39(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_40 = NULL;
      u_40 = t;
      t = SSL_is_string(u_40);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_9 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(y_9, t);
            ;
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            {
              ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
              y_40 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_40 = ATgetArgument(t, 0);
                  t = z_40;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_40 = ATgetArgument(t, 0);
                      t = z_40;
                      {
                        ATerm c_32 = t;
                        int e_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(e_32);
                          }
                        else
                          {
                            t = c_32;
                            {
                              ATerm z_9 (ATerm t)
                              {
                                t = term_l_32;
                                return(t);
                              }
                              t = debug_1_0(z_9, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm e_41 = NULL,f_41 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_40 = ATgetArgument(t, 0);
                          a_41 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_40;
                      t = eval_config_0_0(t);
                      e_41 = t;
                      t = a_41;
                      t = eval_config_0_0(t);
                      f_41 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_41, f_41);
                      t = conc_strings_0_0(t);
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
  ATerm i_41 = NULL;
  i_41 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_41);
  {
    ATerm b_10 (ATerm t)
    {
      ATerm j_41 = NULL;
      t = eval_config_0_0(t);
      j_41 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_41, j_41);
      t = j_41;
      return(t);
    }
    t = try_1_0(b_10, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm n_75 (ATerm), ATerm t)
{
  ATerm m_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_75(t);
      ;
      LocalPopChoice(p_32);
    }
  else
    {
      t = m_32;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_10 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm d_10 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_w_32;
        return(t);
      }
      ATerm f_10 (ATerm t)
      {
        t = term_x_32;
        return(t);
      }
      t = Option_3_0(c_10, d_10, f_10, t);
      ;
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
        ATerm g_10 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm j_10 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_32;
          return(t);
        }
        ATerm k_10 (ATerm t)
        {
          t = term_z_32;
          return(t);
        }
        t = Option_3_0(g_10, j_10, k_10, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
  if(match_cons(t, sym__3))
    {
      m_41 = ATgetArgument(t, 0);
      n_41 = ATgetArgument(t, 1);
      o_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_41, n_41);
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_33 = ATgetArgument(t, 0);
            ATerm d_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_41, n_41);
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = (ATerm) ATempty;
      }
    p_41 = t;
    t = SSL_table_put(m_41, n_41, (ATerm) ATinsert(CheckATermList(p_41), o_41));
    t = (ATerm) ATmakeAppl(sym__3, m_41, n_41, o_41);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm x_92 (ATerm), ATerm t)
{
  ATerm u_41 = NULL;
  t = term_g_12;
  t = x_92(t);
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_33, term_f_33, u_41);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = w_41;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm b_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_41 = ATgetFirst((ATermList) t);
          y_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_41;
      t = a_0(t);
      t = term_g_12;
      t = b_0(t);
      b_42 = t;
      t = (ATerm) ATinsert(CheckATermList(y_41), b_42);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm m_10 (ATerm t)
  {
    ATerm d_42 = NULL;
    d_42 = t;
    if(match_string(t, "--help"))
      {
        t = d_42;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = d_42;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = d_42;
          }
      }
    return(t);
  }
  ATerm n_10 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_g_33;
    return(t);
  }
  ATerm o_10 (ATerm t)
  {
    t = term_j_33;
    return(t);
  }
  t = Option_3_0(m_10, n_10, o_10, t);
  return(t);
}
ATerm Cons_2_0 (ATerm m_63 (ATerm), ATerm n_63 (ATerm), ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  j_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_42 = ATgetFirst((ATermList) t);
      g_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_42);
  e_42 = t;
  t = f_42;
  t = m_63(t);
  h_42 = t;
  t = g_42;
  t = n_63(t);
  i_42 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(i_42), h_42), e_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_92 (ATerm), ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  {
    ATerm p_10 (ATerm t)
    {
      t = term_k_33;
      t = v_92(t);
      return(t);
    }
    t = try_1_0(p_10, t);
    t = q_42;
    {
      ATerm q_10 (ATerm t)
      {
        ATerm r_42 = NULL;
        r_42 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_42);
        t = (ATerm) ATmakeAppl(sym_Program_1, r_42);
        return(t);
      }
      ATerm r_10 (ATerm t)
      {
        ATerm l_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_33 = t;
            int r_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(r_33);
              }
            else
              {
                t = n_33;
                t = v_92(t);
                t = Cons_2_0(_id, r_10, t);
              }
            ;
            LocalPopChoice(m_33);
          }
        else
          {
            t = l_33;
            {
              ATerm t_42 = NULL,u_42 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_42 = ATgetFirst((ATermList) t);
                  u_42 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(u_42), (ATerm) ATmakeAppl(sym_Undefined_1, t_42));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_10, r_10, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm u_92 (ATerm), ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = a_43;
  {
    ATerm u_10 (ATerm t)
    {
      ATerm s_33 = t;
      int t_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_92(t);
          ;
          LocalPopChoice(t_33);
        }
      else
        {
          t = s_33;
          {
            ATerm u_33 = t;
            int v_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(v_33);
              }
            else
              {
                t = u_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_10, t);
    {
      ATerm v_10 (ATerm t)
      {
        ATerm b_34 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_43 = NULL;
            h_43 = t;
            {
              ATerm g_34 = t;
              int h_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_43;
                  {
                    ATerm i_34 = t;
                    int j_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_f_30;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(j_34);
                      }
                    else
                      {
                        t = i_34;
                        {
                          ATerm x_10 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(x_10, t);
                        }
                      }
                    t = h_43;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(h_34);
                }
              else
                {
                  t = g_34;
                  t = term_v_32;
                  t = get_config_0_0(t);
                  t = h_43;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(c_34);
          }
        else
          {
            t = b_34;
            {
              ATerm y_10 (ATerm t)
              {
                ATerm z_10 (ATerm t)
                {
                  b_43 = t;
                  return(t);
                }
                t = Undefined_1_0(z_10, t);
                return(t);
              }
              t = option_defined_1_0(y_10, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_43)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_a_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_43)), term_o_34));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(v_10, t);
      c_43 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = c_43;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm t)
{
  ATerm s_10 = NULL;
  t = parse_options_1_0(z_90, t);
  s_10 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), s_10);
  t = s_10;
  t = b_91(t);
  {
    ATerm p_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_91, t);
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = p_34;
        {
          ATerm w_34 = t;
          int x_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_34);
            }
          else
            {
              t = w_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm t)
{
  t = option_wrap_4_0(d_91, default_usage_0_0, _id, e_91, t);
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  ATerm a_11 (ATerm t)
  {
    ATerm s_11 (ATerm t)
    {
      ATerm k_43 = NULL,o_11 = NULL,p_11 = NULL;
      t = read_from_0_0(t);
      k_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_43, term_i_14);
      t = try_abox2text_0_0(t);
      o_11 = t;
      t = SSL_explode_term(o_11);
      if(match_cons(t, sym__2))
        {
          ATerm z_34 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) z_34) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm d_35 = ATgetArgument(t, 1);
            if(((ATgetType(d_35) == AT_LIST) && !(ATisEmpty(d_35))))
              {
                p_11 = ATgetFirst((ATermList) d_35);
                {
                  ATerm h_35 = (ATerm) ATgetNext((ATermList) d_35);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, p_11, term_k_35);
      t = topdown_print_to_0_0(t);
      return(t);
    }
    t = xtc_io_1_0(s_11, t);
    return(t);
  }
  t = option_wrap_2_0(abox2text_options_0_0, a_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
