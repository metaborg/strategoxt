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
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_b_34;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_e_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_i_31;
ATerm term_y_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_w_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_x_23;
ATerm term_t_22;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_l_20;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_d_10;
void init_constant_terms (void)
{
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_12);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__3, term_u_28, term_t_32, term_d_10);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
}
ATerm c_0 (ATerm);
ATerm e_0 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm Instantiate_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm symbol2abox7_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm instantiate_sep_list_1_0 (ATerm c_107 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm collect_p__1_0 (ATerm g_113 (ATerm), ATerm);
ATerm BuildSepList_1_0 (ATerm u_81 (ATerm), ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm symbol2abox6_helper_0_0 (ATerm);
ATerm symbol2abox6_0_0 (ATerm);
ATerm symbol2abox5_0_0 (ATerm);
ATerm symbol2abox3_0_0 (ATerm);
ATerm symbol2abox2_0_0 (ATerm);
ATerm Ind2_0_0 (ATerm);
ATerm repeat_1_0 (ATerm e_99 (ATerm), ATerm);
ATerm index_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm symbol2abox1_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm arg2abox_0_0 (ATerm);
ATerm NZip2_0_0 (ATerm);
ATerm genzip_4_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm p_91 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm nzip_1_0 (ATerm y_91 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm pp_table_get_0_0 (ATerm);
ATerm trm2abox_appl_0_0 (ATerm);
ATerm trm2abox_list_0_0 (ATerm);
ATerm trm2abox_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm c_105 (ATerm), ATerm);
ATerm assert_1_0 (ATerm g_100 (ATerm), ATerm);
ATerm n_12 (ATerm c_12, ATerm);
ATerm r_12 (ATerm f_12, ATerm g_12, ATerm h_12, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm s_84 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm d_100 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_100 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm xtc_io_1_0 (ATerm u_83 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm StoreEntry_0_0 (ATerm);
ATerm selector_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm at_last_1_0 (ATerm k_90 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm unquote_chars_1_0 (ATerm p_98 (ATerm), ATerm);
ATerm S_1_0 (ATerm s_78 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm);
ATerm Arg2_2_0 (ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm);
ATerm Arg_1_0 (ATerm p_78 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm l_4 (ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm topdown_1_0 (ATerm y_84 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm c_86 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm InId_1_0 (ATerm q_106 (ATerm), ATerm);
ATerm w_20 (ATerm q_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm ast2abox_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_82 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm need_help_1_0 (ATerm h_101 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_77 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_77 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_89 (ATerm), ATerm);
ATerm _2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm i_89 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm i_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_103 (ATerm), ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm parse_options_1_0 (ATerm e_103 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm z_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm c_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm q_0 = NULL;
  q_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_0;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm y_0 = ATgetFirst((ATermList) t);
          ATerm c_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_0;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm d_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = d_9;
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(c_0, flat_list_0_0, t);
            ;
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm o_9 = t;
              int p_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL;
                  t = Cons_2_0(e_0, _id, t);
                  n_0 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_0 = ATgetFirst((ATermList) t);
                      {
                        ATerm v_9 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = n_0;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm x_9 = ATgetFirst((ATermList) t);
                      p_0 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, o_0, p_0);
                  {
                    ATerm y_9 = t;
                    int z_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm a_10 = ATgetArgument(t, 0);
                            ATerm b_10 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = o_0;
                        {
                          ATerm m_0 (ATerm t)
                          {
                            t = p_0;
                            return(t);
                          }
                          t = at_end_1_0(m_0, t);
                        }
                        ;
                        LocalPopChoice(z_9);
                      }
                    else
                      {
                        t = y_9;
                        {
                          ATerm r_0 = NULL;
                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_0, p_0));
                          if(match_cons(t, sym__2))
                            {
                              ATerm c_10 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) c_10) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              r_0 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = r_0;
                          t = concat_0_0(t);
                        }
                      }
                    t = flat_list_0_0(t);
                  }
                  ;
                  LocalPopChoice(p_9);
                }
              else
                {
                  t = o_9;
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
  ATerm d_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      g_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
      {
        ATerm j_1 = NULL,n_1 = NULL;
        t = term_d_10;
        t = l_0(t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, j_1);
        t = index_0_0(t);
        n_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_1, n_1);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm p_1 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          g_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_d_10;
      t = l_0(t);
      p_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_1, p_1);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = bottomup_1_0(z_84, t);
    return(t);
  }
  t = SRTS_all(s_0, t);
  t = z_84(t);
  return(t);
}
ATerm symbol2abox7_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym__4))
    {
      ATerm e_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_10) != ATmakeSymbol("seq", 0, ATtrue)))
        _fail(t);
      s_1 = ATgetArgument(t, 1);
      t_1 = ATgetArgument(t, 2);
      u_1 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_1);
  if(match_cons(t, sym__2))
    {
      ATerm f_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_1;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm x_1 = NULL,c_2 = NULL;
      if(match_cons(t, sym__2))
        {
          x_1 = ATgetArgument(t, 0);
          c_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, x_1, s_1, c_2);
      t = arg2abox_0_0(t);
      return(t);
    }
    t = nzip_1_0(t_0, t);
    w_1 = t;
    t = t_1;
    {
      ATerm u_0 (ATerm t)
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_10 = t;
            int e_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_0 (ATerm t)
                {
                  t = w_1;
                  return(t);
                }
                t = Instantiate_1_0(v_0, t);
                ;
                LocalPopChoice(e_11);
              }
            else
              {
                t = k_10;
                t = flat_list_0_0(t);
              }
            ;
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
          }
        return(t);
      }
      t = bottomup_1_0(u_0, t);
    }
  }
  return(t);
}
ATerm w_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        {
          ATerm h_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, w_0, t);
              ;
              LocalPopChoice(i_11);
            }
          else
            {
              t = h_11;
              {
                ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL;
                ATerm x_0 (ATerm t)
                {
                  ATerm q_2 = NULL;
                  ATerm a_1 (ATerm t)
                  {
                    ATerm j_11 = t;
                    int k_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_11 = t;
                        int n_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_1 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_2)), not_null(m_2));
                              return(t);
                            }
                            t = Instantiate_1_0(b_1, t);
                            ;
                            LocalPopChoice(n_11);
                          }
                        else
                          {
                            t = l_11;
                            t = flat_list_0_0(t);
                          }
                        ;
                        LocalPopChoice(k_11);
                      }
                    else
                      {
                        t = j_11;
                      }
                    return(t);
                  }
                  t = term_d_10;
                  t = c_107(t);
                  if(((q_2 != NULL) && (q_2 != t)))
                    _fail(t);
                  else
                    q_2 = t;
                  t = bottomup_1_0(a_1, t);
                  return(t);
                }
                ATerm z_0 (ATerm t)
                {
                  t = not_null(p_2);
                  t = s_2(t);
                  return(t);
                }
                if(((l_2 != NULL) && (l_2 != t)))
                  _fail(t);
                else
                  l_2 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((m_2 != NULL) && (m_2 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      m_2 = ATgetFirst((ATermList) t);
                    if(((n_2 != NULL) && (n_2 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      n_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = not_null(n_2);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((o_2 != NULL) && (o_2 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      o_2 = ATgetFirst((ATermList) t);
                    if(((p_2 != NULL) && (p_2 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      p_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = not_null(l_2);
                t = Cons_2_0(x_0, z_0, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_2(t);
  return(t);
}
ATerm foldr_3_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t)
{
  ATerm o_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_96(t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = o_11;
      {
        ATerm x_2 = NULL,y_2 = NULL,e_3 = NULL,i_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_2 = ATgetFirst((ATermList) t);
            y_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_2;
        t = d_96(t);
        e_3 = t;
        t = y_2;
        t = foldr_3_0(b_96, c_96, d_96, t);
        i_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_3, i_3);
        t = c_96(t);
      }
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 = NULL,f_2 = NULL;
      ATerm f_1 (ATerm t)
      {
        t = not_null(f_2);
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          if(((e_2 != NULL) && (e_2 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_2 = ATgetArgument(t, 0);
          if(((f_2 != NULL) && (f_2 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(e_2);
      t = at_end_1_0(f_1, t);
      ;
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      {
        ATerm u_2 = NULL,v_2 = NULL;
        u_2 = t;
        t = SSL_explode_term(u_2);
        if(match_cons(t, sym__2))
          {
            ATerm d_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            v_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_2;
        t = concat_0_0(t);
      }
    }
  return(t);
}
ATerm collect_p__1_0 (ATerm g_113 (ATerm), ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm e_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 = NULL;
        t = g_113(t);
        v_3 = t;
        t = (ATerm) ATinsert(ATempty, v_3);
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = e_12;
        {
          ATerm m_1 = NULL,y_1 = NULL;
          m_1 = t;
          t = SSL_explode_term(m_1);
          if(match_cons(t, sym__2))
            {
              ATerm j_12 = ATgetArgument(t, 0);
              y_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_1;
          t = foldr_3_0(c_1, e_1, e_4, t);
        }
      }
    return(t);
  }
  t = e_4(t);
  return(t);
}
ATerm BuildSepList_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
  if(match_cons(t, sym__2))
    {
      g_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_4 = NULL;
        t = SSL_mod(g_4, (ATerm) ATmakeInt(2));
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = term_d_10;
        t = u_81(t);
        j_4 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_q_12, j_4, h_4);
        t = arg2abox_0_0(t);
        i_4 = t;
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        {
          ATerm k_4 = NULL;
          t = term_d_10;
          t = u_81(t);
          k_4 = t;
          t = (ATerm) ATmakeAppl(sym__3, term_s_12, k_4, h_4);
          t = arg2abox_0_0(t);
          i_4 = t;
        }
      }
    t = i_4;
  }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = S_1_0(_id, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_u_12;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(t_4, u_4);
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = v_12;
        t = SSL_addr(t_4, u_4);
      }
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm symbol2abox6_helper_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  if(match_cons(t, sym__3))
    {
      p_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
      r_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_4;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        t = p_4;
        return(t);
      }
      t = BuildSepList_1_0(i_1, t);
      return(t);
    }
    t = nzip_1_0(h_1, t);
    s_4 = t;
    {
      ATerm y_12 = t;
      int g_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_4;
          t = collect_p__1_0(k_1, t);
          t = foldr_3_0(l_1, o_1, q_1, t);
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
            _fail(t);
          t = s_4;
          {
            ATerm n_5 (ATerm t)
            {
              ATerm z_4 = NULL,b_5 = NULL,c_5 = NULL;
              z_4 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = z_4;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_5 = ATgetFirst((ATermList) t);
                      c_5 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = c_5;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      ATerm h_13 = t;
                      int i_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_4;
                          ;
                          LocalPopChoice(i_13);
                        }
                      else
                        {
                          t = h_13;
                          {
                            ATerm f_5 = NULL;
                            t = c_5;
                            t = n_5(t);
                            f_5 = t;
                            t = (ATerm) ATinsert(ATinsert(CheckATermList(f_5), b_5), b_5);
                          }
                        }
                    }
                  else
                    {
                      ATerm m_5 = NULL;
                      t = c_5;
                      t = n_5(t);
                      m_5 = t;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(m_5), b_5), b_5);
                    }
                }
              return(t);
            }
            t = n_5(t);
          }
          ;
          LocalPopChoice(g_13);
        }
      else
        {
          t = y_12;
          t = s_4;
        }
      {
        ATerm r_1 (ATerm t)
        {
          t = q_4;
          return(t);
        }
        t = instantiate_sep_list_1_0(r_1, t);
      }
    }
  }
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__4))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
      v_5 = ATgetArgument(t, 2);
      w_5 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_5;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, u_5, v_5, w_5);
      t = symbol2abox6_helper_0_0(t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, u_5, v_5, w_5);
      t = symbol2abox6_helper_0_0(t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,j_7 = NULL;
  z_6 = t;
  if(match_cons(t, sym__4))
    {
      f_7 = ATgetArgument(t, 0);
      g_7 = ATgetArgument(t, 1);
      h_7 = ATgetArgument(t, 2);
      j_7 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = f_7;
  if(match_string(t, "iter"))
    {
      t = z_6;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = z_6;
    }
  t = j_7;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm q_7 = NULL;
      q_7 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_12, g_7, q_7);
      t = arg2abox_0_0(t);
      return(t);
    }
    t = map_1_0(z_1, t);
    y_6 = t;
    t = h_7;
    {
      ATerm a_2 (ATerm t)
      {
        ATerm j_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_13 = t;
            int o_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, y_6);
                  return(t);
                }
                t = Instantiate_1_0(b_2, t);
                ;
                LocalPopChoice(o_13);
              }
            else
              {
                t = n_13;
                t = flat_list_0_0(t);
              }
            ;
            LocalPopChoice(m_13);
          }
        else
          {
            t = j_13;
          }
        return(t);
      }
      t = bottomup_1_0(a_2, t);
    }
  }
  return(t);
}
ATerm symbol2abox3_0_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,b_8 = NULL,c_8 = NULL;
  if(match_cons(t, sym__4))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
      u_7 = ATgetArgument(t, 2);
      {
        ATerm r_13 = ATgetArgument(t, 3);
        if(match_cons(r_13, sym_Some_1))
          {
            b_8 = ATgetArgument(r_13, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_12, t_7, b_8);
  t = arg2abox_0_0(t);
  c_8 = t;
  t = u_7;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm s_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_13 = t;
          int v_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATempty, c_8);
                return(t);
              }
              t = Instantiate_1_0(g_2, t);
              ;
              LocalPopChoice(v_13);
            }
          else
            {
              t = u_13;
              t = flat_list_0_0(t);
            }
          ;
          LocalPopChoice(t_13);
        }
      else
        {
          t = s_13;
        }
      return(t);
    }
    t = bottomup_1_0(d_2, t);
  }
  return(t);
}
ATerm symbol2abox2_0_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,h_8 = NULL,i_8 = NULL,p_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym__4))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
      e_8 = ATgetArgument(t, 2);
      {
        ATerm x_13 = ATgetArgument(t, 3);
        if(match_cons(x_13, sym_alt_2))
          {
            h_8 = ATgetArgument(x_13, 0);
            {
              ATerm y_13 = ATgetArgument(x_13, 1);
              if(((ATgetType(y_13) == AT_LIST) && !(ATisEmpty(y_13))))
                {
                  i_8 = ATgetFirst((ATermList) y_13);
                  {
                    ATerm z_13 = (ATerm) ATgetNext((ATermList) y_13);
                    if(((ATgetType(z_13) != AT_LIST) || !(ATisEmpty(z_13))))
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
  t = (ATerm) ATmakeAppl(sym__3, h_8, d_8, i_8);
  t = arg2abox_0_0(t);
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_8, e_8);
  t = index_0_0(t);
  q_8 = t;
  t = (ATerm) ATinsert(ATempty, q_8);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm c_14 = t;
      int d_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATempty, p_8);
                return(t);
              }
              t = Instantiate_1_0(i_2, t);
              ;
              LocalPopChoice(f_14);
            }
          else
            {
              t = e_14;
              t = flat_list_0_0(t);
            }
          ;
          LocalPopChoice(d_14);
        }
      else
        {
          t = c_14;
        }
      return(t);
    }
    t = bottomup_1_0(h_2, t);
  }
  return(t);
}
ATerm Ind2_0_0 (ATerm t)
{
  ATerm t_8 = NULL,e_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      {
        ATerm g_14 = ATgetArgument(t, 1);
        if(((ATgetType(g_14) == AT_LIST) && !(ATisEmpty(g_14))))
          {
            ATerm k_14 = ATgetFirst((ATermList) g_14);
            e_9 = (ATerm) ATgetNext((ATermList) g_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_8, term_q_12);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, t_8, term_s_12);
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(t_8, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = SSL_subtr(t_8, (ATerm) ATmakeInt(1));
      }
    f_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_9, e_9);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm g_9 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_99(t);
        t = g_9(t);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
      }
    return(t);
  }
  t = g_9(t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm h_9 = NULL;
  t = repeat_1_0(Ind2_0_0, t);
  if(match_cons(t, sym__2))
    {
      ATerm v_14 = ATgetArgument(t, 0);
      if(((ATgetType(v_14) != AT_INT) || (ATgetInt((ATermInt) v_14) != 1)))
        _fail(t);
      {
        ATerm z_14 = ATgetArgument(t, 1);
        if(((ATgetType(z_14) == AT_LIST) && !(ATisEmpty(z_14))))
          {
            h_9 = ATgetFirst((ATermList) z_14);
            {
              ATerm a_15 = (ATerm) ATgetNext((ATermList) z_14);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_9;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_15 = t;
      int g_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Instantiate_1_0(k_2, t);
          ;
          LocalPopChoice(g_15);
        }
      else
        {
          t = d_15;
          t = flat_list_0_0(t);
        }
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm symbol2abox1_0_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym__4))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      ATerm j_15 = ATgetArgument(t, 1);
      i_9 = ATgetArgument(t, 2);
      {
        ATerm m_15 = ATgetArgument(t, 3);
        if(match_cons(m_15, sym_alt_2))
          {
            j_9 = ATgetArgument(m_15, 0);
            {
              ATerm r_15 = ATgetArgument(m_15, 1);
              if(((ATgetType(r_15) != AT_LIST) || !(ATisEmpty(r_15))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_9, i_9);
  t = index_0_0(t);
  k_9 = t;
  t = (ATerm) ATinsert(ATempty, k_9);
  t = bottomup_1_0(j_2, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm arg2abox_0_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__3))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
      s_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_9, (ATerm) ATinsert(ATempty, q_9));
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_15 = ATgetArgument(t, 0);
            ATerm x_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_9;
        {
          ATerm r_2 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, q_9);
            return(t);
          }
          t = at_end_1_0(r_2, t);
        }
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        {
          ATerm f_4 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, r_9, (ATerm) ATinsert(ATempty, q_9)));
          if(match_cons(t, sym__2))
            {
              ATerm y_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_15) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_4;
          t = concat_0_0(t);
        }
      }
    t_9 = t;
    {
      ATerm z_15 = t;
      int a_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_4 = NULL,o_4 = NULL;
          t = pp_table_get_0_0(t);
          if(match_cons(t, sym__2))
            {
              u_9 = ATgetArgument(t, 0);
              w_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_9;
          if(match_cons(t, sym_Path_2))
            {
              ATerm f_16 = ATgetArgument(t, 0);
              n_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_4;
          {
            ATerm t_2 (ATerm t)
            {
              ATerm w_2 (ATerm t)
              {
                ATerm a_3 (ATerm t)
                {
                  if(((o_4 != NULL) && (o_4 != t)))
                    _fail(t);
                  else
                    o_4 = t;
                  return(t);
                }
                t = selector_2_0(_id, a_3, t);
                return(t);
              }
              t = Cons_2_0(w_2, z_2, t);
              return(t);
            }
            t = at_last_1_0(t_2, t);
            t = (ATerm) ATmakeAppl(sym__4, not_null(o_4), t_9, w_9, s_9);
            {
              ATerm g_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = symbol2abox1_0_0(t);
                  ;
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = g_16;
                  {
                    ATerm m_16 = t;
                    int n_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = symbol2abox2_0_0(t);
                        ;
                        LocalPopChoice(n_16);
                      }
                    else
                      {
                        t = m_16;
                        {
                          ATerm o_16 = t;
                          int p_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = symbol2abox3_0_0(t);
                              ;
                              LocalPopChoice(p_16);
                            }
                          else
                            {
                              t = o_16;
                              {
                                ATerm q_16 = t;
                                int r_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym__4))
                                      {
                                        ATerm s_16 = ATgetArgument(t, 0);
                                        ATerm t_16 = ATgetArgument(t, 1);
                                        ATerm u_16 = ATgetArgument(t, 2);
                                        ATerm v_16 = ATgetArgument(t, 3);
                                      }
                                    else
                                      _fail(t);
                                    t = s_9;
                                    if(!(match_cons(t, sym_None_0)))
                                      _fail(t);
                                    t = (ATerm) ATempty;
                                    ;
                                    LocalPopChoice(r_16);
                                  }
                                else
                                  {
                                    t = q_16;
                                    {
                                      ATerm w_16 = t;
                                      int x_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = symbol2abox5_0_0(t);
                                          ;
                                          LocalPopChoice(x_16);
                                        }
                                      else
                                        {
                                          t = w_16;
                                          {
                                            ATerm y_16 = t;
                                            int a_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = symbol2abox6_0_0(t);
                                                ;
                                                LocalPopChoice(a_17);
                                              }
                                            else
                                              {
                                                t = y_16;
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
            }
          }
          ;
          LocalPopChoice(a_16);
        }
      else
        {
          t = z_15;
          t = s_9;
          t = trm2abox_0_0(t);
        }
    }
  }
  return(t);
}
ATerm NZip2_0_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,l_10 = NULL,m_10 = NULL;
  if(match_cons(t, sym__2))
    {
      i_10 = ATgetArgument(t, 0);
      {
        ATerm c_17 = ATgetArgument(t, 1);
        if(((ATgetType(c_17) == AT_LIST) && !(ATisEmpty(c_17))))
          {
            j_10 = ATgetFirst((ATermList) c_17);
            l_10 = (ATerm) ATgetNext((ATermList) c_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_10, term_s_12);
  {
    ATerm e_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(i_10, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = e_17;
        t = SSL_addr(i_10, (ATerm) ATmakeInt(1));
      }
    m_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_10, j_10), (ATerm) ATmakeAppl(sym__2, m_10, l_10));
  }
  return(t);
}
ATerm genzip_4_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm p_91 (ATerm), ATerm t)
{
  ATerm n_10 (ATerm t)
  {
    ATerm i_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_91(t);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = i_17;
        t = n_91(t);
        t = _2_0(p_91, n_10, t);
        t = o_91(t);
      }
    return(t);
  }
  t = n_10(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      ATerm s_17 = ATgetArgument(t, 1);
      if(((ATgetType(s_17) != AT_LIST) || !(ATisEmpty(s_17))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_10), q_10);
  return(t);
}
ATerm nzip_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, p_10);
  t = genzip_4_0(b_3, NZip2_0_0, c_3, y_91, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm v_4 = NULL;
  v_4 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_4), (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue))));
  t = v_4;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
  s_10 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), s_10);
  if(match_cons(t, sym__2))
    {
      t_10 = ATgetArgument(t, 0);
      u_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(d_3, t);
  t = (ATerm) ATmakeAppl(sym__2, t_10, u_10);
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
  v_10 = t;
  t = SSL_explode_term(v_10);
  if(match_cons(t, sym__2))
    {
      w_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_10);
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, w_10)), (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATempty, w_10);
        _fail(t);
      }
    if(match_cons(t, sym__2))
      {
        ATerm w_17 = ATgetArgument(t, 0);
        y_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = x_10;
    {
      ATerm f_3 (ATerm t)
      {
        ATerm a_11 = NULL,b_11 = NULL;
        if(match_cons(t, sym__2))
          {
            a_11 = ATgetArgument(t, 0);
            b_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, a_11, (ATerm)ATinsert(ATempty, w_10), b_11);
        t = arg2abox_0_0(t);
        return(t);
      }
      t = nzip_1_0(f_3, t);
      z_10 = t;
      t = y_10;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm x_17 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_18 = t;
              int e_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_3 (ATerm t)
                  {
                    t = z_10;
                    return(t);
                  }
                  t = Instantiate_1_0(h_3, t);
                  ;
                  LocalPopChoice(e_18);
                }
              else
                {
                  t = d_18;
                  t = flat_list_0_0(t);
                }
              ;
              LocalPopChoice(c_18);
            }
          else
            {
              t = x_17;
            }
          return(t);
        }
        t = bottomup_1_0(g_3, t);
      }
    }
  }
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  t = SSL_explode_term(d_11);
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      ATerm g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_11;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm h_18 = ATgetFirst((ATermList) t);
          ATerm i_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_11;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_5 = NULL,x_5 = NULL;
      x_5 = t;
      t = SSL_is_string(x_5);
      r_5 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, r_5);
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
            i_6 = t;
            t = SSL_is_int(i_6);
            h_6 = t;
            t = SSL_int_to_string(h_6);
            j_6 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, j_6);
            ;
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            {
              ATerm r_18 = t;
              int s_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0_0(t);
                  ;
                  LocalPopChoice(s_18);
                }
              else
                {
                  t = r_18;
                  {
                    ATerm b_19 = t;
                    int c_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0_0(t);
                        ;
                        LocalPopChoice(c_19);
                      }
                    else
                      {
                        t = b_19;
                        {
                          ATerm p_11 = NULL;
                          p_11 = t;
                          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_11), (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue))));
                          t = SSL_exit((ATerm) ATmakeInt(1));
                          t = (ATerm) ATinsert(ATinsert(ATempty, p_11), term_j_19);
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
ATerm WriteToFile_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      r_11 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_11, term_k_19);
  t = open_stream_0_0(t);
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_11, s_11);
  t = c_105(t);
  t = fclose_0_0(t);
  t = s_11;
  return(t);
}
ATerm assert_1_0 (ATerm g_100 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  if(match_cons(t, sym__2))
    {
      u_11 = ATgetArgument(t, 0);
      v_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_100(t);
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_11, u_11, v_11);
  t = table_push_0_0(t);
  {
    ATerm l_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_11, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = l_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_11 = ATgetFirst((ATermList) t);
        y_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_11, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(y_11), (ATerm) ATinsert(CheckATermList(x_11), u_11)));
    t = (ATerm) ATmakeAppl(sym__2, u_11, v_11);
  }
  return(t);
}
ATerm n_12 (ATerm c_12, ATerm t)
{
  t = c_12;
  {
    ATerm t_19 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_19 = ATgetArgument(t, 0);
            ATerm z_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_19;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, c_12, term_k_19);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm r_12 (ATerm f_12, ATerm g_12, ATerm h_12, ATerm t)
{
  t = SSL_open_file(f_12, g_12);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
      {
        ATerm f_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_12(k_12, t);
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = f_20;
            t = r_12(l_12, m_12, k_12, t);
          }
      }
    }
  else
    {
      t = n_12(k_12, t);
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
  ATerm t_12 = NULL;
  t = term_d_10;
  t = new_0_0(t);
  t_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_12, term_l_20);
  t = conc_strings_0_0(t);
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 = NULL;
        w_12 = t;
        t = SSL_access(w_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
      }
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_12 = NULL;
  t = new_file_0_0(t);
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_12, term_k_19);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, z_12, term_d_10);
  t = assert_1_0(j_3, t);
  t = z_12;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      if(match_cons(p_20, sym_Stream_1))
        {
          c_13 = ATgetArgument(p_20, 0);
        }
      else
        _fail(t);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(c_13, d_13);
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_13);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  t = xtc_new_file_0_0(t);
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_13, a_13);
  t = WriteToFile_1_0(k_3, t);
  t = SSL_close_file(b_13);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_13);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  k_13 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_r_20;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          l_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(l_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = s_84(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_7 = NULL;
        t = a_14;
        t = k_0(t);
        k_7 = t;
        {
          ATerm x_20 = t;
          int y_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(y_20);
            }
          else
            {
              t = x_20;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(b_14, k_7);
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_14);
        }
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = s_20;
        {
          ATerm c_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_7 = NULL;
              t = a_14;
              t = k_0(t);
              r_7 = t;
              {
                ATerm f_21 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_21 = t;
                    int j_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(j_21);
                      }
                    else
                      {
                        t = g_21;
                        {
                          ATerm k_21 = t;
                          int m_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(m_21);
                            }
                          else
                            {
                              t = k_21;
                              {
                                ATerm s_7 = NULL;
                                s_7 = t;
                                if((b_14 != t))
                                  {
                                    _fail(t);
                                  }
                                t = s_7;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_21;
                  }
                t = SSL_copy(b_14, r_7);
                t = (ATerm) ATmakeAppl(sym_FILE_1, b_14);
              }
              ;
              LocalPopChoice(e_21);
            }
          else
            {
              t = c_21;
              t = a_14;
              t = k_0(t);
              if((b_14 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_14);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  if(match_cons(t, sym__2))
    {
      h_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_14, i_14);
  {
    ATerm q_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_21 = ATgetArgument(t, 0);
            ATerm b_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_14, i_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_22 = ATgetFirst((ATermList) t);
            y_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_7;
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = q_21;
        t = (ATerm) ATempty;
      }
    j_14 = t;
    t = SSL_table_put(h_14, i_14, j_14);
    t = (ATerm) ATmakeAppl(sym__2, h_14, i_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_100 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  p_14 = t;
  t = d_100(t);
  q_14 = t;
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(q_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_14 = ATgetFirst((ATermList) t);
        r_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(q_14, (ATerm)ATmakeAppl(sym_Scopes_0), r_14);
    t = s_14;
    {
      ATerm l_3 (ATerm t)
      {
        ATerm t_14 = NULL;
        t_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_14, t_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(l_3, t);
      t = p_14;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm t)
{
  ATerm n_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_88(t);
      t = g_88(t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = n_22;
      t = g_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_100 (ATerm), ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  t = c_100(t);
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_14, term_t_22);
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_22 = ATgetArgument(t, 0);
            ATerm a_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = (ATerm) ATempty;
      }
    y_14 = t;
    t = SSL_table_put(x_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(y_14), (ATerm) ATempty));
    t = w_14;
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_15 = NULL;
      l_15 = t;
      t = SSL_remove(l_15);
      ;
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm e_15 = NULL;
  t = begin_scope_1_0(m_3, t);
  {
    ATerm n_3 (ATerm t)
    {
      ATerm f_15 = NULL;
      f_15 = t;
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((e_15 != NULL) && (e_15 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              e_15 = ATgetFirst((ATermList) t);
            {
              ATerm m_23 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(e_15);
        t = map_1_0(o_3, t);
        t = f_15;
        t = end_scope_1_0(p_3, t);
      }
      return(t);
    }
    t = restore_always_2_0(t_83, n_3, t);
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_8 = NULL;
            t = eval_config_0_0(t);
            r_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), r_8);
            t = r_8;
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
          }
      }
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      t = term_x_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_15 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm a_24 = t;
          int b_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_8 = NULL;
              t = eval_config_0_0(t);
              l_8 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), l_8);
              t = l_8;
              ;
              LocalPopChoice(b_24);
            }
          else
            {
              t = a_24;
            }
          n_15 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_15);
        }
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = term_r_20;
      }
    t = u_83(t);
    t = copy_to_1_0(r_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(q_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm p_15 = NULL;
  p_15 = t;
  t = SSL_explode_string(p_15);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm o_15 = NULL;
  t = map_1_0(s_3, t);
  t = concat_0_0(t);
  o_15 = t;
  t = SSL_implode_string(o_15);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      c_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(c_16);
  e_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_16), term_i_24), e_16), term_h_24);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      s_15 = ATgetArgument(t, 0);
      t = s_15;
    }
  else
    {
      ATerm b_16 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          s_15 = ATgetArgument(t, 0);
          t_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_15;
      t = map_1_0(t_3, t);
      t = concat_0_0(t);
      b_16 = t;
      t = (ATerm) ATinsert(CheckATermList(b_16), s_15);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm b_17 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      b_17 = ATgetArgument(t, 0);
      {
        ATerm j_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_17;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm j_16 = NULL,l_16 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      j_16 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, j_16);
    }
  else
    {
      ATerm z_16 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          j_16 = ATgetArgument(t, 0);
          l_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_16;
      t = map_1_0(u_3, t);
      z_16 = t;
      t = (ATerm) ATinsert(CheckATermList(z_16), j_16);
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm s_8 = NULL;
  s_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_8), (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue))));
  t = s_8;
  return(t);
}
ATerm StoreEntry_0_0 (ATerm t)
{
  ATerm d_17 = NULL,f_17 = NULL,h_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      d_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_17;
  t = mk_key_0_0(t);
  h_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), h_17, (ATerm) ATmakeAppl(sym__2, d_17, f_17));
  t = d_17;
  t = path_to_string_0_0(t);
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_17, f_17);
  t = if_verbose1_1_0(w_3, t);
  return(t);
}
ATerm selector_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym_selector_2))
    {
      m_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  l_17 = t;
  t = m_17;
  t = n_78(t);
  o_17 = t;
  t = n_17;
  t = o_78(t);
  p_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, o_17, p_17), l_17);
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm l_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_17 = ATgetFirst((ATermList) t);
          z_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_17;
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
        _fail(t);
      t = z_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_18 = ATgetFirst((ATermList) t);
          b_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_18;
      if(match_int(t, 34))
        {
          t = (ATerm) ATinsert(CheckATermList(b_18), term_q_24);
        }
      else
        {
          if(match_int(t, 92))
            {
              t = (ATerm) ATinsert(CheckATermList(b_18), term_t_24);
            }
          else
            {
              if(match_int(t, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(b_18), term_u_24);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(b_18), term_w_24);
                }
            }
        }
      ;
      LocalPopChoice(p_24);
    }
  else
    {
      t = l_24;
    }
  {
    ATerm x_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(z_24);
      }
    else
      {
        t = x_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
      }
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  ATerm j_18 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_3, t);
        t = k_90(t);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = Cons_2_0(_id, j_18, t);
      }
    return(t);
  }
  t = j_18(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_18 = ATgetFirst((ATermList) t);
      o_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_18;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm d_25 = t;
      int e_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_18;
          ;
          LocalPopChoice(e_25);
        }
      else
        {
          t = d_25;
          t = o_18;
          t = last_0_0(t);
        }
    }
  else
    {
      t = o_18;
      t = last_0_0(t);
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm w_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_25 = ATgetFirst((ATermList) t);
      w_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_18;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm p_98 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_18 = ATgetFirst((ATermList) t);
      {
        ATerm g_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_18;
  t = p_98(t);
  t = t_18;
  t = last_0_0(t);
  t = p_98(t);
  t = t_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_25 = ATgetFirst((ATermList) t);
      v_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_18;
  t = at_last_1_0(y_3, t);
  return(t);
}
ATerm S_1_0 (ATerm s_78 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  a_19 = t;
  if(match_cons(t, sym_S_1))
    {
      y_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_19);
  x_18 = t;
  t = y_18;
  t = s_78(t);
  z_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, z_18), x_18);
  return(t);
}
ATerm SOpt_2_0 (ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  i_19 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_19);
  d_19 = t;
  t = e_19;
  t = e_80(t);
  g_19 = t;
  t = f_19;
  t = f_80(t);
  h_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, g_19, h_19), d_19);
  return(t);
}
ATerm Arg2_2_0 (ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  r_19 = t;
  if(match_cons(t, sym_Arg2_2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_19);
  m_19 = t;
  t = n_19;
  t = q_78(t);
  p_19 = t;
  t = o_19;
  t = r_78(t);
  q_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, p_19, q_19), m_19);
  return(t);
}
ATerm Arg_1_0 (ATerm p_78 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  x_19 = t;
  if(match_cons(t, sym_Arg_1))
    {
      v_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_19);
  u_19 = t;
  t = v_19;
  t = p_78(t);
  w_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, w_19), u_19);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  t = SSL_string_to_int(a_20);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm b_20 = NULL;
  b_20 = t;
  t = SSL_string_to_int(b_20);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  t = SSL_string_to_int(c_20);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,x_8 = NULL,y_8 = NULL;
  x_8 = t;
  t = SSL_explode_string(x_8);
  t = unquote_chars_1_0(d_4, t);
  y_8 = t;
  t = SSL_implode_string(y_8);
  a_9 = t;
  t = SSL_explode_string(a_9);
  t = unescape_chars_0_0(t);
  b_9 = t;
  t = SSL_implode_string(b_9);
  return(t);
}
ATerm d_4 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  t = SSL_string_to_int(d_20);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm i_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1_0(z_3, t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = i_25;
      {
        ATerm n_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Arg2_2_0(a_4, b_4, t);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = n_25;
            {
              ATerm q_25 = t;
              int s_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(s_25);
                }
              else
                {
                  t = q_25;
                  {
                    ATerm v_25 = t;
                    int y_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = S_1_0(c_4, t);
                        ;
                        LocalPopChoice(y_25);
                      }
                    else
                      {
                        t = v_25;
                        t = selector_2_0(l_4, _id, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm y_84 (ATerm), ATerm t)
{
  t = y_84(t);
  {
    ATerm m_4 (ATerm t)
    {
      t = topdown_1_0(y_84, t);
      return(t);
    }
    t = SRTS_all(m_4, t);
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm e_20 (ATerm t)
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_86(t);
        ;
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        t = SRTS_one(e_20, t);
      }
    return(t);
  }
  t = e_20(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  return(t);
}
ATerm w_4 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_26;
      t = get_options_0_0(t);
      t = oncetd_1_0(w_4, t);
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue))));
      t = SSL_exit((ATerm) ATmakeInt(1));
      t = (ATerm) ATinsert(ATempty, term_p_26);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue))));
      t = (ATerm) ATinsert(ATempty, term_r_26);
    }
  return(t);
}
ATerm InId_1_0 (ATerm q_106 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_26) != ATmakeSymbol("in-type", 0, ATtrue)))
        _fail(t);
      g_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_20);
  if(match_cons(t, sym__2))
    {
      h_20 = ATgetArgument(t, 0);
      {
        ATerm v_26 = ATgetArgument(t, 1);
        if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
          {
            i_20 = ATgetFirst((ATermList) v_26);
            {
              ATerm w_26 = (ATerm) ATgetNext((ATermList) v_26);
              if(((ATgetType(w_26) != AT_LIST) || !(ATisEmpty(w_26))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_20;
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_106(t);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = type_failure_0_0(t);
      }
    t = i_20;
  }
  return(t);
}
ATerm w_20 (ATerm q_20, ATerm t)
{
  t = SSL_fclose(q_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  u_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_20 = ATgetArgument(t, 0);
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_20);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = w_20(u_20, t);
          }
      }
    }
  else
    {
      t = w_20(u_20, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_21 = NULL;
  t = SSL_stdin_stream();
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_21 = NULL;
  t = SSL_stdout_stream();
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_21 = NULL;
  t = SSL_stderr_stream();
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_21);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm p_21 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      p_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_21;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  t = SSL_is_string(u_21);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      ATerm e_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_10 = NULL,c_11 = NULL;
        o_10 = t;
        t = SSL_explode_term(o_10);
        if(match_cons(t, sym__2))
          {
            ATerm i_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_27) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_27 = ATgetArgument(t, 1);
              if(((ATgetType(j_27) == AT_LIST) && !(ATisEmpty(j_27))))
                {
                  c_11 = ATgetFirst((ATermList) j_27);
                  {
                    ATerm l_27 = (ATerm) ATgetNext((ATermList) j_27);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_11;
        if(match_cons(t, sym_stderr_0))
          {
            t = c_11;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = c_11;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_11;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = f_27;
        {
          ATerm m_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_21 = NULL,n_21 = NULL,o_21 = NULL;
              t = _2_0(x_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_21 = ATgetArgument(t, 0);
                  n_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_21, n_21);
              o_21 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, o_21);
              ;
              LocalPopChoice(n_27);
            }
          else
            {
              t = m_27;
              {
                ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
                t = _2_0(y_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    r_21 = ATgetArgument(t, 0);
                    s_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(r_21, s_21);
                t_21 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, t_21);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_22 = NULL;
      a_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_22, term_q_27);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm m_11 = NULL;
        m_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_11), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = m_11;
        _fail(t);
      }
    }
  w_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(y_21);
  x_21 = t;
  t = w_21;
  t = fclose_0_0(t);
  t = x_21;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  t = if_verbose1_1_0(d_5, t);
  t = ReadFromFile_0_0(t);
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_27, e_22);
  t = InId_1_0(e_5, t);
  if(match_cons(t, sym_PP_Table_1))
    {
      d_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_22;
  t = reverse_acc_2_0(_id, g_5, t);
  t = map_1_0(h_5, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_12), (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue))));
  t = b_12;
  return(t);
}
ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = topdown_1_0(i_5, t);
  t = StoreEntry_0_0(t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm s_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = s_27;
    }
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)));
  t = c_22;
  t = map_1_0(a_5, t);
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm w_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue)));
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_13 = NULL;
            t = eval_config_0_0(t);
            f_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue)), f_13);
            t = f_13;
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
          }
      }
      ;
      LocalPopChoice(z_27);
    }
  else
    {
      t = w_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = xtc_io_transform_1_0(l_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = trm2abox_0_0(t);
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_22 = NULL;
        h_22 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_28 = ATgetFirst((ATermList) t);
                ATerm h_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_22;
          }
        LocalPopChoice(e_28);
        {
          ATerm k_22 = NULL;
          k_22 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, k_22);
        }
      }
    else
      {
        t = d_28;
      }
  }
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  t = get_config_p_0_0(t);
  t = reverse_acc_2_0(_id, j_5, t);
  t = read_pp_tables_0_0(t);
  t = g_22;
  t = xtc_io_1_0(k_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  l_22 = t;
  t = term_d_10;
  t = whoami_0_0(t);
  m_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), m_22), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = l_22;
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      o_22 = ATgetArgument(t, 0);
      p_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_22;
  {
    ATerm i_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_22);
        {
          ATerm m_28 = t;
          int o_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_13 = NULL;
              t = eval_config_0_0(t);
              p_13 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_22, p_13);
              t = p_13;
              ;
              LocalPopChoice(o_28);
            }
          else
            {
              t = m_28;
            }
        }
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = i_28;
        t = (ATerm) ATempty;
      }
    q_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_22, q_22);
    {
      ATerm p_28 = t;
      int q_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm r_28 = ATgetArgument(t, 0);
              ATerm s_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_22;
          {
            ATerm o_5 (ATerm t)
            {
              t = q_22;
              return(t);
            }
            t = at_end_1_0(o_5, t);
          }
          ;
          LocalPopChoice(q_28);
        }
      else
        {
          t = p_28;
          {
            ATerm u_14 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_22, q_22));
            if(match_cons(t, sym__2))
              {
                ATerm t_28 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_28) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                u_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_14;
            t = concat_0_0(t);
          }
        }
      r_22 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_22, r_22);
      t = (ATerm) ATmakeAppl(sym__3, term_u_28, o_22, r_22);
    }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_24 = NULL;
      t = term_d_10;
      t = j_0(t);
      g_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_28, term_w_28, g_24);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm k_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_24 = ATgetFirst((ATermList) t);
          d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_24 = ATgetFirst((ATermList) t);
          f_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_24;
      t = h_0(t);
      t = e_24;
      t = i_0(t);
      k_24 = t;
      t = (ATerm) ATinsert(CheckATermList(f_24), k_24);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm x_22 = NULL;
  x_22 = t;
  if(match_string(t, "-k"))
    {
      t = x_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_22;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  y_22 = t;
  t = SSL_string_to_int(y_22);
  z_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_22);
  t = y_22;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, q_5, s_5, t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm b_23 = NULL;
  b_23 = t;
  if(match_string(t, "-S"))
    {
      t = b_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_23;
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_y_28;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  t = SSL_string_to_int(c_23);
  d_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_23);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_23);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_29;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_5, z_5, a_6, t);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_6, c_6, d_6, t);
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            t = Option_3_0(e_6, f_6, g_6, t);
          }
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  if(match_cons(t, sym__3))
    {
      r_23 = ATgetArgument(t, 0);
      s_23 = ATgetArgument(t, 1);
      t_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_23, s_23);
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_29 = ATgetArgument(t, 0);
            ATerm o_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_23, s_23);
        ;
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        t = (ATerm) ATempty;
      }
    u_23 = t;
    t = SSL_table_put(r_23, s_23, (ATerm) ATinsert(CheckATermList(u_23), t_23));
    t = (ATerm) ATmakeAppl(sym__3, r_23, s_23, t_23);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_23 = NULL;
      t = term_d_10;
      t = d_0(t);
      i_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_28, term_w_28, i_23);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_23 = ATgetFirst((ATermList) t);
          h_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_23;
      t = a_0(t);
      t = term_d_10;
      t = b_0(t);
      l_23 = t;
      t = (ATerm) ATinsert(CheckATermList(h_23), l_23);
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  if(match_string(t, "-o"))
    {
      t = n_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_23;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm o_23 = NULL;
  o_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), o_23);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_23);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_p_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_6, l_6, m_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  if(match_string(t, "-i"))
    {
      t = m_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_24;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), n_24);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_24);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_6, o_6, p_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_10;
  t = whoami_0_0(t);
  o_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), o_24));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_15 = NULL;
        t = eval_config_0_0(t);
        i_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_15);
        t = i_15;
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_95(t);
      ;
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        ATerm r_24 = NULL,s_24 = NULL,v_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_24 = ATgetFirst((ATermList) t);
            s_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_24;
        t = foldr_2_0(z_95, a_96, t);
        v_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_24, v_24);
        t = a_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_u_12;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm i_16 = NULL,k_16 = NULL;
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(i_16, k_16);
        ;
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = SSL_addr(i_16, k_16);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_24 = NULL,k_15 = NULL,q_15 = NULL;
  t = times_0_0(t);
  k_15 = t;
  t = SSL_explode_term(k_15);
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      q_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_15;
  t = foldr_2_0(q_6, r_6, t);
  y_24 = t;
  t = SSL_TicksToSeconds(y_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
  j_25 = t;
  if(match_cons(t, sym__2))
    {
      k_25 = ATgetArgument(t, 0);
      l_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_25;
        if((k_25 != t))
          {
            _fail(t);
          }
        t = j_25;
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = j_25;
        {
          ATerm c_30 = t;
          int d_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_25, l_25);
              ;
              LocalPopChoice(d_30);
            }
          else
            {
              t = c_30;
              t = SSL_gtr(k_25, l_25);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_25, l_25);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_82 (ATerm), ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_25 = NULL,r_25 = NULL;
      o_25 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_17 = NULL;
            t = eval_config_0_0(t);
            t_17 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_17);
            t = t_17;
            ;
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
          }
        r_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_25, term_s_12);
        t = geq_0_0(t);
        t = o_25;
        t = d_82(t);
      }
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  t = run_time_0_0(t);
  t_25 = t;
  t = term_d_10;
  t = whoami_0_0(t);
  u_25 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), t_25), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), u_25));
  t = (ATerm) ATmakeAppl(sym__2, term_i_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_30), t_25), term_j_30), u_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm l_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(p_30);
    }
  else
    {
      t = l_30;
      {
        ATerm q_30 = t;
        int r_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(r_30);
          }
        else
          {
            t = q_30;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_18 = NULL;
            t = eval_config_0_0(t);
            k_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), k_18);
            t = k_18;
            ;
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
          }
      }
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      t = fetch_1_0(t_6, t);
    }
  t = h_101(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_25 = ATgetFirst((ATermList) t);
      x_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_26 = NULL,c_26 = NULL;
        t = x_25;
        t = g_0(t);
        b_26 = t;
        t = w_25;
        t = f_0(t);
        c_26 = t;
        t = x_25;
        {
          ATerm u_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(b_26), c_26);
            return(t);
          }
          t = reverse_acc_2_0(f_0, u_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_10;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
  g_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_26);
  d_26 = t;
  t = e_26;
  t = m_77(t);
  f_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, f_26), d_26);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_26), term_y_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_20 = NULL;
            t = eval_config_0_0(t);
            k_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_20);
            t = k_20;
            ;
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
          }
      }
      ;
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      t = fetch_1_0(v_6, t);
    }
  t = term_i_31;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, w_6, t);
  t = map_1_0(x_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm n_77 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  n_26 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      l_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_26);
  k_26 = t;
  t = l_26;
  t = n_77(t);
  m_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, m_26), k_26);
  return(t);
}
ATerm fetch_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm q_26 (ATerm t)
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_89, _id, t);
        ;
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        t = Cons_2_0(_id, q_26, t);
      }
    return(t);
  }
  t = q_26(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  s_26 = t;
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_31 = ATgetFirst((ATermList) t);
                ATerm p_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_26;
          }
        ;
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        t = (ATerm) ATinsert(ATempty, s_26);
      }
    t_26 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), t_26);
    t = s_26;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL;
        t = eval_config_0_0(t);
        z_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_20);
        t = z_20;
        ;
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
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
      {
        ATerm z_26 = NULL,a_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_26 = ATgetFirst((ATermList) t);
            a_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_26;
        {
          ATerm a_7 (ATerm t)
          {
            t = a_27;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_7, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_89 (ATerm), ATerm t)
{
  ATerm g_27 (ATerm t)
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_27, t);
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_89(t);
      }
    return(t);
  }
  t = g_27(t);
  return(t);
}
ATerm _2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,t_27 = NULL,u_27 = NULL,x_27 = NULL,c_28 = NULL,g_28 = NULL;
  g_28 = t;
  if(match_cons(t, sym__2))
    {
      t_27 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_28);
  k_27 = t;
  t = t_27;
  t = y_67(t);
  x_27 = t;
  t = u_27;
  t = z_67(t);
  c_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, x_27, c_28), k_27);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  t = SSL_explode_string(z_28);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = SSL_explode_string(a_29);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm n_28 = NULL;
  t = _2_0(b_7, c_7, t);
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_29 = NULL,i_29 = NULL;
        if(match_cons(t, sym__2))
          {
            h_29 = ATgetArgument(t, 0);
            i_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_29;
        {
          ATerm d_7 (ATerm t)
          {
            t = i_29;
            return(t);
          }
          t = at_end_1_0(d_7, t);
        }
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        {
          ATerm h_21 = NULL,i_21 = NULL;
          h_21 = t;
          t = SSL_explode_term(h_21);
          if(match_cons(t, sym__2))
            {
              ATerm c_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              i_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_21;
          t = concat_0_0(t);
        }
      }
    n_28 = t;
    t = SSL_implode_string(n_28);
  }
  return(t);
}
ATerm map_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  ATerm v_29 (ATerm t)
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
        t = Cons_2_0(i_89, v_29, t);
      }
    return(t);
  }
  t = v_29(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_30 = NULL;
      b_30 = t;
      t = SSL_is_string(b_30);
      ;
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_7, t);
            ;
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            {
              ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
              m_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_30 = ATgetArgument(t, 0);
                  t = n_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_30 = ATgetArgument(t, 0);
                      t = n_30;
                      {
                        ATerm p_32 = t;
                        int q_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_30);
                            {
                              ATerm r_32 = t;
                              int s_32 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_25 = NULL;
                                  t = eval_config_0_0(t);
                                  c_25 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_30, c_25);
                                  t = c_25;
                                  ;
                                  LocalPopChoice(s_32);
                                }
                              else
                                {
                                  t = r_32;
                                }
                            }
                            ;
                            LocalPopChoice(q_32);
                          }
                        else
                          {
                            t = p_32;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_30), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = n_30;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_30 = NULL,t_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_30 = ATgetArgument(t, 0);
                          o_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_30;
                      t = eval_config_0_0(t);
                      s_30 = t;
                      t = o_30;
                      t = eval_config_0_0(t);
                      t_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_30, t_30);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_32;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_x_32;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_7, l_7, m_7, t);
      ;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      t = Option_3_0(n_7, o_7, p_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,g_31 = NULL,h_31 = NULL,j_31 = NULL;
  j_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_31 = ATgetFirst((ATermList) t);
      d_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_31);
  b_31 = t;
  t = c_31;
  t = n_72(t);
  g_31 = t;
  t = d_31;
  t = o_72(t);
  h_31 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(h_31), g_31), b_31);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_31);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm w_31 = NULL;
  w_31 = t;
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_33;
        t = f_103(t);
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
      }
    t = w_31;
    {
      ATerm w_7 (ATerm t)
      {
        ATerm f_33 = t;
        int g_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_33 = t;
            int i_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_33);
              }
            else
              {
                t = h_33;
                t = f_103(t);
                t = Cons_2_0(_id, w_7, t);
              }
            ;
            LocalPopChoice(g_33);
          }
        else
          {
            t = f_33;
            {
              ATerm a_32 = NULL,b_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_32 = ATgetFirst((ATermList) t);
                  b_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_32), (ATerm) ATmakeAppl(sym_Undefined_1, a_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_7, w_7, t);
    }
  }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  if(match_string(t, "--help"))
    {
      t = m_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_32;
        }
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_j_33;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm g_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_103 (ATerm), ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
  j_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = j_32;
  {
    ATerm x_7 (ATerm t)
    {
      ATerm l_33 = t;
      int m_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_103(t);
          ;
          LocalPopChoice(m_33);
        }
      else
        {
          t = l_33;
          {
            ATerm n_33 = t;
            int o_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_7, a_8, f_8, t);
                ;
                LocalPopChoice(o_33);
              }
            else
              {
                t = n_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_7, t);
    {
      ATerm p_33 = t;
      int q_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_32 = NULL;
          w_32 = t;
          {
            ATerm r_33 = t;
            int s_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_32;
                {
                  ATerm t_33 = t;
                  int u_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm v_33 = t;
                        int w_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_27 = NULL;
                            t = eval_config_0_0(t);
                            y_27 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), y_27);
                            t = y_27;
                            ;
                            LocalPopChoice(w_33);
                          }
                        else
                          {
                            t = v_33;
                          }
                      }
                      ;
                      LocalPopChoice(u_33);
                    }
                  else
                    {
                      t = t_33;
                      t = fetch_1_0(g_8, t);
                    }
                  t = w_32;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(s_33);
              }
            else
              {
                t = r_33;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm x_33 = t;
                  int y_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_28 = NULL;
                      t = eval_config_0_0(t);
                      j_28 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), j_28);
                      t = j_28;
                      ;
                      LocalPopChoice(y_33);
                    }
                  else
                    {
                      t = x_33;
                    }
                  t = w_32;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(q_33);
        }
      else
        {
          t = p_33;
          {
            ATerm z_33 = t;
            int a_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_8 (ATerm t)
                {
                  ATerm k_8 (ATerm t)
                  {
                    if(((k_32 != NULL) && (k_32 != t)))
                      _fail(t);
                    else
                      k_32 = t;
                    return(t);
                  }
                  t = Undefined_1_0(k_8, t);
                  return(t);
                }
                t = fetch_1_0(j_8, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(k_32)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_i_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_32)), term_b_34));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(a_34);
              }
            else
              {
                t = z_33;
              }
          }
        }
      l_32 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = l_32;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm t)
{
  ATerm z_32 = NULL;
  t = parse_options_1_0(j_101, t);
  z_32 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_32);
  t = z_32;
  t = l_101(t);
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_101, t);
        ;
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
          ATerm e_34 = t;
          int f_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_101(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_34);
            }
          else
            {
              t = e_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
        ATerm i_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(j_34);
          }
        else
          {
            t = i_34;
            {
              ATerm k_34 = t;
              int l_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_8, o_8, u_8, t);
                  ;
                  LocalPopChoice(l_34);
                }
              else
                {
                  t = k_34;
                  {
                    ATerm m_34 = t;
                    int n_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(n_34);
                      }
                    else
                      {
                        t = m_34;
                        {
                          ATerm o_34 = t;
                          int p_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              ;
                              LocalPopChoice(p_34);
                            }
                          else
                            {
                              t = o_34;
                              t = ArgOption_3_0(v_8, w_8, z_8, t);
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
ATerm n_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_34;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm l_28 = NULL;
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_34, (ATerm) ATinsert(ATempty, l_28));
  t = extend_config_0_0(t);
  t = l_28;
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_t_34;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(m_8, default_usage_0_0, _id, ast2abox_0_0, t);
  return(t);
}
