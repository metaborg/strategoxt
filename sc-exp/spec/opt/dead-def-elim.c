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
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_RDefT_4;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Rec_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_p_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_c_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_z_23;
ATerm term_s_23;
ATerm term_f_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_a_22;
ATerm term_i_21;
ATerm term_c_21;
ATerm term_p_20;
ATerm term_f_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_x_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_x_16;
ATerm term_n_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_a_11;
ATerm term_z_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_k_7;
ATerm term_x_6;
ATerm term_v_6;
void init_constant_terms (void)
{
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_18);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__3, term_s_24, term_x_24, term_x_6);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm DefDead_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm DeleteDeadDefinitions_0_0 (ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm override_key_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm DeclareNotDead_0_0 (ATerm);
ATerm DeclareDefDead_0_0 (ATerm);
ATerm DeclareDead_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm q_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm scope_2_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm);
ATerm local_dead_def_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm);
ATerm Let_2_0 (ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm union_1_0 (ATerm v_89 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm);
ATerm crush_3_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm);
ATerm free_vars_3_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm o_96 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm svars_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm Definition_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm);
ATerm diff_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm);
ATerm zip_1_0 (ATerm z_85 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm);
ATerm for_3_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm);
ATerm graph_nodes_undef_roots_3_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm graph_nodes_roots_3_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm);
ATerm assert_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm RegisterDefinition_0_0 (ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm v_66 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm a_67 (ATerm), ATerm);
ATerm _2_0 (ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_104 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm x_102 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm z_105 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm j_102 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm);
ATerm crush_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm j_79 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm x_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm a_84 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm c_109 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm a_109 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm d_106 (ATerm), ATerm);
ATerm dead_def_elim_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm DefDead_0_0 (ATerm t)
{
  ATerm a_2 = NULL,g_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      g_2 = ATgetArgument(t, 0);
      {
        ATerm n_5 = ATgetArgument(t, 1);
      }
      {
        ATerm q_6 = ATgetArgument(t, 2);
      }
      {
        ATerm r_6 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_2, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        {
          ATerm i_0 (ATerm t)
          {
            t = term_v_6;
            return(t);
          }
          t = rewrite_1_0(i_0, t);
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          _fail(t);
        }
        ;
        LocalPopChoice(t_6);
      }
    else
      {
        t = s_6;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_2, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        {
          ATerm k_0 (ATerm t)
          {
            t = term_v_6;
            return(t);
          }
          t = rewrite_1_0(k_0, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm w_6 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_6) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_x_6;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      {
        ATerm c_7 = t;
        int d_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_0 (ATerm t)
            {
              t = filter_1_0(x_93, t);
              return(t);
            }
            t = Cons_2_0(x_93, m_0, t);
            ;
            LocalPopChoice(d_7);
          }
        else
          {
            t = c_7;
            {
              ATerm a_3 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm e_7 = ATgetFirst((ATermList) t);
                  a_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_3;
              t = filter_1_0(x_93, t);
            }
          }
      }
    }
  return(t);
}
ATerm DeleteDeadDefinitions_0_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm o_0 (ATerm t)
    {
      ATerm f_7 = t;
      if((PushChoice() == 0))
        {
          t = DefDead_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_7;
        }
      return(t);
    }
    t = filter_1_0(o_0, t);
    return(t);
  }
  t = Let_2_0(n_0, _id, t);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__3))
    {
      c_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
      e_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(c_3, d_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_7 = ATgetFirst((ATermList) t);
      g_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(c_3, d_3, (ATerm) ATinsert(CheckATermList(g_3), e_3));
  t = (ATerm) ATmakeAppl(sym__3, c_3, d_3, e_3);
  return(t);
}
ATerm override_key_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL;
  if(match_cons(t, sym__2))
    {
      h_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_93(t);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_3, h_3, i_3);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, h_3, i_3);
  return(t);
}
ATerm DeclareNotDead_0_0 (ATerm t)
{
  ATerm k_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm h_7 = ATgetArgument(t, 0);
      if(match_cons(h_7, sym_SVar_1))
        {
          k_3 = ATgetArgument(h_7, 0);
        }
      else
        _fail(t);
      {
        ATerm i_7 = ATgetArgument(t, 1);
      }
      {
        ATerm j_7 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, k_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_k_7);
  {
    ATerm p_0 (ATerm t)
    {
      t = term_v_6;
      return(t);
    }
    t = override_key_1_0(p_0, t);
    t = n_3;
  }
  return(t);
}
ATerm DeclareDefDead_0_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      p_3 = ATgetArgument(t, 0);
      {
        ATerm l_7 = ATgetArgument(t, 1);
      }
      {
        ATerm m_7 = ATgetArgument(t, 2);
      }
      {
        ATerm n_7 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, p_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_p_7);
  {
    ATerm q_0 (ATerm t)
    {
      t = term_v_6;
      return(t);
    }
    t = assert_1_0(q_0, t);
    t = q_3;
  }
  return(t);
}
ATerm DeclareDead_0_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = map_1_0(DeclareDefDead_0_0, t);
    return(t);
  }
  t = Let_2_0(r_0, _id, t);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm t_3 = NULL,v_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_7 = ATgetArgument(t, 0);
            ATerm t_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_3, v_3);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_7 = ATgetFirst((ATermList) t);
            t_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_0;
        ;
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        t = (ATerm) ATempty;
      }
    x_3 = t;
    t = SSL_table_put(t_3, v_3, x_3);
    t = (ATerm) ATmakeAppl(sym__2, t_3, v_3);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,h_4 = NULL,i_4 = NULL;
  d_4 = t;
  t = q_93(t);
  e_4 = t;
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(e_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_4 = ATgetFirst((ATermList) t);
        h_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(e_4, (ATerm)ATmakeAppl(sym_Scopes_0), h_4);
    t = i_4;
    {
      ATerm s_0 (ATerm t)
      {
        ATerm p_4 = NULL;
        p_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_4, p_4);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(s_0, t);
      t = d_4;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t)
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_84(t);
      t = q_84(t);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      t = q_84(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  t = p_93(t);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_4, term_z_7);
  {
    ATerm a_8 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_8 = ATgetArgument(t, 0);
            ATerm d_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(b_8);
      }
    else
      {
        t = a_8;
        t = (ATerm) ATempty;
      }
    a_5 = t;
    t = SSL_table_put(z_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(a_5), (ATerm) ATempty));
    t = y_4;
  }
  return(t);
}
ATerm scope_2_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t)
{
  t = begin_scope_1_0(r_93, t);
  {
    ATerm u_0 (ATerm t)
    {
      t = end_scope_1_0(r_93, t);
      return(t);
    }
    t = restore_always_2_0(s_93, u_0, t);
  }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = term_v_6;
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      ATerm e_8 = t;
      int f_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DeclareDead_0_0(t);
          ;
          LocalPopChoice(f_8);
        }
      else
        {
          t = e_8;
          t = DeclareNotDead_0_0(t);
        }
      return(t);
    }
    t = try_1_0(x_0, t);
    t = SRTS_all(local_dead_def_elim_0_0, t);
    t = try_1_0(DeleteDeadDefinitions_0_0, t);
    return(t);
  }
  t = scope_2_0(v_0, w_0, t);
  return(t);
}
ATerm map_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm g_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_8);
      }
    else
      {
        t = g_8;
        t = Cons_2_0(j_87, o_5, t);
      }
    return(t);
  }
  t = o_5(t);
  return(t);
}
ATerm Rec_2_0 (ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm t)
{
  ATerm p_5 = NULL,s_5 = NULL,t_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
  a_6 = t;
  if(match_cons(t, sym_Rec_2))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_6);
  p_5 = t;
  t = s_5;
  t = a_72(t);
  y_5 = t;
  t = t_5;
  t = b_72(t);
  z_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, y_5, z_5), p_5);
  return(t);
}
ATerm SDefT_4_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,u_6 = NULL,y_6 = NULL,z_6 = NULL,k_8 = NULL,l_8 = NULL,c_9 = NULL;
  c_9 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_6 = ATgetArgument(t, 0);
      m_6 = ATgetArgument(t, 1);
      n_6 = ATgetArgument(t, 2);
      u_6 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_9);
  k_6 = t;
  t = l_6;
  t = v_73(t);
  y_6 = t;
  t = m_6;
  t = w_73(t);
  z_6 = t;
  t = n_6;
  t = x_73(t);
  k_8 = t;
  t = u_6;
  t = y_73(t);
  l_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, y_6, z_6, k_8, l_8), k_6);
  return(t);
}
ATerm SDef_3_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  p_9 = t;
  if(match_cons(t, sym_SDef_3))
    {
      j_9 = ATgetArgument(t, 0);
      k_9 = ATgetArgument(t, 1);
      l_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_9);
  i_9 = t;
  t = j_9;
  t = s_73(t);
  m_9 = t;
  t = k_9;
  t = t_73(t);
  n_9 = t;
  t = l_9;
  t = u_73(t);
  o_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, m_9, n_9, o_9), i_9);
  return(t);
}
ATerm Let_2_0 (ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,w_9 = NULL,y_9 = NULL,a_10 = NULL,c_10 = NULL;
  c_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_10);
  t_9 = t;
  t = u_9;
  t = d_71(t);
  y_9 = t;
  t = w_9;
  t = e_71(t);
  a_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, y_9, a_10), t_9);
  return(t);
}
ATerm sboundin_3_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(n_80, n_80, t);
      ;
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(p_80, p_80, n_80, t);
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            {
              ATerm o_8 = t;
              int p_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(p_80, p_80, p_80, n_80, t);
                  ;
                  LocalPopChoice(p_8);
                }
              else
                {
                  t = o_8;
                  t = Rec_2_0(p_80, n_80, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm g_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
      {
        ATerm r_8 = ATgetArgument(t, 2);
      }
      {
        ATerm s_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = g_10;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm h_10 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      {
        ATerm u_8 = ATgetArgument(t, 2);
      }
      {
        ATerm v_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = h_10;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm l_10 = NULL;
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            l_10 = ATgetArgument(t, 0);
            {
              ATerm y_8 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_8);
        t = l_10;
      }
    else
      {
        t = w_8;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            l_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_10;
      }
    return(t);
  }
  t = map_1_0(y_0, t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm o_10 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm z_8 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
      {
        ATerm a_9 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_10;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm q_10 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      q_10 = ATgetArgument(t, 0);
      {
        ATerm b_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_10;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm v_10 = NULL;
      ATerm d_9 = t;
      int e_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              v_10 = ATgetArgument(t, 0);
              {
                ATerm f_9 = ATgetArgument(t, 1);
              }
              {
                ATerm g_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(e_9);
          t = v_10;
        }
      else
        {
          t = d_9;
          if(match_cons(t, sym_SDefT_4))
            {
              v_10 = ATgetArgument(t, 0);
              {
                ATerm h_9 = ATgetArgument(t, 1);
              }
              {
                ATerm q_9 = ATgetArgument(t, 2);
              }
              {
                ATerm r_9 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = v_10;
        }
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm union_1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm b_11 = NULL,d_11 = NULL;
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11;
  {
    ATerm e_11 (ATerm t)
    {
      ATerm s_9 = t;
      int v_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_11;
          ;
          LocalPopChoice(v_9);
        }
      else
        {
          t = s_9;
          {
            ATerm x_9 = t;
            int z_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_1 (ATerm t)
                {
                  t = b_11;
                  return(t);
                }
                t = HdMember_p__2_0(v_89, b_1, t);
                t = e_11(t);
                ;
                LocalPopChoice(z_9);
              }
            else
              {
                t = x_9;
                t = Cons_2_0(_id, e_11, t);
              }
          }
        }
      return(t);
    }
    t = e_11(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm f_11 = NULL;
    if(match_cons(t, sym__2))
      {
        f_11 = ATgetArgument(t, 0);
        if((f_11 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(c_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm t)
{
  ATerm b_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_92(t);
      ;
      LocalPopChoice(d_10);
    }
  else
    {
      t = b_10;
      {
        ATerm l_11 = NULL,m_11 = NULL,p_11 = NULL,q_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_11 = ATgetFirst((ATermList) t);
            m_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_11;
        t = m_92(t);
        p_11 = t;
        t = m_11;
        t = foldr_3_0(k_92, l_92, m_92, t);
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_11, q_11);
        t = l_92(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL;
  r_11 = t;
  t = SSL_explode_term(r_11);
  if(match_cons(t, sym__2))
    {
      ATerm e_10 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11;
  t = foldr_3_0(i_90, j_90, k_90, t);
  return(t);
}
ATerm free_vars_3_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm o_96 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm z_11 (ATerm t)
  {
    ATerm f_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_96(t);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = f_10;
        {
          ATerm j_10 = t;
          int k_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_11 = NULL,v_11 = NULL;
              t_11 = t;
              t = n_96(t);
              v_11 = t;
              t = t_11;
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = v_11;
                    return(t);
                  }
                  t = split_2_0(z_11, f_1, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm e_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = o_96(d_1, z_11, e_1, t);
                {
                  ATerm g_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(g_1, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(k_10);
            }
          else
            {
              t = j_10;
              {
                ATerm h_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(h_1, union_0_0, z_11, t);
              }
            }
        }
      }
    return(t);
  }
  t = z_11(t);
  return(t);
}
ATerm svars_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm c_12 = NULL;
    if(match_cons(t, sym_SVar_1))
      {
        c_12 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, c_12);
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        {
          ATerm p_10 = t;
          int r_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(r_10);
            }
          else
            {
              t = p_10;
              {
                ATerm s_10 = t;
                int t_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_12 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        e_12 = ATgetArgument(t, 0);
                        {
                          ATerm u_10 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, e_12);
                    ;
                    LocalPopChoice(t_10);
                  }
                else
                  {
                    t = s_10;
                    {
                      ATerm w_10 = t;
                      int x_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(x_10);
                        }
                      else
                        {
                          t = w_10;
                          t = Bind7_0_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(i_1, j_1, sboundin_3_0, t);
  return(t);
}
ATerm rewrite_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,z_0 = NULL;
  o_12 = t;
  t = term_x_6;
  t = v_93(t);
  p_12 = t;
  t = SSL_table_get(p_12, o_12);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_0 = ATgetFirst((ATermList) t);
      {
        ATerm y_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_0;
  return(t);
}
ATerm Definition_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  if(match_cons(t, sym__2))
    {
      q_12 = ATgetArgument(t, 0);
      {
        ATerm z_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_12, (ATerm) ATempty);
  {
    ATerm k_1 (ATerm t)
    {
      t = term_a_11;
      return(t);
    }
    t = rewrite_1_0(k_1, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm c_11 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) c_11) != ATmakeSymbol("c_0", 0, ATtrue)))
          _fail(t);
        r_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_12;
  }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_12 = ATgetFirst((ATermList) t);
      t_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_90(t);
  {
    ATerm n_1 (ATerm t)
    {
      ATerm u_12 = NULL;
      u_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_12, u_12);
      t = z_89(t);
      return(t);
    }
    t = fetch_1_0(n_1, t);
    t = t_12;
  }
  return(t);
}
ATerm diff_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_12;
  {
    ATerm x_12 (ATerm t)
    {
      ATerm g_11 = t;
      int h_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(h_11);
        }
      else
        {
          t = g_11;
          {
            ATerm i_11 = t;
            int j_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_1 (ATerm t)
                {
                  t = v_12;
                  return(t);
                }
                t = HdMember_p__2_0(r_89, o_1, t);
                t = x_12(t);
                ;
                LocalPopChoice(j_11);
              }
            else
              {
                t = i_11;
                t = Cons_2_0(_id, x_12, t);
              }
          }
        }
      return(t);
    }
    t = x_12(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm t)
{
  ATerm y_12 (ATerm t)
  {
    ATerm k_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_85(t);
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = k_11;
        t = v_85(t);
        t = _2_0(x_85, y_12, t);
        t = w_85(t);
      }
    return(t);
  }
  t = y_12(t);
  return(t);
}
ATerm zip_1_0 (ATerm z_85 (ATerm), ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm o_11 = ATgetArgument(t, 0);
        if(((ATgetType(o_11) != AT_LIST) || !(ATisEmpty(o_11))))
          _fail(t);
        {
          ATerm u_11 = ATgetArgument(t, 1);
          if(((ATgetType(u_11) != AT_LIST) || !(ATisEmpty(u_11))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    ATerm z_12 = NULL,c_13 = NULL,e_13 = NULL,f_13 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm w_11 = ATgetArgument(t, 0);
        if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
          {
            z_12 = ATgetFirst((ATermList) w_11);
            e_13 = (ATerm) ATgetNext((ATermList) w_11);
          }
        else
          _fail(t);
        {
          ATerm x_11 = ATgetArgument(t, 1);
          if(((ATgetType(x_11) == AT_LIST) && !(ATisEmpty(x_11))))
            {
              c_13 = ATgetFirst((ATermList) x_11);
              f_13 = (ATerm) ATgetNext((ATermList) x_11);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_12, c_13), (ATerm) ATmakeAppl(sym__2, e_13, f_13));
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    ATerm g_13 = NULL,j_13 = NULL;
    if(match_cons(t, sym__2))
      {
        g_13 = ATgetArgument(t, 0);
        j_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(j_13), g_13);
    return(t);
  }
  t = genzip_4_0(p_1, q_1, r_1, z_85, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_11 = ATgetFirst((ATermList) t);
      if(match_cons(y_11, sym__2))
        {
          k_13 = ATgetArgument(y_11, 0);
          l_13 = ATgetArgument(y_11, 1);
        }
      else
        _fail(t);
      m_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_13);
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_13);
  if(match_cons(t, sym__2))
    {
      if((n_13 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_13, o_13);
  t = zip_1_0(_id, t);
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_13, m_13);
  t = conc_0_0(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm v_13 = NULL;
        v_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_13);
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        ATerm v_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, v_1, t);
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        ATerm d_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              ATerm g_12 = t;
              int h_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_13 = ATgetFirst((ATermList) t);
                      a_14 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = x_13;
                  if(match_cons(t, sym__2))
                    {
                      y_13 = ATgetArgument(t, 0);
                      z_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = z_13;
                  if((y_13 != t))
                    {
                      _fail(t);
                    }
                  t = a_14;
                  ;
                  LocalPopChoice(h_12);
                }
              else
                {
                  t = g_12;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, w_1, t);
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = d_12;
            {
              ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
              if(match_cons(t, sym__2))
                {
                  e_14 = ATgetArgument(t, 0);
                  f_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_14;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_14 = ATgetFirst((ATermList) t);
                  h_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_14), g_14), h_14);
            }
          }
        return(t);
      }
      t = for_3_0(s_1, t_1, u_1, t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm l_14 = NULL;
          if(match_cons(t, sym__2))
            {
              l_14 = ATgetArgument(t, 0);
              if((l_14 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(x_1, t);
      }
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      if(((ATgetType(i_12) == AT_LIST) && !(ATisEmpty(i_12))))
        {
          m_14 = ATgetFirst((ATermList) i_12);
          n_14 = (ATerm) ATgetNext((ATermList) i_12);
        }
      else
        _fail(t);
      o_14 = ATgetArgument(t, 1);
      p_14 = ATgetArgument(t, 2);
      q_14 = ATgetArgument(t, 3);
      r_14 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_14, p_14);
  t = d_110(t);
  s_14 = t;
  t = e_110(t);
  t_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_14, o_14);
  t = diff_0_0(t);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_14, n_14);
  t = conc_0_0(t);
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_14, o_14);
  t = conc_0_0(t);
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_14, s_14, q_14);
  t = f_110(t);
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym__5, v_14, w_14, p_14, x_14, r_14);
  return(t);
}
ATerm while_not_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm t)
{
  ATerm y_14 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_98(t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = t_98(t);
        t = y_14(t);
      }
    return(t);
  }
  t = y_14(t);
  return(t);
}
ATerm for_3_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t)
{
  t = v_98(t);
  t = while_not_2_0(w_98, x_98, t);
  return(t);
}
ATerm graph_nodes_undef_roots_3_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
    if(match_cons(t, sym__3))
      {
        b_15 = ATgetArgument(t, 0);
        c_15 = ATgetArgument(t, 1);
        d_15 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__5, b_15, b_15, c_15, d_15, (ATerm) ATempty);
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm e_15 = NULL,f_15 = NULL;
    if(match_cons(t, sym__5))
      {
        ATerm l_12 = ATgetArgument(t, 0);
        if(((ATgetType(l_12) != AT_LIST) || !(ATisEmpty(l_12))))
          _fail(t);
        {
          ATerm m_12 = ATgetArgument(t, 1);
        }
        {
          ATerm n_12 = ATgetArgument(t, 2);
        }
        e_15 = ATgetArgument(t, 3);
        f_15 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, e_15, f_15);
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(l_109, m_109, n_109, t);
        ;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        {
          ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
          if(match_cons(t, sym__5))
            {
              h_15 = ATgetArgument(t, 0);
              m_15 = ATgetArgument(t, 1);
              n_15 = ATgetArgument(t, 2);
              o_15 = ATgetArgument(t, 3);
              p_15 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = h_15;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_15 = ATgetFirst((ATermList) t);
              j_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, j_15, m_15, n_15, o_15, (ATerm) ATinsert(CheckATermList(p_15), i_15));
        }
      }
    return(t);
  }
  t = for_3_0(y_1, z_1, b_2, t);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t)
{
  ATerm w_15 = NULL;
  t = graph_nodes_undef_roots_3_0(a_110, b_110, c_110, t);
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      {
        ATerm d_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_15;
  return(t);
}
ATerm assert_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_93(t);
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_15, x_15, y_15);
  t = table_push_0_0(t);
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(z_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_16 = ATgetFirst((ATermList) t);
        b_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(z_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(b_16), (ATerm) ATinsert(CheckATermList(a_16), x_15)));
    t = (ATerm) ATmakeAppl(sym__2, x_15, y_15);
  }
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      d_16 = ATgetArgument(t, 0);
      {
        ATerm r_13 = ATgetArgument(t, 1);
      }
      {
        ATerm s_13 = ATgetArgument(t, 2);
      }
      {
        ATerm t_13 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_16, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_u_13, c_16));
  {
    ATerm c_2 (ATerm t)
    {
      t = term_a_11;
      return(t);
    }
    t = assert_1_0(c_2, t);
    t = e_16;
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm f_16 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_w_13), f_16, (ATerm) ATempty);
  {
    ATerm d_2 (ATerm t)
    {
      ATerm g_16 = NULL,h_16 = NULL;
      if(match_cons(t, sym__3))
        {
          ATerm b_14 = ATgetArgument(t, 0);
          g_16 = ATgetArgument(t, 1);
          h_16 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(h_16), g_16);
      return(t);
    }
    t = graph_nodes_roots_3_0(Definition_0_0, svars_0_0, d_2, t);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm v_66 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
  l_16 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      j_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_16);
  i_16 = t;
  t = j_16;
  t = v_66(t);
  k_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, k_16), i_16);
  return(t);
}
ATerm Cons_2_0 (ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  u_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_16 = ATgetFirst((ATermList) t);
      r_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_16);
  p_16 = t;
  t = q_16;
  t = r_66(t);
  s_16 = t;
  t = r_16;
  t = s_66(t);
  t_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(t_16), s_16), p_16);
  return(t);
}
ATerm Specification_1_0 (ATerm a_67 (ATerm), ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  b_17 = t;
  if(match_cons(t, sym_Specification_1))
    {
      z_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_17);
  y_16 = t;
  t = z_16;
  t = a_67(t);
  a_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, a_17), y_16);
  return(t);
}
ATerm _2_0 (ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
  k_17 = t;
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_17);
  f_17 = t;
  t = g_17;
  t = i_65(t);
  i_17 = t;
  t = h_17;
  t = j_65(t);
  j_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, i_17, j_17), f_17);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  o_17 = t;
  t = term_x_6;
  t = whoami_0_0(t);
  p_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), p_17), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = o_17;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm s_17 = NULL,t_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_17 = ATgetFirst((ATermList) t);
            t_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_17;
        {
          ATerm e_2 (ATerm t)
          {
            t = t_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL;
  x_17 = t;
  t = SSL_explode_term(x_17);
  if(match_cons(t, sym__2))
    {
      ATerm i_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_17;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm z_17 (ATerm t)
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_17, t);
        ;
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_87(t);
      }
    return(t);
  }
  t = z_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_18;
  {
    ATerm f_2 (ATerm t)
    {
      t = a_18;
      return(t);
    }
    t = at_end_1_0(f_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm c_18 = NULL;
  ATerm h_2 (ATerm t)
  {
    ATerm d_18 = NULL;
    d_18 = t;
    t = SSL_explode_string(d_18);
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm e_18 = NULL;
    e_18 = t;
    t = SSL_explode_string(e_18);
    return(t);
  }
  t = _2_0(h_2, i_2, t);
  t = conc_0_0(t);
  c_18 = t;
  t = SSL_implode_string(c_18);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_18 = NULL;
      k_18 = t;
      t = SSL_is_string(k_18);
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = g_15;
      {
        ATerm l_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(j_2, t);
            ;
            LocalPopChoice(q_15);
          }
        else
          {
            t = l_15;
            {
              ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
              o_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_18 = ATgetArgument(t, 0);
                  t = p_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_18 = ATgetArgument(t, 0);
                      t = p_18;
                      {
                        ATerm r_15 = t;
                        int s_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_15);
                          }
                        else
                          {
                            t = r_15;
                            {
                              ATerm k_2 (ATerm t)
                              {
                                t = term_t_15;
                                return(t);
                              }
                              t = debug_1_0(k_2, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm u_18 = NULL,v_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_18 = ATgetArgument(t, 0);
                          q_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_18;
                      t = eval_config_0_0(t);
                      u_18 = t;
                      t = q_18;
                      t = eval_config_0_0(t);
                      v_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_18, v_18);
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
  ATerm y_18 = NULL;
  y_18 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_18);
  {
    ATerm l_2 (ATerm t)
    {
      ATerm z_18 = NULL;
      t = eval_config_0_0(t);
      z_18 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_18, z_18);
      t = z_18;
      return(t);
    }
    t = try_1_0(l_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm a_19 = NULL,b_19 = NULL;
    a_19 = t;
    t = term_u_15;
    t = get_config_0_0(t);
    b_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_19, term_v_15);
    t = geq_0_0(t);
    t = a_19;
    t = b_104(t);
    return(t);
  }
  t = try_1_0(m_2, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm m_16 = ATgetArgument(t, 0);
        if(match_cons(m_16, sym_Stream_1))
          {
            c_19 = ATgetArgument(m_16, 0);
          }
        else
          _fail(t);
        d_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(c_19, d_19);
    e_19 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), e_19);
    f_19 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, f_19);
    return(t);
  }
  t = WriteToFile_1_0(n_2, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__2))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_19, term_n_16);
  t = open_stream_0_0(t);
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_19, h_19);
  t = x_102(t);
  t = fclose_0_0(t);
  t = h_19;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm o_16 = ATgetArgument(t, 0);
        if(match_cons(o_16, sym_Stream_1))
          {
            j_19 = ATgetArgument(o_16, 0);
          }
        else
          _fail(t);
        k_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(j_19, k_19);
    l_19 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, l_19);
    return(t);
  }
  t = WriteToFile_1_0(o_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  m_19 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm v_16 = t;
      int w_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                n_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(q_2, t);
          ;
          LocalPopChoice(w_16);
        }
      else
        {
          t = v_16;
          t = term_x_16;
          n_19 = t;
        }
      return(t);
    }
    t = _2_0(p_2, _id, t);
    t = m_19;
    {
      ATerm r_2 (ATerm t)
      {
        ATerm s_2 (ATerm t)
        {
          t = not_null(n_19);
          return(t);
        }
        t = split_2_0(s_2, _id, t);
        return(t);
      }
      t = _2_0(_id, r_2, t);
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              ATerm u_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(u_2, t);
              return(t);
            }
            t = _2_0(t_2, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            t = _2_0(_id, WriteToTextFile_0_0, t);
          }
      }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm z_105 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  o_19 = t;
  t = dtime_0_0(t);
  t = o_19;
  t = z_105(t);
  p_19 = t;
  t = dtime_0_0(t);
  q_19 = t;
  t = p_19;
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_19), (ATerm) ATmakeAppl(sym_Runtime_1, q_19)), s_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_20 (ATerm a_20, ATerm t)
  {
    t = SSL_fclose(a_20);
    return(t);
  }
  ATerm d_20 = NULL,e_20 = NULL;
  e_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_20 = ATgetArgument(t, 0);
      {
        ATerm e_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_20);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = e_17;
            t = g_20(e_20, t);
          }
      }
    }
  else
    {
      t = g_20(e_20, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL;
  h_20 = t;
  t = j_102(t);
  i_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_20), i_20));
  t = h_20;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_20 = NULL;
  t = SSL_stdin_stream();
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_20 = NULL;
  t = SSL_stdout_stream();
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_20 = NULL;
  t = SSL_stderr_stream();
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_20);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_20;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_20;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_20;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_17 = ATgetArgument(t, 0);
      ATerm n_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL,m_1 = NULL;
        l_1 = t;
        t = SSL_explode_term(l_1);
        if(match_cons(t, sym__2))
          {
            ATerm u_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_17) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_17 = ATgetArgument(t, 1);
              if(((ATgetType(v_17) == AT_LIST) && !(ATisEmpty(v_17))))
                {
                  m_1 = ATgetFirst((ATermList) v_17);
                  {
                    ATerm w_17 = (ATerm) ATgetNext((ATermList) v_17);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        {
          ATerm f_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
              ATerm v_2 (ATerm t)
              {
                ATerm t_20 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    t_20 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = t_20;
                return(t);
              }
              t = _2_0(v_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  q_20 = ATgetArgument(t, 0);
                  r_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(q_20, r_20);
              s_20 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, s_20);
              ;
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
              {
                ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
                ATerm w_2 (ATerm t)
                {
                  ATerm x_20 = NULL;
                  x_20 = t;
                  t = SSL_is_string(x_20);
                  return(t);
                }
                t = _2_0(w_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_20 = ATgetArgument(t, 0);
                    v_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(u_20, v_20);
                w_20 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, w_20);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_21 = NULL;
      b_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_21, term_j_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm x_2 (ATerm t)
        {
          t = term_l_18;
          return(t);
        }
        t = debug_1_0(x_2, t);
        _fail(t);
      }
    }
  y_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(a_21);
  z_20 = t;
  t = y_20;
  t = fclose_0_0(t);
  t = z_20;
  return(t);
}
ATerm split_2_0 (ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  d_21 = t;
  t = u_84(t);
  e_21 = t;
  t = d_21;
  t = v_84(t);
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_21, f_21);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL;
  g_21 = t;
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              h_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(y_2, t);
        ;
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        t = term_r_18;
        h_21 = t;
      }
    t = g_21;
    {
      ATerm z_2 (ATerm t)
      {
        t = not_null(h_21);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, z_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm j_21 = NULL;
    j_21 = t;
    if(match_string(t, "-k"))
      {
        t = j_21;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = j_21;
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm k_21 = NULL,l_21 = NULL;
    k_21 = t;
    t = SSL_string_to_int(k_21);
    l_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), l_21);
    t = k_21;
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_s_18;
    return(t);
  }
  t = ArgOption_3_0(b_3, f_3, l_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 (ATerm t)
      {
        ATerm n_21 = NULL;
        n_21 = t;
        if(match_string(t, "-S"))
          {
            t = n_21;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = n_21;
          }
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_t_19;
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        t = term_u_19;
        return(t);
      }
      t = Option_3_0(m_3, o_3, r_3, t);
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = t_18;
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm u_3 (ATerm t)
            {
              ATerm o_21 = NULL,p_21 = NULL;
              o_21 = t;
              t = SSL_string_to_int(o_21);
              p_21 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_21);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, o_21);
              return(t);
            }
            ATerm w_3 (ATerm t)
            {
              t = term_x_19;
              return(t);
            }
            t = ArgOption_3_0(s_3, u_3, w_3, t);
            ;
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            {
              ATerm y_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm z_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_y_19;
                return(t);
              }
              ATerm a_4 (ATerm t)
              {
                t = term_z_19;
                return(t);
              }
              t = Option_3_0(y_3, z_3, a_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
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
  ATerm c_4 (ATerm t)
  {
    ATerm s_21 = NULL;
    s_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_21);
    t = (ATerm) ATmakeAppl(sym_Output_1, s_21);
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_f_20;
    return(t);
  }
  t = ArgOption_3_0(b_4, c_4, f_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm m_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = m_20;
      {
        ATerm g_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm j_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_p_20;
          return(t);
        }
        ATerm k_4 (ATerm t)
        {
          t = term_c_21;
          return(t);
        }
        t = Option_3_0(g_4, j_4, k_4, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  v_21 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = v_21;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm d_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_21 = ATgetFirst((ATermList) t);
          x_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_21 = ATgetFirst((ATermList) t);
          z_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_21;
      t = h_0(t);
      t = y_21;
      t = j_0(t);
      d_22 = t;
      t = (ATerm) ATinsert(CheckATermList(z_21), d_22);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm f_22 = NULL;
    f_22 = t;
    if(match_string(t, "-i"))
      {
        t = f_22;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = f_22;
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    ATerm g_22 = NULL;
    g_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_22);
    t = (ATerm) ATmakeAppl(sym_Input_1, g_22);
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_i_21;
    return(t);
  }
  t = ArgOption_3_0(l_4, m_4, n_4, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = m_21;
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_6;
  t = whoami_0_0(t);
  h_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), h_22));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_22;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_92(t);
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm k_22 = NULL,l_22 = NULL,o_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_22 = ATgetFirst((ATermList) t);
            l_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_22;
        t = foldr_2_0(i_92, j_92, t);
        o_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_22, o_22);
        t = j_92(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  p_22 = t;
  t = SSL_explode_term(p_22);
  if(match_cons(t, sym__2))
    {
      ATerm e_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_22;
  t = foldr_2_0(g_90, h_90, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_22 = NULL;
  t = times_0_0(t);
  {
    ATerm o_4 (ATerm t)
    {
      t = term_x_18;
      return(t);
    }
    ATerm q_4 (ATerm t)
    {
      ATerm s_22 = NULL,t_22 = NULL;
      if(match_cons(t, sym__2))
        {
          s_22 = ATgetArgument(t, 0);
          t_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(s_22, t_22);
            ;
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = SSL_addr(s_22, t_22);
          }
      }
      return(t);
    }
    t = crush_2_0(o_4, q_4, t);
    r_22 = t;
    t = SSL_TicksToSeconds(r_22);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  c_23 = t;
  if(match_cons(t, sym__2))
    {
      d_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_23;
        if((d_23 != t))
          {
            _fail(t);
          }
        t = c_23;
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        t = c_23;
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_23, e_23);
              ;
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              t = SSL_gtr(d_23, e_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_23, e_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm h_23 = NULL,i_23 = NULL;
    h_23 = t;
    t = term_u_15;
    t = get_config_0_0(t);
    i_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_23, term_w_22);
    t = geq_0_0(t);
    t = h_23;
    t = a_104(t);
    return(t);
  }
  t = try_1_0(r_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm k_23 = NULL,l_23 = NULL;
    t = run_time_0_0(t);
    k_23 = t;
    t = term_x_6;
    t = whoami_0_0(t);
    l_23 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), k_23), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), l_23));
    t = (ATerm) ATmakeAppl(sym__2, term_x_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_22), k_23), term_y_22), l_23));
    return(t);
  }
  t = if_verbose1_1_0(s_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm t_4 (ATerm t)
        {
          ATerm g_23 = t;
          int j_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(j_23);
            }
          else
            {
              t = g_23;
              {
                ATerm m_23 = t;
                int n_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(n_23);
                  }
                else
                  {
                    t = m_23;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(t_4, t);
      }
    }
  t = x_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_23 = ATgetFirst((ATermList) t);
      p_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_23 = NULL,u_23 = NULL;
        t = p_23;
        t = g_0(t);
        t_23 = t;
        t = o_23;
        t = f_0(t);
        u_23 = t;
        t = p_23;
        {
          ATerm u_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(t_23), u_23);
            return(t);
          }
          t = reverse_acc_2_0(f_0, u_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_6;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, v_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm j_79 (ATerm), ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  y_23 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_23);
  v_23 = t;
  t = w_23;
  t = j_79(t);
  x_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, x_23), v_23);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm w_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(w_4, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_s_23;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm x_4 (ATerm t)
    {
      ATerm c_24 = NULL;
      c_24 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, c_24), term_z_23);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(x_4, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  g_24 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      e_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_24);
  d_24 = t;
  t = e_24;
  t = k_79(t);
  f_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, f_24), d_24);
  return(t);
}
ATerm fetch_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm k_24 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_87, _id, t);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = Cons_2_0(_id, k_24, t);
      }
    return(t);
  }
  t = k_24(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  t = fetch_1_0(x_107, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  m_24 = t;
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_24 = ATgetFirst((ATermList) t);
                ATerm l_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_24;
          }
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = (ATerm) ATinsert(ATempty, m_24);
      }
    n_24 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), n_24);
    t = m_24;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_22;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_84(t);
      ;
      LocalPopChoice(p_24);
    }
  else
    {
      t = o_24;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_y_24;
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = term_z_24;
        return(t);
      }
      t = Option_3_0(b_5, c_5, d_5, t);
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm e_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_a_25;
          return(t);
        }
        ATerm g_5 (ATerm t)
        {
          t = term_c_25;
          return(t);
        }
        t = Option_3_0(e_5, f_5, g_5, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  if(match_cons(t, sym__3))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
      v_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_24, u_24);
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_25 = ATgetArgument(t, 0);
            ATerm l_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_24, u_24);
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = (ATerm) ATempty;
      }
    w_24 = t;
    t = SSL_table_put(t_24, u_24, (ATerm) ATinsert(CheckATermList(w_24), v_24));
    t = (ATerm) ATmakeAppl(sym__3, t_24, u_24, v_24);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm b_25 = NULL;
  t = term_x_6;
  t = c_109(t);
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_25, term_n_25, b_25);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  d_25 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = d_25;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm i_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_25 = ATgetFirst((ATermList) t);
          f_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_25;
      t = a_0(t);
      t = term_x_6;
      t = b_0(t);
      i_25 = t;
      t = (ATerm) ATinsert(CheckATermList(f_25), i_25);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm k_25 = NULL;
    k_25 = t;
    if(match_string(t, "--help"))
      {
        t = k_25;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = k_25;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = k_25;
          }
      }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_q_25;
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_t_25;
    return(t);
  }
  t = Option_3_0(h_5, i_5, j_5, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  {
    ATerm k_5 (ATerm t)
    {
      t = term_u_25;
      t = a_109(t);
      return(t);
    }
    t = try_1_0(k_5, t);
    t = o_25;
    {
      ATerm l_5 (ATerm t)
      {
        ATerm p_25 = NULL;
        p_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_25);
        t = (ATerm) ATmakeAppl(sym_Program_1, p_25);
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_25 = t;
            int b_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_26);
              }
            else
              {
                t = x_25;
                t = a_109(t);
                t = Cons_2_0(_id, m_5, t);
              }
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            {
              ATerm r_25 = NULL,s_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_25 = ATgetFirst((ATermList) t);
                  s_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_25), (ATerm) ATmakeAppl(sym_Undefined_1, r_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(l_5, m_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = y_25;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm c_26 = t;
      int d_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_108(t);
          ;
          LocalPopChoice(d_26);
        }
      else
        {
          t = c_26;
          {
            ATerm e_26 = t;
            int g_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(g_26);
              }
            else
              {
                t = e_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_5, t);
    {
      ATerm r_5 (ATerm t)
      {
        ATerm h_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_26 = NULL;
            f_26 = t;
            {
              ATerm l_26 = t;
              int m_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_26;
                  {
                    ATerm n_26 = t;
                    int o_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_f_23;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(o_26);
                      }
                    else
                      {
                        t = n_26;
                        {
                          ATerm u_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(u_5, t);
                        }
                      }
                    t = f_26;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(m_26);
                }
              else
                {
                  t = l_26;
                  t = term_x_24;
                  t = get_config_0_0(t);
                  t = f_26;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(k_26);
          }
        else
          {
            t = h_26;
            {
              ATerm w_5 (ATerm t)
              {
                ATerm x_5 (ATerm t)
                {
                  z_25 = t;
                  return(t);
                }
                t = Undefined_1_0(x_5, t);
                return(t);
              }
              t = option_defined_1_0(w_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_25)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_25)), term_p_26));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(r_5, t);
      a_26 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = a_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm t)
{
  ATerm v_5 = NULL;
  t = parse_options_1_0(z_106, t);
  v_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), v_5);
  t = v_5;
  t = b_107(t);
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_107, t);
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        {
          ATerm s_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_26);
            }
          else
            {
              t = s_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_106(t);
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(o_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(b_6, q_106, r_106, c_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm e_6 (ATerm t)
    {
      ATerm i_26 = NULL,j_26 = NULL;
      i_26 = t;
      t = term_a_22;
      t = get_config_0_0(t);
      j_26 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, j_26));
      t = i_26;
      return(t);
    }
    t = if_verbose2_1_0(e_6, t);
    return(t);
  }
  t = iowrap_4_0(i_106, j_106, k_106, d_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm t)
{
  t = iowrap_3_0(g_106, h_106, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm d_106 (ATerm), ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    t = _2_0(_id, d_106, t);
    return(t);
  }
  t = iowrap_2_0(f_6, _fail, t);
  return(t);
}
ATerm dead_def_elim_io_0_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm h_6 (ATerm t)
    {
      ATerm i_6 (ATerm t)
      {
        ATerm j_6 (ATerm t)
        {
          ATerm p_6 (ATerm t)
          {
            t = dead_def_elim_0_0(t);
            t = map_1_0(local_dead_def_elim_0_0, t);
            return(t);
          }
          t = Strategies_1_0(p_6, t);
          return(t);
        }
        ATerm o_6 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(j_6, o_6, t);
        return(t);
      }
      t = Cons_2_0(_id, i_6, t);
      return(t);
    }
    t = Specification_1_0(h_6, t);
    return(t);
  }
  t = iowrap_1_0(g_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = dead_def_elim_io_0_0(t);
  return(t);
}
