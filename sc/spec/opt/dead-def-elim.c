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
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_q_24;
ATerm term_o_24;
ATerm term_z_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_p_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_w_21;
ATerm term_r_21;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_l_20;
ATerm term_y_19;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_u_17;
ATerm term_p_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_p_11;
ATerm term_s_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_d_8;
ATerm term_r_7;
ATerm term_p_7;
void init_constant_terms (void)
{
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__3, term_j_25, term_k_25, term_r_7);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm DefDead_0_0 (ATerm);
ATerm filter_1_0 (ATerm f_94 (ATerm), ATerm);
ATerm DeleteDeadDefinitions_0_0 (ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm override_key_1_0 (ATerm c_94 (ATerm), ATerm);
ATerm DeclareNotDead_0_0 (ATerm);
ATerm DeclareDefDead_0_0 (ATerm);
ATerm DeclareDead_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm y_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm scope_2_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm);
ATerm local_dead_def_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm);
ATerm Let_2_0 (ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm union_1_0 (ATerm d_90 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm);
ATerm crush_3_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm);
ATerm free_vars_3_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm svars_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm d_94 (ATerm), ATerm);
ATerm Definition_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm);
ATerm diff_1_0 (ATerm z_89 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm);
ATerm zip_1_0 (ATerm g_86 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm);
ATerm graph_nodes_undef_roots_3_0 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm);
ATerm graph_nodes_roots_3_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm);
ATerm assert_1_0 (ATerm b_94 (ATerm), ATerm);
ATerm RegisterDefinition_0_0 (ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm c_67 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm h_67 (ATerm), ATerm);
ATerm _2_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_104 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm i_103 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_106 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm u_102 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm q_92 (ATerm), ATerm r_92 (ATerm), ATerm);
ATerm crush_2_0 (ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_104 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm i_107 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm q_79 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm r_79 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm i_108 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm h_84 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm n_109 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm l_109 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm k_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm o_106 (ATerm), ATerm);
ATerm dead_def_elim_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm DefDead_0_0 (ATerm t)
{
  ATerm x_0 = NULL,z_0 = NULL;
  x_0 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_0 = ATgetArgument(t, 0);
      {
        ATerm y_3 = ATgetArgument(t, 1);
      }
      {
        ATerm l_7 = ATgetArgument(t, 2);
      }
      {
        ATerm m_7 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, z_0, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        {
          ATerm i_0 (ATerm t)
          {
            t = term_p_7;
            return(t);
          }
          t = rewrite_1_0(i_0, t);
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          _fail(t);
        }
        ;
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, z_0, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        {
          ATerm k_0 (ATerm t)
          {
            t = term_p_7;
            return(t);
          }
          t = rewrite_1_0(k_0, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm q_7 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_7) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_r_7;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm s_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = s_7;
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_0 (ATerm t)
            {
              t = filter_1_0(f_94, t);
              return(t);
            }
            t = Cons_2_0(f_94, m_0, t);
            ;
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            {
              ATerm j_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_7 = ATgetFirst((ATermList) t);
                  j_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_1;
              t = filter_1_0(f_94, t);
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
      ATerm y_7 = t;
      if((PushChoice() == 0))
        {
          t = DefDead_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_7;
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
  ATerm n_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym__3))
    {
      n_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
      q_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(n_1, p_1);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_7 = ATgetFirst((ATermList) t);
      r_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(n_1, p_1, (ATerm) ATinsert(CheckATermList(r_1), q_1));
  t = (ATerm) ATmakeAppl(sym__3, n_1, p_1, q_1);
  return(t);
}
ATerm override_key_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL,y_1 = NULL;
  if(match_cons(t, sym__2))
    {
      t_1 = ATgetArgument(t, 0);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_94(t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_1, t_1, v_1);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, t_1, v_1);
  return(t);
}
ATerm DeclareNotDead_0_0 (ATerm t)
{
  ATerm a_2 = NULL,g_2 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if(match_cons(a_8, sym_SVar_1))
        {
          a_2 = ATgetArgument(a_8, 0);
        }
      else
        _fail(t);
      {
        ATerm b_8 = ATgetArgument(t, 1);
      }
      {
        ATerm c_8 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, a_2, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_d_8);
  {
    ATerm p_0 (ATerm t)
    {
      t = term_p_7;
      return(t);
    }
    t = override_key_1_0(p_0, t);
    t = g_2;
  }
  return(t);
}
ATerm DeclareDefDead_0_0 (ATerm t)
{
  ATerm h_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      h_2 = ATgetArgument(t, 0);
      {
        ATerm e_8 = ATgetArgument(t, 1);
      }
      {
        ATerm f_8 = ATgetArgument(t, 2);
      }
      {
        ATerm g_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, h_2, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_i_8);
  {
    ATerm q_0 (ATerm t)
    {
      t = term_p_7;
      return(t);
    }
    t = assert_1_0(q_0, t);
    t = m_2;
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
  ATerm u_2 = NULL,w_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      u_2 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_8 = ATgetArgument(t, 0);
            ATerm m_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_2, w_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_8 = ATgetFirst((ATermList) t);
            f_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_1;
        ;
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        t = (ATerm) ATempty;
      }
    x_2 = t;
    t = SSL_table_put(u_2, w_2, x_2);
    t = (ATerm) ATmakeAppl(sym__2, u_2, w_2);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL;
  e_3 = t;
  t = y_93(t);
  g_3 = t;
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(g_3, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_3 = ATgetFirst((ATermList) t);
        h_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(g_3, (ATerm)ATmakeAppl(sym_Scopes_0), h_3);
    t = i_3;
    {
      ATerm s_0 (ATerm t)
      {
        ATerm j_3 = NULL;
        j_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_3, j_3);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(s_0, t);
      t = e_3;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_84(t);
      t = x_84(t);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      t = x_84(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
  p_3 = t;
  t = x_93(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, term_s_8);
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_8 = ATgetArgument(t, 0);
            ATerm w_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_3, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        t = (ATerm) ATempty;
      }
    r_3 = t;
    t = SSL_table_put(q_3, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(r_3), (ATerm) ATempty));
    t = p_3;
  }
  return(t);
}
ATerm scope_2_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t)
{
  t = begin_scope_1_0(z_93, t);
  {
    ATerm t_0 (ATerm t)
    {
      t = end_scope_1_0(z_93, t);
      return(t);
    }
    t = restore_always_2_0(a_94, t_0, t);
  }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    t = term_p_7;
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      ATerm x_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DeclareDead_0_0(t);
          ;
          LocalPopChoice(y_8);
        }
      else
        {
          t = x_8;
          t = DeclareNotDead_0_0(t);
        }
      return(t);
    }
    t = try_1_0(w_0, t);
    t = SRTS_all(local_dead_def_elim_0_0, t);
    t = try_1_0(DeleteDeadDefinitions_0_0, t);
    return(t);
  }
  t = scope_2_0(u_0, v_0, t);
  return(t);
}
ATerm map_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm z_8 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(b_9);
      }
    else
      {
        t = z_8;
        t = Cons_2_0(q_87, z_3, t);
      }
    return(t);
  }
  t = z_3(t);
  return(t);
}
ATerm Rec_2_0 (ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,h_4 = NULL;
  h_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      b_4 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_4);
  a_4 = t;
  t = b_4;
  t = h_72(t);
  d_4 = t;
  t = c_4;
  t = i_72(t);
  e_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, d_4, e_4), a_4);
  return(t);
}
ATerm SDefT_4_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,e_5 = NULL,f_5 = NULL,m_5 = NULL;
  m_5 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
      y_4 = ATgetArgument(t, 2);
      z_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_5);
  r_4 = t;
  t = s_4;
  t = c_74(t);
  a_5 = t;
  t = t_4;
  t = d_74(t);
  b_5 = t;
  t = y_4;
  t = e_74(t);
  e_5 = t;
  t = z_4;
  t = f_74(t);
  f_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, a_5, b_5, e_5, f_5), r_4);
  return(t);
}
ATerm SDef_3_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  ATerm p_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
  b_6 = t;
  if(match_cons(t, sym_SDef_3))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
      t_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_6);
  p_5 = t;
  t = r_5;
  t = z_73(t);
  y_5 = t;
  t = s_5;
  t = a_74(t);
  z_5 = t;
  t = t_5;
  t = b_74(t);
  a_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, y_5, z_5, a_6), p_5);
  return(t);
}
ATerm Let_2_0 (ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,u_6 = NULL;
  u_6 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_6 = ATgetArgument(t, 0);
      m_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_6);
  k_6 = t;
  t = l_6;
  t = k_71(t);
  n_6 = t;
  t = m_6;
  t = l_71(t);
  o_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, n_6, o_6), k_6);
  return(t);
}
ATerm sboundin_3_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(u_80, u_80, t);
      ;
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(w_80, w_80, u_80, t);
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            {
              ATerm g_9 = t;
              int h_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(w_80, w_80, w_80, u_80, t);
                  ;
                  LocalPopChoice(h_9);
                }
              else
                {
                  t = g_9;
                  t = Rec_2_0(w_80, u_80, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm e_7 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm j_9 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
      {
        ATerm l_9 = ATgetArgument(t, 2);
      }
      {
        ATerm m_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = e_7;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm t_7 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm n_9 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
      {
        ATerm o_9 = ATgetArgument(t, 2);
      }
      {
        ATerm q_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = t_7;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm a_9 = NULL;
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            a_9 = ATgetArgument(t, 0);
            {
              ATerm t_9 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_9);
        t = a_9;
      }
    else
      {
        t = r_9;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            a_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_9;
      }
    return(t);
  }
  t = map_1_0(y_0, t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm i_9 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm u_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
      {
        ATerm v_9 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = i_9;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm k_9 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      k_9 = ATgetArgument(t, 0);
      {
        ATerm w_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = k_9;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm p_9 = NULL;
      ATerm x_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              p_9 = ATgetArgument(t, 0);
              {
                ATerm z_9 = ATgetArgument(t, 1);
              }
              {
                ATerm a_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(y_9);
          t = p_9;
        }
      else
        {
          t = x_9;
          if(match_cons(t, sym_SDefT_4))
            {
              p_9 = ATgetArgument(t, 0);
              {
                ATerm b_10 = ATgetArgument(t, 1);
              }
              {
                ATerm c_10 = ATgetArgument(t, 2);
              }
              {
                ATerm d_10 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = p_9;
        }
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm union_1_0 (ATerm d_90 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10;
  {
    ATerm k_10 (ATerm t)
    {
      ATerm e_10 = t;
      int h_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_10;
          ;
          LocalPopChoice(h_10);
        }
      else
        {
          t = e_10;
          {
            ATerm i_10 = t;
            int j_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_1 (ATerm t)
                {
                  t = f_10;
                  return(t);
                }
                t = HdMember_p__2_0(d_90, b_1, t);
                t = k_10(t);
                ;
                LocalPopChoice(j_10);
              }
            else
              {
                t = i_10;
                t = Cons_2_0(_id, k_10, t);
              }
          }
        }
      return(t);
    }
    t = k_10(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm l_10 = NULL;
    if(match_cons(t, sym__2))
      {
        l_10 = ATgetArgument(t, 0);
        if((l_10 != ATgetArgument(t, 1)))
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
ATerm foldr_3_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_92(t);
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm r_10 = NULL,v_10 = NULL,y_10 = NULL,z_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_10 = ATgetFirst((ATermList) t);
            v_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_10;
        t = u_92(t);
        y_10 = t;
        t = v_10;
        t = foldr_3_0(s_92, t_92, u_92, t);
        z_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_10, z_10);
        t = t_92(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  a_11 = t;
  t = SSL_explode_term(a_11);
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11;
  t = foldr_3_0(q_90, r_90, s_90, t);
  return(t);
}
ATerm free_vars_3_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_11 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_96(t);
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        {
          ATerm s_10 = t;
          int t_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_11 = NULL,f_11 = NULL;
              d_11 = t;
              t = v_96(t);
              f_11 = t;
              t = d_11;
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm g_1 (ATerm t)
                  {
                    t = f_11;
                    return(t);
                  }
                  t = split_2_0(g_11, g_1, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm e_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = w_96(d_1, g_11, e_1, t);
                {
                  ATerm h_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(h_1, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(t_10);
            }
          else
            {
              t = s_10;
              {
                ATerm i_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(i_1, union_0_0, g_11, t);
              }
            }
        }
      }
    return(t);
  }
  t = g_11(t);
  return(t);
}
ATerm svars_0_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm l_11 = NULL;
    if(match_cons(t, sym_SVar_1))
      {
        l_11 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, l_11);
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm u_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = u_10;
        {
          ATerm x_10 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(c_11);
            }
          else
            {
              t = x_10;
              {
                ATerm e_11 = t;
                int h_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_11 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        n_11 = ATgetArgument(t, 0);
                        {
                          ATerm i_11 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, n_11);
                    ;
                    LocalPopChoice(h_11);
                  }
                else
                  {
                    t = e_11;
                    {
                      ATerm j_11 = t;
                      int k_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(k_11);
                        }
                      else
                        {
                          t = j_11;
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
  t = free_vars_3_0(k_1, l_1, sboundin_3_0, t);
  return(t);
}
ATerm rewrite_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,u_1 = NULL;
  t_11 = t;
  t = term_r_7;
  t = d_94(t);
  u_11 = t;
  t = SSL_table_get(u_11, t_11);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_1 = ATgetFirst((ATermList) t);
      {
        ATerm m_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_1;
  return(t);
}
ATerm Definition_0_0 (ATerm t)
{
  ATerm v_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym__2))
    {
      v_11 = ATgetArgument(t, 0);
      {
        ATerm o_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_11, (ATerm) ATempty);
  {
    ATerm m_1 (ATerm t)
    {
      t = term_p_11;
      return(t);
    }
    t = rewrite_1_0(m_1, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm q_11 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) q_11) != ATmakeSymbol("b_0", 0, ATtrue)))
          _fail(t);
        z_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = z_11;
  }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,c_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_12 = ATgetFirst((ATermList) t);
      c_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_90(t);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm d_12 = NULL;
      d_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_12, d_12);
      t = h_90(t);
      return(t);
    }
    t = fetch_1_0(o_1, t);
    t = c_12;
  }
  return(t);
}
ATerm diff_1_0 (ATerm z_89 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      f_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12;
  {
    ATerm j_12 (ATerm t)
    {
      ATerm r_11 = t;
      int s_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(s_11);
        }
      else
        {
          t = r_11;
          {
            ATerm w_11 = t;
            int x_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_1 (ATerm t)
                {
                  t = e_12;
                  return(t);
                }
                t = HdMember_p__2_0(z_89, s_1, t);
                t = j_12(t);
                ;
                LocalPopChoice(x_11);
              }
            else
              {
                t = w_11;
                t = Cons_2_0(_id, j_12, t);
              }
          }
        }
      return(t);
    }
    t = j_12(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t)
{
  ATerm k_12 (ATerm t)
  {
    ATerm y_11 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_86(t);
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = y_11;
        t = c_86(t);
        t = _2_0(e_86, k_12, t);
        t = d_86(t);
      }
    return(t);
  }
  t = k_12(t);
  return(t);
}
ATerm zip_1_0 (ATerm g_86 (ATerm), ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm g_12 = ATgetArgument(t, 0);
        if(((ATgetType(g_12) != AT_LIST) || !(ATisEmpty(g_12))))
          _fail(t);
        {
          ATerm h_12 = ATgetArgument(t, 1);
          if(((ATgetType(h_12) != AT_LIST) || !(ATisEmpty(h_12))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm i_12 = ATgetArgument(t, 0);
        if(((ATgetType(i_12) == AT_LIST) && !(ATisEmpty(i_12))))
          {
            m_12 = ATgetFirst((ATermList) i_12);
            o_12 = (ATerm) ATgetNext((ATermList) i_12);
          }
        else
          _fail(t);
        {
          ATerm l_12 = ATgetArgument(t, 1);
          if(((ATgetType(l_12) == AT_LIST) && !(ATisEmpty(l_12))))
            {
              n_12 = ATgetFirst((ATermList) l_12);
              p_12 = (ATerm) ATgetNext((ATermList) l_12);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_12, n_12), (ATerm) ATmakeAppl(sym__2, o_12, p_12));
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm q_12 = NULL,r_12 = NULL;
    if(match_cons(t, sym__2))
      {
        q_12 = ATgetArgument(t, 0);
        r_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(r_12), q_12);
    return(t);
  }
  t = genzip_4_0(w_1, x_1, z_1, g_86, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_12 = ATgetFirst((ATermList) t);
      if(match_cons(z_12, sym__2))
        {
          s_12 = ATgetArgument(z_12, 0);
          t_12 = ATgetArgument(z_12, 1);
        }
      else
        _fail(t);
      u_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_12);
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      w_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_12);
  if(match_cons(t, sym__2))
    {
      if((v_12 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_12, w_12);
  t = zip_1_0(_id, t);
  y_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_12, u_12);
  t = conc_0_0(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm g_13 = NULL;
        g_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, g_13);
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        ATerm e_2 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, e_2, t);
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 (ATerm t)
            {
              ATerm e_13 = t;
              int f_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      k_13 = ATgetFirst((ATermList) t);
                      n_13 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = k_13;
                  if(match_cons(t, sym__2))
                    {
                      l_13 = ATgetArgument(t, 0);
                      m_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_13;
                  if((l_13 != t))
                    {
                      _fail(t);
                    }
                  t = n_13;
                  ;
                  LocalPopChoice(f_13);
                }
              else
                {
                  t = e_13;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, f_2, t);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            {
              ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
              if(match_cons(t, sym__2))
                {
                  r_13 = ATgetArgument(t, 0);
                  s_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_13;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_13 = ATgetFirst((ATermList) t);
                  u_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_13), t_13), u_13);
            }
          }
        return(t);
      }
      t = for_3_0(b_2, c_2, d_2, t);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
        ATerm i_2 (ATerm t)
        {
          ATerm y_13 = NULL;
          if(match_cons(t, sym__2))
            {
              y_13 = ATgetArgument(t, 0);
              if((y_13 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(i_2, t);
      }
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm h_13 = ATgetArgument(t, 0);
      if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
        {
          z_13 = ATgetFirst((ATermList) h_13);
          a_14 = (ATerm) ATgetNext((ATermList) h_13);
        }
      else
        _fail(t);
      b_14 = ATgetArgument(t, 1);
      c_14 = ATgetArgument(t, 2);
      d_14 = ATgetArgument(t, 3);
      e_14 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_13, c_14);
  t = o_110(t);
  f_14 = t;
  t = p_110(t);
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_14, b_14);
  t = diff_0_0(t);
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_14, a_14);
  t = conc_0_0(t);
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_14, b_14);
  t = conc_0_0(t);
  j_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_13, f_14, d_14);
  t = q_110(t);
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym__5, i_14, j_14, c_14, k_14, e_14);
  return(t);
}
ATerm while_not_2_0 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm t)
{
  ATerm l_14 (ATerm t)
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_99(t);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = b_99(t);
        t = l_14(t);
      }
    return(t);
  }
  t = l_14(t);
  return(t);
}
ATerm for_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  t = d_99(t);
  t = while_not_2_0(e_99, f_99, t);
  return(t);
}
ATerm graph_nodes_undef_roots_3_0 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
    if(match_cons(t, sym__3))
      {
        o_14 = ATgetArgument(t, 0);
        p_14 = ATgetArgument(t, 1);
        q_14 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__5, o_14, o_14, p_14, q_14, (ATerm) ATempty);
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm r_14 = NULL,s_14 = NULL;
    if(match_cons(t, sym__5))
      {
        ATerm o_13 = ATgetArgument(t, 0);
        if(((ATgetType(o_13) != AT_LIST) || !(ATisEmpty(o_13))))
          _fail(t);
        {
          ATerm p_13 = ATgetArgument(t, 1);
        }
        {
          ATerm q_13 = ATgetArgument(t, 2);
        }
        r_14 = ATgetArgument(t, 3);
        s_14 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, r_14, s_14);
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(w_109, x_109, y_109, t);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
          if(match_cons(t, sym__5))
            {
              u_14 = ATgetArgument(t, 0);
              x_14 = ATgetArgument(t, 1);
              y_14 = ATgetArgument(t, 2);
              z_14 = ATgetArgument(t, 3);
              a_15 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = u_14;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_14 = ATgetFirst((ATermList) t);
              w_14 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, w_14, x_14, y_14, z_14, (ATerm) ATinsert(CheckATermList(a_15), v_14));
        }
      }
    return(t);
  }
  t = for_3_0(j_2, k_2, o_2, t);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t)
{
  ATerm h_15 = NULL;
  t = graph_nodes_undef_roots_3_0(l_110, m_110, n_110, t);
  if(match_cons(t, sym__2))
    {
      h_15 = ATgetArgument(t, 0);
      {
        ATerm x_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_15;
  return(t);
}
ATerm assert_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  if(match_cons(t, sym__2))
    {
      i_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_94(t);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_15, i_15, j_15);
  t = table_push_0_0(t);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(m_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_15 = ATgetFirst((ATermList) t);
        o_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(m_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_15), (ATerm) ATinsert(CheckATermList(n_15), i_15)));
    t = (ATerm) ATmakeAppl(sym__2, i_15, j_15);
  }
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      q_15 = ATgetArgument(t, 0);
      {
        ATerm t_14 = ATgetArgument(t, 1);
      }
      {
        ATerm b_15 = ATgetArgument(t, 2);
      }
      {
        ATerm c_15 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_15, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_d_15, p_15));
  {
    ATerm p_2 (ATerm t)
    {
      t = term_p_11;
      return(t);
    }
    t = assert_1_0(p_2, t);
    t = r_15;
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm s_15 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_e_15), s_15, (ATerm) ATempty);
  {
    ATerm q_2 (ATerm t)
    {
      ATerm t_15 = NULL,u_15 = NULL;
      if(match_cons(t, sym__3))
        {
          ATerm f_15 = ATgetArgument(t, 0);
          t_15 = ATgetArgument(t, 1);
          u_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(u_15), t_15);
      return(t);
    }
    t = graph_nodes_roots_3_0(Definition_0_0, svars_0_0, q_2, t);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm c_67 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
  y_15 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_15);
  v_15 = t;
  t = w_15;
  t = c_67(t);
  x_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, x_15), v_15);
  return(t);
}
ATerm Cons_2_0 (ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  g_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_16 = ATgetFirst((ATermList) t);
      d_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_16);
  b_16 = t;
  t = c_16;
  t = y_66(t);
  e_16 = t;
  t = d_16;
  t = z_66(t);
  f_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_16), e_16), b_16);
  return(t);
}
ATerm Specification_1_0 (ATerm h_67 (ATerm), ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  m_16 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_16);
  j_16 = t;
  t = k_16;
  t = h_67(t);
  l_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, l_16), j_16);
  return(t);
}
ATerm _2_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  u_16 = t;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_16);
  p_16 = t;
  t = q_16;
  t = p_65(t);
  s_16 = t;
  t = r_16;
  t = q_65(t);
  t_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, s_16, t_16), p_16);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  x_16 = t;
  t = term_r_7;
  t = whoami_0_0(t);
  y_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), y_16), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = x_16;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = g_15;
      {
        ATerm b_17 = NULL,c_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_17 = ATgetFirst((ATermList) t);
            c_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_17;
        {
          ATerm r_2 (ATerm t)
          {
            t = c_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  g_17 = t;
  t = SSL_explode_term(g_17);
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_17;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm i_17 (ATerm t)
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_17, t);
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_88(t);
      }
    return(t);
  }
  t = i_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_17;
  {
    ATerm s_2 (ATerm t)
    {
      t = j_17;
      return(t);
    }
    t = at_end_1_0(s_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm l_17 = NULL;
  ATerm t_2 (ATerm t)
  {
    ATerm m_17 = NULL;
    m_17 = t;
    t = SSL_explode_string(m_17);
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm n_17 = NULL;
    n_17 = t;
    t = SSL_explode_string(n_17);
    return(t);
  }
  t = _2_0(t_2, v_2, t);
  t = conc_0_0(t);
  l_17 = t;
  t = SSL_implode_string(l_17);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_17 = NULL;
      t_17 = t;
      t = SSL_is_string(t_17);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(y_2, t);
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            {
              ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
              x_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_17 = ATgetArgument(t, 0);
                  t = y_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_17 = ATgetArgument(t, 0);
                      t = y_17;
                      {
                        ATerm z_16 = t;
                        int a_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_17);
                          }
                        else
                          {
                            t = z_16;
                            {
                              ATerm z_2 (ATerm t)
                              {
                                t = term_d_17;
                                return(t);
                              }
                              t = debug_1_0(z_2, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm d_18 = NULL,e_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_17 = ATgetArgument(t, 0);
                          z_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_17;
                      t = eval_config_0_0(t);
                      d_18 = t;
                      t = z_17;
                      t = eval_config_0_0(t);
                      e_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_18, e_18);
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
  ATerm h_18 = NULL;
  h_18 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_18);
  {
    ATerm a_3 (ATerm t)
    {
      ATerm i_18 = NULL;
      t = eval_config_0_0(t);
      i_18 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_18, i_18);
      t = i_18;
      return(t);
    }
    t = try_1_0(a_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm j_18 = NULL,k_18 = NULL;
    j_18 = t;
    t = term_e_17;
    t = get_config_0_0(t);
    k_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_18, term_f_17);
    t = geq_0_0(t);
    t = j_18;
    t = m_104(t);
    return(t);
  }
  t = try_1_0(b_3, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm o_17 = ATgetArgument(t, 0);
        if(match_cons(o_17, sym_Stream_1))
          {
            l_18 = ATgetArgument(o_17, 0);
          }
        else
          _fail(t);
        m_18 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(l_18, m_18);
    n_18 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), n_18);
    o_18 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, o_18);
    return(t);
  }
  t = WriteToFile_1_0(c_3, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm i_103 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_18, term_p_17);
  t = open_stream_0_0(t);
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_18, q_18);
  t = i_103(t);
  t = fclose_0_0(t);
  t = q_18;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm q_17 = ATgetArgument(t, 0);
        if(match_cons(q_17, sym_Stream_1))
          {
            s_18 = ATgetArgument(q_17, 0);
          }
        else
          _fail(t);
        t_18 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(s_18, t_18);
    u_18 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, u_18);
    return(t);
  }
  t = WriteToFile_1_0(d_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  v_18 = t;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm r_17 = t;
      int s_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                w_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(k_3, t);
          ;
          LocalPopChoice(s_17);
        }
      else
        {
          t = r_17;
          t = term_u_17;
          w_18 = t;
        }
      return(t);
    }
    t = _2_0(f_3, _id, t);
    t = v_18;
    {
      ATerm l_3 (ATerm t)
      {
        ATerm m_3 (ATerm t)
        {
          t = not_null(w_18);
          return(t);
        }
        t = split_2_0(m_3, _id, t);
        return(t);
      }
      t = _2_0(_id, l_3, t);
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_3 (ATerm t)
            {
              ATerm o_3 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(o_3, t);
              return(t);
            }
            t = _2_0(n_3, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
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
ATerm apply_strategy_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  x_18 = t;
  t = dtime_0_0(t);
  t = x_18;
  t = k_106(t);
  y_18 = t;
  t = dtime_0_0(t);
  z_18 = t;
  t = y_18;
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_19), (ATerm) ATmakeAppl(sym_Runtime_1, z_18)), b_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_19 (ATerm j_19, ATerm t)
  {
    t = SSL_fclose(j_19);
    return(t);
  }
  ATerm m_19 = NULL,n_19 = NULL;
  n_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_19 = ATgetArgument(t, 0);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_19);
            ;
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            t = p_19(n_19, t);
          }
      }
    }
  else
    {
      t = p_19(n_19, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  q_19 = t;
  t = u_102(t);
  r_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_19), r_19));
  t = q_19;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_19 = NULL;
  t = SSL_stdin_stream();
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_19);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_19 = NULL;
  t = SSL_stdout_stream();
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_19 = NULL;
  t = SSL_stderr_stream();
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_19);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_18 = ATgetArgument(t, 0);
      ATerm f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_18 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_2 = NULL,n_2 = NULL;
        l_2 = t;
        t = SSL_explode_term(l_2);
        if(match_cons(t, sym__2))
          {
            ATerm d_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_19 = ATgetArgument(t, 1);
              if(((ATgetType(e_19) == AT_LIST) && !(ATisEmpty(e_19))))
                {
                  n_2 = ATgetFirst((ATermList) e_19);
                  {
                    ATerm f_19 = (ATerm) ATgetNext((ATermList) e_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = g_18;
        {
          ATerm g_19 = t;
          int h_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
              ATerm s_3 (ATerm t)
              {
                ATerm c_20 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    c_20 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = c_20;
                return(t);
              }
              t = _2_0(s_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  z_19 = ATgetArgument(t, 0);
                  a_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(z_19, a_20);
              b_20 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, b_20);
              ;
              LocalPopChoice(h_19);
            }
          else
            {
              t = g_19;
              {
                ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
                ATerm t_3 (ATerm t)
                {
                  ATerm g_20 = NULL;
                  g_20 = t;
                  t = SSL_is_string(g_20);
                  return(t);
                }
                t = _2_0(t_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    d_20 = ATgetArgument(t, 0);
                    e_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(d_20, e_20);
                f_20 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_20);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  ATerm i_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL;
      k_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_20, term_l_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = i_19;
      {
        ATerm u_3 (ATerm t)
        {
          t = term_o_19;
          return(t);
        }
        t = debug_1_0(u_3, t);
        _fail(t);
      }
    }
  h_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(j_20);
  i_20 = t;
  t = h_20;
  t = fclose_0_0(t);
  t = i_20;
  return(t);
}
ATerm split_2_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
  m_20 = t;
  t = b_85(t);
  n_20 = t;
  t = m_20;
  t = c_85(t);
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_20, o_20);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL;
  p_20 = t;
  {
    ATerm v_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              q_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(v_3, t);
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = v_19;
        t = term_y_19;
        q_20 = t;
      }
    t = p_20;
    {
      ATerm w_3 (ATerm t)
      {
        t = not_null(q_20);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, w_3, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm s_20 = NULL;
    s_20 = t;
    if(match_string(t, "-k"))
      {
        t = s_20;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = s_20;
      }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    ATerm t_20 = NULL,u_20 = NULL;
    t_20 = t;
    t = SSL_string_to_int(t_20);
    u_20 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), u_20);
    t = t_20;
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_l_20;
    return(t);
  }
  t = ArgOption_3_0(x_3, f_4, g_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_4 (ATerm t)
      {
        ATerm w_20 = NULL;
        w_20 = t;
        if(match_string(t, "-S"))
          {
            t = w_20;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = w_20;
          }
        return(t);
      }
      ATerm j_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_c_21;
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_d_21;
        return(t);
      }
      t = Option_3_0(i_4, j_4, k_4, t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = r_20;
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm m_4 (ATerm t)
            {
              ATerm x_20 = NULL,y_20 = NULL;
              x_20 = t;
              t = SSL_string_to_int(x_20);
              y_20 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_20);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, x_20);
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              t = term_l_21;
              return(t);
            }
            t = ArgOption_3_0(l_4, m_4, n_4, t);
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            {
              ATerm o_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm p_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_n_21;
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_r_21;
                return(t);
              }
              t = Option_3_0(o_4, p_4, q_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm s_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = s_21;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm a_21 = NULL;
    a_21 = t;
    if(match_string(t, "-o"))
      {
        t = a_21;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = a_21;
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    ATerm b_21 = NULL;
    b_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), b_21);
    t = (ATerm) ATmakeAppl(sym_Output_1, b_21);
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_w_21;
    return(t);
  }
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm x_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm c_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_f_22;
          return(t);
        }
        ATerm d_5 (ATerm t)
        {
          t = term_g_22;
          return(t);
        }
        t = Option_3_0(x_4, c_5, d_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  e_21 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = e_21;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm m_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_21 = ATgetFirst((ATermList) t);
          g_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_21 = ATgetFirst((ATermList) t);
          i_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_21;
      t = h_0(t);
      t = h_21;
      t = j_0(t);
      m_21 = t;
      t = (ATerm) ATinsert(CheckATermList(i_21), m_21);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm o_21 = NULL;
    o_21 = t;
    if(match_string(t, "-i"))
      {
        t = o_21;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = o_21;
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    ATerm p_21 = NULL;
    p_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), p_21);
    t = (ATerm) ATmakeAppl(sym_Input_1, p_21);
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_h_22;
    return(t);
  }
  t = ArgOption_3_0(g_5, h_5, i_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm k_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = k_22;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_7;
  t = whoami_0_0(t);
  q_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), q_21));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_22;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm q_92 (ATerm), ATerm r_92 (ATerm), ATerm t)
{
  ATerm s_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_92(t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = s_22;
      {
        ATerm t_21 = NULL,u_21 = NULL,x_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_21 = ATgetFirst((ATermList) t);
            u_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_21;
        t = foldr_2_0(q_92, r_92, t);
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_21, x_21);
        t = r_92(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  y_21 = t;
  t = SSL_explode_term(y_21);
  if(match_cons(t, sym__2))
    {
      ATerm w_22 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_21;
  t = foldr_2_0(o_90, p_90, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_22 = NULL;
  t = times_0_0(t);
  {
    ATerm j_5 (ATerm t)
    {
      t = term_z_20;
      return(t);
    }
    ATerm k_5 (ATerm t)
    {
      ATerm b_22 = NULL,c_22 = NULL;
      if(match_cons(t, sym__2))
        {
          b_22 = ATgetArgument(t, 0);
          c_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(b_22, c_22);
            ;
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            t = SSL_addr(b_22, c_22);
          }
      }
      return(t);
    }
    t = crush_2_0(j_5, k_5, t);
    a_22 = t;
    t = SSL_TicksToSeconds(a_22);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_22;
        if((m_22 != t))
          {
            _fail(t);
          }
        t = l_22;
        ;
        LocalPopChoice(i_23);
      }
    else
      {
        t = b_23;
        t = l_22;
        {
          ATerm j_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_22, n_22);
              ;
              LocalPopChoice(p_23);
            }
          else
            {
              t = j_23;
              t = SSL_gtr(m_22, n_22);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_22, n_22);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm q_22 = NULL,r_22 = NULL;
    q_22 = t;
    t = term_e_17;
    t = get_config_0_0(t);
    r_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_22, term_q_23);
    t = geq_0_0(t);
    t = q_22;
    t = l_104(t);
    return(t);
  }
  t = try_1_0(l_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm t_22 = NULL,u_22 = NULL;
    t = run_time_0_0(t);
    t_22 = t;
    t = term_r_7;
    t = whoami_0_0(t);
    u_22 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), t_22), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), u_22));
    t = (ATerm) ATmakeAppl(sym__2, term_s_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_23), t_22), term_v_23), u_22));
    return(t);
  }
  t = if_verbose1_1_0(n_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      {
        ATerm o_5 (ATerm t)
        {
          ATerm e_24 = t;
          int f_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(f_24);
            }
          else
            {
              t = e_24;
              {
                ATerm g_24 = t;
                int h_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(h_24);
                  }
                else
                  {
                    t = g_24;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(o_5, t);
      }
    }
  t = i_107(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_22 = ATgetFirst((ATermList) t);
      y_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_23 = NULL,d_23 = NULL;
        t = y_22;
        t = g_0(t);
        c_23 = t;
        t = x_22;
        t = e_0(t);
        d_23 = t;
        t = y_22;
        {
          ATerm q_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_23), d_23);
            return(t);
          }
          t = reverse_acc_2_0(e_0, q_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_7;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, u_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  h_23 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_23);
  e_23 = t;
  t = f_23;
  t = q_79(t);
  g_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, g_23), e_23);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = j_24;
      {
        ATerm v_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(v_5, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_o_24;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm w_5 (ATerm t)
    {
      ATerm k_23 = NULL;
      k_23 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, k_23), term_q_24);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(w_5, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  o_23 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      m_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_23);
  l_23 = t;
  t = m_23;
  t = r_79(t);
  n_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, n_23), l_23);
  return(t);
}
ATerm fetch_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm r_23 (ATerm t)
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_88, _id, t);
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = Cons_2_0(_id, r_23, t);
      }
    return(t);
  }
  t = r_23(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm i_108 (ATerm), ATerm t)
{
  t = fetch_1_0(i_108, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  {
    ATerm u_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_23;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_25 = ATgetFirst((ATermList) t);
                ATerm b_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_23;
          }
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = u_24;
        t = (ATerm) ATinsert(ATempty, t_23);
      }
    u_23 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), u_23);
    t = t_23;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_22;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_84(t);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm c_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_l_25;
        return(t);
      }
      ATerm d_6 (ATerm t)
      {
        t = term_n_25;
        return(t);
      }
      t = Option_3_0(x_5, c_6, d_6, t);
      ;
      LocalPopChoice(i_25);
    }
  else
    {
      t = e_25;
      {
        ATerm e_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_o_25;
          return(t);
        }
        ATerm g_6 (ATerm t)
        {
          t = term_r_25;
          return(t);
        }
        t = Option_3_0(e_6, f_6, g_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  if(match_cons(t, sym__3))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
      c_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_24, b_24);
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_25 = ATgetArgument(t, 0);
            ATerm v_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_24, b_24);
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        t = (ATerm) ATempty;
      }
    d_24 = t;
    t = SSL_table_put(a_24, b_24, (ATerm) ATinsert(CheckATermList(d_24), c_24));
    t = (ATerm) ATmakeAppl(sym__3, a_24, b_24, c_24);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm i_24 = NULL;
  t = term_r_7;
  t = n_109(t);
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_25, term_x_25, i_24);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = k_24;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm p_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_24 = ATgetFirst((ATermList) t);
          m_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_24;
      t = a_0(t);
      t = term_r_7;
      t = c_0(t);
      p_24 = t;
      t = (ATerm) ATinsert(CheckATermList(m_24), p_24);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm r_24 = NULL;
    r_24 = t;
    if(match_string(t, "--help"))
      {
        t = r_24;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = r_24;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = r_24;
          }
      }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_y_25;
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = term_z_25;
    return(t);
  }
  t = Option_3_0(h_6, i_6, j_6, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_109 (ATerm), ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  {
    ATerm p_6 (ATerm t)
    {
      t = term_a_26;
      t = l_109(t);
      return(t);
    }
    t = try_1_0(p_6, t);
    t = v_24;
    {
      ATerm q_6 (ATerm t)
      {
        ATerm w_24 = NULL;
        w_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_24);
        t = (ATerm) ATmakeAppl(sym_Program_1, w_24);
        return(t);
      }
      ATerm r_6 (ATerm t)
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_26 = t;
            int e_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_26);
              }
            else
              {
                t = d_26;
                t = l_109(t);
                t = Cons_2_0(_id, r_6, t);
              }
            ;
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
            {
              ATerm y_24 = NULL,z_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_24 = ATgetFirst((ATermList) t);
                  z_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_24), (ATerm) ATmakeAppl(sym_Undefined_1, y_24));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_6, r_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
  f_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = f_25;
  {
    ATerm s_6 (ATerm t)
    {
      ATerm f_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_109(t);
          ;
          LocalPopChoice(g_26);
        }
      else
        {
          t = f_26;
          {
            ATerm h_26 = t;
            int i_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(i_26);
              }
            else
              {
                t = h_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_6, t);
    {
      ATerm t_6 (ATerm t)
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_25 = NULL;
            m_25 = t;
            {
              ATerm l_26 = t;
              int m_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_25;
                  {
                    ATerm n_26 = t;
                    int o_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_z_23;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(o_26);
                      }
                    else
                      {
                        t = n_26;
                        {
                          ATerm v_6 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(v_6, t);
                        }
                      }
                    t = m_25;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(m_26);
                }
              else
                {
                  t = l_26;
                  t = term_k_25;
                  t = get_config_0_0(t);
                  t = m_25;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            {
              ATerm w_6 (ATerm t)
              {
                ATerm x_6 (ATerm t)
                {
                  g_25 = t;
                  return(t);
                }
                t = Undefined_1_0(x_6, t);
                return(t);
              }
              t = option_defined_1_0(w_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_25)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_s_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_25)), term_p_26));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(t_6, t);
      h_25 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = h_25;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t)
{
  ATerm d_7 = NULL;
  t = parse_options_1_0(k_107, t);
  d_7 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), d_7);
  t = d_7;
  t = m_107(t);
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_107, t);
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
              t = n_107(t);
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
ATerm iowrap_4_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_107(t);
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
  ATerm z_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(z_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(y_6, b_107, c_107, z_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm b_7 (ATerm t)
    {
      ATerm p_25 = NULL,q_25 = NULL;
      p_25 = t;
      t = term_p_22;
      t = get_config_0_0(t);
      q_25 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, q_25));
      t = p_25;
      return(t);
    }
    t = if_verbose2_1_0(b_7, t);
    return(t);
  }
  t = iowrap_4_0(t_106, u_106, v_106, a_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t)
{
  t = iowrap_3_0(r_106, s_106, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm o_106 (ATerm), ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    t = _2_0(_id, o_106, t);
    return(t);
  }
  t = iowrap_2_0(c_7, _fail, t);
  return(t);
}
ATerm dead_def_elim_io_0_0 (ATerm t)
{
  ATerm f_7 (ATerm t)
  {
    ATerm g_7 (ATerm t)
    {
      ATerm h_7 (ATerm t)
      {
        ATerm i_7 (ATerm t)
        {
          ATerm k_7 (ATerm t)
          {
            t = dead_def_elim_0_0(t);
            t = map_1_0(local_dead_def_elim_0_0, t);
            return(t);
          }
          t = Strategies_1_0(k_7, t);
          return(t);
        }
        ATerm j_7 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(i_7, j_7, t);
        return(t);
      }
      t = Cons_2_0(_id, h_7, t);
      return(t);
    }
    t = Specification_1_0(g_7, t);
    return(t);
  }
  t = iowrap_1_0(f_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = dead_def_elim_io_0_0(t);
  return(t);
}
