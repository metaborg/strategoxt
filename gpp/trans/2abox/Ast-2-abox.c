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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Undefined_0;
Symbol sym_F__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_S_1;
Symbol sym_HV_2;
Symbol sym_SOpt_2;
Symbol sym_Strict_0;
Symbol sym_alt_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_30;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_w_27;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_m_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_a_24;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_m_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_z_16;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_c_14;
ATerm term_v_13;
ATerm term_u_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_i_8;
void init_constant_terms (void)
{
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_8);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__3, term_f_24, term_g_28, term_i_8);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm if_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm Instantiate_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm h_78 (ATerm), ATerm);
ATerm instantiate_0_0 (ATerm);
ATerm symbol2abox7_0_0 (ATerm);
ATerm instantiate_sep_list_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm foldr_3_0 (ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm);
ATerm crush_3_0 (ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm collect_p__1_0 (ATerm k_106 (ATerm), ATerm);
ATerm BuildSepList_1_0 (ATerm c_75 (ATerm), ATerm);
ATerm symbol2abox6_helper_0_0 (ATerm);
ATerm symbol2abox6_0_0 (ATerm);
ATerm symbol2abox5_0_0 (ATerm);
ATerm symbol2abox3_0_0 (ATerm);
ATerm symbol2abox2_0_0 (ATerm);
ATerm Ind2_0_0 (ATerm);
ATerm repeat_1_0 (ATerm l_92 (ATerm), ATerm);
ATerm index_0_0 (ATerm);
ATerm symbol2abox1_0_0 (ATerm);
ATerm symbol2abox_0_0 (ATerm);
ATerm get_symbol_0_0 (ATerm);
ATerm arg2abox_0_0 (ATerm);
ATerm NZip2_0_0 (ATerm);
ATerm genzip_4_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm);
ATerm nzip_1_0 (ATerm f_85 (ATerm), ATerm);
ATerm pp_table_get_0_0 (ATerm);
ATerm try_pp_table_get_0_0 (ATerm);
ATerm trm2abox_appl_0_0 (ATerm);
ATerm trm2abox_list_0_0 (ATerm);
ATerm trm2abox_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm j_98 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm assert_1_0 (ATerm n_93 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm c_98 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm a_78 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm k_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_93 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm b_77 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm c_77 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm StoreEntry_0_0 (ATerm);
ATerm selector_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm);
ATerm UnEscape_0_0 (ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm unescape_0_0 (ATerm);
ATerm at_last_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm init_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm un_double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm un_double_quote_0_0 (ATerm);
ATerm S_1_0 (ATerm a_72 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm);
ATerm Arg2_2_0 (ATerm y_71 (ATerm), ATerm z_71 (ATerm), ATerm);
ATerm Arg_1_0 (ATerm x_71 (ATerm), ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm topdown_1_0 (ATerm g_78 (ATerm), ATerm);
ATerm makePPEntry_0_0 (ATerm);
ATerm build_pp_table_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm is_subterm_0_0 (ATerm);
ATerm get_options_0_0 (ATerm);
ATerm check_option_0_0 (ATerm);
ATerm has_option_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm InId_1_0 (ATerm x_99 (ATerm), ATerm);
ATerm termid_check_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm notify_1_0 (ATerm p_106 (ATerm), ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm ast2abox_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm ast2abox_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm g_89 (ATerm), ATerm h_89 (ATerm), ATerm);
ATerm crush_2_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_75 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm o_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm u_70 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_70 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm a_83 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm j_95 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm g_83 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_82 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm o_96 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_65 (ATerm), ATerm w_65 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm m_96 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm l_96 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm);
ATerm io_Ast_2_abox_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm if_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  ATerm v_1 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_81(t);
      LocalPopChoice(x_7);
      t = f_81(t);
    }
  else
    {
      t = v_1;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = Cons_2_0(c_0, flat_list_0_0, t);
            ;
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL;
                  ATerm e_0 (ATerm t)
                  {
                    ATerm o_1 = NULL;
                    o_1 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = o_1;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm e_8 = ATgetFirst((ATermList) t);
                            ATerm f_8 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = o_1;
                      }
                    return(t);
                  }
                  t = Cons_2_0(e_0, _id, t);
                  l_1 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_1 = ATgetFirst((ATermList) t);
                      {
                        ATerm g_8 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = l_1;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm h_8 = ATgetFirst((ATermList) t);
                      n_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, m_1, n_1);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = c_8;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      b_2 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
      {
        ATerm f_2 = NULL,g_2 = NULL;
        t = term_i_8;
        t = l_0(t);
        f_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_2, f_2);
        t = index_0_0(t);
        g_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_1, g_2);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm i_2 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          b_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_i_8;
      t = l_0(t);
      i_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_2, i_2);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm h_78 (ATerm), ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    t = bottomup_1_0(h_78, t);
    return(t);
  }
  t = SRTS_all(m_0, t);
  t = h_78(t);
  return(t);
}
ATerm instantiate_0_0 (ATerm t)
{
  ATerm j_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      j_2 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_2;
  {
    ATerm n_0 (ATerm t)
    {
      ATerm o_0 (ATerm t)
      {
        ATerm j_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = m_2;
              return(t);
            }
            t = Instantiate_1_0(r_0, t);
            ;
            LocalPopChoice(k_8);
          }
        else
          {
            t = j_8;
            t = flat_list_0_0(t);
          }
        return(t);
      }
      t = try_1_0(o_0, t);
      return(t);
    }
    t = bottomup_1_0(n_0, t);
  }
  return(t);
}
ATerm symbol2abox7_0_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym__4))
    {
      ATerm l_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_8) != ATmakeSymbol("seq", 0, ATtrue)))
        _fail(t);
      o_2 = ATgetArgument(t, 1);
      p_2 = ATgetArgument(t, 2);
      q_2 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_2);
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_2;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm v_2 = NULL,x_2 = NULL;
      if(match_cons(t, sym__2))
        {
          v_2 = ATgetArgument(t, 0);
          x_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, v_2, o_2, x_2);
      t = arg2abox_0_0(t);
      return(t);
    }
    t = nzip_1_0(s_0, t);
    t_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_2, t_2);
    t = instantiate_0_0(t);
  }
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        {
          ATerm q_8 = t;
          int v_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_0 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(_id, t_0, t);
              ;
              LocalPopChoice(v_8);
            }
          else
            {
              t = q_8;
              {
                ATerm m_3 = NULL,n_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL;
                m_3 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    n_3 = ATgetFirst((ATermList) t);
                    p_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = p_3;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_3 = ATgetFirst((ATermList) t);
                    s_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = m_3;
                {
                  ATerm x_0 (ATerm t)
                  {
                    ATerm u_3 = NULL;
                    t = term_i_8;
                    t = j_100(t);
                    u_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_3, (ATerm) ATinsert(ATinsert(ATempty, r_3), n_3));
                    t = instantiate_0_0(t);
                    return(t);
                  }
                  ATerm z_0 (ATerm t)
                  {
                    t = s_3;
                    t = v_3(t);
                    return(t);
                  }
                  t = Cons_2_0(x_0, z_0, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = v_3(t);
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    t = term_x_8;
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    ATerm w_3 = NULL,y_3 = NULL;
    if(match_cons(t, sym__2))
      {
        w_3 = ATgetArgument(t, 0);
        y_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm y_8 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(w_3, y_3);
          ;
          LocalPopChoice(b_9);
        }
      else
        {
          t = y_8;
          t = SSL_addr(w_3, y_3);
        }
    }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = term_c_9;
    return(t);
  }
  t = foldr_3_0(a_1, b_1, c_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_89(t);
      ;
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm b_4 = NULL,c_4 = NULL,h_4 = NULL,i_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_4 = ATgetFirst((ATermList) t);
            c_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_4;
        t = k_89(t);
        h_4 = t;
        t = c_4;
        t = foldr_3_0(i_89, j_89, k_89, t);
        i_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
        t = j_89(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  j_4 = t;
  t = SSL_explode_term(j_4);
  if(match_cons(t, sym__2))
    {
      ATerm j_9 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4;
  t = foldr_3_0(g_87, h_87, i_87, t);
  return(t);
}
ATerm collect_p__1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm k_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_4 = NULL;
        t = k_106(t);
        n_4 = t;
        t = (ATerm) ATinsert(ATempty, n_4);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = k_9;
        {
          ATerm d_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3_0(d_1, conc_0_0, p_4, t);
        }
      }
    return(t);
  }
  t = p_4(t);
  return(t);
}
ATerm BuildSepList_1_0 (ATerm c_75 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_4 = NULL;
        t = SSL_mod(r_4, (ATerm) ATmakeInt(2));
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = term_i_8;
        t = c_75(t);
        v_4 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_u_9, v_4, s_4);
        t = arg2abox_0_0(t);
        t_4 = t;
        ;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm y_4 = NULL;
          t = term_i_8;
          t = c_75(t);
          y_4 = t;
          t = (ATerm) ATmakeAppl(sym__3, term_c_9, y_4, s_4);
          t = arg2abox_0_0(t);
          t_4 = t;
        }
      }
    t = not_null(t_4);
  }
  return(t);
}
ATerm symbol2abox6_helper_0_0 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__3))
    {
      c_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
      e_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_5;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = c_5;
        return(t);
      }
      t = BuildSepList_1_0(g_1, t);
      return(t);
    }
    t = nzip_1_0(f_1, t);
    f_5 = t;
    {
      ATerm c_10 = t;
      int d_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_5;
          {
            ATerm h_1 (ATerm t)
            {
              t = S_1_0(_id, t);
              return(t);
            }
            t = collect_p__1_0(h_1, t);
            t = length_0_0(t);
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
              _fail(t);
            t = f_5;
            {
              ATerm f_6 (ATerm t)
              {
                ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
                h_5 = t;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = h_5;
                  }
                else
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        i_5 = ATgetFirst((ATermList) t);
                        j_5 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = j_5;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        ATerm e_10 = t;
                        int f_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = h_5;
                            ;
                            LocalPopChoice(f_10);
                          }
                        else
                          {
                            t = e_10;
                            {
                              ATerm m_5 = NULL;
                              t = j_5;
                              t = f_6(t);
                              m_5 = t;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(m_5), i_5), i_5);
                            }
                          }
                      }
                    else
                      {
                        ATerm r_5 = NULL;
                        t = j_5;
                        t = f_6(t);
                        r_5 = t;
                        t = (ATerm) ATinsert(ATinsert(CheckATermList(r_5), i_5), i_5);
                      }
                  }
                return(t);
              }
              t = f_6(t);
            }
          }
          ;
          LocalPopChoice(d_10);
        }
      else
        {
          t = c_10;
          t = f_5;
        }
      {
        ATerm k_1 (ATerm t)
        {
          t = d_5;
          return(t);
        }
        t = instantiate_sep_list_1_0(k_1, t);
      }
    }
  }
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm q_6 = NULL,t_6 = NULL,u_6 = NULL,x_6 = NULL;
  if(match_cons(t, sym__4))
    {
      q_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
      u_6 = ATgetArgument(t, 2);
      x_6 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = q_6;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, t_6, u_6, x_6);
      t = symbol2abox6_helper_0_0(t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, t_6, u_6, x_6);
      t = symbol2abox6_helper_0_0(t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm m_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,w_8 = NULL;
  r_8 = t;
  if(match_cons(t, sym__4))
    {
      s_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
      u_8 = ATgetArgument(t, 2);
      w_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = s_8;
  if(match_string(t, "iter"))
    {
      t = r_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = r_8;
    }
  t = w_8;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm z_8 = NULL;
      z_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_9, t_8, z_8);
      t = arg2abox_0_0(t);
      return(t);
    }
    t = map_1_0(p_1, t);
    m_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_8, (ATerm) ATinsert(ATempty, m_8));
    t = instantiate_0_0(t);
  }
  return(t);
}
ATerm symbol2abox3_0_0 (ATerm t)
{
  ATerm a_9 = NULL,d_9 = NULL,e_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__4))
    {
      ATerm g_10 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
      d_9 = ATgetArgument(t, 2);
      {
        ATerm h_10 = ATgetArgument(t, 3);
        if(match_cons(h_10, sym_Some_1))
          {
            e_9 = ATgetArgument(h_10, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_9, a_9, e_9);
  t = arg2abox_0_0(t);
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_9, (ATerm) ATinsert(ATempty, h_9));
  t = instantiate_0_0(t);
  return(t);
}
ATerm symbol2abox2_0_0 (ATerm t)
{
  ATerm i_9 = NULL,l_9 = NULL,m_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__4))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
      l_9 = ATgetArgument(t, 2);
      {
        ATerm c_11 = ATgetArgument(t, 3);
        if(match_cons(c_11, sym_alt_2))
          {
            m_9 = ATgetArgument(c_11, 0);
            {
              ATerm e_11 = ATgetArgument(c_11, 1);
              if(((ATgetType(e_11) == AT_LIST) && !(ATisEmpty(e_11))))
                {
                  q_9 = ATgetFirst((ATermList) e_11);
                  {
                    ATerm n_11 = (ATerm) ATgetNext((ATermList) e_11);
                    if(((ATgetType(n_11) != AT_LIST) || !(ATisEmpty(n_11))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_9, i_9, q_9);
  t = arg2abox_0_0(t);
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, l_9);
  t = index_0_0(t);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, s_9), (ATerm) ATinsert(ATempty, r_9));
  t = instantiate_0_0(t);
  return(t);
}
ATerm Ind2_0_0 (ATerm t)
{
  ATerm t_9 = NULL,v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      {
        ATerm p_11 = ATgetArgument(t, 1);
        if(((ATgetType(p_11) == AT_LIST) && !(ATisEmpty(p_11))))
          {
            ATerm q_11 = ATgetFirst((ATermList) p_11);
            v_9 = (ATerm) ATgetNext((ATermList) p_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_9, term_u_9);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, t_9, term_c_9);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(t_9, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = SSL_subtr(t_9, (ATerm) ATmakeInt(1));
      }
    w_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_9, v_9);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm x_9 (ATerm t)
  {
    ATerm q_1 (ATerm t)
    {
      t = l_92(t);
      t = x_9(t);
      return(t);
    }
    t = try_1_0(q_1, t);
    return(t);
  }
  t = x_9(t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm y_9 = NULL;
  t = repeat_1_0(Ind2_0_0, t);
  if(match_cons(t, sym__2))
    {
      ATerm t_11 = ATgetArgument(t, 0);
      if(((ATgetType(t_11) != AT_INT) || (ATgetInt((ATermInt) t_11) != 1)))
        _fail(t);
      {
        ATerm u_11 = ATgetArgument(t, 1);
        if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
          {
            y_9 = ATgetFirst((ATermList) u_11);
            {
              ATerm v_11 = (ATerm) ATgetNext((ATermList) u_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_9;
  return(t);
}
ATerm symbol2abox1_0_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
  if(match_cons(t, sym__4))
    {
      ATerm w_11 = ATgetArgument(t, 0);
      ATerm x_11 = ATgetArgument(t, 1);
      z_9 = ATgetArgument(t, 2);
      {
        ATerm y_11 = ATgetArgument(t, 3);
        if(match_cons(y_11, sym_alt_2))
          {
            a_10 = ATgetArgument(y_11, 0);
            {
              ATerm z_11 = ATgetArgument(y_11, 1);
              if(((ATgetType(z_11) != AT_LIST) || !(ATisEmpty(z_11))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_10, z_9);
  t = index_0_0(t);
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, b_10), (ATerm) ATempty);
  t = instantiate_0_0(t);
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = symbol2abox1_0_0(t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = symbol2abox2_0_0(t);
            ;
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
            {
              ATerm e_12 = t;
              int g_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = symbol2abox3_0_0(t);
                  ;
                  LocalPopChoice(g_12);
                }
              else
                {
                  t = e_12;
                  {
                    ATerm h_12 = t;
                    int i_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_10 = NULL;
                        if(match_cons(t, sym__4))
                          {
                            ATerm k_12 = ATgetArgument(t, 0);
                            ATerm m_12 = ATgetArgument(t, 1);
                            ATerm o_12 = ATgetArgument(t, 2);
                            i_10 = ATgetArgument(t, 3);
                          }
                        else
                          _fail(t);
                        t = i_10;
                        if(!(match_cons(t, sym_None_0)))
                          _fail(t);
                        t = (ATerm) ATempty;
                        ;
                        LocalPopChoice(i_12);
                      }
                    else
                      {
                        t = h_12;
                        {
                          ATerm q_12 = t;
                          int s_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = symbol2abox5_0_0(t);
                              ;
                              LocalPopChoice(s_12);
                            }
                          else
                            {
                              t = q_12;
                              {
                                ATerm a_13 = t;
                                int b_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = symbol2abox6_0_0(t);
                                    ;
                                    LocalPopChoice(b_13);
                                  }
                                else
                                  {
                                    t = a_13;
                                    t = symbol2abox7_0_0(t);
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
ATerm get_symbol_0_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym_Path_2))
    {
      ATerm c_13 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm t_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          k_10 = t;
          return(t);
        }
        t = selector_2_0(_id, w_1, t);
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(t_1, u_1, t);
      return(t);
    }
    t = at_last_1_0(s_1, t);
    t = not_null(k_10);
  }
  return(t);
}
ATerm arg2abox_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
  if(match_cons(t, sym__3))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
      n_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_10, (ATerm) ATinsert(ATempty, l_10));
  t = conc_0_0(t);
  o_10 = t;
  {
    ATerm e_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_10 = NULL;
        t = pp_table_get_0_0(t);
        if(match_cons(t, sym__2))
          {
            p_10 = ATgetArgument(t, 0);
            q_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_10;
        t = get_symbol_0_0(t);
        r_10 = t;
        t = (ATerm) ATmakeAppl(sym__4, r_10, o_10, q_10, n_10);
        t = symbol2abox_0_0(t);
        ;
        LocalPopChoice(i_13);
      }
    else
      {
        t = e_13;
        t = n_10;
        t = trm2abox_0_0(t);
      }
  }
  return(t);
}
ATerm NZip2_0_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
  if(match_cons(t, sym__2))
    {
      s_10 = ATgetArgument(t, 0);
      {
        ATerm j_13 = ATgetArgument(t, 1);
        if(((ATgetType(j_13) == AT_LIST) && !(ATisEmpty(j_13))))
          {
            t_10 = ATgetFirst((ATermList) j_13);
            u_10 = (ATerm) ATgetNext((ATermList) j_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_10, term_c_9);
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(s_10, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = SSL_addr(s_10, (ATerm) ATmakeInt(1));
      }
    v_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_10, t_10), (ATerm) ATmakeAppl(sym__2, v_10, u_10));
  }
  return(t);
}
ATerm genzip_4_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm t)
{
  ATerm w_10 (ATerm t)
  {
    ATerm m_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_84(t);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = m_13;
        t = u_84(t);
        t = _2_0(w_84, w_10, t);
        t = v_84(t);
      }
    return(t);
  }
  t = w_10(t);
  return(t);
}
ATerm nzip_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm x_10 = NULL;
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, x_10);
  {
    ATerm x_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm t_13 = ATgetArgument(t, 0);
          ATerm u_13 = ATgetArgument(t, 1);
          if(((ATgetType(u_13) != AT_LIST) || !(ATisEmpty(u_13))))
            _fail(t);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm y_1 (ATerm t)
    {
      ATerm y_10 = NULL,z_10 = NULL;
      if(match_cons(t, sym__2))
        {
          y_10 = ATgetArgument(t, 0);
          z_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(z_10), y_10);
      return(t);
    }
    t = genzip_4_0(x_1, NZip2_0_0, y_1, f_85, t);
  }
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm b_11 = NULL,d_11 = NULL,f_11 = NULL;
  b_11 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), b_11);
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11;
  t = path_to_string_0_0(t);
  {
    ATerm a_2 (ATerm t)
    {
      t = term_v_13;
      return(t);
    }
    t = notify_1_0(a_2, t);
    t = (ATerm) ATmakeAppl(sym__2, d_11, f_11);
  }
  return(t);
}
ATerm try_pp_table_get_0_0 (ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_table_get_0_0(t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm c_2 (ATerm t)
        {
          t = term_c_14;
          return(t);
        }
        t = debug_1_0(c_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
  g_11 = t;
  t = SSL_explode_term(g_11);
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_11);
  t = try_pp_table_get_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm d_14 = ATgetArgument(t, 0);
      j_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm l_11 = NULL,m_11 = NULL;
      if(match_cons(t, sym__2))
        {
          l_11 = ATgetArgument(t, 0);
          m_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, l_11, (ATerm)ATinsert(ATempty, h_11), m_11);
      t = arg2abox_0_0(t);
      return(t);
    }
    t = nzip_1_0(d_2, t);
    k_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_11, k_11);
    t = instantiate_0_0(t);
  }
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  t = SSL_explode_term(o_11);
  if(match_cons(t, sym__2))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      ATerm h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_11;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm i_14 = ATgetFirst((ATermList) t);
          ATerm j_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_11;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_0 = NULL,q_0 = NULL;
      q_0 = t;
      t = SSL_is_string(q_0);
      p_0 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, p_0);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL;
            v_0 = t;
            t = SSL_is_int(v_0);
            u_0 = t;
            t = SSL_int_to_string(u_0);
            w_0 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, w_0);
            ;
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
            {
              ATerm o_14 = t;
              int p_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0_0(t);
                  ;
                  LocalPopChoice(p_14);
                }
              else
                {
                  t = o_14;
                  {
                    ATerm q_14 = t;
                    int r_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0_0(t);
                        ;
                        LocalPopChoice(r_14);
                      }
                    else
                      {
                        t = q_14;
                        {
                          ATerm f_12 = NULL;
                          f_12 = t;
                          t = (ATerm) ATinsert(ATinsert(ATempty, f_12), term_s_14);
                          t = fatal_error_0_0(t);
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
ATerm WriteToFile_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,l_12 = NULL,n_12 = NULL;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_12, term_v_14);
  t = open_stream_0_0(t);
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_12, l_12);
  t = j_98(t);
  t = fclose_0_0(t);
  t = l_12;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm p_12 = NULL,r_12 = NULL,t_12 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm w_14 = ATgetArgument(t, 0);
        if(match_cons(w_14, sym_Stream_1))
          {
            p_12 = ATgetArgument(w_14, 0);
          }
        else
          _fail(t);
        r_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(p_12, r_12);
    t_12 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, t_12);
    return(t);
  }
  t = WriteToFile_1_0(e_2, t);
  return(t);
}
ATerm assert_1_0 (ATerm n_93 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      u_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_93(t);
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_12, u_12, v_12);
  t = table_push_0_0(t);
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_12 = ATgetFirst((ATermList) t);
        y_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_12, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(y_12), (ATerm) ATinsert(CheckATermList(x_12), u_12)));
    t = (ATerm) ATmakeAppl(sym__2, u_12, v_12);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm z_12 = NULL;
  z_12 = t;
  t = c_98(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = term_z_14;
      return(t);
    }
    t = debug_1_0(h_2, t);
    t = z_12;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm r_13 (ATerm d_13, ATerm t)
  {
    t = d_13;
    {
      ATerm d_15 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm e_15 = ATgetArgument(t, 0);
              ATerm f_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_15;
        }
      {
        ATerm k_2 (ATerm t)
        {
          t = term_g_15;
          return(t);
        }
        t = obsolete_1_0(k_2, t);
        t = (ATerm) ATmakeAppl(sym__2, d_13, term_v_14);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm s_13 (ATerm f_13, ATerm g_13, ATerm h_13, ATerm t)
  {
    t = SSL_open_file(f_13, g_13);
    return(t);
  }
  ATerm n_13 = NULL,p_13 = NULL,q_13 = NULL;
  n_13 = t;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
      {
        ATerm h_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_13(n_13, t);
            ;
            LocalPopChoice(i_15);
          }
        else
          {
            t = h_15;
            t = s_13(p_13, q_13, n_13, t);
          }
      }
    }
  else
    {
      t = r_13(n_13, t);
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
  ATerm w_13 = NULL;
  t = term_i_8;
  t = new_0_0(t);
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_13, term_j_15);
  t = conc_strings_0_0(t);
  {
    ATerm l_2 (ATerm t)
    {
      ATerm y_0 = NULL;
      y_0 = t;
      t = SSL_access(y_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(l_2, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_13 = NULL;
  t = new_file_0_0(t);
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_13, term_v_14);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, z_13, term_i_8);
  {
    ATerm n_2 (ATerm t)
    {
      t = term_k_15;
      return(t);
    }
    t = assert_1_0(n_2, t);
    t = z_13;
  }
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  a_14 = t;
  t = xtc_new_file_0_0(t);
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_14, a_14);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(b_14);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_14);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  e_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = e_14;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          f_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(f_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = a_78(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  t_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 = NULL;
        t = t_14;
        t = k_0(t);
        e_1 = t;
        {
          ATerm s_15 = t;
          int t_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(t_15);
            }
          else
            {
              t = s_15;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(u_14, e_1);
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_14);
        }
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_1 = NULL;
              t = t_14;
              t = k_0(t);
              i_1 = t;
              {
                ATerm z_15 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_16 = t;
                    int h_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(h_16);
                      }
                    else
                      {
                        t = a_16;
                        {
                          ATerm i_16 = t;
                          int l_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(l_16);
                            }
                          else
                            {
                              t = i_16;
                              {
                                ATerm j_1 = NULL;
                                j_1 = t;
                                if((u_14 != t))
                                  {
                                    _fail(t);
                                  }
                                t = j_1;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_15;
                  }
                t = SSL_copy(u_14, i_1);
                t = (ATerm) ATmakeAppl(sym_FILE_1, u_14);
              }
              ;
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              t = t_14;
              t = k_0(t);
              if((u_14 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_14);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  if(match_cons(t, sym__2))
    {
      a_15 = ATgetArgument(t, 0);
      b_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_16 = ATgetArgument(t, 0);
            ATerm p_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_15, b_15);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_16 = ATgetFirst((ATermList) t);
            r_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_1;
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        t = (ATerm) ATempty;
      }
    c_15 = t;
    t = SSL_table_put(a_15, b_15, c_15);
    t = (ATerm) ATmakeAppl(sym__2, a_15, b_15);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_93 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  l_15 = t;
  t = k_93(t);
  o_15 = t;
  {
    ATerm r_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(o_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = r_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_15 = ATgetFirst((ATermList) t);
        p_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(o_15, (ATerm)ATmakeAppl(sym_Scopes_0), p_15);
    t = q_15;
    {
      ATerm w_2 (ATerm t)
      {
        ATerm r_15 = NULL;
        r_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_15, r_15);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(w_2, t);
      t = l_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm t)
{
  ATerm w_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_81(t);
      t = o_81(t);
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = w_16;
      t = o_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_93 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t = j_93(t);
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_15, term_z_16);
  {
    ATerm a_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_17 = ATgetArgument(t, 0);
            ATerm f_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(d_17);
      }
    else
      {
        t = a_17;
        t = (ATerm) ATempty;
      }
    w_15 = t;
    t = SSL_table_put(v_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(w_15), (ATerm) ATempty));
    t = u_15;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_77 (ATerm), ATerm t)
{
  ATerm b_16 = NULL;
  ATerm y_2 (ATerm t)
  {
    t = term_k_15;
    return(t);
  }
  t = begin_scope_1_0(y_2, t);
  {
    ATerm z_2 (ATerm t)
    {
      ATerm c_16 = NULL;
      c_16 = t;
      {
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_16 = ATgetFirst((ATermList) t);
            {
              ATerm i_17 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = b_16;
        {
          ATerm a_3 (ATerm t)
          {
            ATerm b_3 (ATerm t)
            {
              ATerm d_16 = NULL;
              d_16 = t;
              t = SSL_remove(d_16);
              return(t);
            }
            t = try_1_0(b_3, t);
            return(t);
          }
          t = map_1_0(a_3, t);
          t = c_16;
          {
            ATerm c_3 (ATerm t)
            {
              t = term_k_15;
              return(t);
            }
            t = end_scope_1_0(c_3, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(b_77, z_2, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm c_77 (ATerm), ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_16 = NULL;
        t = term_x_17;
        t = get_config_0_0(t);
        e_16 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_16);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = term_y_17;
      }
    t = c_77(t);
    {
      ATerm e_3 (ATerm t)
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_18;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            t = term_c_18;
          }
        return(t);
      }
      t = copy_to_1_0(e_3, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(d_3, t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm f_16 = NULL;
  ATerm f_3 (ATerm t)
  {
    ATerm g_16 = NULL;
    g_16 = t;
    t = SSL_explode_string(g_16);
    return(t);
  }
  t = map_1_0(f_3, t);
  t = concat_0_0(t);
  f_16 = t;
  t = SSL_implode_string(f_16);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      j_16 = ATgetArgument(t, 0);
      t = j_16;
    }
  else
    {
      ATerm s_16 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          j_16 = ATgetArgument(t, 0);
          k_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_16;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm t_16 = NULL,v_16 = NULL,x_16 = NULL;
          if(match_cons(t, sym_selector_2))
            {
              t_16 = ATgetArgument(t, 0);
              v_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_int_to_string(t_16);
          x_16 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_16), term_e_18), x_16), term_d_18);
          return(t);
        }
        t = map_1_0(g_3, t);
        t = concat_0_0(t);
        s_16 = t;
        t = (ATerm) ATinsert(CheckATermList(s_16), j_16);
        t = concat_strings_0_0(t);
      }
    }
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      b_17 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, b_17);
    }
  else
    {
      ATerm l_17 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          b_17 = ATgetArgument(t, 0);
          c_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_17;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm m_17 = NULL;
          if(match_cons(t, sym_selector_2))
            {
              m_17 = ATgetArgument(t, 0);
              {
                ATerm j_18 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = m_17;
          return(t);
        }
        t = map_1_0(h_3, t);
        l_17 = t;
        t = (ATerm) ATinsert(CheckATermList(l_17), b_17);
      }
    }
  return(t);
}
ATerm StoreEntry_0_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      n_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_17;
  t = mk_key_0_0(t);
  p_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), p_17, (ATerm) ATmakeAppl(sym__2, n_17, o_17));
  t = n_17;
  t = path_to_string_0_0(t);
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_17, o_17);
  {
    ATerm i_3 (ATerm t)
    {
      t = term_k_18;
      return(t);
    }
    t = notify_1_0(i_3, t);
  }
  return(t);
}
ATerm selector_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  w_17 = t;
  if(match_cons(t, sym_selector_2))
    {
      s_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_17);
  r_17 = t;
  t = s_17;
  t = v_71(t);
  u_17 = t;
  t = t_17;
  t = w_71(t);
  v_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, u_17, v_17), r_17);
  return(t);
}
ATerm UnEscape_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_18 = ATgetFirst((ATermList) t);
      g_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_18;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = g_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_18 = ATgetFirst((ATermList) t);
      i_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_18;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(i_18), term_l_18);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(i_18), term_m_18);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(i_18), term_n_18);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_18), term_p_18);
            }
        }
    }
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  t = try_1_0(UnEscape_0_0, t);
  {
    ATerm q_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = q_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
      }
  }
  return(t);
}
ATerm unescape_0_0 (ATerm t)
{
  t = string_as_chars_1_0(unescape_chars_0_0, t);
  return(t);
}
ATerm at_last_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm o_18 (ATerm t)
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, j_3, t);
        t = r_83(t);
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = Cons_2_0(_id, o_18, t);
      }
    return(t);
  }
  t = o_18(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm r_18 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm x_18 = ATgetFirst((ATermList) t);
        r_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = r_18;
    return(t);
  }
  t = at_last_1_0(k_3, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_18 = ATgetFirst((ATermList) t);
      w_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_18;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm y_18 = t;
      int z_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_18;
          ;
          LocalPopChoice(z_18);
        }
      else
        {
          t = y_18;
          t = w_18;
          t = last_0_0(t);
        }
    }
  else
    {
      t = w_18;
      t = last_0_0(t);
    }
  return(t);
}
ATerm unquote_chars_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_19 = ATgetFirst((ATermList) t);
      {
        ATerm a_19 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_19;
  t = w_91(t);
  t = b_19;
  t = last_0_0(t);
  t = w_91(t);
  t = b_19;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_19 = ATgetFirst((ATermList) t);
      d_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_19;
  t = init_0_0(t);
  return(t);
}
ATerm un_double_quote_chars_0_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
      _fail(t);
    return(t);
  }
  t = unquote_chars_1_0(l_3, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  e_19 = t;
  t = SSL_explode_string(e_19);
  t = h_92(t);
  f_19 = t;
  t = SSL_implode_string(f_19);
  return(t);
}
ATerm un_double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(un_double_quote_chars_0_0, t);
  return(t);
}
ATerm S_1_0 (ATerm a_72 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  j_19 = t;
  if(match_cons(t, sym_S_1))
    {
      h_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_19);
  g_19 = t;
  t = h_19;
  t = a_72(t);
  i_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, i_19), g_19);
  return(t);
}
ATerm SOpt_2_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  s_19 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      o_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_19);
  n_19 = t;
  t = o_19;
  t = m_73(t);
  q_19 = t;
  t = p_19;
  t = n_73(t);
  r_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, q_19, r_19), n_19);
  return(t);
}
ATerm Arg2_2_0 (ATerm y_71 (ATerm), ATerm z_71 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
  b_20 = t;
  if(match_cons(t, sym_Arg2_2))
    {
      x_19 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_20);
  w_19 = t;
  t = x_19;
  t = y_71(t);
  z_19 = t;
  t = y_19;
  t = z_71(t);
  a_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, z_19, a_20), w_19);
  return(t);
}
ATerm Arg_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  i_20 = t;
  if(match_cons(t, sym_Arg_1))
    {
      g_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_20);
  f_20 = t;
  t = g_20;
  t = x_71(t);
  h_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, h_20), f_20);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_3 (ATerm t)
      {
        ATerm m_20 = NULL;
        m_20 = t;
        t = SSL_string_to_int(m_20);
        return(t);
      }
      t = Arg_1_0(o_3, t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 (ATerm t)
            {
              ATerm n_20 = NULL;
              n_20 = t;
              t = SSL_string_to_int(n_20);
              return(t);
            }
            ATerm t_3 (ATerm t)
            {
              ATerm o_20 = NULL;
              o_20 = t;
              t = SSL_string_to_int(o_20);
              return(t);
            }
            t = Arg2_2_0(q_3, t_3, t);
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            {
              ATerm v_19 = t;
              int c_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(c_20);
                }
              else
                {
                  t = v_19;
                  {
                    ATerm d_20 = t;
                    int e_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_3 (ATerm t)
                        {
                          t = un_double_quote_0_0(t);
                          t = unescape_0_0(t);
                          return(t);
                        }
                        t = S_1_0(x_3, t);
                        ;
                        LocalPopChoice(e_20);
                      }
                    else
                      {
                        t = d_20;
                        {
                          ATerm z_3 (ATerm t)
                          {
                            ATerm p_20 = NULL;
                            p_20 = t;
                            t = SSL_string_to_int(p_20);
                            return(t);
                          }
                          t = selector_2_0(z_3, _id, t);
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
ATerm topdown_1_0 (ATerm g_78 (ATerm), ATerm t)
{
  t = g_78(t);
  {
    ATerm a_4 (ATerm t)
    {
      t = topdown_1_0(g_78, t);
      return(t);
    }
    t = SRTS_all(a_4, t);
  }
  return(t);
}
ATerm makePPEntry_0_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    t = try_1_0(MakePPTerm_0_0, t);
    return(t);
  }
  t = topdown_1_0(d_4, t);
  return(t);
}
ATerm build_pp_table_0_0 (ATerm t)
{
  ATerm q_20 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      q_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_20;
  t = reverse_0_0(t);
  {
    ATerm e_4 (ATerm t)
    {
      t = makePPEntry_0_0(t);
      t = StoreEntry_0_0(t);
      return(t);
    }
    t = map_1_0(e_4, t);
  }
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), s_20);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = s_20;
  return(t);
}
ATerm oncetd_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm t_20 (ATerm t)
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_79(t);
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = SRTS_one(t_20, t);
      }
    return(t);
  }
  t = t_20(t);
  return(t);
}
ATerm is_subterm_0_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_20;
  {
    ATerm f_4 (ATerm t)
    {
      if((u_20 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = oncetd_1_0(f_4, t);
    t = (ATerm) ATmakeAppl(sym__2, u_20, v_20);
  }
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  return(t);
}
ATerm check_option_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL;
  w_20 = t;
  t = get_options_0_0(t);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
  t = is_subterm_0_0(t);
  t = term_i_8;
  return(t);
}
ATerm has_option_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  t = term_i_8;
  t = r_93(t);
  t = check_option_0_0(t);
  t = y_20;
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm l_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 (ATerm t)
      {
        t = term_d_21;
        return(t);
      }
      t = has_option_1_0(g_4, t);
      t = (ATerm) ATinsert(ATempty, term_e_21);
      t = fatal_error_0_0(t);
      ;
      LocalPopChoice(r_20);
    }
  else
    {
      t = l_20;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue))));
      t = (ATerm) ATinsert(ATempty, term_f_21);
    }
  return(t);
}
ATerm InId_1_0 (ATerm x_99 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_21) != ATmakeSymbol("in-type", 0, ATtrue)))
        _fail(t);
      z_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_20);
  if(match_cons(t, sym__2))
    {
      a_21 = ATgetArgument(t, 0);
      {
        ATerm h_21 = ATgetArgument(t, 1);
        if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
          {
            b_21 = ATgetFirst((ATermList) h_21);
            {
              ATerm i_21 = (ATerm) ATgetNext((ATermList) h_21);
              if(((ATgetType(i_21) != AT_LIST) || !(ATisEmpty(i_21))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_21;
  {
    ATerm j_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_99(t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = j_21;
        t = type_failure_0_0(t);
      }
    t = b_21;
  }
  return(t);
}
ATerm termid_check_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_21, c_21);
  t = InId_1_0(e_100, t);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_21 (ATerm k_21, ATerm t)
  {
    t = SSL_fclose(k_21);
    return(t);
  }
  ATerm n_21 = NULL,o_21 = NULL;
  o_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_21 = ATgetArgument(t, 0);
      {
        ATerm p_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_21);
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = p_21;
            t = q_21(o_21, t);
          }
      }
    }
  else
    {
      t = q_21(o_21, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_21 = NULL;
  t = SSL_stdin_stream();
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_21 = NULL;
  t = SSL_stdout_stream();
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_21 = NULL;
  t = SSL_stderr_stream();
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_21);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      ATerm x_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_2 = NULL,u_2 = NULL;
        s_2 = t;
        t = SSL_explode_term(s_2);
        if(match_cons(t, sym__2))
          {
            ATerm p_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_22 = ATgetArgument(t, 1);
              if(((ATgetType(q_22) == AT_LIST) && !(ATisEmpty(q_22))))
                {
                  u_2 = ATgetFirst((ATermList) q_22);
                  {
                    ATerm x_22 = (ATerm) ATgetNext((ATermList) q_22);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = k_22;
        {
          ATerm b_23 = t;
          int f_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
              ATerm l_4 (ATerm t)
              {
                ATerm b_22 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    b_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_22;
                return(t);
              }
              t = _2_0(l_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_21 = ATgetArgument(t, 0);
                  z_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_21, z_21);
              a_22 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_22);
              ;
              LocalPopChoice(f_23);
            }
          else
            {
              t = b_23;
              {
                ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
                ATerm m_4 (ATerm t)
                {
                  ATerm f_22 = NULL;
                  f_22 = t;
                  t = SSL_is_string(f_22);
                  return(t);
                }
                t = _2_0(m_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_22 = ATgetArgument(t, 0);
                    d_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_22, d_22);
                e_22 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_22);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_22 = NULL;
      j_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_22, term_p_23);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      {
        ATerm o_4 (ATerm t)
        {
          t = term_q_23;
          return(t);
        }
        t = debug_1_0(o_4, t);
        _fail(t);
      }
    }
  g_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_22);
  h_22 = t;
  t = g_22;
  t = fclose_0_0(t);
  t = h_22;
  return(t);
}
ATerm notify_1_0 (ATerm p_106 (ATerm), ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    t = debug_1_0(p_106, t);
    return(t);
  }
  t = if_verbose1_1_0(q_4, t);
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)));
  t = l_22;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm w_4 (ATerm t)
      {
        t = term_r_23;
        return(t);
      }
      t = notify_1_0(w_4, t);
      t = ReadFromFile_0_0(t);
      {
        ATerm x_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        t = termid_check_1_0(x_4, t);
        t = build_pp_table_0_0(t);
      }
      return(t);
    }
    t = map_1_0(u_4, t);
  }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm t_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = t_23;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  t = get_config_p_0_0(t);
  t = reverse_0_0(t);
  t = read_pp_tables_0_0(t);
  t = n_22;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm a_5 (ATerm t)
      {
        t = trm2abox_0_0(t);
        {
          ATerm b_5 (ATerm t)
          {
            ATerm o_22 = NULL;
            o_22 = t;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = o_22;
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm b_24 = ATgetFirst((ATermList) t);
                    ATerm c_24 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = o_22;
              }
            return(t);
          }
          ATerm g_5 (ATerm t)
          {
            ATerm r_22 = NULL;
            r_22 = t;
            t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, r_22);
            return(t);
          }
          t = if_2_0(b_5, g_5, t);
        }
        return(t);
      }
      t = xtc_io_transform_1_0(a_5, t);
      return(t);
    }
    t = xtc_io_1_0(z_4, t);
  }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
  if(match_cons(t, sym__2))
    {
      s_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_22;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = (ATerm) ATempty;
      }
    u_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_22, u_22);
    t = conc_0_0(t);
    v_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_22, v_22);
    t = (ATerm) ATmakeAppl(sym__3, term_f_24, s_22, v_22);
  }
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
      _fail(t);
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    ATerm w_22 = NULL;
    w_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_24, (ATerm) ATinsert(ATempty, w_22));
    t = extend_config_0_0(t);
    t = w_22;
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_g_24;
    return(t);
  }
  t = ArgOption_3_0(k_5, l_5, n_5, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm y_22 = NULL;
    y_22 = t;
    if(match_string(t, "-k"))
      {
        t = y_22;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = y_22;
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    ATerm z_22 = NULL,a_23 = NULL;
    z_22 = t;
    t = SSL_string_to_int(z_22);
    a_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), a_23);
    t = z_22;
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_h_24;
    return(t);
  }
  t = ArgOption_3_0(o_5, p_5, q_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 (ATerm t)
      {
        ATerm c_23 = NULL;
        c_23 = t;
        if(match_string(t, "-S"))
          {
            t = c_23;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = c_23;
          }
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_k_24;
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        t = term_l_24;
        return(t);
      }
      t = Option_3_0(s_5, t_5, u_5, t);
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm w_5 (ATerm t)
            {
              ATerm d_23 = NULL,e_23 = NULL;
              d_23 = t;
              t = SSL_string_to_int(d_23);
              e_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_23);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, d_23);
              return(t);
            }
            ATerm x_5 (ATerm t)
            {
              t = term_q_24;
              return(t);
            }
            t = ArgOption_3_0(v_5, w_5, x_5, t);
            ;
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            {
              ATerm y_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm z_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_r_24;
                return(t);
              }
              ATerm a_6 (ATerm t)
              {
                t = term_s_24;
                return(t);
              }
              t = Option_3_0(y_5, z_5, a_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm g_23 = NULL;
    g_23 = t;
    if(match_string(t, "-o"))
      {
        t = g_23;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = g_23;
      }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    ATerm h_23 = NULL;
    h_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_23);
    t = (ATerm) ATmakeAppl(sym_Output_1, h_23);
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_v_24;
    return(t);
  }
  t = ArgOption_3_0(b_6, c_6, d_6, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm e_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm g_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_24;
          return(t);
        }
        ATerm h_6 (ATerm t)
        {
          t = term_c_25;
          return(t);
        }
        t = Option_3_0(e_6, g_6, h_6, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  k_23 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = k_23;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm s_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_23 = ATgetFirst((ATermList) t);
          m_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_23 = ATgetFirst((ATermList) t);
          o_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_23;
      t = h_0(t);
      t = n_23;
      t = i_0(t);
      s_23 = t;
      t = (ATerm) ATinsert(CheckATermList(o_23), s_23);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm u_23 = NULL;
    u_23 = t;
    if(match_string(t, "-i"))
      {
        t = u_23;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = u_23;
      }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    ATerm v_23 = NULL;
    v_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_23);
    t = (ATerm) ATmakeAppl(sym_Input_1, v_23);
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_d_25;
    return(t);
  }
  t = ArgOption_3_0(i_6, j_6, k_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm e_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = e_25;
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm ast2abox_options_0_0 (ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0_0(t);
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      t = pp_options_0_0(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL;
  w_23 = t;
  t = term_i_8;
  t = whoami_0_0(t);
  x_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), x_23), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = w_23;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_8;
  t = whoami_0_0(t);
  y_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), y_23));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm g_89 (ATerm), ATerm h_89 (ATerm), ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_89(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm m_24 = NULL,n_24 = NULL,z_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_24 = ATgetFirst((ATermList) t);
            n_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_24;
        t = foldr_2_0(g_89, h_89, t);
        z_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_24, z_24);
        t = h_89(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL;
  a_25 = t;
  t = SSL_explode_term(a_25);
  if(match_cons(t, sym__2))
    {
      ATerm p_25 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_25;
  t = foldr_2_0(e_87, f_87, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_25 = NULL;
  t = times_0_0(t);
  {
    ATerm l_6 (ATerm t)
    {
      t = term_x_8;
      return(t);
    }
    ATerm m_6 (ATerm t)
    {
      ATerm g_25 = NULL,s_25 = NULL;
      if(match_cons(t, sym__2))
        {
          g_25 = ATgetArgument(t, 0);
          s_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(g_25, s_25);
            ;
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            t = SSL_addr(g_25, s_25);
          }
      }
      return(t);
    }
    t = crush_2_0(l_6, m_6, t);
    f_25 = t;
    t = SSL_TicksToSeconds(f_25);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  if(match_cons(t, sym__2))
    {
      p_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_26;
        if((p_26 != t))
          {
            _fail(t);
          }
        t = o_26;
        ;
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = o_26;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_26, q_26);
              ;
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              t = SSL_gtr(p_26, q_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_26, q_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_75 (ATerm), ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm v_26 = NULL,y_26 = NULL;
    v_26 = t;
    t = term_x_25;
    t = get_config_0_0(t);
    y_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_26, term_c_9);
    t = geq_0_0(t);
    t = v_26;
    t = e_75(t);
    return(t);
  }
  t = try_1_0(n_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm f_27 = NULL,g_27 = NULL;
    t = run_time_0_0(t);
    f_27 = t;
    t = term_i_8;
    t = whoami_0_0(t);
    g_27 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), f_27), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), g_27));
    t = (ATerm) ATmakeAppl(sym__2, term_y_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_26), f_27), term_z_25), g_27));
    return(t);
  }
  t = if_verbose1_1_0(o_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm o_94 (ATerm), ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm p_6 (ATerm t)
        {
          ATerm e_26 = t;
          int f_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(f_26);
            }
          else
            {
              t = e_26;
              {
                ATerm g_26 = t;
                int h_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(h_26);
                  }
                else
                  {
                    t = g_26;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(p_6, t);
      }
    }
  t = o_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_27 = ATgetFirst((ATermList) t);
      k_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_27 = NULL,p_27 = NULL;
        t = k_27;
        t = g_0(t);
        o_27 = t;
        t = j_27;
        t = f_0(t);
        p_27 = t;
        t = k_27;
        {
          ATerm r_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_27), p_27);
            return(t);
          }
          t = reverse_acc_2_0(f_0, r_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_8;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, s_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm u_70 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
  t_27 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_27);
  q_27 = t;
  t = r_27;
  t = u_70(t);
  s_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, s_27), q_27);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm v_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(v_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_k_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm w_6 (ATerm t)
    {
      ATerm x_27 = NULL;
      x_27 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, x_27), term_l_26);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(w_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_70 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  b_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      z_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_28);
  y_27 = t;
  t = z_27;
  t = v_70(t);
  a_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, a_28), y_27);
  return(t);
}
ATerm fetch_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm l_28 (ATerm t)
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(a_83, _id, t);
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        t = Cons_2_0(_id, l_28, t);
      }
    return(t);
  }
  t = l_28(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  t = fetch_1_0(j_95, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL;
  p_28 = t;
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_26 = ATgetFirst((ATermList) t);
                ATerm u_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_28;
          }
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        t = (ATerm) ATinsert(ATempty, p_28);
      }
    q_28 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), q_28);
    t = p_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_25;
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
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm y_28 = NULL,z_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_28 = ATgetFirst((ATermList) t);
            z_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_28;
        {
          ATerm y_6 (ATerm t)
          {
            t = z_28;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(y_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL;
  d_29 = t;
  t = SSL_explode_term(d_29);
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_29;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  ATerm f_29 (ATerm t)
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_29, t);
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_83(t);
      }
    return(t);
  }
  t = f_29(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL;
  if(match_cons(t, sym__2))
    {
      h_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_29;
  {
    ATerm z_6 (ATerm t)
    {
      t = g_29;
      return(t);
    }
    t = at_end_1_0(z_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(d_27);
    }
  else
    {
      t = c_27;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL;
  s_29 = t;
  if(match_cons(t, sym__2))
    {
      o_29 = ATgetArgument(t, 0);
      p_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_29);
  n_29 = t;
  t = o_29;
  t = m_64(t);
  q_29 = t;
  t = p_29;
  t = n_64(t);
  r_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, q_29, r_29), n_29);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm w_29 = NULL;
  ATerm a_7 (ATerm t)
  {
    ATerm x_29 = NULL;
    x_29 = t;
    t = SSL_explode_string(x_29);
    return(t);
  }
  ATerm b_7 (ATerm t)
  {
    ATerm y_29 = NULL;
    y_29 = t;
    t = SSL_explode_string(y_29);
    return(t);
  }
  t = _2_0(a_7, b_7, t);
  t = conc_0_0(t);
  w_29 = t;
  t = SSL_implode_string(w_29);
  return(t);
}
ATerm debug_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  z_29 = t;
  t = v_97(t);
  a_30 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_29), a_30));
  t = z_29;
  return(t);
}
ATerm map_1_0 (ATerm q_82 (ATerm), ATerm t)
{
  ATerm b_30 (ATerm t)
  {
    ATerm e_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = e_27;
        t = Cons_2_0(q_82, b_30, t);
      }
    return(t);
  }
  t = b_30(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_30 = NULL;
      h_30 = t;
      t = SSL_is_string(h_30);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = i_27;
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(c_7, t);
            ;
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            {
              ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
              l_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_30 = ATgetArgument(t, 0);
                  t = m_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_30 = ATgetArgument(t, 0);
                      t = m_30;
                      {
                        ATerm u_27 = t;
                        int v_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(v_27);
                          }
                        else
                          {
                            t = u_27;
                            {
                              ATerm d_7 (ATerm t)
                              {
                                t = term_w_27;
                                return(t);
                              }
                              t = debug_1_0(d_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm r_30 = NULL,s_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_30 = ATgetArgument(t, 0);
                          n_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_30;
                      t = eval_config_0_0(t);
                      r_30 = t;
                      t = n_30;
                      t = eval_config_0_0(t);
                      s_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_30, s_30);
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
  ATerm v_30 = NULL;
  v_30 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_30);
  {
    ATerm e_7 (ATerm t)
    {
      ATerm w_30 = NULL;
      t = eval_config_0_0(t);
      w_30 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_30, w_30);
      t = w_30;
      return(t);
    }
    t = try_1_0(e_7, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_80(t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_h_28;
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        t = term_i_28;
        return(t);
      }
      t = Option_3_0(f_7, g_7, h_7, t);
      ;
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      {
        ATerm i_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm j_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_j_28;
          return(t);
        }
        ATerm l_7 (ATerm t)
        {
          t = term_k_28;
          return(t);
        }
        t = Option_3_0(i_7, j_7, l_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  if(match_cons(t, sym__3))
    {
      z_30 = ATgetArgument(t, 0);
      a_31 = ATgetArgument(t, 1);
      b_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_30, a_31);
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_28 = ATgetArgument(t, 0);
            ATerm r_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_30, a_31);
        ;
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        t = (ATerm) ATempty;
      }
    c_31 = t;
    t = SSL_table_put(z_30, a_31, (ATerm) ATinsert(CheckATermList(c_31), b_31));
    t = (ATerm) ATmakeAppl(sym__3, z_30, a_31, b_31);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm o_96 (ATerm), ATerm t)
{
  ATerm j_31 = NULL;
  t = term_i_8;
  t = o_96(t);
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_28, term_t_28, j_31);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = l_31;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm q_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_31 = ATgetFirst((ATermList) t);
          n_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_31;
      t = a_0(t);
      t = term_i_8;
      t = b_0(t);
      q_31 = t;
      t = (ATerm) ATinsert(CheckATermList(n_31), q_31);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm s_31 = NULL;
    s_31 = t;
    if(match_string(t, "--help"))
      {
        t = s_31;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = s_31;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = s_31;
          }
      }
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_u_28;
    return(t);
  }
  ATerm o_7 (ATerm t)
  {
    t = term_v_28;
    return(t);
  }
  t = Option_3_0(m_7, n_7, o_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_65 (ATerm), ATerm w_65 (ATerm), ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
  z_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_31 = ATgetFirst((ATermList) t);
      w_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_31);
  t_31 = t;
  t = u_31;
  t = v_65(t);
  x_31 = t;
  t = w_31;
  t = w_65(t);
  y_31 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(y_31), x_31), t_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_96 (ATerm), ATerm t)
{
  ATerm g_32 = NULL;
  g_32 = t;
  {
    ATerm p_7 (ATerm t)
    {
      t = term_w_28;
      t = m_96(t);
      return(t);
    }
    t = try_1_0(p_7, t);
    t = g_32;
    {
      ATerm q_7 (ATerm t)
      {
        ATerm h_32 = NULL;
        h_32 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_32);
        t = (ATerm) ATmakeAppl(sym_Program_1, h_32);
        return(t);
      }
      ATerm r_7 (ATerm t)
      {
        ATerm x_28 = t;
        int a_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_29 = t;
            int c_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(c_29);
              }
            else
              {
                t = b_29;
                t = m_96(t);
                t = Cons_2_0(_id, r_7, t);
              }
            ;
            LocalPopChoice(a_29);
          }
        else
          {
            t = x_28;
            {
              ATerm j_32 = NULL,k_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_32 = ATgetFirst((ATermList) t);
                  k_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_32), (ATerm) ATmakeAppl(sym_Undefined_1, j_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_7, r_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
  v_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = v_32;
  {
    ATerm s_7 (ATerm t)
    {
      ATerm i_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_96(t);
          ;
          LocalPopChoice(j_29);
        }
      else
        {
          t = i_29;
          {
            ATerm k_29 = t;
            int l_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(l_29);
              }
            else
              {
                t = k_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_7, t);
    {
      ATerm t_7 (ATerm t)
      {
        ATerm m_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_33 = NULL;
            c_33 = t;
            {
              ATerm u_29 = t;
              int v_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_33;
                  {
                    ATerm c_30 = t;
                    int d_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_d_26;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(d_30);
                      }
                    else
                      {
                        t = c_30;
                        {
                          ATerm u_7 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(u_7, t);
                        }
                      }
                    t = c_33;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(v_29);
                }
              else
                {
                  t = u_29;
                  t = term_g_28;
                  t = get_config_0_0(t);
                  t = c_33;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(t_29);
          }
        else
          {
            t = m_29;
            {
              ATerm v_7 (ATerm t)
              {
                ATerm w_7 (ATerm t)
                {
                  w_32 = t;
                  return(t);
                }
                t = Undefined_1_0(w_7, t);
                return(t);
              }
              t = option_defined_1_0(v_7, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_32)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_y_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_32)), term_e_30));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(t_7, t);
      x_32 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = x_32;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm t)
{
  ATerm k_7 = NULL;
  t = parse_options_1_0(q_94, t);
  k_7 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), k_7);
  t = k_7;
  t = s_94(t);
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_94, t);
        ;
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        {
          ATerm i_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_94(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_30);
            }
          else
            {
              t = i_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm t)
{
  t = option_wrap_4_0(u_94, default_usage_0_0, _id, v_94, t);
  return(t);
}
ATerm io_Ast_2_abox_0_0 (ATerm t)
{
  t = option_wrap_2_0(ast2abox_options_0_0, ast2abox_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Ast_2_abox_0_0(t);
  return(t);
}
